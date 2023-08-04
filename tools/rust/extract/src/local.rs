use anyhow::{anyhow, Error};
use std::{
    collections::BTreeSet,
    fs::{File, OpenOptions},
    io::{self, BufRead, BufReader, BufWriter, Write},
    path::{Path, PathBuf},
};

/*
 Version History
 0:     Initial working release
 1:     Add resource table JSON extraction
        Pad sprite frames number based on total number of frames
*/
const CURRENT_VERSION: u16 = 2;
const VERSION_KEY: &str = "Version:";

#[derive(Debug)]
pub(super) struct LocalAssets {
    pub version: u16,
    pub list: BTreeSet<Box<Path>>,
}

impl LocalAssets {
    pub fn out_of_date(&self) -> bool {
        self.version != CURRENT_VERSION
    }

    fn from_file(mut f: BufReader<File>) -> Result<Self, Error> {
        use AssetLine::*;

        let mut version = 0; // todo: enum?
        let mut list = BTreeSet::new();
        let mut buf = String::new();
        loop {
            buf.clear();
            match f.read_line(&mut buf) {
                Ok(0) => break, //EOF
                Err(e) => return Err(e.into()),
                Ok(_n) => match parse_line(buf.trim())? {
                    Comment | Empty => (),
                    Version(ver) => version = ver,
                    Asset(path) => {
                        list.insert(path);
                    }
                },
            }
        }

        Ok(Self { version, list })
    }
    /// Parse the file at `p`. If `p` does not exist, return `None`
    pub fn from_path(p: &Path) -> Result<Option<Self>, Error> {
        OpenOptions::new()
            .read(true)
            .open(p)
            .map(BufReader::new)
            .map(Some)
            .or_else(|e| match e.kind() {
                io::ErrorKind::NotFound => Ok(None),
                _ => Err(e.into()),
            })
            .and_then(|f| f.map(Self::from_file).transpose())
    }

    pub fn update_version(self, updated: Vec<Box<Path>>) -> Self {
        let Self { mut list, .. } = self;
        list.extend(updated);

        Self {
            version: CURRENT_VERSION,
            list,
        }
    }

    fn serialize(&self, mut wtr: BufWriter<File>) -> io::Result<()> {
        writeln!(wtr, "# Auto-generated list of extracted assets")?;
        writeln!(wtr, "{} {}", VERSION_KEY, self.version)?;

        for asset in &self.list {
            writeln!(wtr, "{}", asset.display())?;
        }

        Ok(())
    }

    pub fn write_to_path(&self, p: &Path) -> io::Result<()> {
        let f = OpenOptions::new()
            .write(true)
            .create(true)
            .truncate(true)
            .open(p)?;
        let wtr = BufWriter::new(f);

        self.serialize(wtr)
    }
}

impl From<Vec<Box<Path>>> for LocalAssets {
    fn from(v: Vec<Box<Path>>) -> Self {
        Self {
            version: CURRENT_VERSION,
            list: v.into_iter().collect(),
        }
    }
}

enum AssetLine {
    Empty,
    Comment,
    Version(u16),
    Asset(Box<Path>),
}

fn parse_line(s: &str) -> Result<AssetLine, Error> {
    if s.is_empty() {
        return Ok(AssetLine::Empty);
    }
    if s.starts_with('#') {
        return Ok(AssetLine::Comment);
    }

    if s.starts_with(VERSION_KEY) {
        return s
            .split_whitespace()
            .nth(1)
            .ok_or_else(|| anyhow!("no version in version field"))
            .and_then(|sub| sub.parse().map(AssetLine::Version).map_err(Into::into));
    }

    Ok(AssetLine::Asset(PathBuf::from(s).into_boxed_path()))
}
