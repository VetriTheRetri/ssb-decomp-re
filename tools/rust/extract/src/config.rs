use anyhow::{anyhow, Context, Error};
use serde::Deserialize;
use std::collections::HashMap;
use std::fmt::Debug;
use std::fs;
use std::io::BufReader;
use std::ops::{Index, Range};
use std::path::{Path, PathBuf};
use std::str::FromStr;

// TODO: Check names for valid gas label (for incbin)

/// Supported ssb64 release versions for asset extraction
#[derive(Debug, Copy, Clone, Eq, PartialEq)]
pub enum Version {
    /// NALE [sha1: e2929e10fccc0aa84e5776227e798abc07cedabf]
    US,
}

impl FromStr for Version {
    type Err = Error;

    fn from_str(s: &str) -> Result<Self, Self::Err> {
        match s {
            "us" => Ok(Self::US),
            _ => Err(anyhow!("Unknown version: {}", s)),
        }
    }
}

impl Version {
    pub fn iter() -> impl Iterator<Item = Self> {
        [Self::US].iter().copied()
    }
}

/// Abstraction over version variant fields in assets.toml
#[derive(Debug, Deserialize)]
pub struct VersionInfo<T: Debug> {
    us: Option<T>,
}

impl<T: Debug> Index<Version> for VersionInfo<T> {
    type Output = Option<T>;
    fn index(&self, v: Version) -> &Self::Output {
        match v {
            Version::US => &self.us,
        }
    }
}

impl<T: Debug> VersionInfo<T> {
    fn map<S, F>(self, f: F) -> VersionInfo<S>
    where
        S: Debug,
        F: Fn(T) -> S + Copy,
    {
        VersionInfo { us: self.us.map(f) }
    }
}

/// Raw info from assets.toml
#[derive(Debug, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct AssetsRaw {
    raw: HashMap<String, RawBinInfo>,
    sprite_banks: RawSpriteInfo,
    resources: RawResourceInfo,
}

/// Raw info for unprocessed binary extraction
#[derive(Debug, Deserialize)]
struct RawBinInfo {
    /// size of binary to extract
    size: u32,
    /// offset (version dependent)
    #[serde(flatten)]
    offsets: VersionInfo<u32>,
}

/// Raw sprite bank information from assets.toml
#[derive(Debug, Deserialize)]
struct RawSpriteInfo {
    /// output directory for extracted sprite banks
    dir: String,
    /// version dependent bank information
    #[serde(flatten)]
    banks: VersionInfo<Vec<RawSprBank>>,
}

/// Raw information about a single sprite bank from toml
#[derive(Debug, Deserialize)]
#[serde(rename_all = "camelCase")]
struct RawSprBank {
    /// bank name
    name: String,
    // [start, end] of info file in rom
    sprite_info: [u32; 2],
    // [start, end] of image storage file in rom
    sprite_bank: [u32; 2],
    // Name for images in bank (in rom order)
    entries: Option<Vec<String>>,
}

/// Raw information for the ssb64 resource table
#[derive(Debug, Deserialize)]
struct RawResourceInfo {
    /// output directory in repo
    dir: String,
    #[serde(flatten)]
    versions: VersionInfo<RawResTable>,
}

#[derive(Debug, Deserialize)]
#[serde(rename_all = "camelCase")]
struct RawResTable {
    /// [start, end] of resource table
    table: [u32; 2],
    /// extra, unknown bytes after files; needed to match
    excess_bytes: Option<HashMap<u16, Vec<u8>>>,
    /// names of resource files in table in order
    entries: Option<Vec<String>>,
}

/// Treat the range `offset` as untouched binary data
#[derive(Debug)]
pub struct SimpleBin {
    /// output location for this bin
    pub path: PathBuf,
    pub offset: VersionInfo<Range<u32>>,
}

impl SimpleBin {
    fn from_raw((p, r): (String, RawBinInfo)) -> Self {
        let path = PathBuf::from(p);
        let size = r.size;
        let offset = r.offsets.map(|start| start..(start + size));

        Self { path, offset }
    }
}

/// Information about all of the sprite banks
#[derive(Debug)]
pub struct SpriteBankInfo {
    /// base directory to extract all sprite bank data into
    pub output_dir: PathBuf,
    pub banks: VersionInfo<Vec<SpriteBank>>,
}

impl SpriteBankInfo {
    fn from_raw(r: RawSpriteInfo) -> Self {
        let output_dir = PathBuf::from(r.dir);
        let banks = r
            .banks
            .map(|v| v.into_iter().map(SpriteBank::from_raw).collect());

        Self { output_dir, banks }
    }
}

/// Information about a single sprite bank (images and info/draw commands)
#[derive(Debug)]
pub struct SpriteBank {
    /// name of the bank
    pub name: String,
    /// location in rom of binary data for info/draw commands
    pub info: Range<u32>,
    /// location in rom of binary data for sprite data
    pub imgbank: Range<u32>,
    /// names of sprites in order
    pub entries: Option<Vec<String>>,
}

impl SpriteBank {
    fn from_raw(r: RawSprBank) -> Self {
        let RawSprBank {
            name,
            sprite_info,
            sprite_bank,
            entries,
        } = r;
        let info = sprite_info[0]..sprite_info[1];
        let imgbank = sprite_bank[0]..sprite_bank[1];

        Self {
            name,
            info,
            imgbank,
            entries,
        }
    }
}

#[derive(Debug)]
pub struct Resources {
    pub output_dir: PathBuf,
    pub tables: VersionInfo<ResTable>,
}

impl Resources {
    fn from_raw(raw: RawResourceInfo) -> Self {
        let output_dir = raw.dir.into();
        let tables = raw.versions.map(ResTable::from_raw);

        Self { output_dir, tables }
    }
}

#[derive(Debug)]
pub struct ResTable {
    pub offset: Range<u32>,
    pub entries: Option<Vec<String>>,
    pub excess_bytes: Option<HashMap<u16, Vec<u8>>>,
}

impl ResTable {
    fn from_raw(raw: RawResTable) -> Self {
        let offset = raw.table[0]..raw.table[1];
        let entries = raw.entries;
        let excess_bytes = raw.excess_bytes;

        Self {
            offset,
            entries,
            excess_bytes,
        }
    }
}

/// Parsed output of assets.toml
#[derive(Debug)]
pub struct Assets {
    pub simple_bins: Vec<SimpleBin>,
    pub sprite_banks: SpriteBankInfo,
    pub resources: Resources,
}

impl Assets {
    fn from_raw(raw: AssetsRaw) -> Self {
        let AssetsRaw {
            raw: raw_bins,
            sprite_banks,
            resources,
        } = raw;
        let simple_bins = raw_bins.into_iter().map(SimpleBin::from_raw).collect();
        let sprite_banks = SpriteBankInfo::from_raw(sprite_banks);
        let resources = Resources::from_raw(resources);

        Self {
            simple_bins,
            sprite_banks,
            resources,
        }
    }

    pub fn from_path(p: &Path) -> Result<Self, Error> {
        let f = fs::File::open(p).context("reading asset yaml file")?;
        let rdr = BufReader::new(f);
        serde_yaml::from_reader(rdr)
            .map(Self::from_raw)
            .map_err(Into::into)
    }
}
