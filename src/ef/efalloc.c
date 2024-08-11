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
s32 sEFAllocParticleBanksNum;

// 0x80131A20
uintptr_t sEFAllocParticleBanks[7];

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
    sEFAllocParticleBanksNum = 0;
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

    for (i = 0; i < sEFAllocParticleBanksNum; i++)
    {
        if (hdrlo == sEFAllocParticleBanks[i])
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

    if (sEFAllocParticleBanksNum > ARRAY_COUNT(sEFAllocParticleBanks))
    {
        while (TRUE)
        {
            syErrorPrintf("Particle Bank is over\n");
            scManagerRunPrintGObjStatus();
        }
    }
    bank_id = efAllocGetParticleBankID(hdrlo);

    if (bank_id != -1)
    {
        return bank_id;
    }

    hdrsize = hdrhi - hdrlo;
    texsize = texhi - texlo;

    bank_id = sEFAllocParticleBanksNum;

    hdrheap = gsMemoryAlloc(hdrsize, 0x8);
    texheap = gsMemoryAlloc(texsize, 0x8);

    syDmaRomRead(hdrlo, hdrheap, hdrsize);
    syDmaRomRead(texlo, texheap, texsize);

    func_ovl0_800CE254(sEFAllocParticleBanksNum++, hdrheap, texheap);

    sEFAllocParticleBanks[bank_id] = hdrlo;

    return bank_id;
}
