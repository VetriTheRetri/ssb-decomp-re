#ifndef _EFMANAGER_H_
#define _EFMANAGER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern intptr_t lEFManagerShieldDObjSetup;                   // 0x00000300

extern intptr_t lEFManagerYoshiShieldDObjSetup;              // 0x0000A860

extern intptr_t D_NF_000004D4;
extern intptr_t lEFManagerKirbyStarDObjSetup;                // 0x00005458

extern intptr_t lEFManagerPikachuUnkMObjSub;                 // 0x00000640
extern intptr_t lEFManagerPikachuUnkDObjSetup;               // 0x00000800
extern intptr_t lEFManagerPikachuUnkAnimJoint;               // 0x00000890
extern intptr_t lEFManagerPikachuUnkMatAnimJoint;            // 0x00000900

extern intptr_t lEFManagerPikachuThunderShockMObjSub;               // 0x000013A0
extern intptr_t lEFManagerPikachuThunderShockDObjSetup;             // 0x00001640
extern intptr_t lEFManagerPikachuThunderShock0AnimJoint;             // 0x00001720
extern intptr_t lEFManagerPikachuThunderShock1AnimJoint;             // 0x00001850
extern intptr_t lEFManagerPikachuThunderShock2AnimJoint;            // 0x00001970
extern intptr_t lEFManagerPikachuThunderShock0MatAnimJoint;          // 0x00001A80
extern intptr_t lEFManagerPikachuThunderShock1MatAnimJoint;         // 0x00001AC0
extern intptr_t lEFManagerPikachuThunderShock2MatAnimJoint;         // 0x00001B10

extern intptr_t lEFManagerPikachuThunderTrailMObjSub;               // 0x00009420
extern intptr_t lEFManagerPikachuThunderTrailDObjSetup;             // 0x000095B0

extern intptr_t lEFManagerPikachuThunderJoltMObjSub;                // 0x000020A0
extern intptr_t lEFManagerPikachuThunderJoltDObjSetup;              // 0x00002258
extern intptr_t lEFManagerPikachuThunderJoltAnimJoint;              // 0x000022E0
extern intptr_t lEFManagerPikachuThunderJoltMatAnimJoint;           // 0x00002350

extern intptr_t lEFManagerKirbyVulcanJabDObjSetup;                // 0x00000B20

extern intptr_t lEFManagerSamusGrappleBeamMObjSub;                // 0x00000210
extern intptr_t lEFManagerSamusGrappleBeamDObjSetup;              // 0x00000380
extern intptr_t lEFManagerSamusGrappleBeamAnimJoint;              // 0x00000410
extern intptr_t lEFManagerSamusGrappleBeamMatAnimJoint;           // 0x00000480

extern intptr_t lEFManagerCaptainFalconKickMObjSub;                 // 0x00000960
extern intptr_t lEFManagerCaptainFalconKickDObjSetup;               // 0x00000B08
extern intptr_t lEFManagerCaptainFalconKickAnimJoint;               // 0x00000B90
extern intptr_t lEFManagerCaptainFalconKickMatAnimJoint;            // 0x00000C00

extern intptr_t lEFManagerCaptainFalconPunchMObjSub;                // 0x00000690
extern intptr_t lEFManagerCaptainFalconPunchDObjSetup;              // 0x00000760
extern intptr_t lEFManagerCaptainFalconPunchMatAnimJoint;           // 0x00000830

extern intptr_t lEFManagerPurinSingMObjSub;                  // 0x00001C20
extern intptr_t lEFManagerPurinSingDObjSetup;                // 0x00002130
extern intptr_t lEFManagerPurinSingAnimJoint;                // 0x00002270
extern intptr_t lEFManagerPurinSingMatAnimJoint;             // 0x00002D70

extern intptr_t lEFManagerDeadExplodeDefaultMObjSub;         // 0x00004F08
extern intptr_t lEFManagerDeadExplodeDefaultDObjSetup;       // 0x000053E8
extern intptr_t lEFManagerDeadExplodeDefaultAnimJoint;       // 0x000054D0
extern intptr_t lEFManagerDeadExplodeDefaultMatAnimJoint;    // 0x00005870

extern intptr_t lEFManagerDeadExplode1PMatAnimJoint;         // 0x000058E0
extern intptr_t lEFManagerDeadExplode2PMatAnimJoint;         // 0x00005800
extern intptr_t lEFManagerDeadExplode3PMatAnimJoint;         // 0x00005950
extern intptr_t lEFManagerDeadExplode4PMatAnimJoint;         // 0x00005870

extern intptr_t lEFManagerKirbyCutterUpDObjSetup;            // 0x000012E8
extern intptr_t lEFManagerKirbyCutterUpAnimJoint;            // 0x00001470

extern intptr_t lEFManagerKirbyCutterDownDObjSetup;          // 0x00002390
extern intptr_t lEFManagerKirbyCutterDownAnimJoint;          // 0x000024D0

extern intptr_t lEFManagerKirbyCutterDrawDObjSetup;          // 0x00002888

extern intptr_t lEFManagerKirbyCutterTrailDObjSetup;         // 0x00000DF8
extern intptr_t lEFManagerKirbyCutterTrailAnimJoint;         // 0x000013F0

extern intptr_t lEFManagerNessPsychicMagnetMObjSub;              // 0x00000810
extern intptr_t lEFManagerNessPsychicMagnetDObjSetup;            // 0x000009A8
extern intptr_t lEFManagerNessPsychicMagnetAnimJoint;            // 0x00000A30
extern intptr_t lEFManagerNessPsychicMagnetMatAnimJoint;         // 0x00000AD0

extern intptr_t lEFManagerNessPKThunderTrailDObjSetup;           // 0x00009050

extern intptr_t lEFManagerNessPKThunderWaveMObjSub;              // 0x00009870
extern intptr_t lEFManagerNessPKThunderWaveDObjSetup;            // 0x00009A10
extern intptr_t lEFManagerNessPKThunderWaveAnimJoint;            // 0x00009AC0
extern intptr_t lEFManagerNessPKThunderWaveMatAnimJoint;         // 0x00009BB0

extern intptr_t lEFManagerLinkEntryWaveMObjSub;              // 0x00000130
extern intptr_t lEFManagerLinkEntryWaveDObjSetup;            // 0x000003F8
extern intptr_t lEFManagerLinkEntryWaveAnimJoint;            // 0x00000840
extern intptr_t lEFManagerLinkEntryWaveMatAnimJoint;         // 0x00000B90

extern intptr_t lEFManagerLinkEntryBeamMObjSub;              // 0x000004F0
extern intptr_t lEFManagerLinkEntryBeamDObjSetup;            // 0x000007B8
extern intptr_t lEFManagerLinkEntryBeamAnimJoint;            // 0x00000B60
extern intptr_t lEFManagerLinkEntryBeamMatAnimJoint;         // 0x00000BF0

extern intptr_t lEFManagerKirbyEntryStarDObjSetup;           // 0x00001DA8
extern intptr_t lEFManagerKirbyEntryStarLAnimJoint;          // 0x00001E30
extern intptr_t lEFManagerKirbyEntryStarRAnimJoint;          // 0x00001EA0

extern intptr_t lEFManagerMBallRaysMObjSub;                  // 0x00000108
extern intptr_t lEFManagerMBallRaysDObjSetup;                // 0x00000628
extern intptr_t lEFManagerMBallRaysAnimJoint;                // 0x00000710
extern intptr_t lEFManagerMBallRaysMatAnimJoint;             // 0x00000860

extern intptr_t lEFManagerMBallThrownFileHead;               // 0x000006E4
extern intptr_t lEFManagerMBallThrownMObjSub;                // 0x00009120
extern intptr_t lEFManagerMBallThrownDObjSetup;              // 0x00009430
extern intptr_t lEFManagerMBallThrownLAnimJoint;             // 0x000095E0
extern intptr_t lEFManagerMBallThrownRAnimJoint;             // 0x00009690
extern intptr_t lEFManagerMBallThrownLMatAnimJoint;          // 0x00009740
extern intptr_t lEFManagerMBallThrownRMatAnimJoint;          // 0x00009810

extern intptr_t lEFManagerYoshiEntryEggMObjSub;              // 0x00000460
extern intptr_t lEFManagerYoshiEntryEggDObjSetup;            // 0x00000530
extern intptr_t lEFManagerYoshiEntryEggAnimJoint;            // 0x00000600
extern intptr_t lEFManagerYoshiEntryEggMatAnimJoint;         // 0x00000780

extern intptr_t lEFManagerYoshiEggLayDObjSetup;              // 0x00000960
extern intptr_t lEFManagerYoshiEggLayBreakAnimJoint;         // 0x000009F0
extern intptr_t lEFManagerYoshiEggLayThrowAnimJoint;         // 0x00000B90
extern intptr_t lEFManagerYoshiEggLayWaitAnimJoint;          // 0x00000DB0

extern intptr_t lEFManagerLinkSpinAttackMObjSub;                 // 0x00001038
extern intptr_t lEFManagerLinkSpinAttackDObjSetup;               // 0x000011C0
extern intptr_t lEFManagerLinkSpinAttackAnimJoint;               // 0x00001250
extern intptr_t lEFManagerLinkSpinAttackMatAnimJoint;            // 0x000012F0

extern intptr_t lEFManagerDonkeyEntryTaruDObjSetup;          // 0x000007C8
extern intptr_t lEFManagerDonkeyEntryTaruAnimJoint;          // 0x00000850

extern intptr_t lEFManagerSamusEntryPointDObjSetup;          // 0x00000B90
extern intptr_t lEFManagerSamusEntryPointAnimJoint;          // 0x00000C20

extern intptr_t lEFManagerCaptainEntryCarDObjSetup;          // 0x00005FC0

extern intptr_t lEFManagerMarioEntryDokanDObjSetup;          // 0x00000608
extern intptr_t lEFManagerMarioEntryDokanAnimJoint;          // 0x000006C0

extern intptr_t lEFManagerFoxEntryArwingDObjSetup;           // 0x00002C30
extern intptr_t D_NF_00000590;                              // 0x00000590
extern intptr_t D_NF_000009E0;                              // 0x000009E0
extern intptr_t D_NF_00002E74;                              // 0x00002E74

extern intptr_t lEFManagerRebirthHaloDObjSetup;              // 0x00002AC0
extern intptr_t lEFManagerRebirthHaloAnimJoint;              // 0x00002B70

extern intptr_t lEFManagerItemGetSwirlMObjSub;               // 0x00002CA8
extern intptr_t lEFManagerItemGetSwirlDObjSetup;             // 0x00003170
extern intptr_t lEFManagerItemGetSwirlAnimJoint;             // 0x000032B0
extern intptr_t lEFManagerItemGetSwirlMatAnimJoint;          // 0x00003490

extern intptr_t lEFManagerReflectBreakMObjSub;               // 0x00002F78
extern intptr_t lEFManagerReflectBreakDObjSetup;             // 0x00003398
extern intptr_t lEFManagerReflectBreakAnimJoint;             // 0x000034A0
extern intptr_t lEFManagerReflectBreakMatAnimJoint;          // 0x000035A0

extern intptr_t lEFManagerCatchSwirlMObjSub;                 // 0x000022B8
extern intptr_t lEFManagerCatchSwirlDObjSetup;               // 0x00002760
extern intptr_t lEFManagerCatchSwirlAnimJoint;               // 0x000028A0
extern intptr_t lEFManagerCatchSwirlMatAnimJoint;            // 0x00002AB0

extern intptr_t lEFManagerFoxReflectorDObjSetup;                // 0x000002B0
extern intptr_t lEFManagerFoxReflectorAnimJointStart;           // 0x00000340
extern intptr_t lEFManagerFoxReflectorAnimJointHit;             // 0x000003A0
extern intptr_t lEFManagerFoxReflectorAnimJointEnd;             // 0x00000430
extern intptr_t lEFManagerFoxReflectorAnimJointLoop;            // 0x000004C0

extern intptr_t lEFManagerFireSparkMObjSub;                  // 0x00001EA0
extern intptr_t lEFManagerFireSparkDObjSetup;                // 0x00002040
extern intptr_t lEFManagerFireSparkAnimJoint;                // 0x000020D0
extern intptr_t lEFManagerFireSparkMatAnimJoint;             // 0x00002170

extern intptr_t lEFManagerDamageSlashMObjSub;                // 0x000073E0
extern intptr_t lEFManagerDamageSlashDObjSetup;              // 0x00007750
extern intptr_t lEFManagerDamageSlashAnimJoint;              // 0x00007800
extern intptr_t lEFManagerDamageSlashMatAnimJoint;           // 0x00007860

extern intptr_t lEFManagerShockSmallMObjSub;                 // 0x00001428
extern intptr_t lEFManagerShockSmallDObjSetup;               // 0x00001500
extern intptr_t lEFManagerShockSmallMatAnimJoint;            // 0x00001570

extern intptr_t lEFManagerDamageFlyOrbsDObjSetup;            // 0x00007E80
extern intptr_t lEFManagerDamageFlyOrbsAnimJoint;            // 0x00007F40
    
extern intptr_t lEFManagerImpactWaveMObjSub;                 // 0x00007A80
extern intptr_t lEFManagerImpactWaveDObjSetup;               // 0x00007C28
extern intptr_t lEFManagerImpactWaveAnimJoint;               // 0x00007D40
extern intptr_t lEFManagerImpactWaveMatAnimJoint;            // 0x00007DA0

extern intptr_t lEFManagerCommonSparkMObjSub;                // 0x00008EC0
extern intptr_t lEFManagerCommonSparkDObjSetup;              // 0x00008FA0
extern intptr_t lEFManagerCommonSparkAnimJoint;              // 0x00009050
extern intptr_t lEFManagerCommonSparkMatAnimJoint;           // 0x000090C0

extern intptr_t lEFManagerDamageFlyMDustMObjSub;             // 0x0000C978
extern intptr_t lEFManagerDamageFlyMDustDObjSetup;           // 0x0000CAC8
extern intptr_t lEFManagerDamageFlyMDustAnimJoint;           // 0x0000CAE0
extern intptr_t lEFManagerDamageFlyMDustMatAnimJoint;        // 0x0000CB40

extern intptr_t D_NF_00006200;                              // 0x00006200
extern intptr_t D_NF_00006518;                              // 0x00006518
extern intptr_t D_NF_00006598;                              // 0x00006598

extern intptr_t lEFManagerQuakeMag0AnimJoint;               // 0x0000CBC0
extern intptr_t lEFManagerQuakeMag1AnimJoint;               // 0x0000CC20
extern intptr_t lEFManagerQuakeMag2AnimJoint;               // 0x0000CCF0
extern intptr_t lEFManagerQuakeMag3AnimJoint;               // 0x0000CDC0

extern intptr_t lEFManagerNessPKFlashMObjSub;                    // 0x00006B40
extern intptr_t lEFManagerNessPKFlashDObjSetup;                  // 0x00006D00
extern intptr_t lEFManagerNessPKFlashAnimJoint;                  // 0x00006D90
extern intptr_t lEFManagerNessPKFlashMatAnimJoint;               // 0x00006E20

extern void efManagerInitEffects(void);
extern efStruct* efManagerGetNextStructAlloc(sb32 is_force_return);
extern efStruct* efManagerGetEffectNoForce(void);
extern efStruct* efManagerGetEffectForce(void);
extern void efManagerSetPrevStructAlloc(efStruct *ep);
extern void efManagerNoStructProcUpdate(GObj *effect_gobj);
extern void efManagerHaveStructProcUpdate(GObj *effect_gobj);
extern void efManagerNoEjectProcUpdate(GObj *effect_gobj);
extern void efManagerSortZNeg(DObj *dobj);
extern void efManagerSortZPos(DObj *dobj);
extern void efManagerFuncRun(GObj *effect_gobj);
extern GObj* efManagerMakeEffect(efCreateDesc *effect_desc, sb32 is_force_return);
extern GObj* efManagerMakeEffectNoForce(efCreateDesc *effect_desc);
extern GObj* efManagerMakeEffectForce(efCreateDesc *effect_desc);
extern lbParticle* efManagerDestroyParticleGObj(lbParticle *ptcl, GObj *effect_gobj);
extern void efManagerDefaultProcDead(lbTransform *tfrm);
extern void efManagerDefaultProcUpdate(GObj *effect_gobj);
extern lbParticle* efManagerDamageNormalLightMakeEffect(Vec3f *pos, s32 player, s32 size, sb32 is_static);
extern void efManagerDamageNormalHeavyProcDead(lbTransform *tfrm);
extern lbParticle* efManagerImpactShockMakeEffect(Vec3f *pos, s32 size);
extern void efManagerVelAddDestroyAnimEnd(GObj *effect_gobj);
extern lbParticle* efManagerDamageFireMakeEffect(Vec3f *pos, s32 size);
extern lbParticle* efManagerDamageElectricMakeEffect(Vec3f *pos, s32 size);
extern GObj* efManagerDamageSlashMakeEffect(Vec3f *pos, s32 size, f32 rotate);
extern lbParticle* efManagerFlameLRMakeEffect(Vec3f *pos, s32 lr);
extern lbParticle* efManagerFlameRandgcMakeEffect(Vec3f *pos);
extern lbParticle* efManagerFlameStaticMakeEffect(Vec3f *pos);
extern lbParticle* efManagerDustCollideMakeEffect(Vec3f *pos);
extern GObj* efManagerShockSmallMakeEffect(Vec3f *pos);
extern void efManagerDustLightProcUpdate(GObj *effect_gobj);
extern lbParticle* efManagerDustLightMakeEffect(Vec3f *pos, sb32 is_invert_vel, f32 f_index);
extern lbParticle* efManagerDustHeavyMakeEffect(Vec3f *pos, s32 lr);
extern void efManagerDustHeavyDoubleProcUpdate(GObj *effect_gobj);
extern lbParticle* efManagerDustHeavyDoubleMakeEffect(Vec3f *pos, s32 lr, f32 f_index);
extern lbParticle* efManagerDustExpandLargeMakeEffect(Vec3f *pos);
extern lbParticle* efManagerDustExpandSmallMakeEffect(Vec3f *pos, f32 f_index);
extern lbParticle* efManagerDustDashMakeEffect(Vec3f *pos, s32 lr, f32 scale);
extern void efManagerDamageFlyOrbsProcUpdate(GObj *effect_gobj);
extern void efManagerDamageSpawnOrbsProcUpdate(GObj *this_gobj);
extern GObj* efManagerDamageSpawnOrbsMakeEffect(Vec3f *pos);
extern GObj* efManagerDamageSpawnOrbsRandgcMakeEffect(Vec3f *pos);
extern void efManagerImpactWaveFuncDisplay(GObj *effect_gobj);
extern void efManagerImpactWaveProcUpdate(GObj *effect_gobj);
extern GObj* efManagerImpactWaveMakeEffect(Vec3f *pos, s32 index, f32 rotate);
extern GObj* efManagerImpactAirWaveMakeEffect(Vec3f *pos, s32 index);
extern void efManagerStarRodSparkProcUpdate(GObj *effect_gobj);
extern GObj* efManagerStarRodSparkMakeEffect(Vec3f *pos, s32 lr);
extern void efManagerDamageFlySparksProcUpdate(GObj *effect_gobj);
extern void efManagerDamageSpawnSparksProcUpdate(GObj *effect_gobj);
extern GObj* efManagerDamageSpawnSparksMakeEffect(Vec3f *pos, s32 lr);
extern GObj* efManagerDamageSpawnSparksRandgcMakeEffect(Vec3f *pos, s32 lr);
extern void efManagerDamageSpawnMDustProcUpdate(GObj *effect_gobj);
extern GObj* efManagerDamageSpawnMDustMakeEffect(Vec3f *pos, s32 lr);
extern GObj* efManagerDamageSpawnMDustRandgcMakeEffect(Vec3f *pos, s32 lr);
extern lbParticle* efManagerSparkleWhiteMakeEffect(Vec3f *pos);
extern lbParticle* efManagerSparkleWhiteMultiMakeEffect(Vec3f *pos);
extern lbParticle* efManagerSparkleWhiteMultiExplodeMakeEffect(Vec3f *pos);
extern lbParticle* efManagerSparkleWhiteScaleMakeEffect(Vec3f *pos, f32 scale);
extern lbParticle* efManagerSparkleWhiteDeadMakeEffect(Vec3f *pos, f32 scale);
extern void efManagerQuakeProcUpdate(GObj *effect_gobj);
extern void efManagerQuakeAddProcUpdate(GObj *effect_gobj);
extern GObj* efManagerQuakeMakeEffect(s32 magnitude);
extern void efManagerDamageCoinProcDead(lbTransform *tfrm);
extern lbParticle* efManagerDamageCoinMakeEffect(Vec3f *pos);
extern lbParticle* efManagerSetOffMakeEffect(Vec3f *pos, s32 size);
extern GObj* efManagerFireSparkMakeEffect(GObj *fighter_gobj);
extern void efManagerFoxReflectorSetAnimID(GObj *effect_gobj, s32 index);
extern void efManagerFoxReflectorProcUpdate(GObj *effect_gobj);
extern GObj* efManagerFoxReflectorMakeEffect(GObj *fighter_gobj);
extern void efManagerShieldProcUpdate(GObj *effect_gobj);
extern void efManagerShieldFuncDisplay(GObj *effect_gobj);
extern GObj* lbParticle_Shield_MakeEffect(GObj *fighter_gobj);
extern void efManagerYoshiShieldFuncDisplay(GObj *effect_gobj);
extern GObj* efManagerYoshiShieldMakeEffect(GObj *fighter_gobj);
extern lbParticle* efManagerThunderAmpMakeEffect(Vec3f *pos);
extern lbGenerator* efManagerRippleMakeEffect(Vec3f *pos);
extern GObj* efManagerCatchSwirlMakeEffect(Vec3f *pos);
extern GObj* efManagerReflectBreakMakeEffect(Vec3f *pos, s32 lr);
extern lbParticle* efManagerFuraSparkleMakeEffect(Vec3f *pos);
extern lbParticle* efManagerPsionicMakeEffect(Vec3f *pos);
extern lbParticle* efManagerFlashSmallMakeEffect(Vec3f *pos);
extern lbParticle* efManagerFlashMiddleMakeEffect(Vec3f *pos);
extern lbParticle* efManagerFlashLargeMakeEffect(Vec3f *pos);
extern lbGenerator* efManagerShieldBreakMakeEffect(Vec3f *pos);
extern void func_ovl2_801017E8(GObj *effect_gobj);
extern GObj* func_ovl2_8010183C(Vec3f *pos, s32 arg1);
extern GObj* efManagerPikachuThunderShockMakeEffect(GObj *fighter_gobj, Vec3f *pos, s32 frame);
extern void efManagerPikachuThunderTrailProcUpdate(GObj *effect_gobj);
extern void efManagerPikachuThunderTrailFuncDisplay(GObj *effect_gobj);
extern GObj* efManagerPikachuThunderTrailMakeEffect(Vec3f *pos, s32 lifetime, s32 texture_index);
extern GObj* efManagerPikachuThunderJoltMakeEffect(Vec3f *pos, f32 rotate);
extern void efManagerKirbyVulcanJabProcUpdate(GObj *effect_gobj);
extern GObj* efManagerKirbyVulcanJabMakeEffect(Vec3f *pos, s32 lr, f32 rotate, f32 vel, f32 add);
extern GObj* efManagerSamusGrappleBeamGlowMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerCaptainFalconKickMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerCaptainFalconPunchMakeEffect(GObj *fighter_gobj);
extern lbGenerator* efManagerKirbyStarMakeEffect(Vec3f *pos);
extern lbGenerator* efManagerStarSplashMakeEffect(Vec3f *pos, s32 lr);
extern GObj* efManagerPurinSingMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerDeadExplodeMakeEffect(Vec3f *pos, s32 player, u32 type);
extern void func_ovl2_801023D4(Vec3f *pos);
extern GObj* efManagerKirbyCutterUpMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerKirbyCutterDownMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerKirbyCutterDrawMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerKirbyCutterTrailMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerNessPsychicMagnetMakeEffect(GObj *fighter_gobj);
extern void efManagerNessPKThunderTrailProcUpdate(GObj *effect_gobj);
extern void efManagerNessPKThunderTrailFuncDisplay(GObj *effect_gobj);
extern GObj* efManagerNessPKThunderTrailMakeEffect(GObj *fighter_gobj);
extern void efManagerNessPKReflectTrailProcUpdate(GObj *effect_gobj);
extern GObj* efManagerNessPKReflectTrailMakeEffect(GObj *weapon_gobj);
extern GObj* efManagerNessPKThunderWaveMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerNessPKFlashMakeEffect(Vec3f *pos);
extern GObj* efManagerLinkEntryWaveMakeEffect(Vec3f *pos);
extern GObj* efManagerLinkEntryBeamMakeEffect(Vec3f *pos);
extern GObj* efManagerKirbyEntryStarMakeEffect(Vec3f *pos, s32 lr);
extern GObj* efManagerMBallRaysMakeEffect(Vec3f *pos);
extern void efManagerMBallThrownProcUpdate(GObj *effect_gobj);
extern GObj* efManagerMBallThrownMakeEffect(Vec3f *pos, s32 lr);
extern lbParticle* efManagerFireGrindMakeEffect(Vec3f *pos);
extern lbParticle* efManagerHealSparklesMakeEffect(Vec3f *pos);
extern GObj* efManagerYoshiEntryEggMakeEffect(Vec3f *pos);
extern void efManagerYoshiEggLaySetAnim(GObj *effect_gobj, s32 index);
extern void efManagerYoshiEggLayProcUpdate(GObj *effect_gobj);
extern GObj* efManagerYoshiEggLayMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerYoshiEggEscapeMakeEffect(GObj *fighter_gobj);
extern lbParticle* func_ovl2_801031E0(Vec3f *pos);
extern lbParticle* func_ovl2_80103280(Vec3f *pos);
extern lbParticle* efManagerFoxBlasterGlowMakeEffect(Vec3f *pos);
extern GObj* efManagerLinkSpinAttackMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerDonkeyEntryTaruMakeEffect(Vec3f *pos);
extern GObj* efManagerSamusEntryPointMakeEffect(Vec3f *pos);
extern void efManagerCaptainEntryCarProcUpdate(GObj *effect_gobj);
extern GObj* efManagerCaptainEntryCarMakeEffect(Vec3f *pos, s32 lr);
extern GObj* efManagerMarioEntryDokanMakeEffect(Vec3f *pos, s32 ft_kind);
extern void efManagerFoxEntryArwingProcUpdate(GObj *effect_gobj);
extern GObj* efManagerFoxEntryArwingMakeEffect(Vec3f *pos, s32 lr);
extern void func_ovl2_80103918(f32 arg0, f32 arg1, s32 arg2);
extern void func_ovl2_80103974(f32 arg0, f32 arg1);
extern void func_ovl2_80103994(f32 arg0, f32 arg1);
extern void func_ovl2_801039B4(f32 arg0, f32 arg1);
extern lbParticle* efManagerMusicNoteMakeEffect(Vec3f *pos);
extern lbParticle* efManagerYoshiEggExplodeMakeEffect(Vec3f *pos);
extern void efManagerCaptureKirbyStarProcUpdate(GObj *effect_gobj);
extern GObj* efManagerCaptureKirbyStarMakeEffect(GObj *fighter_gobj);
extern void efManagerLoseKirbyStarProcUpdate(GObj *effect_gobj);
extern GObj* efManagerLoseKirbyStarMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerRebirthHaloMakeEffect(GObj *fighter_gobj, f32 scale);
extern lbParticle* efManagerBattleScoreMakeEffect(Vec3f *pos, s32 arg1);
extern lbParticle* efManagerEggBreakMakeEffect(Vec3f *pos);
extern void efManagerKirbyInhaleWindProcUpdate(GObj *effect_gobj);
extern lbParticle* efManagerKirbyInhaleWindMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerItemGetSwirlProcUpdate(Vec3f *pos);
extern lbParticle* efManagerItemSpawnSwirlMakeEffect(Vec3f *pos);
extern lbParticle* func_ovl2_80104554(Vec3f *pos, s32 arg1);

#endif
