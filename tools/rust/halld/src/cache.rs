use md5::{Digest, Md5};
use std::{fs, io, path::PathBuf};

pub(crate) struct DataCache {
    dir: PathBuf,
}

impl DataCache {
    pub(crate) fn new(dir: PathBuf) -> io::Result<Self> {
        fs::create_dir_all(&dir).map(|_| Self { dir })
    }

    pub(crate) fn read(&self, data: &[u8]) -> Option<Vec<u8>> {
        let store = self.name_data(data);
        fs::read(store).ok()
    }

    pub(crate) fn write(&self, raw: &[u8], data: &[u8]) -> io::Result<()> {
        let store = self.name_data(raw);
        fs::write(store, data)
    }

    fn name_data(&self, data: &[u8]) -> PathBuf {
        let hash = Md5::new().chain_update(data).finalize();
        let fname = format!("{}.bin", base16ct::lower::encode_string(&hash));

        self.dir.join(fname)
    }
}
