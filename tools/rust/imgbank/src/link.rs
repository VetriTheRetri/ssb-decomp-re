use anyhow::{Context, Error};
use libsprite::BankConfig;
use std::fmt::Write;
use std::fs;
use std::path::PathBuf;
use toml;

const START: &'static str = "SECTIONS {";
macro_rules! begin_table {
    () => {
        r#"
    .header 0 : AT(0)
    {{
        LONG({entries})
"#
    };
}

macro_rules! offset {
    () => {
        r#"        LONG("{entry}_START")"#
    };
}

macro_rules! begin_entries {
    () => {
        r#"    {sec} :
    {{"#
    };
}

macro_rules! entry {
    () => {
        r#"
        "{entry}_START" = ABSOLUTE(.) ;
        {entry}.o({sec});"#
    };
}

macro_rules! align_section {
    () => {
        "        . = ALIGN({align});"
    };
}

macro_rules! extra_entry {
    () => {
        "        LONG(SIZEOF(.header) + SIZEOF({sec}))"
    };
}

const END_SUBSECTION: &'static str = "    }\n";
const END: &'static str = r#"    /DISCARD/ :
    {
        *(*);
    }
}
"#;

pub fn generate_script(
    input: PathBuf,
    output: Option<PathBuf>,
    section: Option<String>,
) -> Result<(), Error> {
    let section = section.unwrap_or_else(|| ".rodata".into());
    let output = output.unwrap_or_else(|| input.with_extension("ld"));

    let raw = fs::read(&input).context("reading input config toml file")?;
    let config: BankConfig = toml::from_slice(&raw).context("parsing config file")?;

    let mut script = START.to_string();
    let body = write_entries(&config, &section)?;
    script.push_str(&body);
    script.push_str(END);

    fs::write(&output, &script).context("writing out ld script")?;

    Ok(())
}

fn write_entries(config: &BankConfig, section: &str) -> Result<String, Error> {
    let entries = &config.entries;
    let extra = config.include_end;

    let mut offsets = format!(begin_table![], entries = entries.len());
    let mut files = format!(begin_entries![], sec = section);
    for entry in entries.iter() {
        writeln!(&mut offsets, offset![], entry = entry)?;
        writeln!(&mut files, entry![], entry = entry, sec = section)?;
    }
    if extra {
        writeln!(&mut offsets, extra_entry![], sec = section)?;
    }
    writeln!(&mut offsets, align_section![], align = 8)?;
    offsets.push_str(END_SUBSECTION);
    writeln!(&mut files, align_section![], align = 16)?;
    files.push_str(END_SUBSECTION);

    Ok(offsets + &files)
}
