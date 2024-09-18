#include <ef/effect.h>
#include <ft/fighter.h>
#include <it/item.h>
#include <wp/weapon.h>
#include <cm/camera.h>
#include <sc/scene.h>
#include <ovl0/reloc_data_mgr.h>

extern void* lbParticleMakePosVel(s32, s32, f32, f32, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

// Reloc Data Manager File IDs

extern intptr_t D_NF_00000053;
extern intptr_t D_NF_00000054;
extern intptr_t D_NF_00000055;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801313B0
void *sEFManagerTexturesFile1;

// 0x801313B4
void *sEFManagerTexturesFile2;

// 0x801313B8
void *sEFManagerTexturesFile3;

// 0x801313BC
efStruct *sEFManagerStructsAllocFree;

// 0x801313C0
s32 sEFManagerStructsFreeNum;

// 0x801313C4
s32 gEFManagerParticleBankID;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012DE80
f32 dEFManagerDamageSpawnSparksAngles[/* */] = { 18.0F, 0.0F, -18.0F };

// 0x8012DE8C
f32 dEFManagerDamageSpawnMDustAngles[/* */] = { 18.0F, 0.0F, -18.0F };

// 0x8012DE98
u8 dEFManagerDamageNormalHeavyPrimColorR[/* */] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }; // Last 3 zeroes are padding?

// 0x8012DEA0
u8 dEFManagerDamageNormalHeavyPrimColorG[/* */] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };

// 0x8012DEA8
u8 dEFManagerDamageNormalHeavyPrimColorB[/* */] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };

// 0x8012DEB0
u8 dEFManagerDamageNormalHeavyEnvColorR[/* */] = { 0xFF, 0x00, 0x00, 0x78, 0xFF };

// 0x8012DEB8
u8 dEFManagerDamageNormalHeavyEnvColorG[/* */] = { 0x00, 0xFF, 0x00, 0x78, 0xFF };

// 0x8012DEC0
u8 dEFManagerDamageNormalHeavyEnvColorB[/* */] = { 0x00, 0x00, 0xFF, 0x78, 0xFF };

// 0x8012DEC8
u8 dEFManagerImpactWavePrimColorR[/* */] = { 0xFF, 0x00, 0x00, 0xFF, 0xFF };

// 0x8012DED0
u8 dEFManagerImpactWavePrimColorG[/* */] = { 0x00, 0xFF, 0x00, 0xFF, 0xFF };

// 0x8012DED8
u8 dEFManagerImpactWavePrimColorB[/* */] = { 0x00, 0x00, 0xFF, 0x00, 0xFF };

// 0x8012DEE0
u8 dEFManagerImpactWaveEnvColorR[/* */] = { 0x00, 0x00, 0x00, 0x00, 0x00 };

// 0x8012DEE8
u8 dEFManagerImpactWaveEnvColorG[/* */] = { 0x00, 0x00, 0x00, 0x00, 0x00 };

// 0x8012DEF0
u8 dEFManagerImpactWaveEnvColorB[/* */] = { 0x00, 0x00, 0x00, 0x00, 0x00 };

// 0x8012DEF8
u8 dEFManagerDeadExplodeEnvColorSiblingR[/* */] = { 0xFF, 0x00, 0xFF, 0x00 };

// 0x8012DEFC
u8 dEFManagerDeadExplodeEnvColorSiblingG[/* */] = { 0x62, 0x7E, 0xFF, 0xFF };

// 0x8012DF00
u8 dEFManagerDeadExplodeEnvColorSiblingB[/* */] = { 0x4B, 0xFF, 0x00, 0x00 };

// 0x8012DF04
u8 dEFManagerDeadExplodeEnvColorChildR[/* */] = { 0xA6, 0x1F, 0x3E, 0xFB };

// 0x8012DF08
u8 dEFManagerDeadExplodeEnvColorChildG[/* */] = { 0x62, 0xFF, 0x6D, 0x66 };

// 0x8012DF0C
u8 dEFManagerDeadExplodeEnvColorChildB[/* */] = { 0x21, 0xA1, 0xFF, 0xC7 };

// 0x8012DF10
f32 dEFManagerDeadExplodeRotateD[/* */] = { 0.0F, 90.0F, 180.0F, 270.0F };

// 0x8012DF20
u8 dEFManagerDamageNormalLightIDs[/* */] = { 0x49, 0x4A, 0x4B, 0x4C };

// 0x8012DF24
efCreateDesc dEFManagerDamageSlashEffectDesc = 
{
    0x4 | 0x1,                              // Flags
    18,                                     // DL Link
    &sEFManagerTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        0x45,                               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerDamageSlashDObjSetup,               // DObj Setup attributes offset (?)
    &lEFManagerDamageSlashMObjSub,                 // MObjSub offset
    &lEFManagerDamageSlashAnimJoint,               // AnimJoint offset
    &lEFManagerDamageSlashMatAnimJoint             // MatAnimJoint offset
};

// 0x8012DF4C
efCreateDesc dEFManagerShockSmallEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    18,                                     // DL Link
    &sEFManagerTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        0x45,                               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerVelAddDestroyAnimEnd,           // Proc Update
    lbCommonDObjScaleXProcDraw,                     // Proc Render

    &lEFManagerShockSmallDObjSetup,                // DObj Setup attributes offset (?)
    &lEFManagerShockSmallMObjSub,                  // MObjSub offset
    0x0,                                    // AnimJoint offset
    &lEFManagerShockSmallMatAnimJoint              // MatAnimJoint offset
};

// 0x8012DF74
efCreateDesc dEFManagerDamageFlyOrbsEffectDesc =
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &sEFManagerTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        nOMTransformSca,                // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformSca,                // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDamageFlyOrbsProcUpdate,    // Proc Update
    lbCommonDObjScaleXProcDraw,                     // Proc Render

    &lEFManagerDamageFlyOrbsDObjSetup,             // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFManagerDamageFlyOrbsAnimJoint,             // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012DF9C
efCreateDesc dEFManagerDamageSpawnOrbsEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    0,                                      // DL Link
    &sEFManagerTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        nOMTransformNull,               // Main matrix transformations   
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDamageSpawnOrbsProcUpdate,  // Proc Update
    NULL,                                   // Proc Render

    0x0,                                    // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012DFC4
efCreateDesc dEFManagerImpactWaveEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    10,                                     // DL Link
    &sEFManagerTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations   
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerImpactWaveProcUpdate,       // Proc Update
    efManagerImpactWaveProcDraw,       // Proc Render

    &lEFManagerImpactWaveDObjSetup,                // DObj Setup attributes offset (?)
    &lEFManagerImpactWaveMObjSub,                  // MObjSub offset
    &lEFManagerImpactWaveAnimJoint,                // AnimJoint offset
    &lEFManagerImpactWaveMatAnimJoint              // MatAnimJoint offset
};

// 0x8012DFEC
efCreateDesc dEFStarRodSparkEffectDesc =
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &sEFManagerTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        0x45,                               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x45,                               // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerStarRodSparkProcUpdate,     // Proc Update
    lbCommonDObjScaleXProcDraw,                     // Proc Render

    &lEFManagerCommonSparkDObjSetup,              // DObj Setup attributes offset (?)
    &lEFManagerCommonSparkMObjSub,                // MObjSub offset
    &lEFManagerCommonSparkAnimJoint,              // AnimJoint offset
    &lEFManagerCommonSparkMatAnimJoint            // MatAnimJoint offset
};

// 0x8012E014
efCreateDesc dEFManagerDamageFlySparksEffectDesc =
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &sEFManagerTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        nOMTransformRotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x45,                               // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDamageFlySparksProcUpdate,  // Proc Update
    lbCommonDObjScaleXProcDraw,                     // Proc Render

    &lEFManagerCommonSparkDObjSetup,              // DObj Setup attributes offset (?)
    &lEFManagerCommonSparkMObjSub,                // MObjSub offset
    &lEFManagerCommonSparkAnimJoint,              // AnimJoint offset
    &lEFManagerCommonSparkMatAnimJoint            // MatAnimJoint offset
};

// 0x8012E03C
efCreateDesc dEFManagerDamageSpawnSparksEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    0,                                      // DL Link
    &sEFManagerTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        nOMTransformNull,               // Main matrix transformations   
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDamageSpawnSparksProcUpdate,// Proc Update
    NULL,                                   // Proc Render

    0x0,                                    // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E064
efCreateDesc dEFManagerDamageFlyMDustEffectDesc = 
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &sEFManagerTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        nOMTransformRotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x44,                               // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDamageFlySparksProcUpdate,  // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerDamageFlyMDustDObjSetup,            // DObj Setup attributes offset (?)
    &lEFManagerDamageFlyMDustMObjSub,              // MObjSub offset
    &lEFManagerDamageFlyMDustAnimJoint,            // AnimJoint offset
    &lEFManagerDamageFlyMDustMatAnimJoint          // MatAnimJoint offset
};

// 0x8012E08C
efCreateDesc dEFManagerDamageSpawnMDustEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    0,                                      // DL Link
    &sEFManagerTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        nOMTransformNull,               // Main matrix transformations   
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDamageSpawnMDustProcUpdate, // Proc Update
    NULL,                                   // Proc Render

    0x0,                                    // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E0B4
efCreateDesc dEFFireSparkEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &sEFManagerTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations   
        0x49,                               // Secondary matrix transformations
        0x12                                // ???
    },

    // DObj transformation struct 2
    {
        0x45,                               // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    lbCommonDObjScaleXProcDraw,                     // Proc Render

    &lEFManagerFireSparkDObjSetup,                 // DObj Setup attributes offset (?)
    &lEFManagerFireSparkMObjSub,                   // MObjSub offset
    &lEFManagerFireSparkAnimJoint,                 // AnimJoint offset
    &lEFManagerFireSparkMatAnimJoint               // MatAnimJoint offset
};

// 0x8012E0DC
intptr_t dEFManagerFoxReflectorAnimJointOffsets[/* */] = 
{ 
    &lEFManagerFoxReflectorAnimJointStart, 
    &lEFManagerFoxReflectorAnimJointLoop, 
    &lEFManagerFoxReflectorAnimJointHit, 
    &lEFManagerFoxReflectorAnimJointEnd 
};

// 0x8012E0EC
efCreateDesc dEFManagerFoxReflectorEffectDesc = 
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataFoxSpecial2,                    // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations   
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTra,                // Main matrix transformations  
        0x2C,                               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerFoxReflectorProcUpdate,        // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerFoxReflectorDObjSetup,                 // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFManagerFoxReflectorAnimJointStart,            // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E114
syColorRGBPair dEFManagerShieldColors[/* */] =
{
    { { 0xFF, 0xFF, 0xFF }, { 0xFF, 0x00, 0x00 } }, // Player 1
    { { 0xFF, 0xFF, 0xFF }, { 0x00, 0xFF, 0x00 } }, // Player 2
    { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0xFF } }, // Player 3
    { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0x00 } }, // Player 4 / CPU
    { { 0xFF, 0xFF, 0xFF }, { 0xC0, 0xC0, 0xC0 } }  // Shield Damage
};

// 0x8012E134
efCreateDesc dEFManagerShieldEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTManagerCommonFile,                         // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations   
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x2C,                               // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerShieldProcUpdate,                     // Proc Update
    efManagerShieldProcDraw,                     // Proc Render

    &lEFManagerShieldDObjSetup,                    // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E15C
efCreateDesc dEFManagerYoshiShieldEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    15,                                     // DL Link
    &gFTDataYoshiModel,                     // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations   
        0x2C,                               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerShieldProcUpdate,                     // Proc Update
    efManagerYoshiShieldProcDraw,                // Proc Render

    &lEFManagerYoshiShieldDObjSetup,               // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E184
efCreateDesc dEFCatchSwirlEffectDesc = 
{
    0x4 | 0x1,                              // Flags
    18,                                     // DL Link
    &sEFManagerTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerCatchSwirlDObjSetup,                // DObj Setup attributes offset (?)
    &lEFManagerCatchSwirlMObjSub,                  // MObjSub offset
    &lEFManagerCatchSwirlAnimJoint,                // AnimJoint offset
    &lEFManagerCatchSwirlMatAnimJoint              // MatAnimJoint offset
};

// 0x8012E1AC
efCreateDesc dEFReflectBreakEffectDesc =
{
    0x4 | 0x1,                              // Flags
    18,                                     // DL Link
    &sEFManagerTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        nOMTransformRotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerReflectBreakDObjSetup,              // DObj Setup attributes offset (?)
    &lEFManagerReflectBreakMObjSub,                // MObjSub offset
    &lEFManagerReflectBreakAnimJoint,              // AnimJoint offset
    &lEFManagerReflectBreakMatAnimJoint            // MatAnimJoint offset
};

// 0x8012E1D4
efCreateDesc dEFManagerPikachuUnkEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
    15,                                     // DL Link
    &gFTDataPikachuSpecial2,                // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        nOMTransformRotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_ovl2_801017E8,                     // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerPikachuUnkDObjSetup,                // DObj Setup attributes offset (?)
    &lEFManagerPikachuUnkMObjSub,                  // MObjSub offset
    &lEFManagerPikachuUnkAnimJoint,                // AnimJoint offset
    &lEFManagerPikachuUnkMatAnimJoint              // MatAnimJoint offset
};

// 0x8012E1FC
efCreateDesc dEFManagerPikachuThunderShockEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataPikachuSpecial2,                // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations   
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations  
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerPikachuThunderShockDObjSetup,              // DObj Setup attributes offset (?)
    &lEFManagerPikachuThunderShockMObjSub,                // MObjSub offset
    &lEFManagerPikachuThunderShock0AnimJoint,              // AnimJoint offset
    &lEFManagerPikachuThunderShock0MatAnimJoint            // MatAnimJoint offset
};

// 0x8012E224
efCreateDesc dEFManagerPikachuThunderTrailEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    15,                                     // DL Link
    &gFTDataPikachuModel,                   // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerPikachuThunderTrailProcUpdate,     // Proc Update
    efManagerPikachuThunderTrailProcDraw,     // Proc Render

    &lEFManagerPikachuThunderTrailDObjSetup,              // DObj Setup attributes offset (?)
    &lEFManagerPikachuThunderTrailMObjSub,                // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E24C
efCreateDesc dEFThunderJoltEffectDesc =
{
    0x4,                                    // Flags
    15,                                     // DL Link
    &gFTDataPikachuSpecial3,                // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerPikachuThunderJoltDObjSetup,               // DObj Setup attributes offset (?)
    &lEFManagerPikachuThunderJoltMObjSub,                 // MObjSub offset
    &lEFManagerPikachuThunderJoltAnimJoint,               // AnimJoint offset
    &lEFManagerPikachuThunderJoltMatAnimJoint             // MatAnimJoint offset
};

// 0x8012E274
efCreateDesc dEFVulcanJabEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
    15,                                     // DL Link
    &gFTDataKirbySpecial2,                  // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformRotRpyR,            // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerKirbyVulcanJabProcUpdate,        // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerKirbyVulcanJabDObjSetup,                 // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E29C
efCreateDesc dEFManagerSamusGrappleBeamEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataSamusSpecial2,                  // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x2E,                               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    gcPlayAnimAll,                          // Proc Update (WHAT IS THIS FUNCTION???)
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerSamusGrappleBeamDObjSetup,               // DObj Setup attributes offset (?)
    &lEFManagerSamusGrappleBeamMObjSub,                 // MObjSub offset
    &lEFManagerSamusGrappleBeamAnimJoint,               // AnimJoint offset
    &lEFManagerSamusGrappleBeamMatAnimJoint             // MatAnimJoint offset
};

// 0x8012E2C4
efCreateDesc dEFManagerCaptainFalconKickEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataCaptainSpecial2,                // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        nOMTransformRotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerNoEjectProcUpdate,                     // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerCaptainFalconKickDObjSetup,                // DObj Setup attributes offset (?)
    &lEFManagerCaptainFalconKickMObjSub,                  // MObjSub offset
    &lEFManagerCaptainFalconKickAnimJoint,                // AnimJoint offset
    &lEFManagerCaptainFalconKickMatAnimJoint              // MatAnimJoint offset
};

// 0x8012E2EC
efCreateDesc dEFManagerCaptainFalconPunchEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    15,                                     // DL Link
    &gFTDataCaptainSpecial3,                // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        nOMTransformRotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerNoEjectProcUpdate,                     // Proc Update
    lbCommonDObjScaleXProcDraw,                     // Proc Render

    &lEFManagerCaptainFalconPunchDObjSetup,               // DObj Setup attributes offset (?)
    &lEFManagerCaptainFalconPunchMObjSub,                 // MObjSub offset
    0x0,                                    // AnimJoint offset
    &lEFManagerCaptainFalconPunchMatAnimJoint             // MatAnimJoint offset
};

// 0x8012E314
efCreateDesc dEFManagerPurinSingEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataPurinSpecial2,                  // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTra,                // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,          // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerPurinSingDObjSetup,                 // DObj Setup attributes offset (?)
    &lEFManagerPurinSingMObjSub,                   // MObjSub offset
    &lEFManagerPurinSingAnimJoint,                 // AnimJoint offset
    &lEFManagerPurinSingMatAnimJoint               // MatAnimJoint offset
};

// 0x8012E33C
efCreateDesc dEFManagerDeadExplodeEffectDesc =
{
    EFFECT_FLAG_SPECIALLINK | 0x4,          // Flags
    18,                                     // DL Link
    &sEFManagerTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,          // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerDeadExplodeDefaultDObjSetup,        // DObj Setup attributes offset (?)
    &lEFManagerDeadExplodeDefaultMObjSub,          // MObjSub offset
    &lEFManagerDeadExplodeDefaultAnimJoint,        // AnimJoint offset
    &lEFManagerDeadExplodeDefaultMatAnimJoint      // MatAnimJoint offset
};

// 0x8012E364
u8 dEFManagerDeadExplodeGenID[/* */] = { 0x2D, 0x2C, 0x2B, 0x2A, 0x3F, 0x3E, 0x3D, 0x3C };

// 0x8012E36C
intptr_t dEFManagerDeadExplodeMatAnimJoints[/* */] =
{
    &lEFManagerDeadExplode1PMatAnimJoint,
    &lEFManagerDeadExplode2PMatAnimJoint,
    &lEFManagerDeadExplode3PMatAnimJoint,
    &lEFManagerDeadExplode4PMatAnimJoint
};

// 0x8012E37C
efCreateDesc dEFManagerKirbyCutterUpEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataKirbySpecial2,                  // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        nOMTransformRotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerNoEjectProcUpdate,                     // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerKirbyCutterUpDObjSetup,             // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFManagerKirbyCutterUpAnimJoint,             // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E3A4
efCreateDesc dEFManagerKirbyCutterDownEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataKirbySpecial2,                  // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        nOMTransformRotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerNoEjectProcUpdate,                     // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerKirbyCutterDownDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFManagerKirbyCutterDownAnimJoint,           // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E3CC
efCreateDesc dEFManagerKirbyCutterDrawEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataKirbySpecial2,                  // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerNoEjectProcUpdate,                     // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerKirbyCutterDrawDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E3F4
efCreateDesc dEFManagerKirbyCutterTrailEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataKirbySpecial2,                  // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        nOMTransformRotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerNoEjectProcUpdate,                     // Proc Update
    gcDrawDObjTreeDLLinksForGObj,                // Proc Render

    &lEFManagerKirbyCutterTrailDObjSetup,          // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFManagerKirbyCutterTrailAnimJoint,          // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E41C
efCreateDesc dEFManagerNessPsychicMagnetEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTNessFileSpecial2,                   // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTra,                // Main matrix transformations
        0x2E,                               // Secondary matrix transformations
        0x00                                // ???
    },

    gcPlayAnimAll,                          // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerNessPsychicMagnetDObjSetup,             // DObj Setup attributes offset (?)
    &lEFManagerNessPsychicMagnetMObjSub,               // MObjSub offset
    &lEFManagerNessPsychicMagnetAnimJoint,             // AnimJoint offset
    &lEFManagerNessPsychicMagnetMatAnimJoint           // MatAnimJoint offset
};

// 0x8012E444
efCreateDesc dEFManagerNessPKThunderTrailEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    15,                                     // DL Link
    &gFTNessFileModel,                      // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerNessPKThunderTrailProcUpdate,   // Proc Update
    efManagerNessPKThunderTrailProcDraw,   // Proc Render

    &lEFManagerNessPKThunderTrailDObjSetup,            // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E46C
efCreateDesc dEFManagerNessPKReflectTrailEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    18,                                     // DL Link
    &gFTNessFileModel,                      // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerNessPKReflectTrailProcUpdate,   // Proc Update
    efManagerNessPKThunderTrailProcDraw,   // Proc Render

    &lEFManagerNessPKThunderTrailDObjSetup,            // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E494
efCreateDesc dEFManagerNessPKThunderWaveEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTNessFileModel,                      // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        nOMTransformRotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTra,                // Main matrix transformations
        0x2E,                               // Secondary matrix transformations
        0x00                                // ???
    },

    gcPlayAnimAll,                          // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerNessPKThunderWaveDObjSetup,             // DObj Setup attributes offset (?)
    &lEFManagerNessPKThunderWaveMObjSub,               // MObjSub offset
    &lEFManagerNessPKThunderWaveAnimJoint,             // AnimJoint offset
    &lEFManagerNessPKThunderWaveMatAnimJoint           // MatAnimJoint offset
};

// 0x8012E4BC
efCreateDesc dEFManagerNessPKFlashEffectDesc =
{
    0x4,                                    // Flags
    18,                                     // DL Link
    &sEFManagerTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerNessPKFlashDObjSetup,                   // DObj Setup attributes offset (?)
    &lEFManagerNessPKFlashMObjSub,                     // MObjSub offset
    &lEFManagerNessPKFlashAnimJoint,                   // AnimJoint offset
    &lEFManagerNessPKFlashMatAnimJoint                 // MatAnimJoint offset
};

// 0x8012E4E4
efCreateDesc dEFManagerLinkEntryWaveEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &gFTDataLinkSpecial2,                   // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    gcPlayAnimAll,                          // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerLinkEntryWaveDObjSetup,             // DObj Setup attributes offset (?)
    &lEFManagerLinkEntryWaveMObjSub,               // MObjSub offset
    &lEFManagerLinkEntryWaveAnimJoint,             // AnimJoint offset
    &lEFManagerLinkEntryWaveMatAnimJoint           // MatAnimJoint offset
};

// 0x8012E50C
efCreateDesc dEFManagerLinkEntryBeamEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &gFTDataLinkSpecial2,                   // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    gcPlayAnimAll,                          // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerLinkEntryBeamDObjSetup,             // DObj Setup attributes offset (?)
    &lEFManagerLinkEntryBeamMObjSub,               // MObjSub offset
    &lEFManagerLinkEntryBeamAnimJoint,             // AnimJoint offset
    &lEFManagerLinkEntryBeamMatAnimJoint           // MatAnimJoint offset
};

// 0x8012E534
efCreateDesc dEFManagerKirbyEntryStarEffectDesc =
{
    0x4 | 0x1,                              // Flags
    10,                                     // DL Link
    &gFTDataKirbySpecial2,                  // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTra,                // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerKirbyEntryStarDObjSetup,            // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFManagerKirbyEntryStarLAnimJoint,           // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E55C
efCreateDesc dEFManagerMBallRaysEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &sEFManagerTexturesFile3,                      // Texture file

    // DObj transformation struct 1
    {
        0x44,                               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerMBallRaysDObjSetup,                 // DObj Setup attributes offset (?)
    &lEFManagerMBallRaysMObjSub,                   // MObjSub offset
    &lEFManagerMBallRaysAnimJoint,                 // AnimJoint offset
    &lEFManagerMBallRaysMatAnimJoint               // MatAnimJoint offset
};

// 0x8012E584
efCreateDesc dEFManagerMBallThrownEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    20,                                     // DL Link
    &gITManagerFileData,                           // Texture file

    // DObj transformation struct 1
    {
        0x44,                               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerMBallThrownProcUpdate,                // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerMBallThrownDObjSetup,               // DObj Setup attributes offset (?)
    &lEFManagerMBallThrownMObjSub,                 // MObjSub offset
    &lEFManagerMBallThrownLAnimJoint,              // AnimJoint offset
    &lEFManagerMBallThrownLMatAnimJoint            // MatAnimJoint offset
};

// 0x8012E5AC
efCreateDesc dEFManagerYoshiEntryEggEffectDesc =
{
    0x1,                                    // Flags
    10,                                     // DL Link
    &gFTDataYoshiSpecial2,                  // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    lbCommonDObjScaleXProcDraw,                     // Proc Render

    &lEFManagerYoshiEntryEggDObjSetup,             // DObj Setup attributes offset (?)
    &lEFManagerYoshiEntryEggMObjSub,               // MObjSub offset
    &lEFManagerYoshiEntryEggAnimJoint,             // AnimJoint offset
    &lEFManagerYoshiEntryEggMatAnimJoint           // MatAnimJoint offset
};

// 0x8012E5D4
intptr_t dEFManagerYoshiEggLayAnimJoints[/* */] = { &lEFManagerYoshiEggLayWaitAnimJoint, &lEFManagerYoshiEggLayBreakAnimJoint };

// 0x8012E5DC
efCreateDesc dEFManagerYoshiEggLayEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
    10,                                     // DL Link
    &gFTDataYoshiSpecial3,                  // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        nOMTransformSca,                // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerYoshiEggLayProcUpdate,                     // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerYoshiEggLayDObjSetup,               // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFManagerYoshiEggLayThrowAnimJoint,          // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E604
efCreateDesc dEFManagerYoshiEggEscapeEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    15,                                     // DL Link
    &gFTDataYoshiModel,                     // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        0x4A,                               // Secondary matrix transformations
        0x2E                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformNull,               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    NULL,                                   // Proc Update
    efManagerYoshiShieldProcDraw,                // Proc Render

    &lEFManagerYoshiShieldDObjSetup,               // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E62C
efCreateDesc dEFManagerLinkSpinAttackEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataLinkSpecial2,                   // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        nOMTransformRotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerLinkSpinAttackDObjSetup,                // DObj Setup attributes offset (?)
    &lEFManagerLinkSpinAttackMObjSub,                  // MObjSub offset
    &lEFManagerLinkSpinAttackAnimJoint,                // AnimJoint offset
    &lEFManagerLinkSpinAttackMatAnimJoint              // MatAnimJoint offset
};

// 0x8012E654
efCreateDesc dEFManagerDonkeyEntryTaruEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &gFTDataDonkeySpecial2,                 // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerDonkeyEntryTaruDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFManagerDonkeyEntryTaruAnimJoint,           // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E67C
efCreateDesc dEFManagerSamusEntryPointEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &gFTDataSamusSpecial2,                  // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerSamusEntryPointDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFManagerSamusEntryPointAnimJoint,           // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E6A4
efCreateDesc dEFManagerCaptainEntryCarEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    10,                                     // DL Link
    &gFTDataCaptainSpecial2,                // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerCaptainEntryCarProcUpdate,            // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerCaptainEntryCarDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E6CC
efCreateDesc dEFManagerMarioEntryDokanEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &gFTMarioFileSpecial2,                  // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeForGObj,                // Proc Render

    &lEFManagerMarioEntryDokanDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFManagerMarioEntryDokanAnimJoint,           // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E6F4
efCreateDesc dEFManagerFoxEntryArwingEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
    10,                                     // DL Link
    &gFTDataFoxSpecial3,                    // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTraRotRpyR,         // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerFoxEntryArwingProcUpdate,             // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerFoxEntryArwingDObjSetup,            // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E71C
u8 dEFManagerMusicNoteGenIDs[/* */] = { 0x40, 0x41, 0x42 };

// 0x8012E720
efCreateDesc dEFCaptureKirbyStarEffectDesc =
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &gITManagerFileData,                           // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTra,                // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x50,                               // Main matrix transformations
        0x2E,                               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerCaptureKirbyStarProcUpdate,    // Proc Update
    lbCommonDObjScaleXProcDraw,                     // Proc Render

    &lEFManagerKirbyStarDObjSetup,                 // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E748
efCreateDesc dEFManagerLoseKirbyStarEffectDesc =
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &gITManagerFileData,                           // Texture file

    // DObj transformation struct 1
    {
        nOMTransformTra,                // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTra,                // Main matrix transformations
        0x2E,                               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerLoseKirbyStarProcUpdate,       // Proc Update
    lbCommonDObjScaleXProcDraw,                     // Proc Render

    &lEFManagerKirbyStarDObjSetup,                 // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E770
efCreateDesc dEFManagerRebirthHaloEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    10,                                     // DL Link
    &sEFManagerTexturesFile3,                      // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        0x00,                               // Secondary matrix transformations
        0x00                                // ???
    },

    gcPlayAnimAll,                          // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerRebirthHaloDObjSetup,               // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFManagerRebirthHaloAnimJoint,               // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E798
efCreateDesc dEFManagerItemGetSwirlEffectDesc =
{
    0x4 | 0x1,                              // Flags
    18,                                     // DL Link
    &sEFManagerTexturesFile3,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        0x00,                               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerHaveStructProcUpdate,     // Proc Update
    gcDrawDObjTreeDLLinksForGObj,         // Proc Render

    &lEFManagerItemGetSwirlDObjSetup,              // DObj Setup attributes offset (?)
    &lEFManagerItemGetSwirlMObjSub,                // MObjSub offset
    &lEFManagerItemGetSwirlAnimJoint,              // AnimJoint offset
    &lEFManagerItemGetSwirlMatAnimJoint            // MatAnimJoint offset
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

/* 0x800FD300 - OLD NOTE: To match this, rdManagerGetFileWithExternHeap and rdManagerGetFileSize must take intptr_t or other int type as first argument
 *              NEW NOTE: Not entirely correct, their types do need to be identical however
 */
void efManagerInitEffects(void)
{
    efStruct *ep;
    s32 i;
    s32 unused;

    sEFManagerStructsAllocFree = ep = gsMemoryAlloc(sizeof(efStruct) * EFFECT_ALLOC_NUM, 0x8);
    sEFManagerStructsFreeNum = EFFECT_ALLOC_NUM;

    for (i = 0; i < (EFFECT_ALLOC_NUM - 1); i++)
    {
        ep[i].alloc_next = &ep[i + 1];
    }
    if (ep != NULL)
    {
        ep[i].alloc_next = NULL;
    }
    efDisplayMakeBlendCLD();
    efDisplayMakeXLU();

    sEFManagerTexturesFile1 = rdManagerGetFileWithExternHeap(&D_NF_00000053, gsMemoryAlloc(rdManagerGetFileSize(&D_NF_00000053), 0x10));
    sEFManagerTexturesFile2 = rdManagerGetFileWithExternHeap(&D_NF_00000054, gsMemoryAlloc(rdManagerGetFileSize(&D_NF_00000054), 0x10));
    sEFManagerTexturesFile3 = rdManagerGetFileWithExternHeap(&D_NF_00000055, gsMemoryAlloc(rdManagerGetFileSize(&D_NF_00000055), 0x10));

    efDisplayInitAll();
}

// 0x800FD43C
efStruct* efManagerGetNextStructAlloc(sb32 is_force_return)
{
    efStruct *ep;

    if ((is_force_return == FALSE) && (sEFManagerStructsFreeNum < 5))
    {
        return NULL;
    }
    ep = sEFManagerStructsAllocFree;

    if (ep == NULL)
    {
        return NULL;
    }
    sEFManagerStructsAllocFree = ep->alloc_next;

    ep->fighter_gobj = NULL;
    ep->tfrm = NULL;
    ep->is_pause_effect = FALSE;

    sEFManagerStructsFreeNum--;

    return ep;
}

// 0x800FD4B8
efStruct* efManagerGetEffectNoForce(void)
{
    return efManagerGetNextStructAlloc(FALSE);
}

// 0x800FD4D8
efStruct* efManagerGetEffectForce(void)
{
    return efManagerGetNextStructAlloc(TRUE);
}

// 0x800FD4F8
void efManagerSetPrevStructAlloc(efStruct *ep)
{
    ep->alloc_next = sEFManagerStructsAllocFree;

    sEFManagerStructsAllocFree = ep;

    sEFManagerStructsFreeNum++;
}

// 0x800FD524
void efManagerNoStructProcUpdate(GObj *effect_gobj)
{
    gcPlayAnimAll(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        gcEjectGObj(effect_gobj);
    }
}

// 0x800FD568
void efManagerHaveStructProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (!(ep->is_pause_effect))
    {
        gcPlayAnimAll(effect_gobj);

        if (effect_gobj->anim_frame <= 0.0F)
        {
            efManagerSetPrevStructAlloc(efGetStruct(effect_gobj));

            gcEjectGObj(effect_gobj);
        }
    }
}

// New file? Unused
void func_ovl2_800FD5D0(void)
{
    return;
}

// 0x800FD5D8
void efManagerNoEjectProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (!(ep->is_pause_effect))
    {
        gcPlayAnimAll(effect_gobj);
    }
}

// 0x800FD60C
void efManagerSortZNeg(DObj *dobj)
{
    GObj *parent_gobj;

    if (dobj->translate.vec.f.z < -1000.0F)
    {
        parent_gobj = dobj->parent_gobj;

        if (parent_gobj->dl_link_id != 2)
        {
            gcMoveGObjDL(parent_gobj, 2, 2);
        }
    }
    else
    {
        parent_gobj = dobj->parent_gobj;

        if (parent_gobj->dl_link_id != 20)
        {
            gcMoveGObjDL(parent_gobj, 20, 2);
        }
    }
}

// 0x800FD68C
void efManagerSortZPos(DObj *dobj)
{
    GObj *parent_gobj;

    if (dobj->translate.vec.f.z > 1000.0F)
    {
        parent_gobj = dobj->parent_gobj;

        if (parent_gobj->dl_link_id != 2)
        {
            gcMoveGObjDL(parent_gobj, 2, 2);
        }
    }
    else
    {
        parent_gobj = dobj->parent_gobj;

        if (parent_gobj->dl_link_id != 20)
        {
            gcMoveGObjDL(parent_gobj, 20, 2);
        }
    }
}

// Another unused func
void func_ovl2_800FD70C(void)
{
    return;
}

// 0x800FD714
void efManagerProcRun(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (ep != NULL)
    {
        if (ep->proc_update != NULL)
        {
            gcAddGObjProcess(effect_gobj, ep->proc_update, nOMObjProcessKindProc, 3);
        }
    }
    else gcAddGObjProcess(effect_gobj, efManagerNoStructProcUpdate, nOMObjProcessKindProc, 3);

    effect_gobj->proc_run = NULL;
}

// 0x800FD778
GObj* efManagerMakeEffect(efCreateDesc *effect_desc, sb32 is_force_return)
{
    GObj *effect_gobj;
    DObj *other_dobj;
    efStruct *ep;
    s32 unused;
    DObj *main_dobj;
    DObj *child_dobj;
    DObjTransformTypes *transform_types1;
    DObjTransformTypes *transform_types2;
    u8 effect_flags;
    uintptr_t addr;
    uintptr_t o_mobjsub;
    uintptr_t o_anim_joint;
    uintptr_t o_matanim_joint;

    effect_flags = effect_desc->flags;

    if (effect_flags & EFFECT_FLAG_USERDATA)
    {
        ep = efManagerGetNextStructAlloc(is_force_return);

        if (ep == NULL)
        {
            return NULL;
        }
        ep->proc_update = effect_desc->proc_update;
    }
    else ep = NULL;

    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, efManagerProcRun, (effect_flags & EFFECT_FLAG_SPECIALLINK) ? nOMObjCommonLinkIDSpecialEffect : nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        if (ep != NULL)
        {
            efManagerSetPrevStructAlloc(ep);
        }
        return NULL;
    }
    effect_gobj->user_data.p = ep;

    if (effect_desc->proc_draw == NULL)
    {
        return effect_gobj;
    }
    gcAddGObjDisplay(effect_gobj, effect_desc->proc_draw, effect_desc->dl_link, 2, -1);

    o_mobjsub = effect_desc->o_mobjsub;
    o_anim_joint = effect_desc->o_anim_joint;
    o_matanim_joint = effect_desc->o_matanim_joint;
    addr = (uintptr_t) *effect_desc->file_head;

    transform_types1 = &effect_desc->transform_types1;

    if (effect_flags & 0x1)
    {
        main_dobj = gcAddDObjForGObj(effect_gobj, NULL);

        lbCommonInitDObjTriTransform(main_dobj, transform_types1->tk1, transform_types1->tk2, transform_types1->tk3);

        transform_types2 = &effect_desc->transform_types2;

        if (effect_flags & 0x4)
        {
            lbCommonSetupTreeDObjs(main_dobj, (void*) (addr + effect_desc->o_dobjsetup), NULL, transform_types2->tk1, transform_types2->tk2, transform_types2->tk3);

            main_dobj = main_dobj->child;
        }
        else
        {
            main_dobj = gcAddChildForDObj(main_dobj, (void*) (addr + effect_desc->o_dobjsetup));

            lbCommonInitDObjTriTransform(main_dobj, transform_types2->tk1, transform_types2->tk2, transform_types2->tk3);
        }
        if (o_mobjsub != 0)
        {
            lbCommonAddMObjForTreeDObjs(main_dobj, (void*) (addr + o_mobjsub));
        }
        if ((o_anim_joint != 0) || (o_matanim_joint != 0))
        {
            lbCommonAddDObjAnimAll(main_dobj, (o_anim_joint != 0) ? (void*) (addr + o_anim_joint) : NULL, (o_matanim_joint != 0) ? (void*) (addr + o_matanim_joint) : NULL, 0.0F);
            gcPlayAnimAll(effect_gobj);
        }
    }
    else
    {
        transform_types1 = &effect_desc->transform_types1;

        if (effect_flags & 0x4)
        {
            gcSetupCustomDObjs(effect_gobj, (void*)(addr + effect_desc->o_dobjsetup), NULL, nOMTransformNull, nOMTransformNull, nOMTransformNull);

            other_dobj = DObjGetStruct(effect_gobj);

            gcAddDObjTriTransformKind(other_dobj, transform_types1->tk1, transform_types1->tk2, transform_types1->tk3);

            transform_types2 = &effect_desc->transform_types2;

            main_dobj = other_dobj->child;

            while (main_dobj != NULL)
            {
                gcAddDObjTriTransformKind(main_dobj, transform_types2->tk1, transform_types2->tk2, transform_types2->tk3);

                main_dobj = lbCommonGetTreeDObjNextFromRoot(main_dobj, other_dobj);
            }
            gcSetDObjTransformsForGObj(effect_gobj, (void*) (addr + effect_desc->o_dobjsetup));
        }
        else
        {
            transform_types1 = &effect_desc->transform_types1;

            lbCommonInitDObjTriTransform(gcAddDObjForGObj(effect_gobj, (void*) (addr + effect_desc->o_dobjsetup)), transform_types1->tk1, transform_types1->tk2, transform_types1->tk3);
        }
        if (o_mobjsub != 0)
        {
            gcAddMObjAll(effect_gobj, (MObjSub***) (addr + o_mobjsub));
        }
        if ((o_anim_joint != 0) || (o_matanim_joint != 0))
        {
            gcAddAnimAll(effect_gobj, (o_anim_joint != 0) ? (AObjEvent**) (addr + o_anim_joint) : NULL, (o_matanim_joint != 0) ? (AObjEvent***) (addr + o_matanim_joint) : NULL, 0.0F);
            gcPlayAnimAll(effect_gobj);
        }
    }
    return effect_gobj;
}

// 0x800FDAFC
GObj* efManagerMakeEffectNoForce(efCreateDesc *effect_desc)
{
    return efManagerMakeEffect(effect_desc, FALSE);
}

// 0x800FDB1C
GObj* efManagerMakeEffectForce(efCreateDesc *effect_desc)
{
    return efManagerMakeEffect(effect_desc, TRUE);
}

// 0x800FDB3C - Destroy effect GObj and particle too if applicable
efParticle* efManagerDestroyParticleGObj(efParticle *ptcl, GObj *effect_gobj)
{
    if (ptcl != NULL)
    {
        lbParticleEjectStruct(ptcl);
    }
    if (efGetStruct(effect_gobj) != NULL)
    {
        efStruct *ep = efGetStruct(effect_gobj);

        efManagerSetPrevStructAlloc(ep);
    }
    gcEjectGObj(effect_gobj);

    return NULL;
}

// 0x800FDB88
void efManagerDefaultProcDead(efTransform *tfrm)
{
    if (efGetStruct(tfrm->effect_gobj) != NULL)
    {
        efStruct *ep = efGetStruct(tfrm->effect_gobj);

        efManagerSetPrevStructAlloc(ep);
    }
    gcEjectGObj(tfrm->effect_gobj);
}

// 0x800FDBCC
void efManagerDefaultProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    ep->effect_vars.common.tfrm->translate.x += ep->effect_vars.common.vel.x;
    ep->effect_vars.common.tfrm->translate.y += ep->effect_vars.common.vel.y;
}

// 0x800FDBFC - Unused
void func_ovl2_800FDBFC(void)
{
    return;
}

// 0x800FDC04
efParticle* efManagerDamageNormalLightMakeEffect(Vec3f *pos, s32 player, s32 size, sb32 is_static)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, dEFManagerDamageNormalLightIDs[player]);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDefaultProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            gcAddGObjProcess(effect_gobj, efManagerDefaultProcUpdate, nOMObjProcessKindProc, 3);

            ep->effect_vars.common.tfrm = tfrm;

            tfrm->translate = *pos;

            vel = (is_static != FALSE) ? 0.0F : ((mtTrigGetRandomFloat() * 38.0F) + 12.0F);

            angle = mtTrigGetRandomFloat() * F_CLC_DTOR32(360.0F);

            ep->effect_vars.common.vel.x = __cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.13F) + 1.0F);

            tfrm->scale.x = tfrm->scale.y = tfrm->scale.z = scale;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FDE3C
void efManagerDamageNormalHeavyProcDead(efTransform *tfrm)
{
    efStruct *ep = efGetStruct(tfrm->effect_gobj);
    Vec3f pos = tfrm->translate;

    efManagerDamageNormalLightMakeEffect(&pos, ep->effect_vars.damage_normal_heavy.player, ep->effect_vars.damage_normal_heavy.size, FALSE);
    efManagerSetPrevStructAlloc(efGetStruct(tfrm->effect_gobj));
    gcEjectGObj(tfrm->effect_gobj);
}

// 0x800FDEAC
efParticle* efManagerDamageNormalHeavyMakeEffect(Vec3f *pos, s32 player, s32 size)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x64);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDamageNormalHeavyProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return FALSE;
            }
            ep->effect_vars.common.tfrm = tfrm; // WHAT (This overlaps with damage_normal_heavy.size and is eventually overwritten with the correct value)

            tfrm->translate = *pos;

            ep->effect_vars.damage_normal_heavy.pos = *pos;
            ep->effect_vars.damage_normal_heavy.player = player;
            ep->effect_vars.damage_normal_heavy.size = size;

            ptcl->primcolor.r = dEFManagerDamageNormalHeavyPrimColorR[player];
            ptcl->primcolor.g = dEFManagerDamageNormalHeavyPrimColorG[player];
            ptcl->primcolor.b = dEFManagerDamageNormalHeavyPrimColorB[player];
            ptcl->primcolor.a = 0xFF;

            ptcl->envcolor.r = dEFManagerDamageNormalHeavyEnvColorR[player];
            ptcl->envcolor.g = dEFManagerDamageNormalHeavyEnvColorG[player];
            ptcl->envcolor.b = dEFManagerDamageNormalHeavyEnvColorB[player];
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FE068
efParticle* efManagerImpactShockMakeEffect(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x25);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDefaultProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            gcAddGObjProcess(effect_gobj, efManagerDefaultProcUpdate, nOMObjProcessKindProc, 3);

            ep->effect_vars.common.tfrm = tfrm;

            tfrm->translate = *pos;

            vel = ((mtTrigGetRandomFloat() * 8.0F) + 2.0F);

            angle = mtTrigGetRandomFloat() * F_CLC_DTOR32(360.0F);

            ep->effect_vars.common.vel.x = __cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.15F) + 1.0F);

            tfrm->scale.x = tfrm->scale.y = tfrm->scale.z = scale;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FE260
void efManagerVelAddDestroyAnimEnd(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    gcPlayAnimAll(effect_gobj);

    if (dobj->mobj->anim_frame <= 0.0F)
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);
    }
    else
    {
        dobj->translate.vec.f.x += ep->effect_vars.common.vel.x;
        dobj->translate.vec.f.y += ep->effect_vars.common.vel.y;
    }
}

// 0x800FE2F4
efParticle* efManagerDamageFireMakeEffect(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x4D);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDefaultProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            gcAddGObjProcess(effect_gobj, efManagerDefaultProcUpdate, nOMObjProcessKindProc, 3);

            ep->effect_vars.common.tfrm = tfrm;

            tfrm->translate = *pos;

            vel = ((mtTrigGetRandomFloat() * 18.0F) + 12.0F);

            angle = mtTrigGetRandomFloat() * F_CLC_DTOR32(360.0F);

            ep->effect_vars.common.vel.x = __cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.15F) + 1.0F);

            tfrm->scale.x = tfrm->scale.y = tfrm->scale.z = scale;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FE4EC
efParticle* efManagerDamageElectricMakeEffect(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x53);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDefaultProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            gcAddGObjProcess(effect_gobj, efManagerDefaultProcUpdate, nOMObjProcessKindProc, 3);

            ep->effect_vars.common.tfrm = tfrm;

            tfrm->translate = *pos;

            vel = (mtTrigGetRandomFloat() * 7.0F) + 3.0F;

            angle = mtTrigGetRandomFloat() * F_CLC_DTOR32(360.0F);

            ep->effect_vars.common.vel.x = __cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 5) ? (((5 - size) * -0.08F) + 1.0F) : (((size - 5) * 0.15F) + 1.0F);

            tfrm->scale.x = tfrm->scale.y = tfrm->scale.z = scale;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FE6E4
GObj* efManagerDamageSlashMakeEffect(Vec3f *pos, s32 size, f32 rotate)
{
    GObj *effect_gobj;
    DObj *dobj;
    f32 scale;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerDamageSlashEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    dobj->rotate.vec.f.z = rotate;

    scale = (size < 5) ? (((5 - size) * -0.08F) + 1.0F) : (((size - 5) * 0.18F) + 1.0F);

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = scale;

    return effect_gobj;
}

// 0x800FE9B4
efParticle* efManagerFlameLRMakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x12);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDefaultProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            gcAddGObjProcess(effect_gobj, efManagerDefaultProcUpdate, nOMObjProcessKindProc, 3);

            ep->effect_vars.common.tfrm = tfrm;

            tfrm->translate = *pos;

            tfrm->translate.x += ((mtTrigGetRandomFloat() * EFPART_FLAMELR_OFF_X_BASE) + EFPART_FLAMELR_OFF_X_ADD);
            tfrm->translate.y += ((mtTrigGetRandomFloat() * EFPART_FLAMELR_OFF_Y_BASE) + EFPART_FLAMELR_OFF_Y_ADD);

            angle = mtTrigGetRandomFloat() * F_CLC_DTOR32(90.0F);

            ep->effect_vars.common.vel.x = __cosf(angle) * EFPART_FLAMELR_VEL_BASE * -lr;
            ep->effect_vars.common.vel.y = __sinf(angle) * EFPART_FLAMELR_VEL_BASE;

            tfrm->scale.x = tfrm->scale.y = tfrm->scale.z = (mtTrigGetRandomFloat() * 1) + 1.0F;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FE9B4
efParticle* efManagerFlameRandgcMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x55);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDefaultProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            gcAddGObjProcess(effect_gobj, efManagerDefaultProcUpdate, nOMObjProcessKindProc, 3);

            ep->effect_vars.common.tfrm = tfrm;

            tfrm->translate = *pos;

            angle = (mtTrigGetRandomFloat() * EFPART_FLAMERANDOM_ANGLE_BASE) + EFPART_FLAMERANDOM_ANGLE_ADD;

            ep->effect_vars.common.vel.x = __cosf(angle) * EFPART_FLAMERANDOM_VEL_BASE;
            ep->effect_vars.common.vel.y = __sinf(angle) * EFPART_FLAMERANDOM_VEL_BASE;

            tfrm->scale.x = tfrm->scale.y = tfrm->scale.z = (mtTrigGetRandomFloat() * 1) + 1.0F;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FEB58
efParticle* efManagerFlameStaticMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x55);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDefaultProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            gcAddGObjProcess(effect_gobj, efManagerDefaultProcUpdate, nOMObjProcessKindProc, 3);

            ep->effect_vars.common.tfrm = tfrm;

            tfrm->translate = *pos;

            ep->effect_vars.common.vel.x = 0.0F;
            ep->effect_vars.common.vel.y = 0.0F;

            tfrm->scale.x = tfrm->scale.y = tfrm->scale.z = (mtTrigGetRandomFloat() * 1) + 1.0F;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FECBC - Called only by Venusaur and Link's Boomerang?
efParticle* efManagerDustCollideMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x55);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDefaultProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            gcAddGObjProcess(effect_gobj, efManagerDefaultProcUpdate, nOMObjProcessKindProc, 3);

            ep->effect_vars.common.tfrm = tfrm;

            tfrm->translate = *pos;

            tfrm->translate.x += ((mtTrigGetRandomFloat() * EFPART_DUSTCOLL_OFF_BASE) + EFPART_DUSTCOLL_OFF_ADD);
            tfrm->translate.y += ((mtTrigGetRandomFloat() * EFPART_DUSTCOLL_OFF_BASE) + EFPART_DUSTCOLL_OFF_ADD);

            angle = (mtTrigGetRandomFloat() * EFPART_DUSTCOLL_ANGLE_BASE) + EFPART_DUSTCOLL_ANGLE_ADD; // F_CLC_DTOR32(90.0F), QUART_PI32

            ep->effect_vars.common.vel.x = __cosf(angle) * EFPART_DUSTCOLL_VEL_BASE;
            ep->effect_vars.common.vel.y = __sinf(angle) * EFPART_DUSTCOLL_VEL_BASE;

            tfrm->scale.x = tfrm->scale.y = tfrm->scale.z = (mtTrigGetRandomFloat() * 1) + 1.0F;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FEEB0
GObj* efManagerShockSmallMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;
    efStruct *ep;
    f32 scale;
    f32 angle;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerShockSmallEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);
    ep = efGetStruct(effect_gobj);

    pos->x += (mtTrigGetRandomFloat() * EFPART_SHOCKSMALL_OFF_BASE) + EFPART_SHOCKSMALL_OFF_ADD;
    pos->y += (mtTrigGetRandomFloat() * EFPART_SHOCKSMALL_OFF_BASE) + EFPART_SHOCKSMALL_OFF_ADD;

    dobj->translate.vec.f = *pos;

    /*
        The following float random and multiplication, cos and sin subroutine calls are nothing but a waste of CPU cycles.
        Guarded by the preprocessor flag DAIRANTOU_OPT0, a codebase optimization level that ignores redundant lines of code.
    */

#if !defined (DAIRANTOU_OPT0)
    angle = mtTrigGetRandomFloat() * F_CLC_DTOR32(360.0F); // F_CLC_DTOR32(360.0F)
#endif

#if !defined (DAIRANTOU_OPT0)
    __cosf(angle);
#endif

    ep->effect_vars.common.vel.x = 0.0F;

#if !defined (DAIRANTOU_OPT0)
    __sinf(angle);
#endif

    ep->effect_vars.common.vel.y = 0.0F;

    scale = (mtTrigGetRandomFloat() * EFPART_SHOCKSMALL_SCALE_BASE) + EFPART_SHOCKSMALL_SCALE_ADD;

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = scale;

    dobj->rotate.vec.f.z = mtTrigGetRandomFloat() * F_CLC_DTOR32(360.0F); // F_CLC_DTOR32(360.0F)

    return effect_gobj;
}

// 0x800FEFE0
void efManagerDustLightProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    ep->effect_vars.dust_light.tfrm->translate.x += ep->effect_vars.dust_light.vel1.x;
    ep->effect_vars.dust_light.tfrm->translate.y += ep->effect_vars.dust_light.vel1.y;

    if (ep->effect_vars.dust_light.lifetime != 0)
    {
        ep->effect_vars.dust_light.lifetime--;

        ep->effect_vars.dust_light.vel1.x += ep->effect_vars.dust_light.vel2.x;
        ep->effect_vars.dust_light.vel1.y += ep->effect_vars.dust_light.vel2.y;
    }
}

// 0x800FF048
efParticle* efManagerDustLightMakeEffect(Vec3f *pos, sb32 is_invert_vel, f32 f_index)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = (f_index == 2.0F) ? lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x56) : lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x55);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDefaultProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            gcAddGObjProcess(effect_gobj, efManagerDustLightProcUpdate, nOMObjProcessKindProc, 3);

            ep->effect_vars.dust_light.tfrm = tfrm;

            tfrm->translate = *pos;

            tfrm->translate.y += EFPART_DUSTNORMAL_OFF_Y;

            tfrm->rotate.z = mtTrigGetRandomFloat() * F_CLC_DTOR32(360.0F); // F_CLC_DTOR32(360.0F)

            angle = (mtTrigGetRandomFloat() * EFPART_DUSTNORMAL_ANGLE_BASE) + EFPART_DUSTNORMAL_ANGLE_ADD;

            ep->effect_vars.dust_light.vel1.x = __cosf(angle) * EFPART_DUSTNORMAL_VEL_BASE;

            if (is_invert_vel == TRUE)
            {
                ep->effect_vars.dust_light.vel1.x = -ep->effect_vars.dust_light.vel1.x;
            }
            ep->effect_vars.dust_light.vel1.y = __sinf(angle) * EFPART_DUSTNORMAL_VEL_BASE;

            ep->effect_vars.dust_light.lifetime = EFPART_DUSTNORMAL_LIFETIME;

            ep->effect_vars.dust_light.vel2.x = -ep->effect_vars.dust_light.vel1.x * EFPART_DUSTNORMAL_SCATTER;
            ep->effect_vars.dust_light.vel2.y = -ep->effect_vars.dust_light.vel1.y * EFPART_DUSTNORMAL_SCATTER;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FF278
efParticle* efManagerDustHeavyMakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    effect_gobj->user_data.p = NULL;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x58);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;

            tfrm->translate = *pos;

            tfrm->translate.y += EFPART_DUSTHEAVY_OFF_Y;

            if (lr == nGMFacingL)
            {
                tfrm->rotate.y = F_CLC_DTOR32(180.0F); // PI32
            }
            tfrm->proc_dead = efManagerDefaultProcDead;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FF384
void efManagerDustHeavyDoubleProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    s32 unused;

    ep->effect_vars.dust_heavy.anim_frame++;

    if (ep->effect_vars.dust_heavy.anim_frame == 2)
    {
        Vec3f pos = ep->effect_vars.dust_heavy.tfrm->translate;

        pos.y -= 126.0F;

        efManagerDustHeavyMakeEffect(&pos, -ep->effect_vars.dust_heavy.lr);
    }
}

// 0x800FF3F4
efParticle* efManagerDustHeavyDoubleMakeEffect(Vec3f *pos, s32 lr, f32 f_index)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = (f_index == 1.7F) ? lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x59) : lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x58); // Why such a specific check when a bool could've worked?

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            gcAddGObjProcess(effect_gobj, efManagerDustHeavyDoubleProcUpdate, nOMObjProcessKindProc, 3);

            tfrm->effect_gobj = effect_gobj;

            ep->effect_vars.dust_heavy.tfrm = tfrm;

            tfrm->translate = *pos;

            tfrm->translate.y += EFPART_DUSTHEAVY_OFF_Y;

            ep->effect_vars.dust_heavy.pos = *pos;

            ep->effect_vars.dust_heavy.anim_frame = 0;

            ep->effect_vars.dust_heavy.lr = lr;

            if (lr == nGMFacingL)
            {
                tfrm->rotate.y = F_CLC_DTOR32(180.0F); // PI32
            }
            tfrm->proc_dead = efManagerDefaultProcDead;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FF590
efParticle* efManagerDustExpandLargeMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x57);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;

            tfrm->scale.x = EFPART_DUSTEXPANDLARGE_SCALE;
            tfrm->scale.y = EFPART_DUSTEXPANDLARGE_SCALE;
            tfrm->scale.z = EFPART_DUSTEXPANDLARGE_SCALE;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x800FF648
efParticle* efManagerDustExpandSmallMakeEffect(Vec3f *pos, f32 f_index)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = (f_index == 2.0F) ? lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x56) : lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x55);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDefaultProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            gcAddGObjProcess(effect_gobj, efManagerDefaultProcUpdate, nOMObjProcessKindProc, 3);

            ep->effect_vars.common.tfrm = tfrm;

            tfrm->translate = *pos;

            ep->effect_vars.common.vel.y = EFPART_DUSTEXPANDSMALL_VEL_Y;
            ep->effect_vars.common.vel.x = EFPART_DUSTEXPANDSMALL_VEL_X;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x800FF7D8
efParticle* efManagerDustDashMakeEffect(Vec3f *pos, s32 lr, f32 scale)
{
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x5A);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;

            tfrm->scale.x = scale;
            tfrm->scale.y = scale;
            tfrm->scale.z = scale;

            tfrm->translate.y += EFPART_DUSTDASH_OFF_Y;

            if (lr == nGMFacingL)
            {
                tfrm->rotate.y = F_CLC_DTOR32(180.0F); // PI32
            }
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x800FF8C0
void efManagerDamageFlyOrbsProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    gcPlayAnimAll(effect_gobj);

    ep->effect_vars.damage_fly_orbs.lifetime--;

    if (ep->effect_vars.damage_fly_orbs.lifetime < 0)
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);
    }
    else
    {
        dobj->translate.vec.f.x += ep->effect_vars.damage_fly_orbs.vel.x;
        dobj->translate.vec.f.y += ep->effect_vars.damage_fly_orbs.vel.y;

        ep->effect_vars.damage_fly_orbs.vel.y -= EFPART_DAMAGEFLYORBS_VEL_SUB;
    }
}

// 0x800FF95C
void efManagerDamageSpawnOrbsProcUpdate(GObj *this_gobj)
{
    GObj *new_gobj;
    DObj *dobj;
    efStruct *this_ep;
    efStruct *new_ep;
    f32 vel;
    f32 angle;

    this_ep = efGetStruct(this_gobj);

    if (!(this_ep->effect_vars.damage_spawn_orbs.lifetime % EFPART_DAMAGESPAWNORBS_LIFETIME_RANDOM_MOD))
    {
        new_gobj = efManagerMakeEffectNoForce(&dEFManagerDamageFlyOrbsEffectDesc);

        if (new_gobj != NULL)
        {
            dobj = DObjGetStruct(new_gobj);
            new_ep = efGetStruct(new_gobj);

            dobj->translate.vec.f = this_ep->effect_vars.damage_spawn_orbs.pos;

            dobj->scale.vec.f.x = dobj->scale.vec.f.y = (mtTrigGetRandomFloat() * EFPART_DAMAGESPAWNORBS_SCALE_BASE) + EFPART_DAMAGESPAWNORBS_SCALE_ADD;

            vel = (mtTrigGetRandomFloat() * EFPART_DAMAGESPAWNORBS_VEL_BASE) + EFPART_DAMAGESPAWNORBS_VEL_ADD;

            angle = (mtTrigGetRandomFloat() * EFPART_DAMAGESPAWNORBS_ANGLE_BASE) + EFPART_DAMAGESPAWNORBS_ANGLE_ADD1 + EFPART_DAMAGESPAWNORBS_ANGLE_ADD2;

            new_ep->effect_vars.damage_fly_orbs.vel.x = __cosf(angle) * vel;
            new_ep->effect_vars.damage_fly_orbs.vel.y = __sinf(angle) * vel;
            new_ep->effect_vars.damage_fly_orbs.lifetime = mtTrigGetRandomIntRange(EFPART_DAMAGESPAWNORBS_LIFETIME_RANDOM_MOD) + EFPART_DAMAGESPAWNORBS_LIFETIME_ADD;
        }
    }
    this_ep->effect_vars.damage_spawn_orbs.lifetime--;

    if (this_ep->effect_vars.damage_spawn_orbs.lifetime < 0)
    {
        efManagerSetPrevStructAlloc(this_ep);
        gcEjectGObj(this_gobj);
    }
}

// 0x800FFAB8
GObj* efManagerDamageSpawnOrbsMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efStruct *ep;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerDamageSpawnOrbsEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.damage_spawn_orbs.pos = *pos;

    ep->effect_vars.damage_spawn_orbs.lifetime = (mtTrigGetRandomIntRange(3) * 4) + 4;

    return effect_gobj;
}

// 0x800FFB38
GObj* efManagerDamageSpawnOrbsRandgcMakeEffect(Vec3f *pos)
{
    if (mtTrigGetRandomIntRange(4) != 0)
    {
        return NULL;
    }
    else return efManagerDamageSpawnOrbsMakeEffect(pos);
}

// 0x800FFB74
void efManagerImpactWaveProcDraw(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    s32 index = ep->effect_vars.impact_wave.index;

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, dEFManagerImpactWavePrimColorR[index], dEFManagerImpactWavePrimColorG[index], dEFManagerImpactWavePrimColorB[index], (s32)ep->effect_vars.impact_wave.alpha);

    // The following EnvColor RGB key arrays are all zeroes, so using them (and even having them occupy space in the .data section) is completely unnecessary.

#if defined (DAIRANTOU_OPT0)
    gDPSetEnvColor(gDisplayListHead[0]++, 0x00, 0x00, 0x00, 0xFF);
#else
    gDPSetEnvColor(gDisplayListHead[0]++, dEFManagerImpactWaveEnvColorR[index], dEFManagerImpactWaveEnvColorG[index], dEFManagerImpactWaveEnvColorB[index], 0xFF);
#endif

    gcDrawDObjDLHead0(effect_gobj);
}

// 0x800FFCA4
void efManagerImpactWaveProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    gcPlayAnimAll(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManagerSetPrevStructAlloc(efGetStruct(effect_gobj));
        gcEjectGObj(effect_gobj);
    }
    else
    {
        ep->effect_vars.impact_wave.alpha -= ep->effect_vars.impact_wave.decay;

        if (ep->effect_vars.impact_wave.alpha > 0xFF)
        {
            ep->effect_vars.impact_wave.alpha = 0xFF;
        }
        else if (ep->effect_vars.impact_wave.alpha < 0x00)
        {
            ep->effect_vars.impact_wave.alpha = 0x00;
        }
    }
}

// 0x800FFD58
GObj* efManagerImpactWaveMakeEffect(Vec3f *pos, s32 index, f32 rotate)
{
    GObj *effect_gobj = efManagerMakeEffectNoForce(&dEFManagerImpactWaveEffectDesc);
    DObj *dobj;
    efStruct *ep;

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);
    ep = efGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    dobj->rotate.vec.f.z = rotate;

    ep->effect_vars.impact_wave.index = index;
    ep->effect_vars.impact_wave.alpha = 255.0F;
    ep->effect_vars.impact_wave.decay = 127.0F / 11.0F;

    return effect_gobj;
}

// 0x800FFDE8
GObj* efManagerImpactAirWaveMakeEffect(Vec3f *pos, s32 index)
{
    return efManagerImpactWaveMakeEffect(pos, index, 0.0F);
}

// 0x800FFE08
void efManagerStarRodSparkProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    gcPlayAnimAll(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);

        return;
    }
    else
    {
        if (ep->effect_vars.star_rod_spark.add_timer != 0)
        {
            ep->effect_vars.star_rod_spark.add_timer--;

            ep->effect_vars.star_rod_spark.vel.x += ep->effect_vars.star_rod_spark.add.x;
        }
        DObjGetStruct(effect_gobj)->translate.vec.f.x += ep->effect_vars.star_rod_spark.vel.x;
    }
}

// 0x800FFEA4
GObj* efManagerStarRodSparkMakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    DObj *dobj;
    efStruct *ep;

    effect_gobj = efManagerMakeEffectNoForce(&dEFStarRodSparkEffectDesc);

    if (effect_gobj != NULL)
    {
        dobj = DObjGetStruct(effect_gobj);
        ep = efGetStruct(effect_gobj);

        dobj->translate.vec.f = *pos;

        dobj->rotate.vec.f.z = mtTrigGetRandomFloat() * F_CLC_DTOR32(360.0F); // F_CLC_DTOR32(360.0F)

        dobj->scale.vec.f.x = EFPART_STARRODSPARK_SCALE;
        dobj->scale.vec.f.y = EFPART_STARRODSPARK_SCALE;

        ep->effect_vars.star_rod_spark.vel.x = lr * EFPART_STARRODSPARK_VEL_BASE;
        ep->effect_vars.star_rod_spark.add.x = lr * EFPART_STARRODSPARK_VEL_ADD;
        ep->effect_vars.star_rod_spark.add_timer = EFPART_STARRODSPARK_ADD_TIMER;
    }
    return effect_gobj;
}

// 0x800FFF74
void efManagerDamageFlySparksProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    gcPlayAnimAll(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);
    }
    else
    {
        DObj *dobj = DObjGetStruct(effect_gobj);

        dobj->translate.vec.f.x += ep->effect_vars.damage_fly_sparks.vel.x;
        dobj->translate.vec.f.y += ep->effect_vars.damage_fly_sparks.vel.y;

        if (ep->effect_vars.damage_fly_sparks.add_timer != 0)
        {
            ep->effect_vars.damage_fly_sparks.add_timer--;

            ep->effect_vars.damage_fly_sparks.vel.x += ep->effect_vars.damage_fly_sparks.add.x;
            ep->effect_vars.damage_fly_sparks.vel.y += ep->effect_vars.damage_fly_sparks.add.y;
        }
    }
}

// 0x80100030
void efManagerDamageSpawnSparksProcUpdate(GObj *effect_gobj)
{
    efStruct *this_ep;
    DObj *dobj;
    efStruct *new_ep;
    GObj *new_gobj;
    s32 lifetime;
    f32 angle;
    f32 var;
    f32 unused;

    this_ep = efGetStruct(effect_gobj);
    lifetime = this_ep->effect_vars.damage_spawn_sparks.lifetime;

    if (!(lifetime % EFPART_DAMAGESPAWNSPARK_LIFETIME_MOD))
    {
        new_gobj = efManagerMakeEffectNoForce(&dEFManagerDamageFlySparksEffectDesc);

        if (new_gobj != NULL)
        {
            dobj = DObjGetStruct(new_gobj);
            new_ep = efGetStruct(new_gobj);

            dobj->translate.vec.f = this_ep->effect_vars.damage_spawn_sparks.pos;

            dobj->rotate.vec.f.z = mtTrigGetRandomFloat() * F_CLC_DTOR32(360.0F);

            var = dEFManagerDamageSpawnSparksAngles[ -(lifetime / EFPART_DAMAGESPAWNSPARK_LIFETIME_MOD) + (EFPART_DAMAGESPAWNSPARK_LIFETIME_MOD / 2) ];

            angle = F_CLC_DTOR32(var);

            new_ep->effect_vars.damage_fly_sparks.vel.x = __cosf(angle) * EFPART_DAMAGESPAWNSPARK_VEL_BASE * this_ep->effect_vars.damage_spawn_sparks.lr;
            new_ep->effect_vars.damage_fly_sparks.vel.y = __sinf(angle) * EFPART_DAMAGESPAWNSPARK_VEL_BASE;

            new_ep->effect_vars.damage_fly_sparks.add.x = -new_ep->effect_vars.damage_fly_sparks.vel.x * EFPART_DAMAGESPAWNSPARK_VEL_ADD;
            new_ep->effect_vars.damage_fly_sparks.add.y = -new_ep->effect_vars.damage_fly_sparks.vel.y * EFPART_DAMAGESPAWNSPARK_VEL_ADD;

            new_ep->effect_vars.damage_fly_sparks.add_timer = EFPART_DAMAGESPAWNSPARK_ADD_TIMER;
        }
    }
    this_ep->effect_vars.damage_spawn_sparks.lifetime--;

    if (this_ep->effect_vars.damage_spawn_sparks.lifetime < 0)
    {
        efManagerSetPrevStructAlloc(this_ep);
        gcEjectGObj(effect_gobj);
    }
}

// 0x801001A8
GObj* efManagerDamageSpawnSparksMakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efStruct *ep;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerDamageSpawnSparksEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.damage_spawn_sparks.pos = *pos;
    ep->effect_vars.damage_spawn_sparks.lifetime = EFPART_DAMAGESPAWNSPARK_LIFETIME;
    ep->effect_vars.damage_spawn_sparks.lr = lr;

    return effect_gobj;
}

// 0x80100218
GObj* efManagerDamageSpawnSparksRandgcMakeEffect(Vec3f *pos, s32 lr)
{
    if (mtTrigGetRandomIntRange(4) != 0)
    {
        return NULL;
    }
    else return efManagerDamageSpawnSparksMakeEffect(pos, lr);
}

// 0x80100258
void efManagerDamageSpawnMDustProcUpdate(GObj *effect_gobj)
{
    efStruct *this_ep;
    DObj *dobj;
    efStruct *new_ep;
    GObj *new_gobj;
    s32 lifetime;
    f32 angle;
    f32 var;
    f32 unused;

    this_ep = efGetStruct(effect_gobj);
    lifetime = this_ep->effect_vars.damage_spawn_mdust.lifetime;

    if (!(lifetime % EFPART_DAMAGESPAWNMDUST_LIFETIME_MOD))
    {
        new_gobj = efManagerMakeEffectNoForce(&dEFManagerDamageFlyMDustEffectDesc);

        if (new_gobj != NULL)
        {
            dobj = DObjGetStruct(new_gobj);
            new_ep = efGetStruct(new_gobj);

            dobj->translate.vec.f = this_ep->effect_vars.damage_spawn_mdust.pos;

            dobj->rotate.vec.f.z = mtTrigGetRandomFloat() * F_CLC_DTOR32(360.0F);

            var = dEFManagerDamageSpawnMDustAngles[ -(lifetime / EFPART_DAMAGESPAWNMDUST_LIFETIME_MOD) + (EFPART_DAMAGESPAWNMDUST_LIFETIME_MOD / 2) ];

            angle = F_CLC_DTOR32(var);

            new_ep->effect_vars.damage_fly_mdust.vel.x = __cosf(angle) * EFPART_DAMAGESPAWNMDUSTVEL_BASE * this_ep->effect_vars.damage_spawn_mdust.lr;
            new_ep->effect_vars.damage_fly_mdust.vel.y = __sinf(angle) * EFPART_DAMAGESPAWNMDUSTVEL_BASE;

            new_ep->effect_vars.damage_fly_mdust.add.x = -new_ep->effect_vars.damage_fly_mdust.vel.x * EFPART_DAMAGESPAWNMDUSTVEL_ADD;
            new_ep->effect_vars.damage_fly_mdust.add.y = -new_ep->effect_vars.damage_fly_mdust.vel.y * EFPART_DAMAGESPAWNMDUSTVEL_ADD;

            new_ep->effect_vars.damage_fly_mdust.add_timer = EFPART_DAMAGESPAWNMDUST_ADD_TIMER;
        }
    }
    this_ep->effect_vars.damage_spawn_mdust.lifetime--;

    if (this_ep->effect_vars.damage_spawn_mdust.lifetime < 0)
    {
        efManagerSetPrevStructAlloc(this_ep);
        gcEjectGObj(effect_gobj);
    }
}

// 0x801003D0
GObj* efManagerDamageSpawnMDustMakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efStruct *ep;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerDamageSpawnMDustEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.damage_spawn_mdust.pos = *pos;
    ep->effect_vars.damage_spawn_mdust.lifetime = EFPART_DAMAGESPAWNMDUST_LIFETIME;
    ep->effect_vars.damage_spawn_mdust.lr = lr;

    return effect_gobj;
}

// 0x80100440
GObj* efManagerDamageSpawnMDustRandgcMakeEffect(Vec3f *pos, s32 lr)
{
    if (mtTrigGetRandomIntRange(4) != 0)
    {
        return NULL;
    }
    else return efManagerDamageSpawnMDustMakeEffect(pos, lr);
}

// 0x80100480
efParticle* efManagerSparkleWhiteMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x73);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x80100524
efParticle* efManagerSparkleWhiteMultiMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x1A);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x801005C8
efParticle* efManagerSparkleWhiteMultiExplodeMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x22);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x8010066C
efParticle* efManagerSparkleWhiteScaleMakeEffect(Vec3f *pos, f32 scale)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x5B);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;

            tfrm->scale.x = scale;
            tfrm->scale.y = scale;
            tfrm->scale.z = scale;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x80100720 - Plays when a fighter is Star KO'd
efParticle* efManagerSparkleWhiteDeadMakeEffect(Vec3f *pos, f32 scale)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 0x10, 0x5C);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;

            tfrm->scale.x = scale;
            tfrm->scale.y = scale;
            tfrm->scale.z = scale;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x801007D8
void efManagerQuakeProcUpdate(GObj *effect_gobj)
{
    DObj *dobj;
    Vec3f sub;
    Vec3f pos;
    Camera *cam;
    f32 mag;

    gcPlayAnimAll(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManagerSetPrevStructAlloc(efGetStruct(effect_gobj));
        gcEjectGObj(effect_gobj);
    }
    else
    {
        cam = CameraGetStruct(gCMManagerCameraGObj);

        dobj = DObjGetStruct(effect_gobj);

        lbVector_Vec3fSubtract(&sub, &cam->vec.at, &cam->vec.eye);

        mag = lbVector_Vec3fMagnitude(&sub);

        if (mag > EFPART_QUAKE_MAGNITUDE)
        {
            mag = mag / EFPART_QUAKE_MAGNITUDE;

            pos.x = dobj->translate.vec.f.z * mag;
            pos.y = dobj->translate.vec.f.y * mag;
        }
        else
        {
            pos.x = dobj->translate.vec.f.z;
            pos.y = dobj->translate.vec.f.y;
        }
        pos.z = 0.0F;

        cmManagerSetAtMove(&pos);
    }
}

// 0x801008B8
void efManagerQuakeAddProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    gcAddGObjProcess(effect_gobj, efManagerQuakeProcUpdate, 1, ep->effect_vars.quake.priority);

    effect_gobj->proc_run = NULL;
}

// 0x801008F4
GObj* efManagerQuakeMakeEffect(s32 magnitude) // Linker things here
{
    s32 unused[2];
    efStruct *ep;
    GObj *effect_gobj;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, efManagerQuakeAddProcUpdate, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    effect_gobj->user_data.p = ep;

    gcAddOMMtxForDObjFixed(gcAddDObjForGObj(effect_gobj, NULL), nOMTransformTra, 0);

    switch (magnitude)
    {
    case 0:
        gcAddAnimJointAll(effect_gobj, gcGetDataFromFile(AObjEvent**, sEFManagerTexturesFile1, &lEFManagerQuakeMag0AnimJoint), 0.0F);
        break;

    case 1:
        gcAddAnimJointAll(effect_gobj, gcGetDataFromFile(AObjEvent**, sEFManagerTexturesFile1, &lEFManagerQuakeMag1AnimJoint), 0.0F);
        break;

    case 2:
        gcAddAnimJointAll(effect_gobj, gcGetDataFromFile(AObjEvent**, sEFManagerTexturesFile1, &lEFManagerQuakeMag2AnimJoint), 0.0F);
        break;

    case 3: // Used by POW Block 
        gcAddAnimJointAll(effect_gobj, gcGetDataFromFile(AObjEvent**, sEFManagerTexturesFile1, &lEFManagerQuakeMag3AnimJoint), 0.0F);
        break;

    default:
        break;
    }
    gcPlayAnimAll(effect_gobj);

    ep->effect_vars.quake.priority = 3 - magnitude;

    return effect_gobj;
}

// 0x80100A58
void efManagerDamageCoinProcDead(efTransform *tfrm)
{
    Vec3f pos = tfrm->translate;

    pos.y += 200.0F;

    efManagerDustExpandSmallMakeEffect(&pos, 2.0F);
    efManagerSetPrevStructAlloc(efGetStruct(tfrm->effect_gobj));
    gcEjectGObj(tfrm->effect_gobj);
}

// 0x80100ACC
efParticle* efManagerDamageCoinMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }

    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x60);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDamageCoinProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            ep->effect_vars.common.tfrm = tfrm;

            tfrm->translate = *pos;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x80100BF0
efParticle* efManagerSetOffMakeEffect(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    efStruct *ep;
    f32 vel;
    f32 angle;
    f32 scale;

    ep = efManagerGetEffectNoForce();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0x65);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            tfrm->effect_gobj = effect_gobj;
            tfrm->proc_dead = efManagerDefaultProcDead;

            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            gcAddGObjProcess(effect_gobj, efManagerDefaultProcUpdate, nOMObjProcessKindProc, 3);

            ep->effect_vars.common.tfrm = tfrm;

            tfrm->translate = *pos;

            vel = (mtTrigGetRandomFloat() * 18.0F) + 12.0F;
            angle = mtTrigGetRandomFloat() * F_CLC_DTOR32(360.0F); // F_CLC_DTOR32(360.0F)

            ep->effect_vars.common.vel.x = __cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.15F) + 1.0F);

            tfrm->scale.x = tfrm->scale.y = tfrm->scale.z = scale;
        }
        else ptcl = efManagerDestroyParticleGObj(ptcl, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return ptcl;
}

// 0x80100DEC
GObj* efManagerFireSparkMakeEffect(GObj *fighter_gobj) // I really have no idea where this effect is used; it can only be created by script
{
    ftStruct *fp;
    efStruct *ep;
    GObj *effect_gobj;
    DObj *dobj;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = efManagerMakeEffectNoForce(&dEFFireSparkEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    fp->is_attach_effect = TRUE;

    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f.y = 160.0F;
    dobj->user_data.p = fp->joints[16];

    lbCommonSetDObjTransformsForTreeDObjs(dobj->child, (uintptr_t)sEFManagerTexturesFile2 + (intptr_t)&lEFManagerFireSparkDObjSetup); // Linker thing

    return effect_gobj;
}

// 0x80100E84
void efManagerFoxReflectorSetAnimID(GObj *effect_gobj, s32 anim_id)
{
    efStruct *ep = efGetStruct(effect_gobj);

    ep->effect_vars.reflector.index = anim_id;

    gcAddAnimJointAll(effect_gobj, gcGetDataFromFile(AObjEvent**, gFTDataFoxSpecial2, dEFManagerFoxReflectorAnimJointOffsets[anim_id]), 0.0F);
    gcPlayAnimAll(effect_gobj);
}

// 0x80100ED4
void efManagerFoxReflectorProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    gcPlayAnimAll(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        switch (ep->effect_vars.reflector.index)
        {
        case 1:
            break;

        case 0:
        case 2:
            efManagerFoxReflectorSetAnimID(effect_gobj, 1);
            break;

        case 3:
            efManagerSetPrevStructAlloc(ep);
            gcEjectGObj(effect_gobj);
            return;
        }
    }
    if (ep->effect_vars.reflector.status != 4)
    {
        efManagerFoxReflectorSetAnimID(effect_gobj, ep->effect_vars.reflector.status);

        ep->effect_vars.reflector.status = 4;
    }
}

// 0x80100FA4
GObj* efManagerFoxReflectorMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj = efManagerMakeEffectForce(&dEFManagerFoxReflectorEffectDesc);
    efStruct *ep;

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    DObjGetStruct(effect_gobj)->user_data.p = ftGetStruct(fighter_gobj)->joints[nFTPartsJointTopN];

    ep->effect_vars.reflector.index = 0;
    ep->effect_vars.reflector.status = 4;

    return effect_gobj;
}

// 0x80101008
void efManagerShieldProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (ep->effect_vars.shield.is_damage_shield != FALSE)
    {
        ep->effect_vars.shield.is_damage_shield = FALSE;
    }
}

// 0x80101024
void efManagerShieldProcDraw(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    s32 id = (ep->effect_vars.shield.is_damage_shield != FALSE) ? 4 : ep->effect_vars.shield.player;

    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, dEFManagerShieldColors[id].prim.r, dEFManagerShieldColors[id].prim.g, dEFManagerShieldColors[id].prim.b, 0xC0);
    gDPSetEnvColor(gDisplayListHead[1]++, dEFManagerShieldColors[id].env.r, dEFManagerShieldColors[id].env.g, dEFManagerShieldColors[id].env.b, 0xC0);

    gcDrawDObjTreeDLLinksForGObj(effect_gobj);
}

// 0x80101108
GObj* efManagerShieldMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = efManagerMakeEffectForce(&dEFManagerShieldEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp->is_attach_effect = TRUE;

    DObjGetStruct(effect_gobj)->user_data.p = fp->joints[nFTPartsJointYRotN];

    ep->effect_vars.shield.player = fp->player;
    ep->effect_vars.shield.is_damage_shield = FALSE;

    return effect_gobj;
}

// 0x80101180
void efManagerYoshiShieldProcDraw(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    ftStruct *fp = ftGetStruct(ep->fighter_gobj);
    f32 blend = 1.0F - (fp->shield_health / 55.0F);
    u8 color[3];

    if (blend < 0.0F)
    {
        blend = 0.0F;
    }
    color[syColorRGBIndexR] = 0xAE * blend;
    color[syColorRGBIndexG] = 0xD6 * blend;
    color[syColorRGBIndexB] = 0xD6 * blend;

    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetEnvColor(gDisplayListHead[1]++, color[syColorRGBIndexR], color[syColorRGBIndexG], color[syColorRGBIndexB], 0x00);

    gcDrawDObjDLHead1(effect_gobj);

    efDisplayProcDrawBlendCLD(effect_gobj);
}

// 0x80101374
GObj* efManagerYoshiShieldMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = efManagerMakeEffectForce(&dEFManagerYoshiShieldEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp->is_attach_effect = TRUE;

    DObjGetStruct(effect_gobj)->user_data.p = fp->joints[nFTPartsJointYRotN];
    DObjGetStruct(effect_gobj)->scale.vec.f.x = DObjGetStruct(effect_gobj)->scale.vec.f.y = 1.5F;

    ep->effect_vars.shield.player = fp->player;
    ep->effect_vars.shield.is_damage_shield = FALSE;

    return effect_gobj;
}

// 0x80101408
efParticle* efManagerThunderAmpMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x74);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x801014A8
efGenerator* efManagerRippleMakeEffect(Vec3f *pos)
{
    efGenerator *gtor = lbParticleMakeGenerator(gEFManagerParticleBankID, 0x61);

    if (gtor != NULL)
    {
        gtor->pos.x = pos->x;
        gtor->pos.y = pos->y;
        gtor->pos.z = pos->z;
    }
    return gtor;
}

// 0x80101500
GObj* efManagerCatchSwirlMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFCatchSwirlEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x8010155C
GObj* efManagerReflectBreakMakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFReflectBreakEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    if (lr == nGMFacingL)
    {
        dobj->rotate.vec.f.y = F_CLC_DTOR32(180.0F);
    }
    return effect_gobj;
}

// 0x801015D4
efParticle* efManagerFuraSparkleMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = func_ovl0_800CE870(gEFManagerParticleBankID | 8, 0);

    if (ptcl != NULL)
    {
        ptcl->pos.x = pos->x;
        ptcl->pos.y = pos->y;
        ptcl->pos.z = pos->z;
    }
    return ptcl;
}

// 0x80101630
efParticle* efManagerPsionicMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = func_ovl0_800CE870(gEFManagerParticleBankID, 7);

    if (ptcl != NULL)
    {
        ptcl->pos.x = pos->x;
        ptcl->pos.y = pos->y;
        ptcl->pos.z = pos->z;
    }
    return ptcl;
}

// 0x80101688
efParticle* efManagerFlashSmallMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = func_ovl0_800CE870(gEFManagerParticleBankID, 4);

    if (ptcl != NULL)
    {
        ptcl->pos.x = pos->x;
        ptcl->pos.y = pos->y;
        ptcl->pos.z = pos->z;
    }
    return ptcl;
}

// 0x801016E0
efParticle* efManagerFlashMiddleMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = func_ovl0_800CE870(gEFManagerParticleBankID, 5);

    if (ptcl != NULL)
    {
        ptcl->pos.x = pos->x;
        ptcl->pos.y = pos->y;
        ptcl->pos.z = pos->z;
    }
    return ptcl;
}

// 0x80101738
efParticle* efManagerFlashLargeMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = func_ovl0_800CE870(gEFManagerParticleBankID, 6);

    if (ptcl != NULL)
    {
        ptcl->pos.x = pos->x;
        ptcl->pos.y = pos->y;
        ptcl->pos.z = pos->z;
    }
    return ptcl;
}

// 0x80101790
efGenerator* efManagerShieldBreakMakeEffect(Vec3f *pos)
{
    efGenerator *gtor = lbParticleMakeGenerator(gEFManagerParticleBankID, 3);

    if (gtor != NULL)
    {
        gtor->pos.x = pos->x;
        gtor->pos.y = pos->y;
        gtor->pos.z = pos->z;
    }
    return gtor;
}

// 0x801017E8
void func_ovl2_801017E8(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    gcPlayAnimAll(effect_gobj);

    if (ep->effect_vars.unknown1.efvars_unk1_0x0 == 0)
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);
    }
    else ep->effect_vars.unknown1.efvars_unk1_0x0--;
}

// 0x8010183C
GObj* func_ovl2_8010183C(Vec3f *pos, s32 arg1)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerPikachuUnkEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.unknown1.efvars_unk1_0x0 = arg1;

    dobj = DObjGetStruct(effect_gobj);
    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x801018A8
GObj* efManagerPikachuThunderShockMakeEffect(GObj *fighter_gobj, Vec3f *pos, s32 frame)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerPikachuThunderShockEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);
    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[nFTPartsJointTopN];

    dobj->child->translate.vec.f = *pos;

    dobj->child->translate.vec.f.x = (ftGetStruct(fighter_gobj)->lr == nGMFacingL) ? -pos->x : pos->x;

    gcAddOMMtxForDObjFixed(dobj->child->child, 0x2E, 0);

    switch (frame)
    {
    case 1:
        gcAddAnimAll
        (
            effect_gobj, 
            gcGetDataFromFile(AObjEvent**, gFTDataPikachuSpecial2, &lEFManagerPikachuThunderShock1AnimJoint), 
            gcGetDataFromFile(AObjEvent***, gFTDataPikachuSpecial2, &lEFManagerPikachuThunderShock1MatAnimJoint), 
            0.0F
        );
        gcPlayAnimAll(effect_gobj);
        break;

    case 2:
        gcAddAnimAll
        (
            effect_gobj, 
            gcGetDataFromFile(AObjEvent**, gFTDataPikachuSpecial2, &lEFManagerPikachuThunderShock2AnimJoint), 
            gcGetDataFromFile(AObjEvent***, gFTDataPikachuSpecial2, &lEFManagerPikachuThunderShock2MatAnimJoint), 
            0.0F
        );
        gcPlayAnimAll(effect_gobj);
        break;
    }
    return effect_gobj;
}

// 0x80101A08
void efManagerPikachuThunderTrailProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (ep->effect_vars.thunder_trail.lifetime == 0)
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);

        return;
    }
    else ep->effect_vars.thunder_trail.lifetime--;

    if (DObjGetStruct(effect_gobj)->mobj->texture_id_current != 3)
    {
        if (ep->effect_vars.thunder_trail.lifetime == 0)
        {
            DObjGetStruct(effect_gobj)->mobj->texture_id_current = 3;

            DObjGetStruct(effect_gobj)->rotate.vec.f.z = F_CLC_DTOR32(180.0F);
        }
        else DObjGetStruct(effect_gobj)->mobj->texture_id_current = mtTrigGetRandomIntRange(3);
    }
}

// 0x80101AA8
void efManagerPikachuThunderTrailProcDraw(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_NONE);

    gcDrawDObjDLLinksForGObj(effect_gobj);

    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_THRESHOLD);
}

// 0x80101B88
GObj* efManagerPikachuThunderTrailMakeEffect(Vec3f *pos, s32 lifetime, s32 texture_index)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerPikachuThunderTrailEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    dobj->scale.vec.f.x = 0.5F;
    dobj->scale.vec.f.y = 0.5F;
    dobj->scale.vec.f.z = 0.5F;

    ep = efGetStruct(effect_gobj);

    ep->effect_vars.thunder_trail.lifetime = lifetime;

    dobj->mobj->texture_id_current = (texture_index == 3) ? 3 : 0;

    return effect_gobj;
}

// 0x80101C34
GObj* efManagerPikachuThunderJoltMakeEffect(Vec3f *pos, f32 rotate)
{
    GObj *effect_gobj = efManagerMakeEffectNoForce(&dEFThunderJoltEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    DObjGetStruct(effect_gobj)->translate.vec.f = *pos;

    DObjGetStruct(effect_gobj)->rotate.vec.f.z = rotate;

    return effect_gobj;
}

// 0x80101CA0
void efManagerKirbyVulcanJabProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    if (ep->effect_vars.vulcan_jab.lifetime != 0)
    {
        ep->effect_vars.vulcan_jab.vel.x += ep->effect_vars.vulcan_jab.add.x;
        dobj->translate.vec.f.x += ep->effect_vars.vulcan_jab.vel.x;

        ep->effect_vars.vulcan_jab.vel.y += ep->effect_vars.vulcan_jab.add.y;
        dobj->translate.vec.f.y += ep->effect_vars.vulcan_jab.vel.y;

        ep->effect_vars.vulcan_jab.lifetime--;
    }
    else
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);
    }
}

// 0x80101D34
GObj* efManagerKirbyVulcanJabMakeEffect(Vec3f *pos, s32 lr, f32 rotate, f32 vel, f32 add)
{
    GObj *effect_gobj;
    DObj *dobj;
    efStruct *ep;
    f32 sin, cos;

    effect_gobj = efManagerMakeEffectNoForce(&dEFVulcanJabEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);
    ep = efGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    if (lr == nGMFacingL)
    {
        dobj->rotate.vec.f.y = F_CLC_DTOR32(180.0F);

        rotate = -rotate;
        vel = -vel;
        add = -add;
    }
    gcAddOMMtxForDObjFixed(dobj->child->child, 0x46, 0);

    dobj->rotate.vec.f.z = F_CLC_DTOR32(rotate);

    sin = lbCommonSin(dobj->rotate.vec.f.z);
    cos = lbCommonCos(dobj->rotate.vec.f.z);

    ep->effect_vars.vulcan_jab.lifetime = 6;

    ep->effect_vars.vulcan_jab.vel.x = vel * cos;
    ep->effect_vars.vulcan_jab.vel.y = vel * sin;
    ep->effect_vars.vulcan_jab.vel.z = 0.0F;

    ep->effect_vars.vulcan_jab.add.x = add * cos;
    ep->effect_vars.vulcan_jab.add.y = add * sin;
    ep->effect_vars.vulcan_jab.add.z = 0.0F;

    return effect_gobj;
}

// 0x80101E80
GObj* efManagerSamusGrappleBeamGlowMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj = efManagerMakeEffectNoForce(&dEFManagerSamusGrappleBeamEffectDesc);
    efStruct *ep;
    DObj *dobj;

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[23];

    return effect_gobj;
}

// 0x80101ED8
GObj* efManagerCaptainFalconKickMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFManagerCaptainFalconKickEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);
    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[23];

    dobj->rotate.vec.f.y = fp->lr * F_CLC_DTOR32(90.0F);

    if (fp->status_info.status_id == nFTCaptainStatusSpecialAirLw)
    {
        dobj->rotate.vec.f.z = -fp->lr * F_CLC_DTOR32(60.0F);
    }
    return effect_gobj;
}

// 0x80101F84
GObj* efManagerCaptainFalconPunchMakeEffect(GObj *fighter_gobj)
{
    ftStruct *fp;
    efStruct *ep;
    DObj *dobj, *joint;
    GObj *effect_gobj;

    effect_gobj = efManagerMakeEffectForce(&dEFManagerCaptainFalconPunchEffectDesc);

    if (effect_gobj == NULL)
    {
        return FALSE;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);

    dobj = DObjGetStruct(effect_gobj);

    joint = ((fp->ft_kind == nFTKindCaptain) || (fp->ft_kind == nFTKindNCaptain)) ? fp->joints[16] : fp->joints[30];

    dobj->user_data.p = joint;

    dobj->rotate.vec.f.y = fp->lr * F_CLC_DTOR32(-90.0F);

    return effect_gobj;
}

// 0x80102018
efGenerator* efManagerKirbyStarMakeEffect(Vec3f *pos)
{
    efGenerator *gtor = lbParticleMakeGenerator(gEFManagerParticleBankID, 0xF);

    if (gtor != NULL)
    {
        gtor->pos.x = pos->x;
        gtor->pos.y = pos->y;
        gtor->pos.z = pos->z;
    }
    return gtor;
}

// 0x80102070
efGenerator* efManagerStarSplashMakeEffect(Vec3f *pos, s32 lr)
{
    efGenerator *gtor = (lr == nGMFacingL) ? lbParticleMakeGenerator(gEFManagerParticleBankID, 0x10) : lbParticleMakeGenerator(gEFManagerParticleBankID, 0x11);

    if (gtor != NULL)
    {
        gtor->pos.x = pos->x;
        gtor->pos.y = pos->y;
        gtor->pos.z = pos->z;
    }
    return gtor;
}

// 0x801020F4
GObj* efManagerPurinSingMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    DObj *dobj, *sibling_dobj;
    efStruct *ep;

    effect_gobj = efManagerMakeEffectForce(&dEFManagerPurinSingEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);
    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[nFTPartsJointTopN];

    sibling_dobj = dobj->child;

    gcAddOMMtxForDObjFixed(sibling_dobj, 0x46, 0);

    sibling_dobj = dobj->child->sib_next;

    gcAddOMMtxForDObjFixed(sibling_dobj, nOMTransformRotRpyR, 0);

    sibling_dobj = sibling_dobj->child;

    gcAddOMMtxForDObjFixed(sibling_dobj, 0x2A, 0);

    sibling_dobj = sibling_dobj->sib_next;

    gcAddOMMtxForDObjFixed(sibling_dobj, 0x2A, 0);

    sibling_dobj = sibling_dobj->sib_next;

    gcAddOMMtxForDObjFixed(sibling_dobj, 0x2A, 0);

    return effect_gobj;
}

// 0x801021C0
GObj* efManagerDeadExplodeMakeEffect(Vec3f *pos, s32 player, u32 type)
{
    s32 unused[4];
    GObj *effect_gobj;
    efParticle *ptcl;
    efTransform *tfrm;
    DObj *dobj;
    DObj *child_dobj;
    DObj *sibling_dobj;
    u8 index = ((type % 2) * GMCOMMON_PLAYERS_MAX) + player; // WARNING: dEFManagerDeadExplodeGenID should be u8[2][GMCOMMON_PLAYERS_MAX], but it will not match this way; UB-risk

    ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 0x10, dEFManagerDeadExplodeGenID[index]);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;

            tfrm->rotate.z = F_CLC_DTOR32(dEFManagerDeadExplodeRotateD[type]);
        }
        else lbParticleEjectStruct(ptcl);
    }
    dEFManagerDeadExplodeEffectDesc.o_matanim_joint = dEFManagerDeadExplodeMatAnimJoints[player];

    effect_gobj = efManagerMakeEffectForce(&dEFManagerDeadExplodeEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);
    dobj->translate.vec.f = *pos;

    child_dobj = dobj->child;

    dobj->rotate.vec.f.z = F_CLC_DTOR32(dEFManagerDeadExplodeRotateD[type]);

    sibling_dobj = dobj->child->sib_next->sib_next;

    sibling_dobj->mobj->sub.envcolor.r = dEFManagerDeadExplodeEnvColorSiblingR[player];
    sibling_dobj->mobj->sub.envcolor.g = dEFManagerDeadExplodeEnvColorSiblingG[player];
    sibling_dobj->mobj->sub.envcolor.b = dEFManagerDeadExplodeEnvColorSiblingB[player];

    sibling_dobj->mobj->sub.flags |= MOBJ_FLAG_ENVCOLOR;

    child_dobj->mobj->sub.envcolor.r = dEFManagerDeadExplodeEnvColorChildR[player];
    child_dobj->mobj->sub.envcolor.g = dEFManagerDeadExplodeEnvColorChildG[player];
    child_dobj->mobj->sub.envcolor.b = dEFManagerDeadExplodeEnvColorChildB[player];

    child_dobj->mobj->sub.flags |= MOBJ_FLAG_ENVCOLOR;

    return effect_gobj;
}

// 0x801023D4
void func_ovl2_801023D4(Vec3f *pos) // Unused?
{
    pos->y += 8000.0F;
    pos->x = 4000.0F;

    efManagerDeadExplodeMakeEffect(pos, 2, 1);
}

// 0x80102418
GObj* efManagerKirbyCutterUpMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFManagerKirbyCutterUpEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);
    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[nFTPartsJointTopN];
    dobj->rotate.vec.f.y = fp->lr * F_CLC_DTOR32(90.0F);

    return effect_gobj;
}

// 0x80102490
GObj* efManagerKirbyCutterDownMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFManagerKirbyCutterDownEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);
    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[nFTPartsJointTopN];
    dobj->rotate.vec.f.y = fp->lr * F_CLC_DTOR32(90.0F);

    return effect_gobj;
}

// 0x80102508
GObj* efManagerKirbyCutterDrawMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFManagerKirbyCutterDrawEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[17];

    return effect_gobj;
}

// 0x80102560
GObj* efManagerKirbyCutterTrailMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFManagerKirbyCutterTrailEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);
    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[17];
    dobj->rotate.vec.f.y = fp->lr * F_CLC_DTOR32(90.0F);

    return effect_gobj;
}

// 0x801025D8
GObj* efManagerNessPsychicMagnetMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFManagerNessPsychicMagnetEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[nFTPartsJointTopN];

    return effect_gobj;
}

// 0x80102630
void efManagerNessPKThunderTrailProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    ftStruct *fp;
    s32 index;

    if (ep->effect_vars.pkthunder.status & nWPNessPKThunderStatusDestroy)
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);

        return;
    }
    fp = ftGetStruct(ep->effect_vars.pkthunder.owner_gobj);

    index = fp->fighter_vars.ness.pkthunder_trail_id - (FTNESS_PKTHUNDER_TRAIL_POS_COUNT - 2);

    if (index < 0)
    {
        index += FTNESS_PKTHUNDER_TRAIL_POS_COUNT;
    }
    DObjGetStruct(effect_gobj)->translate.vec.f.x = fp->fighter_vars.ness.pkthunder_trail_x[index];
    DObjGetStruct(effect_gobj)->translate.vec.f.y = fp->fighter_vars.ness.pkthunder_trail_y[index];

    if (index > 0)
    {
        DObjGetStruct(effect_gobj)->rotate.vec.f.z = atan2f((fp->fighter_vars.ness.pkthunder_trail_y[index] - fp->fighter_vars.ness.pkthunder_trail_y[index - 1]), (fp->fighter_vars.ness.pkthunder_trail_x[index] - fp->fighter_vars.ness.pkthunder_trail_x[index - 1]));
    }
    else
    {
        DObjGetStruct(effect_gobj)->rotate.vec.f.z = atan2f((fp->fighter_vars.ness.pkthunder_trail_y[index] - fp->fighter_vars.ness.pkthunder_trail_y[FTNESS_PKTHUNDER_TRAIL_POS_COUNT - 1]), (fp->fighter_vars.ness.pkthunder_trail_x[index] - fp->fighter_vars.ness.pkthunder_trail_x[FTNESS_PKTHUNDER_TRAIL_POS_COUNT - 1]));
    }
    DObjGetStruct(effect_gobj)->rotate.vec.f.z -= F_CLC_DTOR32(90.0F);
}

// 0x80102768
void efManagerNessPKThunderTrailProcDraw(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_NONE);

    gcDrawDObjDLLinksForGObj(effect_gobj);

    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_THRESHOLD);
}

// 0x80102848
GObj* efManagerNessPKThunderTrailMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    ftStruct *fp;
    efStruct *ep;
    wpStruct *wp;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerNessPKThunderTrailEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.pkthunder.owner_gobj = fighter_gobj;
    ep->effect_vars.pkthunder.status = nWPNessPKThunderStatusActive;

    DObjGetStruct(effect_gobj)->translate.vec.f.z = 0.0F;

    wp = wpGetStruct(fp->status_vars.ness.specialhi.pkthunder_gobj);

    wp->weapon_vars.pkthunder.trail_gobj[ARRAY_COUNT(wp->weapon_vars.pkthunder.trail_gobj) - 1] = effect_gobj;

    efManagerNessPKThunderTrailProcUpdate(effect_gobj);

    return effect_gobj;
}

// 0x801028C0
void efManagerNessPKReflectTrailProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (ep->effect_vars.pkthunder.status & nWPNessPKThunderStatusDestroy)
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);
    }
    else
    {
        wpStruct *wp = wpGetStruct(ep->effect_vars.pkthunder.owner_gobj);

        DObjGetStruct(effect_gobj)->translate.vec.f.x = (DObjGetStruct(ep->effect_vars.pkthunder.owner_gobj)->translate.vec.f.x - wp->phys_info.vel_air.x * 5.0F * 2);
        DObjGetStruct(effect_gobj)->translate.vec.f.y = (DObjGetStruct(ep->effect_vars.pkthunder.owner_gobj)->translate.vec.f.y - wp->phys_info.vel_air.y * 5.0F * 2);
    }
}

// 0x80102968
GObj* efManagerNessPKReflectTrailMakeEffect(GObj *weapon_gobj)
{
    GObj *effect_gobj;
    wpStruct *wp;
    efStruct *ep;

    wp = wpGetStruct(weapon_gobj);

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerNessPKReflectTrailEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.pkthunder.owner_gobj = weapon_gobj;
    ep->effect_vars.pkthunder.status = nWPNessPKThunderStatusActive;

    DObjGetStruct(effect_gobj)->translate.vec.f.z = 0.0F;

    DObjGetStruct(effect_gobj)->rotate.vec.f.z = DObjGetStruct(weapon_gobj)->rotate.vec.f.z - F_CLC_DTOR32(90.0F);

    wp->weapon_vars.pkthunder.trail_gobj[ARRAY_COUNT(wp->weapon_vars.pkthunder.trail_gobj) - 1] = effect_gobj;

    efManagerNessPKReflectTrailProcUpdate(effect_gobj);

    return effect_gobj;
}

// 0x801029F8
GObj* efManagerNessPKThunderWaveMakeEffect(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *effect_gobj = efManagerMakeEffectNoForce(&dEFManagerNessPKThunderWaveEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    else
    {
        efStruct *ep = efGetStruct(effect_gobj);

        ep->fighter_gobj = fighter_gobj;

        DObjGetStruct(effect_gobj)->user_data.p = fp->joints[5];

        DObjGetStruct(effect_gobj)->rotate.vec.f.y = fp->lr * F_CLC_DTOR32(90.0F);
        DObjGetStruct(effect_gobj)->translate.vec.f.z = 0.0F;

        return effect_gobj;
    }
}

// 0x80102A88 - Unused? (Edit 6/4/2024: PK FLASH? WTF???)
GObj* efManagerNessPKFlashMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerNessPKFlashEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102AE4
GObj* efManagerLinkEntryWaveMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerLinkEntryWaveEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102B40
GObj* efManagerLinkEntryBeamMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerLinkEntryBeamEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102B9C
GObj* efManagerKirbyEntryStarMakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    DObj *dobj;

    dEFManagerKirbyEntryStarEffectDesc.o_anim_joint = (lr == nGMFacingR) ? &lEFManagerKirbyEntryStarRAnimJoint : &lEFManagerKirbyEntryStarLAnimJoint; // Linker thing

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerKirbyEntryStarEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102C28
GObj* efManagerMBallRaysMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerMBallRaysEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102C84
void efManagerMBallThrownProcUpdate(GObj *effect_gobj)
{
    DObj *dobj = DObjGetStruct(effect_gobj)->child;

    if (dobj->translate.vec.f.z > 1000.0F)
    {
        if (dobj->parent_gobj->dl_link_id != 20)
        {
            gcMoveGObjDL(dobj->parent_gobj, 20, 2);
        }
    }
    else if (dobj->parent_gobj->dl_link_id != 10)
    {
        gcMoveGObjDL(dobj->parent_gobj, 10, 2);
    }
    efManagerHaveStructProcUpdate(effect_gobj);
}

// 0x80102D14
GObj* efManagerMBallThrownMakeEffect(Vec3f *pos, s32 lr) // Many linker things here
{
    GObj *effect_gobj;
    DObj *dobj;
    void **p_file;
    void *file;

    dEFManagerMBallThrownEffectDesc.file_head = &file;

    p_file = (void**)((uintptr_t)gITManagerFileData + (intptr_t)&lEFManagerMBallThrownFileHead);

    file = ((uintptr_t)*p_file - (intptr_t)&lEFManagerMBallThrownDObjSetup);

    if (lr == nGMFacingR)
    {
        dEFManagerMBallThrownEffectDesc.o_anim_joint = (intptr_t)&lEFManagerMBallThrownRAnimJoint;
        dEFManagerMBallThrownEffectDesc.o_matanim_joint = (intptr_t)&lEFManagerMBallThrownRMatAnimJoint;
    }
    else
    {
        dEFManagerMBallThrownEffectDesc.o_anim_joint = (intptr_t)&lEFManagerMBallThrownLAnimJoint;
        dEFManagerMBallThrownEffectDesc.o_matanim_joint = (intptr_t)&lEFManagerMBallThrownLMatAnimJoint;
    }
    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerMBallThrownEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    efManagerSortZNeg(dobj->child);

    return effect_gobj;
}

// 0x80102DEC
efParticle* efManagerFireGrindMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0xB);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x80102E90
efParticle* efManagerHealSparklesMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 8, 0xE);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x80102F34
GObj* efManagerYoshiEntryEggMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerYoshiEntryEggEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102F90
void efManagerYoshiEggLaySetAnim(GObj *effect_gobj, s32 index)
{
    efStruct *ep = efGetStruct(effect_gobj);

    ep->effect_vars.yoshi_egg_lay.index = index;

    lbCommonAddDObjAnimJointAll(DObjGetStruct(effect_gobj)->child, (uintptr_t)gFTDataYoshiSpecial3 + dEFManagerYoshiEggLayAnimJoints[index], 1.0F);
}

// 0x80102FE4
void efManagerYoshiEggLayProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (ep->effect_vars.yoshi_egg_lay.force_index != ep->effect_vars.yoshi_egg_lay.index)
    {
        efManagerYoshiEggLaySetAnim(effect_gobj, ep->effect_vars.yoshi_egg_lay.force_index);
    }
    gcPlayAnimAll(effect_gobj);

    if ((ep->effect_vars.yoshi_egg_lay.index == 2) && (effect_gobj->anim_frame <= 0.0F))
    {
        ep->effect_vars.yoshi_egg_lay.force_index = 0;
    }
}

// 0x80103060
GObj* efManagerYoshiEggLayMakeEffect(GObj *fighter_gobj)
{
    void *unused;
    ftStruct *fp;
    efStruct *ep;
    GObj *effect_gobj;
    DObj *dobj;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = efManagerMakeEffectForce(&dEFManagerYoshiEggLayEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;
    ep->effect_vars.yoshi_egg_lay.index = ep->effect_vars.yoshi_egg_lay.force_index = 2;

    dobj = DObjGetStruct(effect_gobj);
    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[nFTPartsJointTopN];

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = dFTCommonYoshiEggHurtboxDescs[fp->ft_kind].effect_size;
    dobj->scale.vec.f.z = 1.0F;

    dobj->child->child->ommtx[0]->kind = nOMTransformTra;

    gcAddOMMtxForDObjFixed(dobj->child->child, 0x2E, 0);
    lbCommonSetDObjTransformsForTreeDObjs(dobj->child, (uintptr_t)gFTDataYoshiSpecial3 + (intptr_t)&lEFManagerYoshiEggLayDObjSetup);

    return effect_gobj;
}

// 0x80103150
GObj* efManagerYoshiEggEscapeMakeEffect(GObj *fighter_gobj)
{
    ftStruct *fp;
    efStruct *ep;
    GObj *effect_gobj;
    DObj *dobj;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = efManagerMakeEffectForce(&dEFManagerYoshiEggEscapeEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ftParamHideModelPartAll(fighter_gobj);

    fp->is_attach_effect = TRUE;

    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = 1.5F;

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[5];

    return effect_gobj;
}

// 0x801031E0
efParticle* func_ovl2_801031E0(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gFTDataKirbyParticleBankID, 2);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x80103280
efParticle* func_ovl2_80103280(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gFTDataKirbyParticleBankID, 5);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x80103320
efParticle* efManagerFoxBlasterGlowMakeEffect(Vec3f *pos)
{
    efParticle *ptcl;

    ptcl = func_ovl0_800CE870(gEFManagerParticleBankID, 0x62);

    if (ptcl != NULL)
    {
        ptcl->pos.x = pos->x;
        ptcl->pos.y = pos->y;
        ptcl->pos.z = pos->z;
    }
    return ptcl;
}

// 0x80103378
GObj* efManagerLinkSpinAttackMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerLinkSpinAttackEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);

    fp->proc_lagstart = ftParamProcPauseEffect;
    fp->proc_lagend = ftParamProcResumeEffect;

    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = fp->joints[nFTPartsJointTopN];

    dobj->rotate.vec.f.y = (ftGetStruct(fighter_gobj)->lr == nGMFacingR) ? F_CLC_DTOR32(30.0F) : F_CLC_DTOR32(210.0F);

    return effect_gobj;
}

// 0x80103418
GObj* efManagerDonkeyEntryTaruMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerDonkeyEntryTaruEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80103474
GObj* efManagerSamusEntryPointMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerSamusEntryPointEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x801034D0
void efManagerCaptainEntryCarProcUpdate(GObj *effect_gobj)
{
    DObj *dobj = DObjGetStruct(effect_gobj)->child;

    gcPlayAnimAll(effect_gobj);

    if (dobj->anim_frame <= 0.0F)
    {
        efManagerSetPrevStructAlloc(efGetStruct(effect_gobj));
        gcEjectGObj(effect_gobj);
    }
    else if (DObjGetStruct(effect_gobj)->rotate.vec.f.y == F_CLC_DTOR32(0.0F)) // This could mean trouble if the macro is changed... Need different zero literals
    {
        efManagerSortZNeg(dobj);
    }
    else efManagerSortZPos(dobj);
}

// 0x8010356C
GObj* efManagerCaptainEntryCarMakeEffect(Vec3f *pos, s32 lr)
{
    DObj *node_dobj;
    GObj *effect_gobj;
    DObj *dobj;
    s32 i;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerCaptainEntryCarEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    gcAddAnimJointAll(effect_gobj, gcGetDataFromFile(AObjEvent**, gFTDataCaptainSpecial2, &D_NF_00006200), 0.0F);

    node_dobj = dobj->child->child->child;

    for (i = nFTPartsJointCommonStart; i > 0; i--)
    {
        gcAddOMMtxForDObjFixed(node_dobj, nOMTransformRecalcRotRpyRSca, 0);

        gcAddDObjAnimJoint(node_dobj, gcGetDataFromFile(AObjEvent*, gFTDataCaptainSpecial2, &D_NF_00006518), 0.0F);

        node_dobj = node_dobj->sib_next;

        gcAddDObjAnimJoint(node_dobj, gcGetDataFromFile(AObjEvent*, gFTDataCaptainSpecial2, &D_NF_00006598), 0.0F);

        node_dobj = node_dobj->sib_next;
    }
    gcPlayAnimAll(effect_gobj);

    dobj->translate.vec.f = *pos;

    if (lr == nGMFacingL)
    {
        dobj->rotate.vec.f.y = F_CLC_DTOR32(180.0F);
    }
    if (DObjGetStruct(effect_gobj)->rotate.vec.f.y == F_CLC_DTOR32(0.0F))
    {
        efManagerSortZNeg(dobj->child);
    }
    else efManagerSortZPos(dobj->child);

    return effect_gobj;
}

// 0x801036EC
GObj* efManagerMarioEntryDokanMakeEffect(Vec3f *pos, s32 ft_kind)
{
    GObj *effect_gobj;
    DObj *dobj;

    switch (ft_kind)
    {
    case nFTKindMario:
        dEFManagerMarioEntryDokanEffectDesc.file_head = &gFTMarioFileSpecial2;
        break;

    case nFTKindLuigi:
        dEFManagerMarioEntryDokanEffectDesc.file_head = &gFTDataLuigiSpecial2;
        break;
    }
    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerMarioEntryDokanEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80103780
void efManagerFoxEntryArwingProcUpdate(GObj *effect_gobj)
{
    DObj *dobj = DObjGetStruct(effect_gobj)->child;

    gcPlayAnimAll(effect_gobj);

    if (dobj->anim_frame <= 0.0F)
    {
        efManagerSetPrevStructAlloc(efGetStruct(effect_gobj));
        gcEjectGObj(effect_gobj);
    }
    else efManagerSortZNeg(dobj);
}

// 0x801037EC
GObj* efManagerFoxEntryArwingMakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    DObj *dobj;
    DObj *what;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerFoxEntryArwingEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);
    what = dobj->child->child->child->sib_next->sib_next->sib_next->sib_next->sib_next->sib_next->child;

    gcAddOMMtxForDObjFixed(what, 0x2C, 0);
    gcAddDObjAnimJoint(what, gcGetDataFromFile(AObjEvent*, gFTDataFoxSpecial3, &D_NF_00002E74), 0.0F); // Linker thing

    if (lr == nGMFacingR)
    {
        lbCommonAddDObjAnimJointAll(dobj->child, (uintptr_t)gFTDataFoxSpecial2 + (intptr_t)&D_NF_000009E0, 0.0F); // Linker thing
    }
    else lbCommonAddDObjAnimJointAll(dobj->child, (uintptr_t)gFTDataFoxSpecial2 + (intptr_t)&D_NF_00000590, 0.0F); // Linker thing

    gcPlayAnimAll(effect_gobj);

    dobj->translate.vec.f = *pos;

    efManagerSortZNeg(dobj->child);

    return effect_gobj;
}

// 0x80103918
void func_ovl2_80103918(f32 arg0, f32 arg1, s32 arg2)
{
    arg0 *= 4.0F;
    arg1 *= 4.0F;

    lbParticleMakePosVel(gEFManagerParticleBankID | 0x18, arg2, arg0, arg1, 0.0F, 0.0F, 0.0F, 0.0F);
}

// 0x80103974
void func_ovl2_80103974(f32 arg0, f32 arg1)
{
    func_ovl2_80103918(arg0, arg1, 0x26);
}

// 0x80103994
void func_ovl2_80103994(f32 arg0, f32 arg1)
{
    func_ovl2_80103918(arg0, arg1, 0x75);
}

// 0x801039B4
void func_ovl2_801039B4(f32 arg0, f32 arg1)
{
    func_ovl2_80103918(arg0, arg1, 0x76);
}

// 0x801039D4
efParticle* efManagerMusicNoteMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID
    (
        gEFManagerParticleBankID | 8, 
        dEFManagerMusicNoteGenIDs[mtTrigGetRandomIntRange(ARRAY_COUNT(dEFManagerMusicNoteGenIDs))]
    );

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x80103A88
efParticle* efManagerYoshiEggExplodeMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gFTDataYoshiParticleBankID, 3);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x80103B28
void efManagerCaptureKirbyStarProcUpdate(GObj *effect_gobj)
{
    DObj *topn_dobj;
    efStruct *ep;
    ftStruct *fp;
    ftKirbyCopy *copy_data;
    Vec3f pos;
    DObj *child_dobj;

    ep = efGetStruct(effect_gobj);
    fp = ftGetStruct(ep->fighter_gobj);
    topn_dobj = DObjGetStruct(effect_gobj);

    copy_data = (ftKirbyCopy*) ((uintptr_t)gFTDataKirbyMainMotion + (intptr_t)&lFTKirbySpecialNCopyData);

    child_dobj = topn_dobj->child;

    topn_dobj->translate.vec.f.z = 0.0F;

    child_dobj->rotate.vec.f.z += EFPART_CAPTUREKIRBYSTAR_ROTATE_STEP;

    if (ep->effect_vars.capture_kirby_star.effect_timer % EFPART_CAPTUREKIRBYSTAR_SPARK_TIMER_MOD)
    {
        pos = DObjGetStruct(ep->fighter_gobj)->translate.vec.f;

        pos.y += mtTrigGetRandomIntRange(copy_data[fp->ft_kind].effect_scale * EFPART_CAPTUREKIRBYSTAR_SPARK_SCATTER_Y);

        if (fp->phys_info.vel_air.x > 0.0F)
        {
            pos.x -= mtTrigGetRandomIntRange(copy_data[fp->ft_kind].effect_scale * EFPART_CAPTUREKIRBYSTAR_SPARK_SCATTER_X);
            efManagerStarRodSparkMakeEffect(&pos, nGMFacingL);
        }
        else
        {
            pos.x += mtTrigGetRandomIntRange(copy_data[fp->ft_kind].effect_scale * EFPART_CAPTUREKIRBYSTAR_SPARK_SCATTER_X);
            efManagerStarRodSparkMakeEffect(&pos, nGMFacingR);
        }
    }
    ep->effect_vars.capture_kirby_star.effect_timer++;
}

// 0x80103CF8
GObj* efManagerCaptureKirbyStarMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    void *addr;
    void **p_addr;
    DObj *dobj;
    ftKirbyCopy *copy_data;

    copy_data = (ftKirbyCopy*) ((uintptr_t)gFTDataKirbyMainMotion + (intptr_t)&lFTKirbySpecialNCopyData);

    dEFCaptureKirbyStarEffectDesc.file_head = &addr;

    p_addr = (void**) ((uintptr_t)gITManagerFileData + (intptr_t)&D_NF_000004D4);

    addr = ((uintptr_t)*p_addr - (intptr_t)&lEFManagerKirbyStarDObjSetup);

    effect_gobj = efManagerMakeEffectNoForce(&dEFCaptureKirbyStarEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f.y += EFPART_CAPTUREKIRBYSTAR_SPARK_OFF_Y;

    dobj->child->user_data.p = ftGetStruct(fighter_gobj)->joints[nFTPartsJointTopN];

    dobj->child->scale.vec.f.x = dobj->child->scale.vec.f.y = copy_data[ftGetStruct(fighter_gobj)->ft_kind].effect_scale;
    dobj->child->scale.vec.f.z = 1.0F;

    ep->effect_vars.capture_kirby_star.effect_timer = 0;

    return effect_gobj;
}

// 0x80103DF8
void efManagerLoseKirbyStarProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj)->child;
    Vec3f *translate = &dobj->translate.vec.f;

    dobj->rotate.vec.f.z += F_CLC_DTOR32(10.0F);

    dobj->translate.vec.f.x += ep->effect_vars.lose_kirby_star.vel.x;
    dobj->translate.vec.f.y += ep->effect_vars.lose_kirby_star.vel.y;

    ep->effect_vars.lose_kirby_star.vel.y -= EFPART_LOSEKIRBYSTAR_GRAVITY;

    if (ep->effect_vars.lose_kirby_star.vel.y < EFPART_LOSEKIRBYSTAR_TVEL)
    {
        ep->effect_vars.lose_kirby_star.vel.y = EFPART_LOSEKIRBYSTAR_TVEL;
    }
    if (ep->effect_vars.lose_kirby_star.lifetime-- <= 0)
    {
        func_800269C0_275C0(nSYAudioFGMKirbyStarPing1);
        efManagerStarSplashMakeEffect(translate, ep->effect_vars.lose_kirby_star.lr);
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);
    }
    else if
    (
        (gMPCollisionGroundData->map_bound_bottom > translate->y) ||
        (gMPCollisionGroundData->map_bound_right  < translate->x) ||
        (gMPCollisionGroundData->map_bound_left   > translate->x) ||
        (gMPCollisionGroundData->map_bound_top    < translate->y)
    )
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);
    }
}

// 0x80103F78
GObj* efManagerLoseKirbyStarMakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    void *aobj;
    void **p_aobj;
    DObj *dobj;

    dEFManagerLoseKirbyStarEffectDesc.file_head = &aobj;

    p_aobj = (void**)((uintptr_t)gITManagerFileData + (intptr_t)&D_NF_000004D4);

    aobj = ((uintptr_t)*p_aobj - (intptr_t)&lEFManagerKirbyStarDObjSetup);

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerLoseKirbyStarEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.lose_kirby_star.vel.x = ftGetStruct(fighter_gobj)->lr * EFPART_LOSEKIRBYSTAR_VEL_X;
    ep->effect_vars.lose_kirby_star.vel.y = EFPART_LOSEKIRBYSTAR_VEL_Y;

    ep->effect_vars.lose_kirby_star.lifetime = EFPART_LOSEKIRBYSTAR_LIFETIME;

    ep->effect_vars.lose_kirby_star.lr = ftGetStruct(fighter_gobj)->lr;

    dobj = DObjGetStruct(effect_gobj);
    dobj->translate.vec.f.y += EFPART_LOSEKIRBYSTAR_OFF_Y;

    dobj->child->translate.vec.f = DObjGetStruct(fighter_gobj)->translate.vec.f;

    return effect_gobj;
}

// 0x80104068
GObj* efManagerRebirthHaloMakeEffect(GObj *fighter_gobj, f32 scale)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj, *child;

    effect_gobj = efManagerMakeEffectForce(&dEFManagerRebirthHaloEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);
    dobj->user_data.p = ftGetStruct(fighter_gobj)->joints[nFTPartsJointTopN];

    child = DObjGetStruct(effect_gobj)->child;
    child->scale.vec.f.x = child->scale.vec.f.y = child->scale.vec.f.z = scale;

    return effect_gobj;
}

// 0x801040E0
efParticle* efManagerBattleScoreMakeEffect(Vec3f *pos, s32 score)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID | 0x18, (score > 0) ? 0x43 : 0x44);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm == NULL)
        {
            lbParticleEjectStruct(ptcl);

            return NULL;
        }
        lbParticleParseStructBytecode(ptcl);

        if (tfrm->users_num == 0)
        {
            return NULL;
        }
        tfrm->translate = *pos;

        tfrm->scale.y = 0.25F;
    }
    return ptcl;
}

// 0x801041A0
efParticle* efManagerEggBreakMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x54);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x80104240
void efManagerKirbyInhaleWindProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    efTransform *tfrm = ep->tfrm;

    tfrm->translate = DObjGetStruct(ep->fighter_gobj)->translate.vec.f;

    tfrm->translate.x += ftGetStruct(ep->fighter_gobj)->lr * 800.0F;
    tfrm->translate.y += 230.0F;
}

// 0x801042B4
efParticle* efManagerKirbyInhaleWindMakeEffect(GObj *fighter_gobj)
{
    efParticle *ptcl;
    efTransform *tfrm;
    GObj *effect_gobj;
    efStruct *ep;

    ep = efManagerGetEffectForce();

    if (ep == NULL)
    {
        return 0;
    }
    effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManagerSetPrevStructAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ptcl = lbParticleMakeDefaultID(gFTDataKirbyParticleBankID | 8, 0xC);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = DObjGetStruct(fighter_gobj)->translate.vec.f;

            tfrm->translate.x += ftGetStruct(fighter_gobj)->lr * 800.0F;
            tfrm->translate.y += 230.0F;

            tfrm->scale.x = 1.0F;
            tfrm->scale.y = 1.0F;
            tfrm->scale.z = 1.0F;

            tfrm->rotate.z = (ftGetStruct(fighter_gobj)->lr == nGMFacingL) ? F_CLC_DTOR32(90.0F) : F_CLC_DTOR32(-90.0F);

            effect_gobj->user_data.p = ep; // y u do dis again

            gcAddGObjProcess(effect_gobj, efManagerKirbyInhaleWindProcUpdate, nOMObjProcessKindProc, 3);

            ep->tfrm = ptcl->tfrm;

            ep->bank_id = ptcl->bank_id;

            ep->fighter_gobj = fighter_gobj;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x80104458
GObj* efManagerItemGetSwirlProcUpdate(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFManagerItemGetSwirlEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x801044B4
efParticle* efManagerItemSpawnSwirlMakeEffect(Vec3f *pos)
{
    efParticle *ptcl = lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x69);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}

// 0x80104554
efParticle* func_ovl2_80104554(Vec3f *pos, s32 arg1)
{
    efParticle *ptcl = (arg1 != 0) ? lbParticleMakeDefaultID(gEFManagerParticleBankID, 0x70) : lbParticleMakeDefaultID(gEFManagerParticleBankID | 0x20, 0x70);

    if (ptcl != NULL)
    {
        efTransform *tfrm = lbParticleAddTransformForParticle(ptcl, 1);

        if (tfrm != NULL)
        {
            lbParticleParseStructBytecode(ptcl);

            if (tfrm->users_num == 0)
            {
                return NULL;
            }
            tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ptcl = NULL;
        }
    }
    return ptcl;
}
