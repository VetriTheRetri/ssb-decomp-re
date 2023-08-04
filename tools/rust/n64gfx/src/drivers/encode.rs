use crate::Encode;
use anyhow::{anyhow, Context, Error};
use libgfx::{self, BitDepth, ImageFormat};
use lodepng;
use std::fs;
use std::path::{Path, PathBuf};

pub fn encode_binary(opts: Encode) -> Result<(), Error> {
    use ImageFormat::*;
    let Encode {
        input,
        output,
        format,
        bitdepth,
        palette_output,
    } = opts;

    let (img, pal) = match format {
        RGBA => (convert_to_rgba(input, bitdepth)?, None),
        IA | I => (convert_to_intensity(input, format, bitdepth)?, None),
        CI => convert_to_ci(input, bitdepth)?,
    };

    fs::write(&output, &img)?;

    if format == ImageFormat::CI {
        let palette_file = palette_output
            .ok_or(())
            .or_else(|_| append_to_filename(&output, "pal"))
            .context("generating palette output filename from image output filename")?;

        let pal = pal.expect("palette data for encoded CI image");

        fs::write(&palette_file, pal)?;
    }

    Ok(())
}

fn append_to_filename(file: &Path, s: &str) -> Result<PathBuf, Error> {
    let mut name = file
        .file_stem()
        .ok_or(anyhow!("no file stem"))?
        .to_os_string();
    let ext = file.extension().ok_or(anyhow!("no file extension"))?;

    name.push(".");
    name.push(s);
    name.push(".");
    name.push(ext);

    Ok(file.with_file_name(&name))
}

fn convert_to_rgba(file: PathBuf, depth: BitDepth) -> Result<Vec<u8>, Error> {
    let bitmap = lodepng::decode32_file(&file)?;

    Ok(libgfx::rgba_to_raw(
        &bitmap.buffer,
        ImageFormat::RGBA,
        depth,
    ))
}

fn convert_to_intensity(
    file: PathBuf,
    format: ImageFormat,
    depth: BitDepth,
) -> Result<Vec<u8>, Error> {
    use lodepng::{ffi::ColorType::GREY_ALPHA, Image};
    // TODO: convert from RGBA png as well (with rgba_to_raw(bytes, format, depth))
    let bitmap = lodepng::decode_file(&file, GREY_ALPHA, 8).map(|res| match res {
        Image::GreyAlpha(bits) => Ok(bits),
        _ => Err(anyhow!("couldn't read input png as grey alpha image")),
    })??;

    Ok(libgfx::gray_to_raw(&bitmap.buffer, format, depth))
}

fn convert_to_ci(file: PathBuf, depth: BitDepth) -> Result<(Vec<u8>, Option<Vec<u8>>), Error> {
    use lodepng::{ffi::ColorType::PALETTE, Decoder, Image};

    let mut decoder = Decoder::new();
    decoder.info_raw_mut().colortype = PALETTE;
    decoder.info_raw_mut().set_bitdepth(8);

    let indices = decoder.decode_file(&file).map(|res| match res {
        Image::RawData(bits) => Ok(bits),
        _ => Err(anyhow!("couldn't read input png as paletted png")),
    })??;

    let palette = decoder.info_png_mut().color.palette();
    let (img, pal) = libgfx::indexed_to_raw(&indices.buffer, &palette, depth);

    Ok((img.into(), pal.into()))
}
