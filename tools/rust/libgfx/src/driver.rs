use crate::{raw_to_gray, raw_to_indexed, raw_to_rgba, BitDepth, ImageFormat};
use lodepng::{self, ffi::ColorType, Encoder};
use rgb::{alt::GRAYA8, RGBA8};
use std::error::Error;
use std::fmt;
use std::path::Path;

/// Possible errors when using `N64ToPng` to create a PNG file
#[derive(Debug, Clone)]
pub enum LibGfxPngError {
    MissingPalette,
    PalAdd(lodepng::Error),
    EncodeIssue(lodepng::Error),
}

impl fmt::Display for LibGfxPngError {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        match self {
            Self::MissingPalette => write!(f, "Attempted to encode CI image without palette"),
            Self::PalAdd(..) => write!(f, "Issue adding palette color to PNG palette"),
            Self::EncodeIssue(..) => write!(f, "Issue encoding PNG file"),
        }
    }
}

impl Error for LibGfxPngError {
    fn source(&self) -> Option<&(dyn Error + 'static)> {
        match self {
            Self::PalAdd(e) => Some(e),
            Self::EncodeIssue(e) => Some(e),
            _ => None,
        }
    }
}

/// A helper struct to convert raw N64 image data into a PNG file with `lodepng`
#[derive(Debug, Copy, Clone)]
pub struct N64ToPng<'a> {
    buf: &'a [u8],
    palette: Option<&'a [u8]>,
    width: u32,
    height: u32,
    format: ImageFormat,
    depth: BitDepth,
}

impl<'a> N64ToPng<'a> {
    /// Create a new `N64ToPng` with N64 image data `buf` of `width`, `height`,
    /// `format`, and `bitdepth`. To set palette for CI images,
    /// see `with_palette` method.
    pub fn new(
        buf: &'a [u8],
        width: u32,
        height: u32,
        format: ImageFormat,
        depth: BitDepth,
    ) -> Self {
        Self {
            buf,
            palette: None,
            width,
            height,
            format,
            depth,
        }
    }
    /// Set the palette for a CI image
    pub fn with_palette(&mut self, palette: &'a [u8]) -> &mut Self {
        self.palette = Some(palette);
        self
    }
    /// Optionally set the palette for this image
    pub fn maybe_with_palette(&mut self, pal: Option<&'a [u8]>) -> &mut Self {
        if let Some(pal) = pal {
            self.with_palette(pal);
        }
        self
    }
    /// Output a PNG file to path `p`
    pub fn to_file(&self, p: &Path) -> Result<(), LibGfxPngError> {
        let converted = self.convert_buffers()?;
        let width = self.width as usize;
        let height = self.height as usize;

        match converted {
            ConvertedData::RGBA(data) => lodepng::encode32_file(p, &data, width, height),
            ConvertedData::GA(data) => {
                lodepng::encode_file(p, &data, width, height, ColorType::GREY_ALPHA, 8)
            }
            ConvertedData::CI(data, pal) => {
                let mut encoder = self.build_png_pal_encoder(&pal)?;
                encoder.encode_file(p, &data, width, height)
            }
        }
        .map_err(LibGfxPngError::EncodeIssue)
    }
    /// Get a buffer in memory of PNG data
    pub fn to_buffer(&self) -> Result<Vec<u8>, LibGfxPngError> {
        let converted = self.convert_buffers()?;
        let width = self.width as usize;
        let height = self.height as usize;

        match converted {
            ConvertedData::RGBA(data) => lodepng::encode32(&data, width, height),
            ConvertedData::GA(data) => {
                lodepng::encode_memory(&data, width, height, ColorType::GREY_ALPHA, 8)
            }
            ConvertedData::CI(data, pal) => {
                let mut encoder = self.build_png_pal_encoder(&pal)?;
                encoder.encode(&data, width, height)
            }
        }
        .map_err(LibGfxPngError::EncodeIssue)
    }

    /// Convert the raw n64 data buffer and palette into RGBA8/GA8/CI8 for lodepng encoding
    fn convert_buffers(&self) -> Result<ConvertedData, LibGfxPngError> {
        let Self {
            buf,
            palette,
            width,
            height,
            format,
            depth,
        } = self;

        match self.format {
            ImageFormat::RGBA => {
                // todo: use palette to make rgba png?
                Ok(raw_to_rgba(buf, None, *format, *depth, *width, *height).into())
            }
            ImageFormat::I | ImageFormat::IA => {
                Ok(raw_to_gray(buf, *format, *depth, *width, *height).into())
            }
            ImageFormat::CI => palette
                .ok_or(LibGfxPngError::MissingPalette)
                .map(|palette| raw_to_indexed(buf, palette, *depth, *width, *height).into()),
        }
    }

    fn build_png_pal_encoder(&self, pal: &[RGBA8]) -> Result<Encoder, LibGfxPngError> {
        let mut encoder = Encoder::new();
        // provide the exact palette
        encoder.set_auto_convert(false);
        // have to set the ColorMode struct for both output png and input raw data
        encoder.info_png_mut().color.colortype = ColorType::PALETTE;
        encoder.info_png_mut().color.set_bitdepth(self.depth as u32);
        encoder.info_png_mut().color.palette_clear();

        encoder.info_raw_mut().colortype = ColorType::PALETTE;
        encoder.info_raw_mut().set_bitdepth(8);
        encoder.info_raw_mut().palette_clear();
        // have to set palettes for both as well
        for p in pal {
            encoder
                .info_raw_mut()
                .palette_add(*p)
                .map_err(LibGfxPngError::PalAdd)?;
            encoder
                .info_png_mut()
                .color
                .palette_add(*p)
                .map_err(LibGfxPngError::PalAdd)?;
        }

        Ok(encoder)
    }
}

#[derive(Debug)]
enum ConvertedData {
    RGBA(Vec<RGBA8>),
    GA(Vec<GRAYA8>),
    CI(Vec<u8>, Vec<RGBA8>),
}

impl From<Vec<RGBA8>> for ConvertedData {
    fn from(d: Vec<RGBA8>) -> Self {
        Self::RGBA(d)
    }
}

impl From<Vec<GRAYA8>> for ConvertedData {
    fn from(d: Vec<GRAYA8>) -> Self {
        Self::GA(d)
    }
}

impl From<(Vec<u8>, Vec<RGBA8>)> for ConvertedData {
    fn from(d: (Vec<u8>, Vec<RGBA8>)) -> Self {
        Self::CI(d.0, d.1)
    }
}
