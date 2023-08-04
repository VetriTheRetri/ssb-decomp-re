use anyhow::{Context, Result};
use serde::Deserialize;
use std::path::PathBuf;

mod header;
mod linkerscript;

#[derive(Debug, Clone, PartialEq, Eq, Deserialize)]
struct Segment {
    /// name of the segment
    name: String,
    /// how to set the vaddr of this segment
    load: LoadKind,
    /// list of input objs/libs in this segment
    files: Vec<Command>,
    /// is this a special segment for the N64?
    special: Option<SpecialSegment>,
}

#[derive(Debug, Clone, PartialEq, Eq, Deserialize)]
struct Command {
    source: ObjKind,
    sections: Vec<Section>,
}

#[derive(Debug, Clone, PartialEq, Eq, Deserialize)]
enum ObjKind {
    #[serde(rename = "O")]
    Obj(PathBuf),
    #[serde(rename = "A")]
    Lib { lib: String, objs: Vec<PathBuf> },
}

#[derive(Debug, Clone, PartialEq, Eq, Deserialize)]
enum LoadKind {
    Absolute(u64),
    Overlay(String),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Deserialize)]
enum Section {
    Text,
    Data,
    Rodata,
    BSS,
    Filetable,
    Files,
    Header,
}

impl Section {
    const TOTAL: usize = 6;

    fn as_str(&self) -> &'static str {
        match self {
            Self::Text => ".text",
            Self::Data => ".data",
            Self::Rodata => ".rodata",
            Self::BSS => ".bss",
            Self::Filetable => ".filetable",
            Self::Files => ".files",
            Self::Header => ".header",
        }
    }

    fn is_noload(&self) -> bool {
        match self {
            Self::BSS => true,
            _ => false,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Deserialize)]
enum SpecialSegment {
    Boot,
    System,
    Dynamic,
}

pub fn specfile(input: PathBuf, ldscript: PathBuf, header: PathBuf) -> Result<()> {
    let segments: Vec<Segment> = serde_dhall::from_file(&input)
        .parse()
        .context("parsing dhall spec file")?;

    linkerscript::write_ldscript(&segments, &ldscript)?;
    header::write_c_header(&segments, &header)?;

    Ok(())
}
