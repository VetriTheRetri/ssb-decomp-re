use anyhow::{Context, Error};
use byteorder::{ByteOrder, BE};
use libgfx::{self, BitDepth, ImageFormat};
use libsprite::{img_file_name, BankConfig, BankDepth, BankFormat, Entry, EntryConfig, Header};
use lodepng::{
    self,
    ffi::ColorType::{GREY_ALPHA, PALETTE},
};
use std::convert::TryFrom;
use std::fs;
use std::path::PathBuf;

/// Main function for decomposing a bank binary into its constituent images and metadata.
pub fn unpack_bank(bank: PathBuf, output_dir: PathBuf, extra: bool) -> Result<(), Error> {
    // Just the read the whole file into memory, as the files are small,
    // and the jumping around with offsets will trash a BufReader anyways
    let data = fs::read(&bank)?;
    let header = Header::from(data.as_ref());

    fs::create_dir_all(&output_dir).context("creating output directory")?;

    let entries = header
        .offsets
        .iter()
        .map(|&o| parse_entry(o as usize, &data));

    let mut written_entries = Vec::with_capacity(header.offsets.len());
    for entry in entries {
        let entry = entry?;
        let entry_name = format!("{:06X}", entry.entry_offset);

        let dir = output_dir.clone().join(&entry_name);
        if !dir.is_dir() {
            fs::create_dir(&dir).context("creating entry output dir")?;
        }

        write_entry_images(&entry, &dir, &data).context("extracting raw images into pngs")?;
        write_entry_info(entry, dir, &entry_name).context("writing entry info toml file")?;
        written_entries.push(entry_name);
    }

    let mut bank_config = BankConfig::from(written_entries);
    bank_config.include_end = extra;
    write_bank_entry_order(&bank_config, output_dir)?;

    Ok(())
}

fn write_bank_entry_order(config: &BankConfig, out: PathBuf) -> Result<(), Error> {
    let bank_name = out.file_stem().expect("a name for the unpacked bank");
    let mut f = out.join(bank_name);
    f.set_extension("toml");
    let output = toml::to_string_pretty(config)?;

    fs::write(f, &output)?;
    Ok(())
}

fn write_entry_info(entry: Entry, out: PathBuf, name: &str) -> Result<(), Error> {
    let mut f = out.join(name);
    f.set_extension("toml");
    let config = EntryConfig::from(entry);
    let output = toml::to_string_pretty(&config)?;

    fs::write(f, &output)?;
    Ok(())
}

fn write_entry_images(entry: &Entry, outdir: &PathBuf, data: &[u8]) -> Result<(), Error> {
    let &Entry {
        format,
        bitdepth,
        width,
        height,
        ..
    } = entry;
    let format: ImageFormat = format.into();
    let bitdepth: BitDepth = bitdepth.into();
    let bytelength = entry.bytesize();
    let as_usize = |&o| o as usize;
    let img_filename = |o| {
        outdir
            .clone()
            .join(format!(img_file_name!(), o, format, bitdepth as u8))
    };

    // (rawdata, filename)
    let mut image_data = entry
        .image_offsets
        .iter()
        .map(as_usize)
        .map(|o| (extract_img_slice(data, bytelength, o), img_filename(o)));

    match format {
        ImageFormat::CI => {
            let palettes = entry
                .palette_offsets
                .as_ref()
                .expect("CI images need palettes");
            let palettes = palettes.iter().map(as_usize);

            image_data
                .zip(palettes)
                .try_for_each(|((raw_img, output_file), pal_off)| {
                    let pal_size = (1 << bitdepth as usize) * 2;
                    let raw_pal = extract_img_slice(data, pal_size, pal_off);
                    let (img, pal) =
                        libgfx::raw_to_indexed(&raw_img, &raw_pal, bitdepth, width, height);

                    let mut encoder = lodepng::Encoder::new();
                    // provide the exact palette
                    encoder.set_auto_convert(false);
                    // have to set the ColorMode struct for both output png and input raw data
                    encoder.info_png_mut().color.colortype = PALETTE;
                    encoder.info_png_mut().color.set_bitdepth(bitdepth as u32);
                    encoder.info_png_mut().color.palette_clear();

                    encoder.info_raw_mut().colortype = PALETTE;
                    encoder.info_raw_mut().set_bitdepth(8);
                    encoder.info_raw_mut().palette_clear();
                    // have to set palettes for both as well
                    for p in pal {
                        encoder
                            .info_raw_mut()
                            .palette_add(p)
                            .context("adding CI color to raw palette")?;
                        encoder
                            .info_png_mut()
                            .color
                            .palette_add(p)
                            .context("adding CI color to png palette")?;
                    }
                    // finally, write the png
                    encoder.encode_file(&output_file, &img, width as usize, height as usize)?;

                    Ok(())
                })
        }
        ImageFormat::RGBA => image_data.try_for_each(|(img_raw, output_file)| {
            let img = libgfx::raw_to_rgba(&img_raw, None, format, bitdepth, width, height);
            lodepng::encode32_file(&output_file, &img, width as usize, height as usize)?;

            Ok(())
        }),
        ImageFormat::I | ImageFormat::IA => image_data.try_for_each(|(img_raw, output_file)| {
            let img = libgfx::raw_to_gray(&img_raw, format, bitdepth, width, height);
            lodepng::encode_file(
                &output_file,
                &img,
                width as usize,
                height as usize,
                GREY_ALPHA,
                8,
            )?;

            Ok(())
        }),
    }
}

fn extract_img_slice(data: &[u8], length: usize, offset: usize) -> &[u8] {
    &data[offset..offset + length]
}

fn parse_entry(offset: usize, raw: &[u8]) -> Result<Entry, Error> {
    const ENTRY_SIZE: usize = 6;
    let mut buf = [0u32; ENTRY_SIZE];
    let end = offset + (ENTRY_SIZE * 4);
    BE::read_u32_into(&raw[offset..end], &mut buf);

    let image_count = buf[0];
    let format = BankFormat::try_from(buf[1])?;
    let bitdepth = BankDepth::try_from(buf[2])?;
    let width = buf[3];
    let height = buf[4];
    // CI image sets with 1 image show "no palettes" (0x1) even though they have a palette pointer
    let are_palettes = buf[5] == 0 || (format == BankFormat::CI && image_count == 1);

    let mut image_offsets = vec![0u32; image_count as usize];
    let end_imgs = end + image_count as usize * 4;
    BE::read_u32_into(&raw[end..end_imgs], &mut image_offsets);

    let palette_offsets = if are_palettes {
        let mut o = vec![0u32; image_count as usize];
        let end_pals = end_imgs + image_count as usize * 4;
        BE::read_u32_into(&raw[end_imgs..end_pals], &mut o);
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
