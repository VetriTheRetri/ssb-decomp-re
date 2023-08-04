use anyhow::{anyhow, Error};
use indoc::printdoc;
use libgfx::{BitDepth, ImageFormat};
use std::{ffi::OsStr, path::PathBuf};

mod drivers;

type ArgResult<T> = Result<T, pico_args::Error>;

fn print_usage() {
    printdoc!(
        r#"
        {name} {version}
        A tool to convert PNG into an N64 image binary, or vice versa
        
        Usage:
          -h, --help      print this help message
          -V, --version   print version info
          encode          convert PNG into N64 binary
          decode          convert N64 binary to PNG

        {name} encode:
          -i, --input <file>              input PNG file path
          -o, --output <file>             output binary path
          -f, --format {{RGBA, CI, I, IA}}  format of output binary
          -d, --bitdepth {{4, 8, 16, 32}}   bitdepth of output binary
          [-p, --palette <file>]          custom file for palette output (if CI)

        {name} decode:
          -i, --input <file>              input PNG file path
          -o, --output <file>             output binary path
          -f, --format {{RGBA, CI, I, IA}}  format of output binary
          -d, --bitdepth {{4, 8, 16, 32}}   bitdepth of output binary
          -w, --width <pixels>
          -h, --height <pixels>
          [--offset <address>]            offset to image data in `input`
          [--convert-palette]             output full color PNG (default is paletted PNG)
          [-p, --palette <address>]       offset to CI palette (RBGA16 data) in `input`

        "#,
        name = env!("CARGO_BIN_NAME"),
        version = env!("CARGO_PKG_VERSION")
    );
}

fn print_version() {
    println!(
        "{} version {}",
        env!("CARGO_BIN_NAME"),
        env!("CARGO_PKG_VERSION")
    );
}

fn main() {
    if let Err(e) = run() {
        eprintln!("{:?}", e);
        std::process::exit(1);
    }
}

fn run() -> Result<(), Error> {
    let args = Args::from_env()?;
    match args {
        Args::Encode(settings) => drivers::encode_binary(settings),
        Args::Decode(settings) => drivers::decode_binary(settings),
        Args::Help => Ok(print_usage()),
        Args::Version => Ok(print_version()),
    }
}

#[derive(Debug)]
enum Args {
    Help,
    Version,
    Encode(Encode),
    Decode(Decode),
}

impl Args {
    fn from_env() -> Result<Self, pico_args::Error> {
        let mut args = pico_args::Arguments::from_env();

        if args.contains(["-h", "--help"]) {
            return Ok(Self::Help);
        }

        if args.contains(["-V", "--version"]) {
            return Ok(Self::Version);
        }

        match args.subcommand()?.as_deref() {
            Some("encode") => Encode::from_args(args).map(Self::Encode),
            Some("decode") => Decode::from_args(args).map(Self::Decode),
            _ => Ok(Self::Help),
        }
    }
}

#[derive(Debug)]
pub struct Encode {
    /// Input binary or PNG
    input: PathBuf,
    /// Output filename
    output: PathBuf,
    /// RGBA, CI, I, or IA
    format: ImageFormat,
    /// 4, 8, 16, or 32
    bitdepth: BitDepth,
    /// A custom output filename for a CI image palette binary
    palette_output: Option<PathBuf>,
}

impl Encode {
    fn from_args(mut args: pico_args::Arguments) -> ArgResult<Self> {
        let input = args.value_from_os_str(["-i", "--input"], to_pathbuf)?;
        let output = args.value_from_os_str(["-o", "--output"], to_pathbuf)?;
        let format = args.value_from_fn(["-f", "--format"], arg_format)?;
        let bitdepth = args.value_from_fn(["-d", "--bitdepth"], arg_bitdepth)?;
        let palette_output = args.opt_value_from_os_str(["-p", "--palette"], to_pathbuf)?;

        Ok(Self {
            input,
            output,
            format,
            bitdepth,
            palette_output,
        })
    }
}

#[derive(Debug)]
pub struct Decode {
    /// Input binary or PNG
    input: PathBuf,
    /// Output filename
    output: PathBuf,
    /// RGBA, CI, I, or IA
    format: ImageFormat,
    /// 4, 8, 16, or 32
    bitdepth: BitDepth,
    width: u32,
    height: u32,
    /// Location of image data in input binary
    offset: Option<u64>,
    /// Convert a CI palette into RGBA PNG (default is paletted PNG)
    convert_palette: bool,
    /// Location of palette data (RBGA16 array) for CI image
    palette: Option<u64>,
}

impl Decode {
    fn from_args(mut args: pico_args::Arguments) -> ArgResult<Self> {
        let input = args.value_from_os_str(["--i", "--input"], to_pathbuf)?;
        let output = args.value_from_os_str(["--o", "--output"], to_pathbuf)?;
        let format = args.value_from_fn(["-f", "--format"], arg_format)?;
        let bitdepth = args.value_from_fn(["-d", "--bitdepth"], arg_bitdepth)?;
        let width = args.value_from_str(["-w", "--width"])?;
        let height = args.value_from_str(["-w", "--width"])?;
        let offset = args.opt_value_from_fn("--offset", possible_hex)?;
        let convert_palette = args.contains("--convert-palette");
        let palette = args.opt_value_from_fn(["-p", "--pallete"], possible_hex)?;

        Ok(Self {
            input,
            output,
            format,
            bitdepth,
            height,
            width,
            offset,
            convert_palette,
            palette,
        })
    }
}

fn to_pathbuf(s: &OsStr) -> ArgResult<PathBuf> {
    Ok(PathBuf::from(s.to_os_string()))
}

fn arg_format(s: &str) -> Result<ImageFormat, Error> {
    use ImageFormat::*;

    match s {
        "rgba" | "RGBA" => Ok(RGBA),
        "ci" | "CI" => Ok(CI),
        "i" | "I" => Ok(I),
        "ia" | "IA" => Ok(IA),
        _ => Err(anyhow!("unknown image format {}", s)),
    }
}

fn arg_bitdepth(s: &str) -> Result<BitDepth, Error> {
    use BitDepth::*;

    match s {
        "4" => Ok(Bit4),
        "8" => Ok(Bit8),
        "16" => Ok(Bit16),
        "32" => Ok(Bit32),
        _ => Err(anyhow!("unknown bitdepth {}", s)),
    }
}

fn possible_hex(num: &str) -> Result<u64, ::std::num::ParseIntError> {
    let radix = &num[0..2];

    if radix == "0x" || radix == "0X" {
        u64::from_str_radix(&num[2..], 16)
    } else {
        u64::from_str_radix(num, 10)
    }
}
