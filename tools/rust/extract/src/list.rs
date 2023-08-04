use crate::config::Assets;
use crate::extract::{self, ExtractContext, ToExtract};
use crate::FileList;
use anyhow::{Context, Error};
use std::collections::BTreeSet;
use std::{
    fs,
    io::{self, BufWriter, Write},
    path::Path,
};

pub(crate) fn list_files(info: FileList) -> Result<(), Error> {
    let rom = fs::read(&info.rom).context("reading rom file")?;
    let assets = Assets::from_path(&info.assets).context("parsing assets")?;
    let ctx = ExtractContext {
        version: info.version,
        rom: &rom,
        force: true,
    };
    let files = extract::generate_todos(&assets, ctx)
        .map(ToExtract::into_filename)
        .collect::<BTreeSet<_>>();

    let mut output = get_output(info.output.as_deref()).context("opening output")?;
    for f in files {
        writeln!(&mut output, "{}", f.display()).context("writing to output")?;
    }

    Ok(())
}

fn get_output(p: Option<&Path>) -> io::Result<Box<dyn Write>> {
    if let Some(p) = p {
        let f = fs::File::create(p)?;
        let wtr = BufWriter::new(f);

        Ok(Box::new(wtr) as Box<dyn Write>)
    } else {
        Ok(Box::new(io::stdout()) as Box<dyn Write>)
    }
}
