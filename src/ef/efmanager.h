#ifndef _EFMANAGER_H_
#define _EFMANAGER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

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
extern void efManagerProcRun(GObj *effect_gobj);
extern GObj* efManagerMakeEffect(efCreateDesc *effect_desc, sb32 is_force_return);
extern GObj* efManagerMakeEffectNoForce(efCreateDesc *effect_desc);
extern GObj* efManagerMakeEffectForce(efCreateDesc *effect_desc);
extern efParticle* efManagerDestroyParticleGObj(efParticle *efpart, GObj *effect_gobj);
extern void efManagerDefaultProcDead(efTransform *eftrans);
extern void efManagerDefaultProcUpdate(GObj *effect_gobj);
extern efParticle* efManagerDamageNormalLightMakeEffect(Vec3f *pos, s32 player, s32 size, sb32 is_static);
extern void efManagerDamageNormalHeavyProcDead(efTransform *eftrans);
extern efParticle* efManagerImpactShockMakeEffect(Vec3f *pos, s32 size);
extern void efManagerVelAddDestroyAnimEnd(GObj *effect_gobj);
extern efParticle* efManagerDamageFireMakeEffect(Vec3f *pos, s32 size);
extern efParticle* efManagerDamageElectricMakeEffect(Vec3f *pos, s32 size);
extern GObj* efManagerDamageSlashMakeEffect(Vec3f *pos, s32 size, f32 rotate);
extern efParticle* efManagerFlameLRMakeEffect(Vec3f *pos, s32 lr);
extern efParticle* efManagerFlameRandomMakeEffect(Vec3f *pos);
extern efParticle* efManagerFlameStaticMakeEffect(Vec3f *pos);
extern efParticle* efManagerDustCollideMakeEffect(Vec3f *pos);
extern GObj* efManagerShockSmallMakeEffect(Vec3f *pos);
extern void efManagerDustLightProcUpdate(GObj *effect_gobj);
extern efParticle* efManagerDustLightMakeEffect(Vec3f *pos, sb32 is_invert_vel, f32 f_index);
extern efParticle* efManagerDustHeavyMakeEffect(Vec3f *pos, s32 lr);
extern void efManagerDustHeavyDoubleProcUpdate(GObj *effect_gobj);
extern efParticle* efManagerDustHeavyDoubleMakeEffect(Vec3f *pos, s32 lr, f32 f_index);
extern efParticle* efManagerDustExpandLargeMakeEffect(Vec3f *pos);
extern efParticle* efManagerDustExpandSmallMakeEffect(Vec3f *pos, f32 f_index);
extern efParticle* efManagerDustDashMakeEffect(Vec3f *pos, s32 lr, f32 scale);
extern void efManagerDamageFlyOrbsProcUpdate(GObj *effect_gobj);
extern void efManagerDamageSpawnOrbsProcUpdate(GObj *this_gobj);
extern GObj* efManagerDamageSpawnOrbsMakeEffect(Vec3f *pos);
extern GObj* efManagerDamageSpawnOrbsRandomMakeEffect(Vec3f *pos);
extern void efManagerImpactWaveProcRender(GObj *effect_gobj);
extern void efManagerImpactWaveProcUpdate(GObj *effect_gobj);
extern GObj* efManagerImpactWaveMakeEffect(Vec3f *pos, s32 index, f32 rotate);
extern GObj* efManagerImpactAirWaveMakeEffect(Vec3f *pos, s32 index);
extern void efManagerStarRodSparkProcUpdate(GObj *effect_gobj);
extern GObj* efManagerStarRodSparkMakeEffect(Vec3f *pos, s32 lr);
extern void efManagerDamageFlySparksProcUpdate(GObj *effect_gobj);
extern void efManagerDamageSpawnSparksProcUpdate(GObj *effect_gobj);
extern GObj* efManagerDamageSpawnSparksMakeEffect(Vec3f *pos, s32 lr);
extern GObj* efManagerDamageSpawnSparksRandomMakeEffect(Vec3f *pos, s32 lr);
extern void efManagerDamageSpawnMDustProcUpdate(GObj *effect_gobj);
extern GObj* efManagerDamageSpawnMDustMakeEffect(Vec3f *pos, s32 lr);
extern GObj* efManagerDamageSpawnMDustRandomMakeEffect(Vec3f *pos, s32 lr);
extern efParticle* efManagerSparkleWhiteMakeEffect(Vec3f *pos);
extern efParticle* efManagerSparkleWhiteMultiMakeEffect(Vec3f *pos);
extern efParticle* efManagerSparkleWhiteMultiExplodeMakeEffect(Vec3f *pos);
extern efParticle* efManagerSparkleWhiteScaleMakeEffect(Vec3f *pos, f32 scale);
extern efParticle* efManagerSparkleWhiteDeadMakeEffect(Vec3f *pos, f32 scale);
extern void efManagerQuakeProcUpdate(GObj *effect_gobj);
extern void efManagerQuakeAddProcUpdate(GObj *effect_gobj);
extern GObj* efManagerQuakeMakeEffect(s32 magnitude);
extern void efManagerDamageCoinProcDead(efTransform *eftrans);
extern efParticle* efManagerDamageCoinMakeEffect(Vec3f *pos);
extern efParticle* efManagerSetOffMakeEffect(Vec3f *pos, s32 size);
extern GObj* efManagerFireSparkMakeEffect(GObj *fighter_gobj);
extern void efManagerFoxReflectorSetImageID(GObj *effect_gobj, s32 index);
extern void efManagerFoxReflectorProcUpdate(GObj *effect_gobj);
extern GObj* efManagerFoxReflectorMakeEffect(GObj *fighter_gobj);
extern void efManagerShieldProcUpdate(GObj *effect_gobj);
extern void efManagerShieldProcRender(GObj *effect_gobj);
extern GObj* efParticle_Shield_MakeEffect(GObj *fighter_gobj);
extern void efManagerYoshiShieldProcRender(GObj *effect_gobj);
extern GObj* efManagerYoshiShieldMakeEffect(GObj *fighter_gobj);
extern efParticle* efManagerThunderAmpMakeEffect(Vec3f *pos);
extern efGenerator* efManagerRippleMakeEffect(Vec3f *pos);
extern GObj* efManagerCatchSwirlMakeEffect(Vec3f *pos);
extern GObj* efManagerReflectBreakMakeEffect(Vec3f *pos, s32 lr);
extern efParticle* efManagerFuraSparkleMakeEffect(Vec3f *pos);
extern efParticle* efManagerPsionicMakeEffect(Vec3f *pos);
extern efParticle* efManagerFlashSmallMakeEffect(Vec3f *pos);
extern efParticle* efManagerFlashMiddleMakeEffect(Vec3f *pos);
extern efParticle* efManagerFlashLargeMakeEffect(Vec3f *pos);
extern efGenerator* efManagerShieldBreakMakeEffect(Vec3f *pos);
extern void func_ovl2_801017E8(GObj *effect_gobj);
extern GObj* func_ovl2_8010183C(Vec3f *pos, s32 arg1);
extern GObj* efManagerPikachuThunderShockMakeEffect(GObj *fighter_gobj, Vec3f *pos, s32 frame);
extern void efManagerPikachuThunderTrailProcUpdate(GObj *effect_gobj);
extern void efManagerPikachuThunderTrailProcRender(GObj *effect_gobj);
extern GObj* efManagerPikachuThunderTrailMakeEffect(Vec3f *pos, s32 lifetime, s32 texture_index);
extern GObj* efManagerPikachuThunderJoltMakeEffect(Vec3f *pos, f32 rotate);
extern void efManagerKirbyVulcanJabProcUpdate(GObj *effect_gobj);
extern GObj* efManagerKirbyVulcanJabMakeEffect(Vec3f *pos, s32 lr, f32 rotate, f32 vel, f32 add);
extern GObj* efManagerSamusGrappleBeamGlowMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerCaptainFalconKickMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerCaptainFalconPunchMakeEffect(GObj *fighter_gobj);
extern efGenerator* efManagerKirbyStarMakeEffect(Vec3f *pos);
extern efGenerator* efManagerStarSplashMakeEffect(Vec3f *pos, s32 lr);
extern GObj* efManagerPurinSingMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerDeadExplodeMakeEffect(Vec3f *pos, s32 player, s32 type);
extern void func_ovl2_801023D4(Vec3f *pos);
extern GObj* efManagerKirbyCutterUpMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerKirbyCutterDownMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerKirbyCutterDrawMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerKirbyCutterTrailMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerNessPsychicMagnetMakeEffect(GObj *fighter_gobj);
extern void efManagerNessPKThunderTrailProcUpdate(GObj *effect_gobj);
extern void efManagerNessPKThunderTrailProcRender(GObj *effect_gobj);
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
extern efParticle* efManagerFireGrindMakeEffect(Vec3f *pos);
extern efParticle* efManagerHealSparklesMakeEffect(Vec3f *pos);
extern GObj* efManagerYoshiEntryEggMakeEffect(Vec3f *pos);
extern void efManagerYoshiEggLaySetAnim(GObj *effect_gobj, s32 index);
extern void efManagerYoshiEggLayProcUpdate(GObj *effect_gobj);
extern GObj* efManagerYoshiEggLayMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerYoshiEggEscapeMakeEffect(GObj *fighter_gobj);
extern efParticle* func_ovl2_801031E0(Vec3f *pos);
extern efParticle* func_ovl2_80103280(Vec3f *pos);
extern efParticle* efManagerFoxBlasterGlowMakeEffect(Vec3f *pos);
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
extern efParticle* efManagerMusicNoteMakeEffect(Vec3f *pos);
extern efParticle* efManagerYoshiEggExplodeMakeEffect(Vec3f *pos);
extern void efManagerCaptureKirbyStarProcUpdate(GObj *effect_gobj);
extern GObj* efManagerCaptureKirbyStarMakeEffect(GObj *fighter_gobj);
extern void efManagerLoseKirbyStarProcUpdate(GObj *effect_gobj);
extern GObj* efManagerLoseKirbyStarMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerRebirthHaloMakeEffect(GObj *fighter_gobj, f32 scale);
extern efParticle* efManagerBattleScoreMakeEffect(Vec3f *pos, s32 arg1);
extern efParticle* efManagerEggBreakMakeEffect(Vec3f *pos);
extern void efManagerKirbyInhaleWindProcUpdate(GObj *effect_gobj);
extern efParticle* efManagerKirbyInhaleWindMakeEffect(GObj *fighter_gobj);
extern GObj* efManagerItemGetSwirlProcUpdate(Vec3f *pos);
extern efParticle* efManagerItemSpawnSwirlMakeEffect(Vec3f *pos);
extern efParticle* func_ovl2_80104554(Vec3f *pos, s32 arg1);

#endif
