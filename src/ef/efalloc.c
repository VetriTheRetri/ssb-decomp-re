#include <ef/effect.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80131A10
GObj *D_ovl2_80131A10;

// 0x80131A14
GObj *D_ovl2_80131A14;

// 0x80131A18
s32 sEFParticleBankNum;

// 0x80131A20
uintptr_t sEFParticleBanks[7];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80115890
void efAllocInitParticleBank(void)
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
s32 efAllocGetParticleBankID(uintptr_t hdrlo)
{
    s32 i;

    for (i = 0; i < sEFParticleBankNum; i++)
    {
        if (hdrlo == sEFParticleBanks[i])
        {
            return i;
        }
    }
    return -1;
}

// 0x801159F8
s32 efAllocGetAddParticleBankID(uintptr_t hdrlo, uintptr_t hdrhi, uintptr_t texlo, uintptr_t texhi)
{
    void *hdrheap, *texheap;
    size_t hdrsize, texsize;
    s32 bank_id;

    if (sEFParticleBankNum > ARRAY_COUNT(sEFParticleBanks))
    {
        while (TRUE)
        {
            gsFatalPrintF("Particle Bank is over\n");
            smRunPrintGObjStatus();
        }
    }
    bank_id = efAllocGetParticleBankID(hdrlo);

    if (bank_id != -1)
    {
        return bank_id;
    }

    hdrsize = hdrhi - hdrlo;
    texsize = texhi - texlo;

    bank_id = sEFParticleBankNum;

    hdrheap = gsMemoryAlloc(hdrsize, 0x8);
    texheap = gsMemoryAlloc(texsize, 0x8);

    gsDmaRomRead(hdrlo, hdrheap, hdrsize);
    gsDmaRomRead(texlo, texheap, texsize);

    func_ovl0_800CE254(sEFParticleBankNum++, hdrheap, texheap);

    sEFParticleBanks[bank_id] = hdrlo;

    return bank_id;
}
