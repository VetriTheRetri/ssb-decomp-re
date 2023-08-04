use crate::config::SimpleBin;
use crate::extract::{usize_range, ExtractContext, ExtractTask, ToExtract};
use anyhow::Error;
use std::borrow::Cow;
use std::fs;
use std::path::Path;

pub(super) fn todo<'a>(
    bins: &'a [SimpleBin],
    ctx: ExtractContext<'a>,
) -> impl Iterator<Item = ToExtract<'a>> {
    bins.iter().filter_map(move |bin| {
        bin.offset[ctx.version].as_ref().map(|offset| ToExtract {
            out: Cow::from(&bin.path),
            info: ExtractTask::Binary(&ctx.rom[usize_range(offset)]),
        })
    })
}

pub(super) fn extract(out: &Path, data: &[u8]) -> Result<(), Error> {
    fs::write(out, data).map_err(Into::into)
}
