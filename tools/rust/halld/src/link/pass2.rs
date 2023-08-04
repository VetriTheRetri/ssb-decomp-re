use crate::{
    cache::DataCache,
    link::{self, pass1::Pass1, CDefs, SymMap},
};

use std::{
    fs,
    path::{Path, PathBuf},
};

use anyhow::{anyhow, bail, Context, Result};
use halld::{InputFile, VpkSettings};
use object::{read, Object, ObjectSection, ObjectSymbol, RelocationTarget};
use rayon::prelude::*;
use vpk0::{format::VpkMethod, Encoder};

#[derive(Debug)]
pub(super) struct Pass2 {
    pub(super) table: Vec<u8>,
    pub(super) data: Vec<u8>,
    pub(super) c_header: CDefs,
    pub(super) symbols: SymMap,
    pub(super) inputs: Vec<PathBuf>,
}

impl Pass2 {
    pub(super) fn run(pass1: Pass1, cache: Option<PathBuf>) -> Result<Self> {
        let Pass1 {
            script,
            sym_map,
            c_header,
        } = pass1;

        let mut output = Vec::with_capacity(0x0100_0000);
        let mut table = Vec::with_capacity((script.len() + 1) * 12);
        let mut inputs = Vec::with_capacity(script.len());
        let vpk_cache = cache
            .map(DataCache::new)
            .transpose()
            .context("creating vpk compressiong cache")?;

        // This could maybe be done in one pass with a custom IndexedParellelIterator...?
        let processed = script
            .into_par_iter()
            .map(|entry| process_linked_file(entry, &sym_map, vpk_cache.as_ref()))
            .collect::<Result<Vec<_>>>()
            .context("reading and compressing file data in pass2")?;

        for (_i, res) in processed.into_iter().enumerate() {
            let ProcessedFile {
                path,
                data,
                basic,
                externs,
            } = res;

            let offset = output.len() as u32;
            let info = FileInfo::from((offset, basic));

            //println!("{}\t{:x?}", i, info);
            add_file_data(&mut output, &data);
            if let Some(ex) = externs.as_deref() {
                add_externs(&mut output, ex);
            }
            add_file_info(&mut table, info).context("writing file info to file table")?;
            inputs.push(path);
        }

        terminate_table(&mut table, output.len()).context("terminating resource table")?;

        Ok(Self {
            table,
            data: output,
            c_header,
            symbols: sym_map,
            inputs,
        })
    }
}

#[derive(Debug, Copy, Clone)]
struct FileInfo {
    offset: u32,
    size: u32,
    rom_size: u32,
    compressed: bool,
    inreloc: Option<u32>,
    exreloc: Option<u32>,
}

impl From<(u32, BasicFileInfo)> for FileInfo {
    fn from((offset, basic): (u32, BasicFileInfo)) -> Self {
        Self {
            offset,
            size: basic.size,
            rom_size: basic.rom_size,
            compressed: basic.compressed,
            inreloc: basic.inreloc,
            exreloc: basic.exreloc,
        }
    }
}

struct ProcessedFile {
    path: PathBuf,
    data: Vec<u8>,
    basic: BasicFileInfo,
    externs: Option<Vec<u16>>,
}

/// `FileInfo` without the offset (not yet known)
struct BasicFileInfo {
    size: u32,
    rom_size: u32,
    compressed: bool,
    inreloc: Option<u32>,
    exreloc: Option<u32>,
}

fn process_linked_file(
    entry: InputFile,
    syms: &SymMap,
    cache: Option<&DataCache>,
) -> Result<ProcessedFile> {
    let InputFile {
        file,
        compressed,
        comp_settings,
        inreloc,
        exreloc,
        imports,
        ..
    } = entry;

    //println!("processing <{}>", file.display());

    let (mut data, externs, inreloc, exreloc) = if link::is_object(&file) {
        relocate_obj(&file, syms).with_context(|| format!("relocating < {} >", file.display()))?
    } else {
        let data =
            fs::read(&file).with_context(|| format!("reading < {} > in pass 2", file.display()))?;

        (data, imports, inreloc, exreloc)
    };

    // zero align raw data to word (4byte) size
    align_buffer(&mut data);
    let size = u32::try_from(data.len())?;

    let (data, rom_size) = if compressed {
        // store only the compressed vpk0 bytes in the cache
        // add excess and padding after
        let mut d = if let Some(cached_data) = cache.and_then(|c| c.read(&data)) {
            //println!("found in cache: {}", file.display());
            cached_data
        } else {
            let settings = comp_settings.as_ref();
            let compressed = compress_data(&data, settings)
                .with_context(|| format!("compressing <{}>", file.display()))?;

            if let Some(c) = cache {
                c.write(&data, &compressed)
                    .with_context(|| format!("caching compressed data for <{}>", file.display()))?;
            }
            compressed
        };

        if let Some(excess) = comp_settings.as_ref().and_then(|s| s.excess.as_deref()) {
            d.extend_from_slice(excess);
        }
        align_buffer(&mut d);

        let size = u32::try_from(d.len())?;
        (d, size)
    } else {
        (data, size)
    };

    let basic = BasicFileInfo {
        size,
        rom_size,
        compressed,
        inreloc,
        exreloc,
    };

    Ok(ProcessedFile {
        data,
        basic,
        externs,
        path: file,
    })
}

type RelInfo = (Vec<u8>, Option<Vec<u16>>, Option<u32>, Option<u32>);

/// Right now, this only extracts and relocates data from the .data section of an object
fn relocate_obj(p: &Path, sym_map: &SymMap) -> Result<RelInfo> {
    let file = fs::read(p).context("opening object for relocation")?;
    let obj = read::File::parse(&*file).context("parsing object for relocation")?;
    let data_sec = obj
        .section_by_name(".data")
        .ok_or_else(|| anyhow!("missing .data section"))?;

    // might be able to make this a Cow
    let mut data = data_sec.data().context("reading .data binary")?.to_vec();
    let mut externs = Vec::new();

    // separate internal and external relocations
    let mut internal_relocs = Vec::with_capacity(16);
    let mut external_relocs = Vec::with_capacity(16);
    for (loc, reloc) in data_sec.relocations() {
        let loc = loc as usize;
        if reloc.size() != 32 {
            bail!("can only relocate 32bit pointers; {:?}", reloc);
        }
        let sym_name = match reloc.target() {
            RelocationTarget::Symbol(idx) => obj.symbol_by_index(idx)?.name()?,
            unk => bail!("unsupported relocation target: {:#?}", unk),
        };

        if sym_name == ".data" {
            // internal relocation? gas seems to set the symbol to the section name
            let val = &data[loc..loc + 4];
            let r = (loc, u32::from_be_bytes(val.try_into()?));
            internal_relocs.push(r);
        } else {
            let sym = sym_map.get(sym_name).ok_or_else(|| {
                anyhow!(
                    "couldn't find external symbol <{}> for relocation",
                    sym_name
                )
            })?;
            let val = sym.addr;
            external_relocs.push((loc, val));
            externs.push(sym.file as u16);
        }
    }

    // apply relocations for each
    relocate(&mut data, &internal_relocs)
        .with_context(|| format!("internal relocations in {}", p.display()))?;
    relocate(&mut data, &internal_relocs)
        .with_context(|| format!("external relocations in {}", p.display()))?;

    // return external file ids if there were any
    let externs = if externs.is_empty() {
        None
    } else {
        Some(externs)
    };

    let inreloc = internal_relocs.first().map(|(l, _)| *l as u32);
    let exreloc = external_relocs.first().map(|(l, _)| *l as u32);

    Ok((data, externs, inreloc, exreloc))
}

fn relocate(buf: &mut Vec<u8>, relocations: &[(usize, u32)]) -> Result<()> {
    let mut iter = relocations.iter().copied().peekable();

    while let Some(reloc) = iter.next() {
        let next = iter.peek().map(|(l, _)| *l as u32);
        apply_relocation(buf, reloc, next).context("applying relocation")?;
    }

    Ok(())
}

fn apply_relocation(buf: &mut Vec<u8>, (loc, val): (usize, u32), next: Option<u32>) -> Result<()> {
    let ptr = buf
        .get_mut(loc..loc + 4)
        .ok_or_else(|| anyhow!("{}-{} was outside of buffer", loc, loc + 4))?;

    let next = opt_shorten(next).context("reducing the pointer to the next relocation")?;
    let val = shorten(val).context("reducing relocation value")?;

    let reloc = (next as u32) << 16 | (val as u32);

    ptr.copy_from_slice(&reloc.to_be_bytes());

    Ok(())
}

fn compress_data(original: &[u8], settings: Option<&VpkSettings>) -> Result<Vec<u8>> {
    let method = settings
        .and_then(|s| s.method)
        .map(|m| match m {
            0 => VpkMethod::OneSample,
            1 => VpkMethod::TwoSample,
            _ => panic!("Unknown method {}", m),
        })
        .unwrap_or(VpkMethod::OneSample);

    Encoder::for_bytes(original)
        .method(method)
        .optional_offsets(settings.and_then(|s| s.offsets.as_deref()))
        .optional_lengths(settings.and_then(|s| s.lengths.as_deref()))
        .encode_to_vec()
        .map_err(Into::into)
}

fn add_file_data(v: &mut Vec<u8>, data: &[u8]) {
    v.extend_from_slice(data);
    // does not have to hold 4 byte alignment
    // only the file's size is four byte aligned
    // align_buffer(v);
}

fn add_externs(v: &mut Vec<u8>, externs: &[u16]) {
    let be_iter = externs.iter().copied().flat_map(u16::to_be_bytes);
    v.extend(be_iter);
    // does not have to hold 4 byte alignment
    // align_buffer(v);
}

fn align_buffer(v: &mut Vec<u8>) {
    const ALIGNMENT: usize = 4;

    while v.len() % ALIGNMENT != 0 {
        v.push(0);
    }
}

fn add_file_info(table: &mut Vec<u8>, info: FileInfo) -> Result<()> {
    let FileInfo {
        offset,
        size,
        rom_size,
        compressed,
        inreloc,
        exreloc,
    } = info;
    let offset = offset | (compressed as u32) << 31;
    let size = shorten(size).context("size")?;
    let comp_size = shorten(rom_size).context("rom size")?;
    let inreloc = opt_shorten(inreloc).context("interal relocations start")?;
    let exreloc = opt_shorten(exreloc).context("exteral relocations start")?;

    // entry size is 12 bytes
    let entry = offset
        .to_be_bytes()
        .into_iter()
        .chain(inreloc.to_be_bytes())
        .chain(comp_size.to_be_bytes())
        .chain(exreloc.to_be_bytes())
        .chain(size.to_be_bytes());

    table.extend(entry);

    Ok(())
}

fn terminate_table(table: &mut Vec<u8>, end: usize) -> Result<()> {
    const NULL_ENTRY: &[u8] = &[0; 8];
    let end = u32::try_from(end)?;
    table.extend_from_slice(&end.to_be_bytes());
    table.extend_from_slice(NULL_ENTRY);

    Ok(())
}

/// Reduce a u32 (like an N64 o32 pointer) to a 16bit word offset
fn shorten(x: u32) -> Result<u16> {
    if x % 4 != 0 {
        Err(anyhow!("{} was not in word (four byte) alignment ", x))
    } else {
        u16::try_from(x / 4).with_context(|| format!("{} / 4 = {} is too large for u16", x, x / 4))
    }
}

/// Reduce a u32 nullable value to either x/4 or 0xFFFF
fn opt_shorten(x: Option<u32>) -> Result<u16> {
    x.map_or(Ok(0xFFFF), shorten)
}
