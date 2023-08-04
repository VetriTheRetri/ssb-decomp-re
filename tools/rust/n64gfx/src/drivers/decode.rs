use crate::Decode;
use anyhow::{anyhow, Context, Error};
use libgfx::{BitDepth, ImageFormat};
use lodepng;
use std::fs::File;
use std::io::{self, BufReader, Read, Seek, SeekFrom};
use std::path::Path;

struct ImageInfo<'i> {
    raw: &'i [u8],
    palette: Option<&'i [u8]>,
    format: ImageFormat,
    bitdepth: BitDepth,
    width: u32,
    height: u32,
}

pub fn decode_binary(opts: Decode) -> Result<(), Error> {
    let Decode {
        input,
        output,
        format,
        bitdepth,
        height,
        width,
        offset,
        convert_palette,
        palette,
    } = opts;
    let indexed_png = !convert_palette;

    if format == ImageFormat::CI && palette.is_none() {
        return Err(anyhow!("No palette offset for CI image!"));
    }

    let mut rdr = BufReader::new(File::open(&input)?);
    let bytesize = byte_size(width, height, bitdepth as usize);
    let offset = offset.unwrap_or(0);
    let img_raw = extract_raw(&mut rdr, bytesize, offset)?;
    let palette_raw = palette
        .map(|offset| {
            // either 16 or 256 16bit RGBA entries
            let pal_size = (1 << bitdepth as usize) * 2;
            extract_raw(&mut rdr, pal_size, offset)
        })
        .transpose()?;

    let info = ImageInfo {
        raw: &img_raw,
        palette: palette_raw.as_ref().map(Vec::as_slice),
        format,
        bitdepth,
        width,
        height,
    };

    match format {
        ImageFormat::RGBA => export_rgba_png(info, &output),
        ImageFormat::IA | ImageFormat::I => export_gray_png(info, &output),
        ImageFormat::CI if !indexed_png => export_rgba_png(info, &output),
        ImageFormat::CI => export_indexed_png(info, &output),
    }
}

fn byte_size(w: u32, h: u32, d: usize) -> usize {
    let size = w as usize * h as usize;
    let bits = size * d;

    1 + ((bits - 1) / 8)
}

fn extract_raw<R>(rdr: &mut R, length: usize, offset: u64) -> io::Result<Vec<u8>>
where
    R: Read + Seek,
{
    let mut output = vec![0; length];
    rdr.seek(SeekFrom::Start(offset))?;
    rdr.read_exact(&mut output)?;

    Ok(output)
}

fn export_rgba_png(info: ImageInfo, name: &Path) -> Result<(), Error> {
    let ImageInfo {
        raw,
        palette,
        format,
        bitdepth,
        width,
        height,
    } = info;

    let converted = libgfx::raw_to_rgba(raw, palette, format, bitdepth, width, height);
    lodepng::encode32_file(name, &converted, width as usize, height as usize)?;

    Ok(())
}

fn export_gray_png(info: ImageInfo, name: &Path) -> Result<(), Error> {
    use lodepng::ffi::ColorType::GREY_ALPHA;

    let ImageInfo {
        raw,
        format,
        bitdepth,
        width,
        height,
        ..
    } = info;

    let converted = libgfx::raw_to_gray(raw, format, bitdepth, width, height);
    lodepng::encode_file(
        name,
        &converted,
        width as usize,
        height as usize,
        GREY_ALPHA,
        8,
    )?;

    Ok(())
}

fn export_indexed_png(info: ImageInfo, name: &Path) -> Result<(), Error> {
    use lodepng::{ffi::ColorType::PALETTE, Encoder};

    let ImageInfo {
        raw,
        palette,
        bitdepth,
        width,
        height,
        ..
    } = info;
    let palette = palette.expect("palette for CI image");
    let (img, pal) = libgfx::raw_to_indexed(raw, palette, bitdepth, width, height);

    let mut encoder = Encoder::new();
    // provide the palette for the raw data and output image for lodepng
    encoder.set_auto_convert(false);
    encoder.info_raw_mut().colortype = PALETTE;
    encoder.info_raw_mut().set_bitdepth(8);
    encoder.info_raw_mut().palette_clear();
    encoder.info_png_mut().color.colortype = PALETTE;
    encoder.info_png_mut().color.set_bitdepth(bitdepth as u32);
    encoder.info_png_mut().color.palette_clear();

    for p in pal {
        encoder
            .info_raw_mut()
            .palette_add(p)
            .context("adding CI color to raw pallet")?;
        encoder
            .info_png_mut()
            .color
            .palette_add(p)
            .context("adding CI color to png pallet")?;
    }

    encoder.encode_file(name, &img, width as usize, height as usize)?;

    Ok(())
}
