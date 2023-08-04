use anyhow::{anyhow, Result};
use std::{ffi::OsStr, path::PathBuf};

mod cache;
mod link;

const DESC: &str = "A linker for HAL's filesystem in SSB64";

fn print_usage() {
    indoc::printdoc!(
        r#"
        {bin} - {ver}
        {}

        Usage:
            {bin} [options] [-L dir]... <script> [-o output.o]
            {bin} -h | --help
            {bin} -V | --version
        
        Args:
            <script>    path to a JSON linker script
        
        Options:
            -L --search-dir        Zero or more directories in which to search for 
                                   files named in <script>
            -o --output            Path to output object; if passed, this overides the
                                   settings.output field in <script>
            -c --header            Path to output a C header file with file id defines
            -d --dependency-file   Path to output a Makefile dep (.d) file
            -k --cache             Path to a cache directory for compressed data
        
        Flags:
            -h --help              Print this help message
            -V --version           Print version information

    "#,
        DESC,
        bin = env!("CARGO_BIN_NAME"),
        ver = env!("CARGO_PKG_VERSION")
    );
}

fn print_version() {
    println!(
        "{} - {}\n{}",
        env!("CARGO_BIN_NAME"),
        env!("CARGO_PKG_VERSION"),
        DESC
    );
}

#[derive(Debug)]
struct RunOpt {
    config: PathBuf,
    search: Option<Vec<PathBuf>>,
    output: Option<PathBuf>,
    header: Option<PathBuf>,
    cache: Option<PathBuf>,
    mdep: Option<PathBuf>,
}

#[derive(Debug)]
enum Opt {
    Run(RunOpt),
    Help,
    Version,
}

impl Opt {
    fn from_args() -> Result<Self> {
        let mut args = pico_args::Arguments::from_env();

        if args.contains(["-h", "--help"]) {
            return Ok(Self::Help);
        }

        if args.contains(["-V", "--version"]) {
            return Ok(Self::Version);
        }

        let search = args.values_from_os_str(["-L", "--search-dir"], to_pathbuf)?;
        let search = if search.is_empty() {
            None
        } else {
            Some(search)
        };
        let output = args.opt_value_from_os_str(["-o", "--output"], to_pathbuf)?;
        let header = args.opt_value_from_os_str(["-c", "--header"], to_pathbuf)?;
        let mdep = args.opt_value_from_os_str(["-d", "--dependency-file"], to_pathbuf)?;
        let cache = args.opt_value_from_os_str(["-k", "--cache"], to_pathbuf)?;

        let config = args
            .finish()
            .into_iter()
            .next()
            .map(PathBuf::from)
            .ok_or_else(|| anyhow!("Path to config JSON file not passed. Use \'-h\' for help"))?;

        Ok(Self::Run(RunOpt {
            config,
            search,
            output,
            header,
            cache,
            mdep,
        }))
    }
}

fn main() -> Result<()> {
    let opt = Opt::from_args()?;

    match opt {
        Opt::Help => {
            print_usage();
            Ok(())
        }
        Opt::Version => {
            print_version();
            Ok(())
        }
        Opt::Run(opts) => link::run(opts),
    }
}

fn to_pathbuf(s: &OsStr) -> Result<PathBuf> {
    Ok(PathBuf::from(s))
}
