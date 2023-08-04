#!/usr/bin/env python3
'''
    Copy a successful build into the `expected` directory.
    This will provide symbol names when running `diff.py -o`
'''

import shutil
from pathlib import Path

expected = Path('expected')
build = Path('build')

if __name__ == "__main__":
    shutil.rmtree(expected, ignore_errors=True)
    shutil.copytree(build, expected / 'build')
