use std::{fs, path::PathBuf};

use crate::link::{self, CDefs, Sym, SymMap};
use halld::LinkerScript;

use anyhow::{bail, Context, Result};
use object::{read, Object, ObjectSymbol, SymbolKind, SymbolSection};

#[derive(Debug)]
pub(super) struct Pass1 {
    pub(super) script: LinkerScript,
    pub(super) sym_map: SymMap,
    pub(super) c_header: CDefs,
}

impl Pass1 {
    pub(super) fn run(mut script: LinkerScript, search_dirs: Option<Vec<PathBuf>>) -> Result<Self> {
        let search = search_dirs.as_deref();

        if script.len() > u16::MAX as usize {
            bail!(
                "More than u16::MAX total files: {} > {}",
                script.len(),
                u16::MAX
            );
        }

        let mut sym_map = SymMap::with_capacity(script.len());
        let mut c_header = Vec::with_capacity(script.len());
        let mut sym_clash = None;
        for (i, entry) in script.iter_mut().enumerate() {
            // use the original name for creating c defines
            let idx = i as u16;
            let def = (link::fmt_as_cident(&entry.file), idx);
            c_header.push(def);
            // what to do about the same named files...?
            locate_file(&mut entry.file, search).context("locating files to link")?;

            if link::is_object(&entry.file) {
                let file = fs::read(&entry.file)?;
                let obj = read::File::parse(&*file)?;
                for sym in obj.symbols() {
                    //println!("{:#?}", sym);
                    // todo: check that the symbol is in the data section
                    if sym.kind() == SymbolKind::Unknown
                        && sym.is_global()
                        && sym.section() != SymbolSection::Undefined
                    {
                        let name = sym.name()?.to_string();
                        let addr = sym.address() as u32;
                        sym_clash = sym_map
                            .insert(name, Sym { addr, file: i })
                            .map(|old| (sym.name().unwrap().to_string(), old, i));
                    } else {
                        //println!("unneeded symbol? {:#?}", sym);
                    }
                }
            } else if let Some(syms) = entry.exports.as_ref() {
                for (name, addr) in syms.iter() {
                    let sym = Sym {
                        addr: *addr,
                        file: i,
                    };
                    sym_clash = sym_map
                        .insert(name.clone(), sym)
                        .map(|old| (name.clone(), old, i));
                }
            }

            if sym_clash.is_some() {
                break;
            }
        }

        if let Some((name, sym, next)) = sym_clash {
            bail!(
                "Symbol < {} > already definied in file < {} > and redefined in < {} >",
                name,
                script[sym.file].file.display(),
                script[next].file.display()
            );
        }

        Ok(Self {
            script,
            sym_map,
            c_header,
        })
    }
}

fn locate_file(file: &mut PathBuf, search_dirs: Option<&[PathBuf]>) -> Result<()> {
    if fs::metadata(&file).map_or(false, |m| m.is_file()) {
        return Ok(());
    }

    let new_file = search_dirs.and_then(|stems| {
        stems
            .iter()
            .map(|s| s.join(file.as_path()))
            .find(|f| fs::metadata(&f).map_or(false, |m| m.is_file()))
    });

    if let Some(new_file) = new_file {
        *file = new_file;
    } else {
        bail!(
            "Couldn't locate < {} > in current working directory or search dirs < {:?} >",
            file.display(),
            search_dirs
        );
    }

    Ok(())
}
