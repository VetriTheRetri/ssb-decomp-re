#!/usr/bin/python3
"""
Verify that compiled relocData C files produce identical binaries to the originals.

Usage:
    verifyRelocOffsets.py <file_id> [<file_id> ...]

Compares build/src/relocData/<id>.data.bin against the original
assets/relocData/<id>.vpk0.bin or <id>.bin.
"""

import os
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.join(SCRIPT_DIR, "..")
# Default to the US tree; main() rebinds via _bind_version() once --version is parsed.
EXTRACTED_FILES_PATH = os.path.join(PROJECT_DIR, "assets", "us", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")
COMPRESSED_FILE_COUNT = 499


def _bind_version(version):
    global EXTRACTED_FILES_PATH
    EXTRACTED_FILES_PATH = os.path.join(PROJECT_DIR, "assets", version, "relocData")


def get_original_path(file_id):
    """Get the path to the original decompressed binary, version-agnostic."""
    vpk0_path = os.path.join(EXTRACTED_FILES_PATH, f"{file_id}.vpk0.bin")
    if os.path.exists(vpk0_path):
        return vpk0_path
    return os.path.join(EXTRACTED_FILES_PATH, f"{file_id}.bin")


def verify_file(file_id):
    """Verify a single file. Returns True if matching, False otherwise."""
    original_path = get_original_path(file_id)

    # The Makefile extracts .data to replace the original, so we compare
    # the .o's extracted .data against a backup or use objcopy inline
    obj_path = os.path.join(BUILD_DIR, ".build", f"{file_id}.o")

    if not os.path.exists(original_path):
        print(f"  [{file_id}] SKIP: original not found ({original_path})")
        return True

    if not os.path.exists(obj_path):
        print(f"  [{file_id}] SKIP: compiled object not found ({obj_path})")
        return True

    # Extract .data section from object file to temp
    import subprocess
    import tempfile

    with tempfile.NamedTemporaryFile(suffix='.bin', delete=False) as tmp:
        tmp_path = tmp.name

    try:
        # Detect objcopy binary
        for prefix in ['mips-linux-gnu', 'mips-elf']:
            objcopy = f"{prefix}-objcopy"
            try:
                subprocess.run([objcopy, '--version'], capture_output=True, check=True)
                break
            except (FileNotFoundError, subprocess.CalledProcessError):
                continue
        else:
            print(f"  [{file_id}] ERROR: no mips objcopy found")
            return False

        subprocess.run(
            [objcopy, '-O', 'binary', '--only-section=.data', obj_path, tmp_path],
            check=True, capture_output=True
        )

        with open(original_path, 'rb') as f:
            original_data = f.read()
        with open(tmp_path, 'rb') as f:
            compiled_data = f.read()

        if original_data == compiled_data:
            print(f"  [{file_id}] MATCH ({len(original_data)} bytes)")
            return True
        else:
            # Find first difference
            min_len = min(len(original_data), len(compiled_data))
            for i in range(min_len):
                if original_data[i] != compiled_data[i]:
                    print(f"  [{file_id}] MISMATCH at offset 0x{i:X}: "
                          f"original=0x{original_data[i]:02X} compiled=0x{compiled_data[i]:02X}")
                    break
            if len(original_data) != len(compiled_data):
                print(f"  [{file_id}] SIZE MISMATCH: original={len(original_data)} compiled={len(compiled_data)}")
            return False
    finally:
        if os.path.exists(tmp_path):
            os.unlink(tmp_path)


def main():
    # Strip a single optional --version <v> arg from anywhere in argv.
    args = sys.argv[1:]
    if "--version" in args:
        i = args.index("--version")
        _bind_version(args[i + 1])
        del args[i:i+2]

    if not args:
        print("Usage: verifyRelocOffsets.py [--version us|jp] <file_id> [<file_id> ...]")
        sys.exit(1)

    file_ids = [int(x) for x in args]
    all_match = True

    print(f"Verifying {len(file_ids)} relocData file(s)...")
    for file_id in file_ids:
        if not verify_file(file_id):
            all_match = False

    if all_match:
        print("All files match!")
    else:
        print("VERIFICATION FAILED: some files do not match")
        sys.exit(1)


if __name__ == "__main__":
    main()
