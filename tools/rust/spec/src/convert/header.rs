use super::{Segment, SpecialSegment};
use anyhow::{Context, Result};
use indoc::writedoc;
use std::{
    fs::File,
    io::{self, BufWriter, Write},
    path::Path,
};

pub(super) fn write_c_header(segments: &[Segment], outfile: &Path) -> Result<()> {
    let mut wtr = BufWriter::new(File::create(outfile).context("creating header file")?);

    writedoc!(
        &mut wtr,
        "
        #ifndef GENERATED_LINKER_SEGMENTS_H
        #define GENERATED_LINKER_SEGMENTS_H

    "
    )?;

    for seg in segments {
        let name = seg.name.as_str();
        // all segments have these symbols
        seg_start(&mut wtr, name)?;
        seg_end(&mut wtr, name)?;
        rom_start(&mut wtr, name)?;
        rom_end(&mut wtr, name)?;
        // some segments have other symbols
        match seg.special {
            Some(SpecialSegment::Dynamic) => {
                noload_start(&mut wtr, name)?;
                noload_end(&mut wtr, name)?;
                text_start(&mut wtr, name)?;
                text_end(&mut wtr, name)?;
                data_start(&mut wtr, name)?;
                data_end(&mut wtr, name)?;
            }
            Some(SpecialSegment::System) => {
                noload_start(&mut wtr, name)?;
                noload_end(&mut wtr, name)?;
            }
            Some(SpecialSegment::Boot) | None => (),
        }
    }

    writeln!(&mut wtr, "\n#endif /* GENERATED_LINKER_SEGMENTS_H */")?;

    Ok(())
}

fn write_extern(
    out: &mut BufWriter<File>,
    name: &str,
    location: &str,
    position: &str,
) -> io::Result<()> {
    writeln!(out, "extern char _{}{}{}[];", name, location, position)
}

fn seg_start(out: &mut BufWriter<File>, name: &str) -> io::Result<()> {
    write_extern(out, name, "Seg", "Start")
}

fn seg_end(out: &mut BufWriter<File>, name: &str) -> io::Result<()> {
    write_extern(out, name, "Seg", "End")
}

fn rom_start(out: &mut BufWriter<File>, name: &str) -> io::Result<()> {
    write_extern(out, name, "SegRom", "Start")
}

fn rom_end(out: &mut BufWriter<File>, name: &str) -> io::Result<()> {
    write_extern(out, name, "SegRom", "End")
}

fn noload_start(out: &mut BufWriter<File>, name: &str) -> io::Result<()> {
    write_extern(out, name, "SegNoload", "Start")
}

fn noload_end(out: &mut BufWriter<File>, name: &str) -> io::Result<()> {
    write_extern(out, name, "SegNoload", "End")
}

fn text_start(out: &mut BufWriter<File>, name: &str) -> io::Result<()> {
    write_extern(out, name, "Text", "Start")
}

fn text_end(out: &mut BufWriter<File>, name: &str) -> io::Result<()> {
    write_extern(out, name, "Text", "End")
}

fn data_start(out: &mut BufWriter<File>, name: &str) -> io::Result<()> {
    write_extern(out, name, "Data", "Start")
}

fn data_end(out: &mut BufWriter<File>, name: &str) -> io::Result<()> {
    write_extern(out, name, "Data", "End")
}
