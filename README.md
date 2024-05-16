# Super Smash Bros. 64 Disassembly

A very WIP dissassembly of the first Smash Bros. game for the Nintendo 64.

| ROM          | SHA1                                      |
|--------------|-------------------------------------------|
| ssb64.us.z64 | `e2929e10fccc0aa84e5776227e798abc07cedabf`|

To setup and build the rom, see below

# Install dependencies

`bash ./installDependencies.sh`

# Extract files, and run the initial build

`make init`

# Build any changes

`make`

# Debugging
There's a few handy scripts to help with debugging non matches after making changes.

| Tool               | Details                                                                |
|---------------------------------------------------------------------------------------------|
|`first_diff.py`     | Finds the location, and cause of most diffs from the baserom           |
|---------------------------------------------------------------------------------------------|
|`livediff.sh`       | Run it with the function you're looking to do some decomp work on      |
|                    | and it will set up a live diffing session where all changes saved will |
|                    | automatically build and udpate the session.                            |
|---------------------------------------------------------------------------------------------|
|`mips_to_c.sh`      | Pass a file, and function to this and have it generate all required    |
|                    | context, and a file in m2cfiles folder with the m2c output to start    |
|                    | working with for matching purposes.                                    |
