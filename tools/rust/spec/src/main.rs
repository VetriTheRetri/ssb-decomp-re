use anyhow::Result;
use std::{ffi::OsStr, path::PathBuf};

mod convert;

fn print_usage() {
    indoc::printdoc!(
        r#"
        {name} {version}
        Convert a dhall LD spec file into a linkerscript as well as 
        a C header for the 

        Usage:
        {name} [options] --input <file> --ld <file> --header <file>:
          -h, --help      print this message
          -v, --version   print version info
          -i, --input     dhall spec file
          -l, --ld        linkerscript output location
          -c, --header    C .h file for segment addresses
        
        "#,
        name = env!("CARGO_BIN_NAME"),
        version = env!("CARGO_PKG_VERSION")
    )
}

fn print_version() {
    println!(
        "{} version {}",
        env!("CARGO_BIN_NAME"),
        env!("CARGO_PKG_VERSION")
    );
}

enum Args {
    Help,
    Version,
    Convert {
        input: PathBuf,
        ldscript: PathBuf,
        header: PathBuf,
    },
}

impl Args {
    fn from_env() -> Result<Self> {
        fn to_pathbuf(s: &OsStr) -> Result<PathBuf, pico_args::Error> {
            Ok(PathBuf::from(s.to_os_string()))
        }

        let mut args = pico_args::Arguments::from_env();

        if args.contains(["-h", "--help"]) {
            return Ok(Self::Help);
        }
        if args.contains(["-v", "--version"]) {
            return Ok(Self::Version);
        }

        let input = args.value_from_os_str(["-i", "--input"], to_pathbuf)?;
        let ldscript = args.value_from_os_str(["-l", "--ld"], to_pathbuf)?;
        let header = args.value_from_os_str(["-c", "--header"], to_pathbuf)?;

        Ok(Self::Convert {
            input,
            ldscript,
            header,
        })
    }
}

fn main() -> Result<()> {
    let args = Args::from_env()?;

    match args {
        Args::Help => Ok(print_usage()),
        Args::Version => Ok(print_version()),
        Args::Convert {
            input,
            ldscript,
            header,
        } => convert::specfile(input, ldscript, header),
    }
}
