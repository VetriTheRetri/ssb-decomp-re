#include "sys/dma.h"

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
u32 pad800450E8[2];

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

void create_dma_mq(void) {
    osCreateMesgQueue(&sDmaMesgQ, sDmaMesg, OS_MESG_BLOCK);
}

void dma_copy(OSPiHandle *handle, u32 physAddr, uintptr_t vAddr, u32 size, u8 direction) {
    OSIoMesg mesg;

    if (direction == OS_WRITE) {
        osWritebackDCache((void *)vAddr, size);
    } else {
        osInvalDCache((void *)vAddr, size);
    }

    mesg.hdr.pri      = OS_MESG_PRI_NORMAL;
    mesg.hdr.retQueue = &sDmaMesgQ;
    mesg.size         = 0x10000;

    while (size > 0x10000) {
        mesg.dramAddr = (void *)vAddr;
        mesg.devAddr  = physAddr;

        if (!D_80045020) { osEPiStartDma(handle, &mesg, direction); }
        osRecvMesg(&sDmaMesgQ, NULL, OS_MESG_BLOCK);
        size -= 0x10000;
        physAddr += 0x10000;
        vAddr += 0x10000;
    }

    if (size != 0) {
        mesg.dramAddr = (void *)vAddr;
        mesg.devAddr  = physAddr;
        mesg.size     = size;

        if (!D_80045020) { osEPiStartDma(handle, &mesg, direction); }
        osRecvMesg(&sDmaMesgQ, NULL, OS_MESG_BLOCK);
    }
}

void load_overlay(struct Overlay *ovl) {
    if ((uintptr_t)ovl->ramTextEnd - (uintptr_t)ovl->ramTextStart != 0) {
        osInvalICache(
            (void *)(u32)ovl->ramTextStart,
            (uintptr_t)ovl->ramTextEnd - (uintptr_t)ovl->ramTextStart);
        osInvalDCache(
            (void *)(u32)ovl->ramTextStart,
            (uintptr_t)ovl->ramTextEnd - (uintptr_t)ovl->ramTextStart);
    }

    if ((uintptr_t)ovl->ramDataEnd - (uintptr_t)ovl->ramDataStart != 0) {
        osInvalDCache(
            (void *)(u32)ovl->ramDataStart,
            (uintptr_t)ovl->ramDataEnd - (uintptr_t)ovl->ramDataStart);
    }

    if (ovl->romEnd - ovl->romStart != 0) {
        dma_copy(
            gRomPiHandle,
            ovl->romStart,
            (uintptr_t)ovl->ramLoadStart,
            ovl->romEnd - ovl->romStart,
            OS_READ);
    }

    if ((uintptr_t)ovl->ramNoloadEnd - (uintptr_t)ovl->ramNoloadStart != 0) {
        bzero(
            (void *)(u32)ovl->ramNoloadStart,
            (uintptr_t)ovl->ramNoloadEnd - (uintptr_t)ovl->ramNoloadStart);
    }
}

void dma_rom_read(u32 romSrc, void *ramDst, u32 nbytes) {
    dma_copy(gRomPiHandle, romSrc, (uintptr_t)ramDst, nbytes, OS_READ);
}

void dma_rom_write(void *ramSrc, u32 romDst, u32 nbytes) {
    dma_copy(gRomPiHandle, romDst, (uintptr_t)ramSrc, nbytes, OS_WRITE);
}

OSPiHandle *sram_pi_init(void) {
    if (sSramPiHandle.baseAddress == PHYS_TO_K1(PI_DOM2_ADDR2)) { return &sSramPiHandle; }

    sSramPiHandle.type        = DEVICE_TYPE_SRAM;
    sSramPiHandle.baseAddress = PHYS_TO_K1(PI_DOM2_ADDR2);
    sSramPiHandle.latency     = 5;
    sSramPiHandle.pulse       = 12;
    sSramPiHandle.pageSize    = 13;
    sSramPiHandle.relDuration = 2;
    sSramPiHandle.domain      = PI_DOMAIN2;
    sSramPiHandle.speed       = 0;
    // once again, not sizeof(sSramPiHandle.transferInfo)...
    bzero(&sSramPiHandle.transferInfo, 0x60);
    osEPiLinkHandle(&sSramPiHandle);

    return &sSramPiHandle;
}

void dma_sram_read(u32 romSrc, void *ramDst, u32 nbytes) {
    dma_copy(&sSramPiHandle, romSrc, (uintptr_t)ramDst, nbytes, OS_READ);
}

void dma_sram_write(void *ramSrc, u32 romDst, u32 nbytes) {
    dma_copy(&sSramPiHandle, romDst, (uintptr_t)ramSrc, nbytes, OS_WRITE);
}

u32 func_80002E18(u16 *arg0, u32 arg1, void (*arg2)(void), void *arg3);
#ifdef MIPS_TO_C
// some sort of crc function?
// vpk0 decompressor?
// arg0 = array arg1 = nbytes?
u32 func_80002E18(u16 *arg0, u32 arg1, void (*arg2)(void), void *arg3) {
    s32 s1;
    u16 s2;

    u16 *csr; // in a0 as cursor for arg0?

    s32 sp138;

    arg2();

    csr = arg0;
    s2  = *csr;
    csr++;
    s1 = 0x10;
    if ((uintptr_t)csr >= (uintptr_t)arg0 + arg1) {
        arg2();
        csr = arg0;
    }
    // L80002E84
    s2 = s2 << 16 | *csr;
    s1 -= 0x10;
    csr++;
    if ((uintptr_t)csr >= (uintptr_t)arg0 + arg1) {
        arg2();
        csr = arg0;
    }
    // L80002EB0
    s2 = s2 << 16 | *csr;
    s1 += 0x10;
    csr++;
    if ((uintptr_t)csr >= (uintptr_t)arg0 + arg1) {
        arg2();
        csr = arg0;
    }
    // L80002ED8
    s2 = s2 << 16 | *csr;
    s1 -= 0x10;

    sp138 = (s2 << -s1) + arg3;
    csr++;

    if (s1 < 8) {
        if ((uintptr_t)csr >= (uintptr_t)arg0 + arg1) {
            arg2();
            csr = arg0;
        }
        // L80002F24
        s2 = s2 << 16 | *csr;
        s1 += 0x10;
    }
    // L80002F34

    return 0xDEAD;
}

#else
#pragma GLOBAL_ASM("game/nonmatching/sys/dma/func_80002E18.s")
#endif /* NON_MATCHING */

void initialize_vpk_dma_stream(u32 devAddr, void *ramAddr, u32 nbytes) {
    sVpkBufRomAddr = devAddr;
    sVpkBufRamAddr = ramAddr;
    sVpkBufSize    = nbytes;
}

void fill_vpk_dma_buffer(void) {
    dma_rom_read(sVpkBufRomAddr, sVpkBufRamAddr, sVpkBufSize);
    sVpkBufRomAddr += sVpkBufSize;
}

void func_80003648(u32 devAddr, void *ramDst, void *ramAddr, u32 nbytes) {
    initialize_vpk_dma_stream(devAddr, ramAddr, nbytes);
    func_80002E18(ramAddr, nbytes, fill_vpk_dma_buffer, ramDst);
}

void dma_vpk_read(u32 devAddr, void *ramDst) {
    u8 buffer[0x400];

    func_80003648(devAddr, ramDst, &buffer, ARRAY_COUNT(buffer));
}

#pragma GLOBAL_ASM("game/nonmatching/sys/dma/unref_800036B4.s")

#pragma GCC diagnostic pop
