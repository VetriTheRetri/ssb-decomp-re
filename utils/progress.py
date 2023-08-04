#!/usr/bin/env python3
import argparse, re, os, sys
from pathlib import Path

parser = argparse.ArgumentParser()

parser = argparse.ArgumentParser(description="Computes current progress throughout the whole project.")
parser.add_argument("format", nargs="?", default="text", choices=["text", "csv", "shield-json"])
parser.add_argument("-m", "--matching", dest='matching', action='store_true',
                    help="Output matching progress instead of decompilation progress")
args = parser.parse_args()

VERSION = 'us'
LD_MAP = f'build/{VERSION}/ssb64.{VERSION}.map'

#### Helpers
NON_MATCHING_PATTERN = r'#ifdef\s+NON_MATCHING.*?#pragma\s+GLOBAL_ASM\s*\(\s*"(.*?)"\s*\).*?#endif'
NOT_ATTEMPTED_PATTERN = r'#ifdef\s+MIPS_TO_C.*?#pragma\s+GLOBAL_ASM\s*\(\s*"(.*?)"\s*\).*?#endif'
ASM_JMP_LABEL = re.compile(r"^(?P<name>L[0-9A-F]{8})$")

def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, **kwargs)

def GetFunctionsByPattern(pattern, files):
    functions = []

    for file in files:
        with open(file) as f:
            functions += re.findall(pattern, f.read(), re.DOTALL)

    return functions

def ReadAllLines(fileName):
    line_list = list()
    with open(fileName) as f:
        line_list = f.readlines()

    return line_list

def GetFiles(path, ext):
    files = []

    for r, d, f in os.walk(path):
        for file in f:
            if file.endswith(ext):
                files.append(os.path.join(r, file))

    return files


def CalculateMapSizes(mapFileList):
    for mapFile in mapFileList:
        accumulatedSize = 0

        symbolCount = len(mapFile["symbols"])
        if symbolCount == 0:
            continue

        # Calculate size of each symbol
        for index in range(symbolCount - 1):
            symbol = mapFile["symbols"][index]
            nextSymbol = mapFile["symbols"][index+1]

            size = nextSymbol["vram"] - symbol["vram"]
            accumulatedSize += size

            mapFile["symbols"][index]["size"] = size

        # Calculate size of last symbol of the file
        symbol = mapFile["symbols"][-1]
        size = mapFile["size"] - accumulatedSize
        mapFile["symbols"][-1]["size"] = size
    return mapFileList

def GetFunctionSizes(mapFileList):
    functionSizes = dict()

    for mapFile in mapFileList:
        if mapFile["section"] != ".text":
            continue

        for symbol in mapFile["symbols"]:
            symbolName = symbol["name"]
            functionSizes[symbolName] = symbol["size"]

    return functionSizes


srcCategories = [
    "hal",
    "libultra",
    "engine",
    "overlays",
]
dirToSrcCat = {
    "sys": "hal",
    "boot": "hal",
    "ovl0": "hal",
    "ultra": "libultra",
    "ovl2": "engine",
}
def CategorizeCode(file_path):
    ''' get the (category, kind) for a Path '''
    if 'libultra.a' in str(file_path):
        return ("libultra", "decompiled")
    
    parent = file_path.parent.stem
    gp = file_path.parent.parent.stem
    # actual ASM (header.s, entry.s)
    if parent == "asm":
        return ("hal", "decompiled")

    # lookup for src container folder to category 
    # if not in this LUT, then "overlays"
    
    cat = dirToSrcCat.get(parent, "overlays")
    kind = "decompiled" if gp == "src" else "raw"

    return (cat, kind)
    
def CategorizeNonMatching(asm_path):
    ''' categorize the path of an included GLOBAL_ASM file '''
    # file should be in format `game/nonmatching/{catsubfolder}/{file}/{func}.s`
    gp = asm_path.parent.parent.stem
    return dirToSrcCat.get(gp, "overlays")

class CategoryDict:
    def __init__(self):
        store = dict()
        for srcCat in srcCategories:
            store[srcCat] = dict()
        self._store = store
    
    def __repr__(self):
        from pprint import pformat
        return pformat(self._store, indent=2)
    def __getitem__(self, k):
        return self._store.get(k)
    def __setitem__(self, k, v):
        self._store[k] = v
    
class Tracker(CategoryDict):
    def __init__(self, matching):
        super().__init__()
        self.matching = matching
        for cat in self._store:
            self._store[cat]["currentSize"] = 0
            self._store[cat]["totalSize"] = 0
            self._store[cat]["percent"] = 0

    def add_file(self, kind, category, size):
        cat = self._store[category]
        cat['totalSize'] += size
        if kind == "decompiled":
            cat['currentSize'] += size

    def sub_nonmatchings(self, nonMatching, notAttempted):
        for cat, tracker in self._store.items():
            tracker["currentSize"] = tracker["currentSize"] \
                - (nonMatching[cat] + notAttempted[cat])

    def calc_percentages(self):
        for tracker in self._store.values():
            tracker["percent"] = tracker["currentSize"] / tracker["totalSize"] * 100.0

    def overall_summary(self):
        stats = {'currentSize': 0, 'totalSize': 0, 'percent': 0}
        for catstats in self._store.values():
            stats['currentSize'] += catstats['currentSize']
            stats['totalSize'] += catstats['totalSize']
        
        stats['percent'] = stats['currentSize'] / stats['totalSize'] * 100.0
        return stats

    def text_summary(self):
        o = self.overall_summary()
        adjective = 'matched' if self.matching else 'decompiled'
        kind = 'Matching' if self.matching else "Non-Matching"
        print(f'SSB64 Progress [{kind} - \'{VERSION}\' Version]')
        print(f'Source Code :{round(o["percent"], 1):>8.1f}% [{o["currentSize"]} / {o["totalSize"]} bytes {adjective}]')
        for name, cat in self._store.items():
            print(f'  {name:<10}:{round(cat["percent"], 1):>8.1f}% [{cat["currentSize"]:>6} / {cat["totalSize"]:>6} bytes]')

class NmTracker(CategoryDict):
    def __init__(self, fn_sizes, fns):
        super().__init__()
        for cat in self._store:
            self._store[cat] = 0

        for fn in fns:
            fn = Path(fn)
            cat = CategorizeNonMatching(fn)
            name = fn.stem
            if name in fn_sizes:
                self._store[cat] += fn_sizes[name]
            else:
                eprint(f'Non-matching function "{name}" not found in code\n', 
                    'reconcile name of non-matching file and routine in C code\n',
                    'from: ', fn
                )

#### Script
cFiles = GetFiles("game/src", ".c")
nonMatchingFns = GetFunctionsByPattern(NON_MATCHING_PATTERN, cFiles) if args.matching else []
notAttemptedFns = GetFunctionsByPattern(NOT_ATTEMPTED_PATTERN, cFiles)

progressTracker = Tracker(args.matching)
mapFileList = []
for line in ReadAllLines(LD_MAP):
    parts = list(filter(None, line.split(' ')))

    if (len(parts) == 4 and parts[0].startswith('.')):
        file = {
            "section": parts[0], 
            "name": Path(parts[3].strip()), 
            "vram": int(parts[1], 16), 
            "size": int(parts[2], 16), 
            "symbols": []
        }
        mapFileList.append(file)

        if file['section'] == '.text' and file['size'] != 0:
            category, kind = CategorizeCode(file['name'])
            progressTracker.add_file(kind, category, file['size'])

    elif (len(parts) == 2) and parts[0].startswith('0x00000000'):
        # global, placed label
        vram = int(parts[0], 16)
        name = parts[1].strip()
        # ignore jump labels from ASM files
        if name == '0x0'            \
        or name.startswith('jtgt_') \
        or name.startswith('L_')    \
        or ASM_JMP_LABEL.search(name) is not None:
            continue

        mapFileList[-1]['symbols'].append({'name': name, 'vram': vram, 'size': 0})

mapFileList = CalculateMapSizes(mapFileList)
functionSizes = GetFunctionSizes(mapFileList)
nonMatchingSizes = NmTracker(functionSizes, nonMatchingFns)
notAttemptSizes = NmTracker(functionSizes, notAttemptedFns)

progressTracker.sub_nonmatchings(nonMatchingSizes, notAttemptSizes)
progressTracker.calc_percentages()

if args.format == 'text':
    progressTracker.text_summary()
else:
    eprint("other output formats besides text not yet supported")
