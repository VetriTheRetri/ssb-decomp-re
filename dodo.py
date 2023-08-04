from doit import get_var, create_after
from pathlib import Path
import subprocess
import sys
import platform

from doutils.parsemk import parse_mk_dependencies
from doutils.toolchain import ToolChain
from doutils.config import Config, ALL_VERSIONS
from doutils.pathutil import append_suffix, up_one_dir


############ Configuration ###########################
# Read CLI options to configure this build
config = Config(
    Path('build'), # Location for build artifacts
    Path('game'),  # Location for all game source files
    Path('tools')  # Location for supporting tool binaries and scripts
)
# Toolchain (cc, as, ld, objcopy) based on user config
tc = ToolChain.from_config(config)

DOIT_CONFIG = {
    'default_tasks': [
        'print_config', 
        'compare' if not config.no_match else 'build_rom'
    ], 
    'reporter': 'executed-only'
}

########## Tools #####################################
# General System Utilities
shasum = 'shasum'

# Rust Tooling
rust_dir = config.tools / 'rust'
rust_manifest = rust_dir / 'Cargo.toml'
rust_output_dir = rust_dir / 'target' / 'release'
n64gfx = rust_output_dir / 'n64gfx'
imgbank = rust_output_dir / 'imgbank'
extract = rust_output_dir / 'extract'
spec = rust_output_dir / 'spec'
halld = rust_output_dir / 'halld'
rust_tools = [n64gfx, imgbank, extract, spec, halld]

def task_rust_tools():
    ''' Use cargo to check and rebuild rust based tools '''
    cargo_build = ['cargo', 'build', '--release', '--manifest-path', rust_manifest]
    for tool in rust_tools:
        name = tool.name
        cargo_build.extend(['-p', name])

    return {
        'actions': [cargo_build],
        'targets': rust_tools
    }

# n64crc tool
n64crc_src = config.tools / 'n64crc.c'
n64crc = n64crc_src.with_suffix('')

def task_n64crc():
    ''' Build the n64crc tool '''
    flags = ['-Wall', '-Wextra', '-pedantic', '-O3']

    return {
        'actions': [tc.system.c.CC + flags + ['-o', n64crc, n64crc_src]],
        'targets': [n64crc],
        'file_dep': [n64crc_src],
    }

# Libultra 64bit mips3 Patcher
patcher_src = config.tools / 'patch_libultra_math.c'
patcher = patcher_src.with_suffix('')

def task_libultra_patcher():
    ''' Build the libultra math pather tool '''
    flags = ['-I', '.', '-Wall', '-Wextra', '-Wno-unused-parameter', '-pedantic', '-O2']
    compile = tc.system.c.CC + flags + ['-o', patcher, patcher_src]

    return {
        'actions': [compile],
        'targets': [patcher],
        'file_dep': [patcher_src],
    }

# Ido Recompiled Toolchain
recomp = config.tools / 'recomp'
recomp_base = config.tools / 'ido-recomp'
recomp_src = recomp_base / 'recomp.cpp'
irix_root = config.tools / 'irix'
irix_53 = irix_root / 'ido5.3'
irix_71 = irix_root / 'ido7.1'
irix_lib = Path('usr/lib')
irix_bin = Path('usr/bin')

recomp_53_out = config.tools / 'ido5.3'
recomp_71_out = config.tools / 'ido7.1'

# Irix libc wrapper library
recomp_libc = recomp_base / 'libc_impl.c'
recomp_libc_h = recomp_libc.with_suffix('.h')
recomp_libc_flags = ['-O2', '-fno-strict-aliasing', '-Wno-deprecated-declarations']

# use `-fno-pie` on clang and `-no-pie` on gcc
recompflags = ['-O2', '-fno-strict-aliasing', '-Wno-tautological-compare', '-lm']
if 'arm' not in platform.processor():
    if config.system_toolchain == 'clang':
        recompflags.append('-fno-pie')
    elif config.system_toolchain == 'gcc':
        recompflags.append('-no-pie')

# (Prog, Irix Bin/Lib Path, Recomp Flags, Build Flags)
ido53_progs = [
    ('acpp',  irix_53 / irix_lib / 'acpp',  [], recompflags),
    #('as',   irix_53 / irix_lib / 'as',   [], recompflags),
    ('as0',  irix_53 / irix_lib / 'as0',  [], recompflags),
    ('as1',  irix_53 / irix_lib / 'as1',  [], recompflags),
    ('cc',   irix_53 / irix_bin / 'cc',   [], recompflags),
    ('cfe',  irix_53 / irix_lib / 'cfe',  [], recompflags),
    ('ugen', irix_53 / irix_lib / 'ugen', ['--conservative'], recompflags),
    ('ujoin', irix_53 / irix_lib / 'ujoin', [], recompflags),
    ('uld', irix_53 / irix_lib / 'uld', [], recompflags),
    ('umerge', irix_53 / irix_lib / 'umerge', [], recompflags),
    ('uopt', irix_53 / irix_lib / 'uopt', [], recompflags),
    ('usplit', irix_53 / irix_lib / 'usplit', [], recompflags),
]

ido71_progs = [
    ('as1',  irix_71 / irix_lib / 'as1',  [], recompflags),
    ('cc',   irix_71 / irix_bin / 'cc',   [], recompflags),
    ('cfe',  irix_71 / irix_lib / 'cfe',  [], recompflags),
    ('ugen', irix_71 / irix_lib / 'ugen', [], recompflags),
    ('uopt', irix_71 / irix_lib / 'uopt', [], recompflags),
]

# (name, programs, output directory, version defines, error strings)
ido_toolchains = [
    ('ido5.3', ido53_progs, recomp_53_out, '-DIDO53', irix_53/irix_lib/'err.english.cc'),
    ('ido7.1', ido71_progs, recomp_71_out, '-DIDO71', irix_71/irix_lib/'err.english.cc')
]

# Recompiled binaries
ido71_tools = [recomp_71_out / p[0] for p in ido71_progs]
ido53_tools = [recomp_53_out / p[0] for p in ido53_progs]

def task_build_recomp():
    ''' Build the IDO recompiler tool '''
    capstone_flags = str(subprocess.run(
        "pkg-config --cflags --libs capstone", 
        shell=True, check=True, capture_output=True
        ).stdout, 'utf-8').strip().split(' ')
    
    return {
        'actions': [tc.system.cxx.CXX + [recomp_src, '-o', recomp, '-O2', '-std=c++11', '-Wno-switch'] + capstone_flags],
        'file_dep': [recomp_src],
        'targets': [recomp],
    }

def task_recompile_ido():
    ''' Translate IDO toolchain (5.3, 7.1) into native binaries '''
    CC = tc.system.c.CC

    for (name, programs, out_dir, libc_defs, errstr) in ido_toolchains:
        libc = out_dir / 'libc_impl.o'
        mkdir_task = f'recompile_ido:{name}-create-output-dir'
        errstr_dst = out_dir / errstr.name

        yield {
            'name': name + '-create-output-dir',
            'actions': [['mkdir', '-p', out_dir]],
            'targets': [out_dir],
            'uptodate': [out_dir.exists()],
        }

        yield {
            'name': name + '-libc',
            'actions': [CC + recomp_libc_flags + ['-c', recomp_libc, libc_defs, '-o', libc]],
            'targets': [libc],
            'file_dep': [recomp_libc, recomp_libc_h],
            'task_dep': [mkdir_task]
        }

        yield {
            'name': name + '-copy-error-strings',
            'actions': [['cp', '-f', errstr, errstr_dst]],
            'targets': [errstr_dst],
            'file_dep': [errstr]
        }

        for (prog, src, recomp_flags, build_flags) in programs:
            rf = " ".join(recomp_flags)
            prog_exe = out_dir / prog
            prog_c = prog_exe.with_suffix('.c')
            yield {
                'name': name + '-translate-' + prog,
                'actions': [f'{recomp} {rf} {src} > {prog_c}'],
                'targets': [prog_c],
                'file_dep': [src, recomp],
                'task_dep': [mkdir_task]
            }

            yield {
                'name': name + '-compile-' + prog,
                'actions': [CC + [libc, prog_c, '-o', prog_exe, '-I', recomp_base] + build_flags],
                'targets': [prog_exe],
                'file_dep': [libc, prog_c, errstr_dst],
                'task_dep': [mkdir_task]
            }

def task_clean_recompiled_ido():
    return {
        'actions': [['rm', '-rf', recomp_53_out, recomp_71_out, recomp]]
    }

########## Housekeeping ##############################
def task_distclean():
    ''' Remove all possible build artifacts '''

    # Asset removal must happen before tool cleaning
    return {
        'actions': [
            f'rm -rf {config.all_builds}',
            f'rm -rf {patcher}',
            f'rm -rf {n64crc}',
            f'cargo clean --manifest-path {rust_manifest}',
        ],
        'task_dep': [
            'clean_recompiled_ido',
            'clean_assets',
        ],
    }

def task_print_config():
    ''' Print build config info to stdout '''
    info = str(config) #+ str(tc)

    return {
        'actions': [['echo', info]],
        'verbosity': 2,
    }

########## Asset Extraction ##########################
asset_cache = Path('.localassets')
assets = Path('assets.yaml')
extracted_assets = config.build_dir / 'extracted-assets.txt'
baserom = Path(f'baserom.{config.version}.z64')

def task_generate_asset_list():
    ''' Create a list of assets that are extracted from the baserom '''
    list_assets = [ extract,
        'list',
        '-v', config.version,
        '-r', baserom,
        '-a', assets,
        '-o', extracted_assets,
    ]

    return {
        'actions': [list_assets],
        'file_dep': [extract, baserom, assets],
        'targets': [extracted_assets],
    }

@create_after(executed='generate_asset_list', target_regex='*')
def task_extract_assets():
    ''' Extract necessary assets from SSB64 baserom '''

    extract_cmd = [ extract,
        'extract',
        '-a', assets,
        '-l', asset_cache,
        '-r', baserom,
        '-v', config.version
    ]

    files = []
    try:
        with open(extracted_assets) as f:
            files = [line.strip() for line in f]
    except FileNotFoundError:
        # doit will only create this task after making the list if 
        # there is an active run. For other commands (list, info, etc.),
        # it will create this task as normal
        pass
    
    return {
        'actions': [extract_cmd],
        'file_dep': [extract, baserom, assets, asset_cache, extracted_assets],
        'targets': files,
    }

def task_clean_assets():
    clean_cmd = [ extract, 'clean', asset_cache ]
    remove_list = [ 'rm', '-f', extracted_assets ]

    return {
        'actions': [clean_cmd, remove_list],
        'file_dep': [extract],
        'uptodate': [False],
    }

def ensure_asset_extraction():
    ''' Return the asset extraction task name if assets are not yet extracted '''
    assets_are_extracted = asset_cache.exists() and extracted_assets.exists()

    return [] if assets_are_extracted else ['extract_assets']

########## Generated Headers #########################
geninc_dir = config.make_output_dir('include')
linkersegs = geninc_dir / 'linkersegs.h'
rld_fids_h  = geninc_dir / 'rld_fids.h'
generated_incs = [linkersegs, rld_fids_h]

########## ROM Linking and Creation ##################
# ROM and Build Artifacts
rom_name = f"ssb64.{config.target_version}"
rom_elf = config.build_dir / (rom_name + '.elf')
rom_map = rom_elf.with_suffix('.map')
rom = rom_elf.with_suffix('.z64')

# Assembly Files
# TODO: move into assembly section once there are no more unresolved symbols
asm_dir = config.game_dir / 'asm'
s_files = list(asm_dir.rglob('*.s'))
s_objs = list(map(lambda f: config.to_output(f, '.o'), s_files))

# Linker Scripts
# ssb_lds_in = config.game_dir / 'ssb64.in.ld'
specfile = config.game_dir / 'spec.dhall'
# todo `config.in_output` => ensure the output directory creation and make path
ssb_lds = config.to_output(config.game_dir / 'ssb64.ld', '.ld')
unk_symbols = list(asm_dir.rglob('*.unresolved.ld')) + [
    config.game_dir / 'hardware-registers.ld',
    config.game_dir / 'not-found-sym.ld',
]

def task_compare():
    ''' Build SS64 ROM and compare to known sha1 checksum '''
    chksum = Path(rom_name + '.sha1')

    return {
        'actions': [[shasum, '-c', chksum]],
        'task_dep': ['build_rom'],
        'uptodate': [False],
        'verbosity': 2,
    }


def task_build_rom():
    """ Build the ROM """

    binutils = tc.game.utils
    ssb64_d, linking_deps = get_make_dependencies(ssb_lds, rom_elf)

    if binutils.is_at_least(2, 35):
        dep_flag = [f'--dependency-file={ssb64_d}']
        outputs = [rom_elf, rom_map, rom, ssb64_d]
    else:
        dep_flag = []
        outputs = [rom_elf, rom_map, rom]

    libultra_exports = [
        '-u', 'spColor',
        '-u', 'spHide',
        '-u', 'spShow',
        '-u', 'spScale',
    ]
 
    link_elf = binutils.LD + [
        '--no-check-sections', 
        '-Map', rom_map, 
        '-T', ssb_lds, 
        '-T' ] + unk_symbols \
        + [
        '-o', rom_elf, 
        '-L', config.build_dir, 
        '-lultra'
        ] + libultra_exports \
        + dep_flag
    
    copy_rom = binutils.OBJCOPY + [
        '--pad-to=0x1000000', 
        '--gap-fill=0xFF', 
        '-O', 'binary', 
        rom_elf, rom
    ]

    crc_rom = [n64crc, rom]

    return { 
        'actions': [link_elf, copy_rom, crc_rom],
        'file_dep': linking_deps + [n64crc],
        'task_dep': [
            'assemble',
            'cc', 
            'libultra',
            'link_rld',
            'link_sprite_bank',
            'temp_bin_obj'
        ],
        'targets': outputs,
        'clean': [f'rm -rf {" ".join([str(config.all_builds/ver) for ver in ALL_VERSIONS])}'],
    }

def task_convert_specfile():
    ''' Convert the dhall specfile into the game linkscript and sections header '''
    convert_spec = [
        spec, 
        '--input', specfile, 
        '--ld', ssb_lds, 
        '--header', linkersegs,
    ]
    return {
        'actions': [convert_spec],
        'file_dep': [spec, specfile],
        'targets': [ssb_lds, linkersegs],
    }

########## Game Assembling ###########################
def task_assemble():
    ''' Assemble .s files into .o with dependencies .d '''

    for f, o in zip(s_files, s_objs):
        d, deps = get_make_dependencies(f, o)

        assemble = tc.invoke_as(
            includes = [inc_dir, asm_dir, f.parent],
            depfile = d,
            input = f,
            output = o
        )

        yield {
            'name': o,
            'actions': [assemble],
            'targets': [o, d],
            'file_dep': deps,
            'task_dep': ensure_asset_extraction(),
        }

########## Game C Compiling ##########################
inc_dir = config.game_dir / 'include'
c_dir = config.game_dir / 'src'
c_files = c_dir.rglob('*.c')

def task_cc():
    ''' Compile .c files into .o '''

    includes = [inc_dir, c_dir, geninc_dir]
    tools_dep = get_toolchain_deps(config.toolchain)

    for f in c_files:
        o = config.to_output(f, '.o')
        d, deps = get_make_dependencies(f, o, generated_incs)
        
        syntax_check = tc.invoke_cc_check(includes, d, f, o)
        # if the input needs to have asm processed
        if f.name.endswith('.asm.c'):
            actions = [syntax_check, tc.invoke_asm_prepoc(includes, f, o)]
        else:
            actions = [syntax_check, tc.invoke_cc(includes, f, o)]

        yield {
            'name': o,
            'actions': actions,
            'file_dep': deps + tools_dep,
            'targets': [o, d],
        }

def task_fmt():
    ''' Use clang-tidy to format game C source code ''' 

    flags  = [
        '--',
        '-fsigned-char', '-fno-builtin',
        '-std=gnu90', '-m32', 
        '-Wno-format-security', '-Wno-main', 
        f'-I{inc_dir}',
        f'-I{c_dir}',
        f'-I{geninc_dir}',
        '-D_LANGUAGE_C','-D_MIPS_SZINT=32', '-D_MIPS_SZLONG=32', '-DF3DEX_GBI_2'
    ]

    c_files = list(c_dir.rglob('*.c'))
    h_files = list(c_dir.rglob('*.h'))

    tidy = ['clang-tidy', '--fix', '--fix-errors'] + c_files + flags
    fmt = ['clang-format', '-i'] + c_files + h_files

    cmds = [ tidy + [f'-DVERSION_{ver.upper()}'] for ver in ALL_VERSIONS ]
    cmds += [fmt]

    return {
        'actions' : cmds,
        'verbosity': 2,
    }

def get_toolchain_deps(tc):
    if tc == "ido5.3":
        return ido53_tools
    elif tc == "ido7.1":
        return ido71_tools
    else:
        return []

########## Libultra ##################################
libultra_includes = inc_dir / 'PR'
libultra_root = config.game_dir / 'libultra'
libultra_a = config.build_dir / 'libultra.a'
libultra_objs = []
# (module, mipsiset, C Opt, ASM Opt)
libultra_srcs = [
    (libultra_root/'gu', ['-mips2', '-32'], '-O3', '-O1'),
    (libultra_root/'gt', ['-mips2', '-32'], '-O3', '-O1'),
    (libultra_root/'rg', ['-mips2', '-32'], '-O3', '-O1'),
    (libultra_root/'sp', ['-mips2', '-32'], '-O3', '-O1'),
    (libultra_root/'sched', ['-mips2', '-32'], '-O3', '-O1'),
    (libultra_root/'audio', ['-mips2', '-32'], '-O3', '-O1'),
    (libultra_root/'libc', ['-mips2', '-32'], '-O3', '-O1'),
    (libultra_root/'io', ['-mips2', '-32'], '-O1', '-O1'),
    (libultra_root/'os', ['-mips2', '-32'], '-O1', '-O1'),
]
# (mipsiset, Opt Difference)
libultra_exceptions = {
    libultra_root/'os'/'exceptasm.s': (['-mips3', '-o32'], None),
    libultra_root/'io'/'sirawdma.c': (None, '-O2'),
    libultra_root/'io'/'pimgr.c': (None, '-O2'),
    libultra_root/'io'/'epirawdma.c': (None, '-O2'),
    libultra_root/'io'/'aisetfreq.c': (None, '-O2'),
    libultra_root/'io'/'viswapcontext.c': (None, '-O2'),
    libultra_root/'io'/'cartrominit.c': (None, '-O2'),
    libultra_root/'io'/'pfsselectbank.c': (None, '-O2'),
    libultra_root/'io'/'epirawread.c': (None, '-O2'),
    libultra_root/'io'/'epirawwrite.c': (None, '-O2'),
    libultra_root/'libc'/'bcmp.s': (None, '-O2'),
    libultra_root/'libc'/'bcopy.s': (None, '-O2'),
    libultra_root/'libc'/'bzero.s': (None, '-O2'),
    libultra_root/'libc'/'ll.c': (['-mips3', '-o32'], '-O1'),
    libultra_root/'libc'/'llbit.c': (['-mips3', '-o32'], '-O1'),
    libultra_root/'libc'/'llcvt.c': (['-mips3', '-o32'], '-O1'),
}

def task_compile_libultra():
    ''' Build the various C and ASM libultra modules '''
    includes = [inc_dir, libultra_includes]
    tools_dep = get_toolchain_deps(config.libultra)
    # TODO: make tools_dep a global under tools? cc_deps? as_deps? cross_compile_deps?

    for module, mipsiset, copt, aopt in libultra_srcs:
        c_files = module.glob('*.c')
        s_files = module.glob('*.s')
        check_file = lambda f, opt: check_libultra_exceptions(f, mipsiset, opt)

        for src in c_files:
            out = config.to_output(src, '.o')
            (d, make_deps) = get_make_dependencies(src, out)
            src_mi, src_opt = check_file(src, copt)

            # nice global state manipulation
            libultra_objs.append(out)

            # don't check syntax for libultra; not useful anyways
            syntax_check = tc.invoke_cc_check(includes, d, src, out, no_syntax=True)
            if 'sp' in str(module):
                # compile sp in libultra with ido7.1 at -O2 ...uh oh
                # probably should make this more official
                compile_src = tc.invoke_cc(includes, src, out, defs=['-DNDEBUG', '-D_FINALROM'])
            else:
                compile_src = tc.libultra_cc(includes, src, out, src_mi, src_opt)

            yield {
                'name': out,
                'actions': [syntax_check, compile_src],
                'targets': [out, d],
                'file_dep': make_deps + tools_dep
            }
        
        for src in s_files:
            out = config.to_output(src, '.o')
            # no .d file generation from ido as?
            src_mi, src_opt = check_file(src, aopt)

            # nice global state manipulation
            libultra_objs.append(out)

            assemble = tc.libultra_as(includes, src, out, src_mi, src_opt)

            yield {
                'name': out,
                'actions': [assemble],
                'targets': [out],
                'file_dep': [src] + tools_dep,
            }


def task_libultra():
    ''' Create the libultra archive '''

    AR = tc.libultra.utils.AR
    bundle_archive = AR + ['rcs', '-o', libultra_a] + libultra_objs
    patch = [patcher, libultra_a]

    return {
        'actions': [bundle_archive, patch],
        'targets': [libultra_a],
        'file_dep': libultra_objs + [patcher],
    }

def check_libultra_exceptions(file, mipsiset, opt):
    ''' check for special instruction set or opt flags for file '''
    possible = libultra_exceptions.get(file)
    if possible is None:
        return (mipsiset, opt)
    else:
        mb_mi, mb_opt = possible
        return (
            option_or(mb_mi, mipsiset), 
            option_or(mb_opt, opt),
        )

def option_or(a, b):
    if a is None:
        return b
    else:
        return a

def get_make_dependencies(src_file, obj_file, default_deps = []):
    ''' (Path to .d file, List[Make Dependancies]) '''
    d = obj_file.with_suffix('.d')
    found_deps = parse_mk_dependencies(d)
    if found_deps is None:
        deps = [src_file] + default_deps
    else:
        deps = found_deps[obj_file]
        if src_file.name.endswith('.asm.c'):
            asmd = parse_mk_dependencies(obj_file.with_suffix('.asmproc.d'))
            if asmd is not None:
                deps += asmd[obj_file]

    return (d, deps)

########## Resource Table ############################
res_dir = config.game_dir / 'resources'
res_list = res_dir / 'resources.json'

res_out_dir = config.create_output_dir(res_dir)
rld_obj = res_out_dir / 'rld.o'

# @create_after(executed='extract_assets', target_regex=f'({rld_obj}|{rld_fids_h})')
def task_link_rld():
    '''Link together HAL relocatable data (rld)'''
    (rld_d, deps) = get_make_dependencies(res_list, rld_obj)

    link = [
        halld,
        '-L', res_dir,
        '-L', res_out_dir,
        '-c', rld_fids_h,
        '-d', rld_d,
        '-k', config.rld_cache_dir(),
        '-o', rld_obj,
        res_list
    ]

    return {
        'actions': [link],
        'file_dep': [halld] + deps,
        'task_dep': ensure_asset_extraction(),
        'targets': [rld_obj, rld_d, rld_fids_h]
    }

########## Sprites ###################################
def gfx_encode_cmd(f, o):
    ''' Assuming `img-name.(format)(bitdepth).png` 
        Returns ([cmd], [outputs])
    '''

    cmd = [n64gfx, 'encode', '-i', f]
    out = [o]
    s = str(f)
    end = s.rfind('.png')
    start = s.rfind('.', 0, end) + 1
    fmt = s[start:end]
    
    if fmt == 'rgba32':
        cmd.extend(['-f', 'rgba', '-d', '32', '-o', o])
    elif fmt == 'rgba16':
        cmd.extend(['-f', 'rgba', '-d', '16', '-o', o])
    elif fmt == 'ci8':
        pal = append_suffix(o, '.pal.bin')
        cmd.extend(['-f', 'ci', '-d', '8', '-o', o, '-p', pal])
        out.append(pal)
    elif fmt == 'ci4':
        pal = append_suffix(o, '.pal.bin')
        cmd.extend(['-f', 'ci', '-d', '4', '-o', o, '-p', pal])
        out.append(pal)
    elif fmt == 'ia16':
        cmd.extend(['-f', 'ia', '-d', '16', '-o', o])
    elif fmt == 'ia8':
        cmd.extend(['-f', 'ia', '-d', '8', '-o', o])
    elif fmt == 'ia4':
        cmd.extend(['-f', 'ia', '-d', '4', '-o', o])
    elif fmt == 'i8':
        cmd.extend(['-f', 'i', '-d', '8', '-o', o])
    elif fmt == 'i4':
        cmd.extend(['-f', 'i', '-d', '4', '-o', o])
    else:
        raise Exception(f"Unknown image format '{fmt}' (from file: {f})")
    
    return (cmd, out)

sprite_dir = config.game_dir / 'sprites'
sprite_output = config.build_dir / 'sprites'

# TODO: list image extensions for target_regex
@create_after(executed='extract_assets', target_regex='*')
def task_convert_sprite_pngs():
    ''' Convert sprite.format.png into sprite.format ''' 

    sprite_pngs = list(sprite_dir.rglob('*.*.png'))

    for png in sprite_pngs:
        o = config.to_output(png, '')
        invocation, outs = gfx_encode_cmd(png, o)

        yield {
            'name': o,
            'actions': [invocation],
            'targets': outs,
            'file_dep': [png, n64gfx],
        }

imgbank_entry_tomls = list(sprite_dir.glob('*/*/*.toml'))
imgbank_entry_s = [config.to_output(f, '.s') for f in imgbank_entry_tomls]
imgbank_entry_o = [up_one_dir(s, '.o') for s in imgbank_entry_s]

def task_pack_sprite_bank_entry():
    ''' Convert a .toml sprite/img bank spec file
        into an gnu as .s file to assemble
    '''

    for (t, s) in zip(imgbank_entry_tomls, imgbank_entry_s):
        yield {
            'name': s,
            'actions': [[imgbank, 'pack-entry', t, '-o', s]],
            'file_dep': [t, imgbank],
            'targets': [s],
        }

def task_assemble_sprite_bank_entry():
    ''' Assemble an sprite bank entry into an object for linking'''

    for (s, o) in zip(imgbank_entry_s, imgbank_entry_o):
        d, deps = get_make_dependencies(s, o)

        assemble_entry = tc.invoke_as(
            includes=[s.parent],
            depfile=d,
            input=s,
            output=o
        )
        yield {
            'name': o,
            'actions': [ assemble_entry ],
            'file_dep': deps,
            'task_dep': ['convert_sprite_pngs'],
            'targets': [o, d],
        }

# These .toml files are perseved in the repo, even though 
# they can be extracted from the baserom
imgbank_tomls = list(sprite_dir.glob('*/*.toml'))
imgbank_ldscripts = list(map(lambda f: config.to_output(f, '.ld'), imgbank_tomls))
imgbank_o = list(map(lambda f: up_one_dir(f, '.o'), imgbank_ldscripts))

def task_generate_sprite_bank_link():
    ''' Create a linkerscript from a sprite bank .toml '''

    for (t, lds) in zip(imgbank_tomls, imgbank_ldscripts):
        yield {
            'name': lds,
            'actions': [[imgbank, 'link', t, '-o', lds]],
            'file_dep': [t, imgbank],
            'targets': [lds],
        }

def task_link_sprite_bank():
    ''' Link together all of the sprite entry objects into a bank object '''

    binutils = tc.game.utils

    for (lds, o) in zip(imgbank_ldscripts, imgbank_o):
        
        # only link to entry objects for a given bank
        bank_name = o.stem
        obj_dir = sprite_output / bank_name
        d, deps = get_make_dependencies(lds, o)

        if binutils.is_at_least(2, 35):
            dep_flag = [f'--dependency-file={d}']
            targets = [o, d]
        else:
            dep_flag = []
            targets = [o]

        link_bank = binutils.LD + [
            '-r',
            '-T', lds,
            '-L', obj_dir,
            '-o', o,
        ] + dep_flag

        yield {
            'name': o,
            'actions': [link_bank],
            'targets': targets,
            'file_dep': deps,
            'task_dep': ['assemble_sprite_bank_entry']
        }

########## Audio #####################################

########## Temporary .bin handling ####################
@create_after(executed='extract_assets', target_regex='*.o')
def task_temp_bin_obj():
    ''' Convert a raw binary to a linkable .o file 
        This task should be temporary until all binary files are 
        converted to real source files
    '''

    invoke_ld = tc.game.utils.LD + ['-r', '-b', 'binary']

    temp_audio_bins = config.game_dir.glob('audio/tempbins/*')
    for audio_bin in temp_audio_bins:
        o = config.to_output(up_one_dir(audio_bin), '.o', True)
        yield {
            'name': o,
            'actions': [
                invoke_ld + ['-o', o, audio_bin],
            ],
            'file_dep': [audio_bin],
            'targets': [o],
        }

    

    # res_table = res_dir / 'temp' / 'resource-filetable.bin'
    # res_table_o = config.to_output(up_one_dir(res_table), '.o')
    # yield {
    #     'name': res_table_o,
    #     'actions': [
    #         invoke_ld + ['-o', res_table_o, res_table],
    #     ],
    #     'file_dep': [res_table],
    #     'targets': [res_table_o],
    # }

    temp_sprbank_bins = sprite_dir.glob('*/*.bin')
    for b in temp_sprbank_bins:
        o = config.to_output(up_one_dir(b), '.o')
        yield {
            'name': o,
            'actions': [invoke_ld + ['-o', o, b]],
            'file_dep': [b],
            'targets': [o],
        }
    
    temp_unk_bins = config.game_dir.glob('unknown/tempbins/*')
    for b in temp_unk_bins:
        o = config.to_output(up_one_dir(b), '.o')
        yield {
            'name': o,
            'actions': [invoke_ld + ['-o', o, b]],
            'file_dep': [b],
            'targets': [o],
        }
