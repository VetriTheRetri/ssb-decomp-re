use std::{
    io::{self, Write},
    path::Path,
};

use crate::link::{self, CDefs};

pub(super) fn write_c_header(
    wtr: &mut impl Write,
    obj_path: &Path,
    files: &CDefs,
) -> io::Result<()> {
    let guard = {
        let mut s = link::fmt_as_cident(obj_path);
        s += "_H";
        s
    };

    write_ifguard(wtr, &guard)?;
    for (name, id) in files {
        writeln!(wtr, "#define {} {}", name, id)?;
    }
    write_endif(wtr, &guard)
}

fn write_ifguard(wtr: &mut impl Write, guard: &str) -> io::Result<()> {
    writeln!(wtr, "#ifndef {g}\n#define {g}\n", g = guard)
}

fn write_endif(wtr: &mut impl Write, guard: &str) -> io::Result<()> {
    writeln!(wtr, "\n#endif /* {} */", guard)
}
