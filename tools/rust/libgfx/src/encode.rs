use crate::utils::*;
use crate::{BitDepth, ImageFormat};
use rgb::{
    alt::{GrayAlpha, GRAYA8},
    ComponentBytes, RGBA8,
};
use std::borrow::Cow;

/// Convert an input buffer of RGBA values into a byte vector of the specified N64 image format.
/// This will convert into N64 RGBA, I, or IA by performing the proper conversions. It will not
/// output a CI image; use [] to do perform that encode.
/// Gray or GrayAlpha slices can be directly encoded into I or IA with [].
pub fn rgba_to_raw(input: &[RGBA8], format: ImageFormat, depth: BitDepth) -> Vec<u8> {
    match format {
        ImageFormat::RGBA => rgba_to_n64rgba(input, depth),
        ImageFormat::IA | ImageFormat::I => rgba_to_n64int(input, format, depth),
        ImageFormat::CI => panic!("CI images not supported with rgba_to_raw"),
    }
}

/// Convert an input buffer of GrayAlpha values into a byte vector of the N64 intensity
/// types (I, or IA).
pub fn gray_to_raw(input: &[GRAYA8], format: ImageFormat, depth: BitDepth) -> Vec<u8> {
    match format {
        ImageFormat::IA | ImageFormat::I => ga_to_n64int(input, format, depth),
        ImageFormat::RGBA => panic!("RGBA images not supported with gray_to_raw"),
        ImageFormat::CI => panic!("CI images not supported with gray_to_raw"),
    }
}

/// Convert a palette and an input of indices into N64 indices and palette. The indices
/// input is expected to be in 8-bit format already.
/// A `Cow` of the indices is returned to prevent copying when encoding 8-bit CI images.
pub fn indexed_to_raw<'i, 'p>(
    input: &'i [u8],
    palette: &'p [RGBA8],
    depth: BitDepth,
) -> (Cow<'i, [u8]>, Vec<u8>) {
    let size = input.len();
    let pal = rgba_to_n64rgba(palette, BitDepth::Bit16);
    let indices = match depth {
        BitDepth::Bit8 => Cow::from(input),
        BitDepth::Bit4 => {
            let compressed = input
                .iter()
                .cloned()
                .enumerate()
                .fold(Vec::with_capacity(size), combine_4bit);
            Cow::from(compressed)
        }
        _ => panic!("Illegal CI bitdepth of {}", depth as u8),
    };

    (indices, pal)
}

/** Internal Functions **/
/* Helpers for RGBA8 to N64 RGBA */
fn rgba_to_n64rgba(input: &[RGBA8], depth: BitDepth) -> Vec<u8> {
    match depth {
        BitDepth::Bit32 => input.as_bytes().to_vec(),
        BitDepth::Bit16 => input.iter().flat_map(rgba_to_rgba16).collect(),
        _ => panic!("called `rgba_to_n64rgba` with illegal bitdepth {:?}", depth),
    }
}
// convert rgba struct into iterator of rgba16 pixels
fn rgba_to_rgba16(pixel: &RGBA8) -> impl Iterator<Item = u8> {
    use std::iter::once;
    let (b1, b2) = pack_rgba16(*pixel);

    once(b1).chain(once(b2))
}

/* Helpers for: RGBA8 to N64 I/IA */
fn rgba_to_n64int(input: &[RGBA8], format: ImageFormat, depth: BitDepth) -> Vec<u8> {
    let size = input.len();
    let grays = input.iter().map(rgba_to_ga);

    ga_iter_to_n64int(grays, format, depth, size)
}
// average rgb values into gray
fn rgba_to_ga(input: &RGBA8) -> GRAYA8 {
    let r = input.r as u16;
    let g = input.g as u16;
    let b = input.b as u16;
    let a = input.a;
    let avg = (r + g + b) / 3;

    GrayAlpha(avg as u8, a)
}

/* Helpers for GrayAlpha8 to N64 I/IA */
fn ga_to_n64int(input: &[GRAYA8], format: ImageFormat, depth: BitDepth) -> Vec<u8> {
    let size = input.len();
    ga_iter_to_n64int(input.iter().cloned(), format, depth, size)
}

// Transform an iterator of gray values into the N64 intensity output
fn ga_iter_to_n64int<I>(input: I, format: ImageFormat, depth: BitDepth, size: usize) -> Vec<u8>
where
    I: Iterator<Item = GRAYA8>,
{
    use BitDepth::*;
    use ImageFormat::*;

    match (format, depth) {
        (IA, Bit16) => input.flat_map(ga_to_ia16).collect(),
        (IA, Bit8) => input.map(ga_to_ia8).collect(),
        (IA, Bit4) => input
            .map(ga_to_ia4)
            .enumerate()
            .fold(Vec::with_capacity(size), combine_4bit),
        (I, Bit8) => input.map(ga_to_i8).collect(),
        (I, Bit4) => input
            .map(ga_to_i4)
            .enumerate()
            .fold(Vec::with_capacity(size), combine_4bit),
        _ => panic!(
            "called `ga_iter_to_n64int` with illegal {:?} {:?}",
            format, depth
        ),
    }
}

/* Helpers for GrayAlpha8 to IA */
fn ga_to_ia16(p: GRAYA8) -> impl Iterator<Item = u8> {
    use std::iter::once;
    once(p.0).chain(once(p.1))
}

fn ga_to_ia8(p: GRAYA8) -> u8 {
    let g = scale_8_to_4(p.0);
    let a = scale_8_to_4(p.1);
    (g << 4) | a
}

fn ga_to_ia4(p: GRAYA8) -> u8 {
    let g = scale_8_to_3(p.0);
    let a = (p.1 > 0) as u8;
    ((g << 1) | a) & 0x0F
}

/* Helpers for GrayAlpha8 to I */
fn ga_to_i8(p: GRAYA8) -> u8 {
    p.0
}
fn ga_to_i4(p: GRAYA8) -> u8 {
    scale_8_to_4(p.0)
}

/* Fold function to combine u8s for 4 bit formats */
fn combine_4bit(mut out: Vec<u8>, (i, pixel): (usize, u8)) -> Vec<u8> {
    match i % 2 {
        0 => out.push(pixel << 4),
        1 => out[i / 2] |= pixel & 0x0F,
        _ => unreachable!(),
    };

    out
}
