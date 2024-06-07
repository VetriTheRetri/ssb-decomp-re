#include "effect.h"

GObj *D_ovl2_80131A10;
GObj *D_ovl2_80131A14;

// 0x80131A18
s32 sEFParticleBankNum;
s32 D_ovl2_80131A20[7];

// 0x80115890
void func_ovl2_80115890(void)
{
    D_ovl2_80131A10 = func_ovl0_800CE418(0x70);
    D_ovl2_80131A14 = func_ovl0_800D2758(0x18);
    func_ovl0_800CE040(0x50, 0xC0);
    sEFParticleBankNum = 0;
}

// 0x801158D8 - Unused?
void func_ovl2_801158D8(u32 lshift)
{
    D_ovl2_80131A10->flags |= (0x10000 << lshift);

    D_ovl2_80131A14->flags = D_ovl2_80131A10->flags;
}

// 0x80115910
void func_ovl2_80115910(void)
{
    D_ovl2_80131A10->flags |= ~0xFFFF;
    D_ovl2_80131A14->flags = D_ovl2_80131A10->flags;
}

// 0x80115944
void func_ovl2_80115944(u32 lshift)
{
    D_ovl2_80131A10->flags &= ~(0x10000 << lshift);
    D_ovl2_80131A14->flags = D_ovl2_80131A10->flags;
}

// 0x80115980
void func_ovl2_80115980(void)
{
    D_ovl2_80131A10->flags &= 0xFFFF;
    D_ovl2_80131A14->flags = D_ovl2_80131A10->flags;
}

// 0x801159B0
s32 func_ovl2_801159B0(uintptr_t arg0)
{
    s32 i;

    for (i = 0; i < sEFParticleBankNum; i++)
    {
        if (arg0 == D_ovl2_80131A20[i])
        {
            return i;
        }
    }
    return -1;
}

// 0x801159F8
s32 efAlloc_SetParticleBank(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3)
{
    void *sp3C;
    void *sp38;
    s32 bank_id;
    u32 size1;
    u32 size2;

    if (sEFParticleBankNum > ARRAY_COUNT(D_ovl2_80131A20))
    {
        while (TRUE)
        {
            gsFatalPrintF("Particle Bank is over\n");
            smCrashPrintGObjStatus();
        }
    }
    bank_id = func_ovl2_801159B0(arg0);

    if (bank_id != -1)
    {
        return bank_id;
    }

    size1 = arg1 - arg0;
    size2 = arg3 - arg2;

    bank_id = sEFParticleBankNum;

    sp3C = gsMemoryAlloc(size1, 0x8);
    sp38 = gsMemoryAlloc(size2, 0x8);

    dma_rom_read(arg0, sp3C, size1);
    dma_rom_read(arg2, sp38, size2);

    func_ovl0_800CE254(sEFParticleBankNum++, sp3C, sp38);

    D_ovl2_80131A20[bank_id] = arg0;

    return bank_id;
}
