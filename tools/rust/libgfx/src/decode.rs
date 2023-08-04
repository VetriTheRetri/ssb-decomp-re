use crate::utils::*;
use crate::{BitDepth, ImageFormat};
use rgb::{
    alt::{GrayAlpha, GRAYA8},
    RGBA, RGBA8,
};
use std::iter;

/// The main function for converting from any N64 image format into a `Vec` of RGBA values.
/// If you only need the GrayAlpha values, see [raw_to_gray].
/// If you only need the pallet converted from a CI image, see [raw_to_indexed].
/// This function panics if a CI image is asked to be converted without a passed
/// pallet buffer.
pub fn raw_to_rgba<'i, 'p, P>(
    raw: &'i [u8],
    pallet: P,
    format: ImageFormat,
    depth: BitDepth,
    width: u32,
    height: u32,
) -> Vec<RGBA8>
where
    P: Into<Option<&'p [u8]>>,
{
    let imgsize = (width * height) as usize;
    let pallet = pallet.into();

    match format {
        ImageFormat::RGBA => n64rgba_to_rgba(raw, depth),
        ImageFormat::IA | ImageFormat::I => n64int_to_gray(raw, format, depth, imgsize)
            .into_iter()
            .map(RGBA::from)
            .collect(),
        ImageFormat::CI => n64ci_to_rgba(
            raw,
            pallet.expect("color pallet for CI image"),
            depth,
            imgsize,
        ),
    }
}

/// A function from converting from an N64 intensity format into a `Vec` of 8-bit
/// GrayAlpha values. The function panics if a non-gray format (RGBA, CI) is given.
pub fn raw_to_gray(
    raw: &[u8],
    format: ImageFormat,
    depth: BitDepth,
    width: u32,
    height: u32,
) -> Vec<GRAYA8> {
    let imgsize = (width * height) as usize;

    match format {
        ImageFormat::IA | ImageFormat::I => n64int_to_gray(raw, format, depth, imgsize),
        _ => panic!("Unsupported input format for gray alpha output"),
    }
}
/// A lower-level function to transform an N64 CI image into a tupple containing
/// (a `Vec` of indices into, a `Vec` of RGBA values).
/// Panics if not given a proper CI bit-depth (4 or 8 bit).
pub fn raw_to_indexed(
    raw: &[u8],
    pallet: &[u8],
    depth: BitDepth,
    width: u32,
    height: u32,
) -> (Vec<u8>, Vec<RGBA8>) {
    let imgsize = (width * height) as usize;
    let pallet = n64rgba_to_rgba(pallet, BitDepth::Bit16);
    let indices = match depth {
        BitDepth::Bit4 => raw.iter().flat_map(adapter_4bit).take(imgsize).collect(),
        BitDepth::Bit8 => raw.to_vec(),
        _ => panic!("Unsupported bit-depth '{}' for CI image", depth as u8),
    };

    (indices, pallet)
}

/* Helper functions for converting RGBA formats */
fn n64rgba_to_rgba(raw: &[u8], depth: BitDepth) -> Vec<RGBA8> {
    use rgb::FromSlice;

    match depth {
        BitDepth::Bit16 => raw.chunks(2).map(rgba16_to_rgba).collect(),
        BitDepth::Bit32 => raw.as_rgba().iter().cloned().collect(),
        _ => panic!("called `raw_to_rgba` with a bit-depth other than 16 or 32"),
    }
}

fn rgba16_to_rgba(p: &[u8]) -> RGBA8 {
    assert!(p.len() == 2);

    let (r, g, b, a) = unpack_rgba16(p[0], p[1]);

    RGBA { r, g, b, a }
}

fn n64ci_to_rgba<'i>(img: &'i [u8], pallet: &'i [u8], depth: BitDepth, size: usize) -> Vec<RGBA8> {
    let pallet = n64rgba_to_rgba(pallet, BitDepth::Bit16);

    match depth {
        BitDepth::Bit8 => img.iter().map(|&p| pallet[p as usize]).collect(),
        BitDepth::Bit4 => img
            .iter()
            .flat_map(adapter_4bit)
            .take(size)
            .map(|p| pallet[p as usize])
            .collect(),
        _ => panic!("Illegal bitdepth of {:?}", depth),
    }
}

/* Helper function for converting Intensity formats into gray values */
// N64 Raw -> Bit8 Grayscale iterator
fn n64int_to_gray(raw: &[u8], format: ImageFormat, depth: BitDepth, size: usize) -> Vec<GRAYA8> {
    use BitDepth::*;
    use ImageFormat::*;

    match (format, depth) {
        (IA, Bit4) => raw
            .iter()
            .flat_map(adapter_4bit)
            .take(size)
            .map(ia4_to_ga)
            .collect(),
        (IA, Bit8) => raw.iter().cloned().map(ia8_to_ga).collect(),
        (IA, Bit16) => raw.chunks(2).map(ia16_to_ga).collect(),
        (I, Bit4) => raw
            .iter()
            .flat_map(adapter_4bit)
            .take(size)
            .map(i4_to_ga)
            .collect(),
        (I, Bit8) => raw.iter().cloned().map(i8_to_ga).collect(),
        _ => panic!("unsupported index type {:?}, {:?}", format, depth),
    }
}

fn adapter_4bit(v: &u8) -> impl Iterator<Item = u8> {
    iter::once((*v & 0xF0) >> 4).chain(iter::once(*v & 0x0F))
}

//TODO: use type builtin for &[u8]->GrayAlpha?
fn ia16_to_ga(pixel: &[u8]) -> GRAYA8 {
    assert!(pixel.len() == 2);

    GrayAlpha(pixel[0], pixel[1])
}

fn ia8_to_ga(pixel: u8) -> GRAYA8 {
    GrayAlpha(
        scale_4_to_8((pixel & 0xF0) >> 4),
        scale_4_to_8(pixel & 0x0F),
    )
}

fn ia4_to_ga(bits: u8) -> GRAYA8 {
    GrayAlpha(scale_3_to_8(bits >> 1), (bits & 0x1) * 0xFF)
}

fn i8_to_ga(pixel: u8) -> GRAYA8 {
    GrayAlpha(pixel, 0xff)
}

fn i4_to_ga(bits: u8) -> GRAYA8 {
    GrayAlpha(scale_4_to_8(bits), 0xff)
}
