#include "effect.h"

#include <ft/fighter.h>
#include <it/item.h>
#include <wp/weapon.h>
#include <gr/ground.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

// Globals

extern void *gFTDataMarioExtra2;
extern void *gFTDataFoxExtra2;
extern void *gFTDataFoxExtra3;
extern void *gFTDataDonkeyExtra2;
extern void *gFTDataSamusExtra2;
extern void *gFTDataLuigiExtra2;
extern void *gFTDataLinkExtra2;
extern void *gFTDataYoshiModel;
extern void *gFTDataYoshiExtra2;
extern void *gFTDataYoshiExtra3;
extern  s32  gFTDataYoshiParticles;
extern void *gFTDataCaptainExtra2;
extern void *gFTDataCaptainExtra3;
extern void *gFTDataKirbyBattleMotion;
extern void *gFTDataKirbyExtra2;
extern  s32  gFTDataKirbyParticles;
extern void *gFTDataPikachuExtra2;
extern void *gFTDataPikachuExtra3;
extern void *gFTDataPurinExtra2;
extern void *gFTDataNessModel;
extern void *gFTDataNessExtra2;

extern ftYoshiEggDesc dFTYoshiEggHurtboxDesc[/* */];

// Reloc Data Manager File IDs

extern intptr_t D_NF_00000053;
extern intptr_t D_NF_00000054;
extern intptr_t D_NF_00000055;

// File offsets

extern intptr_t lFTKirbySpecialNCopyData;

extern intptr_t lEFShieldDObjSetup;                 // 0x00000300

extern intptr_t lEFYoshiShieldDObjSetup;            // 0x0000A860

extern intptr_t D_NF_00001850;
extern intptr_t D_NF_00001970;
extern intptr_t D_NF_00001AC0;
extern intptr_t D_NF_00001B10;

extern intptr_t D_NF_000004D4;
extern intptr_t lEFKirbyStarDObjSetup;       // 0x00005458

extern intptr_t lEFPikachuUnkMObjSub;               // 0x00000640
extern intptr_t lEFPikachuUnkDObjSetup;             // 0x00000800
extern intptr_t lEFPikachuUnkAnimJoint;             // 0x00000890
extern intptr_t lEFPikachuUnkMatAnimJoint;          // 0x00000900

extern intptr_t lEFThunderShockMObjSub;             // 0x000013A0
extern intptr_t lEFThunderShockDObjSetup;           // 0x00001640
extern intptr_t lEFThunderShockAnimJoint;           // 0x00001720
extern intptr_t lEFThunderShockMatAnimJoint;        // 0x00001A80

extern intptr_t lEFThunderTrailMObjSub;             // 0x00009420
extern intptr_t lEFThunderTrailDObjSetup;           // 0x000095B0

extern intptr_t lEFThunderJoltMObjSub;              // 0x000020A0
extern intptr_t lEFThunderJoltDObjSetup;            // 0x00002258
extern intptr_t lEFThunderJoltAnimJoint;            // 0x000022E0
extern intptr_t lEFThunderJoltMatAnimJoint;         // 0x00002350

extern intptr_t lEFVulcanJabDObjSetup;              // 0x00000B20

extern intptr_t lEFGrappleBeamMObjSub;              // 0x00000210
extern intptr_t lEFGrappleBeamDObjSetup;            // 0x00000380
extern intptr_t lEFGrappleBeamAnimJoint;            // 0x00000410
extern intptr_t lEFGrappleBeamMatAnimJoint;         // 0x00000480

extern intptr_t lEFFalconKickMObjSub;               // 0x00000960
extern intptr_t lEFFalconKickDObjSetup;             // 0x00000B08
extern intptr_t lEFFalconKickAnimJoint;             // 0x00000B90
extern intptr_t lEFFalconKickMatAnimJoint;          // 0x00000C00

extern intptr_t lEFFalconPunchMObjSub;              // 0x00000690
extern intptr_t lEFFalconPunchDObjSetup;            // 0x00000760
extern intptr_t lEFFalconPunchMatAnimJoint;         // 0x00000830

extern intptr_t lEFPurinSingMObjSub;                // 0x00001C20
extern intptr_t lEFPurinSingDObjSetup;              // 0x00002130
extern intptr_t lEFPurinSingAnimJoint;              // 0x00002270
extern intptr_t lEFPurinSingMatAnimJoint;           // 0x00002D70

extern intptr_t lEFDeadExplodeDefaultMObjSub;       // 0x00004F08
extern intptr_t lEFDeadExplodeDefaultDObjSetup;     // 0x000053E8
extern intptr_t lEFDeadExplodeDefaultAnimJoint;     // 0x000054D0
extern intptr_t lEFDeadExplodeDefaultMatAnimJoint;  // 0x00005870

extern intptr_t lEFDeadExplode1PMatAnimJoint;       // 0x000058E0
extern intptr_t lEFDeadExplode2PMatAnimJoint;       // 0x00005800
extern intptr_t lEFDeadExplode3PMatAnimJoint;       // 0x00005950
extern intptr_t lEFDeadExplode4PMatAnimJoint;       // 0x00005870

extern intptr_t lEFFinalCutterUpDObjSetup;          // 0x000012E8
extern intptr_t lEFFinalCutterUpAnimJoint;          // 0x00001470

extern intptr_t lEFFinalCutterDownDObjSetup;        // 0x00002390
extern intptr_t lEFFinalCutterDownAnimJoint;        // 0x000024D0

extern intptr_t lEFFinalCutterDrawDObjSetup;        // 0x00002888

extern intptr_t lEFFinalCutterTrailDObjSetup;       // 0x00000DF8
extern intptr_t lEFFinalCutterTrailAnimJoint;       // 0x000013F0

extern intptr_t lEFPsychicMagnetMObjSub;            // 0x00000810
extern intptr_t lEFPsychicMagnetDObjSetup;          // 0x000009A8
extern intptr_t lEFPsychicMagnetAnimJoint;          // 0x00000A30
extern intptr_t lEFPsychicMagnetMatAnimJoint;       // 0x00000AD0

extern intptr_t lEFPKThunderTrailDObjSetup;         // 0x00009050

extern intptr_t lEFPKThunderWaveMObjSub;            // 0x00009870
extern intptr_t lEFPKThunderWaveDObjSetup;          // 0x00009A10
extern intptr_t lEFPKThunderWaveAnimJoint;          // 0x00009AC0
extern intptr_t lEFPKThunderWaveMatAnimJoint;       // 0x00009BB0

extern intptr_t lEFLinkEntryWaveMObjSub;            // 0x00000130
extern intptr_t lEFLinkEntryWaveDObjSetup;          // 0x000003F8
extern intptr_t lEFLinkEntryWaveAnimJoint;          // 0x00000840
extern intptr_t lEFLinkEntryWaveMatAnimJoint;       // 0x00000B90

extern intptr_t lEFLinkEntryBeamMObjSub;            // 0x000004F0
extern intptr_t lEFLinkEntryBeamDObjSetup;          // 0x000007B8
extern intptr_t lEFLinkEntryBeamAnimJoint;          // 0x00000B60
extern intptr_t lEFLinkEntryBeamMatAnimJoint;       // 0x00000BF0

extern intptr_t lEFKirbyEntryStarDObjSetup;         // 0x00001DA8
extern intptr_t lEFKirbyEntryStarLAnimJoint;        // 0x00001E30
extern intptr_t lEFKirbyEntryStarRAnimJoint;        // 0x00001EA0

extern intptr_t lEFMBallRaysMObjSub;                // 0x00000108
extern intptr_t lEFMBallRaysDObjSetup;              // 0x00000628
extern intptr_t lEFMBallRaysAnimJoint;              // 0x00000710
extern intptr_t lEFMBallRaysMatAnimJoint;           // 0x00000860

extern intptr_t lEFMBallThrownFileHead;             // 0x000006E4
extern intptr_t lEFMBallThrownMObjSub;              // 0x00009120
extern intptr_t lEFMBallThrownDObjSetup;            // 0x00009430
extern intptr_t lEFMBallThrownLAnimJoint;           // 0x000095E0
extern intptr_t lEFMBallThrownRAnimJoint;           // 0x00009690
extern intptr_t lEFMBallThrownLMatAnimJoint;        // 0x00009740
extern intptr_t lEFMBallThrownRMatAnimJoint;        // 0x00009810

extern intptr_t lEFYoshiEntryEggMObjSub;            // 0x00000460
extern intptr_t lEFYoshiEntryEggDObjSetup;          // 0x00000530
extern intptr_t lEFYoshiEntryEggAnimJoint;          // 0x00000600
extern intptr_t lEFYoshiEntryEggMatAnimJoint;       // 0x00000780

extern intptr_t lEFYoshiEggLayDObjSetup;            // 0x00000960
extern intptr_t lEFYoshiEggLayBreakAnimJoint;       // 0x000009F0
extern intptr_t lEFYoshiEggLayThrowAnimJoint;       // 0x00000B90
extern intptr_t lEFYoshiEggLayWaitAnimJoint;        // 0x00000DB0

extern intptr_t lEFSpinAttackMObjSub;               // 0x00001038
extern intptr_t lEFSpinAttackDObjSetup;             // 0x000011C0
extern intptr_t lEFSpinAttackAnimJoint;             // 0x00001250
extern intptr_t lEFSpinAttackMatAnimJoint;          // 0x000012F0

extern intptr_t lEFDonkeyEntryTaruDObjSetup;        // 0x000007C8
extern intptr_t lEFDonkeyEntryTaruAnimJoint;        // 0x00000850

extern intptr_t lEFSamusEntryPointDObjSetup;        // 0x00000B90
extern intptr_t lEFSamusEntryPointAnimJoint;        // 0x00000C20

extern intptr_t lEFCaptainEntryCarDObjSetup;        // 0x00005FC0

extern intptr_t lEFMarioEntryDokanDObjSetup;        // 0x00000608
extern intptr_t lEFMarioEntryDokanAnimJoint;        // 0x000006C0

extern intptr_t lEFFoxEntryArwingDObjSetup;         // 0x00002C30
extern intptr_t D_NF_00000590;                      // 0x00000590
extern intptr_t D_NF_000009E0;                      // 0x000009E0
extern intptr_t D_NF_00002E74;                      // 0x00002E74

extern intptr_t lEFRebirthHaloDObjSetup;            // 0x00002AC0
extern intptr_t lEFRebirthHaloAnimJoint;            // 0x00002B70

extern intptr_t lEFItemGetSwirlMObjSub;             // 0x00002CA8
extern intptr_t lEFItemGetSwirlDObjSetup;           // 0x00003170
extern intptr_t lEFItemGetSwirlAnimJoint;           // 0x000032B0
extern intptr_t lEFItemGetSwirlMatAnimJoint;        // 0x00003490

extern intptr_t lEFReflectBreakMObjSub;             // 0x00002F78
extern intptr_t lEFReflectBreakDObjSetup;           // 0x00003398
extern intptr_t lEFReflectBreakAnimJoint;           // 0x000034A0
extern intptr_t lEFReflectBreakMatAnimJoint;        // 0x000035A0

extern intptr_t lEFCatchSwirlMObjSub;               // 0x000022B8
extern intptr_t lEFCatchSwirlDObjSetup;             // 0x00002760
extern intptr_t lEFCatchSwirlAnimJoint;             // 0x000028A0
extern intptr_t lEFCatchSwirlMatAnimJoint;          // 0x00002AB0

extern intptr_t lEFReflectorDObjSetup;              // 0x000002B0
extern intptr_t lEFReflectorAnimJointStart;         // 0x00000340
extern intptr_t lEFReflectorAnimJointHit;           // 0x000003A0
extern intptr_t lEFReflectorAnimJointEnd;           // 0x00000430
extern intptr_t lEFReflectorAnimJointLoop;          // 0x000004C0

extern intptr_t lEFFireSparkMObjSub;                // 0x00001EA0
extern intptr_t lEFFireSparkDObjSetup;              // 0x00002040
extern intptr_t lEFFireSparkAnimJoint;              // 0x000020D0
extern intptr_t lEFFireSparkMatAnimJoint;           // 0x00002170

extern intptr_t lEFDamageSlashMObjSub;              // 0x000073E0
extern intptr_t lEFDamageSlashDObjSetup;            // 0x00007750
extern intptr_t lEFDamageSlashAnimJoint;            // 0x00007800
extern intptr_t lEFDamageSlashMatAnimJoint;         // 0x00007860

extern intptr_t lEFShockSmallMObjSub;               // 0x00001428
extern intptr_t lEFShockSmallDObjSetup;             // 0x00001500
extern intptr_t lEFShockSmallMatAnimJoint;          // 0x00001570

extern intptr_t lEFDamageFlyOrbsDObjSetup;          // 0x00007E80
extern intptr_t lEFDamageFlyOrbsAnimJoint;          // 0x00007F40
    
extern intptr_t lEFImpactWaveMObjSub;               // 0x00007A80
extern intptr_t lEFImpactWaveDObjSetup;             // 0x00007C28
extern intptr_t lEFImpactWaveAnimJoint;             // 0x00007D40
extern intptr_t lEFImpactWaveMatAnimJoint;          // 0x00007DA0

extern intptr_t lEFCommonSparkMObjSub;              // 0x00008EC0
extern intptr_t lEFCommonSparkDObjSetup;            // 0x00008FA0
extern intptr_t lEFCommonSparkAnimJoint;            // 0x00009050
extern intptr_t lEFCommonSparkMatAnimJoint;         // 0x000090C0

extern intptr_t lEFDamageFlyMDustMObjSub;           // 0x0000C978
extern intptr_t lEFDamageFlyMDustDObjSetup;         // 0x0000CAC8
extern intptr_t lEFDamageFlyMDustAnimJoint;         // 0x0000CAE0
extern intptr_t lEFDamageFlyMDustMatAnimJoint;      // 0x0000CB40

extern intptr_t D_NF_00006200;                      // 0x00006200
extern intptr_t D_NF_00006518;                      // 0x00006518
extern intptr_t D_NF_00006598;                      // 0x00006598

extern intptr_t D_NF_0000CBC0;                      // 0x0000CBC0
extern intptr_t D_NF_0000CC20;                      // 0x0000CC20
extern intptr_t D_NF_0000CCF0;                      // 0x0000CCF0
extern intptr_t D_NF_0000CDC0;                      // 0x0000CDC0

extern intptr_t lEFPKFlashMObjSub;                  // 0x00006B40
extern intptr_t lEFPKFlashDObjSetup;                // 0x00006D00
extern intptr_t lEFPKFlashAnimJoint;                // 0x00006D90
extern intptr_t lEFPKFlashMatAnimJoint;             // 0x00006E20

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801313B0
void *sEFTexturesFile1;

// 0x801313B4
void *sEFTexturesFile2;

// 0x801313B8
void *sEFTexturesFile3;

// 0x801313BC
efStruct *sEFStructsAllocFree;

// 0x801313C0
s32 sEFStructsNumFree;

// 0x801313C4
s32 sEFParticleBankID;

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012DE80
f32 dEFDamageSpawnSparksAngles[/* */] = { 18.0F, 0.0F - 18.0F };

// 0x8012DE8C
f32 dEFDamageSpawnMDustAngles[/* */] = { 18.0F, 0.0F, -18.0F };

// 0x8012DE98
u8 dEFDamageNormalHeavyPrimColorR[/* */] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }; // Last 3 zeroes are padding?

// 0x8012DEA0
u8 dEFDamageNormalHeavyPrimColorG[/* */] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };

// 0x8012DEA8
u8 dEFDamageNormalHeavyPrimColorB[/* */] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };

// 0x8012DEB0
u8 dEFDamageNormalHeavyEnvColorR[/* */] = { 0xFF, 0x00, 0x00, 0x78, 0xFF };

// 0x8012DEB8
u8 dEFDamageNormalHeavyEnvColorG[/* */] = { 0x00, 0xFF, 0x00, 0x78, 0xFF };

// 0x8012DEC0
u8 dEFDamageNormalHeavyEnvColorB[/* */] = { 0x00, 0x00, 0xFF, 0x78, 0xFF };

// 0x8012DEC8
u8 dEFImpactWavePrimColorR[/* */] = { 0xFF, 0x00, 0x00, 0xFF, 0xFF };

// 0x8012DED0
u8 dEFImpactWavePrimColorG[/* */] = { 0x00, 0xFF, 0x00, 0xFF, 0xFF };

// 0x8012DED8
u8 dEFImpactWavePrimColorB[/* */] = { 0x00, 0x00, 0xFF, 0x00, 0xFF };

// 0x8012DEE0
u8 dEFImpactWaveEnvColorR[/* */] = { 0x00, 0x00, 0x00, 0x00, 0x00 };

// 0x8012DEE8
u8 dEFImpactWaveEnvColorG[/* */] = { 0x00, 0x00, 0x00, 0x00, 0x00 };

// 0x8012DEF0
u8 dEFImpactWaveEnvColorB[/* */] = { 0x00, 0x00, 0x00, 0x00, 0x00 };

// 0x8012DEF8
u8 dEFDeadExplodeEnvColorSiblingR[/* */] = { 0xFF, 0x00, 0xFF, 0x00 };

// 0x8012DEFC
u8 dEFDeadExplodeEnvColorSiblingG[/* */] = { 0x62, 0x7E, 0xFF, 0xFF };

// 0x8012DF00
u8 dEFDeadExplodeEnvColorSiblingB[/* */] = { 0x4B, 0xFF, 0x00, 0x00 };

// 0x8012DF04
u8 dEFDeadExplodeEnvColorChildR[/* */] = { 0xA6, 0x1F, 0x3E, 0xFB };

// 0x8012DF08
u8 dEFDeadExplodeEnvColorChildG[/* */] = { 0x62, 0xFF, 0x6D, 0x66 };

// 0x8012DF0C
u8 dEFDeadExplodeEnvColorChildB[/* */] = { 0x21, 0xA1, 0xFF, 0xC7 };

// 0x8012DF10
f32 dEFDeadExplodeRotateD[/* */] = { 0.0F, 90.0F, 180.0F, 270.0F };

// 0x8012DF20
u8 D_ovl2_8012DF20[/* */] = { 0x49, 0x4A, 0x4B, 0x4C };

// 0x8012DF24
efCreateDesc dEFDamageSlashEffectDesc = 
{
    0x4 | 0x1,                              // Flags
    18,                                     // DL Link
    &sEFTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        0x45,                               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations  
        OMMtx_Transform_TraRotRpyRSca,      // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFDamageSlashDObjSetup,               // DObj Setup attributes offset (?)
    &lEFDamageSlashMObjSub,                 // MObjSub offset
    &lEFDamageSlashAnimJoint,               // AnimJoint offset
    &lEFDamageSlashMatAnimJoint             // MatAnimJoint offset
};

// 0x8012DF4C
efCreateDesc dEFShockSmallEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    18,                                     // DL Link
    &sEFTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        0x45,                               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efCommonVelAddDestroyAnimEnd,           // Proc Update
    func_ovl0_800CB4B0,                     // Proc Render

    &lEFShockSmallDObjSetup,                // DObj Setup attributes offset (?)
    &lEFShockSmallMObjSub,                  // MObjSub offset
    0x0,                                    // AnimJoint offset
    &lEFShockSmallMatAnimJoint              // MatAnimJoint offset
};

// 0x8012DF74
efCreateDesc dEFDamageFlyOrbsEffectDesc =
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &sEFTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        OMMtx_Transform_Sca,                // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations  
        OMMtx_Transform_Sca,                // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_DamageFlyOrbs_ProcUpdate,    // Proc Update
    func_ovl0_800CB4B0,                     // Proc Render

    &lEFDamageFlyOrbsDObjSetup,             // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFDamageFlyOrbsAnimJoint,             // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012DF9C
efCreateDesc dEFDamageSpawnOrbsEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    0,                                      // DL Link
    &sEFTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_Null,               // Main matrix transformations   
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_DamageSpawnOrbs_ProcUpdate,  // Proc Update
    NULL,                                   // Proc Render

    0x0,                                    // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012DFC4
efCreateDesc dEFImpactWaveEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    10,                                     // DL Link
    &sEFTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations   
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_ImpactWave_ProcUpdate,       // Proc Update
    efParticle_ImpactWave_ProcRender,       // Proc Render

    &lEFImpactWaveDObjSetup,                // DObj Setup attributes offset (?)
    &lEFImpactWaveMObjSub,                  // MObjSub offset
    &lEFImpactWaveAnimJoint,                // AnimJoint offset
    &lEFImpactWaveMatAnimJoint              // MatAnimJoint offset
};

// 0x8012DFEC
efCreateDesc dEFStarRodSparkEffectDesc =
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &sEFTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        0x45,                               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x45,                               // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_StarRodSpark_ProcUpdate,     // Proc Update
    func_ovl0_800CB4B0,                     // Proc Render

    &lEFCommonSparkDObjSetup,              // DObj Setup attributes offset (?)
    &lEFCommonSparkMObjSub,                // MObjSub offset
    &lEFCommonSparkAnimJoint,              // AnimJoint offset
    &lEFCommonSparkMatAnimJoint            // MatAnimJoint offset
};

// 0x8012E014
efCreateDesc dEFDamageFlySparksEffectDesc =
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &sEFTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        OMMtx_Transform_RotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x45,                               // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_DamageFlySparks_ProcUpdate,  // Proc Update
    func_ovl0_800CB4B0,                     // Proc Render

    &lEFCommonSparkDObjSetup,              // DObj Setup attributes offset (?)
    &lEFCommonSparkMObjSub,                // MObjSub offset
    &lEFCommonSparkAnimJoint,              // AnimJoint offset
    &lEFCommonSparkMatAnimJoint            // MatAnimJoint offset
};

// 0x8012E03C
efCreateDesc dEFDamageSpawnSparksEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    0,                                      // DL Link
    &sEFTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_Null,               // Main matrix transformations   
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_DamageSpawnSparks_ProcUpdate,// Proc Update
    NULL,                                   // Proc Render

    0x0,                                    // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E064
efCreateDesc dEFDamageFlyMDustEffectDesc = 
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &sEFTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        OMMtx_Transform_RotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x44,                               // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_DamageFlySparks_ProcUpdate,  // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFDamageFlyMDustDObjSetup,            // DObj Setup attributes offset (?)
    &lEFDamageFlyMDustMObjSub,              // MObjSub offset
    &lEFDamageFlyMDustAnimJoint,            // AnimJoint offset
    &lEFDamageFlyMDustMatAnimJoint          // MatAnimJoint offset
};

// 0x8012E08C
efCreateDesc dEFDamageSpawnMDustEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    0,                                      // DL Link
    &sEFTexturesFile1,                      // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_Null,               // Main matrix transformations   
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_DamageSpawnMDust_ProcUpdate, // Proc Update
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
    &sEFTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations   
        0x49,                               // Secondary matrix transformations
        0x12                                // ???
    },

    // DObj transformation struct 2
    {
        0x45,                               // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    func_ovl0_800CB4B0,                     // Proc Render

    &lEFFireSparkDObjSetup,                 // DObj Setup attributes offset (?)
    &lEFFireSparkMObjSub,                   // MObjSub offset
    &lEFFireSparkAnimJoint,                 // AnimJoint offset
    &lEFFireSparkMatAnimJoint               // MatAnimJoint offset
};

// 0x8012E0DC
intptr_t dEFReflectorAnimJointOffsets[/* */] = 
{ 
    &lEFReflectorAnimJointStart, 
    &lEFReflectorAnimJointLoop, 
    &lEFReflectorAnimJointHit, 
    &lEFReflectorAnimJointEnd 
};

// 0x8012E0EC
efCreateDesc dEFReflectorEffectDesc = 
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataFoxExtra2,                      // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations   
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Tra,                // Main matrix transformations  
        0x2C,                               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_Reflector_ProcUpdate,        // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFReflectorDObjSetup,                 // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFReflectorAnimJointLoop,             // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E114
gsColorRGBPair dEFShieldColors[/* */] =
{
    { { 0xFF, 0xFF, 0xFF }, { 0xFF, 0x00, 0x00 } }, // Player 1
    { { 0xFF, 0xFF, 0xFF }, { 0x00, 0xFF, 0x00 } }, // Player 2
    { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0xFF } }, // Player 3
    { { 0xFF, 0xFF, 0xFF }, { 0x00, 0x00, 0x00 } }, // Player 4 / CPU
    { { 0xFF, 0xFF, 0xFF }, { 0xC0, 0xC0, 0xC0 } }  // Shield Damage
};

// 0x8012E134
efCreateDesc dEFShieldEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTCommonFile,                         // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations   
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x2C,                               // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efShieldProcUpdate,                     // Proc Update
    efShieldProcRender,                     // Proc Render

    &lEFShieldDObjSetup,                    // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E15C
efCreateDesc dEFYoshiShieldEffectDesc =
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
        OMMtx_Transform_Null,               // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efShieldProcUpdate,                     // Proc Update
    efYoshiShieldProcRender,                // Proc Render

    &lEFYoshiShieldDObjSetup,               // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E184
efCreateDesc dEFCatchSwirlEffectDesc = 
{
    0x4 | 0x1,                              // Flags
    18,                                     // DL Link
    &sEFTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFCatchSwirlDObjSetup,                // DObj Setup attributes offset (?)
    &lEFCatchSwirlMObjSub,                  // MObjSub offset
    &lEFCatchSwirlAnimJoint,                // AnimJoint offset
    &lEFCatchSwirlMatAnimJoint              // MatAnimJoint offset
};

// 0x8012E1AC
efCreateDesc dEFReflectBreakEffectDesc =
{
    0x4 | 0x1,                              // Flags
    18,                                     // DL Link
    &sEFTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        OMMtx_Transform_RotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFReflectBreakDObjSetup,              // DObj Setup attributes offset (?)
    &lEFReflectBreakMObjSub,                // MObjSub offset
    &lEFReflectBreakAnimJoint,              // AnimJoint offset
    &lEFReflectBreakMatAnimJoint            // MatAnimJoint offset
};

// 0x8012E1D4
efCreateDesc dEFPikachuUnkEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
    15,                                     // DL Link
    &gFTDataPikachuExtra2,                  // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations   
        OMMtx_Transform_RotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_ovl2_801017E8,                     // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFPikachuUnkDObjSetup,                // DObj Setup attributes offset (?)
    &lEFPikachuUnkMObjSub,                  // MObjSub offset
    &lEFPikachuUnkAnimJoint,                // AnimJoint offset
    &lEFPikachuUnkMatAnimJoint              // MatAnimJoint offset
};

// 0x8012E1FC
efCreateDesc dEFThunderShockEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataPikachuExtra2,                  // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations   
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations  
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFThunderShockDObjSetup,              // DObj Setup attributes offset (?)
    &lEFThunderShockMObjSub,                // MObjSub offset
    &lEFThunderShockAnimJoint,              // AnimJoint offset
    &lEFThunderShockMatAnimJoint            // MatAnimJoint offset
};

// 0x8012E224
efCreateDesc dEFThunderTrailEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    15,                                     // DL Link
    &sEFTexturesFile3,                      // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_ThunderTrail_ProcUpdate,     // Proc Update
    efParticle_ThunderTrail_ProcRender,     // Proc Render

    &lEFThunderTrailDObjSetup,              // DObj Setup attributes offset (?)
    &lEFThunderTrailMObjSub,                // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E24C
efCreateDesc dEFThunderJoltEffectDesc =
{
    0x4,                                    // Flags
    15,                                     // DL Link
    &gFTDataPikachuExtra3,                  // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFThunderJoltDObjSetup,               // DObj Setup attributes offset (?)
    &lEFThunderJoltMObjSub,                 // MObjSub offset
    &lEFThunderJoltAnimJoint,               // AnimJoint offset
    &lEFThunderJoltMatAnimJoint             // MatAnimJoint offset
};

// 0x8012E274
efCreateDesc dEFVulcanJabEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
    15,                                     // DL Link
    &gFTDataSamusExtra2,                    // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_RotRpyR,            // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_VulcanJab_ProcUpdate,        // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFVulcanJabDObjSetup,                 // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E29C
efCreateDesc dEFGrappleBeamEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataSamusExtra2,                    // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x2E,                               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_8000DF34,                          // Proc Update (WHAT IS THIS FUNCTION???)
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFGrappleBeamDObjSetup,               // DObj Setup attributes offset (?)
    &lEFGrappleBeamMObjSub,                 // MObjSub offset
    &lEFGrappleBeamAnimJoint,               // AnimJoint offset
    &lEFGrappleBeamMatAnimJoint             // MatAnimJoint offset
};

// 0x8012E2C4
efCreateDesc dEFFalconKickEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataCaptainExtra2,                  // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        OMMtx_Transform_RotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_ovl2_800FD5D8,                     // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFFalconKickDObjSetup,                // DObj Setup attributes offset (?)
    &lEFFalconKickMObjSub,                  // MObjSub offset
    &lEFFalconKickAnimJoint,                // AnimJoint offset
    &lEFFalconKickMatAnimJoint              // MatAnimJoint offset
};

// 0x8012E2EC
efCreateDesc dEFFalconPunchEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    15,                                     // DL Link
    &gFTDataCaptainExtra3,                  // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        OMMtx_Transform_RotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_ovl2_800FD5D8,                     // Proc Update
    func_ovl0_800CB4B0,                     // Proc Render

    &lEFFalconPunchDObjSetup,               // DObj Setup attributes offset (?)
    &lEFFalconPunchMObjSub,                 // MObjSub offset
    0x0,                                    // AnimJoint offset
    &lEFFalconPunchMatAnimJoint             // MatAnimJoint offset
};

// 0x8012E314
efCreateDesc dEFPurinSingEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataCaptainExtra3,                  // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_ovl2_800FD5D8,                     // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFPurinSingDObjSetup,                 // DObj Setup attributes offset (?)
    &lEFPurinSingMObjSub,                   // MObjSub offset
    &lEFPurinSingAnimJoint,                 // AnimJoint offset
    &lEFPurinSingMatAnimJoint               // MatAnimJoint offset
};

// 0x8012E33C
efCreateDesc dEFDeadExplodeEffectDesc =
{
    EFFECT_FLAG_SPECIALLINK | 
    EFFECT_FLAG_USERDATA,                   // Flags
    18,                                     // DL Link
    &sEFTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_ovl2_800FD5D8,                     // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFDeadExplodeDefaultDObjSetup,        // DObj Setup attributes offset (?)
    &lEFDeadExplodeDefaultMObjSub,          // MObjSub offset
    &lEFDeadExplodeDefaultAnimJoint,        // AnimJoint offset
    &lEFDeadExplodeDefaultMatAnimJoint      // MatAnimJoint offset
};

// 0x8012E364
u8 dEFDeadExplodeGenID[/* */] = { 0x2D, 0x2C, 0x2B, 0x2A, 0x3F, 0x3E, 0x3D, 0x3C };

// 0x8012E36C
intptr_t dEFDeadExplodeMatAnimJoints[/* */] =
{
    &lEFDeadExplode1PMatAnimJoint,
    &lEFDeadExplode2PMatAnimJoint,
    &lEFDeadExplode3PMatAnimJoint,
    &lEFDeadExplode4PMatAnimJoint
};

// 0x8012E37C
efCreateDesc dEFFinalCutterUpEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataKirbyExtra2,                    // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        OMMtx_Transform_RotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_ovl2_800FD5D8,                     // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFFinalCutterUpDObjSetup,             // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFFinalCutterUpAnimJoint,             // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E3A4
efCreateDesc dEFFinalCutterDownEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataKirbyExtra2,                    // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        OMMtx_Transform_RotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_ovl2_800FD5D8,                     // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFFinalCutterDownDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFFinalCutterDownAnimJoint,           // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E3CC
efCreateDesc dEFFinalCutterDrawEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataKirbyExtra2,                    // Texture file

    // DObj transformation struct 1
    {
        0x4F,                               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_ovl2_800FD5D8,                     // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFFinalCutterDrawDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E3F4
efCreateDesc dEFFinalCutterTrailEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataKirbyExtra2,                    // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        OMMtx_Transform_RotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_ovl2_800FD5D8,                     // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFFinalCutterTrailDObjSetup,          // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFFinalCutterTrailAnimJoint,          // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E41C
efCreateDesc dEFPsychicMagnetEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataNessExtra2,                     // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        0x2E,                               // Secondary matrix transformations
        0x00                                // ???
    },

    func_8000DF34,                          // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFPsychicMagnetDObjSetup,             // DObj Setup attributes offset (?)
    &lEFPsychicMagnetMObjSub,               // MObjSub offset
    &lEFPsychicMagnetAnimJoint,             // AnimJoint offset
    &lEFPsychicMagnetMatAnimJoint           // MatAnimJoint offset
};

// 0x8012E444
efCreateDesc dEFPKThunderTrailEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    15,                                     // DL Link
    &gFTDataNessModel,                      // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_PKThunderTrail_ProcUpdate,   // Proc Update
    efParticle_PKThunderTrail_ProcRender,   // Proc Render

    &lEFPKThunderTrailDObjSetup,            // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E46C
efCreateDesc dEFPKReflectTrailEffectDesc =
{
    EFFECT_FLAG_USERDATA,                   // Flags
    18,                                     // DL Link
    &gFTDataNessModel,                      // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_PKReflectTrail_ProcUpdate,   // Proc Update
    efParticle_PKThunderTrail_ProcRender,   // Proc Render

    &lEFPKThunderTrailDObjSetup,            // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E494
efCreateDesc dEFPKThunderWaveEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataNessModel,                      // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        OMMtx_Transform_RotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        0x2E,                               // Secondary matrix transformations
        0x00                                // ???
    },

    func_8000DF34,                          // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFPKThunderWaveDObjSetup,             // DObj Setup attributes offset (?)
    &lEFPKThunderWaveMObjSub,               // MObjSub offset
    &lEFPKThunderWaveAnimJoint,             // AnimJoint offset
    &lEFPKThunderWaveMatAnimJoint           // MatAnimJoint offset
};

// 0x8012E4BC
efCreateDesc dEFPKFlashEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    18,                                     // DL Link
    &sEFTexturesFile2,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFPKFlashDObjSetup,                   // DObj Setup attributes offset (?)
    &lEFPKFlashMObjSub,                     // MObjSub offset
    &lEFPKFlashAnimJoint,                   // AnimJoint offset
    &lEFPKFlashMatAnimJoint                 // MatAnimJoint offset
};

// 0x8012E4E4
efCreateDesc dEFLinkEntryWaveEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &gFTDataLinkExtra2,                     // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_8000DF34,                          // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFLinkEntryWaveDObjSetup,             // DObj Setup attributes offset (?)
    &lEFLinkEntryWaveMObjSub,               // MObjSub offset
    &lEFLinkEntryWaveAnimJoint,             // AnimJoint offset
    &lEFLinkEntryWaveMatAnimJoint           // MatAnimJoint offset
};

// 0x8012E50C
efCreateDesc dEFLinkEntryBeamEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &gFTDataLinkExtra2,                     // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    func_8000DF34,                          // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFLinkEntryBeamDObjSetup,             // DObj Setup attributes offset (?)
    &lEFLinkEntryBeamMObjSub,               // MObjSub offset
    &lEFLinkEntryBeamAnimJoint,             // AnimJoint offset
    &lEFLinkEntryBeamMatAnimJoint           // MatAnimJoint offset
};

// 0x8012E534
efCreateDesc dEFKirbyEntryStarEffectDesc =
{
    0x4 | 0x1,                              // Flags
    10,                                     // DL Link
    &gFTDataKirbyExtra2,                    // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFKirbyEntryStarDObjSetup,            // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFKirbyEntryStarLAnimJoint,           // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E55C
efCreateDesc dEFMBallRaysEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &sEFTexturesFile3,                      // Texture file

    // DObj transformation struct 1
    {
        0x44,                               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFMBallRaysDObjSetup,                 // DObj Setup attributes offset (?)
    &lEFMBallRaysMObjSub,                   // MObjSub offset
    &lEFMBallRaysAnimJoint,                 // AnimJoint offset
    &lEFMBallRaysMatAnimJoint               // MatAnimJoint offset
};

// 0x8012E584
efCreateDesc dEFMBallThrownEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    20,                                     // DL Link
    &gITFileData,                           // Texture file

    // DObj transformation struct 1
    {
        0x44,                               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efMBallThrownProcUpdate,                // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFMBallThrownDObjSetup,               // DObj Setup attributes offset (?)
    &lEFMBallThrownMObjSub,                 // MObjSub offset
    &lEFMBallThrownLAnimJoint,              // AnimJoint offset
    &lEFMBallThrownLMatAnimJoint            // MatAnimJoint offset
};

// 0x8012E5AC
efCreateDesc dEFYoshiEntryEggEffectDesc =
{
    0x1,                                    // Flags
    10,                                     // DL Link
    &gFTDataYoshiExtra2,                    // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    func_ovl0_800CB4B0,                     // Proc Render

    &lEFYoshiEntryEggDObjSetup,             // DObj Setup attributes offset (?)
    &lEFYoshiEntryEggMObjSub,               // MObjSub offset
    &lEFYoshiEntryEggAnimJoint,             // AnimJoint offset
    &lEFYoshiEntryEggMatAnimJoint           // MatAnimJoint offset
};

// 0x8012E5D4
intptr_t dEFYoshiEggLayAnimJoints[/* */] = { &lEFYoshiEggLayWaitAnimJoint, &lEFYoshiEggLayBreakAnimJoint };

// 0x8012E5DC
efCreateDesc dEFYoshiEggLayEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
    10,                                     // DL Link
    &gFTDataYoshiExtra3,                    // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        OMMtx_Transform_Sca,                // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efYoshiEggLayProcUpdate,                     // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFYoshiEggLayDObjSetup,               // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFYoshiEggLayThrowAnimJoint,          // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E604
efCreateDesc dEFYoshiEggEscapeEffectDesc =
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
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    NULL,                                   // Proc Update
    efYoshiShieldProcRender,                // Proc Render

    &lEFYoshiShieldDObjSetup,               // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E62C
efCreateDesc dEFSpinAttackEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    15,                                     // DL Link
    &gFTDataLinkExtra2,                     // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        OMMtx_Transform_RotRpyR,            // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFSpinAttackDObjSetup,                // DObj Setup attributes offset (?)
    &lEFSpinAttackMObjSub,                  // MObjSub offset
    &lEFSpinAttackAnimJoint,                // AnimJoint offset
    &lEFSpinAttackMatAnimJoint              // MatAnimJoint offset
};

// 0x8012E654
efCreateDesc dEFDonkeyEntryTaruEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &gFTDataDonkeyExtra2,                   // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFDonkeyEntryTaruDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFDonkeyEntryTaruAnimJoint,           // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E67C
efCreateDesc dEFSamusEntryPointEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &gFTDataSamusExtra2,                    // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFSamusEntryPointDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFSamusEntryPointAnimJoint,           // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E6A4
efCreateDesc dEFCaptainEntryCarEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    10,                                     // DL Link
    &gFTDataCaptainExtra2,                  // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efCaptainEntryCarProcUpdate,            // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFCaptainEntryCarDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E6CC
efCreateDesc dEFMarioEntryDokanEffectDesc =
{
    0x4,                                    // Flags
    10,                                     // DL Link
    &gFTDataMarioExtra2,                    // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeForGObj,                // Proc Render

    &lEFMarioEntryDokanDObjSetup,           // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFMarioEntryDokanAnimJoint,           // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E6F4
efCreateDesc dEFFoxEntryArwingEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
    10,                                     // DL Link
    &gFTDataFoxExtra3,                      // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    efFoxEntryArwingProcUpdate,             // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFFoxEntryArwingDObjSetup,            // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E71C
u8 dEFPurinSingNoteGenIDs[/* */] = { 0x40, 0x41, 0x42 };

// 0x8012E720
efCreateDesc dEFCaptureKirbyStarEffectDesc =
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &gITFileData,                           // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        0x50,                               // Main matrix transformations
        0x2E,                               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_CaptureKirbyStar_ProcUpdate, // Proc Update
    func_ovl0_8000CB4B0,                    // Proc Render

    &lEFKirbyStarDObjSetup,                 // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E748
efCreateDesc dEFLoseKirbyStarEffectDesc =
{
    EFFECT_FLAG_USERDATA | 0x1,             // Flags
    15,                                     // DL Link
    &gITFileData,                           // Texture file

    // DObj transformation struct 1
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        0x2E,                               // Secondary matrix transformations
        0x00                                // ???
    },

    efParticle_LoseKirbyStar_ProcUpdate,    // Proc Update
    func_ovl0_8000CB4B0,                    // Proc Render

    &lEFKirbyStarDObjSetup,                 // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    0x0,                                    // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E770
efCreateDesc dEFRebirthHaloEffectDesc =
{
    0x4 | EFFECT_FLAG_USERDATA,             // Flags
    10,                                     // DL Link
    &sEFTexturesFile3,                      // Texture file

    // DObj transformation struct 1
    {
        0x50,                               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        0x00,                               // Secondary matrix transformations
        0x00                                // ???
    },

    func_8000DF34,                          // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFRebirthHaloDObjSetup,               // DObj Setup attributes offset (?)
    0x0,                                    // MObjSub offset
    &lEFRebirthHaloAnimJoint,               // AnimJoint offset
    0x0                                     // MatAnimJoint offset
};

// 0x8012E798
efCreateDesc dEFItemGetSwirlEffectDesc =
{
    0x4 | 0x1,                              // Flags
    18,                                     // DL Link
    &sEFTexturesFile3,                      // Texture file

    // DObj transformation struct 1
    {
        0x28,                               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations
        0x00                                // ???
    },

    // DObj transformation struct 2
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        0x00,                               // Secondary matrix transformations
        0x00                                // ???
    },

    efManagerDefaultEndEjectProcUpdate,     // Proc Update
    odRenderDObjTreeDLLinksForGObj,         // Proc Render

    &lEFItemGetSwirlDObjSetup,              // DObj Setup attributes offset (?)
    &lEFItemGetSwirlMObjSub,                // MObjSub offset
    &lEFItemGetSwirlAnimJoint,              // AnimJoint offset
    &lEFItemGetSwirlMatAnimJoint            // MatAnimJoint offset
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

/* 0x800FD300 - OLD NOTE: To match this, rdManagerGetFileWithExternHeap and rdManagerGetFileSize must take intptr_t or other int type as first argument
 *              NEW NOTE: Not entirely correct, their types do need to be identical however
 */
void efManager_AllocUserData(void)
{
    efStruct *ep;
    s32 i;
    s32 unused;

    sEFStructsAllocFree = ep = gsMemoryAlloc(sizeof(efStruct) * EFFECT_ALLOC_NUM, 0x8);
    sEFStructsNumFree = EFFECT_ALLOC_NUM;

    for (i = 0; i < (EFFECT_ALLOC_NUM - 1); i++)
    {
        ep[i].alloc_next = &ep[i + 1];
    }
    if (ep != NULL)
    {
        ep[i].alloc_next = NULL;
    }
    func_ovl2_800FCDEC();
    func_ovl2_800FCE6C();

    sEFTexturesFile1 = rdManagerGetFileWithExternHeap(&D_NF_00000053, gsMemoryAlloc(rdManagerGetFileSize(&D_NF_00000053), 0x10));
    sEFTexturesFile2 = rdManagerGetFileWithExternHeap(&D_NF_00000054, gsMemoryAlloc(rdManagerGetFileSize(&D_NF_00000054), 0x10));
    sEFTexturesFile3 = rdManagerGetFileWithExternHeap(&D_NF_00000055, gsMemoryAlloc(rdManagerGetFileSize(&D_NF_00000055), 0x10));

    func_ovl2_800FD18C();
}

// 0x800FD43C
efStruct* efManager_GetEffectStruct(sb32 is_force_return)
{
    efStruct *ep;

    if ((is_force_return == FALSE) && (sEFStructsNumFree < 5))
    {
        return NULL;
    }
    ep = sEFStructsAllocFree;

    if (ep == NULL)
    {
        return NULL;
    }
    sEFStructsAllocFree = ep->alloc_next;

    ep->fighter_gobj = NULL;
    ep->eftrans = NULL;
    ep->is_pause_effect = FALSE;

    sEFStructsNumFree--;

    return ep;
}

// 0x800FD4B8
efStruct* efManager_GetStructNoForceReturn(void)
{
    return efManager_GetEffectStruct(FALSE);
}

// 0x800FD4D8
efStruct* efManager_GetStructForceReturn(void)
{
    return efManager_GetEffectStruct(TRUE);
}

// 0x800FD4F8
void efManager_SetPrevAlloc(efStruct *ep)
{
    ep->alloc_next = sEFStructsAllocFree;

    sEFStructsAllocFree = ep;

    sEFStructsNumFree++;
}

// 0x800FD524
void func_ovl2_800FD524(GObj *effect_gobj)
{
    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        omEjectGObj(effect_gobj);
    }
}

// 0x800FD568
void efManagerDefaultEndEjectProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (!(ep->is_pause_effect))
    {
        func_8000DF34(effect_gobj);

        if (effect_gobj->anim_frame <= 0.0F)
        {
            efManager_SetPrevAlloc(efGetStruct(effect_gobj));

            omEjectGObj(effect_gobj);
        }
    }
}

// New file? Unused
void func_ovl2_800FD5D0(void)
{
    return;
}

// 0x800FD5D8
void func_ovl2_800FD5D8(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (!(ep->is_pause_effect))
    {
        func_8000DF34(effect_gobj);
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
            omMoveGObjDL(parent_gobj, 2, 2);
        }
    }
    else
    {
        parent_gobj = dobj->parent_gobj;

        if (parent_gobj->dl_link_id != 0x14)
        {
            omMoveGObjDL(parent_gobj, 0x14, 2);
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
            omMoveGObjDL(parent_gobj, 2, 2);
        }
    }
    else
    {
        parent_gobj = dobj->parent_gobj;

        if (parent_gobj->dl_link_id != 0x14)
        {
            omMoveGObjDL(parent_gobj, 0x14, 2);
        }
    }
}

// Another unused func
void func_ovl2_800FD70C(void)
{
    return;
}

void efManagerProcRun(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (ep != NULL)
    {
        if (ep->proc_update != NULL)
        {
            omAddGObjCommonProc(effect_gobj, ep->proc_update, 1, 3);
        }
    }
    else omAddGObjCommonProc(effect_gobj, func_ovl2_800FD524, 1, 3);

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
        ep = efManager_GetEffectStruct(is_force_return);

        if (ep == NULL)
        {
            return NULL;
        }
        ep->proc_update = effect_desc->proc_update;
    }
    else ep = NULL;

    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, efManagerProcRun, (effect_flags & EFFECT_FLAG_SPECIALLINK) ? GObj_LinkID_SpecialEffect : GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        if (ep != NULL)
        {
            efManager_SetPrevAlloc(ep);
        }
        return NULL;
    }
    effect_gobj->user_data.p = ep;

    if (effect_desc->proc_render == NULL)
    {
        return effect_gobj;
    }
    omAddGObjRenderProc(effect_gobj, effect_desc->proc_render, effect_desc->dl_link, 2, -1);

    o_mobjsub = effect_desc->o_mobjsub;
    o_anim_joint = effect_desc->o_anim_joint;
    o_matanim_joint = effect_desc->o_matanim_joint;
    addr = (uintptr_t) *effect_desc->file_head;

    transform_types1 = &effect_desc->transform_types1;

    if (effect_flags & 0x1)
    {
        main_dobj = omAddDObjForGObj(effect_gobj, NULL);

        func_ovl0_800C89BC(main_dobj, transform_types1->tk1, transform_types1->tk2, transform_types1->unk_dobjtransform_0x2);

        transform_types2 = &effect_desc->transform_types2;

        if (effect_flags & 0x4)
        {
            func_ovl0_800C8B28(main_dobj, (void*) (addr + effect_desc->o_dobjsetup), NULL, transform_types2->tk1, transform_types2->tk2, transform_types2->unk_dobjtransform_0x2);

            main_dobj = main_dobj->child;
        }
        else
        {
            main_dobj = omAddChildForDObj(main_dobj, (void*) (addr + effect_desc->o_dobjsetup));

            func_ovl0_800C89BC(main_dobj, transform_types2->tk1, transform_types2->tk2, transform_types2->unk_dobjtransform_0x2);
        }
        if (o_mobjsub != 0)
        {
            func_ovl0_800C9228(main_dobj, (void*) (addr + o_mobjsub));
        }
        if ((o_anim_joint != 0) || (o_matanim_joint != 0))
        {
            func_ovl0_800C88AC(main_dobj, (o_anim_joint != 0) ? (void*) (addr + o_anim_joint) : NULL, (o_matanim_joint != 0) ? (void*) (addr + o_matanim_joint) : NULL, 0.0F);
            func_8000DF34(effect_gobj);
        }
    }
    else
    {
        transform_types1 = &effect_desc->transform_types1;

        if (effect_flags & 0x4)
        {
            func_8000F590(effect_gobj, (void*)(addr + effect_desc->o_dobjsetup), NULL, 0, 0, 0);

            other_dobj = DObjGetStruct(effect_gobj);

            func_8000F2FC(other_dobj, transform_types1->tk1, transform_types1->tk2, transform_types1->unk_dobjtransform_0x2);

            transform_types2 = &effect_desc->transform_types2;

            main_dobj = other_dobj->child;

            while (main_dobj != NULL)
            {
                func_8000F2FC(main_dobj, transform_types2->tk1, transform_types2->tk2, transform_types2->unk_dobjtransform_0x2);

                main_dobj = func_ovl0_800C86E8(main_dobj, other_dobj);
            }
            func_8000F988(effect_gobj, (void*) (addr + effect_desc->o_dobjsetup));
        }
        else
        {
            transform_types1 = &effect_desc->transform_types1;

            func_ovl0_800C89BC(omAddDObjForGObj(effect_gobj, (void*) (addr + effect_desc->o_dobjsetup)), transform_types1->tk1, transform_types1->tk2, transform_types1->unk_dobjtransform_0x2);
        }
        if (o_mobjsub != 0)
        {
            func_8000F8F4(effect_gobj, (void*) (addr + o_mobjsub));
        }
        if ((o_anim_joint != 0) || (o_matanim_joint != 0))
        {
            func_8000BED8(effect_gobj, (o_anim_joint != 0) ? (void*) (addr + o_anim_joint) : NULL, (o_matanim_joint != 0) ? (void*) (addr + o_matanim_joint) : NULL, 0.0F);
            func_8000DF34(effect_gobj);
        }
    }
    return effect_gobj;
}

// 0x800FDAFC
void efManagerMakeEffectNoForce(efCreateDesc *effect_desc)
{
    efManagerMakeEffect(effect_desc, FALSE);
}

// 0x800FDB1C
void efManagerMakeEffectForce(efCreateDesc *effect_desc)
{
    efManagerMakeEffect(effect_desc, TRUE);
}

// 0x800FDB3C - Destroy effect GObj and particle too if applicable
efParticle* efManagerDestroyParticleGObj(efParticle *efpart, GObj *effect_gobj)
{
    if (efpart != NULL)
    {
        func_ovl0_800CEA40(efpart);
    }
    if (efGetStruct(effect_gobj) != NULL)
    {
        efStruct *ep = efGetStruct(effect_gobj);

        efManager_SetPrevAlloc(ep);
    }
    omEjectGObj(effect_gobj);

    return NULL;
}

// 0x800FDB88
void efTransform_Default_ProcDead(efTransform *eftrans)
{
    if (efGetStruct(eftrans->effect_gobj) != NULL)
    {
        efStruct *ep = efGetStruct(eftrans->effect_gobj);

        efManager_SetPrevAlloc(ep);
    }
    omEjectGObj(eftrans->effect_gobj);
}

// 0x800FDBCC
void efDefaultProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    ep->effect_vars.common.eftrans->translate.x += ep->effect_vars.common.vel.x;
    ep->effect_vars.common.eftrans->translate.y += ep->effect_vars.common.vel.y;
}

// 0x800FDC04
efParticle* efParticle_DamageNormalLight_MakeEffect(Vec3f *pos, s32 player, s32 size, sb32 is_static)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID, D_ovl2_8012DF20[player]);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efDefaultProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            vel = (is_static != FALSE) ? 0.0F : ((lbRandom_GetFloat() * 38.0F) + 12.0F);

            angle = lbRandom_GetFloat() * DOUBLE_PI32;

            ep->effect_vars.common.vel.x = cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.13F) + 1.0F);

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = scale;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FDE3C
void efTransform_DamageNormalHeavy_ProcDead(efTransform *eftrans)
{
    efStruct *ep = efGetStruct(eftrans->effect_gobj);
    Vec3f pos = eftrans->translate;

    efParticle_DamageNormalLight_MakeEffect(&pos, ep->effect_vars.damage_normal_heavy.player, ep->effect_vars.damage_normal_heavy.size, FALSE);
    efManager_SetPrevAlloc(efGetStruct(eftrans->effect_gobj));
    omEjectGObj(eftrans->effect_gobj);
}

// 0x800FDEAC
efParticle* efParticle_DamageNormalHeavy_MakeEffect(Vec3f *pos, s32 player, s32 size)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x64);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_DamageNormalHeavy_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return FALSE;
            }
            ep->effect_vars.common.eftrans = eftrans; // WHAT (This overlaps with damage_normal_heavy.size and is eventually overwritten with the correct value)

            eftrans->translate = *pos;

            ep->effect_vars.damage_normal_heavy.pos = *pos;
            ep->effect_vars.damage_normal_heavy.player = player;
            ep->effect_vars.damage_normal_heavy.size = size;

            efpart->color1.r = dEFDamageNormalHeavyPrimColorR[player];
            efpart->color1.g = dEFDamageNormalHeavyPrimColorG[player];
            efpart->color1.b = dEFDamageNormalHeavyPrimColorB[player];
            efpart->color1.a = 0xFF;

            efpart->color2.r = dEFDamageNormalHeavyEnvColorR[player];
            efpart->color2.g = dEFDamageNormalHeavyEnvColorG[player];
            efpart->color2.b = dEFDamageNormalHeavyEnvColorB[player];
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FE068
efParticle* func_ovl2_800FE068(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x25);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efDefaultProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            vel = ((lbRandom_GetFloat() * 8.0F) + 2.0F);

            angle = lbRandom_GetFloat() * DOUBLE_PI32;

            ep->effect_vars.common.vel.x = cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.15F) + 1.0F);

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = scale;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FE260
void efCommonVelAddDestroyAnimEnd(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (dobj->mobj->mobj_f2 <= 0.0F)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);
    }
    else
    {
        dobj->translate.vec.f.x += ep->effect_vars.common.vel.x;
        dobj->translate.vec.f.y += ep->effect_vars.common.vel.y;
    }
}

// 0x800FE2F4
efParticle* efParticle_DamageFire_MakeEffect(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x4D);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efDefaultProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            vel = ((lbRandom_GetFloat() * 18.0F) + 12.0F);

            angle = lbRandom_GetFloat() * DOUBLE_PI32;

            ep->effect_vars.common.vel.x = cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.15F) + 1.0F);

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = scale;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FE4EC
efParticle* func_ovl2_800FE4EC(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x53);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efDefaultProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            vel = (lbRandom_GetFloat() * 7.0F) + 3.0F;

            angle = lbRandom_GetFloat() * DOUBLE_PI32;

            ep->effect_vars.common.vel.x = cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 5) ? (((5 - size) * -0.08F) + 1.0F) : (((size - 5) * 0.15F) + 1.0F);

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = scale;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FE6E4
GObj* efParticle_DamageSlash_MakeEffect(Vec3f *pos, s32 size, f32 rotate)
{
    GObj *effect_gobj;
    DObj *dobj;
    f32 scale;

    effect_gobj = efManagerMakeEffectNoForce(&dEFDamageSlashEffectDesc);

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
efParticle* efParticle_FlameLR_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x12);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efDefaultProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            eftrans->translate.x += ((lbRandom_GetFloat() * EFPART_FLAMELR_OFF_X_BASE) + EFPART_FLAMELR_OFF_X_ADD);
            eftrans->translate.y += ((lbRandom_GetFloat() * EFPART_FLAMELR_OFF_Y_BASE) + EFPART_FLAMELR_OFF_Y_ADD);

            angle = lbRandom_GetFloat() * HALF_PI32;

            ep->effect_vars.common.vel.x = cosf(angle) * EFPART_FLAMELR_VEL_BASE * -lr;
            ep->effect_vars.common.vel.y = __sinf(angle) * EFPART_FLAMELR_VEL_BASE;

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = (lbRandom_GetFloat() * 1) + 1.0F;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FE9B4
efParticle* efParticle_FlameRandom_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x55);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efDefaultProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            angle = (lbRandom_GetFloat() * EFPART_FLAMERANDOM_ANGLE_BASE) + EFPART_FLAMERANDOM_ANGLE_ADD;

            ep->effect_vars.common.vel.x = cosf(angle) * EFPART_FLAMERANDOM_VEL_BASE;
            ep->effect_vars.common.vel.y = __sinf(angle) * EFPART_FLAMERANDOM_VEL_BASE;

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = (lbRandom_GetFloat() * 1) + 1.0F;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FEB58
efParticle* efParticle_FlameStatic_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x55);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efDefaultProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            ep->effect_vars.common.vel.x = 0.0F;
            ep->effect_vars.common.vel.y = 0.0F;

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = (lbRandom_GetFloat() * 1) + 1.0F;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FECBC - Called only by Venusaur and Link's Boomerang?
efParticle* efParticle_DustCollision_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x55);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efDefaultProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            eftrans->translate.x += ((lbRandom_GetFloat() * EFPART_DUSTCOLL_OFF_BASE) + EFPART_DUSTCOLL_OFF_ADD);
            eftrans->translate.y += ((lbRandom_GetFloat() * EFPART_DUSTCOLL_OFF_BASE) + EFPART_DUSTCOLL_OFF_ADD);

            angle = (lbRandom_GetFloat() * EFPART_DUSTCOLL_ANGLE_BASE) + EFPART_DUSTCOLL_ANGLE_ADD; // HALF_PI32, QUART_PI32

            ep->effect_vars.common.vel.x = cosf(angle) * EFPART_DUSTCOLL_VEL_BASE;
            ep->effect_vars.common.vel.y = __sinf(angle) * EFPART_DUSTCOLL_VEL_BASE;

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = (lbRandom_GetFloat() * 1) + 1.0F;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FEEB0
GObj* efParticle_ShockSmall_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;
    efStruct *ep;
    f32 scale;
    f32 angle;

    effect_gobj = efManagerMakeEffectNoForce(&dEFShockSmallEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);
    ep = efGetStruct(effect_gobj);

    pos->x += (lbRandom_GetFloat() * EFPART_SHOCKSMALL_OFF_BASE) + EFPART_SHOCKSMALL_OFF_ADD;
    pos->y += (lbRandom_GetFloat() * EFPART_SHOCKSMALL_OFF_BASE) + EFPART_SHOCKSMALL_OFF_ADD;

    dobj->translate.vec.f = *pos;

    /*
        The following float random and multiplication, cos and sin subroutine calls are nothing but a waste of CPU cycles.
        Guarded by the preprocessor flag DAIRANTOU_OPT0, a codebase optimization level that ignores redundant lines of code.
    */

#if !defined (DAIRANTOU_OPT0)
    angle = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F); // DOUBLE_PI32
#endif

#if !defined (DAIRANTOU_OPT0)
    cosf(angle);
#endif

    ep->effect_vars.common.vel.x = 0.0F;

#if !defined (DAIRANTOU_OPT0)
    __sinf(angle);
#endif

    ep->effect_vars.common.vel.y = 0.0F;

    scale = (lbRandom_GetFloat() * EFPART_SHOCKSMALL_SCALE_BASE) + EFPART_SHOCKSMALL_SCALE_ADD;

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = scale;

    dobj->rotate.vec.f.z = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F); // DOUBLE_PI32

    return effect_gobj;
}

// 0x800FEFE0
void efParticle_DustLight_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    ep->effect_vars.dust_light.eftrans->translate.x += ep->effect_vars.dust_light.vel1.x;
    ep->effect_vars.dust_light.eftrans->translate.y += ep->effect_vars.dust_light.vel1.y;

    if (ep->effect_vars.dust_light.lifetime != 0)
    {
        ep->effect_vars.dust_light.lifetime--;

        ep->effect_vars.dust_light.vel1.x += ep->effect_vars.dust_light.vel2.x;
        ep->effect_vars.dust_light.vel1.y += ep->effect_vars.dust_light.vel2.y;
    }
}

// 0x800FF048
efParticle* efParticle_DustLight_MakeEffect(Vec3f *pos, sb32 is_invert_vel, f32 f_index)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = (f_index == 2.0F) ? func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x56) : func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x55);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efParticle_DustLight_ProcUpdate, 1, 3);

            ep->effect_vars.dust_light.eftrans = eftrans;

            eftrans->translate = *pos;

            eftrans->translate.y += EFPART_DUSTNORMAL_OFF_Y;

            eftrans->rotate.z = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F); // DOUBLE_PI32

            angle = (lbRandom_GetFloat() * EFPART_DUSTNORMAL_ANGLE_BASE) + EFPART_DUSTNORMAL_ANGLE_ADD;

            ep->effect_vars.dust_light.vel1.x = cosf(angle) * EFPART_DUSTNORMAL_VEL_BASE;

            if (is_invert_vel == TRUE)
            {
                ep->effect_vars.dust_light.vel1.x = -ep->effect_vars.dust_light.vel1.x;
            }
            ep->effect_vars.dust_light.vel1.y = __sinf(angle) * EFPART_DUSTNORMAL_VEL_BASE;

            ep->effect_vars.dust_light.lifetime = EFPART_DUSTNORMAL_LIFETIME;

            ep->effect_vars.dust_light.vel2.x = -ep->effect_vars.dust_light.vel1.x * EFPART_DUSTNORMAL_SCATTER;
            ep->effect_vars.dust_light.vel2.y = -ep->effect_vars.dust_light.vel1.y * EFPART_DUSTNORMAL_SCATTER;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FF278
efParticle* efParticle_DustHeavy_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    effect_gobj->user_data.p = NULL;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x58);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;

            eftrans->translate = *pos;

            eftrans->translate.y += EFPART_DUSTHEAVY_OFF_Y;

            if (lr == LR_Left)
            {
                eftrans->rotate.y = F_DEG_TO_RAD(180.0F); // PI32
            }
            eftrans->proc_dead = efTransform_Default_ProcDead;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FF384
void efParticle_DustHeavyDouble_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    s32 unused;

    ep->effect_vars.dust_heavy.anim_frame++;

    if (ep->effect_vars.dust_heavy.anim_frame == 2)
    {
        Vec3f pos = ep->effect_vars.dust_heavy.eftrans->translate;

        pos.y -= 126.0F;

        efParticle_DustHeavy_MakeEffect(&pos, -ep->effect_vars.dust_heavy.lr);
    }
}

// 0x800FF3F4
efParticle* efParticle_DustHeavyDouble_MakeEffect(Vec3f *pos, s32 lr, f32 f_index)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = (f_index == 1.7F) ? func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x59) : func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x58); // Why such a specific check when a bool could've worked?

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            omAddGObjCommonProc(effect_gobj, efParticle_DustHeavyDouble_ProcUpdate, 1, 3);

            eftrans->effect_gobj = effect_gobj;

            ep->effect_vars.dust_heavy.eftrans = eftrans;

            eftrans->translate = *pos;

            eftrans->translate.y += EFPART_DUSTHEAVY_OFF_Y;

            ep->effect_vars.dust_heavy.pos = *pos;

            ep->effect_vars.dust_heavy.anim_frame = 0;

            ep->effect_vars.dust_heavy.lr = lr;

            if (lr == LR_Left)
            {
                eftrans->rotate.y = F_DEG_TO_RAD(180.0F); // PI32
            }
            eftrans->proc_dead = efTransform_Default_ProcDead;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FF590
efParticle* efParticle_DustExpandLarge_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x57);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;

            eftrans->scale.x = EFPART_DUSTEXPANDLARGE_SCALE;
            eftrans->scale.y = EFPART_DUSTEXPANDLARGE_SCALE;
            eftrans->scale.z = EFPART_DUSTEXPANDLARGE_SCALE;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x800FF648
efParticle* efParticle_DustExpandSmall_MakeEffect(Vec3f *pos, f32 f_index)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = (f_index == 2.0F) ? func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x56) : func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x55);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efDefaultProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            ep->effect_vars.common.vel.y = EFPART_DUSTEXPANDSMALL_VEL_Y;
            ep->effect_vars.common.vel.x = EFPART_DUSTEXPANDSMALL_VEL_X;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x800FF7D8
efParticle* efParticle_DustDash_MakeEffect(Vec3f *pos, s32 lr, f32 scale)
{
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x5A);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;

            eftrans->scale.x = scale;
            eftrans->scale.y = scale;
            eftrans->scale.z = scale;

            eftrans->translate.y += EFPART_DUSTDASH_OFF_Y;

            if (lr == LR_Left)
            {
                eftrans->rotate.y = F_DEG_TO_RAD(180.0F); // PI32
            }
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x800FF8C0
void efParticle_DamageFlyOrbs_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    ep->effect_vars.damage_fly_orbs.lifetime--;

    if (ep->effect_vars.damage_fly_orbs.lifetime < 0)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);
    }
    else
    {
        dobj->translate.vec.f.x += ep->effect_vars.damage_fly_orbs.vel.x;
        dobj->translate.vec.f.y += ep->effect_vars.damage_fly_orbs.vel.y;

        ep->effect_vars.damage_fly_orbs.vel.y -= EFPART_DAMAGEFLYORBS_VEL_SUB;
    }
}

// 0x800FF95C
void efParticle_DamageSpawnOrbs_ProcUpdate(GObj *this_gobj)
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
        new_gobj = efManagerMakeEffectNoForce(&dEFDamageFlyOrbsEffectDesc);

        if (new_gobj != NULL)
        {
            dobj = DObjGetStruct(new_gobj);
            new_ep = efGetStruct(new_gobj);

            dobj->translate.vec.f = this_ep->effect_vars.damage_spawn_orbs.pos;

            dobj->scale.vec.f.x = dobj->scale.vec.f.y = (lbRandom_GetFloat() * EFPART_DAMAGESPAWNORBS_SCALE_BASE) + EFPART_DAMAGESPAWNORBS_SCALE_ADD;

            vel = (lbRandom_GetFloat() * EFPART_DAMAGESPAWNORBS_VEL_BASE) + EFPART_DAMAGESPAWNORBS_VEL_ADD;

            angle = (lbRandom_GetFloat() * EFPART_DAMAGESPAWNORBS_ANGLE_BASE) + EFPART_DAMAGESPAWNORBS_ANGLE_ADD1 + EFPART_DAMAGESPAWNORBS_ANGLE_ADD2;

            new_ep->effect_vars.damage_fly_orbs.vel.x = cosf(angle) * vel;
            new_ep->effect_vars.damage_fly_orbs.vel.y = __sinf(angle) * vel;
            new_ep->effect_vars.damage_fly_orbs.lifetime = lbRandom_GetIntRange(EFPART_DAMAGESPAWNORBS_LIFETIME_RANDOM_MOD) + EFPART_DAMAGESPAWNORBS_LIFETIME_ADD;
        }
    }
    this_ep->effect_vars.damage_spawn_orbs.lifetime--;

    if (this_ep->effect_vars.damage_spawn_orbs.lifetime < 0)
    {
        efManager_SetPrevAlloc(this_ep);
        omEjectGObj(this_gobj);
    }
}

// 0x800FFAB8
GObj* efParticle_DamageSpawnOrbs_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efStruct *ep;

    effect_gobj = efManagerMakeEffectNoForce(&dEFDamageSpawnOrbsEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.damage_spawn_orbs.pos = *pos;

    ep->effect_vars.damage_spawn_orbs.lifetime = (lbRandom_GetIntRange(3) * 4) + 4;

    return effect_gobj;
}

// 0x800FFB38
GObj* efParticle_DamageSpawnOrbs_CheckRandomMakeEffect(Vec3f *pos)
{
    if (lbRandom_GetIntRange(4) != 0)
    {
        return NULL;
    }
    else return efParticle_DamageSpawnOrbs_MakeEffect(pos);
}

// 0x800FFB74
void efParticle_ImpactWave_ProcRender(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    s32 index = ep->effect_vars.impact_wave.index;

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, dEFImpactWavePrimColorR[index], dEFImpactWavePrimColorG[index], dEFImpactWavePrimColorB[index], (s32)ep->effect_vars.impact_wave.alpha);

    // The following EnvColor RGB key arrays are all zeroes, so using them (and even having them occupy space in the .data section) is completely unnecessary.

#if !defined (DAIRANTOU_OPT0)
    gDPSetEnvColor(gDisplayListHead[0]++, dEFImpactWaveEnvColorR[index], dEFImpactWaveEnvColorG[index], dEFImpactWaveEnvColorB[index], 0xFF);
#else 
    gDPSetEnvColor(gDisplayListHead[0]++, 0x00, 0x00, 0x00, 0xFF);
#endif

    odRenderDObjDLHead0(effect_gobj);
}

// 0x800FFCA4
void efParticle_ImpactWave_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManager_SetPrevAlloc(efGetStruct(effect_gobj));
        omEjectGObj(effect_gobj);
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
GObj* efParticle_ImpactWave_MakeEffect(Vec3f *pos, s32 index, f32 rotate)
{
    GObj *effect_gobj = efManagerMakeEffectNoForce(&dEFImpactWaveEffectDesc);
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
GObj* efParticle_ImpactAirWave_MakeEffect(Vec3f *pos, s32 index)
{
    return efParticle_ImpactWave_MakeEffect(pos, index, 0.0F);
}

// 0x800FFE08
void efParticle_StarRodSpark_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);

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
GObj* efParticle_StarRodSpark_MakeEffect(Vec3f *pos, s32 lr)
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

        dobj->rotate.vec.f.z = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F); // DOUBLE_PI32

        dobj->scale.vec.f.x = EFPART_STARRODSPARK_SCALE;
        dobj->scale.vec.f.y = EFPART_STARRODSPARK_SCALE;

        ep->effect_vars.star_rod_spark.vel.x = lr * EFPART_STARRODSPARK_VEL_BASE;
        ep->effect_vars.star_rod_spark.add.x = lr * EFPART_STARRODSPARK_VEL_ADD;
        ep->effect_vars.star_rod_spark.add_timer = EFPART_STARRODSPARK_ADD_TIMER;
    }
    return effect_gobj;
}

// 0x800FFF74
void efParticle_DamageFlySparks_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);
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
void efParticle_DamageSpawnSparks_ProcUpdate(GObj *effect_gobj)
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
        new_gobj = efManagerMakeEffectNoForce(&dEFDamageFlySparksEffectDesc);

        if (new_gobj != NULL)
        {
            dobj = DObjGetStruct(new_gobj);
            new_ep = efGetStruct(new_gobj);

            dobj->translate.vec.f = this_ep->effect_vars.damage_spawn_sparks.pos;

            dobj->rotate.vec.f.z = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F);

            var = dEFDamageSpawnSparksAngles[ -(lifetime / EFPART_DAMAGESPAWNSPARK_LIFETIME_MOD) + (EFPART_DAMAGESPAWNSPARK_LIFETIME_MOD / 2) ];

            angle = F_DEG_TO_RAD(var);

            new_ep->effect_vars.damage_fly_sparks.vel.x = cosf(angle) * EFPART_DAMAGESPAWNSPARK_VEL_BASE * this_ep->effect_vars.damage_spawn_sparks.lr;
            new_ep->effect_vars.damage_fly_sparks.vel.y = __sinf(angle) * EFPART_DAMAGESPAWNSPARK_VEL_BASE;

            new_ep->effect_vars.damage_fly_sparks.add.x = -new_ep->effect_vars.damage_fly_sparks.vel.x * EFPART_DAMAGESPAWNSPARK_VEL_ADD;
            new_ep->effect_vars.damage_fly_sparks.add.y = -new_ep->effect_vars.damage_fly_sparks.vel.y * EFPART_DAMAGESPAWNSPARK_VEL_ADD;

            new_ep->effect_vars.damage_fly_sparks.add_timer = EFPART_DAMAGESPAWNSPARK_ADD_TIMER;
        }
    }
    this_ep->effect_vars.damage_spawn_sparks.lifetime--;

    if (this_ep->effect_vars.damage_spawn_sparks.lifetime < 0)
    {
        efManager_SetPrevAlloc(this_ep);
        omEjectGObj(effect_gobj);
    }
}

// 0x801001A8
GObj* efParticle_DamageSpawnSparks_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efStruct *ep;

    effect_gobj = efManagerMakeEffectNoForce(&dEFDamageSpawnSparksEffectDesc);

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
GObj* efParticle_DamageSpawnSparks_CheckRandomMakeEffect(Vec3f *pos, s32 lr)
{
    if (lbRandom_GetIntRange(4) != 0)
    {
        return NULL;
    }
    else return efParticle_DamageSpawnSparks_MakeEffect(pos, lr);
}

// 0x80100258
void efParticle_DamageSpawnMDust_ProcUpdate(GObj *effect_gobj)
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
        new_gobj = efManagerMakeEffectNoForce(&dEFDamageFlyMDustEffectDesc);

        if (new_gobj != NULL)
        {
            dobj = DObjGetStruct(new_gobj);
            new_ep = efGetStruct(new_gobj);

            dobj->translate.vec.f = this_ep->effect_vars.damage_spawn_mdust.pos;

            dobj->rotate.vec.f.z = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F);

            var = dEFDamageSpawnMDustAngles[ -(lifetime / EFPART_DAMAGESPAWNMDUST_LIFETIME_MOD) + (EFPART_DAMAGESPAWNMDUST_LIFETIME_MOD / 2) ];

            angle = F_DEG_TO_RAD(var);

            new_ep->effect_vars.damage_fly_mdust.vel.x = cosf(angle) * EFPART_DAMAGESPAWNMDUST_VEL_BASE * this_ep->effect_vars.damage_spawn_mdust.lr;
            new_ep->effect_vars.damage_fly_mdust.vel.y = __sinf(angle) * EFPART_DAMAGESPAWNMDUST_VEL_BASE;

            new_ep->effect_vars.damage_fly_mdust.add.x = -new_ep->effect_vars.damage_fly_mdust.vel.x * EFPART_DAMAGESPAWNMDUST_VEL_ADD;
            new_ep->effect_vars.damage_fly_mdust.add.y = -new_ep->effect_vars.damage_fly_mdust.vel.y * EFPART_DAMAGESPAWNMDUST_VEL_ADD;

            new_ep->effect_vars.damage_fly_mdust.add_timer = EFPART_DAMAGESPAWNMDUST_ADD_TIMER;
        }
    }
    this_ep->effect_vars.damage_spawn_mdust.lifetime--;

    if (this_ep->effect_vars.damage_spawn_mdust.lifetime < 0)
    {
        efManager_SetPrevAlloc(this_ep);
        omEjectGObj(effect_gobj);
    }
}

// 0x801003D0
GObj* efParticle_DamageSpawnMDust_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    efStruct *ep;

    effect_gobj = efManagerMakeEffectNoForce(&dEFDamageSpawnMDustEffectDesc);

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
GObj* efParticle_DamageSpawnMDust_CheckRandomMakeEffect(Vec3f *pos, s32 lr)
{
    if (lbRandom_GetIntRange(4) != 0)
    {
        return NULL;
    }
    else return efParticle_DamageSpawnMDust_MakeEffect(pos, lr);
}

// 0x80100480
efParticle* efParticle_SparkleWhite_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x73);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80100524
efParticle* efParticle_SparkleWhiteMulti_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x1A);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x801005C8
efParticle* efParticle_SparkleWhiteMultiExplode_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x22);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x8010066C
efParticle* efParticle_SparkleWhiteScale_MakeEffect(Vec3f *pos, f32 scale)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x5B);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;

            eftrans->scale.x = scale;
            eftrans->scale.y = scale;
            eftrans->scale.z = scale;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80100720 - Plays when a fighter is Star KO'd
efParticle* efParticle_SparkleWhiteDead_MakeEffect(Vec3f *pos, f32 scale)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID | 0x10, 0x5C);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;

            eftrans->scale.x = scale;
            eftrans->scale.y = scale;
            eftrans->scale.z = scale;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x801007D8
void efParticle_Quake_ProcUpdate(GObj *effect_gobj)
{
    DObj *dobj;
    Vec3f sub;
    Vec3f pos;
    Camera *cam;
    f32 mag;

    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        efManager_SetPrevAlloc(efGetStruct(effect_gobj));
        omEjectGObj(effect_gobj);
    }
    else
    {
        cam = CameraGetStruct(gCameraGObj);

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

        func_ovl2_8010D128(&pos);
    }
}

// 0x801008B8
void efParticle_Quake_AddProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    omAddGObjCommonProc(effect_gobj, efParticle_Quake_ProcUpdate, 1, ep->effect_vars.quake.priority);

    effect_gobj->proc_run = NULL;
}

// 0x801008F4
GObj* efParticle_Quake_MakeEffect(s32 magnitude) // Linker things here
{
    s32 unused[2];
    efStruct *ep;
    GObj *effect_gobj;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, efParticle_Quake_AddProcUpdate, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    effect_gobj->user_data.p = ep;

    omAddOMMtxForDObjFixed(omAddDObjForGObj(effect_gobj, NULL), OMMtx_Transform_Tra, 0);

    switch (magnitude)
    {
    case 0:
        func_8000BD8C(effect_gobj, (intptr_t)sEFTexturesFile1 + (intptr_t)&D_NF_0000CBC0, 0.0F);
        break;

    case 1:
        func_8000BD8C(effect_gobj, (intptr_t)sEFTexturesFile1 + (intptr_t)&D_NF_0000CC20, 0.0F);
        break;

    case 2:
        func_8000BD8C(effect_gobj, (intptr_t)sEFTexturesFile1 + (intptr_t)&D_NF_0000CCF0, 0.0F);
        break;

    case 3: // Used by POW Block 
        func_8000BD8C(effect_gobj, (intptr_t)sEFTexturesFile1 + (intptr_t)&D_NF_0000CDC0, 0.0F);
        break;

    default:
        break;
    }
    func_8000DF34(effect_gobj);

    ep->effect_vars.quake.priority = 3 - magnitude;

    return effect_gobj;
}

// 0x80100A58
void efTransform_DamageCoin_ProcDead(efTransform *eftrans)
{
    Vec3f pos = eftrans->translate;

    pos.y += 200.0F;

    efParticle_DustExpandSmall_MakeEffect(&pos, 2.0F);
    efManager_SetPrevAlloc(efGetStruct(eftrans->effect_gobj));
    omEjectGObj(eftrans->effect_gobj);
}

// 0x80100ACC
efParticle* efParticle_DamageCoin_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 angle;
    f32 vel;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }

    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x60);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_DamageCoin_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x80100BF0
efParticle* efParticle_SetOff_MakeEffect(Vec3f *pos, s32 size)
{
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    efStruct *ep;
    f32 vel;
    f32 angle;
    f32 scale;

    ep = efManager_GetStructNoForceReturn();

    if (ep == NULL)
    {
        return NULL;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(sEFParticleBankID | 8, 0x65);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            eftrans->effect_gobj = effect_gobj;
            eftrans->proc_dead = efTransform_Default_ProcDead;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            omAddGObjCommonProc(effect_gobj, efDefaultProcUpdate, 1, 3);

            ep->effect_vars.common.eftrans = eftrans;

            eftrans->translate = *pos;

            vel = (lbRandom_GetFloat() * 18.0F) + 12.0F;
            angle = lbRandom_GetFloat() * F_DEG_TO_RAD(360.0F); // DOUBLE_PI32

            ep->effect_vars.common.vel.x = cosf(angle) * vel;
            ep->effect_vars.common.vel.y = __sinf(angle) * vel;

            scale = (size < 10) ? (((10 - size) * -0.05F) + 1.0F) : (((size - 10) * 0.15F) + 1.0F);

            eftrans->scale.x = eftrans->scale.y = eftrans->scale.z = scale;
        }
        else efpart = efManagerDestroyParticleGObj(efpart, effect_gobj);
    }
    else efManagerDestroyParticleGObj(NULL, effect_gobj);

    return efpart;
}

// 0x80100DEC
GObj* efParticle_FireSpark_MakeEffect(GObj *fighter_gobj) // I really have no idea where this effect is used; it can only be created by script
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
    dobj->user_data.p = fp->joint[16];

    func_ovl0_800C9314(dobj->child, (uintptr_t)sEFTexturesFile2 + (intptr_t)&lEFFireSparkDObjSetup, effect_gobj); // Linker thing

    return effect_gobj;
}

// 0x80100E84
void efTransform_Reflector_SetImageIndex(GObj *effect_gobj, s32 index)
{
    efStruct *ep = efGetStruct(effect_gobj);

    ep->effect_vars.reflector.index = index;

    func_8000BD8C(effect_gobj, (uintptr_t)gFTDataFoxExtra2 + (intptr_t)dEFReflectorAnimJointOffsets[index], 0.0F);
    func_8000DF34(effect_gobj);
}

// 0x80100ED4
void efParticle_Reflector_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (effect_gobj->anim_frame <= 0.0F)
    {
        switch (ep->effect_vars.reflector.index)
        {
        case 1:
            break;

        case 0:
        case 2:
            efTransform_Reflector_SetImageIndex(effect_gobj, 1);
            break;

        case 3:
            efManager_SetPrevAlloc(ep);
            omEjectGObj(effect_gobj);
            return;
        }
    }
    if (ep->effect_vars.reflector.status != 4)
    {
        efTransform_Reflector_SetImageIndex(effect_gobj, ep->effect_vars.reflector.status);

        ep->effect_vars.reflector.status = 4;
    }
}

// 0x80100FA4
GObj* efParticle_Reflector_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj = efManagerMakeEffectForce(&dEFReflectorEffectDesc);
    efStruct *ep;

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    DObjGetStruct(effect_gobj)->user_data.p = ftGetStruct(fighter_gobj)->joint[ftParts_Joint_TopN];

    ep->effect_vars.reflector.index = 0;
    ep->effect_vars.reflector.status = 4;

    return effect_gobj;
}

// 0x80101008
void efShieldProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (ep->effect_vars.shield.is_damage_shield != FALSE)
    {
        ep->effect_vars.shield.is_damage_shield = FALSE;
    }
}

// 0x80101024
void efShieldProcRender(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    s32 index = (ep->effect_vars.shield.is_damage_shield != FALSE) ? 4 : ep->effect_vars.shield.player;

    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, dEFShieldColors[index].prim.r, dEFShieldColors[index].prim.g, dEFShieldColors[index].prim.b, 0xC0);
    gDPSetEnvColor(gDisplayListHead[1]++, dEFShieldColors[index].env.r, dEFShieldColors[index].env.g, dEFShieldColors[index].env.b, 0xC0);

    odRenderDObjTreeDLLinksForGObj(effect_gobj);
}

// 0x80101108
GObj* efParticle_Shield_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = efManagerMakeEffectForce(&dEFShieldEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp->is_attach_effect = TRUE;

    DObjGetStruct(effect_gobj)->user_data.p = fp->joint[ftParts_Joint_YRotN];

    ep->effect_vars.shield.player = fp->player;
    ep->effect_vars.shield.is_shield_damage = FALSE;

    return effect_gobj;
}

// 0x80101180
void efYoshiShieldProcRender(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    ftStruct *fp = ftGetStruct(ep->fighter_gobj);
    f32 blend = 1.0F - (fp->shield_health / 55.0F);
    u8 color[3];

    if (blend < 0.0F)
    {
        blend = 0.0F;
    }
    color[gsColorRGBIndexR] = 0xAE * blend;
    color[gsColorRGBIndexG] = 0xD6 * blend;
    color[gsColorRGBIndexB] = 0xD6 * blend;

    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetEnvColor(gDisplayListHead[1]++, color[gsColorRGBIndexR], color[gsColorRGBIndexG], color[gsColorRGBIndexB], 0x00);

    odRenderDObjDLHead1(effect_gobj);

    func_ovl2_800FCCC0(effect_gobj);
}

// 0x80101374
GObj* efParticle_YoshiShield_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = efManagerMakeEffectForce(&dEFYoshiShieldEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp->is_attach_effect = TRUE;

    DObjGetStruct(effect_gobj)->user_data.p = fp->joint[ftParts_Joint_YRotN];
    DObjGetStruct(effect_gobj)->scale.vec.f.x = DObjGetStruct(effect_gobj)->scale.vec.f.y = 1.5F;

    ep->effect_vars.shield.player = fp->player;
    ep->effect_vars.shield.is_shield_damage = FALSE;

    return effect_gobj;
}

// 0x80101408
efParticle* efParticle_ThunderHit_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x74);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x801014A8
efGenerator* efParticle_Ripple_MakeEffect(Vec3f *pos)
{
    efGenerator *efgen = func_ovl0_800D35DC(sEFParticleBankID, 0x61);

    if (efgen != NULL)
    {
        efgen->pos.x = pos->x;
        efgen->pos.y = pos->y;
        efgen->pos.z = pos->z;
    }
    return efgen;
}

// 0x80101500
GObj* efParticle_CatchSwirl_MakeEffect(Vec3f *pos)
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
GObj* efParticle_ReflectBreak_MakeEffect(Vec3f *pos, s32 lr)
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

    if (lr == LR_Left)
    {
        dobj->rotate.vec.f.y = F_DEG_TO_RAD(180.0F);
    }
    return effect_gobj;
}

// 0x801015D4
efParticle* efParticle_FuraSparkle_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE870(sEFParticleBankID | 8, 0);

    if (efpart != NULL)
    {
        efpart->pos.x = pos->x;
        efpart->pos.y = pos->y;
        efpart->pos.z = pos->z;
    }
    return efpart;
}

// 0x80101630
efParticle* efParticle_Psionic_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE870(sEFParticleBankID, 7);

    if (efpart != NULL)
    {
        efpart->pos.x = pos->x;
        efpart->pos.y = pos->y;
        efpart->pos.z = pos->z;
    }
    return efpart;
}

// 0x80101688
efParticle* efParticle_FlashSmall_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE870(sEFParticleBankID, 4);

    if (efpart != NULL)
    {
        efpart->pos.x = pos->x;
        efpart->pos.y = pos->y;
        efpart->pos.z = pos->z;
    }
    return efpart;
}

// 0x801016E0
efParticle* efParticle_FlashMiddle_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE870(sEFParticleBankID, 5);

    if (efpart != NULL)
    {
        efpart->pos.x = pos->x;
        efpart->pos.y = pos->y;
        efpart->pos.z = pos->z;
    }
    return efpart;
}

// 0x80101738
efParticle* efParticle_FlashLarge_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE870(sEFParticleBankID, 6);

    if (efpart != NULL)
    {
        efpart->pos.x = pos->x;
        efpart->pos.y = pos->y;
        efpart->pos.z = pos->z;
    }
    return efpart;
}

// 0x80101790
efGenerator* efParticle_ShieldBreak_MakeEffect(Vec3f *pos)
{
    efGenerator *efgen = func_ovl0_800D35DC(sEFParticleBankID, 3);

    if (efgen != NULL)
    {
        efgen->pos.x = pos->x;
        efgen->pos.y = pos->y;
        efgen->pos.z = pos->z;
    }
    return efgen;
}

// 0x801017E8
void func_ovl2_801017E8(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    if (ep->effect_vars.unknown1.efvars_unk1_0x0 == 0)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);
    }
    else ep->effect_vars.unknown1.efvars_unk1_0x0--;
}

// 0x8010183C
GObj* func_ovl2_8010183C(Vec3f *pos, s32 arg1)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFPikachuUnkEffectDesc);

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
GObj* efParticle_ThunderShock_MakeEffect(GObj *fighter_gobj, Vec3f *pos, s32 frame)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFThunderShockEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);
    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[ftParts_Joint_TopN];

    dobj->child->translate.vec.f = *pos;

    dobj->child->translate.vec.f.x = (ftGetStruct(fighter_gobj)->lr == LR_Left) ? -pos->x : pos->x;

    omAddOMMtxForDObjFixed(dobj->child->child, 0x2E, 0);

    switch (frame)
    {
    case 1:
        func_8000BED8(effect_gobj, (uintptr_t)gFTDataPikachuExtra2 + (intptr_t)&D_NF_00001850, (uintptr_t)gFTDataPikachuExtra2 + (intptr_t)&D_NF_00001AC0, 0.0F); // Linker thing
        func_8000DF34(effect_gobj);
        break;

    case 2:
        func_8000BED8(effect_gobj, (uintptr_t)gFTDataPikachuExtra2 + (intptr_t)&D_NF_00001970, (uintptr_t)gFTDataPikachuExtra2 + (intptr_t)&D_NF_00001B10, 0.0F); // Linker thing
        func_8000DF34(effect_gobj);
        break;
    }
    return effect_gobj;
}

// 0x80101A08
void efParticle_ThunderTrail_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (ep->effect_vars.thunder_trail.lifetime == 0)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);

        return;
    }
    else ep->effect_vars.thunder_trail.lifetime--;

    if (DObjGetStruct(effect_gobj)->mobj->current_image_id != 3)
    {
        if (ep->effect_vars.thunder_trail.lifetime == 0)
        {
            DObjGetStruct(effect_gobj)->mobj->current_image_id = 3;

            DObjGetStruct(effect_gobj)->rotate.vec.f.z = F_DEG_TO_RAD(180.0F);
        }
        else DObjGetStruct(effect_gobj)->mobj->current_image_id = lbRandom_GetIntRange(3);
    }
}

// 0x80101AA8
void efParticle_ThunderTrail_ProcRender(void)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_NONE);

    odRenderDObjDLLinksForGObj();

    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_THRESHOLD);
}

// 0x80101B88
GObj* efParticle_ThunderTrail_MakeEffect(Vec3f *pos, s32 lifetime, s32 texture_index)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFThunderTrailEffectDesc);

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

    dobj->mobj->current_image_id = (texture_index == 3) ? 3 : 0;

    return effect_gobj;
}

// 0x80101C34
GObj* efParticle_ThunderJolt_MakeEffect(Vec3f *pos, f32 rotate)
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
void efParticle_VulcanJab_ProcUpdate(GObj *effect_gobj)
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
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);
    }
}

// 0x80101D34
GObj* efParticle_VulcanJab_MakeEffect(Vec3f *pos, s32 lr, f32 rotate, f32 vel, f32 add)
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

    if (lr == LR_Left)
    {
        dobj->rotate.vec.f.y = F_DEG_TO_RAD(180.0F);

        rotate = -rotate;
        vel = -vel;
        add = -add;
    }
    omAddOMMtxForDObjFixed(dobj->child->child, 0x46, 0);

    dobj->rotate.vec.f.z = F_DEG_TO_RAD(rotate);

    sin = bitmap_sinf(dobj->rotate.vec.f.z);
    cos = bitmap_cosf(dobj->rotate.vec.f.z);

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
GObj* efParticle_GrappleBeamGlow_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj = efManagerMakeEffectNoForce(&dEFGrappleBeamEffectDesc);
    efStruct *ep;
    DObj *dobj;

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[23];

    return effect_gobj;
}

// 0x80101ED8
GObj* efParticle_FalconKick_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFFalconKickEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);
    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[23];

    dobj->rotate.vec.f.y = fp->lr * F_DEG_TO_RAD(90.0F);

    if (fp->status_info.status_id == ftStatus_Captain_SpecialAirLw)
    {
        dobj->rotate.vec.f.z = -fp->lr * F_DEG_TO_RAD(60.0F);
    }
    return effect_gobj;
}

// 0x80101F84
GObj* efParticle_FalconPunch_MakeEffect(GObj *fighter_gobj)
{
    ftStruct *fp;
    efStruct *ep;
    DObj *dobj, *joint;
    GObj *effect_gobj;

    effect_gobj = efManagerMakeEffectForce(&dEFFalconPunchEffectDesc);

    if (effect_gobj == NULL)
    {
        return FALSE;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);

    dobj = DObjGetStruct(effect_gobj);

    joint = ((fp->ft_kind == Ft_Kind_Captain) || (fp->ft_kind == Ft_Kind_PolyCaptain)) ? fp->joint[16] : fp->joint[30];

    dobj->user_data.p = joint;

    dobj->rotate.vec.f.y = fp->lr * F_DEG_TO_RAD(-180.0F);

    return effect_gobj;
}

// 0x80102018
efGenerator* efParticle_KirbyStar_MakeEffect(Vec3f *pos)
{
    efGenerator *efgen = func_ovl0_800D35DC(sEFParticleBankID, 0xF);

    if (efgen != NULL)
    {
        efgen->pos.x = pos->x;
        efgen->pos.y = pos->y;
        efgen->pos.z = pos->z;
    }
    return efgen;
}

// 0x80102070
efGenerator* efParticle_StarSplash_MakeEffect(Vec3f *pos, s32 lr)
{
    efGenerator *efgen = (lr == LR_Left) ? func_ovl0_800D35DC(sEFParticleBankID, 0x10) : func_ovl0_800D35DC(sEFParticleBankID, 0x11);

    if (efgen != NULL)
    {
        efgen->pos.x = pos->x;
        efgen->pos.y = pos->y;
        efgen->pos.z = pos->z;
    }
    return efgen;
}

// 0x801020F4
GObj* efParticle_PurinSing_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    DObj *dobj, *sibling_dobj;
    efStruct *ep;

    effect_gobj = efManagerMakeEffectForce(&dEFPurinSingEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);
    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[ftParts_Joint_TopN];

    sibling_dobj = dobj->child;

    omAddOMMtxForDObjFixed(sibling_dobj, 0x46, 0);

    sibling_dobj = dobj->child->sib_next;

    omAddOMMtxForDObjFixed(sibling_dobj, OMMtx_Transform_RotRpyR, 0);

    sibling_dobj = sibling_dobj->child;

    omAddOMMtxForDObjFixed(sibling_dobj, 0x2A, 0);

    sibling_dobj = sibling_dobj->sib_next;

    omAddOMMtxForDObjFixed(sibling_dobj, 0x2A, 0);

    sibling_dobj = sibling_dobj->sib_next;

    omAddOMMtxForDObjFixed(sibling_dobj, 0x2A, 0);

    return effect_gobj;
}

// 0x801021C0
GObj* efParticle_DeadBlast_MakeEffect(Vec3f *pos, s32 player, s32 type)
{
    s32 unused[4];
    GObj *effect_gobj;
    efParticle *efpart;
    efTransform *eftrans;
    DObj *dobj;
    DObj *child_dobj;
    DObj *sibling_dobj;
    u8 index = ((type & 1) * GMMATCH_PLAYERS_MAX) + player; // WARNING: dEFDeadExplodeGenID should be u8[2][GMMATCH_PLAYERS_MAX], but it will not match this way; UB-risk

    efpart = func_ovl0_800CE9E8(sEFParticleBankID | 0x10, dEFDeadExplodeGenID[index]);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;

            eftrans->rotate.z = F_DEG_TO_RAD(dEFDeadExplodeRotateD[type]);
        }
        else func_ovl0_800CEA40(efpart);
    }
    dEFDeadExplodeEffectDesc.o_matanim_joint = dEFDeadExplodeMatAnimJoints[player];

    effect_gobj = efManagerMakeEffectForce(&dEFDeadExplodeEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);
    dobj->translate.vec.f = *pos;

    child_dobj = dobj->child;

    dobj->rotate.vec.f.z = F_DEG_TO_RAD(dEFDeadExplodeRotateD[type]);

    sibling_dobj = dobj->child->sib_next->sib_next;

    sibling_dobj->mobj->sub.envcolor.r = dEFDeadExplodeEnvColorSiblingR[player];
    sibling_dobj->mobj->sub.envcolor.g = dEFDeadExplodeEnvColorSiblingG[player];
    sibling_dobj->mobj->sub.envcolor.b = dEFDeadExplodeEnvColorSiblingB[player];

    sibling_dobj->mobj->sub.flags |= MOBJ_FLAG_ENVCOLOR;

    child_dobj->mobj->sub.envcolor.r = dEFDeadExplodeEnvColorChildR[player];
    child_dobj->mobj->sub.envcolor.g = dEFDeadExplodeEnvColorChildG[player];
    child_dobj->mobj->sub.envcolor.b = dEFDeadExplodeEnvColorChildB[player];

    child_dobj->mobj->sub.flags |= MOBJ_FLAG_ENVCOLOR;

    return effect_gobj;
}

// 0x801023D4
void func_ovl2_801023D4(Vec3f *pos) // Unused
{
    pos->y += 8000.0F;
    pos->x = 4000.0F;

    efParticle_DeadBlast_MakeEffect(pos, 2, 1);
}

// 0x80102418
GObj* efParticle_FinalCutterUp_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFFinalCutterUpEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);
    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[ftParts_Joint_TopN];
    dobj->rotate.vec.f.y = fp->lr * F_DEG_TO_RAD(90.0F);

    return effect_gobj;
}

// 0x80102490
GObj* efParticle_FinalCutterDown_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFFinalCutterDownEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);
    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[ftParts_Joint_TopN];
    dobj->rotate.vec.f.y = fp->lr * F_DEG_TO_RAD(90.0F);

    return effect_gobj;
}

// 0x80102508
GObj* efParticle_FinalCutterDraw_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFFinalCutterDrawEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[17];

    return effect_gobj;
}

// 0x80102560
GObj* efParticle_FinalCutterTrail_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFFinalCutterTrailEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);
    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[17];
    dobj->rotate.vec.f.y = fp->lr * F_DEG_TO_RAD(90.0F);

    return effect_gobj;
}

// 0x801025D8
GObj* efParticle_PsychicMagnet_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectForce(&dEFPsychicMagnetEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[ftParts_Joint_TopN];

    return effect_gobj;
}

// 0x80102630
void efParticle_PKThunderTrail_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    ftStruct *fp;
    s32 index;

    if (ep->effect_vars.pkthunder.status & wpNessPKThunder_Status_Destroy)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);

        return;
    }
    fp = ftGetStruct(ep->effect_vars.pkthunder.owner_gobj);

    index = fp->fighter_vars.ness.pkthunder_trail_id - 2;

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
    DObjGetStruct(effect_gobj)->rotate.vec.f.z -= F_DEG_TO_RAD(90.0F);
}

// 0x80102768
void efParticle_PKThunderTrail_ProcRender(void)
{
    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_NONE);

    odRenderDObjDLLinksForGObj();

    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_THRESHOLD);
}

// 0x80102848
GObj* efParticle_PKThunderTrail_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    ftStruct *fp;
    efStruct *ep;
    wpStruct *wp;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = efManagerMakeEffectNoForce(&dEFPKThunderTrailEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.pkthunder.owner_gobj = fighter_gobj;
    ep->effect_vars.pkthunder.status = wpNessPKThunder_Status_Active;

    DObjGetStruct(effect_gobj)->translate.vec.f.z = 0.0F;

    wp = wpGetStruct(fp->status_vars.ness.specialhi.pkthunder_gobj);

    wp->weapon_vars.pkthunder.trail_gobj[ARRAY_COUNT(wp->weapon_vars.pkthunder.trail_gobj) - 1] = effect_gobj;

    efParticle_PKThunderTrail_ProcUpdate(effect_gobj);

    return effect_gobj;
}

// 0x801028C0
void efParticle_PKReflectTrail_ProcUpdate(GObj *effect_gobj)
{
    GObj *weapon_gobj;
    efStruct *ep;
    wpStruct *wp;

    ep = efGetStruct(effect_gobj);

    if (ep->effect_vars.pkthunder.status & wpNessPKThunder_Status_Destroy)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);

        return;
    }
    wp = wpGetStruct(ep->effect_vars.pkthunder.owner_gobj);

    DObjGetStruct(effect_gobj)->translate.vec.f.x = (DObjGetStruct(ep->effect_vars.pkthunder.owner_gobj)->translate.vec.f.x - wp->phys_info.vel.x * 5.0F * 2);
    DObjGetStruct(effect_gobj)->translate.vec.f.y = (DObjGetStruct(ep->effect_vars.pkthunder.owner_gobj)->translate.vec.f.y - wp->phys_info.vel.y * 5.0F * 2);
}

// 0x80102968
GObj* efParticle_PKReflectTrail_MakeEffect(GObj *weapon_gobj)
{
    GObj *effect_gobj;
    wpStruct *wp;
    efStruct *ep;

    wp = wpGetStruct(weapon_gobj);

    effect_gobj = efManagerMakeEffectNoForce(&dEFPKReflectTrailEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->effect_vars.pkthunder.owner_gobj = weapon_gobj;
    ep->effect_vars.pkthunder.status = wpNessPKThunder_Status_Active;

    DObjGetStruct(effect_gobj)->translate.vec.f.z = 0.0F;

    DObjGetStruct(effect_gobj)->rotate.vec.f.z = DObjGetStruct(weapon_gobj)->rotate.vec.f.z - F_DEG_TO_RAD(90.0F);

    wp->weapon_vars.pkthunder.trail_gobj[ARRAY_COUNT(wp->weapon_vars.pkthunder.trail_gobj) - 1] = effect_gobj;

    efParticle_PKReflectTrail_ProcUpdate(effect_gobj);

    return effect_gobj;
}

// 0x801029F8
GObj* efParticle_PKThunderWave_MakeEffect(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *effect_gobj = efManagerMakeEffectNoForce(&dEFPKThunderWaveEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    else
    {
        efStruct *ep = efGetStruct(effect_gobj);

        ep->fighter_gobj = fighter_gobj;

        DObjGetStruct(effect_gobj)->user_data.p = fp->joint[5];

        DObjGetStruct(effect_gobj)->rotate.vec.f.y = fp->lr * F_DEG_TO_RAD(90.0F);
        DObjGetStruct(effect_gobj)->translate.vec.f.z = 0.0F;

        return effect_gobj;
    }
}

// 0x80102A88 - Unused? (Edit 6/4/2024: PK FLASH? WTF???)
GObj* efParticle_PKFlash_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFPKFlashEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102AE4
GObj* efParticle_LinkEntryWave_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFLinkEntryWaveEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102B40
GObj* efParticle_LinkEntryBeam_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFLinkEntryBeamEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102B9C
GObj* efParticle_KirbyEntryStar_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    DObj *dobj;

    dEFKirbyEntryStarEffectDesc.o_anim_joint = (lr == LR_Right) ? &lEFKirbyEntryStarRAnimJoint : &lEFKirbyEntryStarLAnimJoint; // Linker thing

    effect_gobj = efManagerMakeEffectNoForce(&dEFKirbyEntryStarEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102C28
GObj* efParticle_MBallRays_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFMBallRaysEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102C84
void efMBallThrownProcUpdate(GObj *effect_gobj)
{
    DObj *dobj = DObjGetStruct(effect_gobj)->child;

    if (dobj->translate.vec.f.z > 1000.0F)
    {
        if (dobj->parent_gobj->dl_link_id != 20)
        {
            omMoveGObjDL(dobj->parent_gobj, 20, 2);
        }
    }
    else if (dobj->parent_gobj->dl_link_id != 10)
    {
        omMoveGObjDL(dobj->parent_gobj, 10, 2);
    }
    efManagerDefaultEndEjectProcUpdate(effect_gobj);
}

// 0x80102D14
GObj* efParticle_MBallThrown_MakeEffect(Vec3f *pos, s32 lr) // Many linker things here
{
    GObj *effect_gobj;
    DObj *dobj;
    void **p_file;
    void *file;

    dEFMBallThrownEffectDesc.file_head = &file;

    p_file = (void**)((uintptr_t)gITFileData + (intptr_t)&lEFMBallThrownFileHead);

    file = ((uintptr_t)*p_file - (intptr_t)&lEFMBallThrownDObjSetup);

    if (lr == LR_Right)
    {
        dEFMBallThrownEffectDesc.o_anim_joint = (intptr_t)&lEFMBallThrownRAnimJoint;
        dEFMBallThrownEffectDesc.o_matanim_joint = (intptr_t)&lEFMBallThrownRMatAnimJoint;
    }
    else
    {
        dEFMBallThrownEffectDesc.o_anim_joint = (intptr_t)&lEFMBallThrownLAnimJoint;
        dEFMBallThrownEffectDesc.o_matanim_joint = (intptr_t)&lEFMBallThrownLMatAnimJoint;
    }
    effect_gobj = efManagerMakeEffectNoForce(&dEFMBallThrownEffectDesc);

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
efParticle* efParticle_FireGrind_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID | 8, 0xB);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80102E90
efParticle* efParticle_HealSparkles_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID | 8, 0xE);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80102F34
GObj* efParticle_YoshiEntryEgg_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFYoshiEntryEggEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80102F90
void efYoshiEggLaySetAnim(GObj *effect_gobj, s32 index)
{
    efStruct *ep = efGetStruct(effect_gobj);

    ep->effect_vars.yoshi_egg_lay.index = index;

    func_ovl0_800C8758(DObjGetStruct(effect_gobj)->child, (uintptr_t)gFTDataYoshiExtra3 + dEFYoshiEggLayAnimJoints[index], 1.0F);
}

// 0x80102FE4
void efYoshiEggLayProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);

    if (ep->effect_vars.yoshi_egg_lay.force_index != ep->effect_vars.yoshi_egg_lay.index)
    {
        efYoshiEggLaySetAnim(effect_gobj, ep->effect_vars.yoshi_egg_lay.force_index);
    }
    func_8000DF34(effect_gobj);

    if ((ep->effect_vars.yoshi_egg_lay.index == 2) && (effect_gobj->anim_frame <= 0.0F))
    {
        ep->effect_vars.yoshi_egg_lay.force_index = 0;
    }
}

// 0x80103060
GObj* efParticle_YoshiEggLay_MakeEffect(GObj *fighter_gobj)
{
    void *unused;
    ftStruct *fp;
    efStruct *ep;
    GObj *effect_gobj;
    DObj *dobj;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = efManagerMakeEffectForce(&dEFYoshiEggLayEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;
    ep->effect_vars.yoshi_egg_lay.index = ep->effect_vars.yoshi_egg_lay.force_index = 2;

    dobj = DObjGetStruct(effect_gobj);
    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[ftParts_Joint_TopN];

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = dFTYoshiEggHurtboxDesc[fp->ft_kind].gfx_size;
    dobj->scale.vec.f.z = 1.0F;

    dobj->child->child->ommtx[0]->kind = OMMtx_Transform_Tra;

    omAddOMMtxForDObjFixed(dobj->child->child, 0x2E, 0);
    func_ovl0_800C9314(dobj->child, (uintptr_t)gFTDataYoshiExtra3 + (intptr_t)&lEFYoshiEggLayDObjSetup);

    return effect_gobj;
}

// 0x80103150
GObj* efParticle_YoshiEggRoll_MakeEffect(GObj *fighter_gobj)
{
    ftStruct *fp;
    efStruct *ep;
    GObj *effect_gobj;
    DObj *dobj;

    fp = ftGetStruct(fighter_gobj);

    effect_gobj = efManagerMakeEffectForce(&dEFYoshiEggEscapeEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ftCommon_HideModelPartAll(fighter_gobj);

    fp->is_attach_effect = TRUE;

    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = 1.5F;

    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[5];

    return effect_gobj;
}

// 0x801031E0
efParticle* func_ovl2_801031E0(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(gFTDataKirbyParticles, 2);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80103280
efParticle* func_ovl2_80103280(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(gFTDataKirbyParticles, 5);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80103320
efParticle* efParticle_FoxBlasterGlow_MakeEffect(Vec3f *pos)
{
    efParticle *efpart;

    efpart = func_ovl0_800CE870(sEFParticleBankID, 0x62);

    if (efpart != NULL)
    {
        efpart->pos.x = pos->x;
        efpart->pos.y = pos->y;
        efpart->pos.z = pos->z;
    }
    return efpart;
}

// 0x80103378
GObj* efParticle_SpinAttackTrail_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    ftStruct *fp;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFSpinAttackEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    fp = ftGetStruct(fighter_gobj);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;

    dobj = DObjGetStruct(effect_gobj);

    dobj->user_data.p = fp->joint[ftParts_Joint_TopN];

    dobj->rotate.vec.f.y = (ftGetStruct(fighter_gobj)->lr == LR_Right) ? F_DEG_TO_RAD(30.0F) : F_DEG_TO_RAD(210.0F);

    return effect_gobj;
}

// 0x80103418
GObj* efParticle_DonkeyEntryBarrel_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFDonkeyEntryTaruEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80103474
GObj* efParticle_SamusEntryPoint_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFSamusEntryPointEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x801034D0
void efCaptainEntryCarProcUpdate(GObj *effect_gobj)
{
    DObj *dobj = DObjGetStruct(effect_gobj)->child;

    func_8000DF34(effect_gobj);

    if (dobj->dobj_f2 <= 0.0F)
    {
        efManager_SetPrevAlloc(efGetStruct(effect_gobj));
        omEjectGObj(effect_gobj);
    }
    else if (DObjGetStruct(effect_gobj)->rotate.vec.f.y == F_DEG_TO_RAD(0.0F)) // This could mean trouble if the macro is changed... Need different zero literals
    {
        efManagerSortZNeg(dobj, effect_gobj);
    }
    else efManagerSortZPos(dobj, effect_gobj);
}

// 0x8010356C
GObj* efParticle_CaptainEntryCar_MakeEffect(Vec3f *pos, s32 lr)
{
    DObj *node_dobj;
    GObj *effect_gobj;
    DObj *dobj;
    s32 i;

    effect_gobj = efManagerMakeEffectNoForce(&dEFCaptainEntryCarEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    func_8000BD8C(effect_gobj, (uintptr_t)gFTDataCaptainExtra2 + (intptr_t)&D_NF_00006200, 0.0F);

    node_dobj = dobj->child->child->child;

    for (i = ftParts_Joint_EnumMax; i > 0; i--)
    {
        omAddOMMtxForDObjFixed(node_dobj, 0x2C, 0);

        omAddDObjAnimAll(node_dobj, (uintptr_t)gFTDataCaptainExtra2 + (intptr_t)&D_NF_00006518, 0.0F);

        node_dobj = node_dobj->sib_next;

        omAddDObjAnimAll(node_dobj, (uintptr_t)gFTDataCaptainExtra2 + (intptr_t)&D_NF_00006598, 0.0F);

        node_dobj = node_dobj->sib_next;
    }
    func_8000DF34(effect_gobj);

    dobj->translate.vec.f = *pos;

    if (lr == LR_Left)
    {
        dobj->rotate.vec.f.y = F_DEG_TO_RAD(180.0F);
    }
    if (DObjGetStruct(effect_gobj)->rotate.vec.f.y == F_DEG_TO_RAD(0.0F))
    {
        efManagerSortZNeg(dobj->child);
    }
    else efManagerSortZPos(dobj->child);

    return effect_gobj;
}

// 0x801036EC
GObj* efParticle_MarioEntryPipe_MakeEffect(Vec3f *pos, s32 ft_kind)
{
    GObj *effect_gobj;
    DObj *dobj;

    switch (ft_kind)
    {
    case Ft_Kind_Mario:
        dEFMarioEntryDokanEffectDesc.file_head = &gFTDataMarioExtra2;
        break;

    case Ft_Kind_Luigi:
        dEFMarioEntryDokanEffectDesc.file_head = &gFTDataLuigiExtra2;
        break;
    }
    effect_gobj = efManagerMakeEffectNoForce(&dEFMarioEntryDokanEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x80103780
void efFoxEntryArwingProcUpdate(GObj *effect_gobj)
{
    DObj *dobj = DObjGetStruct(effect_gobj)->child;

    func_8000DF34(effect_gobj);

    if (dobj->dobj_f2 <= 0.0F)
    {
        efManager_SetPrevAlloc(efGetStruct(effect_gobj));
        omEjectGObj(effect_gobj);
    }
    else efManagerSortZNeg(dobj);
}

// 0x801037EC
GObj* efParticle_FoxEntryArwing_MakeEffect(Vec3f *pos, s32 lr)
{
    GObj *effect_gobj;
    DObj *dobj;
    DObj *what;

    effect_gobj = efManagerMakeEffectNoForce(&dEFFoxEntryArwingEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);
    what = dobj->child->child->child->sib_next->sib_next->sib_next->sib_next->sib_next->sib_next->child;

    omAddOMMtxForDObjFixed(what, 0x2C, 0);
    omAddDObjAnimAll(what, (uintptr_t)gFTDataFoxExtra3 + (intptr_t)&D_NF_00002E74, 0.0F); // Linker thing

    if (lr == LR_Right)
    {
        func_ovl0_800C8758(dobj->child, (uintptr_t)gFTDataFoxExtra2 + (intptr_t)&D_NF_000009E0, 0.0F); // Linker thing
    }
    else func_ovl0_800C8758(dobj->child, (uintptr_t)gFTDataFoxExtra2 + (intptr_t)&D_NF_00000590, 0.0F); // Linker thing

    func_8000DF34(effect_gobj);

    dobj->translate.vec.f = *pos;

    efManagerSortZNeg(dobj->child);

    return effect_gobj;
}

// 0x80103918
void func_ovl2_80103918(f32 arg0, f32 arg1, s32 arg2)
{
    arg0 *= 4.0F;
    arg1 *= 4.0F;

    func_ovl0_800CE8C0(sEFParticleBankID | 0x18, arg2, arg0, arg1, 0.0F, 0.0F, 0.0F, 0.0F);
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
efParticle* efParticle_SingNote_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID | 8, dEFPurinSingNoteGenIDs[ lbRandom_GetIntRange( ARRAY_COUNT(dEFPurinSingNoteGenIDs) ) ]);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80103A88
efParticle* efParticle_YoshiEggExplode_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(gFTDataYoshiParticles, 3);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80103B28
void efParticle_CaptureKirbyStar_ProcUpdate(GObj *effect_gobj)
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

    copy_data = (ftKirbyCopy*) ((uintptr_t)gFTDataKirbyBattleMotion + (intptr_t)&lFTKirbySpecialNCopyData);

    child_dobj = topn_dobj->child;

    topn_dobj->translate.vec.f.z = 0.0F;

    child_dobj->rotate.vec.f.z += EFPART_CAPTUREKIRBYSTAR_ROTATE_STEP;

    if (ep->effect_vars.capture_kirby_star.effect_timer % EFPART_CAPTUREKIRBYSTAR_SPARK_TIMER_MOD)
    {
        pos = DObjGetStruct(ep->fighter_gobj)->translate.vec.f;

        pos.y += lbRandom_GetIntRange(copy_data[fp->ft_kind].effect_scale * EFPART_CAPTUREKIRBYSTAR_SPARK_SCATTER_Y);

        if (fp->phys_info.vel_air.x > 0.0F)
        {
            pos.x -= lbRandom_GetIntRange(copy_data[fp->ft_kind].effect_scale * EFPART_CAPTUREKIRBYSTAR_SPARK_SCATTER_X);
            efParticle_StarRodSpark_MakeEffect(&pos, LR_Left);
        }
        else
        {
            pos.x += lbRandom_GetIntRange(copy_data[fp->ft_kind].effect_scale * EFPART_CAPTUREKIRBYSTAR_SPARK_SCATTER_X);
            efParticle_StarRodSpark_MakeEffect(&pos, LR_Right);
        }
    }
    ep->effect_vars.capture_kirby_star.effect_timer++;
}

// 0x80103CF8
GObj* efParticle_CaptureKirbyStar_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    void *addr;
    void **p_addr;
    DObj *dobj;
    ftKirbyCopy *copy_data;

    copy_data = (ftKirbyCopy*) ((uintptr_t)gFTDataKirbyBattleMotion + (intptr_t)&lFTKirbySpecialNCopyData);

    dEFCaptureKirbyStarEffectDesc.file_head = &addr;

    p_addr = (void**) ((uintptr_t)gITFileData + (intptr_t)&D_NF_000004D4);

    addr = ((uintptr_t)*p_addr - (intptr_t)&lEFKirbyStarDObjSetup);

    effect_gobj = efManagerMakeEffectNoForce(&dEFCaptureKirbyStarEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);
    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f.y += EFPART_CAPTUREKIRBYSTAR_SPARK_OFF_Y;

    dobj->child->user_data.p = ftGetStruct(fighter_gobj)->joint[ftParts_Joint_TopN];

    dobj->child->scale.vec.f.x = dobj->child->scale.vec.f.y = copy_data[ftGetStruct(fighter_gobj)->ft_kind].effect_scale;
    dobj->child->scale.vec.f.z = 1.0F;

    ep->effect_vars.capture_kirby_star.effect_timer = 0;

    return effect_gobj;
}

// 0x80103DF8
void efParticle_LoseKirbyStar_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj)->child;
    Vec3f *translate = &dobj->translate.vec.f;

    dobj->rotate.vec.f.z += F_DEG_TO_RAD(10.0F);

    dobj->translate.vec.f.x += ep->effect_vars.lose_kirby_star.vel.x;
    dobj->translate.vec.f.y += ep->effect_vars.lose_kirby_star.vel.y;

    ep->effect_vars.lose_kirby_star.vel.y -= EFPART_LOSEKIRBYSTAR_GRAVITY;

    if (ep->effect_vars.lose_kirby_star.vel.y < EFPART_LOSEKIRBYSTAR_TVEL)
    {
        ep->effect_vars.lose_kirby_star.vel.y = EFPART_LOSEKIRBYSTAR_TVEL;
    }
    if (ep->effect_vars.lose_kirby_star.lifetime-- <= 0)
    {
        func_800269C0(alSound_SFX_KirbyStarPing1);
        efParticle_StarSplash_MakeEffect(translate, ep->effect_vars.lose_kirby_star.lr);
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);
    }
    else if
    (
        (gGroundInfo->blastzone_bottom > translate->y) ||
        (gGroundInfo->blastzone_right  < translate->x) ||
        (gGroundInfo->blastzone_left   > translate->x) ||
        (gGroundInfo->blastzone_top    < translate->y)
    )
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObj(effect_gobj);
    }
}

// 0x80103F78
GObj* efParticle_LoseKirbyStar_MakeEffect(GObj *fighter_gobj)
{
    GObj *effect_gobj;
    efStruct *ep;
    void *aobj;
    void **p_aobj;
    DObj *dobj;

    dEFLoseKirbyStarEffectDesc.file_head = &aobj;

    p_aobj = (void**)((uintptr_t)gITFileData + (intptr_t)&D_NF_000004D4);

    aobj = ((uintptr_t)*p_aobj - (intptr_t)&lEFKirbyStarDObjSetup);

    effect_gobj = efManagerMakeEffectNoForce(&dEFLoseKirbyStarEffectDesc);

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
GObj* efParticle_RebirthHalo_MakeEffect(GObj *fighter_gobj, f32 scale)
{
    GObj *effect_gobj;
    efStruct *ep;
    DObj *dobj, *child;

    effect_gobj = efManagerMakeEffectForce(&dEFRebirthHaloEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    ep = efGetStruct(effect_gobj);

    ep->fighter_gobj = fighter_gobj;

    dobj = DObjGetStruct(effect_gobj);
    dobj->user_data.p = ftGetStruct(fighter_gobj)->joint[ftParts_Joint_TopN];

    child = DObjGetStruct(effect_gobj)->child;
    child->scale.vec.f.x = child->scale.vec.f.y = child->scale.vec.f.z = scale;

    return effect_gobj;
}

// 0x801040E0
efParticle* efParticle_BattleScoreDisplay_MakeEffect(Vec3f *pos, s32 arg1)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID | 0x18, (arg1 > 0) ? 0x43 : 0x44);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans == NULL)
        {
            func_ovl0_800CEA40(efpart);

            return NULL;
        }
        func_ovl0_800CEA14(efpart);

        if (eftrans->unk_effect_0x2A == 0)
        {
            return NULL;
        }
        eftrans->translate = *pos;

        eftrans->scale.y = 0.25F;
    }
    return efpart;
}

// 0x801041A0
efParticle* efParticle_EggBreak_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x54);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80104240
void efParticle_KirbyInhaleWind_ProcUpdate(GObj *effect_gobj)
{
    efStruct *ep = efGetStruct(effect_gobj);
    efTransform *eftrans = ep->eftrans;

    eftrans->translate = DObjGetStruct(ep->fighter_gobj)->translate.vec.f;

    eftrans->translate.x += ftGetStruct(ep->fighter_gobj)->lr * 800.0F;
    eftrans->translate.y += 230.0F;
}

// 0x801042B4
efParticle* efParticle_KirbyInhaleWind_MakeEffect(GObj *fighter_gobj)
{
    efParticle *efpart;
    efTransform *eftrans;
    GObj *effect_gobj;
    efStruct *ep;

    ep = efManager_GetStructForceReturn();

    if (ep == NULL)
    {
        return 0;
    }
    effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        efManager_SetPrevAlloc(ep);

        return NULL;
    }
    effect_gobj->user_data.p = ep;

    efpart = func_ovl0_800CE9E8(gFTDataKirbyParticles | 8, 0xC);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = DObjGetStruct(fighter_gobj)->translate.vec.f;

            eftrans->translate.x += ftGetStruct(fighter_gobj)->lr * 800.0F;
            eftrans->translate.y += 230.0F;

            eftrans->scale.x = 1.0F;
            eftrans->scale.y = 1.0F;
            eftrans->scale.z = 1.0F;

            eftrans->rotate.z = (ftGetStruct(fighter_gobj)->lr == LR_Left) ? F_DEG_TO_RAD(180.0F) : F_DEG_TO_RAD(-180.0F);

            effect_gobj->user_data.p = ep; // y u do dis again

            omAddGObjCommonProc(effect_gobj, efParticle_KirbyInhaleWind_ProcUpdate, 1, 3);

            ep->eftrans = efpart->effect_info;

            ep->unk_effectstruct_0x8 = efpart->unk_efpart_0x8;

            ep->fighter_gobj = fighter_gobj;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80104458
GObj* efParticle_ItemPickupSwirl_ProcUpdate(Vec3f *pos)
{
    GObj *effect_gobj;
    DObj *dobj;

    effect_gobj = efManagerMakeEffectNoForce(&dEFItemGetSwirlEffectDesc);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f = *pos;

    return effect_gobj;
}

// 0x801044B4
efParticle* efParticle_ItemSpawnSwirl_MakeEffect(Vec3f *pos)
{
    efParticle *efpart = func_ovl0_800CE9E8(sEFParticleBankID, 0x69);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}

// 0x80104554
efParticle* func_ovl2_80104554(Vec3f *pos, s32 arg1)
{
    efParticle *efpart = (arg1 != 0) ? func_ovl0_800CE9E8(sEFParticleBankID, 0x70) : func_ovl0_800CE9E8(sEFParticleBankID | 0x20, 0x70);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 1);

        if (eftrans != NULL)
        {
            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                return NULL;
            }
            eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            efpart = NULL;
        }
    }
    return efpart;
}
