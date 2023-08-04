from doit import get_var
from .pathutil import append_suffix
import sys
import platform

ALL_VERSIONS        = ['us']
SYSTEM_TOOLCHAINS   = ['gcc', 'clang']
GAME_TOOLCHAINS     = ['qemu-ido5.3', 'qemu-ido7.1', 'ido5.3', 'ido7.1']
LIBULTRA_TOOLCHAINS = ['qemu-ido5.3', 'qemu-ido7.1', 'ido5.3', 'ido7.1']
GAME_DEFAULT_TC     = 'ido7.1'
LIBULTRA_DEFAULT_TC = 'ido5.3'

def _get_choice(var, default, choices):
    possible = get_var(var, default)
    if possible in choices: 
        return possible
    elif possible is None:
        return default
    else:
        raise Exception(f'{var} "{possible}" not in options: {choices}')

def _get_flag(flag):
    flag = get_var(flag, False)
    return not not flag

def _target_version(toolchain, libultra, version):
    ''' Create the version string used for the output directory, 
        and for naming the build artifacts. 
        It builds this string based on the version of the game
        being compiled, as well as the toolchain that is doing the compiling.
        Only non-default toolchains are added to output string
    ''' 

    tv = version

    if toolchain != GAME_DEFAULT_TC:
        tv += ('-' + toolchain)

    if libultra != LIBULTRA_DEFAULT_TC:
        tv += ('-libultra-' + libultra)

    return tv

def _system_default_tc(host):
    if host == 'darwin':
        return 'clang'
    elif host == 'linux':
        return 'gcc'
    else:
        raise f'Unsupported Host OS: {host}'


class Config():
    def __init__(self, build_base, game_base, tools_dir):
        # CLI Build Options
        self.qemu = get_var('QEMU_IRIX', None)
        self.toolchain = _get_choice('TOOLCHAIN', GAME_DEFAULT_TC, GAME_TOOLCHAINS)
        self.libultra = _get_choice('LIBULTRA_TC', LIBULTRA_DEFAULT_TC, LIBULTRA_TOOLCHAINS)
        self.version = _get_choice('VERSION', 'us', ALL_VERSIONS)

        self.host = sys.platform
        self.arch = platform.machine()
        self.system_toolchain = _get_choice('SYSTEM_TC', _system_default_tc(self.host), SYSTEM_TOOLCHAINS)
        self.target = 'n64'
        self.target_version = _target_version(self.toolchain, self.libultra, self.version)

        # CLI Game Config Options
        self.no_match = _get_flag('NON_MATCHING')
        self.avoid_ub = _get_flag('AVOID_UB')

        # force non-matching if avoiding ub
        self.no_match = self.no_match or self.avoid_ub

        # Build directories
        self.all_builds = build_base
        self.build_dir = build_base / self.target_version
        self.game_dir = game_base
        self.tools = tools_dir
    
    def to_output(self, src, out_ext, append=False):
        ''' Take an input Path and convert an output path with
            `out_ext` in the proper build directory.
            This will also ensure that the all output directories
            are created
        '''
        t = self.build_dir.joinpath(src.relative_to(self.game_dir))
        o = append_suffix(t, out_ext) if append else t.with_suffix(out_ext)
        o.parent.mkdir(parents=True, exist_ok=True)

        return o

    def create_output_dir(self, directory_path):
        ''' Given a `game_dir` relative directory path, 
            create that directory under the proper build directory
            This also ensures that the directory is created
        '''

        o = self.build_dir.joinpath(directory_path.relative_to(self.game_dir))
        o.mkdir(parents=True, exist_ok=True)

        return o

    def make_output_dir(self, directory):
        ''' Create a directory in the output path '''

        o = self.build_dir.joinpath(directory)
        o.mkdir(parents=True, exist_ok=True)

        return o

    def rld_cache_dir(self):
        ''' Get the cache for RLD compressed data files '''
        o = self.all_builds / '.rldcache'
        o.mkdir(parents=True, exist_ok=True)

        return o
    
    def __str__(self):
        common = (
            "======== Build Config ========\n"
            f"  Host:           {self.host}\n"
            f"  Target:         {self.target}\n"
            f"  Version:        {self.version}\n"
            f"  Build Location: {self.build_dir}\n"
            f"  Non Matching:   {self.no_match}\n"
            f"  Avoid UB:       {self.avoid_ub}\n"
        )

        return common
