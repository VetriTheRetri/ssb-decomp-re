# halld

A linker for HAL's "relocatable data" in Super Smash Bros. 64.

## Usage
```bash
Usage:
    halld [options] [-L dir]... <script> [-o output.o]
    halld -h | --help
    halld -V | --version

Args:
    <script>    path to a JSON linker script

Options:
    -L --search-dir        Zero or more directories in which to search for 
                           files named in <script>
    -o --output            Path to output object; if passed, this overides the
                           settings.output field in <script>
    -c --header            Path to output a C header file with file id defines
    -d --dependency-file   Path to output a Makefile dep (.d) file
    -h --help              Print this help message
    -V --version           Print version information
```

### Link Script JSON
The script is a simple format with two main keys: `"settings"` and `"script"`. The `"settings"` key is an Object for entering the same info as the CLI options. The `"script"` key is an array of files to link

#### `"settings"`
| Key          | Necessary | Value | Description |
|--------------|-----------|-------|-------------|
| `searchDirs` | false     | str[] | A list of directory paths to check. Added to list pased with CLI option `-L`|
| `output`     | false     | str   | Path to output linked objected |

#### `"script"`
This is an array of files to link into one object. It supports both directly linking in binary data, as well as relocatable ELF objects. 

| Key            | Necessary | Value | Description |
|----------------|-----------|-------|-------------|
| `file`         | true      | str   | Path to the file to link
| `compressed`   | true      | bool  | Should the data from `file` be compressed |
| `compSettings` | false     | obj   | See below |
| `inreloc`      | false     | u32   | Offset in bytes to the first internal relocation. Not used for ELF .obj |
| `exreloc`      | false     | u32   | Offset in bytes to the first external relocation. Not used for ELF .obj |
| `exports`      | false     | [str, u32][] | Array of [symbol, value] for locations in `file`. Not used for ELF .obj |
| `imports`      | false     | u16[] | Array of other files needed for this file. Not used for ELF .obj |

#### `compSettings`
Settings that control vpk0 compression for a `file`

| Key          | Necessary | Value  | Description |
|--------------|-----------|--------|-------------|
| `method`     | false     | 0 || 1 | One Sample (0) or Two Sample (1) |
| `offsets`    | false     | str    | A string tree of offset / moveback bitsizes |
| `lengths`    | false     | str    | A string tree of length / size bitsizes |

