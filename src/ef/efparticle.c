#include <ef/effect.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80131A10
GObj *gEFParticleStructsHead;

// 0x80131A14
GObj *gEFParticleGeneratorsHead;

// 0x80131A18
s32 sEFParticleBanksNum;

// 0x80131A20 - Particle script banks that have already been loaded
uintptr_t sEFParticleScriptBanks[7];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80115890
void efParticleInitAll(void)
{
    gEFParticleStructsHead = lbParticleAllocStructs(112);
    gEFParticleGeneratorsHead = lbParticleAllocGenerators(24);
    
    lbParticleAllocTransforms(80, sizeof(LBTransform));
    sEFParticleBanksNum = 0;
}

// 0x801158D8
void efParticleHeadSetSkipID(u32 id)
{
    gEFParticleGeneratorsHead->flags = gEFParticleStructsHead->flags |= (0x10000 << id);
}

// 0x80115910
void efParticleHeadSetSkipAll(void)
{
    gEFParticleGeneratorsHead->flags = gEFParticleStructsHead->flags |= ~0xFFFF;
}

// 0x80115944
void efParticleHeadClearSkipID(u32 id)
{
    gEFParticleGeneratorsHead->flags = gEFParticleStructsHead->flags &= ~(0x10000 << id);
}

// 0x80115980
void efParticleHeadClearSkipAll(void)
{
    gEFParticleGeneratorsHead->flags = gEFParticleStructsHead->flags &= 0xFFFF;
}

// 0x801159B0
s32 efParticleGetBankID(uintptr_t scripts_lo)
{
    s32 i;

    for (i = 0; i < sEFParticleBanksNum; i++)
    {
        if (scripts_lo == sEFParticleScriptBanks[i])
        {
            return i;
        }
    }
    return -1;
}

// 0x801159F8
s32 efParticleGetLoadBankID(uintptr_t scripts_lo, uintptr_t scripts_hi, uintptr_t textures_lo, uintptr_t textures_hi)
{
    void *script_desc, *texture_desc;
    size_t script_size, texture_size;
    s32 bank_id;

    if (sEFParticleBanksNum > ARRAY_COUNT(sEFParticleScriptBanks))
    {
        while (TRUE)
        {
            syErrorPrintf("Particle Bank is over\n");
            scManagerRunPrintGObjStatus();
        }
    }
    bank_id = efParticleGetBankID(scripts_lo);

    if (bank_id != -1)
    {
        return bank_id;
    }
    script_size = scripts_hi - scripts_lo;
    texture_size = textures_hi - textures_lo;

    bank_id = sEFParticleBanksNum;

    script_desc = syTaskmanMalloc(script_size, 0x8);
    texture_desc = syTaskmanMalloc(texture_size, 0x8);

    syDmaReadRom(scripts_lo, script_desc, script_size);
    syDmaReadRom(textures_lo, texture_desc, texture_size);

    lbParticleSetupBankID(sEFParticleBanksNum++, script_desc, texture_desc);

    sEFParticleScriptBanks[bank_id] = scripts_lo;

    return bank_id;
}
