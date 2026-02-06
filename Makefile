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

# Skip reloc-related deps for JP build
ifeq ($(VERSION),jp)
	EXTRA_LINK_DEPS := symbols/jp_wip_linker.txt .splat/smashbrothers_jp.ld
endif

# Disable dependency generation for decomp-permuter
ifeq ($(PERMUTER),1)
SKIP_DEPS := 1
endif

UNAME_S := $(shell uname -s)
ifeq ($(OS),Windows_NT)
$(error Native Windows is currently unsupported for building this repository, use WSL instead c:)
else ifeq ($(UNAME_S),Darwin)
    MAKE := gmake
    BIG_MIPS_OBJCOPY_TARGET := elf32-bigmips
    BINUTILS_PREFIX := mips-elf
else ifeq ($(UNAME_S),Linux)
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
VPK0_FILES     := $(shell for i in {0..498} ; do echo assets/relocData/$$i.vpk0 ; done) # first 499 files are compressed

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
$(shell [ -f include/reloc_data.h ] || $(PYTHON) tools/relocData.py genHeader ./tools/relocFileDescriptions.$(VERSION).txt ./include/reloc_data.h ./symbols/reloc_data_symbols.$(VERSION).txt) # generate if not there

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
	$(SPLAT) $(SPLAT_YAML) $(SPLAT_FLAGS)

	$(PYTHON) tools/relocData.py extractAll tools/relocFileDescriptions.$(VERSION).txt
	@mkdir -p relocAssets
ifeq ($(VERSION),us)
	tools/halAssetTool x tools/relocFileDescriptions.$(VERSION).txt assets/relocData/ relocAssets
endif

init:
	${MAKE} clean
	${MAKE} extract
	${MAKE} all

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

include/reloc_data.h: ./tools/relocFileDescriptions.$(VERSION).txt
	$(call print_2,Generating reloc data header and symbol file from:,$<,$(BLUE))
	$(V)$(PYTHON) tools/relocData.py genHeader ./tools/relocFileDescriptions.$(VERSION).txt ./include/reloc_data.h ./symbols/reloc_data_symbols.$(VERSION).txt

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
# Reloc data
assets/relocData.bin: $(VPK0_FILES)
	$(call print_2,Making reloc data binary:,relocData.bin,$(BLUE))
	$(V)$(PYTHON) tools/relocData.py makeBin

# Compressed files
.PRECIOUS: assets/relocData/%.vpk0
assets/relocData/%.vpk0: assets/relocData/%.vpk0.bin
	$(call print_3,Compressing File:,$<,$@)
	$(V)$(PYTHON) tools/relocData.py compress $< $@
endif

-include $(DEP_FILES)

.PHONY: all toolchain rom nolink clean extract init expected validate format
