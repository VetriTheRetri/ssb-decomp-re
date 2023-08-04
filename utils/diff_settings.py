#!/usr/bin/env python3

def add_custom_arguments(parser):
    group = parser.add_mutually_exclusive_group(required=False)
    group.add_argument('-u', dest='lang', action='store_const', const='us',
            help="Set version to US.")


def apply(config, args):
    lang = args.lang or 'us'

    config["baseimg"] = f'baserom.{lang}.z64'
    config["myimg"] = f'build/{lang}/ssb64.{lang}.z64'
    config["mapfile"] = f'build/{lang}/ssb64.{lang}.map'
    config["source_directories"] = ['game/src']
    config["show_line_numbers_default"] = True
    config["arch"] = "mips"
    config["map_format"] = "gnu" # gnu or mw
    config["make_command"] = ['doit']
    # config["mw_build_dir"] = "build/" # only needed for mw map format
    # config["makeflags"] = []
    # config["objdump_executable"] = ""

