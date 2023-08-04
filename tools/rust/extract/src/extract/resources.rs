use crate::config::{ResTable, Resources};
use crate::extract::{ExtractContext, ExtractTask, ToExtract};
use anyhow::{anyhow, Context, Result};
use halld::{InputFile, VpkSettings};
use std::{borrow::Cow, convert::TryInto, fs, io::Cursor, iter, ops::Range, path::Path};

pub(super) fn todo<'a>(
    res: &'a Resources,
    ctx: ExtractContext<'a>,
) -> Option<impl Iterator<Item = ToExtract<'a>>> {
    let get_table_files = |tbl| gen_extract_files(&res.output_dir, ctx, tbl);

    res.tables[ctx.version].as_ref().map(|tbl| {
        let table_list = gen_resource_script_iter(tbl, &res.output_dir, ctx);

        iter::once(table_list).chain(get_table_files(tbl))
    })
}

pub(super) fn extract(out: &Path, task: ExtractTask) -> Result<()> {
    use ExtractTask::{ResourceRaw, ResourceTable};

    match task {
        ResourceTable(entries) => write_resource_table_json(out, entries),
        ResourceRaw(file) => write_raw_rld_file(out, file),
        _ => Err(anyhow!("Not a resource extraction: {:?}", task)),
    }
    .with_context(|| format!("extracting <{}>", out.display()))
}

// Get the file name for a resource; right now mainly just for raw
// once the resources have a bit more structure, probably have
// something to get the name from a config file?
fn named_file_or_default(idx: usize, names: Option<&[String]>) -> Cow<str> {
    names
        .and_then(|n| n.get(idx))
        .map(Cow::from)
        .unwrap_or_else(|| default_resfile_name(idx).into())
}

fn default_resfile_name(n: usize) -> String {
    format!("rld-{:04}", n)
}

pub(super) struct RldRawFile<'a> {
    // raw file data; could be compressed
    pub raw_file: &'a [u8],
    pub compressed: bool,
}

// Generate Todo items for extracting the files from the resource table
// Right now, this only spits out info for a raw file
fn gen_extract_files<'a>(
    out_dir: &'a Path,
    ctx: ExtractContext<'a>,
    table: &'a ResTable,
) -> impl Iterator<Item = ToExtract<'a>> {
    let start = table.offset.start as usize;
    let end = table.offset.end as usize;
    let file_dir = out_dir.join("raw");

    ResTableIter::new(&ctx.rom, start, end)
        .enumerate()
        .map(move |(i, entry)| {
            let filename = {
                let name = named_file_or_default(i, table.entries.as_deref());
                let mut f = file_dir.join(&*name);
                f.set_extension("bin");
                f
            };

            let file = RldRawFile {
                raw_file: entry.data,
                compressed: entry.is_compressed,
            };

            ToExtract {
                out: filename.into(),
                info: ExtractTask::ResourceRaw(file),
            }
        })
}

// The boxed iterator for creating the halld JSON script file
type BoxedInputFileIter<'a> = Box<dyn Iterator<Item = Result<InputFile>> + 'a>;
pub(super) struct TableEntries<'a> {
    iter: BoxedInputFileIter<'a>,
}

fn write_raw_rld_file(out: &Path, file: RldRawFile) -> Result<()> {
    if file.compressed {
        let decompressed = vpk0::decode_bytes(file.raw_file)
            .with_context(|| format!("decompressing <{}>", out.display()))?;

        fs::write(out, &decompressed)?;
    } else {
        fs::write(out, file.raw_file)?;
    }

    Ok(())
}

// Create an Iterator that can provide the info for recreating the resource table
// right now, each entry needs all of the describing info,
// eventually this shouldn't be the case
fn gen_resource_script_iter<'a>(
    tbl: &'a ResTable,
    outdir: &Path,
    ctx: ExtractContext<'a>,
) -> ToExtract<'a> {
    let filename = "resources.json";
    let file = outdir.join(filename);

    let start = tbl.offset.start as usize;
    let end = tbl.offset.end as usize;

    let iter = ResTableIter::new(&ctx.rom, start, end)
        .enumerate()
        .map(move |x| entry_to_config_file(x, tbl));
    let iter = Box::new(iter) as BoxedInputFileIter;

    ToExtract {
        out: file.into(),
        info: ExtractTask::ResourceTable(TableEntries { iter }),
    }
}

/// output the `TableEntry`s from the passed iterator to the newly created JSON file `out`
fn write_resource_table_json(out: &Path, entries: TableEntries) -> Result<()> {
    let entries: Result<Vec<_>> = entries.iter.collect();
    let entries = entries.context("collecting resource halld script entries")?;
    let cfg = halld::LinkerConfig {
        settings: None,
        script: entries,
    };
    let wtr = fs::File::create(out).context("creating resource table json file")?;

    serde_json::to_writer_pretty(wtr, &cfg).context("writing JSON to resource table file")
}

/// Convert from an enumerated `ResTableEntry` into the file struct for `halld` config
fn entry_to_config_file((i, entry): (usize, ResTableEntry), tbl: &ResTable) -> Result<InputFile> {
    let name = named_file_or_default(i, tbl.entries.as_deref()).into_owned();
    // this needs to be its own function to get the directory correct...
    // maybe as part of named_file_or_default?
    let file = {
        let mut p = Path::new("raw").join(name);
        p.set_extension("bin");
        p
    };

    let compressed = entry.is_compressed;
    let comp_settings = if compressed {
        let (hdr, trees) = vpk0::vpk_info(Cursor::new(entry.data))
            .with_context(|| format!("reading vpk info for rld file <{}>", i))?;

        let excess = tbl
            .excess_bytes
            .as_ref()
            .and_then(|dict| dict.get(&(i as u16)))
            .cloned();

        Some(VpkSettings {
            method: Some(hdr.method as u8),
            offsets: Some(trees.offsets),
            lengths: Some(trees.lengths),
            excess,
        })
    } else {
        None
    };

    let imports = entry.externs.map(|exs| {
        exs.chunks(2)
            .map(|b| u16::from_be_bytes(b.try_into().unwrap()))
            .collect()
    });

    Ok(InputFile {
        file,
        compressed,
        comp_settings,
        inreloc: entry.inreloc,
        exreloc: entry.exreloc,
        exports: None,
        imports,
    })
}

#[derive(Debug, Copy, Clone, PartialEq, Eq)]
struct ResTableEntry<'a> {
    offset: u32,
    size: u32,
    rom_size: u32,
    is_compressed: bool,
    inreloc: Option<u32>,
    exreloc: Option<u32>,
    // be u16 values
    externs: Option<&'a [u8]>,
    // raw data in rom
    data: &'a [u8],
}

struct ResTableIter<'a> {
    table: &'a [u8],
    files: &'a [u8],
    /// offset in bytes from start of table to read next entry
    offset: usize,
    finished: bool,
}

impl<'a> ResTableIter<'a> {
    fn new(rom: &'a [u8], table_start: usize, table_end: usize) -> Self {
        Self {
            table: &rom[table_start..],
            files: &rom[table_end..],
            offset: 0,
            finished: false,
        }
    }
}

impl<'a> Iterator for ResTableIter<'a> {
    type Item = ResTableEntry<'a>;

    fn next(&mut self) -> Option<Self::Item> {
        const ENTRY_SIZE: usize = 12;

        if self.finished {
            return None;
        }

        let cur = &self.table[self.offset..self.offset + ENTRY_SIZE];
        // check for terminator entry
        if cur[4..12] == [0u8; 8] {
            self.finished = true;
            return None;
        }

        let next = self
            .table
            .get(self.offset + ENTRY_SIZE..self.offset + 2 * ENTRY_SIZE);
        let (offset, is_compressed) = {
            let o = read_be_u32(cur, 0..4);
            (o & !0x8000_0000, o & 0x8000_0000 != 0)
        };
        let inreloc = expand_checked_u16(cur, 4..6);
        let rom_size = expand_u16(cur, 6..8);
        let exreloc = expand_checked_u16(cur, 8..10);
        let size = expand_u16(cur, 10..12);

        // grab file data
        let fstart = offset as usize;
        let fend = fstart + rom_size as usize;
        let data = &self.files[fstart..fend];

        // check for any extern file ids
        let externs = next.and_then(|next| {
            let next_file_start = (read_be_u32(next, 0..4) & !0x8000_0000) as usize;

            let ex_size = next_file_start - fend;
            if ex_size != 0 {
                assert!(
                    ex_size % 2 == 0,
                    "extern file id size not u16 sized ({:#x})",
                    ex_size
                );
                Some(&self.files[fend..next_file_start])
            } else {
                None
            }
        });

        // inc to the next entry
        self.offset += ENTRY_SIZE;

        Some(Self::Item {
            offset,
            size,
            rom_size,
            is_compressed,
            inreloc,
            exreloc,
            externs,
            data,
        })
    }
}

fn read_be_u32(a: &[u8], r: Range<usize>) -> u32 {
    u32::from_be_bytes(a[r].try_into().unwrap())
}

fn read_be_u16(a: &[u8], r: Range<usize>) -> u16 {
    u16::from_be_bytes(a[r].try_into().unwrap())
}

fn expand_u16(a: &[u8], r: Range<usize>) -> u32 {
    read_be_u16(a, r) as u32 * 4
}

fn expand_checked_u16(a: &[u8], r: Range<usize>) -> Option<u32> {
    let v = read_be_u16(a, r);
    if v == 0xFFFF {
        None
    } else {
        Some(v as u32 * 4)
    }
}
