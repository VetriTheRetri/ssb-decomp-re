# Installation and Building
## Step 1: Install Dependencies
### macOS
The repo should be compatible with both `x84_64` and `arm64` macOS.

[Install Rust (via rustup)](https://rustup.rs)

[Install Homebrew](https://brew.sh)

Then, use Homebrew to install the folllowing dependencies:

    brew install python3 capstone tehzz/n64-dev/mips64-elf-binutils

Finally, install [doit](https://pydoit.org/) via Homebrew `pip3`

    pip3 install doit

### Linux (Debian)
[Install Rust (via rustup)](https://rustup.rs) - This repo will need the most recent stable version of Rust, so do not use the system `rustc` or `cargo`. (At least for now)

Then install the universal debian dependencies:

    sudo apt update
    sudo apt install git build-essential libcapstone3 python3 python3-doit

For `x86_64`, install gcc multilib. This allows for the system gcc to check the syntax of the 32bit game code

    sudo apt install gcc-multilib

For `arm64`, the system `gcc` does not support 32bit builds, so it cannot be used to check the syntax of the game code. Instead, install a 32bit compatible ARM toolchain

    sudo apt install gcc-arm-linux-gnueabihf

Finally, you need to build a copy of the `mips64-elf` GNU binutils. Right now, there is no `.deb` for this. There is a script in `utils` for "easy" building:

    utils/build-posix64-toolchain.sh binutils output/location

## Step 2: Copy Baserom(s) into Repo
For each version of SSB64 you want to build, put that version's big-endian z64 ROM at `./baserom.{version}.z64`.
The baserom is used for asset extraction.

## Step 3: Build the ROM
Use `doit` to build your desired version of SSB64:

    doit -n4 VERSION=us       # Build the NTSC-U version with 4 concurrent jobs

# Build Options
## General `doit` Options
| flag       | description |
|------------|-------------|
| `-n {int}` | number of subprocesses | 
| `help`     | print `doit`'s help |

## CLI Config Defines
These configuration options must go after any `doit` options and after any `doit` tasks

| define       | values | description |
|--------------|--------|-------------|
|`VERSION`     | us     | SSB64 version to build |
|`NON_MATCHING`| 0, 1   | Use (hopefully) equivalent C code for unmatched functions |
|`AVOID_UB`    | 0, 1   | Avoid any UB present in matched code; enables `NON_MATCHING` as well |
|`TOOLCHAIN`   | ido7.1, ido5.3, qemu-ido7.1, qemu-ido5.3 | Set the MIPS cross compiler for game code |
|`LIBULTRA_TC` | ido7.1, ido5.3, qemu-ido7.1, qemu-ido5.3 | Set the MIPS cross compiler for libultra code |
|`QEMU_IRIX`   | path   | Use `path` as qemu-irix instead of binary in `PATH` |

# Dependency Info
* Rust
  - language for tooling
* Python3
  - build system (doit)
  - inline-asm for `ido` compiler
  - helper scripts to aid decompilation (see [`utils`](.\utils))
* capstone
  - library needed for `ido` toolchain static recompilation
* mips64-elf binutils
  - provides assembler for game asm
  - provides linker and archiver for final rom
* qemu-irix
  - can be used to run all IDO binaries (see `TOOLCHAIN` and `LIBULTRA_TC` build options)
