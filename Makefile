MAKEFLAGS += --no-builtin-rules

# Failed recipes must not leave half-written targets with fresh timestamps
# (e.g. fixRelocChain's byte-compare gate fails AFTER objcopy wrote the
# extract); otherwise the next make run treats the poisoned file as current.
.DELETE_ON_ERROR:

SHELL = /bin/bash
.SHELLFLAGS = -o pipefail -c

# ----- Defaults ------

FULL_DISASM ?= 0
RELOC_DATA ?= 0
NON_MATCHING ?= 0

# Whether to colorize build messages
COLOR ?= 1
# Whether to hide commands or not
VERBOSE ?= 0
# Command for printing messages during the make.
PRINT ?= printf

VERSION ?= us

BASEROM := baserom.$(VERSION).z64
TARGET  := smashbrothers

# Per-version build tree so US and JP artifacts can coexist on disk. Defined
# here (rather than further down) because EXTRA_LINK_DEPS and the parse-time
# RELOC_NAMES_MK shell both reference it below.
BUILD_DIR := build/$(VERSION)

# Default extra link dependencies (US build)
EXTRA_LINK_DEPS := symbols/not_found.txt symbols/linker_constants.txt $(BUILD_DIR)/assets/$(VERSION)/relocData.o

# JP build is WIP - many C-side symbols still need to be mapped, so by default
# we skip the relocData link dep. With RELOC_DATA=1, the JP build still attempts
# to include relocData.o (so the relocData side of the pipeline can be tested).
ifeq ($(VERSION),jp)
  ifeq ($(RELOC_DATA),1)
    EXTRA_LINK_DEPS := symbols/jp_wip_linker.txt .splat/jp/smashbrothers_jp.ld $(BUILD_DIR)/assets/$(VERSION)/relocData.o
  else
    EXTRA_LINK_DEPS := symbols/jp_wip_linker.txt .splat/jp/smashbrothers_jp.ld
  endif
endif

# Disable dependency generation for decomp-permuter
ifeq ($(PERMUTER),1)
SKIP_DEPS := 1
endif

UNAME_S := $(shell uname -s)
LD_MIPS := $(shell command -v mips-linux-gnu-ld 2>/dev/null)
ifeq ($(OS),Windows_NT)
$(error Native Windows is currently unsupported for building this repository, use WSL instead c:)
else ifeq ($(UNAME_S),Darwin)
	MAKE := gmake
endif
ifeq ($(LD_MIPS),)
	BIG_MIPS_OBJCOPY_TARGET := elf32-bigmips
	BINUTILS_PREFIX := mips-elf
else
	BIG_MIPS_OBJCOPY_TARGET := elf32-tradbigmips
	BINUTILS_PREFIX := mips-linux-gnu
endif

ifeq ($(VERBOSE),0)
  V := @
endif

ifeq ($(COLOR),1)
NO_COL  := \033[0m
RED     := \033[0;31m
GREEN   := \033[0;32m
BLUE    := \033[0;34m
PURPLE  := \033[0;35m
CYAN    := \033[0;36m
endif

# Common build print status function
define print_3
  @$(PRINT) "$(1) $(CYAN)$(2)$(NO_COL) -> $(BLUE)$(3)$(NO_COL)\n"
endef
define print_2
  @$(PRINT) "$(1) $(3)$(2)$(NO_COL)\n"
endef

# ----- Common flags -----

PYTHON   := python3
INCLUDES = -Iinclude -Isrc -I$(BUILD_DIR)/src
DEFINES  := -DF3DEX_GBI_2 -D_MIPS_SZLONG=32 -DNDEBUG -DN_MICRO -D_FINALROM
OPTFLAGS := -O2 -mips2

# Support python venv's if one is installed.
PYTHON_VENV = .venv/bin/python3
ifneq "$(wildcard $(PYTHON_VENV) )" ""
  PYTHON = $(PYTHON_VENV)
endif

ifeq ($(NON_MATCHING),1)
DEFINES += -DNON_MATCHING
endif

ifeq ($(AVOID_UB),1)
DEFINES += -DAVOID_UB
endif

ifeq ($(VERSION),jp)
    DEFINES += -DREGION_JP
else ifeq ($(VERSION),us)
    DEFINES += -DREGION_US
endif


# ----- Output ------

# BUILD_DIR is defined above (right after VERSION) so EXTRA_LINK_DEPS / the
# RELOC_NAMES_MK parse-time shell can reference it.
#
# Final ROM/ELF/MAP intentionally live at the top level of build/, NOT under
# $(BUILD_DIR), so external tooling (diff_settings.py, decomp.yaml, etc.)
# can find them at the same well-known paths regardless of which version
# was last built. Per-version intermediates (.o files, generated headers,
# etc.) live under build/$(VERSION)/ so US and JP builds don't clobber each
# other.
ROM       := build/$(TARGET).$(VERSION).z64
ELF       := build/$(TARGET).$(VERSION).elf
LD_MAP    := build/$(TARGET).$(VERSION).map

# ----- Tools ------

IDO7            := tools/ido-recomp/7.1/cc
IDO5            := tools/ido-recomp/5.3/cc
AS              := $(BINUTILS_PREFIX)-as
LD              := $(BINUTILS_PREFIX)-ld
OBJCOPY         := $(BINUTILS_PREFIX)-objcopy
OBJDUMP         := $(BINUTILS_PREFIX)-objdump
STRIP           := $(BINUTILS_PREFIX)-strip
ASM_PROC        := $(PYTHON) tools/asm-processor/build.py
CCFLAGS         := -c -G 0 -non_shared -Xfullwarn -Xcpluscomm $(INCLUDES) $(DEFINES) -Wab,-r4300_mul -woff 649,838,712,516,624,568,763
ASFLAGS         := -EB -I include -march=vr4300 -mabi=32

ifeq ($(VERSION),jp)
    LDFLAGS := -T .splat/jp/undefined_funcs_auto.txt -T .splat/jp/undefined_syms_auto.txt \
               -T .splat/jp/smashbrothers_jp.ld -T symbols/jp_wip_linker.txt symbols/reloc_data_symbols.$(VERSION).txt
    C_FILES := $(shell find src -type f | grep \\.c$)
	C_FILES := $(filter-out \
			    src/mn/mncommon/mncongra.c \
				src/mn/mncommon/mnstartup.c \
			   ,$(C_FILES))
else ifeq ($(VERSION),us)
    LDFLAGS := -T .splat/us/undefined_funcs_auto.txt -T .splat/us/undefined_syms_auto.txt \
               -T .splat/us/smashbrothers.ld -T symbols/not_found.txt -T symbols/linker_constants.txt -T symbols/reloc_data_symbols.$(VERSION).txt
    C_FILES := $(shell find src -type f | grep \\.c$)
else
    $(error Unsupported VERSION "$(VERSION)")
endif

# Exclude relocData C files from normal compilation (they are compiled separately into binary blobs)
C_FILES := $(filter-out $(wildcard src/relocData/*.c src/relocData/**/*.c),$(C_FILES))

# relocData C-to-binary conversion - per-version manifest of converted files.
# Only load the file list when RELOC_DATA=1; otherwise the extract-stamp
# dependencies pull in the full extraction pipeline on every plain `make`.
ifeq ($(RELOC_DATA),1)
-include src/relocData/converted_files.$(VERSION).mk
endif
RELOC_C_FILES ?=

# Generate an id->name map for the active version so we can find manifests by
# name when JP/US file ids differ. The on-disk manifest filename uses whichever
# version's id existed when it was first committed (typically US), so we glob
# *_<Name>.manifest as a fallback.
RELOC_NAMES_MK := $(BUILD_DIR)/reloc_names.$(VERSION).mk
$(shell mkdir -p $(BUILD_DIR) && python3 tools/genRelocNamesMk.py tools/relocFileDescriptions.$(VERSION).txt > $(RELOC_NAMES_MK))
include $(RELOC_NAMES_MK)

# Cross-file extern resolution: fixRelocChain.py resolves extern chain
# targets through a global symbol index materialized AFTER every relocData
# .o has compiled (two-stage ordering; see RELOC_SYM_INDEX below). This
# replaces the old per-fid order-only deps generated from `# -> file NNN`
# annotations in .reloc files.
ifeq ($(RELOC_DATA),1)
RELOC_SYM_INDEX := $(BUILD_DIR)/relocSymIndex.txt
RELOC_SYM_STAMP := $(BUILD_DIR)/src/relocData/.build/.symindex.stamp
endif
OBJCOPYFLAGS    := --pad-to=0xC00000 --gap-fill=0xFF
ASM_PROC_FLAGS  := --input-enc=utf-8 --output-enc=euc-jp --convert-statics=global-with-filename

SPLAT             ?= $(PYTHON) tools/splat/split.py
SPLAT_YAML        ?= smashbrothers.$(VERSION).yaml
SPLAT_FLAGS       ?=
ifneq ($(FULL_DISASM),0)
    SPLAT_FLAGS       += --disassemble-all
endif

# ----- Files ------
CC := $(ASM_PROC) $(ASM_PROC_FLAGS) $(IDO7) -- $(AS) $(ASFLAGS) --

# C_FILES 	   := $(shell python3 -c "import yaml; d=yaml.safe_load(open('smashbrothers.$(VERSION).yaml')); segs = d.get('segments', d) if isinstance(d, dict) else d; srcs=[]; \
# [ srcs.append(s.get('source')) for s in segs if isinstance(s, dict) and s.get('type')=='c' and s.get('source') ]; \
# print(' '.join(sorted(set(srcs))))")
# Maintain asm/nonmatchings as a symlink to the active version's tree so the
# existing #pragma GLOBAL_ASM("asm/nonmatchings/...") directives across src/
# resolve regardless of which version is being built. (Step 5 moved the actual
# files to asm/$(VERSION)/nonmatchings/.) Limitation: simultaneous parallel
# builds for both versions race on this symlink.
$(shell mkdir -p asm && ln -sfn $(VERSION)/nonmatchings asm/nonmatchings)

S_TEXT_FILES   := $(shell find asm/$(VERSION) src -type f -name '*.s' 2>/dev/null | grep -v /nonmatchings/ | grep -v /matchings/ | grep -v '\.rodata\.s' | grep -v '\.data\.s' | grep -v '\.bss\.s' | grep -v '\.cseq\.s')
S_DATA_FILES   := $(shell find asm/$(VERSION) -type f 2>/dev/null | grep \\.data\\.s$)
S_RODATA_FILES := $(shell find asm/$(VERSION) -type f 2>/dev/null | grep \\.rodata\\.s$)
S_BSS_FILES    := $(shell find asm/$(VERSION) -type f 2>/dev/null | grep \\.bss\\.s$)
# db/, particles/, audio/ are #include'd as inc.c rather than linked as .o, so
# their .png/.bin files don't need a build/.../foo.o produced from the find list.
# These dirs may live at top level (legacy) or under assets/<v>/ (post step-4),
# so we exclude any matching path component, not just literal `^assets/<dir>/`.
PNG_FILES      := $(shell find assets/$(VERSION) -type f -name '*.png' 2>/dev/null \
                    -not -path '*/db/*' -not -path '*/particles/*' -not -path '*/audio/*')
BIN_FILES      := $(shell find assets/$(VERSION) -type f -name '*.bin' 2>/dev/null \
                    -not -path '*/relocData/*' -not -path '*/db/*' -not -path '*/particles/*' -not -path '*/audio/*') \
                  $(foreach f,$(PNG_FILES:.png=.bin),$f)
# The number of compressed (vpk0) relocData files differs by version (US: 499,
# JP: 474). Detect from the filesystem so the same Makefile works for both.
VPK0_FILES     := $(wildcard assets/$(VERSION)/relocData/*.vpk0.bin)
VPK0_FILES     := $(VPK0_FILES:.vpk0.bin=.vpk0)

# Music sequence banks are extracted from baserom (no committed sources).
# Compute their object list here (before $(ELF) consumes O_FILES); the
# extraction recipe and assemble/compile rules live further down.
MUSIC_BANKS    := S1_music
MUSIC_EXTRAS   := src/audio/midis

# Auto-extract at parse time when:
#   * the bank's manifest is missing (fresh checkout, after make clean), or
#   * any file under MUSIC_EXTRAS/ is newer than the manifest (user
#     dropped in or modified a .mid -- including by removing one, which
#     bumps the directory's own mtime).
# Doing this at parse time means the wildcard below picks up freshly
# extracted/converted .cseq.s files in the same `make` invocation;
# users don't need a separate `make extract` step after editing midis.
_music_needs_extract = $(or \
    $(if $(wildcard $(BUILD_DIR)/src/audio/$(1).manifest.json),,need-fresh),\
    $(shell [ -d $(MUSIC_EXTRAS) ] && \
            find $(MUSIC_EXTRAS) -newer $(BUILD_DIR)/src/audio/$(1).manifest.json -print -quit 2>/dev/null))

$(foreach b,$(MUSIC_BANKS),\
    $(if $(call _music_needs_extract,$(b)),\
        $(info Extracting $(b) sequences from baserom + $(MUSIC_EXTRAS)/...)\
        $(shell mkdir -p $(BUILD_DIR)/src/audio && \
                $(PYTHON) tools/extractMusicSequences.py \
                    --version $(VERSION) --bank $(b) \
                    --src-dir $(BUILD_DIR)/src/audio \
                    --extras-dir $(MUSIC_EXTRAS) >&2)))

MUSIC_SEQ_SOURCES := $(foreach b,$(MUSIC_BANKS),\
                       $(wildcard $(BUILD_DIR)/src/audio/$(b)/*.cseq.s))
MUSIC_SEQ_BINS    := $(MUSIC_SEQ_SOURCES:.cseq.s=.cseq.bin)
MUSIC_SEQ_INCS    := $(MUSIC_SEQ_BINS:.cseq.bin=.cseq.inc.c)
MUSIC_SBK_C       := $(foreach b,$(MUSIC_BANKS),$(BUILD_DIR)/src/audio/$(b)_sbk.c)
MUSIC_SBK_O       := $(MUSIC_SBK_C:.c=.o)

# Sound-effect / instrument banks (.ctl + .tbl). Same shape as the
# music-sequence pipeline: the per-waveform AIFCs and the _ctl.c
# aggregator are extracted/generated from the baserom into build/, with
# user overrides under src/audio/instruments/. Variables are computed
# here (above the link rule) so $(O_FILES) sees them.
# Both versions ship B1_sounds1 and B1_sounds2 through this pipeline.
# JP's B1_sounds2 has different bytes (Japanese voice samples), but
# since each pass extracts straight from baserom.<v>.z64, the same
# source path produces version-correct bytes -- no JP-specific shim.
SOUND_BANKS    := B1_sounds1 B1_sounds2
SOUND_EXTRAS   := src/audio/instruments

_sound_needs_extract = $(or \
    $(if $(wildcard $(BUILD_DIR)/src/audio/$(1).ctl.json),,need-fresh),\
    $(shell [ -d $(SOUND_EXTRAS) ] && \
            find $(SOUND_EXTRAS) -newer $(BUILD_DIR)/src/audio/$(1).ctl.json -print -quit 2>/dev/null))

$(foreach b,$(SOUND_BANKS),\
    $(if $(call _sound_needs_extract,$(b)),\
        $(info Extracting $(b) bank from baserom + $(SOUND_EXTRAS)/...)\
        $(shell mkdir -p $(BUILD_DIR)/src/audio && \
                $(PYTHON) tools/extract_ctl_bank.py \
                    --version $(VERSION) --bank $(b) \
                    --src-dir $(BUILD_DIR)/src/audio \
                    --extras-dir $(SOUND_EXTRAS) >&2)))

SOUND_TBL_BINS := $(foreach b,$(SOUND_BANKS),$(BUILD_DIR)/src/audio/$(b).tbl.bin)
SOUND_TBL_OS   := $(foreach b,$(SOUND_BANKS),$(BUILD_DIR)/assets/$(b).tbl.o)
SOUND_CTL_C    := $(foreach b,$(SOUND_BANKS),$(BUILD_DIR)/src/audio/$(b)_ctl.c)
SOUND_CTL_O    := $(SOUND_CTL_C:.c=.o)

# FGM (sound-effect engine) opaque blobs. Same shape: extracted from
# baserom into build/, with optional whole-file overrides committed to
# src/audio/fgm/. Per-entry decomp deferred until entry formats are
# understood.
FGM_FILES   := fgm.unk fgm.tbl fgm.ucd
FGM_EXTRAS  := src/audio/fgm
FGM_BINS    := $(foreach f,$(FGM_FILES),$(BUILD_DIR)/src/audio/$(f).bin)
FGM_OS      := $(foreach f,$(FGM_FILES),$(BUILD_DIR)/assets/$(f).o)
FGM_STAMP   := $(BUILD_DIR)/src/audio/.fgm.stamp.json

# Auto-extract trigger. The stamp records the extras dir's
# filename+size+mtime fingerprint; we re-extract if the fingerprint
# changed since the last run (catches adds, modifications, AND
# removals -- second-granularity `find -newer` could miss removals when
# the rm and the stamp's touch fell in the same second).
_fgm_needs_extract = $(shell $(PYTHON) -c "import json, os, sys; \
    stamp='$(FGM_STAMP)'; ed='$(FGM_EXTRAS)'; \
    cur=[]; \
    [cur.append({'name':f,'size':os.stat(os.path.join(ed,f)).st_size,'mtime_ns':os.stat(os.path.join(ed,f)).st_mtime_ns}) for f in sorted(os.listdir(ed)) if os.path.isfile(os.path.join(ed,f))] if os.path.isdir(ed) else None; \
    rec=json.load(open(stamp)).get('extras_fingerprint') if os.path.exists(stamp) else None; \
    print('y' if rec is None or rec != cur else '', end='')")

$(if $(_fgm_needs_extract),\
    $(info Extracting fgm files from baserom + $(FGM_EXTRAS)/...)\
    $(shell mkdir -p $(BUILD_DIR)/src/audio && \
            $(PYTHON) tools/extract_fgm.py \
                --version $(VERSION) \
                --out-dir $(BUILD_DIR)/src/audio \
                --extras-dir $(FGM_EXTRAS) >&2))

# Filter out C/bin sources we now generate from baserom (their build
# artifacts are added back below, sourced from build/src/audio/).
SOUND_C_GENERATED := $(foreach b,$(SOUND_BANKS),src/audio/$(b)_ctl.c)
SOUND_BIN_GENERATED := $(foreach b,$(SOUND_BANKS),assets/$(b).tbl.bin)
FGM_BIN_GENERATED := $(foreach f,$(FGM_FILES),assets/$(f).bin)
C_FILES   := $(filter-out $(SOUND_C_GENERATED),$(C_FILES))
BIN_FILES := $(filter-out $(SOUND_BIN_GENERATED) $(FGM_BIN_GENERATED),$(BIN_FILES))

O_FILES        := $(foreach f,$(C_FILES:.c=.o),$(BUILD_DIR)/$f) \
                  $(foreach f,$(S_TEXT_FILES:.s=.o),$(BUILD_DIR)/$f) \
                  $(foreach f,$(S_DATA_FILES:.s=.o),$(BUILD_DIR)/$f) \
                  $(foreach f,$(S_RODATA_FILES:.s=.o),$(BUILD_DIR)/$f) \
                  $(foreach f,$(S_BSS_FILES:.s=.o),$(BUILD_DIR)/$f) \
                  $(foreach f,$(BIN_FILES:.bin=.o),$(BUILD_DIR)/$f) \
                  $(MUSIC_SBK_O) $(SOUND_CTL_O) $(SOUND_TBL_OS) \
                  $(FGM_OS)

TEXT_SECTION_FILES := $(foreach f,$(C_FILES:.c=.text),$(BUILD_DIR)/$f) \
                      $(foreach f,$(S_TEXT_FILES:.s=.text),$(BUILD_DIR)/$f)

DATA_SECTION_FILES := $(foreach f,$(C_FILES:.c=.data),$(BUILD_DIR)/$f) \
                      $(foreach f,$(S_DATA_FILES:.s=.data),$(BUILD_DIR)/$f)

RODATA_SECTION_FILES := $(foreach f,$(C_FILES:.c=.rodata),$(BUILD_DIR)/$f) \
                        $(foreach f,$(S_RODATA_FILES:.s=.rodata),$(BUILD_DIR)/$f)

# directory flags
$(BUILD_DIR)/src/libultra/io/%.o: 		OPTFLAGS := -O1 -g0 -mips2
$(BUILD_DIR)/src/libultra/os/%.o: 		OPTFLAGS := -O1 -g0 -mips2
$(BUILD_DIR)/src/libultra/rmon/%.o: 	OPTFLAGS := -O1 -g0 -mips2
$(BUILD_DIR)/src/libultra/debug/%.o: 	OPTFLAGS := -O1 -g0 -mips2
$(BUILD_DIR)/src/libultra/host/%.o:	OPTFLAGS := -O1 -g0 -mips2

# per file flags
$(BUILD_DIR)/src/libultra/n_audio/n_cspsetvol.o:	OPTFLAGS := -O3 -g0 -mips2
$(BUILD_DIR)/src/libultra/n_audio/n_cspsetvol.o: CC := $(IDO7)
$(BUILD_DIR)/src/libultra/n_audio/n_cspsetseq.o:	OPTFLAGS := -O3 -g0 -mips2
$(BUILD_DIR)/src/libultra/n_audio/n_cspsetseq.o: CC := $(IDO7)
$(BUILD_DIR)/src/libultra/n_audio/n_cspsetpriority.o:	OPTFLAGS := -O3 -g0 -mips2
$(BUILD_DIR)/src/libultra/n_audio/n_cspsetpriority.o: CC := $(IDO7)
$(BUILD_DIR)/src/libultra/n_audio/n_cspsetfxmix.o:	OPTFLAGS := -O3 -g0 -mips2
$(BUILD_DIR)/src/libultra/n_audio/n_cspsetfxmix.o: CC := $(IDO7)
$(BUILD_DIR)/src/libultra/n_audio/n_cspsetbank.o:	OPTFLAGS := -O3 -g0 -mips2
$(BUILD_DIR)/src/libultra/n_audio/n_cspsetbank.o:	CC := $(IDO7)
$(BUILD_DIR)/src/libultra/n_audio/n_env.o: OPTFLAGS := -O3 -g0 -mips2
$(BUILD_DIR)/src/libultra/n_audio/n_env.o: CC := $(IDO7)
$(BUILD_DIR)/src/libultra/n_audio/n_synaddplayer.o: OPTFLAGS := -O3 -g0 -mips2
$(BUILD_DIR)/src/libultra/n_audio/n_synaddplayer.o: CC := $(IDO7)
$(BUILD_DIR)/src/libultra/n_audio/n_synallocvoice.o: OPTFLAGS := -O3 -g0 -mips2
$(BUILD_DIR)/src/libultra/n_audio/n_synallocvoice.o: CC := $(IDO7)
$(BUILD_DIR)/src/libultra/n_audio/n_synstartvoiceparam.o: OPTFLAGS := -O3 -g0 -mips2
$(BUILD_DIR)/src/libultra/n_audio/n_synstartvoiceparam.o: CC := $(IDO7)
$(BUILD_DIR)/src/libultra/n_audio/n_seq.o: OPTFLAGS := -O3 -g0 -mips2
$(BUILD_DIR)/src/libultra/n_audio/n_seq.o: CC := $(IDO7)
$(BUILD_DIR)/src/libultra/n_audio/n_seqplayer.o:	OPTFLAGS := -O3 -g0 -mips2
$(BUILD_DIR)/src/libultra/n_audio/n_seqplayer.o: CC := $(IDO7)
$(BUILD_DIR)/src/libultra/io/viswapcontext.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/viswapcontext.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/pfsselectbank.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/pfsselectbank.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
$(BUILD_DIR)/src/libultra/io/epirawread.o: OPTFLAGS := -O1 -mips2
else
$(BUILD_DIR)/src/libultra/io/epirawread.o: OPTFLAGS := -O2 -mips2
endif
$(BUILD_DIR)/src/libultra/io/epirawread.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/contramwrite.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/contramwrite.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
$(BUILD_DIR)/src/libultra/io/aisetfreq.o: OPTFLAGS := -O1 -mips2
else
$(BUILD_DIR)/src/libultra/io/aisetfreq.o: OPTFLAGS := -O2 -mips2
endif
$(BUILD_DIR)/src/libultra/io/aisetfreq.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
$(BUILD_DIR)/src/libultra/io/epirawdma.o: OPTFLAGS := -O1 -mips2
else
$(BUILD_DIR)/src/libultra/io/epirawdma.o: OPTFLAGS := -O2 -mips2
endif
$(BUILD_DIR)/src/libultra/io/epirawdma.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/gu/mtxcatf.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/gu/mtxcatf.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/gu/mtxxfmf.o: OPTFLAGS := -O3 -mips2
$(BUILD_DIR)/src/libultra/gu/mtxxfmf.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/gu/sinf.o: OPTFLAGS := -O3 -mips2
$(BUILD_DIR)/src/libultra/gu/sinf.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/motor.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/motor.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/sirawdma.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/sirawdma.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/pimgr.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/pimgr.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/pfsgetstatus.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/pfsgetstatus.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/contpfs.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/contpfs.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/contramread.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/contramread.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/crc.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/crc.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/pfsisplug.o: OPTFLAGS := -O1 -mips2
$(BUILD_DIR)/src/libultra/io/pfsisplug.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
$(BUILD_DIR)/src/libultra/io/epirawwrite.o: OPTFLAGS := -O1 -mips2
else
$(BUILD_DIR)/src/libultra/io/epirawwrite.o: OPTFLAGS := -O2 -mips2
endif
$(BUILD_DIR)/src/libultra/io/epirawwrite.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/os/seteventmesg.o: OPTFLAGS := -O1 -mips2
$(BUILD_DIR)/src/libultra/os/seteventmesg.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/vimgr.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/vimgr.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/leodiskinit.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/leodiskinit.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/leointerrupt.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/leointerrupt.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
$(BUILD_DIR)/src/libultra/io/cartrominit.o: OPTFLAGS := -O1 -mips2
else
$(BUILD_DIR)/src/libultra/io/cartrominit.o: OPTFLAGS := -O2 -mips2
endif
$(BUILD_DIR)/src/libultra/io/cartrominit.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
$(BUILD_DIR)/src/libultra/os/exceptasm.o: OPTFLAGS := -O1 -mips3 -32
else
$(BUILD_DIR)/src/libultra/os/exceptasm.o: OPTFLAGS := -O1 -mips3 -32 -DBUILD_VERSION=7
endif
$(BUILD_DIR)/src/libultra/os/exceptasm.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/os/initialize.o: OPTFLAGS := -O1 -mips2
$(BUILD_DIR)/src/libultra/os/initialize.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/controller.o: OPTFLAGS := -O1 -mips2
$(BUILD_DIR)/src/libultra/io/controller.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/contreaddata.o: OPTFLAGS := -O2 -mips2
$(BUILD_DIR)/src/libultra/io/contreaddata.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/io/devmgr.o: OPTFLAGS := -O1 -mips2
$(BUILD_DIR)/src/libultra/io/devmgr.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/libc/ll.o: OPTFLAGS := -O1 -mips3 -32
$(BUILD_DIR)/src/libultra/libc/xprintf.o: OPTFLAGS := -O3 -mips2
$(BUILD_DIR)/src/libultra/libc/xprintf.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/libc/xldtob.o: OPTFLAGS := -O3 -mips2
$(BUILD_DIR)/src/libultra/libc/xldtob.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/libc/xlitob.o: OPTFLAGS := -O3 -mips2
$(BUILD_DIR)/src/libultra/libc/xlitob.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/libc/ldiv.o: OPTFLAGS := -O3 -mips2
$(BUILD_DIR)/src/libultra/libc/ldiv.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/audio/cents2ratio.o: OPTFLAGS := -O3 -mips2
$(BUILD_DIR)/src/libultra/audio/cents2ratio.o: CC := $(IDO5)
$(BUILD_DIR)/src/libultra/libc/llcvt.o: OPTFLAGS := -O1 -mips3 -32

# Automatic dependency files
DEP_FILES := $(O_FILES:.o=.d)

# create build directories
$(shell mkdir -p $(BUILD_DIR)/asm)
$(shell mkdir -p $(BUILD_DIR)/src)
$(shell mkdir -p $(BUILD_DIR)/assets)
# Bootstrap the version-specific reloc_data header and symbols file at parse
# time. Both files are gitignored; include/reloc_data.h itself is a committed
# selector shim that #includes the active version's header. We pass the
# converted-files list (empty here) so the bootstrap output reflects which
# files get manifest-computed offsets vs description offsets — without this,
# the proper rule below would never re-fire (its outputs would already exist
# and be newer than its dependencies) and we'd link against the wrong values.
# The proper rule below regenerates with the real list once extract stamps
# exist, giving correct manifest-computed offsets.
$(shell ([ -f include/reloc_data.$(VERSION).h ] && [ -f symbols/reloc_data_symbols.$(VERSION).txt ]) || $(PYTHON) tools/genRelocSymbols.py ./tools/relocFileDescriptions.$(VERSION).txt ./include/reloc_data.$(VERSION).h ./symbols/reloc_data_symbols.$(VERSION).txt --converted-files "" > /dev/null)

# Bootstrap the motion-desc offsets header so the first build doesn't fail.
# The proper rule below regenerates it whenever a MainMotion/SubMotion source
# changes, so this only fires on a clean checkout.
$(shell [ -f include/ft/motiondesc_offsets.h ] || $(PYTHON) tools/genMotionDescOffsets.py > /dev/null)

# ----- Targets ------

all: rom

toolchain:
	$(V)bash ./installDependencies.sh

rom: $(ROM)
	@$(PRINT) "$(BLUE)$(TARGET).$(VERSION).z64$(NO_COL): "
	@cmp $(ROM) $(BASEROM) > /dev/null && \
	$(PRINT) "$(GREEN)OK$(NO_COL)\n" || \
	$(PRINT) "$(RED)FAILURE$(NO_COL)\n"

nolink: $(TEXT_SECTION_FILES) $(DATA_SECTION_FILES) $(RODATA_SECTION_FILES)
	@echo "Comparing object files:"
	$(V)$(PYTHON) tools/compareObjects.py

diff: $(ROM)
	$(V)$(PYTHON) tools/matchbin.py -x $(ROM) $(BASEROM)

clean:
	rm -r -f $(BUILD_DIR)
	rm -f $(ROM) $(ELF) $(LD_MAP)
	rm -f src/credits/staff.credits.encoded src/credits/staff.credits.metadata
	rm -f src/credits/titles.credits.encoded src/credits/titles.credits.metadata
	rm -f src/credits/info.credits.encoded src/credits/info.credits.metadata
	rm -f src/credits/companies.credits.encoded src/credits/companies.credits.metadata
	rm -f include/reloc_data.$(VERSION).h symbols/reloc_data_symbols.$(VERSION).txt
	@echo removing vpk0 files
	@rm -f $(VPK0_FILES)

extract:
	# Wipe only the active version's asm/ and .splat/ trees. The inactive
	# version's stays so its build/<v>/ .o files remain valid. Also clean up
	# any legacy top-level entries in asm/ and .splat/ from before the
	# step-5 migration. The asm/nonmatchings symlink is preserved (it gets
	# recreated at parse time and points into asm/<v>/).
	rm -rf asm/$(VERSION) .splat/$(VERSION)
	@mkdir -p asm .splat
	find asm -mindepth 1 -maxdepth 1 -not -name us -not -name jp -not -name nonmatchings -exec rm -rf {} +
	find .splat -mindepth 1 -maxdepth 1 -not -name us -not -name jp -exec rm -rf {} +
	# Wipe the active version's per-version assets/ subtree plus every shared
	# splat output at the top level (top-level .bin files, assets/rsp/, plus
	# any legacy top-level db/ovl8/particles/ leftover from before the step-4
	# migration). After step 5, splat itself writes everything under
	# assets/$(VERSION)/, so the find below mostly tidies legacy state.
	rm -rf assets/$(VERSION)
	@mkdir -p assets
	find assets -mindepth 1 -maxdepth 1 -not -name us -not -name jp -exec rm -rf {} +
	# Drop the active version's generated header/symbols so the parse-time
	# bootstrap regenerates them for this extract. Don't touch the OTHER
	# version's outputs — they're separately gitignored and let the inactive
	# build/<v>/ tree's .o files stay valid across an init.
	rm -f include/reloc_data.$(VERSION).h symbols/reloc_data_symbols.$(VERSION).txt
	# Drop encoded credits files too — they're generated from the version-
	# specific .txt source but make can't tell which version they came from.
	rm -f src/credits/staff.credits.encoded src/credits/staff.credits.metadata
	rm -f src/credits/titles.credits.encoded src/credits/titles.credits.metadata
	rm -f src/credits/info.credits.encoded src/credits/info.credits.metadata
	rm -f src/credits/companies.credits.encoded src/credits/companies.credits.metadata
	$(SPLAT) $(SPLAT_YAML) $(SPLAT_FLAGS)

	$(PYTHON) tools/relocData.py extractAll tools/relocFileDescriptions.$(VERSION).txt --version $(VERSION)
	@mkdir -p relocAssets
ifeq ($(VERSION),us)
	@# halAssetTool's parser only accepts 3-digit file ids in the names section,
	@# so strip names for file ids >= 1000 before passing the descriptions file in.
	@mkdir -p $(BUILD_DIR)
	sed '/^-[0-9][0-9][0-9][0-9]/d' tools/relocFileDescriptions.$(VERSION).txt > $(BUILD_DIR)/relocFileDescriptions.$(VERSION).halAssetTool.txt
	tools/halAssetTool x $(BUILD_DIR)/relocFileDescriptions.$(VERSION).halAssetTool.txt assets/$(VERSION)/relocData/ relocAssets
endif

init:
	${MAKE} clean VERSION=$(VERSION)
	${MAKE} extract RELOC_DATA=$(RELOC_DATA) VERSION=$(VERSION)
	${MAKE} all RELOC_DATA=$(RELOC_DATA) VERSION=$(VERSION)

# asm-differ expected object files. Version-scoped: snapshots only the active
# version's tree under expected/build/<v>/ plus its top-level ROM/ELF/MAP, so
# `make expected VERSION=us` after a US match doesn't blow away an existing
# JP snapshot (and vice versa). asm-differ resolves
# expected/build/<v>/<obj> by prepending expected_dir (`expected/`) to the
# build-relative .o path, so this layout is what it already expects.
expected:
	@mkdir -p expected/build
	rm -rf expected/build/$(VERSION)
	cp -r $(BUILD_DIR) expected/build/$(VERSION)
	@for f in $(ROM) $(ELF) $(LD_MAP); do \
		[ -f $$f ] && cp $$f expected/build/ || true; \
	done

format:
	$(PYTHON) tools/formatHelper.py -e
# 	find include -type f | rg "\.h" | xargs clang-format -i
# 	find src -type f | rg "\.(c|h)" | xargs clang-format -i
	$(PYTHON) tools/formatHelper.py -s

# ----- Rules ------

# Making ROM
$(ROM): $(ELF)
	$(call print_3,ELF->ROM:,$<,$@)
	$(V)$(OBJCOPY) $(OBJCOPYFLAGS) $< $@ -O binary
	$(call print_2,Patching CRC checksums for,$@,$(BLUE))
	$(V)$(PYTHON) tools/n64crc.py $@

# Linking
$(ELF): $(O_FILES) $(EXTRA_LINK_DEPS)
	$(call print_2,Linking:,$@,$(BLUE))
	$(V)$(LD) -Map $(LD_MAP) -o $@ $(LDFLAGS)

# No linking mode
$(BUILD_DIR)/%.text: $(BUILD_DIR)/%.o
	$(call print_3,text:,$<,$@)
	$(V)$(OBJCOPY) -O binary --only-section=.text $< $@
$(BUILD_DIR)/%.data: $(BUILD_DIR)/%.o
	$(call print_3,data:,$<,$@)
	$(V)$(OBJCOPY) -O binary --only-section=.data $< $@
$(BUILD_DIR)/%.rodata: $(BUILD_DIR)/%.o
	$(call print_3,Rodata:,$<,$@)
	$(V)$(OBJCOPY) -O binary --only-section=.rodata $< $@

# Assembly
$(BUILD_DIR)/%.o: %.s
	$(call print_3,Assembling:,$<,$@)
	@mkdir -p $(@D)
	$(V)$(AS) $(ASFLAGS) -o $@ $<

# libultra asm files - Compile with the ido compiler
$(BUILD_DIR)/src/libultra/%.o: src/libultra/%.s
	$(call print_3,Assembling Libultra:,$<,$@)
	$(V)$(CC) -c $(CCFLAGS) $(OPTFLAGS) $(OPTFLAGS) -o $@ $<
	$(V)$(STRIP) --strip-unneeded $@
	@if [[ "$(OPTFLAGS)" =~ "-mips3 -32" ]]; then \
		$(PYTHON) tools/patchMips3Objects.py $@; \
	fi

# Source C files
$(BUILD_DIR)/%.o: %.c
	$(call print_3,Compiling:,$<,$@)
	@mkdir -p $(@D)
# generate .d files to track header dependencies
ifndef SKIP_DEPS
	$(V)clang -MMD -MP -fno-builtin -funsigned-char -fdiagnostics-color -std=gnu89 -m32 $(INCLUDES) $(DEFINES) -E -o $@ $< && rm $@
endif
# compile and pipe through colorizer
	$(V)$(CC) $(CCFLAGS) $(OPTFLAGS) -o $@ $< 2>&1 | $(PYTHON) tools/colorizeIDO.py
# patch object files compiled with mips3 to be able to link them
	$(V)$(PYTHON) tools/patchMips3Objects.py $@

# Per-block source files determine the offsets for converted reloc files,
# so the symbols header depends on every manifest/spritelist/block file in
# src/relocData/. The texture .inc.c files (in build/) also affect sprite
# block sizes, so each file's extract stamp is also a dependency.
RELOCDATA_STRUCT_FILES := $(wildcard src/relocData/*.manifest src/relocData/*.spritelist src/relocData/*/*.sprite.c src/relocData/*/*.data.c src/relocData/*/*.dobjdesc.c src/relocData/*/*.palette.c src/relocData/*/*.mobjsub.c src/relocData/*/*.dl.c src/relocData/*/*.vtx.c)
RELOCDATA_EXTRACT_STAMPS := $(foreach f,$(RELOC_C_FILES),$(BUILD_DIR)/src/relocData/.build/.extract-$(f).stamp)

include/reloc_data.$(VERSION).h symbols/reloc_data_symbols.$(VERSION).txt &: \
		./tools/relocFileDescriptions.$(VERSION).txt \
		tools/genRelocSymbols.py tools/genRelocMaster.py \
		$(RELOCDATA_STRUCT_FILES) $(RELOCDATA_EXTRACT_STAMPS)
	$(call print_2,Generating reloc data header and symbol file from:,$<,$(BLUE))
	$(V)$(PYTHON) tools/genRelocSymbols.py ./tools/relocFileDescriptions.$(VERSION).txt ./include/reloc_data.$(VERSION).h ./symbols/reloc_data_symbols.$(VERSION).txt -Isrc/relocData -I$(BUILD_DIR)/src/relocData --converted-files "$(RELOC_C_FILES)"

# Per-motion-script offset macros consumed by ftdata.c (and per-character
# scsubsysdata*.c) so FTMotionDesc entries can name the script they
# reference instead of using a raw byte offset.
RELOC_MOTION_SOURCES := $(wildcard src/relocData/*MainMotion.c src/relocData/*SubMotion.c)

include/ft/motiondesc_offsets.h: tools/genMotionDescOffsets.py $(RELOC_MOTION_SOURCES)
	$(call print_2,Generating motion-desc offset header from:,$<,$(BLUE))
	$(V)$(PYTHON) tools/genMotionDescOffsets.py $@

# Staff roll specific. The encoded/metadata files are version-specific content
# generated from the .$(VERSION).txt sources; we put them under $(BUILD_DIR)/
# (per-version) so switching versions doesn't poison a cached scstaffroll.o.
# scstaffroll.c does `#include "credits/<name>.encoded"`, resolved via
# -I$(BUILD_DIR)/src in INCLUDES.
src/sc/sccommon/scstaffroll.c: $(BUILD_DIR)/src/credits/staff.credits.encoded $(BUILD_DIR)/src/credits/titles.credits.encoded $(BUILD_DIR)/src/credits/info.credits.encoded $(BUILD_DIR)/src/credits/companies.credits.encoded
$(BUILD_DIR)/src/credits/staff.credits.encoded: src/credits/staff.credits.$(VERSION).txt tools/creditsTextConverter.py
	$(call print_2,Creating staff roll data for:,$<,$(PURPLE))
	$(V)$(PYTHON) tools/creditsTextConverter.py $< -titleFont --out-dir $(@D)
$(BUILD_DIR)/src/credits/titles.credits.encoded: src/credits/titles.credits.$(VERSION).txt tools/creditsTextConverter.py
	$(call print_2,Creating staff roll data for:,$<,$(PURPLE))
	$(V)$(PYTHON) tools/creditsTextConverter.py $< -titleFont --out-dir $(@D)
$(BUILD_DIR)/src/credits/info.credits.encoded: src/credits/info.credits.$(VERSION).txt tools/creditsTextConverter.py
	$(call print_2,Creating staff roll data for:,$<,$(PURPLE))
	$(V)$(PYTHON) tools/creditsTextConverter.py $< -paragraphFont -multiline --out-dir $(@D)
$(BUILD_DIR)/src/credits/companies.credits.encoded: src/credits/companies.credits.$(VERSION).txt tools/creditsTextConverter.py
	$(call print_2,Creating staff roll data for:,$<,$(PURPLE))
	$(V)$(PYTHON) tools/creditsTextConverter.py $< -paragraphFont --out-dir $(@D)

# Binaries
$(BUILD_DIR)/%.o: %.bin
	$(call print_3,Making binary:,$<,$@)
	@mkdir -p $(@D)
	$(V)$(OBJCOPY) -I binary -O $(BIG_MIPS_OBJCOPY_TARGET) -B mips $< $@
	$(V)@bash tools/createPaletteObjectIfNeeded.sh $(OBJCOPY) -I binary -O $(BIG_MIPS_OBJCOPY_TARGET) -B mips $< $@

# Images
.PRECIOUS: assets/%.bin
assets/%.bin: assets/%.png
	$(call print_3,Converting Image:,$<,$@)
	$(V)$(PYTHON) tools/image_converter.py $< $@

# Debug cube Kirby face texture — 32x32 RGBA5551 baked into `dbcube.c`'s
# .data section. Extracted from the baserom at the version-specific ROM
# offset into both a raw .bin (gitignored asset) and a build-time .inc.c
# (hex initializer for the `dDBCubeKirbyFaceTexture` array). The .png
# preview sits next to the .bin so the asset is viewable without building.
.PRECIOUS: assets/$(VERSION)/db/dbkirby.rgba16.bin assets/$(VERSION)/db/dbkirby.png
assets/$(VERSION)/db/dbkirby.rgba16.bin assets/$(VERSION)/db/dbkirby.png &: $(BASEROM) tools/extractDbKirbyTex.py
	$(call print_3,Extracting dbkirby texture:,$<,$@)
	@mkdir -p assets/$(VERSION)/db
	$(V)$(PYTHON) tools/extractDbKirbyTex.py --version $(VERSION) \
		--baserom $(BASEROM) \
		--bin assets/$(VERSION)/db/dbkirby.rgba16.bin \
		--inc $(BUILD_DIR)/src/db/dbkirby.rgba16.inc.c \
		--png assets/$(VERSION)/db/dbkirby.png

$(BUILD_DIR)/src/db/dbkirby.rgba16.inc.c: assets/$(VERSION)/db/dbkirby.rgba16.bin
	@# The grouped rule above wrote this file too — touch it so make
	@# doesn't re-run the generator on every incremental build.
	@test -f $@ || $(PYTHON) tools/extractDbKirbyTex.py --version $(VERSION) \
		--baserom $(BASEROM) \
		--bin assets/$(VERSION)/db/dbkirby.rgba16.bin \
		--inc $@ \
		--png assets/$(VERSION)/db/dbkirby.png

# dbcube.c `#include`s the generated inc.c, so its .o must wait for the
# extraction step to finish.
$(BUILD_DIR)/src/db/dbcube.o: $(BUILD_DIR)/src/db/dbkirby.rgba16.inc.c

# ovl8_30 debug menu button icon — 16x16 RGBA5551.
.PRECIOUS: assets/$(VERSION)/ovl8/ovl8_30_button.rgba16.bin assets/$(VERSION)/ovl8/ovl8_30_button.rgba16.png
assets/$(VERSION)/ovl8/ovl8_30_button.rgba16.bin assets/$(VERSION)/ovl8/ovl8_30_button.rgba16.png &: $(BASEROM) tools/extractOvl8ButtonTex.py
	$(call print_3,Extracting ovl8_30 button texture:,$<,$@)
	@mkdir -p assets/$(VERSION)/ovl8
	$(V)$(PYTHON) tools/extractOvl8ButtonTex.py --version $(VERSION) \
		--baserom $(BASEROM) \
		--bin assets/$(VERSION)/ovl8/ovl8_30_button.rgba16.bin \
		--inc $(BUILD_DIR)/src/ovl8/ovl8_30_button.rgba16.inc.c \
		--png assets/$(VERSION)/ovl8/ovl8_30_button.rgba16.png

$(BUILD_DIR)/src/ovl8/ovl8_30_button.rgba16.inc.c: assets/$(VERSION)/ovl8/ovl8_30_button.rgba16.bin
	@# The grouped rule above wrote this file too — touch it so make
	@# doesn't re-run the generator on every incremental build.
	@test -f $@ || $(PYTHON) tools/extractOvl8ButtonTex.py --version $(VERSION) \
		--baserom $(BASEROM) \
		--bin assets/$(VERSION)/ovl8/ovl8_30_button.rgba16.bin \
		--inc $@ \
		--png assets/$(VERSION)/ovl8/ovl8_30_button.rgba16.png

$(BUILD_DIR)/src/ovl8/ovl8_30.o: $(BUILD_DIR)/src/ovl8/ovl8_30_button.rgba16.inc.c

# Particle texture banks (.txb): each bank's images and palettes are
# extracted from the baserom into per-frame .bin/.png (in assets/particles/)
# and per-frame .inc.c (in build/src/particles/). Each _txb.o `#include`s
# the .inc.c bytes -- see PARTICLE_BANK_DISCOVERIES.md.
PARTICLE_BANKS := efcommon particles_unk0 particles_unk1 particles_unk2 \
                  itcommon grpupupu grhyrule gryoster mntitle

# Per-bank stamp file: extractor writes many files per invocation, so we
# track a single stamp instead of every output. Lazy by build dependency,
# same pattern as the dbkirby rule above.
$(BUILD_DIR)/src/particles/%.extract-stamp: $(BASEROM) tools/extractParticleTextures.py
	$(call print_3,Extracting particle textures:,$*,$@)
	$(V)$(PYTHON) tools/extractParticleTextures.py --version $(VERSION) --baserom $(BASEROM) --bank $* --inc-dir $(BUILD_DIR)/src/particles --assets-dir assets/$(VERSION)/particles
	@mkdir -p $(@D) && touch $@

$(foreach b,$(PARTICLE_BANKS),\
    $(eval $(BUILD_DIR)/src/particles/$(b)_txb.o: $(BUILD_DIR)/src/particles/$(b).extract-stamp))

# Music sequence banks (.sbk): per-sequence sources live in
# src/audio/<bank>/*.cseq.s (committed, byte-faithful disassembly of
# Nintendo's compressed-MIDI format). Build pipeline:
#   baserom.<v>.z64
#     -> tools/extractMusicSequences.py
#         -> build/src/audio/<bank>/*.cseq.s          (per-sequence source)
#         -> build/src/audio/<bank>.manifest.json     (extraction metadata)
#     -> tools/assemble_cseq.py -> build/src/audio/<bank>/*.cseq.bin
#     -> tools/binToInc.py      -> build/src/audio/<bank>/*.cseq.inc.c
#     -> tools/gen_sbk_c.py     -> build/src/audio/<bank>_sbk.c
#     -> compiled to build/src/audio/<bank>_sbk.o
# Nothing under src/audio/<bank>/ is committed; everything is regenerated
# from the baserom (or auto-extracted on demand if the manifest is
# missing). See MUSIC_AND_SFX_DISCOVERIES.md. The MUSIC_BANKS,
# MUSIC_SEQ_*, MUSIC_SBK_O variables and the parse-time auto-extract
# trigger live up near the O_FILES definition so the link rule sees
# them; the rules themselves stay here.

# Manifest -> .cseq.s files: rebuilt by extractMusicSequences.py. Make
# treats the manifest as the rule's primary output and the .cseq.s
# files as group siblings that the same rule produces.
$(BUILD_DIR)/src/audio/%.manifest.json: tools/extractMusicSequences.py \
                                         tools/disassemble_cseq.py \
                                         tools/assemble_cseq.py \
                                         tools/mid_to_cseq.py \
                                         tools/_audio_seq_names.py \
                                         baserom.$(VERSION).z64 \
                                         $(wildcard $(MUSIC_EXTRAS)/*.mid) \
                                         $(wildcard $(MUSIC_EXTRAS)/*.midi)
	$(V)$(PYTHON) tools/extractMusicSequences.py --version $(VERSION) \
	    --bank $* --src-dir $(BUILD_DIR)/src/audio --extras-dir $(MUSIC_EXTRAS)

.PRECIOUS: $(BUILD_DIR)/src/audio/%.cseq.bin $(BUILD_DIR)/src/audio/%.cseq.s \
           $(BUILD_DIR)/src/audio/%.cseq.inc.c \
           $(BUILD_DIR)/src/audio/%_sbk.c \
           $(BUILD_DIR)/src/audio/%.manifest.json
$(BUILD_DIR)/src/audio/%.cseq.bin: $(BUILD_DIR)/src/audio/%.cseq.s tools/assemble_cseq.py
	$(call print_3,Assembling cseq:,$<,$@)
	@mkdir -p $(@D)
	$(V)$(PYTHON) tools/assemble_cseq.py $< -o $@

$(BUILD_DIR)/src/audio/%.cseq.inc.c: $(BUILD_DIR)/src/audio/%.cseq.bin tools/binToInc.py
	$(V)$(PYTHON) tools/binToInc.py $< -o $@

# Generated <bank>_sbk.c -- struct layout from manifest, sequence bodies
# from the .cseq.inc.c files (resolved via #include at C compile time).
$(BUILD_DIR)/src/audio/%_sbk.c: $(BUILD_DIR)/src/audio/%.manifest.json tools/gen_sbk_c.py
	$(V)$(PYTHON) tools/gen_sbk_c.py $< -o $@

# Each <bank>_sbk.c needs every sequence's .inc.c at compile time.
$(foreach b,$(MUSIC_BANKS),\
    $(eval $(BUILD_DIR)/src/audio/$(b)_sbk.o: \
        $(filter $(BUILD_DIR)/src/audio/$(b)/%,$(MUSIC_SEQ_INCS))))

# Compile rule for the generated <bank>_sbk.c. The standard
# `$(BUILD_DIR)/%.o: %.c` pattern only matches sources under src/, so we
# spell this one out. Mirrors the standard rule's flags.
$(BUILD_DIR)/src/audio/%_sbk.o: $(BUILD_DIR)/src/audio/%_sbk.c
	$(call print_3,Compiling:,$<,$@)
	@mkdir -p $(@D)
ifndef SKIP_DEPS
	$(V)clang -MMD -MP -fno-builtin -funsigned-char -fdiagnostics-color -std=gnu89 -m32 $(INCLUDES) $(DEFINES) -E -o $@ $< && rm $@
endif
	$(V)$(CC) $(CCFLAGS) $(OPTFLAGS) -o $@ $< 2>&1 | $(PYTHON) tools/colorizeIDO.py
	$(V)$(PYTHON) tools/patchMips3Objects.py $@

# ---- Sound-bank pipeline (.ctl + .tbl) ------------------------------
# Manifest + .tbl rebuild: extract_ctl_bank.py is one tool that produces
# both, plus per-waveform AIFC/AIFF in build/src/audio/<bank>/. Make
# treats the manifest as the primary output here.
.PRECIOUS: $(BUILD_DIR)/src/audio/%.tbl.bin \
           $(BUILD_DIR)/src/audio/%_ctl.c \
           $(BUILD_DIR)/src/audio/%.ctl.json
# Distinct extension (`.ctl.json` vs the music pipeline's
# `.manifest.json`) so Make can tell the two pattern rules apart.
$(BUILD_DIR)/src/audio/%.ctl.json: tools/extract_ctl_bank.py \
                                   tools/audio_codec.py \
                                   tools/decode_ctl.py \
                                   baserom.$(VERSION).z64 \
                                   $(wildcard $(SOUND_EXTRAS)/*.aifc)
	$(V)$(PYTHON) tools/extract_ctl_bank.py --version $(VERSION) \
	    --bank $* --src-dir $(BUILD_DIR)/src/audio --extras-dir $(SOUND_EXTRAS)

# The same recipe writes the .tbl.bin -- declare the dep so Make rebuilds
# the .tbl whenever the manifest is regenerated.
$(BUILD_DIR)/src/audio/%.tbl.bin: $(BUILD_DIR)/src/audio/%.ctl.json ;

# .tbl bytes -> linkable .o (same recipe as the standard bin -> o rule).
$(BUILD_DIR)/assets/%.tbl.o: $(BUILD_DIR)/src/audio/%.tbl.bin
	$(call print_3,Making binary:,$<,$@)
	@mkdir -p $(@D)
	$(V)$(OBJCOPY) -I binary -O $(BIG_MIPS_OBJCOPY_TARGET) -B mips $< $@

# FGM blobs: same recipe shape as the .tbl one above. Stem captures
# `fgm.unk`, `fgm.tbl`, `fgm.ucd`. The stamp file gates the parse-time
# auto-extract; once extraction has happened, the .bin paths are
# present and Make uses them.
.PRECIOUS: $(BUILD_DIR)/src/audio/fgm.%.bin $(FGM_STAMP)
$(BUILD_DIR)/src/audio/fgm.%.bin: $(FGM_STAMP) ;

# This rule is mostly belt-and-braces: the parse-time trigger above
# already runs extraction when needed, but having the stamp as a real
# Make target lets explicit `make $(FGM_STAMP)` invocations work too.
$(FGM_STAMP): tools/extract_fgm.py baserom.$(VERSION).z64 \
              $(wildcard $(FGM_EXTRAS)/*.bin)
	$(V)$(PYTHON) tools/extract_fgm.py --version $(VERSION) \
	    --out-dir $(BUILD_DIR)/src/audio --extras-dir $(FGM_EXTRAS)

$(BUILD_DIR)/assets/fgm.%.o: $(BUILD_DIR)/src/audio/fgm.%.bin $(FGM_STAMP)
	$(call print_3,Making binary:,$<,$@)
	@mkdir -p $(@D)
	$(V)$(OBJCOPY) -I binary -O $(BIG_MIPS_OBJCOPY_TARGET) -B mips $< $@

$(BUILD_DIR)/src/audio/%_ctl.c: $(BUILD_DIR)/src/audio/%.ctl.json tools/gen_ctl_c.py tools/decode_ctl.py
	$(V)$(PYTHON) tools/gen_ctl_c.py $< -o $@

$(BUILD_DIR)/src/audio/%_ctl.o: $(BUILD_DIR)/src/audio/%_ctl.c
	$(call print_3,Compiling:,$<,$@)
	@mkdir -p $(@D)
ifndef SKIP_DEPS
	$(V)clang -MMD -MP -fno-builtin -funsigned-char -fdiagnostics-color -std=gnu89 -m32 $(INCLUDES) $(DEFINES) -E -o $@ $< && rm $@
endif
	$(V)$(CC) $(CCFLAGS) $(OPTFLAGS) -o $@ $< 2>&1 | $(PYTHON) tools/colorizeIDO.py
	$(V)$(PYTHON) tools/patchMips3Objects.py $@

ifeq ($(RELOC_DATA),1)
# Compiled relocData files go in build/<v>/assets/<v>/relocData/ as overrides.
# Compressed files (those that have a .vpk0.bin in assets/<v>/relocData/) go
# through vpk0 compression; uncompressed files go directly to .bin. The
# boundary differs by version (US: 499, JP: 474), so we check the filesystem.
RELOC_C_OVERRIDES := $(foreach f,$(RELOC_C_FILES),\
                       $(if $(wildcard assets/$(VERSION)/relocData/$(f).vpk0.bin),\
                         $(BUILD_DIR)/assets/$(VERSION)/relocData/$(f).vpk0,\
                         $(BUILD_DIR)/assets/$(VERSION)/relocData/$(f).bin))

# Reloc data
assets/$(VERSION)/relocData.bin: $(VPK0_FILES) $(RELOC_C_OVERRIDES)
	$(call print_2,Making reloc data binary:,$@,$(BLUE))
	$(V)$(PYTHON) tools/relocData.py makeBin $(BUILD_DIR)/assets/$(VERSION)/relocData --version $(VERSION)

# Compressed files (originals from baserom)
.PRECIOUS: assets/$(VERSION)/relocData/%.vpk0
assets/$(VERSION)/relocData/%.vpk0: assets/$(VERSION)/relocData/%.vpk0.bin
	$(call print_3,Compressing File:,$<,$@)
	$(V)$(PYTHON) tools/relocData.py compress $< $@ --version $(VERSION)

# Compressed override files (compiled C source)
$(BUILD_DIR)/assets/$(VERSION)/relocData/%.vpk0: $(BUILD_DIR)/assets/$(VERSION)/relocData/%.vpk0.bin
	$(call print_3,Compressing File:,$<,$@)
	$(V)$(PYTHON) tools/relocData.py compress $< $@ --version $(VERSION)
endif

# relocData C-to-binary rules
# Source structure:
#   src/relocData/<id>_<Name>.manifest        - block manifest (committed)
#   src/relocData/<id>_<Name>.reloc           - relocation metadata (committed)
#   src/relocData/<Name>/<block>.sprite.c     - sprite struct definitions (committed)
#   src/relocData/<Name>/<block>.data.c       - raw data arrays (committed)
#   src/relocData/<Name>/<block>.dobjdesc.c   - DObjDesc arrays (committed)
#   src/relocData/<Name>/<block>.png          - OPTIONAL user override (gitignored)
#
# Build artifacts (auto-regenerated, gitignored, removed by `make clean`):
#   build/src/relocData/<id>_<Name>.c         - master .c generated from manifest
#   build/src/relocData/<Name>/<block>.inc.c  - raw N64 texture bytes
#   build/src/relocData/<Name>/<block>.png    - PNG preview from binary

# Per-file extract stamp: re-extracting the textures takes meaningful time, so
# do it once per file and tracking via a stamp avoids redundant work.
# relocSpriteTool pulls sprite texture `.inc.c` + PNG previews out of the
# decompressed ROM segment; extractRelocInc pulls raw Vtx / palette /
# texture bytes for typed Vtx / LUT / Tex wrapper blocks. Both must run
# before the master C file is compiled, so they hang off the same stamp.
$(BUILD_DIR)/src/relocData/.build/.extract-%.stamp: assets/$(VERSION)/relocData/%.vpk0.bin
	@mkdir -p $(@D)
	$(V)$(PYTHON) tools/relocSpriteTool.py extract $* --version $(VERSION) >/dev/null
	$(V)$(PYTHON) tools/extractRelocInc.py $* --version $(VERSION) >/dev/null
	$(V)$(PYTHON) tools/previewImagesTextures.py $* --version $(VERSION) 2>/dev/null || true
	@touch $@

$(BUILD_DIR)/src/relocData/.build/.extract-%.stamp: assets/$(VERSION)/relocData/%.bin
	@mkdir -p $(@D)
	$(V)$(PYTHON) tools/relocSpriteTool.py extract $* --version $(VERSION) >/dev/null
	$(V)$(PYTHON) tools/extractRelocInc.py $* --version $(VERSION) >/dev/null
	$(V)$(PYTHON) tools/previewImagesTextures.py $* --version $(VERSION) 2>/dev/null || true
	@touch $@

# User PNG override: if src/relocData/<Name>/<sprite>.<fmt>.png exists, use it
# to (re)generate the corresponding inc.c in the build directory. This rule
# fires after the main extraction, overwriting the build/-generated inc.c.
$(BUILD_DIR)/src/relocData/%.inc.c: src/relocData/%.png
	@mkdir -p $(@D)
	$(call print_3,Converting texture override:,$<,$@)
	$(V)$(PYTHON) tools/relocSpriteTool.py png2inc $< $@

define RELOC_C_RULE
# Search for a manifest source in preference order:
#   1. Version-specific .c override (e.g. *_Name.jp.c) — highest priority
#   2. .manifest
#   3. .spritelist
#   4. .c (shared/hand-written)
# When we know the file's name (via RELOC_NAME_$(1) from descriptions), look
# up *only* by name — JP and US can have different files at the same id, so
# matching by id would silently pick the wrong source. The literal id glob is
# kept as a fallback for unnamed files that the descriptions don't label.
RELOC_VC_$(1) := $$(firstword $$(if $$(RELOC_NAME_$(1)),\
    $$(wildcard src/relocData/*_$$(RELOC_NAME_$(1)).$(VERSION).c),\
    $$(wildcard src/relocData/$(1)_*.$(VERSION).c src/relocData/$(1).$(VERSION).c)))
RELOC_MANIFEST_$(1) := $$(firstword $$(if $$(RELOC_NAME_$(1)),\
    $$(wildcard src/relocData/*_$$(RELOC_NAME_$(1)).manifest),\
    $$(wildcard src/relocData/$(1)_*.manifest src/relocData/$(1).manifest)))
RELOC_LIST_$(1) := $$(firstword $$(if $$(RELOC_NAME_$(1)),\
    $$(wildcard src/relocData/*_$$(RELOC_NAME_$(1)).$(VERSION).spritelist) \
    $$(wildcard src/relocData/*_$$(RELOC_NAME_$(1)).spritelist),\
    $$(wildcard src/relocData/$(1)_*.$(VERSION).spritelist) \
    $$(wildcard src/relocData/$(1)_*.spritelist src/relocData/$(1).spritelist)))
RELOC_C_$(1) := $$(firstword $$(if $$(RELOC_NAME_$(1)),\
    $$(wildcard src/relocData/*_$$(RELOC_NAME_$(1)).c),\
    $$(wildcard src/relocData/$(1)_*.c src/relocData/$(1).c)))
# Subfolder name: prefer the version-specific RELOC_NAME (set by reloc_names mk),
# fall back to stripping the literal "<fid>_" prefix from the source basename, or
# finally "file_<fid>" if neither is available.
# RELOC_BASENAME drives .reloc lookup and subfolder fallback — never use the
# version-specific override here (its .jp/.us suffix would break the basename).
RELOC_BASENAME_$(1) := $$(basename $$(notdir $$(or $$(RELOC_MANIFEST_$(1)),$$(RELOC_LIST_$(1)),$$(RELOC_C_$(1)))))
RELOC_SUB_$(1) := $$(or $$(RELOC_NAME_$(1)),$$(patsubst $(1)_%,%,$$(RELOC_BASENAME_$(1))),file_$(1))
RELOC_DIR_$(1) := src/relocData/$$(RELOC_SUB_$(1))/
RELOC_BUILD_DIR_$(1) := $$(BUILD_DIR)/src/relocData/$$(RELOC_SUB_$(1))/
# Per-block structural files (always in src/) - master regen depends on these
RELOC_SPRITE_DEPS_$(1) := $$(wildcard $$(RELOC_DIR_$(1))*.sprite.c) \
                          $$(wildcard $$(RELOC_DIR_$(1))*.data.c) \
                          $$(wildcard $$(RELOC_DIR_$(1))*.dobjdesc.c) \
                          $$(wildcard $$(RELOC_DIR_$(1))*.palette.c) \
                          $$(wildcard $$(RELOC_DIR_$(1))*.mobjsub.c) \
                          $$(wildcard $$(RELOC_DIR_$(1))*.dl.c) \
                          $$(wildcard $$(RELOC_DIR_$(1))*.vtx.c)
# User PNG overrides in src/ - each generates a build/ inc.c
RELOC_PNG_OVERRIDES_$(1) := $$(wildcard $$(RELOC_DIR_$(1))*.png)
RELOC_INC_OVERRIDES_$(1) := $$(patsubst $$(RELOC_DIR_$(1))%.png,$$(RELOC_BUILD_DIR_$(1))%.inc.c,$$(RELOC_PNG_OVERRIDES_$(1)))
# Stamp marking that the extract step has populated build/.../<sprite>.inc.c files
RELOC_STAMP_$(1) := $$(BUILD_DIR)/src/relocData/.build/.extract-$(1).stamp

ifneq ($$(RELOC_VC_$(1)),)
  # Version-specific .c override (e.g. *_Name.jp.c) — always wins
  RELOC_MASTER_$(1) := $$(RELOC_VC_$(1))
else ifneq ($$(RELOC_MANIFEST_$(1)),)
  # Rich block manifest drives the master .c
  RELOC_MASTER_$(1) := $$(BUILD_DIR)/src/relocData/$$(RELOC_BASENAME_$(1)).c

  $$(RELOC_MASTER_$(1)): $$(RELOC_MANIFEST_$(1)) $$(RELOC_SPRITE_DEPS_$(1)) $$(RELOC_STAMP_$(1)) $$(RELOC_INC_OVERRIDES_$(1))
	$$(call print_3,Generating master from manifest:,$$<,$$@)
	@mkdir -p $$(@D)
	$$(V)$$(PYTHON) tools/genRelocMaster.py $$(RELOC_MANIFEST_$(1)) $$@ -Isrc/relocData -I$$(BUILD_DIR)/src/relocData
else ifneq ($$(RELOC_LIST_$(1)),)
  # .spritelist is a marker — actual layout/names come from walking the ROM
  # binary's reloc chain via tools/extractSpriteFile.py. The master .c, its
  # companion .reloc, and every texture/palette .inc.c under the sprite
  # subdir get regenerated whenever the spritelist file changes or the
  # extract stamp advances. No hand-maintained .sprite.c wrappers needed.
  RELOC_MASTER_$(1) := $$(BUILD_DIR)/src/relocData/$$(RELOC_BASENAME_$(1)).c
  RELOC_AUTO_RELOC_$(1) := $$(BUILD_DIR)/src/relocData/$$(RELOC_BASENAME_$(1)).reloc

  # Order-only dependency on the extract stamp so relocSpriteTool.py /
  # extractRelocInc.py run first (they write inc.c files based on the
  # legacy description-offset pipeline). The auto-extract runs second and
  # overwrites those files with the binary-walked version — the two paths
  # produce byte-identical content for well-behaved sprites, but the
  # ordering makes sure our bytes are the ones that land on disk.
  $$(RELOC_MASTER_$(1)) $$(RELOC_AUTO_RELOC_$(1)): $$(RELOC_LIST_$(1)) tools/extractSpriteFile.py tools/relocFileDescriptions.$(VERSION).txt assets/$(VERSION)/relocData/$(1).vpk0.bin | $$(RELOC_STAMP_$(1))
	$$(call print_3,Auto-extracting sprite file:,assets/$(VERSION)/relocData/$(1).vpk0.bin,$$@)
	@mkdir -p $$(@D)
	$$(V)$$(PYTHON) tools/extractSpriteFile.py $(1) $$(RELOC_MASTER_$(1)) --version $(VERSION)
else
  # Hand-written .c master (no manifest)
  RELOC_MASTER_$(1) := $$(RELOC_C_$(1))

  # Expanded human-readable view. Depends on the compiled .o because the
  # expander uses nm to map byte offsets → symbol names for chain-pointer
  # resolution and inline Vtx/Gfx/LUT decoding. Runs after extract (not as
  # part of it) so the .o exists by the time nm is called.
  $$(BUILD_DIR)/src/relocData/.build/.expand-$(1).stamp: $$(BUILD_DIR)/src/relocData/.build/$(1).o
	$$(V)$$(PYTHON) tools/expandRelocFile.py $(1) --version $(VERSION) >/dev/null || true
	@touch $$@
  RELOC_EXPAND_STAMPS += $$(BUILD_DIR)/src/relocData/.build/.expand-$(1).stamp
endif

# Compiling depends on:
#   - master .c (from manifest or hand-written)
#   - structural block files (.sprite.c etc.) in src/
#   - extract stamp (ensures build/.../inc.c files exist)
#   - any PNG overrides (each one regenerates its build/.../inc.c)
$$(BUILD_DIR)/src/relocData/.build/$(1).o: $$(RELOC_MASTER_$(1)) $$(RELOC_SPRITE_DEPS_$(1)) $$(RELOC_STAMP_$(1)) $$(RELOC_INC_OVERRIDES_$(1))
	$$(call print_3,Compiling relocData:,$$<,$$@)
	@mkdir -p $$(@D)
	$$(V)$$(IDO7) $$(CCFLAGS) $$(OPTFLAGS) -Isrc/relocData -I$$(BUILD_DIR)/src/relocData -o $$@ $$<

# .reloc file path. Four sources, in priority order:
#   1. Version-specific .c override (raw blob, no reloc fixing).
#   2. Spritelist-driven auto-extract (.reloc lives in build/, generated
#      alongside the master .c by extractSpriteFile.py).
#   3. Version-specific .reloc override (`*.jp.reloc` / `*.us.reloc`),
#      used when the shared .c compiles fine for both versions but the
#      extern target offsets / chain structure differ. Falls through
#      to the shared .reloc when no override exists.
#   4. Shared manifest or hand-written master .reloc.
RELOC_RELOC_$(1) := $$(if $$(RELOC_VC_$(1)),,\
                     $$(if $$(RELOC_AUTO_RELOC_$(1)),$$(RELOC_AUTO_RELOC_$(1)),\
                        $$(firstword \
                          $$(wildcard src/relocData/$$(RELOC_BASENAME_$(1)).$(VERSION).reloc) \
                          src/relocData/$$(RELOC_BASENAME_$(1)).reloc)))

# Compiled .data section goes to build/ to avoid overwriting the original asset.
# Compressed files (ID < 499) go to .vpk0.bin which then gets compressed to .vpk0;
# uncompressed files (ID >= 499) go directly to .bin.
#
# A handful of relocData files (e.g. SYKseg1Validate, SYSignValidate) embed a
# small MIPS function as raw u32[] data and cast it to a function pointer at
# runtime. Once those are decomp'd to real C functions, the bytes live in
# .text rather than .data. To keep the same on-disk layout (function bytes
# first, then the trailing data), we read .text's size from the .o and bump
# .data's LMA past it before merging both sections into a single blob. When
# .text is empty (the common case — pure data files), the LMA shift is 0 and
# the output is identical to the old .data-only extraction.
$$(BUILD_DIR)/assets/$(VERSION)/relocData/$(1).vpk0.bin: $$(BUILD_DIR)/src/relocData/.build/$(1).o $$(RELOC_SYM_INDEX)
	$$(call print_3,Extracting relocData .data:,$$<,$$@)
	@mkdir -p $$(@D)
	$$(V)TEXTSZ=$$$$($$(OBJDUMP) -h $$< | awk '$$$$2==".text"{print "0x"$$$$3}') ; \
	    $$(OBJCOPY) --change-section-lma .data=$$$${TEXTSZ:-0} -O binary --only-section=.text --only-section=.data $$< $$@
	$$(V)cp assets/$(VERSION)/relocData/$(1).vpk0.vpk0_config $$(BUILD_DIR)/assets/$(VERSION)/relocData/$(1).vpk0.vpk0_config 2>/dev/null || true
	$$(V)if [ "$$(AUTO_RELOC)" = "1" ] && ! grep -qx "$(1)" assets/$(VERSION)/auto_reloc_bad.txt 2>/dev/null; then \
		$$(PYTHON) tools/fixRelocChain.py $$@ $$< --auto --file-id $(1) --version $(VERSION) --sym-index $$(RELOC_SYM_INDEX); \
	elif [ -n "$$(RELOC_RELOC_$(1))" ] && [ -f $$(RELOC_RELOC_$(1)) ]; then \
		$$(PYTHON) tools/fixRelocChain.py $$@ $$(RELOC_RELOC_$(1)) $$< --file-id $(1) --version $(VERSION); \
	fi

$$(BUILD_DIR)/assets/$(VERSION)/relocData/$(1).bin: $$(BUILD_DIR)/src/relocData/.build/$(1).o $$(RELOC_SYM_INDEX)
	$$(call print_3,Extracting relocData .data:,$$<,$$@)
	@mkdir -p $$(@D)
	$$(V)TEXTSZ=$$$$($$(OBJDUMP) -h $$< | awk '$$$$2==".text"{print "0x"$$$$3}') ; \
	    $$(OBJCOPY) --change-section-lma .data=$$$${TEXTSZ:-0} -O binary --only-section=.text --only-section=.data $$< $$@
	$$(V)if [ "$$(AUTO_RELOC)" = "1" ] && ! grep -qx "$(1)" assets/$(VERSION)/auto_reloc_bad.txt 2>/dev/null; then \
		$$(PYTHON) tools/fixRelocChain.py $$@ $$< --auto --file-id $(1) --version $(VERSION) --sym-index $$(RELOC_SYM_INDEX); \
	elif [ -n "$$(RELOC_RELOC_$(1))" ] && [ -f $$(RELOC_RELOC_$(1)) ]; then \
		$$(PYTHON) tools/fixRelocChain.py $$@ $$(RELOC_RELOC_$(1)) $$< --file-id $(1) --version $(VERSION); \
	fi
endef

$(foreach f,$(RELOC_C_FILES),$(eval $(call RELOC_C_RULE,$(f))))

# Two-stage ordering for chain fixing: every per-fid .bin/.vpk0.bin rule
# above depends on $(RELOC_SYM_INDEX), which is only produced once ALL
# relocData .o files have compiled. This guarantees fixRelocChain.py can
# resolve cross-file extern symbols regardless of -j scheduling. The stamp
# re-runs whenever any .o recompiles; the index file's mtime only advances
# when its content (the symbol layout) actually changes, so chain-fix
# steps re-run exactly when some symbol moved.
ifeq ($(RELOC_DATA),1)
RELOC_ALL_OBJS := $(foreach f,$(RELOC_C_FILES),$(BUILD_DIR)/src/relocData/.build/$(f).o)

$(RELOC_SYM_STAMP): $(RELOC_ALL_OBJS) tools/genRelocSymIndex.py
	$(call print_2,Generating relocData symbol index:,$(RELOC_SYM_INDEX),$(BLUE))
	$(V)$(PYTHON) tools/genRelocSymIndex.py --version $(VERSION) -o $(RELOC_SYM_INDEX).tmp
	$(V)if cmp -s $(RELOC_SYM_INDEX).tmp $(RELOC_SYM_INDEX) 2>/dev/null; then rm -f $(RELOC_SYM_INDEX).tmp; else mv $(RELOC_SYM_INDEX).tmp $(RELOC_SYM_INDEX); fi
	@touch $@

$(RELOC_SYM_INDEX): $(RELOC_SYM_STAMP) ;
endif

# Expanded views are regenerated as a post-compile side-effect of `make all`.
# Each stamp depends on its .o, so incremental edits to a hand-written
# src/relocData/<name>.c only re-expand the file that actually changed.
all: $(RELOC_EXPAND_STAMPS)

# verify-reloc: compare generated binaries against originals (run after make)
.PHONY: verify-reloc
verify-reloc:
	@$(PYTHON) tools/verifyRelocOffsets.py --version $(VERSION) $(RELOC_C_FILES)

# reloc-expand-<fid>: generate the human-readable expanded .c + texture PNGs
# for one relocData file. Depends on the compiled .o because the expander uses
# nm to resolve chain-encoded pointers to symbol references.
#
#   make reloc-expand-86              # single file by fid
#   make reloc-expand-all             # every file in RELOC_C_FILES
.PHONY: reloc-expand-% reloc-expand-all reloc-expand-compile
reloc-expand-%: $(BUILD_DIR)/src/relocData/.build/%.o
	$(V)$(PYTHON) tools/previewImagesTextures.py $* --version $(VERSION) 2>/dev/null || true
	$(V)$(PYTHON) tools/expandRelocFile.py $* --version $(VERSION)

# Prerequisite phase: compile every reloc .o in parallel via make.
reloc-expand-compile: $(foreach f,$(RELOC_C_FILES),$(BUILD_DIR)/src/relocData/.build/$(f).o)

# reloc-expand-all: compile every .o in parallel (make's own -j), then run the
# expander + previewer on the whole corpus in one shot (each tool's --all
# walks the list internally, avoiding sub-make overhead per file).
reloc-expand-all: reloc-expand-compile
	$(V)$(PYTHON) tools/previewImagesTextures.py --all --version $(VERSION) 2>&1 | tail -5
	$(V)$(PYTHON) tools/expandRelocFile.py --all --version $(VERSION) 2>&1 | tail -20

# relocData texture management
# extract-textures: extract PNG previews from relocData sprite files
.PHONY: extract-textures
extract-textures:
	@for f in $(RELOC_C_FILES); do \
		$(PYTHON) tools/relocSpriteTool.py extract $$f --version $(VERSION); \
	done

# Convert a single PNG back to .inc.c: make png2inc PNG=path/to/Sprite.ia8.png INC=path/to/output.inc.c
.PHONY: png2inc
png2inc:
	$(V)$(PYTHON) tools/relocSpriteTool.py png2inc $(PNG) $(INC)

-include $(DEP_FILES)

# Progress report for decomp.dev
report:
	$(PYTHON) -m mapfile_parser objdiff_report -v $(VERSION) $(VERSION)_report.json

.PHONY: all toolchain rom nolink clean extract init expected validate format report
