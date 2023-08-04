use halld::LinkerConfig;
use object::{
    write::{self, SectionId, StandardSegment},
    Architecture, BinaryFormat, Endianness, SectionKind,
};
use std::{
    collections::HashMap,
    fs::File,
    io::{BufReader, BufWriter},
    path::{Component, Path},
};

use anyhow::{anyhow, Context, Result};

mod chdr;
mod mkdep;
mod pass1;
mod pass2;

#[derive(Debug, Copy, Clone, PartialEq, Eq)]
struct Sym {
    addr: u32,
    file: usize,
}

type SymMap = HashMap<String, Sym>;
type CDefs = Vec<(String, u16)>;

pub(crate) fn run(opts: crate::RunOpt) -> Result<()> {
    let crate::RunOpt {
        config,
        search,
        output,
        header,
        mdep,
        cache,
    } = opts;

    let rdr = BufReader::new(
        File::open(&config)
            .with_context(|| format!("couldn't open config script at <{}>", config.display()))?,
    );

    let LinkerConfig {
        mut settings,
        script,
    } = serde_json::from_reader(rdr).context("parsing config JSON")?;

    let config_output = settings.as_mut().and_then(|s| s.output.take());
    let config_cache = settings.as_mut().and_then(|s| s.cache.take());
    let config_search = settings.and_then(|s| s.search_dirs);

    let output = output
        .or(config_output)
        .ok_or_else(|| anyhow!("no output location from JSON or from CLI"))?;

    let cache = cache.or(config_cache);

    let search_dirs = match (search, config_search) {
        (Some(s), None) | (None, Some(s)) => Some(s),
        (Some(mut a), Some(b)) => {
            a.extend(b);
            Some(a)
        }
        (None, None) => None,
    };

    let p1 = pass1::Pass1::run(script, search_dirs).context("linker pass 1")?;
    let p2 = pass2::Pass2::run(p1, cache)?;

    if let Some(file) = header {
        let mut wtr = BufWriter::new(File::create(file).context("creating c header file")?);
        chdr::write_c_header(&mut wtr, &output, &p2.c_header)
            .context("writing defines to c header")?;
    }
    if let Some(p) = mdep {
        let mut wtr = BufWriter::new(File::create(p).context("creating make dependencies file")?);
        mkdep::write_make_dep(&mut wtr, &output, &config, &p2.inputs)
            .context("writing dependencies to makefile")?;
    }

    let obj = create_object(p2);
    let wtr = BufWriter::new(File::create(output).context("making output file")?);
    obj.write_stream(wtr).expect("writing output object file");

    Ok(())
}

fn is_object(p: impl AsRef<Path>) -> bool {
    // todo: replace with something that checks for relocatable object?
    p.as_ref().extension().map_or(false, |ex| ex == "o")
}

fn create_object(p2: pass2::Pass2) -> write::Object<'static> {
    let mut obj = write::Object::new(BinaryFormat::Elf, Architecture::Mips, Endianness::Big);

    // set mips2
    const EF_MIPS_ARCH_MIPS2: u32 = 1 << 28;
    obj.flags = object::FileFlags::Elf {
        e_flags: EF_MIPS_ARCH_MIPS2,
    };

    let data_seg = obj.segment_name(StandardSegment::Data);
    let pass2::Pass2 {
        table,
        data,
        symbols,
        ..
    } = p2;
    let tsec = obj.add_section(data_seg.to_vec(), b".filetable".to_vec(), SectionKind::Data);
    let fsec = obj.add_section(data_seg.to_vec(), b".files".to_vec(), SectionKind::Data);

    obj.set_section_data(tsec, table, 4);
    obj.set_section_data(fsec, data, 4);

    let create_symbol = |info| create_symbol(fsec, info);

    for symbol in symbols.into_iter().map(create_symbol) {
        obj.add_symbol(symbol);
    }

    obj
}

fn create_symbol(sec: SectionId, (name, sym): (String, Sym)) -> write::Symbol {
    write::Symbol {
        name: name.into_bytes(),
        value: sym.addr as u64,
        size: 4,
        kind: object::SymbolKind::Data,
        scope: object::SymbolScope::Dynamic,
        weak: false,
        section: write::SymbolSection::Section(sec),
        flags: object::SymbolFlags::None,
    }
}

fn fmt_as_cident(p: &Path) -> String {
    fn valid_c_ident(s: &str) -> String {
        s.chars()
            .map(|c| {
                if c.is_ascii_alphanumeric() {
                    c.to_ascii_uppercase()
                } else {
                    '_'
                }
            })
            .collect()
    }

    let mut s = "RLD_FID".to_string();
    if let Some(parent) = p.parent() {
        for cmpt in parent.components() {
            s += "_";
            match cmpt {
                Component::Normal(p) => s += &valid_c_ident(&*p.to_string_lossy()),
                Component::Prefix(_)
                | Component::RootDir
                | Component::CurDir
                | Component::ParentDir => (),
            }
        }
    }

    if let Some(stem) = p.file_stem() {
        s += "_";
        s += &valid_c_ident(&*stem.to_string_lossy());
    }

    s
}
