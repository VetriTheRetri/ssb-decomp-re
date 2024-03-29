// place this file in the src directory of https://github.com/tehzz/vpk0

use std::env;
use std::io;
use std::io::prelude::*;
use std::fs::File;
use std::process;

fn main() -> io::Result<()>
{
	let args: Vec<String> = env::args().collect();
	if args.len() != 4 || (args[1] != "c" && args[1] != "d") {
		println!("Usage:");
		println!("  Compress:   vpk0 c in_file_path out_file_path");
		println!("  Decompress: vpk0 d in_file_path out_file_path");
		process::exit(1);
	}

	println!("opening file: {}", args[2]);
	let mut f = File::open(&args[2])?;
	let mut buffer = Vec::new();
	f.read_to_end(&mut buffer)?;

	let out_bytes: Vec<u8>;
	match args[1].as_str() {
		"c" => out_bytes = vpk0::encode_bytes(buffer.as_slice()).unwrap(),
		"d" => out_bytes = vpk0::decode_bytes(buffer.as_slice()).unwrap(),
		&_ => out_bytes = [0].to_vec()
	}

	println!("writing file: {}", args[3]);
	let mut file = File::create(&args[3])?;
	file.write_all(out_bytes.as_slice())?;
	Ok(())
}