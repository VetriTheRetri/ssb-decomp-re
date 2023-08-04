#!/usr/bin/env python3
'''
    Extract necessary assets from the baserom for use in building 
    a matching ssb64 ROM
'''

import argparse
import sys
import subprocess
sys.path.append('doit')
from config import ALL_VERSIONS

BASE = [
    'cargo', 'run', '--release', 
    '--manifest-path', 'tools/rust/Cargo.toml', 
    '--bin', 'extract', 
    '--'
]
CACHE = '.localassets'
ASSESTS = 'assets.yaml'
GITIGNORE = '.gitignore'

def baserom(version):
    return f'baserom.{version}.z64'

def extract(args):
    rom = baserom(args.version)
    cmd = BASE + ['extract', 
        '-a', ASSESTS,
        '-l', CACHE,
        '-r', rom,
        '-v', args.version
    ]
    if args.force:
        cmd.extend(['-f'])
    elif args.dry_run:
        cmd.extend(['-d'])
    
    subprocess.run(cmd)

def clean(_args):
    cmd = BASE + ['clean', CACHE]
    subprocess.run(cmd)

def gitignore(_args):
    cmd = BASE + ['ignore',
        '-a', ASSESTS,
        '-i', GITIGNORE,
        '-r', baserom('us')
    ]
    subprocess.run(cmd)

def main():
    parser = argparse.ArgumentParser()
    subparsers = parser.add_subparsers(title='subcommands')

    parser_ex = subparsers.add_parser('extract', help='extract assets from ROM')
    parser_ex.add_argument('version', default='us', choices=ALL_VERSIONS, help='ROM version to extract assets from')
    parser_ex.add_argument('-f', '--force', action='store_true', help='re-extract all assets (including in-repo .toml files)')
    parser_ex.add_argument('-d', '--dry-run', action='store_true', help='list assets that need to be extracted')
    parser_ex.set_defaults(func=extract)
    
    subparsers.add_parser('gitignore', help='update .gitignore with list of assets').set_defaults(func=gitignore)
    subparsers.add_parser('clean', help='remove assets').set_defaults(func=clean)

    args = parser.parse_args()
    args.func(args)

if __name__ == "__main__":
    main()
