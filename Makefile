MAKEFLAGS += --no-builtin-rules

SHELL = /bin/bash
.SHELLFLAGS = -o pipefail -c

# ----- Defaults ------

COMPARE ?= 1
FULL_DISASM ?= 0

# Whether to colorize build messages
COLOR ?= 1
# Whether to hide commands or not
VERBOSE ?= 0
# Command for printing messages during the make.
PRINT ?= printf

VERSION ?= us

BASEROM              := baserom.$(VERSION).z64
TARGET               := smashbrothers

UNAME_S := $(shell uname -s)
UNAME_M := $(shell uname -m)
ifeq ($(OS),Windows_NT)
$(error Native Windows is currently unsupported for building this repository, use WSL instead c:)
else ifeq ($(UNAME_S),Linux)
    DETECTED_OS := linux
    #Detect aarch64 devices (Like Raspberry Pi OS 64-bit)
    #If it's found, then change the compiler to a version that can compile in 32 bit mode.
    ifeq ($(UNAME_M),aarch64)
        CC_CHECK_COMP := arm-linux-gnueabihf-gcc
    endif
else ifeq ($(UNAME_S),Darwin)
    DETECTED_OS := macos
    MAKE := gmake
    CPPFLAGS += -xc++
endif

# Support python venv's if one is installed.
PYTHON_VENV = .venv/bin/python3
ifneq "$(wildcard $(PYTHON_VENV) )" ""
  PYTHON = $(PYTHON_VENV)
endif

ifeq ($(VERBOSE),0)
  V := @
endif

ifeq ($(COLOR),1)
NO_COL  := \033[0m
RED     := \033[0;31m
GREEN   := \033[0;32m
BLUE    := \033[0;34m
YELLOW  := \033[0;33m
BLINK   := \033[33;5m
endif

# Common build print status function
define print
  @$(PRINT) "$(GREEN)$(1) $(YELLOW)$(2)$(GREEN) -> $(BLUE)$(3)$(NO_COL)\n"
endef

# ----- Common flags -----

MIPS_BINUTILS_PREFIX := mips-linux-gnu-
TOOLS	  := tools
PYTHON	  := python3
INCLUDES := -Iinclude -Iinclude/PR -Isrc -Isrc/sys -Isrc/ovl0 -Iinclude/n_audio
DEFINES := -DF3DEX_GBI_2 -D_MIPS_SZLONG=32 -DNDEBUG -DN_MICRO
OPTFLAGS := -O2

# ----- Output ------

GAME_NAME := smashbrothers
BUILD_DIR := build
ROM       := $(BUILD_DIR)/$(TARGET).$(VERSION).z64
ELF       := $(BUILD_DIR)/$(TARGET).$(VERSION).elf
LD_MAP    := $(BUILD_DIR)/$(TARGET).$(VERSION).map

# ----- Tools ------

ifneq ($(shell type $(MIPS_BINUTILS_PREFIX)ld >/dev/null 2>/dev/null; echo $$?), 0)
$(error Unable to find $(MIPS_BINUTILS_PREFIX)ld. Please install or build MIPS binutils, commonly mips-linux-gnu. (or set MIPS_BINUTILS_PREFIX if your MIPS binutils install uses another prefix))
endif

IDO             := $(TOOLS)/ido-recomp/$(DETECTED_OS)/cc
AS              := $(MIPS_BINUTILS_PREFIX)as
LD              := $(MIPS_BINUTILS_PREFIX)ld
OBJCOPY         := $(MIPS_BINUTILS_PREFIX)objcopy
OBJDUMP         := $(MIPS_BINUTILS_PREFIX)objdump
ASM_PROC        := $(PYTHON) $(TOOLS)/asm-processor/build.py
CCFLAGS         := -c -G 0 -non_shared -Xfullwarn -Xcpluscomm $(INCLUDES) $(DEFINES) -Wab,-r4300_mul -woff 649,838,712,516,624 -mips2
ASFLAGS         := -EB -I include -march=vr4300 -mabi=32
LDFLAGS         := -T .splat/undefined_funcs_auto.txt -T .splat/undefined_syms_auto.txt -T symbols/not_found.txt -T symbols/linker_constants.txt -T .splat/smashbrothers.ld
OBJCOPYFLAGS    := --pad-to=0xC00000 --gap-fill=0xFF
ASM_PROC_FLAGS  := --input-enc=utf-8 --output-enc=euc-jp --convert-statics=global-with-filename

SPLAT             ?= $(PYTHON) $(TOOLS)/splat/split.py
SPLAT_YAML        ?= $(GAME_NAME).yaml
SPLAT_FLAGS       ?=
ifneq ($(FULL_DISASM),0)
    SPLAT_FLAGS       += --disassemble-all
endif

# ----- Files ------
CC := $(ASM_PROC) $(ASM_PROC_FLAGS) $(IDO) -- $(AS) $(ASFLAGS) --

C_FILES        := $(shell find src -type f | grep \\.c$)
S_TEXT_FILES   := $(shell find asm -type f | grep \\.s$ | grep -v nonmatchings | grep -v \\.rodata\\.s | grep -v \\.data\\.s | grep -v \\.bss\\.s)
S_DATA_FILES   := $(shell find asm -type f | grep \\.data\\.s$)
S_RODATA_FILES := $(shell find asm -type f | grep \\.rodata\\.s$)
S_BSS_FILES    := $(shell find asm -type f | grep \\.bss\\.s$)
PNG_FILES      := $(shell find assets -type f | grep \\.png$)
BIN_FILES      := $(shell find assets -type f | grep \\.bin$) \
                  $(foreach f,$(PNG_FILES:.png=.bin),$f)

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
build/src/libultra/io/%.o: 		OPTFLAGS := -O1 -g0
build/src/libultra/os/%.o: 		OPTFLAGS := -O1 -g0
build/src/libultra/rmon/%.o: 	OPTFLAGS := -O1 -g0
build/src/libultra/debug/%.o: 	OPTFLAGS := -O1 -g0
build/src/libultra/host/%.o:	OPTFLAGS := -O1 -g0
# build/src/libultra/n_audio/%.o:	OPTFLAGS := -O3 -g0

# per file flags
# build/src/libultra/n_audio/cspsetvol.o:	OPTFLAGS := -O3 -g0
# build/src/libultra/n_audio/cspsetvol.o: CC := $(IDO)
# build/src/libultra/n_audio/cspsetbank.o:	OPTFLAGS := -O3 -g0
# build/src/libultra/n_audio/cspsetbank.o: CC := $(IDO)
# build/src/libultra/n_audio/cspsetpriority.o:	OPTFLAGS := -O3 -g0
# build/src/libultra/n_audio/cspsetpriority.o: CC := $(IDO)
# build/src/libultra/n_audio/cspsetfxmix.o:	OPTFLAGS := -O3 -g0
# build/src/libultra/n_audio/cspsetfxmix.o: CC := $(IDO)
build/src/libultra/n_audio/n_synaddplayer.o: OPTFLAGS := -O3 -g0
build/src/libultra/n_audio/n_synaddplayer.o: CC := $(IDO)
build/src/libultra/n_audio/n_synallocvoice.o: OPTFLAGS := -O3 -g0
build/src/libultra/n_audio/n_synallocvoice.o: CC := $(IDO)

# Automatic dependency files
DEP_FILES := $(O_FILES:.o=.d)

# create build directories
$(shell mkdir -p $(BUILD_DIR)/asm)
$(shell mkdir -p $(BUILD_DIR)/src)
$(shell mkdir -p $(BUILD_DIR)/assets)

# ----- Targets ------

all: rom

toolchain:
	@$(MAKE) -s -C tools

SB := $(BLUE)ROM MATCH: $(GREEN)Complete!\n
rom: $(ROM)
ifneq ($(COMPARE),0)
	@md5sum --status -c $(TARGET).$(VERSION).md5 && \
	$(PRINT) "$(BLUE)$(TARGET).$(VERSION).z64$(NO_COL): $(GREEN)OK$(NO_COL)\n$(YELLOW)$(SB)$(NO_COL)" || \
	$(PRINT) "$(BLUE)$(TARGET).$(VERSION).z64 $(RED)FAILED$(NO_COL)\n\
	$(BLUE)ROM MATCH: $(RED)FAILURE$(NO_COL)\n"
endif

nolink: $(TEXT_SECTION_FILES) $(DATA_SECTION_FILES) $(RODATA_SECTION_FILES)
	@echo "Comparing object files:"
	$(V)bash tools/compareObjects.sh

clean:
	rm -r -f $(BUILD_DIR)

extract:
	rm -r -f asm
	rm -r -f assets
	$(SPLAT) $(SPLAT_YAML) $(SPLAT_FLAGS)

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
	$(PYTHON) $(TOOLS)/formatHelper.py -e
	find include -type f | rg "\.h" | xargs clang-format -i
	find src -type f | rg "\.(c|h)" | xargs clang-format -i
	$(PYTHON) $(TOOLS)/formatHelper.py -s

# ----- Rules ------

# Making ROM
$(ROM): $(ELF)
	$(call print,ELF->ROM:,$<,$@)
	$(V)$(OBJCOPY) $(OBJCOPYFLAGS) $< $@ -O binary

$(ELF): $(O_FILES) symbols/not_found.txt
	@$(PRINT) "$(GREEN)Linking: $(YELLOW)$@$(NO_COL)\n"
	$(V)$(LD) -Map $(LD_MAP) -o $@ $(LDFLAGS)

$(BUILD_DIR)/%.text: $(BUILD_DIR)/%.o
	$(call print,text:,$<,$@)
	$(V)$(OBJCOPY) -O binary --only-section=.text $< $@

$(BUILD_DIR)/%.data: $(BUILD_DIR)/%.o
	$(call print,data:,$<,$@)
	$(V)$(OBJCOPY) -O binary --only-section=.data $< $@

$(BUILD_DIR)/%.rodata: $(BUILD_DIR)/%.o
	$(call print,Rodata:,$<,$@)
	$(V)$(OBJCOPY) -O binary --only-section=.rodata $< $@

# Assembly
$(BUILD_DIR)/%.o: %.s
	$(call print,Assembling:,$<,$@)
	@mkdir -p $(@D)
	$(V)$(AS) $(ASFLAGS) -o $@ $<

# C
$(BUILD_DIR)/%.o: %.c
	$(call print,Compiling:,$<,$@)
	@mkdir -p $(@D)
#   d file generation
#	$(V)clang -MMD -MP -fno-builtin -funsigned-char -fdiagnostics-color -std=gnu89 -m32 $(INCLUDES) $(DEFINES) -E -o $@ $<
	$(V)$(CC) $(CCFLAGS) $(OPTFLAGS) -o $@ $<

#Bins
$(BUILD_DIR)/%.o: %.bin
	$(call print,Making binary:,$<,$@)
	@mkdir -p $(@D)
	$(V)$(OBJCOPY) -I binary -O elf32-tradbigmips -B mips $< $@
	$(V)@bash $(TOOLS)/createPaletteObjectIfNeeded.sh $(OBJCOPY) -I binary -O elf32-tradbigmips -B mips $< $@

.PRECIOUS: assets/%.bin
assets/%.bin: assets/%.png
	$(call print,Converting Image:,$<,$@)
	$(V)$(PYTHON) $(TOOLS)/image_converter.py $< $@

-include $(DEP_FILES)

.PHONY: all toolchain rom nolink clean extract init expected format
