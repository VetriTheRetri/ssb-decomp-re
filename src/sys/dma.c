#include "common.h"
#include <sys/dma.h>
#include <sys/gamesys.h>
#include <sys/thread3.h>

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

void gsCreateDmaMesgQueue(void) 
{
    osCreateMesgQueue(&sDmaMesgQ, sDmaMesg, OS_MESG_BLOCK);
}

void gsDmaCopy(OSPiHandle *handle, u32 physAddr, uintptr_t vAddr, u32 size, u8 direction)
{
    OSIoMesg mesg;

    if (direction == OS_WRITE) 
    {
        osWritebackDCache((void*)vAddr, size);
    } 
    else osInvalDCache((void*)vAddr, size);
    
    mesg.hdr.pri      = OS_MESG_PRI_NORMAL;
    mesg.hdr.retQueue = &sDmaMesgQ;
    mesg.size         = 0x10000;

    while (size > 0x10000) 
    {
        mesg.dramAddr = (void *)vAddr;
        mesg.devAddr  = physAddr;

        if (!D_80045020_40830) 
        {
            osEPiStartDma(handle, &mesg, direction);
        }
        osRecvMesg(&sDmaMesgQ, NULL, OS_MESG_BLOCK);
        size -= 0x10000;
        physAddr += 0x10000;
        vAddr += 0x10000;
    }

    if (size != 0) 
    {
        mesg.dramAddr = (void *)vAddr;
        mesg.devAddr  = physAddr;
        mesg.size     = size;

        if (!D_80045020_40830) 
        { 
            osEPiStartDma(handle, &mesg, direction);
        }
        osRecvMesg(&sDmaMesgQ, NULL, OS_MESG_BLOCK);
    }
}

void gsLoadOverlay(struct gsOverlay *ovl)
{
    if (((uintptr_t)ovl->ramTextEnd - (uintptr_t)ovl->ramTextStart) != 0)
    {
        osInvalICache
        (
            (void*)(u32)ovl->ramTextStart,
            (uintptr_t)ovl->ramTextEnd - (uintptr_t)ovl->ramTextStart
        );
        osInvalDCache
        (
            (void*)(u32)ovl->ramTextStart,
            (uintptr_t)ovl->ramTextEnd - (uintptr_t)ovl->ramTextStart
        );
    }

    if (((uintptr_t)ovl->ramDataEnd - (uintptr_t)ovl->ramDataStart) != 0)
    {
        osInvalDCache
        (
            (void*)(u32)ovl->ramDataStart,
            (uintptr_t)ovl->ramDataEnd - (uintptr_t)ovl->ramDataStart
        );
    }

    if ((ovl->romEnd - ovl->romStart) != 0)
    {
        gsDmaCopy
        (
            gRomPiHandle,
            ovl->romStart,
            (uintptr_t)ovl->ramLoadStart,
            ovl->romEnd - ovl->romStart,
            OS_READ
        );
    }

    if (((uintptr_t)ovl->ramNoloadEnd - (uintptr_t)ovl->ramNoloadStart) != 0)
    {
        bzero
        (
            (void *)(u32)ovl->ramNoloadStart,
            (uintptr_t)ovl->ramNoloadEnd - (uintptr_t)ovl->ramNoloadStart
        );
    }
}

void gsDmaRomRead(u32 rom_src, void *ram_dst, u32 nbytes) 
{
    gsDmaCopy(gRomPiHandle, rom_src, (uintptr_t)ram_dst, nbytes, OS_READ);
}

void gsDmaRomWrite(void *ramSrc, u32 romDst, u32 nbytes) 
{
    gsDmaCopy(gRomPiHandle, romDst, (uintptr_t)ramSrc, nbytes, OS_WRITE);
}

OSPiHandle* gsSramPiInit(void)
{
    if (sSramPiHandle.baseAddress == PHYS_TO_K1(PI_DOM2_ADDR2))
    { 
        return &sSramPiHandle; 
    }
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

void gsDmaSramRead(u32 rom_src, void *ram_dst, u32 nbytes)
{
    gsDmaCopy(&sSramPiHandle, rom_src, (uintptr_t)ram_dst, nbytes, OS_READ);
}

void gsDmaSramWrite(void *ram_src, u32 rom_dst, u32 nbytes) 
{
    gsDmaCopy(&sSramPiHandle, rom_dst, (uintptr_t)ram_src, nbytes, OS_WRITE);
}

// 0x80002E18 - This code is filthy. Oh, well. At least it matches and does not seem to be forced. vpk0 decompressor?
void func_80002E18(u16 *arg0, u32 arg1, void (*arg2)(), u8 *arg3)
{
    uintptr_t bound = (uintptr_t)((uintptr_t)arg0 + arg1);
    gsVpk0 *other_var_s0;
    gsVpk0 *var_s3;
    gsVpk0 sp14C[64];
    u8 *bytecsr;
    gsVpk0 *sp144;
    gsVpk0 *sp140;
    u8 *byte;
    void *sp138;
    u32 sp134;
    gsVpk0 *spE4[20];
    s32 i;
    s32 var_v0;
    gsVpk0 *var_s0;
    gsVpk0 *current_vpk0;
    gsVpk0 *sp84[20];
    s32 j;
    s32 unused2;
    s32 other_var_v0;
    gsVpk0 *current_vpk0_2;
    s32 unused3[3];
    s32 sp64;
    s32 unused;
    u32 temp_s2;
    s32 temp_s1;
    u16 *csr;

    temp_s1 = 0;
    temp_s2 = 0;
    var_s3 = sp14C;

    arg2();
    csr = arg0;

    temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;

    if ((uintptr_t)csr >= bound)
    {
        arg2();
        csr = arg0;
    }
    temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 -= 0x10;

    bytecsr = arg3;

    if ((uintptr_t)csr >= bound)
    {
        arg2();
        csr = arg0;
    }

    temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10; if ((uintptr_t)csr >= bound) // Newline memes
    {
        arg2();
        csr = arg0;
    }
    temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 -= 0x10, sp138 = (temp_s2 << (-temp_s1)) + bytecsr;

    if (temp_s1 < 8)
    {
        if ((uintptr_t)csr >= bound)
        {
            arg2();
            csr = arg0;
        }
        temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
    }
    temp_s1 -= 0x8;
    sp134 = (temp_s2 << (0x18 - temp_s1)) >> 0x18;

    i = 0;
    spE4[0] = NULL;
loop_11:
    {
        if (temp_s1 <= 0)
        {
            if ((uintptr_t)csr >= bound)
            {
                arg2();
                csr = arg0;
            }
            temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
        }
        temp_s1--;
        var_v0 = ((u32)(temp_s2 << (0x1F - temp_s1))) >> 0x1F;

        if ((var_v0 == 0) || (i >= 2))
        {
            do
            {
                if (var_v0 != 0)
                {
                    current_vpk0 = var_s3;
                    current_vpk0->unk_vpk0_0x0 = 0;
                    current_vpk0->unk_vpk0_0x4 = 0;
                    current_vpk0->unk_vpk0_0x8 = 0;

                    var_s3++;

                    current_vpk0->unk_vpk0_0x0 = spE4[i - 2];
                    current_vpk0->unk_vpk0_0x4 = spE4[i - 1];

                    spE4[i - 2] = current_vpk0;
                    i--;
                }
                else
                {
                    current_vpk0 = var_s3, var_s3->unk_vpk0_0x0 = 0, var_s3->unk_vpk0_0x4 = 0, var_s3->unk_vpk0_0x8 = 0, var_s3++;

                    if (temp_s1 < 8)
                    {
                        if ((uintptr_t)csr >= bound)
                        {
                            arg2();
                            csr = arg0;
                        }
                        temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
                    }
                    temp_s1 -= 0x8;
                    current_vpk0->unk_vpk0_0x8 = (temp_s2 << (0x18 - temp_s1)) >> 0x18;
                    spE4[i] = current_vpk0;
                    i++;
                }
                goto loop_11;
            }
            while (i >= 2);
        }
    }

    sp144 = spE4[0];
    j = 0;
    sp84[0] = 0;
loop_25:
    {
        if (temp_s1 <= 0)
        {
            if ((uintptr_t)csr >= bound)
            {
                arg2();
                csr = arg0;
            }
            temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
        }
        temp_s1--;
        var_v0 = (temp_s2 << (0x1F - temp_s1)) >> 0x1F;

        if ((var_v0 == 0) || (j >= 2))
        {
            do
            {
                if (var_v0 != 0)
                {
                    current_vpk0_2 = var_s3;
                    current_vpk0_2->unk_vpk0_0x0 = 0;
                    current_vpk0_2->unk_vpk0_0x4 = 0;
                    current_vpk0_2->unk_vpk0_0x8 = 0;

                    var_s3++;

                    current_vpk0_2->unk_vpk0_0x0 = sp84[j - 2];
                    current_vpk0_2->unk_vpk0_0x4 = sp84[j - 1];
                    sp84[j - 2] = current_vpk0_2;

                    j--;
                }
                else
                {
                    current_vpk0_2 = var_s3, var_s3->unk_vpk0_0x0 = 0, var_s3->unk_vpk0_0x4 = 0, var_s3->unk_vpk0_0x8 = 0, var_s3++;

                    if (temp_s1 < 8)
                    {
                        if ((uintptr_t)csr >= bound)
                        {
                            arg2();
                            csr = arg0;
                        }
                        temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
                    }
                    temp_s1 -= 0x8;
                    current_vpk0_2->unk_vpk0_0x8 = (temp_s2 << (0x18 - temp_s1)) >> 0x18;
                    sp84[j] = current_vpk0_2;
                    j++;
                }
                goto loop_25;
            } 
            while (j >= 2);
        }
    }
    sp140 = sp84[0];

    while ((uintptr_t)bytecsr < (uintptr_t)sp138)
    {
        if (temp_s1 <= 0)
        {
            if ((uintptr_t)csr >= bound)
            {
                arg2();
                csr = arg0;
            }
            temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
        }
        temp_s1--;

        if (!((temp_s2 << (0x1F - temp_s1)) >> 0x1F))
        {
            if (temp_s1 < 8)
            {
                if ((uintptr_t)csr >= bound)
                {
                    arg2();
                    csr = arg0;
                }
                temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
            }
            temp_s1 -= 0x8;
            *(bytecsr++) = (temp_s2 << (0x18 - temp_s1)) >> 0x18;
        }
        else
        {
            other_var_s0 = sp144;
            var_s3 = sp140;

            if (sp134 != 0)
            {
                sp64 = 0;
                other_var_s0 = sp144;

                while (other_var_s0->unk_vpk0_0x0 != (NULL))
                {
                    if (temp_s1 <= 0)
                    {
                        if ((uintptr_t)csr >= bound)
                        {
                            arg2();
                            csr = arg0;
                        }
                        temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
                    }
                    temp_s1--;
                    other_var_s0 = (!((temp_s2 << (0x1F - temp_s1)) >> 0x1F)) ? (other_var_s0->unk_vpk0_0x0) : (other_var_s0->unk_vpk0_0x4);
                }

                if (temp_s1 < other_var_s0->unk_vpk0_0x8)
                {
                    if ((uintptr_t)csr >= bound)
                    {
                        arg2();
                        csr = arg0;
                    }
                    temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
                }
                temp_s1 -= other_var_s0->unk_vpk0_0x8;
                var_v0 = (temp_s2 << ((-other_var_s0->unk_vpk0_0x8) - temp_s1)) >> (-((u32)other_var_s0->unk_vpk0_0x8));

                if (var_v0 <= 2)
                {
                    sp64 = var_v0 + 1;
                    var_s0 = sp144;

                    while (var_s0->unk_vpk0_0x0 != (NULL))
                    {
                        if (temp_s1 <= 0)
                        {
                            if ((uintptr_t)csr >= bound)
                            {
                                arg2();
                                csr = arg0;
                            }
                            temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
                        }
                        temp_s1--;
                        var_s0 = (!((temp_s2 << (0x1F - temp_s1)) >> 0x1F)) ? (var_s0->unk_vpk0_0x0) : (var_s0->unk_vpk0_0x4);
                    }

                    if (temp_s1 < var_s0->unk_vpk0_0x8)
                    {
                        if ((uintptr_t)csr >= bound)
                        {
                            arg2();
                            csr = arg0;
                        }
                        temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
                    }
                    temp_s1 -= var_s0->unk_vpk0_0x8;
                    var_v0 = (temp_s2 << ((-var_s0->unk_vpk0_0x8) - temp_s1)) >> (-((u32)var_s0->unk_vpk0_0x8));
                }
                byte = (u8*)(((bytecsr - (var_v0 * 4)) - sp64) + 8);
            }
            else
            {
                var_s0 = sp144;

                while (var_s0->unk_vpk0_0x0 != (NULL))
                {
                    if (temp_s1 <= 0)
                    {
                        if ((uintptr_t)csr >= bound)
                        {
                            arg2();
                            csr = arg0;
                        }
                        temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
                    }
                    temp_s1--;
                    var_s0 = (!((temp_s2 << (0x1F - temp_s1)) >> 0x1F)) ? (var_s0->unk_vpk0_0x0) : (var_s0->unk_vpk0_0x4);
                }
                if (temp_s1 < var_s0->unk_vpk0_0x8)
                {
                    if ((uintptr_t)csr >= bound)
                    {
                        arg2();
                        csr = arg0;
                    }
                    temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
                }
                temp_s1 -= var_s0->unk_vpk0_0x8;
                var_v0 = (temp_s2 << ((-var_s0->unk_vpk0_0x8) - temp_s1)) >> (-((u32)var_s0->unk_vpk0_0x8));
                byte = (u8*)(bytecsr - var_v0);
            }
            while (var_s3->unk_vpk0_0x0 != (NULL))
            {
                if (temp_s1 <= 0)
                {
                    if ((uintptr_t)csr >= bound)
                    {
                        arg2();
                        csr = arg0;
                    }
                    temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
                }
                temp_s1--;
                var_s3 = (!((temp_s2 << (0x1F - temp_s1)) >> 0x1F)) ? (var_s3->unk_vpk0_0x0) : (var_s3->unk_vpk0_0x4);
            }
            if (temp_s1 < var_s3->unk_vpk0_0x8)
            {
                if ((uintptr_t)csr >= bound)
                {
                    arg2();
                    csr = arg0;
                }
                temp_s2 <<= 0x10, temp_s2 |= *(csr++), temp_s1 += 0x10;
            }
            temp_s1 -= var_s3->unk_vpk0_0x8;
            var_v0 = (temp_s2 << ((-var_s3->unk_vpk0_0x8) - temp_s1)) >> (-((u32)var_s3->unk_vpk0_0x8));

            while ((var_v0--) > 0)
            {
                *(bytecsr++) = *(byte++);
            }
        }
    }
}

void gsInitVpkDmaStream(u32 dev_addr, void *ram_addr, u32 nbytes) 
{
    sVpkBufRomAddr = dev_addr;
    sVpkBufRamAddr = ram_addr;
    sVpkBufSize    = nbytes;
}

void gsFillVpkDmaBuffer(void)
{
    gsDmaRomRead(sVpkBufRomAddr, sVpkBufRamAddr, sVpkBufSize);
    sVpkBufRomAddr += sVpkBufSize;
}

void func_80003648(u32 dev_addr, void *ram_dst, void *ram_addr, u32 nbytes) 
{
    gsInitVpkDmaStream(dev_addr, ram_addr, nbytes);
    func_80002E18(ram_addr, nbytes, gsFillVpkDmaBuffer, ram_dst);
}

void gsReadVpkDma(u32 dev_addr, void *ram_dst)
{
    u8 buffer[0x400];

    func_80003648(dev_addr, ram_dst, &buffer, ARRAY_COUNT(buffer));
}

// Best I can do with this is functionally equivalent. Somewhat disappointing, but not a big deal; this function is unreferenced.
#pragma GLOBAL_ASM("asm/nonmatchings/sys/dma/unref_800036B4.s")
