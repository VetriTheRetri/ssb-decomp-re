use crate::config::{SpriteBank, SpriteBankInfo};
use crate::extract::{
    usize_range, ExtractContext, ExtractTask, SpriteImg, SpriteImgEntry, ToExtract,
};
use anyhow::{anyhow, bail, Error};
use libgfx::{BitDepth, ImageFormat, N64ToPng};
use libsprite::{BankConfig, BankDepth, BankFormat, Entry, EntryConfig, Header};
use std::borrow::Cow;
use std::convert::TryInto;
use std::fs;
use std::iter;
use std::path::{Path, PathBuf};

pub(super) fn todo<'a>(
    bank_info: &'a SpriteBankInfo,
    ctx: ExtractContext<'a>,
) -> Option<impl Iterator<Item = ToExtract<'a>>> {
    bank_info.banks[ctx.version].as_ref().map(move |banks| {
        banks
            .iter()
            .map(move |b| read_bank(b, &bank_info.output_dir, ctx))
            .flatten()
    })
}

pub(super) fn extract(out: &Path, task: &ExtractTask<'_>) -> Result<(), Error> {
    match task {
        ExtractTask::SpriteBank { .. } => {
            let config = gen_bank_config(task)?;
            let toml = toml::to_string_pretty(&config)?;

            fs::write(out, toml)?;
        }
        ExtractTask::SpriteImgEntry(entry) => {
            let config = gen_img_entry_config(entry);
            let toml = toml::to_string_pretty(&config)?;

            fs::write(out, toml)?;
        }
        ExtractTask::SpriteImg(img) => {
            N64ToPng::new(img.data, img.width, img.height, img.format, img.bitdepth)
                .maybe_with_palette(img.palette)
                .to_file(out)?;
        }
        ExtractTask::SpriteInfo(data) => {
            fs::write(out, data)?;
        }
        _ => bail!("Not a sprite extraction {:?}", task),
    };

    Ok(())
}

/// Parse the components (image store + information/animations) of sprite bank
/// into a list of actionable extractions
fn read_bank<'a>(
    bank: &'a SpriteBank,
    base: &Path,
    ctx: ExtractContext<'a>,
) -> impl Iterator<Item = ToExtract<'a>> + 'a {
    let bank_base_dir = base.join(&bank.name);
    let bank_toml = {
        let mut b = bank_base_dir.join(&bank.name);
        b.set_extension("toml");
        b
    };

    let imgs_raw = &ctx.rom[usize_range(&bank.imgbank)];
    let header = Header::from(imgs_raw);

    let bank_config = store_bank_config(bank.entries.as_deref(), &header, imgs_raw, bank_toml);
    let info = Some(read_sprite_info(&bank, &bank_base_dir, ctx.rom));
    let entries = header
        .offsets
        .into_iter()
        .enumerate()
        .filter_map(move |(i, offset)| {
            Entry::from_bank(offset as usize, imgs_raw)
                .map(|e| (i, e))
                .ok()
        })
        .flat_map(move |(i, entry)| read_entry(i, entry, bank, imgs_raw, bank_base_dir.clone()));

    iter::once(bank_config).chain(entries).chain(info)
}

// TODO: actually parse the sprite info binary
// maybe => put header/entries into bank config
// => create a single file with parsed info? translate into C with macros?
fn read_sprite_info<'a>(bank: &SpriteBank, base: &Path, rom: &'a [u8]) -> ToExtract<'a> {
    let start = bank.info.start as usize;
    let end = bank.info.end as usize;
    let data = &rom[start..end];
    let name = format!("{}-info.bin", &bank.name);
    let out = base.join(name).into();

    ToExtract {
        out,
        info: ExtractTask::SpriteInfo(data),
    }
}

/// Store the information necessary to create a `BankConfig` file
fn store_bank_config<'a>(
    entry_names: Option<&'a [String]>,
    hdr: &Header,
    bank_data: &'a [u8],
    out: PathBuf,
) -> ToExtract<'a> {
    let entries = hdr.offsets.clone();

    ToExtract {
        out: out.into(),
        info: ExtractTask::SpriteBank {
            entry_names,
            entries,
            bank_data,
        },
    }
}

/// Create a `BankConfig` structure with the stored info from `store_bank_config`
fn gen_bank_config<'a>(info: &ExtractTask<'a>) -> Result<BankConfig, Error> {
    if let ExtractTask::SpriteBank {
        entry_names,
        entries,
        bank_data,
    } = info
    {
        // num entries + count field (all u32)
        let hdr_end = (entries.len() + 1) * 4;
        // check after the last word to see if there is a garbage word (bank 5 in US version)
        // this word is an offset to the end of the bank (where another entry would be located)
        let extra_entry = bank_data
            .get(hdr_end..hdr_end + 4)
            .map(|bytes| u32::from_be_bytes(bytes.try_into().unwrap()))
            .map_or(false, |w| w as usize == bank_data.len());

        let names = entries
            .iter()
            .enumerate()
            .map(|(i, &o)| {
                entry_names
                    .and_then(|user_names| user_names.get(i))
                    .map(String::clone)
                    .unwrap_or_else(|| generic_entry_name(o))
            })
            .collect::<Vec<_>>();

        let mut config = BankConfig::from(names);
        config.include_end = extra_entry;

        Ok(config)
    } else {
        Err(anyhow!("Incorrect ExtractTask variant"))
    }
}

/// Parse an individual image store entry into a list of image data offsets,
/// and if necessary, an entry toml file that describes the format of the images
fn read_entry<'a>(
    i: usize,
    entry: Entry,
    bank: &'a SpriteBank,
    bank_raw: &'a [u8],
    out_dir: PathBuf,
) -> impl Iterator<Item = ToExtract<'a>> + 'a {
    let entry_name = bank
        .entries
        .as_ref()
        .and_then(|names| names.get(i))
        .map(Cow::from)
        .unwrap_or_else(|| Cow::from(generic_entry_name(entry.entry_offset)));
    let (entry_dir, entry_toml) = {
        let d = out_dir.join(&*entry_name);
        let mut t = d.join(&*entry_name);
        t.set_extension("toml");
        (d, t)
    };

    let len = entry.bytesize() as usize;
    let Entry {
        format: format_bank,
        bitdepth: bitdepth_bank,
        width,
        height,
        image_offsets,
        palette_offsets,
        image_count,
        ..
    } = entry;
    let image_count = image_count as usize;
    let format: ImageFormat = format_bank.into();
    let bitdepth: BitDepth = bitdepth_bank.into();

    let entry_config = store_img_entry_info(
        entry_toml,
        entry_name.clone(),
        width,
        height,
        format_bank,
        bitdepth_bank,
        image_offsets.clone(),
    );

    let images_iter = image_offsets
        .into_iter()
        .map(|o| o as usize)
        .enumerate()
        .map(move |(i, o)| {
            let p = palette_offsets
                .as_ref()
                .and_then(|pals| pals.get(i).copied());
            (i, o, p)
        })
        .map(move |(i, o, p)| {
            let out = gen_frame_filename(&entry_dir, i, image_count, &entry_name, format, bitdepth);
            let palette = p.map(|p| {
                let p = p as usize;
                let plen = (1 << bitdepth as usize) * 2;
                &bank_raw[p..p + plen]
            });
            let data = &bank_raw[o..o + len];
            let img_info = SpriteImg {
                format,
                bitdepth,
                width,
                height,
                data,
                palette,
            };

            ToExtract {
                out: out.into(),
                info: ExtractTask::SpriteImg(img_info),
            }
        });

    iter::once(entry_config).chain(images_iter)
}

/// Store information necessary for lazy creation of a `libsprite::EntryConfig`
fn store_img_entry_info<'a>(
    out: PathBuf,
    name: Cow<'a, str>,
    width: u32,
    height: u32,
    format: BankFormat,
    bitdepth: BankDepth,
    frame_offsets: Vec<u32>,
) -> ToExtract<'a> {
    let entry = SpriteImgEntry {
        name,
        width,
        height,
        format,
        bitdepth,
        frame_offsets,
    };

    ToExtract {
        out: out.into(),
        info: ExtractTask::SpriteImgEntry(entry),
    }
}

fn gen_img_entry_config(info: &SpriteImgEntry) -> EntryConfig {
    let name_frame = |(i, _offset)| {
        gen_frame_name(
            i,
            info.frame_offsets.len(),
            &info.name,
            info.format.into(),
            info.bitdepth.into(),
        )
    };

    let format = info.format;
    let bitdepth = info.bitdepth;
    let width = info.width;
    let height = info.height;
    let images = Some(
        info.frame_offsets
            .iter()
            .copied()
            .enumerate()
            .map(name_frame)
            .collect(),
    );

    EntryConfig {
        format,
        bitdepth,
        width,
        height,
        images,
    }
}

fn generic_entry_name(offset: u32) -> String {
    format!("{:06X}", offset)
}

/// name the frames in an image entry based on frame number
fn gen_frame_name(
    frame_num: usize,
    total_frames: usize,
    prefix: &str,
    format: ImageFormat,
    bitdepth: BitDepth,
) -> String {
    // images are zero-indexed, and only start padding at the eleventh image
    let padding = ((total_frames - 1) as f64).log10() as usize + 1;

    format!(
        "{}_{:0width$}.{}{}.png",
        prefix,
        frame_num,
        format,
        bitdepth as u8,
        width = padding
    )
}

/// output path for a frame in an image entry
fn gen_frame_filename(
    entry_dir: &Path,
    frame_num: usize,
    total_frames: usize,
    prefix: &str,
    format: ImageFormat,
    bitdepth: BitDepth,
) -> PathBuf {
    let name = gen_frame_name(frame_num, total_frames, prefix, format, bitdepth);

    entry_dir.join(name)
}
