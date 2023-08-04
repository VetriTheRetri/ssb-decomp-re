use std::{
    fmt::Write as _,
    io::{self, Write},
    path::{Path, PathBuf},
};

pub(super) fn write_make_dep(
    wtr: &mut impl Write,
    obj: &Path,
    script: &Path,
    deps: &[PathBuf],
) -> io::Result<()> {
    let mut buf = String::with_capacity(deps.len() * 20);
    let all_deps = std::iter::once(script).chain(deps.iter().map(|p| p.as_path()));

    write!(wtr, "{}: ", obj.display())?;
    for dep in all_deps {
        write!(wtr, "\\\n  {} ", dep.display())?;
        writeln!(&mut buf, "{}:\n", dep.display()).unwrap();
    }

    write!(wtr, "\n\n{}", buf)
}
