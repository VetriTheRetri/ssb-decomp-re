MAKEFLAGS += --no-builtin-rules

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

# Default extra link dependencies (US build)
EXTRA_LINK_DEPS := symbols/not_found.txt symbols/linker_constants.txt build/assets/relocData.o

# JP build is WIP - many C-side symbols still need to be mapped, so by default
# we skip the relocData link dep. With RELOC_DATA=1, the JP build still attempts
# to include relocData.o (so the relocData side of the pipeline can be tested).
ifeq ($(VERSION),jp)
  ifeq ($(RELOC_DATA),1)
    EXTRA_LINK_DEPS := symbols/jp_wip_linker.txt .splat/smashbrothers_jp.ld build/assets/relocData.o
  else
    EXTRA_LINK_DEPS := symbols/jp_wip_linker.txt .splat/smashbrothers_jp.ld
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
INCLUDES := -Iinclude -Isrc
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

BUILD_DIR := build
ROM       := $(BUILD_DIR)/$(TARGET).$(VERSION).z64
ELF       := $(BUILD_DIR)/$(TARGET).$(VERSION).elf
LD_MAP    := $(BUILD_DIR)/$(TARGET).$(VERSION).map

# ----- Tools ------

IDO7            := tools/ido-recomp/7.1/cc
IDO5            := tools/ido-recomp/5.3/cc
AS              := $(BINUTILS_PREFIX)-as
LD              := $(BINUTILS_PREFIX)-ld
OBJCOPY         := $(BINUTILS_PREFIX)-objcopy
OBJDUMP         := $(BINUTILS_PREFIX)-objdump
STRIP           := $(BINUTILS_PREFIX)-strip
ASM_PROC        := $(PYTHON) tools/asm-processor/build.py
CCFLAGS         := -c -G 0 -non_shared -Xfullwarn -Xcpluscomm $(INCLUDES) $(DEFINES) -Wab,-r4300_mul -woff 649,838,712,516,624,568
ASFLAGS         := -EB -I include -march=vr4300 -mabi=32

ifeq ($(VERSION),jp)
    LDFLAGS := -T .splat/undefined_funcs_auto.txt -T .splat/undefined_syms_auto.txt \
               -T .splat/smashbrothers_jp.ld -T symbols/jp_wip_linker.txt symbols/reloc_data_symbols.$(VERSION).txt
    C_FILES := $(shell find src -type f | grep \\.c$)
	C_FILES := $(filter-out \
			    src/mn/mncommon/mncongra.c \
				src/mn/mncommon/mnstartup.c \
			   ,$(C_FILES))
else ifeq ($(VERSION),us)
    LDFLAGS := -T .splat/undefined_funcs_auto.txt -T .splat/undefined_syms_auto.txt \
               -T .splat/smashbrothers.ld -T symbols/not_found.txt -T symbols/linker_constants.txt -T symbols/reloc_data_symbols.$(VERSION).txt
    C_FILES := $(shell find src -type f | grep \\.c$)
else
    $(error Unsupported VERSION "$(VERSION)")
endif

# Exclude relocData C files from normal compilation (they are compiled separately into binary blobs)
C_FILES := $(filter-out $(wildcard src/relocData/*.c src/relocData/**/*.c),$(C_FILES))

# relocData C-to-binary conversion - per-version manifest of converted files.
# Loads converted_files.<version>.mk if it exists, falls back to converted_files.mk
# for backwards compatibility (the unversioned file is treated as US by default).
-include src/relocData/converted_files.$(VERSION).mk
ifndef RELOC_C_FILES
  ifeq ($(VERSION),us)
    -include src/relocData/converted_files.mk
  endif
endif
RELOC_C_FILES ?=

# Generate an id->name map for the active version so we can find manifests by
# name when JP/US file ids differ. The on-disk manifest filename uses whichever
# version's id existed when it was first committed (typically US), so we glob
# *_<Name>.manifest as a fallback.
RELOC_NAMES_MK := build/reloc_names.$(VERSION).mk
$(shell mkdir -p build && python3 tools/genRelocNamesMk.py tools/relocFileDescriptions.$(VERSION).txt > $(RELOC_NAMES_MK))
include $(RELOC_NAMES_MK)
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
S_TEXT_FILES   := $(shell find asm src -type f -name '*.s' | grep -v /nonmatchings/ | grep -v /matchings/ | grep -v '\.rodata\.s' | grep -v '\.data\.s' | grep -v '\.bss\.s')
S_DATA_FILES   := $(shell find asm -type f | grep \\.data\\.s$)
S_RODATA_FILES := $(shell find asm -type f | grep \\.rodata\\.s$)
S_BSS_FILES    := $(shell find asm -type f | grep \\.bss\\.s$)
PNG_FILES      := $(shell find assets -type f | grep \\.png$)
BIN_FILES      := $(shell find assets -type f | grep \\.bin$ | grep -v /relocData/) \
                  $(foreach f,$(PNG_FILES:.png=.bin),$f)
# The number of compressed (vpk0) relocData files differs by version (US: 499,
# JP: 474). Detect from the filesystem so the same Makefile works for both.
VPK0_FILES     := $(wildcard assets/relocData/*.vpk0.bin)
VPK0_FILES     := $(VPK0_FILES:.vpk0.bin=.vpk0)

O_FILES        := $(foreach f,$(C_FILES:.c=.o),$(BUILD_DIR)/$f) \
                  $(foreach f,$(S_TEXT_FILES:.s=.o),$(BUILD_DIR)/$f) \
                  $(foreach f,$(S_DATA_FILES:.s=.o),$(BUILD_DIR)/$f) \
                  $(foreach f,$(S_RODATA_FILES:.s=.o),$(BUILD_DIR)/$f) \
                  $(foreach f,$(S_BSS_FILES:.s=.o),$(BUILD_DIR)/$f) \
                  $(foreach f,$(BIN_FILES:.bin=.o),$(BUILD_DIR)/$f)

TEXT_SECTION_FILES := $(foreach f,$(C_FILES:.c=.text),$(BUILD_DIR)/$f) \
                      $(foreach f,$(S_TEXT_FILES:.s=.text),$(BUILD_DIR)/$f)

DATA_SECTION_FILES := $(foreach f,$(C_FILES:.c=.data),$(BUILD_DIR)/$f) \
                      $(foreach f,$(S_DATA_FILES:.s=.data),$(BUILD_DIR)/$f)

RODATA_SECTION_FILES := $(foreach f,$(C_FILES:.c=.rodata),$(BUILD_DIR)/$f) \
                        $(foreach f,$(S_RODATA_FILES:.s=.rodata),$(BUILD_DIR)/$f)

# directory flags
build/src/libultra/io/%.o: 		OPTFLAGS := -O1 -g0 -mips2
build/src/libultra/os/%.o: 		OPTFLAGS := -O1 -g0 -mips2
build/src/libultra/rmon/%.o: 	OPTFLAGS := -O1 -g0 -mips2
build/src/libultra/debug/%.o: 	OPTFLAGS := -O1 -g0 -mips2
build/src/libultra/host/%.o:	OPTFLAGS := -O1 -g0 -mips2

# per file flags
build/src/libultra/n_audio/n_cspsetvol.o:	OPTFLAGS := -O3 -g0 -mips2
build/src/libultra/n_audio/n_cspsetvol.o: CC := $(IDO7)
build/src/libultra/n_audio/n_cspsetseq.o:	OPTFLAGS := -O3 -g0 -mips2
build/src/libultra/n_audio/n_cspsetseq.o: CC := $(IDO7)
build/src/libultra/n_audio/n_cspsetpriority.o:	OPTFLAGS := -O3 -g0 -mips2
build/src/libultra/n_audio/n_cspsetpriority.o: CC := $(IDO7)
build/src/libultra/n_audio/n_cspsetfxmix.o:	OPTFLAGS := -O3 -g0 -mips2
build/src/libultra/n_audio/n_cspsetfxmix.o: CC := $(IDO7)
build/src/libultra/n_audio/n_cspsetbank.o:	OPTFLAGS := -O3 -g0 -mips2
build/src/libultra/n_audio/n_cspsetbank.o:	CC := $(IDO7)
build/src/libultra/n_audio/n_env.o: OPTFLAGS := -O3 -g0 -mips2
build/src/libultra/n_audio/n_env.o: CC := $(IDO7)
build/src/libultra/n_audio/n_synaddplayer.o: OPTFLAGS := -O3 -g0 -mips2
build/src/libultra/n_audio/n_synaddplayer.o: CC := $(IDO7)
build/src/libultra/n_audio/n_synallocvoice.o: OPTFLAGS := -O3 -g0 -mips2
build/src/libultra/n_audio/n_synallocvoice.o: CC := $(IDO7)
build/src/libultra/n_audio/n_synstartvoiceparam.o: OPTFLAGS := -O3 -g0 -mips2
build/src/libultra/n_audio/n_synstartvoiceparam.o: CC := $(IDO7)
build/src/libultra/n_audio/n_seq.o: OPTFLAGS := -O3 -g0 -mips2
build/src/libultra/n_audio/n_seq.o: CC := $(IDO7)
build/src/libultra/n_audio/n_seqplayer.o:	OPTFLAGS := -O3 -g0 -mips2
build/src/libultra/n_audio/n_seqplayer.o: CC := $(IDO7)
build/src/libultra/io/viswapcontext.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/viswapcontext.o: CC := $(IDO5)
build/src/libultra/io/pfsselectbank.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/pfsselectbank.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
build/src/libultra/io/epirawread.o: OPTFLAGS := -O1 -mips2
else
build/src/libultra/io/epirawread.o: OPTFLAGS := -O2 -mips2
endif
build/src/libultra/io/epirawread.o: CC := $(IDO5)
build/src/libultra/io/contramwrite.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/contramwrite.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
build/src/libultra/io/aisetfreq.o: OPTFLAGS := -O1 -mips2
else
build/src/libultra/io/aisetfreq.o: OPTFLAGS := -O2 -mips2
endif
build/src/libultra/io/aisetfreq.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
build/src/libultra/io/epirawdma.o: OPTFLAGS := -O1 -mips2
else
build/src/libultra/io/epirawdma.o: OPTFLAGS := -O2 -mips2
endif
build/src/libultra/io/epirawdma.o: CC := $(IDO5)
build/src/libultra/gu/mtxcatf.o: OPTFLAGS := -O2 -mips2
build/src/libultra/gu/mtxcatf.o: CC := $(IDO5)
build/src/libultra/gu/mtxxfmf.o: OPTFLAGS := -O3 -mips2
build/src/libultra/gu/mtxxfmf.o: CC := $(IDO5)
build/src/libultra/gu/sinf.o: OPTFLAGS := -O3 -mips2
build/src/libultra/gu/sinf.o: CC := $(IDO5)
build/src/libultra/io/motor.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/motor.o: CC := $(IDO5)
build/src/libultra/io/sirawdma.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/sirawdma.o: CC := $(IDO5)
build/src/libultra/io/pimgr.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/pimgr.o: CC := $(IDO5)
build/src/libultra/io/pfsgetstatus.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/pfsgetstatus.o: CC := $(IDO5)
build/src/libultra/io/contpfs.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/contpfs.o: CC := $(IDO5)
build/src/libultra/io/contramread.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/contramread.o: CC := $(IDO5)
build/src/libultra/io/crc.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/crc.o: CC := $(IDO5)
build/src/libultra/io/pfsisplug.o: OPTFLAGS := -O1 -mips2
build/src/libultra/io/pfsisplug.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
build/src/libultra/io/epirawwrite.o: OPTFLAGS := -O1 -mips2
else
build/src/libultra/io/epirawwrite.o: OPTFLAGS := -O2 -mips2
endif
build/src/libultra/io/epirawwrite.o: CC := $(IDO5)
build/src/libultra/os/seteventmesg.o: OPTFLAGS := -O1 -mips2
build/src/libultra/os/seteventmesg.o: CC := $(IDO5)
build/src/libultra/io/vimgr.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/vimgr.o: CC := $(IDO5)
build/src/libultra/io/leodiskinit.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/leodiskinit.o: CC := $(IDO5)
build/src/libultra/io/leointerrupt.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/leointerrupt.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
build/src/libultra/io/cartrominit.o: OPTFLAGS := -O1 -mips2
else
build/src/libultra/io/cartrominit.o: OPTFLAGS := -O2 -mips2
endif
build/src/libultra/io/cartrominit.o: CC := $(IDO5)
ifeq ($(VERSION),jp)
build/src/libultra/os/exceptasm.o: OPTFLAGS := -O1 -mips3 -32
else
build/src/libultra/os/exceptasm.o: OPTFLAGS := -O1 -mips3 -32 -DBUILD_VERSION=7
endif
build/src/libultra/os/exceptasm.o: CC := $(IDO5)
build/src/libultra/os/initialize.o: OPTFLAGS := -O1 -mips2
build/src/libultra/os/initialize.o: CC := $(IDO5)
build/src/libultra/io/controller.o: OPTFLAGS := -O1 -mips2
build/src/libultra/io/controller.o: CC := $(IDO5)
build/src/libultra/io/contreaddata.o: OPTFLAGS := -O2 -mips2
build/src/libultra/io/contreaddata.o: CC := $(IDO5)
build/src/libultra/io/devmgr.o: OPTFLAGS := -O1 -mips2
build/src/libultra/io/devmgr.o: CC := $(IDO5)
build/src/libultra/libc/ll.o: OPTFLAGS := -O1 -mips3 -32
build/src/libultra/libc/xprintf.o: OPTFLAGS := -O3 -mips2
build/src/libultra/libc/xprintf.o: CC := $(IDO5)
build/src/libultra/libc/xldtob.o: OPTFLAGS := -O3 -mips2
build/src/libultra/libc/xldtob.o: CC := $(IDO5)
build/src/libultra/libc/xlitob.o: OPTFLAGS := -O3 -mips2
build/src/libultra/libc/xlitob.o: CC := $(IDO5)
build/src/libultra/libc/ldiv.o: OPTFLAGS := -O3 -mips2
build/src/libultra/libc/ldiv.o: CC := $(IDO5)
build/src/libultra/audio/cents2ratio.o: OPTFLAGS := -O3 -mips2
build/src/libultra/audio/cents2ratio.o: CC := $(IDO5)
build/src/libultra/libc/llcvt.o: OPTFLAGS := -O1 -mips3 -32

# Automatic dependency files
DEP_FILES := $(O_FILES:.o=.d)

# create build directories
$(shell mkdir -p $(BUILD_DIR)/asm)
$(shell mkdir -p $(BUILD_DIR)/src)
$(shell mkdir -p $(BUILD_DIR)/assets)
# Bootstrap reloc_data.h and the version-specific symbols file at parse time.
# Both files are gitignored, and the version-specific symbols file ensures we
# regenerate when switching between US and JP builds. We also pass the active
# converted-files list so the bootstrap output already reflects which files
# get manifest-computed offsets vs description offsets — without this, the
# proper rule below would never re-fire (its outputs would already exist and
# be newer than its dependencies) and we'd link against the wrong values.
$(shell ([ -f include/reloc_data.h ] && [ -f symbols/reloc_data_symbols.$(VERSION).txt ]) || $(PYTHON) tools/genRelocSymbols.py ./tools/relocFileDescriptions.$(VERSION).txt ./include/reloc_data.h ./symbols/reloc_data_symbols.$(VERSION).txt --converted-files "$(RELOC_C_FILES)" > /dev/null)

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
	rm -f src/credits/staff.credits.encoded src/credits/staff.credits.metadata
	rm -f src/credits/titles.credits.encoded src/credits/titles.credits.metadata
	rm -f src/credits/info.credits.encoded src/credits/info.credits.metadata
	rm -f src/credits/companies.credits.encoded src/credits/companies.credits.metadata
	rm -f include/reloc_data.h symbols/reloc_data_symbols.$(VERSION).txt
	@echo removing vpk0 files
	@rm -f $(VPK0_FILES)

extract:
	rm -r -f asm
	rm -r -f assets
	# Drop generated symbols/header from any previous version build so the
	# parse-time bootstrap regenerates for the version we're extracting now.
	rm -f include/reloc_data.h symbols/reloc_data_symbols.us.txt symbols/reloc_data_symbols.jp.txt
	# Drop encoded credits files too — they're generated from the version-
	# specific .txt source but make can't tell which version they came from.
	rm -f src/credits/staff.credits.encoded src/credits/staff.credits.metadata
	rm -f src/credits/titles.credits.encoded src/credits/titles.credits.metadata
	rm -f src/credits/info.credits.encoded src/credits/info.credits.metadata
	rm -f src/credits/companies.credits.encoded src/credits/companies.credits.metadata
	$(SPLAT) $(SPLAT_YAML) $(SPLAT_FLAGS)

	$(PYTHON) tools/relocData.py extractAll tools/relocFileDescriptions.$(VERSION).txt
	@mkdir -p relocAssets
ifeq ($(VERSION),us)
	tools/halAssetTool x tools/relocFileDescriptions.$(VERSION).txt assets/relocData/ relocAssets
endif

init:
	${MAKE} clean
	${MAKE} extract RELOC_DATA=$(RELOC_DATA) VERSION=$(VERSION)
	${MAKE} all RELOC_DATA=$(RELOC_DATA) VERSION=$(VERSION)

# asm-differ expected object files
expected:
	mkdir -p expected/build
	rm -rf expected/build/
	cp -r build/ expected/build/

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
RELOCDATA_STRUCT_FILES := $(wildcard src/relocData/*.manifest src/relocData/*.spritelist src/relocData/*/*.sprite.c src/relocData/*/*.data.c src/relocData/*/*.dobjdesc.c)
RELOCDATA_EXTRACT_STAMPS := $(foreach f,$(RELOC_C_FILES),$(BUILD_DIR)/src/relocData/.extract-$(f).stamp)

include/reloc_data.h symbols/reloc_data_symbols.$(VERSION).txt &: \
		./tools/relocFileDescriptions.$(VERSION).txt \
		tools/genRelocSymbols.py tools/genRelocMaster.py \
		$(RELOCDATA_STRUCT_FILES) $(RELOCDATA_EXTRACT_STAMPS)
	$(call print_2,Generating reloc data header and symbol file from:,$<,$(BLUE))
	$(V)$(PYTHON) tools/genRelocSymbols.py ./tools/relocFileDescriptions.$(VERSION).txt ./include/reloc_data.h ./symbols/reloc_data_symbols.$(VERSION).txt -Isrc/relocData -I$(BUILD_DIR)/src/relocData --converted-files "$(RELOC_C_FILES)"

# Staff roll specific
src/sc/sccommon/scstaffroll.c: src/credits/staff.credits.encoded src/credits/titles.credits.encoded src/credits/info.credits.encoded src/credits/companies.credits.encoded
src/credits/staff.credits.encoded: src/credits/staff.credits.$(VERSION).txt tools/creditsTextConverter.py
	$(call print_2,Creating staff roll data for:,$<,$(PURPLE))
	$(V)$(PYTHON) tools/creditsTextConverter.py $< -titleFont
src/credits/titles.credits.encoded: src/credits/titles.credits.$(VERSION).txt tools/creditsTextConverter.py
	$(call print_2,Creating staff roll data for:,$<,$(PURPLE))
	$(V)$(PYTHON) tools/creditsTextConverter.py $< -titleFont
src/credits/info.credits.encoded: src/credits/info.credits.$(VERSION).txt tools/creditsTextConverter.py
	$(call print_2,Creating staff roll data for:,$<,$(PURPLE))
	$(V)$(PYTHON) tools/creditsTextConverter.py $< -paragraphFont -multiline
src/credits/companies.credits.encoded: src/credits/companies.credits.$(VERSION).txt tools/creditsTextConverter.py
	$(call print_2,Creating staff roll data for:,$<,$(PURPLE))
	$(V)$(PYTHON) tools/creditsTextConverter.py $< -paragraphFont

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

ifeq ($(RELOC_DATA),1)
# Compiled relocData files go in build/assets/relocData/ as overrides.
# Compressed files (those that have a .vpk0.bin in assets/) go through
# vpk0 compression; uncompressed files go directly to .bin. The boundary
# differs by version (US: 499, JP: 474), so we check the filesystem.
RELOC_C_OVERRIDES := $(foreach f,$(RELOC_C_FILES),\
                       $(if $(wildcard assets/relocData/$(f).vpk0.bin),\
                         $(BUILD_DIR)/assets/relocData/$(f).vpk0,\
                         $(BUILD_DIR)/assets/relocData/$(f).bin))

# Reloc data
assets/relocData.bin: $(VPK0_FILES) $(RELOC_C_OVERRIDES)
	$(call print_2,Making reloc data binary:,relocData.bin,$(BLUE))
	$(V)$(PYTHON) tools/relocData.py makeBin $(BUILD_DIR)/assets/relocData

# Compressed files (originals from baserom)
.PRECIOUS: assets/relocData/%.vpk0
assets/relocData/%.vpk0: assets/relocData/%.vpk0.bin
	$(call print_3,Compressing File:,$<,$@)
	$(V)$(PYTHON) tools/relocData.py compress $< $@

# Compressed override files (compiled C source)
$(BUILD_DIR)/assets/relocData/%.vpk0: $(BUILD_DIR)/assets/relocData/%.vpk0.bin
	$(call print_3,Compressing File:,$<,$@)
	$(V)$(PYTHON) tools/relocData.py compress $< $@
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
$(BUILD_DIR)/src/relocData/.extract-%.stamp: assets/relocData/%.vpk0.bin
	@mkdir -p $(@D)
	$(V)$(PYTHON) tools/relocSpriteTool.py extract $* --version $(VERSION) >/dev/null
	@touch $@

$(BUILD_DIR)/src/relocData/.extract-%.stamp: assets/relocData/%.bin
	@mkdir -p $(@D)
	$(V)$(PYTHON) tools/relocSpriteTool.py extract $* --version $(VERSION) >/dev/null
	@touch $@

# User PNG override: if src/relocData/<Name>/<sprite>.<fmt>.png exists, use it
# to (re)generate the corresponding inc.c in the build directory. This rule
# fires after the main extraction, overwriting the build/-generated inc.c.
$(BUILD_DIR)/src/relocData/%.inc.c: src/relocData/%.png
	@mkdir -p $(@D)
	$(call print_3,Converting texture override:,$<,$@)
	$(V)$(PYTHON) tools/relocSpriteTool.py png2inc $< $@

define RELOC_C_RULE
# Search for a manifest source in preference order: .manifest, .spritelist, .c.
# When we know the file's name (via RELOC_NAME_$(1) from descriptions), look
# up *only* by name — JP and US can have different files at the same id, so
# matching by id would silently pick the wrong source. The literal id glob is
# kept as a fallback for unnamed files that the descriptions don't label.
RELOC_MANIFEST_$(1) := $$(firstword $$(if $$(RELOC_NAME_$(1)),\
    $$(wildcard src/relocData/*_$$(RELOC_NAME_$(1)).manifest),\
    $$(wildcard src/relocData/$(1)_*.manifest src/relocData/$(1).manifest)))
RELOC_LIST_$(1) := $$(firstword $$(if $$(RELOC_NAME_$(1)),\
    $$(wildcard src/relocData/*_$$(RELOC_NAME_$(1)).spritelist),\
    $$(wildcard src/relocData/$(1)_*.spritelist src/relocData/$(1).spritelist)))
RELOC_C_$(1) := $$(firstword $$(if $$(RELOC_NAME_$(1)),\
    $$(wildcard src/relocData/*_$$(RELOC_NAME_$(1)).c),\
    $$(wildcard src/relocData/$(1)_*.c src/relocData/$(1).c)))
# Subfolder name: prefer the version-specific RELOC_NAME (set by reloc_names mk),
# fall back to stripping the literal "<fid>_" prefix from the source basename, or
# finally "file_<fid>" if neither is available.
RELOC_BASENAME_$(1) := $$(basename $$(notdir $$(or $$(RELOC_MANIFEST_$(1)),$$(RELOC_LIST_$(1)),$$(RELOC_C_$(1)))))
RELOC_SUB_$(1) := $$(or $$(RELOC_NAME_$(1)),$$(patsubst $(1)_%,%,$$(RELOC_BASENAME_$(1))),file_$(1))
RELOC_DIR_$(1) := src/relocData/$$(RELOC_SUB_$(1))/
RELOC_BUILD_DIR_$(1) := $$(BUILD_DIR)/src/relocData/$$(RELOC_SUB_$(1))/
# Per-block structural files (always in src/) - master regen depends on these
RELOC_SPRITE_DEPS_$(1) := $$(wildcard $$(RELOC_DIR_$(1))*.sprite.c) \
                          $$(wildcard $$(RELOC_DIR_$(1))*.data.c) \
                          $$(wildcard $$(RELOC_DIR_$(1))*.dobjdesc.c)
# User PNG overrides in src/ - each generates a build/ inc.c
RELOC_PNG_OVERRIDES_$(1) := $$(wildcard $$(RELOC_DIR_$(1))*.png)
RELOC_INC_OVERRIDES_$(1) := $$(patsubst $$(RELOC_DIR_$(1))%.png,$$(RELOC_BUILD_DIR_$(1))%.inc.c,$$(RELOC_PNG_OVERRIDES_$(1)))
# Stamp marking that the extract step has populated build/.../<sprite>.inc.c files
RELOC_STAMP_$(1) := $$(BUILD_DIR)/src/relocData/.extract-$(1).stamp

ifneq ($$(RELOC_MANIFEST_$(1)),)
  # Rich block manifest drives the master .c
  RELOC_MASTER_$(1) := $$(BUILD_DIR)/src/relocData/$$(RELOC_BASENAME_$(1)).c

  $$(RELOC_MASTER_$(1)): $$(RELOC_MANIFEST_$(1)) $$(RELOC_SPRITE_DEPS_$(1)) $$(RELOC_STAMP_$(1)) $$(RELOC_INC_OVERRIDES_$(1))
	$$(call print_3,Generating master from manifest:,$$<,$$@)
	@mkdir -p $$(@D)
	$$(V)$$(PYTHON) tools/genRelocMaster.py $$(RELOC_MANIFEST_$(1)) $$@ -Isrc/relocData -I$$(BUILD_DIR)/src/relocData
else ifneq ($$(RELOC_LIST_$(1)),)
  # Sprite-only .spritelist drives the master .c
  RELOC_MASTER_$(1) := $$(BUILD_DIR)/src/relocData/$$(RELOC_BASENAME_$(1)).c

  $$(RELOC_MASTER_$(1)): $$(RELOC_LIST_$(1)) $$(RELOC_SPRITE_DEPS_$(1)) $$(RELOC_STAMP_$(1)) $$(RELOC_INC_OVERRIDES_$(1))
	$$(call print_3,Generating master from spritelist:,$$<,$$@)
	@mkdir -p $$(@D)
	$$(V)$$(PYTHON) tools/genRelocMaster.py $$(RELOC_LIST_$(1)) $$@ -Isrc/relocData -I$$(BUILD_DIR)/src/relocData
else
  # Hand-written .c master (no manifest)
  RELOC_MASTER_$(1) := $$(RELOC_C_$(1))
endif

# Compiling depends on:
#   - master .c (from manifest or hand-written)
#   - structural block files (.sprite.c etc.) in src/
#   - extract stamp (ensures build/.../inc.c files exist)
#   - any PNG overrides (each one regenerates its build/.../inc.c)
$$(BUILD_DIR)/src/relocData/$(1).o: $$(RELOC_MASTER_$(1)) $$(RELOC_SPRITE_DEPS_$(1)) $$(RELOC_STAMP_$(1)) $$(RELOC_INC_OVERRIDES_$(1))
	$$(call print_3,Compiling relocData:,$$<,$$@)
	@mkdir -p $$(@D)
	$$(V)$$(IDO7) $$(CCFLAGS) $$(OPTFLAGS) -Isrc/relocData -I$$(BUILD_DIR)/src/relocData -o $$@ $$<

# .reloc file path (sibling of either the master .c or the manifest)
RELOC_RELOC_$(1) := src/relocData/$$(RELOC_BASENAME_$(1)).reloc

# Compiled .data section goes to build/ to avoid overwriting the original asset.
# Compressed files (ID < 499) go to .vpk0.bin which then gets compressed to .vpk0;
# uncompressed files (ID >= 499) go directly to .bin.
$$(BUILD_DIR)/assets/relocData/$(1).vpk0.bin: $$(BUILD_DIR)/src/relocData/$(1).o
	$$(call print_3,Extracting relocData .data:,$$<,$$@)
	@mkdir -p $$(@D)
	$$(V)$$(OBJCOPY) -O binary --only-section=.data $$< $$@
	$$(V)cp assets/relocData/$(1).vpk0.vpk0_config $$(BUILD_DIR)/assets/relocData/$(1).vpk0.vpk0_config 2>/dev/null || true
	$$(V)if [ -f $$(RELOC_RELOC_$(1)) ]; then \
		$$(PYTHON) tools/fixRelocChain.py $$@ $$(RELOC_RELOC_$(1)) $$< --file-id $(1); \
	fi

$$(BUILD_DIR)/assets/relocData/$(1).bin: $$(BUILD_DIR)/src/relocData/$(1).o
	$$(call print_3,Extracting relocData .data:,$$<,$$@)
	@mkdir -p $$(@D)
	$$(V)$$(OBJCOPY) -O binary --only-section=.data $$< $$@
	$$(V)if [ -f $$(RELOC_RELOC_$(1)) ]; then \
		$$(PYTHON) tools/fixRelocChain.py $$@ $$(RELOC_RELOC_$(1)) $$< --file-id $(1); \
	fi
endef

$(foreach f,$(RELOC_C_FILES),$(eval $(call RELOC_C_RULE,$(f))))

# verify-reloc: compare generated binaries against originals (run after make)
.PHONY: verify-reloc
verify-reloc:
	@$(PYTHON) tools/verifyRelocOffsets.py $(RELOC_C_FILES)

# relocData texture management
# extract-textures: extract PNG previews from relocData sprite files
.PHONY: extract-textures
extract-textures:
	@for f in $(RELOC_C_FILES); do \
		$(PYTHON) tools/relocSpriteTool.py extract $$f; \
	done

# Convert a single PNG back to .inc.c: make png2inc PNG=path/to/Sprite.ia8.png INC=path/to/output.inc.c
.PHONY: png2inc
png2inc:
	$(V)$(PYTHON) tools/relocSpriteTool.py png2inc $(PNG) $(INC)

-include $(DEP_FILES)

.PHONY: all toolchain rom nolink clean extract init expected validate format
