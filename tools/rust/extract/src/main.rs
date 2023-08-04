use anyhow::{Context, Error};
use std::{ffi::OsStr, path::PathBuf};

mod clean;
mod config;
mod extract;
mod ignore;
mod list;
mod local;

type ArgResult<T> = Result<T, pico_args::Error>;

fn print_usage() {
    indoc::printdoc!(
        r#"
        {name} {version}
        Tool for extracting and managing resources from an SSB64 rom

        Usage:
          -h, --help      print this message
          -V, --version   print version info
          extract         extract resource into the repo
          ignore          generate or modify .gitignore to ignore extracted files
          clean           remove extracted assets
          list            generate a list of extracted files

        {name} extract:
          -v, --version {{us}}          SSB64 version to extract assets from
          -r, --rom <file>            path to ROM of `version`
          -a, --assets <file>         path to .toml asset information file
          -l, --local <file>          path to local assets file (created if missing)
          [-f, --force]               replace any already extracted files
          [-d, --dry-run]             show files to extract

        {name} gitignore:
          -r, --rom <file>            path to ROM
          -a, --assets <file>         path to .toml asset information file
          -i, --ignore <file>         path to .gitignore file (created if missing)

        {name} clean <assets file>:
          <assets file>               path to .toml asset information file

        {name} list:
          -v, --version {{us}}          SSB64 version to extract assets from
          -r, --rom <file>            path to ROM of `version`
          -a, --assets <file>         path to .toml asset information file
          [-o, --output <path>]       path to write file list, or stdout if not present

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

fn main() {
    if let Err(e) = run() {
        eprintln!("Error: {:?}", e);
        ::std::process::exit(1);
    }
}

fn run() -> Result<(), Error> {
    let args = Args::from_env().context("parsing CLI args")?;

    match args {
        Args::Extract(info) => extract::extract_assets(info),
        Args::Ignore(info) => ignore::modify_gitignore(info),
        Args::Clean { local } => clean::clean_assets(&local),
        Args::List(info) => list::list_files(info),
        Args::Help => Ok(print_usage()),
        Args::Version => Ok(print_version()),
    }
}

enum Args {
    Extract(Extract),
    Ignore(GitIgnore),
    Clean { local: PathBuf },
    List(FileList),
    Help,
    Version,
}

impl Args {
    fn from_env() -> ArgResult<Self> {
        let mut args = pico_args::Arguments::from_env();

        if args.contains(["-h", "--help"]) {
            return Ok(Self::Help);
        }

        if args.contains(["-V", "--version"]) {
            return Ok(Self::Version);
        }

        match args.subcommand()?.as_deref() {
            Some("extract") => Extract::from_args(args).map(Self::Extract),
            Some("ignore") => GitIgnore::from_args(args).map(Self::Ignore),
            Some("clean") => {
                //let local = args.free_os().and_then(get_first_free).map(PathBuf::from)?;
                let local = args.free_from_os_str(to_pathbuf)?;

                Ok(Self::Clean { local })
            }
            Some("list") => FileList::from_args(args).map(Self::List),
            Some(unk) => {
                println!("Unrecognized subcommand \"{}\"", unk);
                Ok(Self::Help)
            }
            None => Ok(Self::Help),
        }
    }
}

struct Extract {
    /// version of SSB64 to extract from [us]
    version: config::Version,
    /// path to rom
    rom: PathBuf,
    /// path to assets.toml
    assets: PathBuf,
    /// path to local assets file (info on version and already extracted assets)
    local: PathBuf,
    /// replace any already extracted files (default is to do nothing)
    force: bool,
    /// show files to be extracted, but do not extract
    dry_run: bool,
}

impl Extract {
    fn from_args(mut args: pico_args::Arguments) -> ArgResult<Self> {
        let version = args.value_from_str(["-v", "--version"])?;
        let rom = args.value_from_os_str(["-r", "--rom"], to_pathbuf)?;
        let assets = args.value_from_os_str(["-a", "--assets"], to_pathbuf)?;
        let local = args.value_from_os_str(["-l", "--local"], to_pathbuf)?;
        let force = args.contains(["-f", "--force"]);
        let dry_run = args.contains(["-d", "--dry-run"]);

        Ok(Self {
            version,
            rom,
            assets,
            local,
            force,
            dry_run,
        })
    }
}

struct GitIgnore {
    /// path to rom
    rom: PathBuf,
    /// path to assets.toml
    assets: PathBuf,
    /// path to .gitignore, or path for new .gitignore
    ignore: PathBuf,
}

impl GitIgnore {
    fn from_args(mut args: pico_args::Arguments) -> ArgResult<Self> {
        let rom = args.value_from_os_str(["-r", "--rom"], to_pathbuf)?;
        let assets = args.value_from_os_str(["-a", "--assets"], to_pathbuf)?;
        let ignore = args.value_from_os_str(["-i", "--ignore"], to_pathbuf)?;

        Ok(Self {
            rom,
            assets,
            ignore,
        })
    }
}

struct FileList {
    version: config::Version,
    rom: PathBuf,
    assets: PathBuf,
    output: Option<PathBuf>,
}

impl FileList {
    fn from_args(mut args: pico_args::Arguments) -> ArgResult<Self> {
        let version = args.value_from_str(["-v", "--version"])?;
        let rom = args.value_from_os_str(["-r", "--rom"], to_pathbuf)?;
        let assets = args.value_from_os_str(["-a", "--assets"], to_pathbuf)?;
        let output = args
            .opt_value_from_os_str(["-o", "--output"], to_pathbuf)?
            .and_then(check_stdout);

        Ok(Self {
            version,
            rom,
            assets,
            output,
        })
    }
}

fn to_pathbuf(s: &OsStr) -> ArgResult<PathBuf> {
    Ok(PathBuf::from(s.to_os_string()))
}

fn check_stdout(p: PathBuf) -> Option<PathBuf> {
    if p.as_os_str() == "-" {
        None
    } else {
        Some(p)
    }
}
