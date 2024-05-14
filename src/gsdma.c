#include "common.h"
#include "sys/dma.h"
#include "sys/gamesys.h"
#include "sys/thread3.h"

#include <macros.h>
#include <ssb_types.h>

#include <PR/os.h>
#include <PR/rcp.h>
#include <PR/ultratypes.h>

OSPiHandle *gRomPiHandle;
OSPiHandle sSramPiHandle; // 80045048
OSMesg sDmaMesg[1];       // 800450BC
OSMesgQueue sDmaMesgQ;    // 800450C0

void *sVpkBufRamAddr;
u32 sVpkBufSize;
u32 sVpkBufRomAddr;

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/gsCreateDmaMesgQueue.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/dma_copy.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/gsLoadOverlay.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/gsDmaRomRead.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/dma_rom_write.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/gsSramPiInit.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/dma_sram_read.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/dma_sram_write.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/func_80002E18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/initialize_vpk_dma_stream.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/fill_vpk_dma_buffer.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/func_80003648.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/dma_vpk_read.s")

#pragma GLOBAL_ASM("asm/nonmatchings/gsdma/unref_800036B4.s")
