use std::{
    fs::File,
    io::{BufWriter, Write},
    path::Path,
};

use super::{Command, LoadKind, ObjKind, Section, Segment, SpecialSegment};
use anyhow::{Context, Result};
use indoc::writedoc;

const ROMPOS: &str = "__romPos";
const INDENT: &str = "    ";

pub(super) fn write_ldscript(raw: &[Segment], out: &Path) -> Result<()> {
    let mut out = BufWriter::new(File::create(out).context("creating ldscript file")?);

    writedoc!(
        &mut out,
        "
        SECTIONS
        {{
            {rp} = 0;
        
        ",
        rp = ROMPOS
    )?;

    for seg in raw {
        write_segment(&mut out, seg)?;
    }

    writedoc!(
        &mut out,
        "
            /DISCARD/ :
            {{
                *(*);
            }}
        }}
    "
    )?;

    Ok(())
}

fn write_segment(out: impl Write, seg: &Segment) -> Result<()> {
    let mut organizer = Holder::new(seg.files.len(), seg.special);
    for cmd in &seg.files {
        organizer.add(cmd);
    }

    seg_write(out, seg, organizer)?;
    Ok(())
}

fn seg_write<W: Write>(mut out: W, seg: &Segment, held: Holder) -> Result<()> {
    let begin_seg = |out: &mut W| {
        writedoc!(
            out,
            "
            {sp}_{name}SegStart = ADDR(.{name});
            {sp}_{name}SegRomStart = {rp};
        ",
            name = seg.name,
            rp = ROMPOS,
            sp = INDENT,
        )
    };
    let end_seg = |out: &mut W| {
        writedoc!(
            out,
            "
            {sp}}}
            {sp}_{name}SegEnd = ADDR(.{name}) + SIZEOF(.{name});
            {sp}_{name}SegRomEnd = {rp} + SIZEOF(.{name});
            {sp}{rp} += SIZEOF(.{name});

        ",
            sp = INDENT,
            name = seg.name,
            rp = ROMPOS
        )
    };

    let begin_noload = |out: &mut W| {
        writedoc!(
            out,
            "
            {sp}_{name}SegNoloadStart = ADDR(.{name}.noload);
            {sp}.{name}.noload (NOLOAD) :
            {sp}{{
        ",
            name = seg.name,
            sp = INDENT,
        )
    };
    let end_noload = |out: &mut W| {
        writedoc!(
            out,
            "
            {sp}}}
            {sp}_{name}SegNoloadEnd = ADDR(.{name}.noload) + SIZEOF(.{name}.noload);

        ",
            name = seg.name,
            sp = INDENT,
        )
    };
    let ovl_subarea = |out: &mut W, part: &str, loc: &str| {
        writeln!(
            out,
            "{sp}{sp}_{name}{part}{loc} = ABSOLUTE(.);",
            sp = INDENT,
            name = seg.name,
            part = part,
            loc = loc
        )
    };
    let begin_ovl_text = |out| ovl_subarea(out, "Text", "Start");
    let end_ovl_text = |out| ovl_subarea(out, "Text", "End");
    let begin_ovl_data = |out| ovl_subarea(out, "Data", "Start");
    let end_ovl_data = |out| ovl_subarea(out, "Data", "End");

    let addr_seg = |out: &mut W| {
        match seg.load {
            LoadKind::Absolute(addr) => writeln!(
                out,
                "{sp}.{name} {addr:#08X} : AT({rp})",
                sp = INDENT,
                addr = addr,
                name = seg.name,
                rp = ROMPOS
            ),
            LoadKind::Overlay(ref after) => writeln!(
                out,
                "{sp}.{name} _{after}SegNoloadEnd : AT({rp})",
                sp = INDENT,
                after = after,
                name = seg.name,
                rp = ROMPOS
            ),
        }?;
        writeln!(out, "{}{{", INDENT)
    };

    let print_obj = |out: &mut W, sec: Section, obj: &ObjKind| -> Result<()> {
        match obj {
            ObjKind::Obj(p) => writeln!(
                out,
                "{sp}{sp}{p}({sec});",
                sp = INDENT,
                p = p.display(),
                sec = sec.as_str()
            )?,
            ObjKind::Lib { lib, objs } => {
                for p in objs {
                    writeln!(
                        out,
                        "{sp}{sp}*lib{lib}.a:{p}({sec});",
                        sp = INDENT,
                        lib = lib,
                        p = p.display(),
                        sec = sec.as_str()
                    )?
                }
            }
        }
        Ok(())
    };

    let print_section_store = |out: &mut W, ss: SectionStore| -> Result<()> {
        for (section, objs) in ss.store {
            for obj in objs {
                print_obj(out, section, obj)?;
            }
        }
        Ok(())
    };

    let full_segment = |out: &mut W, ss| -> Result<()> {
        begin_seg(out)?;
        addr_seg(out)?;
        print_section_store(out, ss)?;
        end_seg(out)?;
        Ok(())
    };

    let noload_segment = |out: &mut W, ss| -> Result<()> {
        begin_noload(out)?;
        print_section_store(out, ss)?;
        end_noload(out)?;
        Ok(())
    };

    let system_noload = |out: &mut W, ss| -> Result<()> {
        begin_noload(out)?;
        print_section_store(out, ss)?;
        // entry.s assume 8-byte alignment for system BSS
        writeln!(out, "\n{sp}{sp}. = ALIGN(8);", sp = INDENT)?;
        end_noload(out)?;
        // split noload size symbols for gas for entry.s
        writeln!(
            out,
            "{sp}_{name}SegNoloadSizeHi = SIZEOF(.{name}.noload) >> 16;",
            sp = INDENT,
            name = seg.name
        )?;
        writeln!(
            out,
            "{sp}_{name}SegNoloadSizeLo = SIZEOF(.{name}.noload) & 0xFFFF;",
            sp = INDENT,
            name = seg.name
        )?;
        writeln!(out)?;
        Ok(())
    };

    match held {
        Holder::Simple(ss) => {
            full_segment(&mut out, ss)?
            // todo: add size check for boot (== 0x400)
        }
        Holder::System { load, noload } => {
            full_segment(&mut out, load)?;
            system_noload(&mut out, noload)?;
            // todo: add system size check (== 0x1000) and/or pad?
        }
        Holder::Dynamic { text, data, noload } => {
            // have to get the vaddr for text and data sections for overlay loading
            begin_seg(&mut out)?;
            addr_seg(&mut out)?;
            begin_ovl_text(&mut out)?;
            print_section_store(&mut out, text)?;
            end_ovl_text(&mut out)?;
            begin_ovl_data(&mut out)?;
            print_section_store(&mut out, data)?;
            end_ovl_data(&mut out)?;
            end_seg(&mut out)?;
            // no load works as normal
            noload_segment(&mut out, noload)?;
        }
    }

    Ok(())
}

struct SectionStore<'a> {
    store: Vec<(Section, Vec<&'a ObjKind>)>,
    init: usize,
}

impl<'a> SectionStore<'a> {
    fn new(init: usize) -> Self {
        Self {
            store: Vec::with_capacity(Section::TOTAL),
            init,
        }
    }

    fn add(&mut self, sec: Section, obj: &'a ObjKind) {
        let prior = if let Some(found) = self.store.iter_mut().find(|(s, _)| *s == sec) {
            &mut found.1
        } else {
            self.store.push((sec, Vec::with_capacity(self.init)));

            &mut self.store.last_mut().unwrap().1
        };

        prior.push(obj);
    }
}

enum Holder<'a> {
    Simple(SectionStore<'a>),
    System {
        load: SectionStore<'a>,
        noload: SectionStore<'a>,
    },
    Dynamic {
        text: SectionStore<'a>,
        data: SectionStore<'a>,
        noload: SectionStore<'a>,
    },
}

impl<'a> Holder<'a> {
    fn new(cap: usize, kind: Option<SpecialSegment>) -> Self {
        let new_store = || SectionStore::new(cap);

        match kind {
            None | Some(SpecialSegment::Boot) => Self::Simple(new_store()),
            Some(SpecialSegment::System) => Self::System {
                load: new_store(),
                noload: new_store(),
            },
            Some(SpecialSegment::Dynamic) => Self::Dynamic {
                text: new_store(),
                data: new_store(),
                noload: new_store(),
            },
        }
    }

    fn add(&mut self, cmd: &'a Command) {
        for &sec in &cmd.sections {
            let target = match self {
                Self::Simple(s) => s,
                Self::System { load, noload } => {
                    if sec.is_noload() {
                        noload
                    } else {
                        load
                    }
                }
                Self::Dynamic { text, data, noload } => match sec {
                    Section::Text => text,
                    Section::Data | Section::Rodata => data,
                    Section::BSS => noload,
                    _ => panic!("unexpected section for dynamic code segment: {:?}", sec),
                },
            };

            target.add(sec, &cmd.source);
        }
    }
}
