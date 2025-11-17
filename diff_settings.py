#!/usr/bin/env python3

def apply(config, args):
    config['baseimg'] = f'baserom.{args.version}.z64'
    config['myimg'] = f'build/smashbrothers.{args.version}.z64'
    config['mapfile'] = f'build/smashbrothers.{args.version}.map'
    config['source_directories'] = ['.']
    config["objdump_flags"] = ["-M", "reg-names=32"]
    config["expected_dir"] = f"expected/"
