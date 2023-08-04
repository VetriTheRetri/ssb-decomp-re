//! Types for dealing with the sprite bank files in SSB64

use byteorder::{ByteOrder, BE};
use libgfx::{BitDepth, ImageFormat};
use serde::{Deserialize, Deserializer, Serialize, Serializer};
use std::convert::{From, TryFrom};
use std::fmt;

/// Errors from this library
#[derive(Debug)]
pub enum LibSpriteErr {
    UnkImgFormat(u32),
    UnkImgBitdepth(u32),
}

impl fmt::Display for LibSpriteErr {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        match self {
            Self::UnkImgFormat(v) => write!(f, "unknown image format: {}", v),
            Self::UnkImgBitdepth(v) => write!(f, "unknown image format: {}", v),
        }
    }
}

impl std::error::Error for LibSpriteErr {}

/// Bank file header that has offsets each set of images
#[derive(Debug)]
pub struct Header {
    pub count: u32,
    pub offsets: Vec<u32>,
}

impl From<&[u8]> for Header {
    fn from(raw: &[u8]) -> Self {
        let count = BE::read_u32(&raw[0..4]);
        let end_entry_ptrs = 4 + (count as usize * 4);
        let mut offsets = vec![0; count as usize];
        BE::read_u32_into(&raw[4..end_entry_ptrs], &mut offsets);

        Self { count, offsets }
    }
}

impl fmt::Display for Header {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "count: {}\noffsets: {:x?}", self.count, &self.offsets)
    }
}

/// An individual set of images pointed to by an offset in the [Header]
#[derive(Debug)]
pub struct Entry {
    pub entry_offset: u32,
    pub image_count: u32,
    pub format: BankFormat,
    pub bitdepth: BankDepth,
    pub width: u32,
    pub height: u32,
    pub are_palettes: bool,
    pub image_offsets: Vec<u32>,
    pub palette_offsets: Option<Vec<u32>>,
}

impl Entry {
    pub fn size(&self) -> usize {
        (self.width as usize) * (self.height as usize)
    }

    pub fn bitsize(&self) -> usize {
        self.size() * (self.bitdepth.depth())
    }
    // round up for the case of an odd pixel numbered 4bit image
    pub fn bytesize(&self) -> usize {
        1 + ((self.bitsize() - 1) / 8)
    }
    /// parse data at `offset` in `bank_data` to create an `Entry`
    pub fn from_bank(offset: usize, bank_data: &[u8]) -> Result<Self, LibSpriteErr> {
        const ENTRY_SIZE: usize = 6;
        let mut buf = [0u32; ENTRY_SIZE];
        let end = offset + (ENTRY_SIZE * 4);
        BE::read_u32_into(&bank_data[offset..end], &mut buf);

        let image_count = buf[0];
        let format = BankFormat::try_from(buf[1])?;
        let bitdepth = BankDepth::try_from(buf[2])?;
        let width = buf[3];
        let height = buf[4];
        // CI image sets with 1 image show "no palettes" (0x1) even though they have a palette pointer
        let are_palettes = buf[5] == 0 || (format == BankFormat::CI && image_count == 1);

        let mut image_offsets = vec![0u32; image_count as usize];
        let end_imgs = end + image_count as usize * 4;
        BE::read_u32_into(&bank_data[end..end_imgs], &mut image_offsets);

        let palette_offsets = if are_palettes {
            let mut o = vec![0u32; image_count as usize];
            let end_pals = end_imgs + image_count as usize * 4;
            BE::read_u32_into(&bank_data[end_imgs..end_pals], &mut o);
            Some(o)
        } else {
            None
        };

        Ok(Entry {
            entry_offset: offset as u32,
            image_count,
            format,
            bitdepth,
            width,
            height,
            are_palettes,
            image_offsets,
            palette_offsets,
        })
    }
}

/// Formatting string for transforming u32 image data offsets into an output filename
#[macro_export]
macro_rules! img_file_name {
    () => {
        "{:06X}.{}{}.png"
    };
}

/// Configuration struct for an image entry
#[derive(Debug, Serialize, Deserialize)]
pub struct EntryConfig {
    pub format: BankFormat,
    pub bitdepth: BankDepth,
    pub width: u32,
    pub height: u32,
    /// None = use filesystem to list images; Some(vec![]) = no images in this entry...
    pub images: Option<Vec<String>>,
}

impl From<Entry> for EntryConfig {
    fn from(entry: Entry) -> Self {
        let Entry {
            format,
            bitdepth,
            width,
            height,
            image_offsets,
            ..
        } = entry;
        let images = Some(
            image_offsets
                .into_iter()
                .map(|o| format!(img_file_name![], o, format, bitdepth.depth()))
                .collect(),
        );

        Self {
            format,
            bitdepth,
            width,
            height,
            images,
        }
    }
}

/// A simple wrapper type for the list of entries in a bank for outputting
/// the TOML config file for entry order in a bank
#[derive(Debug, Serialize, Deserialize)]
pub struct BankConfig {
    pub entries: Vec<String>,
    /// One image bank (5) (erroneously?) includes the end of bank
    // (or the start of an unlisted image) as an extra entry offset
    pub include_end: bool,
}

impl From<Vec<String>> for BankConfig {
    fn from(entries: Vec<String>) -> Self {
        Self {
            entries,
            include_end: false,
        }
    }
}

/// Custom enum for an Entry's N64 image format
#[derive(Debug, Copy, Clone, Eq, PartialEq, Serialize, Deserialize)]
#[serde(rename_all = "lowercase")]
pub enum BankFormat {
    RGBA = 0,
    YUV = 1,
    CI = 2,
    IA = 3,
    I = 4,
}

impl Into<ImageFormat> for BankFormat {
    fn into(self) -> ImageFormat {
        match self {
            BankFormat::RGBA => ImageFormat::RGBA,
            BankFormat::CI => ImageFormat::CI,
            BankFormat::IA => ImageFormat::IA,
            BankFormat::I => ImageFormat::I,
            BankFormat::YUV => panic!("YUV images are not supported!"),
        }
    }
}

impl TryFrom<u32> for BankFormat {
    type Error = LibSpriteErr;
    fn try_from(v: u32) -> Result<Self, Self::Error> {
        use BankFormat::*;
        match v {
            0 => Ok(RGBA),
            1 => Ok(YUV),
            2 => Ok(CI),
            3 => Ok(IA),
            4 => Ok(I),
            _ => Err(LibSpriteErr::UnkImgFormat(v)),
        }
    }
}

impl fmt::Display for BankFormat {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        f.write_str(self.as_str())
    }
}

impl BankFormat {
    pub fn as_str(&self) -> &'static str {
        use BankFormat::*;
        match self {
            RGBA => "rgba",
            YUV => "yuv",
            CI => "ci",
            IA => "ia",
            I => "i",
        }
    }
}

/// Custom enum for an Entry's N64 bit depth
#[derive(Debug, Copy, Clone, Eq, PartialEq)]
pub enum BankDepth {
    B4 = 0,
    B8 = 1,
    B16 = 2,
    B32 = 3,
}

impl BankDepth {
    pub fn depth(&self) -> usize {
        use BankDepth::*;
        match self {
            B4 => 4,
            B8 => 8,
            B16 => 16,
            B32 => 32,
        }
    }
}

impl Into<BitDepth> for BankDepth {
    fn into(self) -> BitDepth {
        match self {
            BankDepth::B4 => BitDepth::Bit4,
            BankDepth::B8 => BitDepth::Bit8,
            BankDepth::B16 => BitDepth::Bit16,
            BankDepth::B32 => BitDepth::Bit32,
        }
    }
}

impl Serialize for BankDepth {
    fn serialize<S: Serializer>(&self, serializer: S) -> Result<S::Ok, S::Error> {
        Serialize::serialize(&self.depth(), serializer)
    }
}

impl<'de> Deserialize<'de> for BankDepth {
    fn deserialize<D>(deser: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        use serde::de;
        struct Visitor;
        impl<'de> de::Visitor<'de> for Visitor {
            type Value = BankDepth;
            fn expecting(&self, f: &mut fmt::Formatter) -> fmt::Result {
                f.write_str("N64 integer bitdepth (4, 8, 16, or 32)")
            }
            fn visit_u64<E>(self, val: u64) -> Result<Self::Value, E>
            where
                E: de::Error,
            {
                match val {
                    4 => Ok(BankDepth::B4),
                    8 => Ok(BankDepth::B8),
                    16 => Ok(BankDepth::B16),
                    32 => Ok(BankDepth::B32),
                    _ => Err(E::custom(format!("unknown bitdepth: {}", val))),
                }
            }
            fn visit_i64<E>(self, val: i64) -> Result<Self::Value, E>
            where
                E: de::Error,
            {
                self.visit_u64(val as u64)
            }
        }

        deser.deserialize_u32(Visitor)
    }
}

impl TryFrom<u32> for BankDepth {
    type Error = LibSpriteErr;
    fn try_from(v: u32) -> Result<Self, Self::Error> {
        use BankDepth::*;
        match v {
            0 => Ok(B4),
            1 => Ok(B8),
            2 => Ok(B16),
            3 => Ok(B32),
            _ => Err(LibSpriteErr::UnkImgBitdepth(v)),
        }
    }
}
