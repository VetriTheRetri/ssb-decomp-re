#include "effect.h"

GObj *D_ovl2_80131A10;
GObj *D_ovl2_80131A14;
s32 D_ovl2_80131A18;
s32 D_ovl2_80131A20[7];

// 0x80115890
void func_ovl2_80115890(void)
{
    D_ovl2_80131A10 = func_ovl0_800CE418(0x70);
    D_ovl2_80131A14 = func_ovl0_800D2758(0x18);
    func_ovl0_800CE040(0x50, 0xC0);
    D_ovl2_80131A18 = 0;
}

// 0x801158D8 - Unused?
void func_ovl2_801158D8(u32 lshift)
{
    D_ovl2_80131A10->obj_renderflags |= (0x10000 << lshift);

    D_ovl2_80131A14->obj_renderflags = D_ovl2_80131A10->obj_renderflags;
}

// 0x80115910
void func_ovl2_80115910(void)
{
    D_ovl2_80131A10->obj_renderflags |= ~0xFFFF;
    D_ovl2_80131A14->obj_renderflags = D_ovl2_80131A10->obj_renderflags;
}

// 0x80115944
void func_ovl2_80115944(u32 lshift)
{
    D_ovl2_80131A10->obj_renderflags &= ~(0x10000 << lshift);
    D_ovl2_80131A14->obj_renderflags = D_ovl2_80131A10->obj_renderflags;
}

// 0x80115980
void func_ovl2_80115980(void)
{
    D_ovl2_80131A10->obj_renderflags &= 0xFFFF;
    D_ovl2_80131A14->obj_renderflags = D_ovl2_80131A10->obj_renderflags;
}

// 0x801159B0
s32 func_ovl2_801159B0(s32 arg0)
{
    s32 i;

    for (i = 0; i < D_ovl2_80131A18; i++)
    {
        if (arg0 == D_ovl2_80131A20[i])
        {
            return i;
        }
    }
    return -1;
}

// 0x801159F8
s32 efAlloc_SetParticleBank(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
    void *sp3C;
    void *sp38;
    s32 bank_id;
    u32 size1;
    u32 size2;

    if (D_ovl2_80131A18 > ARRAY_COUNT(D_ovl2_80131A20))
    {
        while (TRUE)
        {
            gsFatalPrintF("Particle Bank is over\n");
            scnmgr_scManagerCrashPrintGObjStatus();
        }
    }
    bank_id = func_ovl2_801159B0(arg0);

    if (bank_id != -1)
    {
        return bank_id;
    }

    size1 = arg1 - arg0;
    size2 = arg3 - arg2;

    bank_id = D_ovl2_80131A18;

    sp3C = hlMemoryAlloc(size1, 0x8);
    sp38 = hlMemoryAlloc(size2, 0x8);

    dma_rom_read(arg0, sp3C, size1);
    dma_rom_read(arg2, sp38, size2);

    func_ovl0_800CE254(D_ovl2_80131A18++, sp3C, sp38);

    D_ovl2_80131A20[bank_id] = arg0;

    return bank_id;
}