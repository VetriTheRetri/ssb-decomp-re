use serde::{Deserialize, Serialize};
use std::path::PathBuf;

#[derive(Debug, Clone, Deserialize, Serialize)]
pub struct LinkerConfig {
    pub settings: Option<LinkerSettings>,
    pub script: LinkerScript,
}

#[derive(Debug, Clone, Deserialize, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct LinkerSettings {
    pub search_dirs: Option<Vec<PathBuf>>,
    pub output: Option<PathBuf>,
    pub cache: Option<PathBuf>,
}

pub type LinkerScript = Vec<InputFile>;

#[derive(Debug, Clone, Deserialize, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct InputFile {
    pub file: PathBuf,
    pub compressed: bool,
    pub comp_settings: Option<VpkSettings>,
    pub inreloc: Option<u32>,
    pub exreloc: Option<u32>,
    pub exports: Option<Vec<(String, u32)>>,
    pub imports: Option<Vec<u16>>,
}

#[derive(Debug, Clone, Deserialize, Serialize)]
pub struct VpkSettings {
    pub method: Option<u8>,
    pub offsets: Option<String>,
    pub lengths: Option<String>,
    pub excess: Option<Vec<u8>>,
}
