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

// 0x80131A20 - Particle script banks that have already been loaded
uintptr_t sEFAllocParticleScriptBanks[7];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80115890
void efAllocInitParticleBank(void)
{
    D_ovl2_80131A10 = lbParticleAllocStructs(0x70);
    D_ovl2_80131A14 = lbParticleAllocGenerators(0x18);
    lbParticleAllocTransforms(0x50, 0xC0);
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
s32 efAllocGetParticleBankID(uintptr_t scripts_lo)
{
    s32 i;

    for (i = 0; i < sEFAllocParticleBanksNum; i++)
    {
        if (scripts_lo == sEFAllocParticleScriptBanks[i])
        {
            return i;
        }
    }
    return -1;
}

// 0x801159F8
s32 efAllocGetAddParticleBankID(uintptr_t scripts_lo, uintptr_t scripts_hi, uintptr_t textures_lo, uintptr_t textures_hi)
{
    void *script_desc, *texture_desc;
    size_t script_size, texture_size;
    s32 bank_id;

    if (sEFAllocParticleBanksNum > ARRAY_COUNT(sEFAllocParticleScriptBanks))
    {
        while (TRUE)
        {
            syErrorPrintf("Particle Bank is over\n");
            scManagerRunPrintGObjStatus();
        }
    }
    bank_id = efAllocGetParticleBankID(scripts_lo);

    if (bank_id != -1)
    {
        return bank_id;
    }
    script_size = scripts_hi - scripts_lo;
    texture_size = textures_hi - textures_lo;

    bank_id = sEFAllocParticleBanksNum;

    script_desc = gsMemoryAlloc(script_size, 0x8);
    texture_desc = gsMemoryAlloc(texture_size, 0x8);

    syDmaRomRead(scripts_lo, script_desc, script_size);
    syDmaRomRead(textures_lo, texture_desc, texture_size);

    lbParticleSetupBankID(sEFAllocParticleBanksNum++, script_desc, texture_desc);

    sEFAllocParticleScriptBanks[bank_id] = scripts_lo;

    return bank_id;
}
