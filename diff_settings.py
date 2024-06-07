#!/usr/bin/env python3

def apply(config, args):
    config['baseimg'] = 'baserom.us.z64'
    config['myimg'] = 'build/smashbrothers.us.z64'
    config['mapfile'] = 'build/smashbrothers.us.map'
    config['source_directories'] = ['.']
    config["objdump_flags"] = ["-M", "reg-names=32"]
    config["expected_dir"] = f"expected/"
