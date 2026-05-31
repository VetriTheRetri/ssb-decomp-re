/* relocData file 201: FTCommonMoveset — 24 ftMotionCommand scripts + DamageScript chain. */

#include "relocdata_types.h"
#include <ft/ftdef.h>


ftMotionCommand dFTCommonMoveset_SwordSwing1[] = {
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 12, 1, 3, 300, 0, 400, 0, 361, 100, 0, 3, 2, 1, 5, 5),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 12, 1, 3, 300, 0, 200, 0, 361, 100, 0, 3, 2, 1, 5, 5),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 12, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 2, 1, 5, 5),
	ftMotionPlayFGM(nSYAudioFGMSwordSwing1),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_SwordSwing3[] = {
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 18, 1, 3, 300, 0, 400, 0, 361, 100, 0, 3, 4, 2, 5, 8),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 18, 1, 3, 300, 0, 200, 0, 361, 100, 0, 3, 4, 2, 5, 8),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 18, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 4, 2, 5, 8),
	ftMotionPlayFGM(nSYAudioFGMSwordSwing3),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_SwordSwing4[] = {
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -90, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 25, 1, 3, 300, 0, 400, 0, 361, 100, 0, 3, 6, 2, 5, 12),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 25, 1, 3, 300, 0, 200, 0, 361, 100, 0, 3, 6, 2, 5, 12),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 25, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 6, 2, 5, 12),
	ftMotionPlayFGM(nSYAudioFGMSwordSwing4),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_SwordSwingDash[] = {
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 16, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 8),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 14, 1, 3, 260, 0, 200, 0, 361, 100, 0, 3, 0, 2, 5, 8),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 12, 1, 3, 260, 0, 400, 0, 361, 100, 0, 3, 0, 2, 5, 8),
	ftMotionPlayFGM(nSYAudioFGMSwordSwing3),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandSetAttackCollDamage(1, 8),
	ftMotionCommandSetAttackCollDamage(2, 6),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_BatSwing1[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 7, 1, 0, 270, 0, 200, 0, 361, 100, 0, 3, 2, 0, 7, 5),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 7, 1, 0, 270, 0, 100, 0, 361, 100, 0, 3, 2, 0, 7, 5),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 7, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 2, 0, 7, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_BatSwing3[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 12, 1, 0, 270, 0, 200, 0, 361, 100, 0, 3, 4, 1, 7, 8),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 12, 1, 0, 270, 0, 100, 0, 361, 100, 0, 3, 4, 1, 7, 8),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 12, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 4, 1, 7, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_BatSwing4[] = {
	ftMotionCommandStopRumble(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 10, 1, 0, 270, 0, 180, 0, 361, 100, 0, 3, 247, 2, 7, 300),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 10, 1, 0, 270, 0, 90, 0, 361, 100, 0, 3, 247, 2, 7, 300),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 10, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 247, 2, 7, 300),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_BatSwingDash[] = {
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 16, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 0, 7, 8),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 14, 1, 0, 270, 0, 90, 0, 361, 100, 0, 3, 0, 0, 7, 8),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 12, 1, 0, 270, 0, 180, 0, 361, 100, 0, 3, 0, 0, 7, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandSetAttackCollDamage(1, 8),
	ftMotionCommandSetAttackCollDamage(2, 6),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_HarisenSwing1[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 2, 1, 0, 270, 0, 200, 0, 170, 100, 10, 3, 10, 2, 6, 0),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 2, 1, 0, 270, 0, 100, 0, 170, 100, 10, 3, 10, 2, 6, 0),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 2, 1, 0, 200, 0, 0, 0, 170, 100, 10, 3, 10, 2, 6, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_HarisenSwing3[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 4, 1, 0, 270, 0, 200, 0, 160, 100, 30, 3, 20, 2, 6, 0),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 4, 1, 0, 270, 0, 100, 0, 160, 100, 30, 3, 20, 2, 6, 0),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 4, 1, 0, 200, 0, 0, 0, 160, 100, 30, 3, 20, 2, 6, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_HarisenSwing4[] = {
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 8, 1, 0, 270, 0, 200, 0, 140, 100, 80, 3, 100, 2, 6, 0),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 8, 1, 0, 270, 0, 100, 0, 140, 100, 80, 3, 100, 2, 6, 0),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 8, 1, 0, 200, 0, 0, 0, 140, 100, 80, 3, 100, 2, 6, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_HarisenSwingDash[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 8, 1, 0, 200, 0, 0, 0, 120, 100, 80, 3, 40, 2, 6, 0),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 7, 1, 0, 270, 0, 100, 0, 120, 100, 80, 3, 40, 2, 6, 0),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 6, 1, 0, 270, 0, 200, 0, 120, 100, 80, 3, 40, 2, 6, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 5),
	ftMotionCommandSetAttackCollDamage(1, 5),
	ftMotionCommandSetAttackCollDamage(2, 4),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_StarRodSwing1[] = {
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 10, 1, 0, 300, 0, 200, 0, 361, 100, 0, 3, 2, 1, 0, 5),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 10, 1, 0, 300, 0, 100, 0, 361, 100, 0, 3, 2, 1, 0, 5),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 10, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 2, 1, 0, 5),
	ftMotionCommandSetFlag1(nSYAudioFGMStarRodSwing1),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_StarRodSwing3[] = {
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 15, 1, 0, 300, 0, 200, 0, 361, 100, 0, 3, 4, 2, 0, 8),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 15, 1, 0, 300, 0, 100, 0, 361, 100, 0, 3, 4, 2, 0, 8),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 15, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 4, 2, 0, 8),
	ftMotionCommandSetFlag1(nSYAudioFGMStarRodSwing3),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_StarRodSwing4[] = {
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 22, 1, 0, 300, 0, 200, 0, 361, 100, 0, 3, 6, 2, 0, 12),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 22, 1, 0, 300, 0, 100, 0, 361, 100, 0, 3, 6, 2, 0, 12),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 22, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 6, 2, 0, 12),
	ftMotionCommandSetFlag1(nSYAudioFGMStarRodSwing4),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_StarRodSwingDash[] = {
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 16, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 8),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 14, 1, 0, 260, 0, 100, 0, 361, 100, 0, 3, 0, 2, 0, 8),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 12, 1, 0, 260, 0, 200, 0, 361, 100, 0, 3, 0, 2, 0, 8),
	ftMotionCommandSetFlag1(nSYAudioFGMStarRodSwing3),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandSetAttackCollDamage(1, 8),
	ftMotionCommandSetAttackCollDamage(2, 6),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_FireFlowerShoot[] = {
	ftMotionCommandEffectItemHold(126, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandMakeAttackCollScaled(0, 0, 126, 30, 1, 0, 120, 0, 0, 0, 75, 100, 0, 3, 241, 2, 0, 42),
	ftMotionCommandMakeAttackCollScaled(1, 0, 126, 30, 1, 0, 120, 0, 200, 0, 75, 100, 0, 3, 241, 2, 0, 42),
	ftMotionCommandMakeAttackCollScaled(2, 0, 126, 30, 1, 0, 200, -60, 300, 0, 75, 100, 0, 3, 241, 2, 0, 42),
	ftMotionCommandMakeAttackCollScaled(3, 0, 126, 30, 1, 0, 200, 60, 300, 0, 75, 100, 0, 3, 241, 2, 0, 42),
	ftMotionPlayFGM(nSYAudioFGMHammerSwing),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_DamageBumpHit[] = {
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 300, 0, 210, 0, 361, 70, 0, 3, 0, 2, 1, 60),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_DamageRumble[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_DamageFlameBurst[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, nEFKindFlameRandom, 0, 0, 100, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_DamageSparkleDelay[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_DamageSparkle[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 200, 0, 90, 90, 90),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_ThrownVictimHit[] = {
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 160, 0, 80, 0, 361, 100, 0, 3, 0, 1, 0, 30),
	ftMotionCommandReturn(),
};

ftMotionCommand dFTCommonMoveset_ThrownVictimHitMario[] = {
	ftMotionCommandMakeAttackColl(0, 0, 5, 8, 0, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 20),
	ftMotionCommandReturn(),
};

void *dFTCommonMoveset_DamageScript[2][nFTKindEnumCount] = {
	{
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindMario */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindFox */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindDonkey */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindSamus */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindLuigi */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindLink */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindYoshi */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindCaptain */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindKirby */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindPikachu */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindPurin */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNess */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindBoss */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindMMario */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNMario */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNFox */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNDonkey */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNSamus */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNLuigi */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNLink */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNYoshi */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNCaptain */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNKirby */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNPikachu */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNPurin */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNNess */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindGDonkey */
	},
	{
		dFTCommonMoveset_ThrownVictimHitMario,  /* nFTKindMario */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindFox */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindDonkey */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindSamus */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindLuigi */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindLink */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindYoshi */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindCaptain */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindKirby */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindPikachu */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindPurin */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNess */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindBoss */
		dFTCommonMoveset_ThrownVictimHitMario,  /* nFTKindMMario */
		dFTCommonMoveset_ThrownVictimHitMario,  /* nFTKindNMario */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNFox */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNDonkey */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNSamus */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNLuigi */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNLink */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNYoshi */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNCaptain */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNKirby */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNPikachu */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNPurin */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindNNess */
		dFTCommonMoveset_ThrownVictimHit,  /* nFTKindGDonkey */
	},
};

