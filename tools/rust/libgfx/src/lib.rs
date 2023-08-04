//! A crate for dealing with n64 graphic formats. It can convert from the raw, big-endian
//! n64 binary data into a `Vec` of RGBA or GrayAlpha values.
//! There is also PNG conversion if the `png` feature is enabled.

use std::fmt;

mod decode;
mod encode;
mod utils;

pub use decode::{raw_to_gray, raw_to_indexed, raw_to_rgba};
pub use encode::{gray_to_raw, indexed_to_raw, rgba_to_raw};

#[cfg(feature = "png")]
mod driver;
#[cfg(feature = "png")]
pub use driver::{LibGfxPngError, N64ToPng};

/// The supported N64 image formats.
#[derive(Debug, Copy, Clone, Eq, PartialEq)]
pub enum ImageFormat {
    RGBA,
    IA,
    I,
    CI,
}

impl fmt::Display for ImageFormat {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        use ImageFormat::*;
        let output = match self {
            RGBA => "rgba",
            IA => "ia",
            I => "i",
            CI => "ci",
        };

        write!(f, "{}", output)
    }
}

/// Supported N64 image bit depths.
#[derive(Debug, Copy, Clone, Eq, PartialEq)]
pub enum BitDepth {
    Bit4 = 4,
    Bit8 = 8,
    Bit16 = 16,
    Bit32 = 32,
}
