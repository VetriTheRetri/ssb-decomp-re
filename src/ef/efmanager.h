#ifndef _EFMANAGER_H_
#define _EFMANAGER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern intptr_t D_NF_000004D4;
extern intptr_t lEFManagerKirbyStarDObjSetup;                   // 0x00005458

extern intptr_t lEFManagerPikachuThunderShock1AnimJoint;        // 0x00001850
extern intptr_t lEFManagerPikachuThunderShock2AnimJoint;        // 0x00001970
extern intptr_t lEFManagerPikachuThunderShock1MatAnimJoint;     // 0x00001AC0
extern intptr_t lEFManagerPikachuThunderShock2MatAnimJoint;     // 0x00001B10

extern intptr_t lEFManagerPikachuThunderTrailMObjSub;           // 0x00009420
extern intptr_t lEFManagerPikachuThunderTrailDObjSetup;         // 0x000095B0

extern intptr_t lEFManagerDeadExplode1PMatAnimJoint;            // 0x000058E0
extern intptr_t lEFManagerDeadExplode2PMatAnimJoint;            // 0x00005800
extern intptr_t lEFManagerDeadExplode3PMatAnimJoint;            // 0x00005950
extern intptr_t lEFManagerDeadExplode4PMatAnimJoint;            // 0x00005870

extern intptr_t lEFManagerNessPsychicMagnetMObjSub;             // 0x00000810
extern intptr_t lEFManagerNessPsychicMagnetDObjSetup;           // 0x000009A8
extern intptr_t lEFManagerNessPsychicMagnetAnimJoint;           // 0x00000A30
extern intptr_t lEFManagerNessPsychicMagnetMatAnimJoint;        // 0x00000AD0

extern intptr_t lEFManagerNessPKThunderTrailDObjSetup;          // 0x00009050

extern intptr_t lEFManagerNessPKThunderWaveMObjSub;             // 0x00009870
extern intptr_t lEFManagerNessPKThunderWaveDObjSetup;           // 0x00009A10
extern intptr_t lEFManagerNessPKThunderWaveAnimJoint;           // 0x00009AC0
extern intptr_t lEFManagerNessPKThunderWaveMatAnimJoint;        // 0x00009BB0

extern intptr_t lEFManagerKirbyEntryStarRAnimJoint;             // 0x00001EA0

extern intptr_t lEFManagerMBallThrownFileHead;                  // 0x000006E4
extern intptr_t lEFManagerMBallThrownMObjSub;                   // 0x00009120
extern intptr_t lEFManagerMBallThrownDObjSetup;                 // 0x00009430
extern intptr_t lEFManagerMBallThrownLAnimJoint;                // 0x000095E0
extern intptr_t lEFManagerMBallThrownRAnimJoint;                // 0x00009690
extern intptr_t lEFManagerMBallThrownLMatAnimJoint;             // 0x00009740
extern intptr_t lEFManagerMBallThrownRMatAnimJoint;             // 0x00009810

extern intptr_t lEFManagerYoshiEggLayBreakAnimJoint;            // 0x000009F0
extern intptr_t lEFManagerYoshiEggLayWaitAnimJoint;             // 0x00000DB0

extern intptr_t lEFManagerMarioEntryDokanDObjSetup;             // 0x00000608
extern intptr_t lEFManagerMarioEntryDokanAnimJoint;             // 0x000006C0

extern intptr_t D_NF_00002E74;                                  // 0x00002E74

extern intptr_t lEFManagerShockSmallMObjSub;                    // 0x00001428
extern intptr_t lEFManagerShockSmallDObjSetup;                  // 0x00001500
extern intptr_t lEFManagerShockSmallMatAnimJoint;               // 0x00001570

extern intptr_t D_NF_00006200;                                  // 0x00006200
extern intptr_t D_NF_00006518;                                  // 0x00006518
extern intptr_t D_NF_00006598;                                  // 0x00006598

extern intptr_t lEFManagerQuakeMag0AnimJoint;                   // 0x0000CBC0
extern intptr_t lEFManagerQuakeMag1AnimJoint;                   // 0x0000CC20
extern intptr_t lEFManagerQuakeMag2AnimJoint;                   // 0x0000CCF0
extern intptr_t lEFManagerQuakeMag3AnimJoint;                   // 0x0000CDC0

extern void efManagerInitEffects(void);
extern EFStruct* efManagerGetNextStructAlloc(sb32 is_force_return);
extern EFStruct* efManagerGetEffectNoForce(void);
extern EFStruct* efManagerGetEffectForce(void);
extern void efManagerSetPrevStructAlloc(EFStruct *ep);
extern void efManagerNoStructProcUpdate(GObj *effect_gobj);
extern void efManagerHaveStructProcUpdate(GObj *effect_gobj);
extern void efManagerNoEjectProcUpdate(GObj *effect_gobj);
extern void efManagerSortZNeg(DObj *dobj);
extern void efManagerSortZPos(DObj *dobj);
extern void efManagerProcRun(GObj *effect_gobj);
extern GObj* efManagerMakeEffect(EFDesc *effect_desc, sb32 is_force_return);
extern GObj* efManagerMakeEffectNoForce(EFDesc *effect_desc);
extern GObj* efManagerMakeEffectForce(EFDesc *effect_desc);
extern LBParticle* efManagerDestroyParticleGObj(LBParticle *pc, GObj *effect_gobj);
extern void efManagerDefaultProcDead(LBTransform *xf);
extern void efManagerDefaultProcUpdate(GObj *effect_gobj);
extern LBParticle* efManagerDamageNormalLightMakeEffect(Vec3f *pos, s32 player, s32 size, sb32 is_static);
extern void efManagerDamageNormalHeavyProcDead(LBTransform *xf);
extern LBParticle* efManagerImpactShockMakeEffect(Vec3f *pos, s32 size);
extern void efManagerVelAddDestroyAnimEnd(GObj *effect_gobj);
extern LBParticle* efManagerDamageFireMakeEffect(Vec3f *pos, s32 size);
extern LBParticle* efManagerDamageElectricMakeEffect(Vec3f *pos, s32 size);
extern GObj* efManagerDamageSlashMakeEffect(Vec3f *pos, s32 size, f32 rotate);
extern LBParticle* efManagerFlameLRMakeEffect(Vec3f *pos, s32 lr);
extern LBParticle* efManagerFlameRandgcMakeEffect(Vec3f *pos);
extern LBParticle* efManagerFlameStaticMakeEffect(Vec3f *pos);
extern LBParticle* efManagerDustCollideMakeEffect(Vec3f *pos);
extern GObj* efManagerShockSmallMakeEffect(Vec3f *pos);
extern void efManagerDustLightProcUpdate(GObj *effect_gobj);
extern LBParticle* efManagerDustLightMakeEffect(Vec3f *pos, s32 lr, f32 f_index);
extern LBParticle* efManagerDustHeavyMakeEffect(Vec3f *pos, s32 lr);
extern void efManagerDustHeavyDoubleProcUpdate(GObj *effect_gobj);
extern LBParticle* efManagerDustHeavyDoubleMakeEffect(Vec3f *pos, s32 lr, f32 f_index);
extern LBParticle* efManagerDustExpandLargeMakeEffect(Vec3f *pos);
extern LBParticle* efManagerDustExpandSmallMakeEffect(Vec3f *pos, f32 f_index);
extern LBParticle* efManagerDustDashMakeEffect(Vec3f *pos, s32 lr, f32 scale);
extern void efManagerDamageFlyOrbsProcUpdate(GObj *effect_gobj);
extern void efManagerDamageSpawnOrbsProcUpdate(GObj *this_gobj);
extern GObj* efManagerDamageSpawnOrbsMakeEffect(Vec3f *pos);
extern GObj* efManagerDamageSpawnOrbsRandgcMakeEffect(Vec3f *pos);
extern void efManagerImpactWaveProcDisplay(GObj *effect_gobj);
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
extern LBParticle* efManagerSparkleWhiteMakeEffect(Vec3f *pos);
extern LBParticle* efManagerSparkleWhiteMultiMakeEffect(Vec3f *pos);
extern LBParticle* efManagerSparkleWhiteMultiExplodeMakeEffect(Vec3f *pos);
extern LBParticle* efManagerSparkleWhiteScaleMakeEffect(Vec3f *pos, f32 scale);
extern LBParticle* efManagerSparkleWhiteDeadMakeEffect(Vec3f *pos, f32 scale);
extern void efManagerQuakeProcUpdate(GObj *effect_gobj);
extern void efManagerQuakeProcRun(GObj *effect_gobj);
extern GObj* efManagerQuakeMakeEffect(s32 magnitude);
extern void efManagerDamageCoinProcDead(LBTransform *xf);
extern LBParticle* efManagerDamageCoinMakeEffect(Vec3f *pos);
extern LBParticle* efManagerSetOffMakeEffect(Vec3f *pos, s32 size);
extern GObj* efManagerFireSparkMakeEffect(GObj *fighter_gobj);
extern void efManagerFoxReflectorSetAnimID(GObj *effect_gobj, s32 index);
extern void efManagerFoxReflectorProcUpdate(GObj *effect_gobj);
extern GObj* efManagerFoxReflectorMakeEffect(GObj *fighter_gobj);
extern void efManagerShieldProcUpdate(GObj *effect_gobj);
extern void efManagerShieldProcDisplay(GObj *effect_gobj);
extern GObj* LBParticle_Shield_MakeEffect(GObj *fighter_gobj);
extern void efManagerYoshiShieldProcDisplay(GObj *effect_gobj);
extern GObj* efManagerYoshiShieldMakeEffect(GObj *fighter_gobj);
extern LBParticle* efManagerThunderAmpMakeEffect(Vec3f *pos);
extern LBGenerator* efManagerRippleMakeEffect(Vec3f *pos);
extern GObj* efManagerCatchSwirlMakeEffect(Vec3f *pos);
extern GObj* efManagerReflectBreakMakeEffect(Vec3f *pos, s32 lr);
extern LBParticle* efManagerFuraSparkleMakeEffect(Vec3f *pos);
extern LBParticle* efManagerPsionicMakeEffect(Vec3f *pos);
extern LBParticle* efManagerFlashSmallMakeEffect(Vec3f *pos);
extern LBParticle* efManagerFlashMiddleMakeEffect(Vec3f *pos);
extern LBParticle* efManagerFlashLargeMakeEffect(Vec3f *pos);
extern LBGenerator* efManagerShieldBreakMakeEffect(Vec3f *pos);
extern void func_ovl2_801017E8(GObj *effect_gobj);
extern GObj* func_ovl2_8010183C(Vec3f *pos, s32 arg1);
extern GObj* efManagerPikachuThunderShockMakeEffect(GObj *fighter_gobj, Vec3f *pos, s32 frame);
extern void efManagerPikachuThunderTrailProcUpdate(GObj *effect_gobj);
extern void efManagerPikachuThunderTrailProcDisplay(GObj *effect_gobj);
extern GObj* efManagerPikachuThunderTrailMakeEffect(Vec3f *pos, s32 lifetime, s32 texture_index);
extern GObj* efManagerPikachuThunderJoltMakeEffect(Vec3f *pos, f32 rotate);
extern void efManagerKirbyVulcanJabProcUpdate(GObj *effect_gobj);
extern GObj* efManagerKirbyVulcanJabMakeEffect(Vec3f *pos, s32 lr, f32 rotate, f32 vel, f32 add);
extern GObj* efManagerSamusGrappleBeamGlowMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerCaptainFalconKickMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerCaptainFalconPunchMakeEffect(GObj *fighter_gobj);
extern LBGenerator* efManagerKirbyStarMakeEffect(Vec3f *pos);
extern LBGenerator* efManagerStarSplashMakeEffect(Vec3f *pos, s32 lr);
extern GObj* efManagerPurinSingMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerDeadExplodeMakeEffect(Vec3f *pos, s32 player, u32 type);
extern void func_ovl2_801023D4(Vec3f *pos);
extern GObj* efManagerKirbyCutterUpMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerKirbyCutterDownMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerKirbyCutterDrawMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerKirbyCutterTrailMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerNessPsychicMagnetMakeEffect(GObj *fighter_gobj);
extern void efManagerNessPKThunderTrailProcUpdate(GObj *effect_gobj);
extern void efManagerNessPKThunderTrailProcDisplay(GObj *effect_gobj);
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
extern LBParticle* efManagerFireGrindMakeEffect(Vec3f *pos);
extern LBParticle* efManagerHealSparklesMakeEffect(Vec3f *pos);
extern GObj* efManagerYoshiEntryEggMakeEffect(Vec3f *pos);
extern void efManagerYoshiEggLaySetAnim(GObj *effect_gobj, s32 index);
extern void efManagerYoshiEggLayProcUpdate(GObj *effect_gobj);
extern GObj* efManagerYoshiEggLayMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerYoshiEggEscapeMakeEffect(GObj *fighter_gobj);
extern LBParticle* func_ovl2_801031E0(Vec3f *pos);
extern LBParticle* func_ovl2_80103280(Vec3f *pos);
extern LBParticle* efManagerFoxBlasterGlowMakeEffect(Vec3f *pos);
extern GObj* efManagerLinkSpinAttackMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerDonkeyEntryTaruMakeEffect(Vec3f *pos);
extern GObj* efManagerSamusEntryPointMakeEffect(Vec3f *pos);
extern void efManagerCaptainEntryCarProcUpdate(GObj *effect_gobj);
extern GObj* efManagerCaptainEntryCarMakeEffect(Vec3f *pos, s32 lr);
extern GObj* efManagerMarioEntryDokanMakeEffect(Vec3f *pos, s32 fkind);
extern void efManagerFoxEntryArwingProcUpdate(GObj *effect_gobj);
extern GObj* efManagerFoxEntryArwingMakeEffect(Vec3f *pos, s32 lr);
extern void efManagerStockCommonMakeEffectID(f32 pos_x, f32 pos_y, s32 script_id);
extern void efManagerStockSnapMakeEffect(f32 pos_x, f32 pos_y);
extern void efManagerStockStealStartMakeEffect(f32 pos_x, f32 pos_y);
extern void efManagerStockStealEndMakeEffect(f32 pos_x, f32 pos_y);
extern LBParticle* efManagerMusicNoteMakeEffect(Vec3f *pos);
extern LBParticle* efManagerYoshiEggExplodeMakeEffect(Vec3f *pos);
extern void efManagerCaptureKirbyStarProcUpdate(GObj *effect_gobj);
extern GObj* efManagerCaptureKirbyStarMakeEffect(GObj *fighter_gobj);
extern void efManagerLoseKirbyStarProcUpdate(GObj *effect_gobj);
extern GObj* efManagerLoseKirbyStarMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerRebirthHaloMakeEffect(GObj *fighter_gobj, f32 scale);
extern LBParticle* efManagerBattleScoreMakeEffect(Vec3f *pos, s32 arg1);
extern LBParticle* efManagerEggBreakMakeEffect(Vec3f *pos);
extern void efManagerKirbyInhaleWindProcUpdate(GObj *effect_gobj);
extern LBParticle* efManagerKirbyInhaleWindMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerItemGetSwirlProcUpdate(Vec3f *pos);
extern LBParticle* efManagerItemSpawnSwirlMakeEffect(Vec3f *pos);
extern LBParticle* efManagerConfettiMakeEffect(Vec3f *pos, sb32 is_genlink_mask);

#endif
