/* ftMotionCommand script data for relocData file 220 (LuigiMainMotion) */
/* File size: 6704 bytes (0x1A30) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmdef.h>


#include <ef/efdef.h>

extern u32 dFTCommonMoveset_SwordSwing1[];
extern u32 dFTCommonMoveset_SwordSwing3[];
extern u32 dFTCommonMoveset_SwordSwing4[];
extern u32 dFTCommonMoveset_SwordSwingDash[];
extern u32 dFTCommonMoveset_BatSwing1[];
extern u32 dFTCommonMoveset_BatSwing3[];
extern u32 dFTCommonMoveset_BatSwing4[];
extern u32 dFTCommonMoveset_BatSwingDash[];
extern u32 dFTCommonMoveset_HarisenSwing1[];
extern u32 dFTCommonMoveset_HarisenSwing3[];
extern u32 dFTCommonMoveset_HarisenSwing4[];
extern u32 dFTCommonMoveset_HarisenSwingDash[];
extern u32 dFTCommonMoveset_StarRodSwing1[];
extern u32 dFTCommonMoveset_StarRodSwing3[];
extern u32 dFTCommonMoveset_StarRodSwing4[];
extern u32 dFTCommonMoveset_StarRodSwingDash[];
extern u32 dFTCommonMoveset_FireFlowerShoot[];
extern u32 dFTCommonMoveset_DamageBumpHit[];
extern u32 dFTCommonMoveset_DamageRumble[];
extern u32 dFTCommonMoveset_DamageFlameBurst[];
extern u32 dFTCommonMoveset_DamageSparkleDelay[];
extern u32 dFTCommonMoveset_DamageSparkle[];
extern void *dFTCommonMoveset_DamageScript[2][nFTKindEnumCount];
ftMotionCommand dLuigiMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandWait(5),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dLuigiMainMotion_EggLay_0x0024[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dLuigiMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dLuigiMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dLuigiMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandGoto(dLuigiMainMotion_EggLay_0x0024),
};

ftMotionCommand dLuigiMainMotion_Walk1[] = {
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Dash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMarioDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Run[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dLuigiMainMotion_Run),
};

ftMotionCommand dLuigiMainMotion_RunBrake[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Turn[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_TurnRun[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_LandingAirX_0x0118[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Jump[] = {
	ftMotionPlayVoice(nSYAudioVoiceLuigiJump),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_JumpAerial[] = {
	ftMotionPlayVoice(nSYAudioVoiceLuigiJumpAerial),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_LandingAirX_0x0164[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_LandingAirX_0x0180[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ShieldDrop_0x019C[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip6),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ShieldDrop_0x01A4[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip6),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_0x01B8[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandReturn(),
};

ftMotionCommand dLuigiMainMotion_Damage_0x01C0[] = {
	ftMotionCommandSubroutine(dLuigiMainMotion_0x01B8),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Damage_0x01CC[] = {
	ftMotionCommandSubroutine(dLuigiMainMotion_0x01B8),
	ftMotionCommandSetDamageThrown((u32)dFTCommonMoveset_DamageScript), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_LandingAirX_0x01E0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_EnterPipe[] = {
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ExitPipe[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_DownBounceD[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_StunLandU[] = {
	ftMotionCommandGoto(dLuigiMainMotion_DownBounceD),
};

ftMotionCommand dLuigiMainMotion_0x0260[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dLuigiMainMotion_DownStandD_0x0280[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_StunStartU[] = {
	ftMotionCommandGoto(dLuigiMainMotion_DownStandD_0x0280),
};

ftMotionCommand dLuigiMainMotion_DownForwardD[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dLuigiMainMotion_0x0260),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_DownForwardU[] = {
	ftMotionCommandGoto(dLuigiMainMotion_DownForwardD),
	ftMotionCommandGoto(dLuigiMainMotion_DownForwardD),
	ftMotionCommandGoto(dLuigiMainMotion_DownForwardD),
};

ftMotionCommand dLuigiMainMotion_DownAttackD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(14),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_DownAttackU[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Tech[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceLuigiJump),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_TechF[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceLuigiJump),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_TechB[] = {
	ftMotionCommandGoto(dLuigiMainMotion_TechF),
};

ftMotionCommand dLuigiMainMotion_RollF[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_RollB[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffCatch[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffWait[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffQuick[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffClimbQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffClimbQuick2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffSlow[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffClimbSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffClimbSlow2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffAttackQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffAttackQuick2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceLuigiSmash1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 27, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffAttackSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffAttackSlow2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceLuigiSmash1),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 6, 0, 0, 280, 80, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffEscapeQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffEscapeQuick2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffEscapeSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_CliffEscapeSlow2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_LightItemPickup[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_HeavyItemPickup[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemDrop[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowDash[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowSmashB_0x0668[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowSmashB_0x0684[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLuigiMainMotion_ItemThrowSmashB_0x0668),
};

ftMotionCommand dLuigiMainMotion_ItemThrowSmashU_0x0690[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowSmashD_0x06AC[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowSmashB_0x06C8[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowSmashB_0x06E8[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLuigiMainMotion_ItemThrowSmashB_0x06C8),
};

ftMotionCommand dLuigiMainMotion_ItemThrowSmashU_0x06F4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowSmashD_0x0714[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowAirSmashB_0x0734[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowAirSmashB_0x0750[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dLuigiMainMotion_ItemThrowAirSmashB_0x0734),
};

ftMotionCommand dLuigiMainMotion_ItemThrowAirSmashU_0x075C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowAirSmashF_0x0778[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowAirSmashB_0x0794[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowAirSmashB_0x07B4[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dLuigiMainMotion_ItemThrowAirSmashB_0x0794),
};

ftMotionCommand dLuigiMainMotion_ItemThrowAirSmashU_0x07C0[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_ItemThrowAirSmashF_0x07E0[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_HeavyItemThrowSmashB_0x0800[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_HeavyItemThrowSmashB_0x0810[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dLuigiMainMotion_HeavyItemThrowSmashB_0x0800),
};

ftMotionCommand dLuigiMainMotion_HeavyItemThrowSmashB_0x0820[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_HeavyItemThrowSmashB_0x0834[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dLuigiMainMotion_HeavyItemThrowSmashB_0x0820),
};

ftMotionCommand dLuigiMainMotion_SwordSwing1[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing1), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_SwordSwing3[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing3), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_SwordSwing4[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing4), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_SwordSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwingDash), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_BatSwing1[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing1), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_BatSwing3[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing3), /* extern */
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_BatSwing4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing4), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_BatSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwingDash), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_HarisenSwing1[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing1), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_HarisenSwing3[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing3), /* extern */
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_HarisenSwing4[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing4), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_HarisenSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwingDash), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_StarRodSwing1[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 8),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing1), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_StarRodSwing3[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 16),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing3), /* extern */
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_StarRodSwing4[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 28),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing4), /* extern */
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_StarRodSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 10),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwingDash), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FireFlowerShoot_0x0AC0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FireFlowerShoot_0x0AD4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Hammer[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_FireFlowerShoot), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dLuigiMainMotion_Hammer),
};

ftMotionCommand dLuigiMainMotion_0x0B0C[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dLuigiMainMotion_0x0B0C),
};

ftMotionCommand dLuigiMainMotion_ShieldBreak[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceMarioDamage),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dLuigiMainMotion_0x0B0C),
};

ftMotionCommand dLuigiMainMotion_Damaged_0x0B64[] = {
	ftMotionCommandGoto(dLuigiMainMotion_0x0B0C),
};

ftMotionCommand dLuigiMainMotion_StunLandU_0x0B6C[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_DownStandD_0x0B90[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Sleep_0x0B98[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceLuigiFuraFura),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandEffect(0, nEFKindFuraSparkle, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(20),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dLuigiMainMotion_Sleep_0x0B98),
};

ftMotionCommand dLuigiMainMotion_Sleep_0x0BC8[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceDonkeyFuraSleep),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dLuigiMainMotion_Sleep_0x0BC8),
};

FTThrowHitDesc dLuigiMainMotion_0x0BF0[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

ftMotionCommand dLuigiMainMotion_Catch[] = {
	ftMotionCommandSetThrow((u32)dLuigiMainMotion_0x0BF0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 28, 1, 1, 0, 290, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
FTThrowHitDesc dLuigiMainMotion_0x0C6C[] = {
	{ 0x00000034, 0x0000000C, 0x0000002D, 0x00000046, 0x00000000, 0x00000050, 0x00000000 },
	{ 0xFFFFFFFF, 0x00000006, 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000 },
};
#else
FTThrowHitDesc dLuigiMainMotion_0x0C6C[] = {
	{ 55, 16, 45, 70, 0, 70, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};
#endif

ftMotionCommand dLuigiMainMotion_ThrowF[] = {
	ftMotionCommandSetThrow((u32)dLuigiMainMotion_0x0C6C),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(14),
	ftMotionPlayVoice(nSYAudioVoiceLuigiSmash1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
FTThrowHitDesc dLuigiMainMotion_0x0D00[] = {
	{ 0x00000034, 0x00000010, 0x0000002D, 0x00000046, 0x00000000, 0x00000046, 0x00000000 },
	{ 0xFFFFFFFF, 0x00000008, 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000 },
};
#else
FTThrowHitDesc dLuigiMainMotion_0x0D00[] = {
	{ 52, 12, 45, 70, 0, 80, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};
#endif

ftMotionCommand dLuigiMainMotion_ThrowB[] = {
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandSetThrow((u32)dLuigiMainMotion_0x0D00),
	ftMotionPlayVoice(nSYAudioVoiceLuigiSpecialLw),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 260, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMMarioDownBounce),
	ftMotionCommandWait(8),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandMakeAttackColl(0, 0, 10, 10, 0, 0, 300, 120, 0, 0, 361, 80, 0, 3, 1, 2, 0, 20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandLoopBegin(2),
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(14),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 200, -280, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Damaged_0x0DF0[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageBumpHit), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Damaged_0x0DFC[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageRumble), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_EggLay_0x0E08[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageFlameBurst), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FalconDivePulled[] = {
	ftMotionCommandSubroutine(dLuigiMainMotion_0x01B8),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkleDelay), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Damaged_0x0E28[] = {
	ftMotionCommandSubroutine(dLuigiMainMotion_0x01B8),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkle), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Taunt[] = {
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandMakeAttackColl(0, 0, 22, 1, 0, 0, 100, 0, 0, 0, 361, 100, 60, 3, 0, 0, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Jab1[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 10, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 9, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Jab2[] = {
	ftMotionCommandWaitAsync(3),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 16, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 15, 2, 1, 0, 180, 0, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
#else
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 16, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 15, 2, 1, 0, 180, 0, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Jab3[] = {
	ftMotionPlayVoice(nSYAudioVoiceLuigiSmash1),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 4, 0, 0, 150, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetAttackCollDamage(0, 4),
	ftMotionCommandSetAttackCollDamage(1, 4),
	ftMotionCommandSetAttackCollSize(0, 180),
	ftMotionCommandSetAttackCollSize(1, 280),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_DashAttack[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 10, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 10, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWait(6),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 2, 1, 0, 280, 0, 100, 0, 361, 100, 0, 3, 0, 1, 0, 50),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FTiltHigh[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FTilt[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FTiltLow[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_UTilt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 14, 10, 1, 0, 180, 0, 0, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 10, 1, 0, 290, 60, 0, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_DTilt[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 19, 7, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 7, 1, 0, 260, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FSmashHigh[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 16, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FSmashMidHigh[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 16, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FSmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 15, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 15, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FSmashMidLow[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 14, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 14, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FSmashLow[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 14, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 14, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_USmash[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 300, -100, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 19, 1, 0, 400, 0, 100, 0, 85, 120, 0, 3, 0, 2, 0, 26),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_DSmash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(25, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 25, 17, 1, 0, 170, 0, 0, 20, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 25, 17, 1, 0, 210, 120, 0, 50, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 20, 17, 1, 0, 170, 0, 0, 20, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(3, 0, 20, 17, 1, 0, 210, 120, 0, 50, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(15),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(7),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_AttackAirN[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 0, 25, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandWait(26),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_AttackAirF[] = {
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(12),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_LandingAirF[] = {
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_AttackAirB[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 240, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 290, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_LandingAirB[] = {
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_AttackAirU[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 25, 12, 1, 0, 220, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 12, 1, 0, 250, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 9, 1, 0, 220, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 9, 1, 0, 250, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(7),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_LandingAirU[] = {
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_AttackAirD[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 25, 3, 1, 0, 350, -30, 45, 0, -70, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 3, 1, 0, 350, 50, 30, 0, -70, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandLoopBegin(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_LandingAirX_0x16E8[] = {
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Appear1[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(nSYAudioFGMMarioDokan),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWait(10),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_Appear2[] = {
	ftMotionCommandGoto(dLuigiMainMotion_Appear1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FireballGround[] = {
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetSlopeContour(3),
};

ftMotionCommand dLuigiMainMotion_0x1758[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(nGMColAnimFighterMarioSpecialN, 0),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMMarioSpecialN),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_FireballAir[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandGoto(dLuigiMainMotion_0x1758),
};

ftMotionCommand dLuigiMainMotion_SuperJumpPunchGround[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(2),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 12, 25, 1, 1, 280, 0, 0, 0, 80, 78, 0, 3, 0, 2, 1, 100),
	ftMotionCommandMakeAttackColl(1, 0, 15, 25, 1, 1, 120, 160, 0, 0, 80, 78, 0, 3, 0, 2, 1, 100),
#else
	ftMotionCommandMakeAttackColl(0, 0, 12, 25, 1, 1, 280, 0, 0, 0, 90, 80, 0, 3, 0, 2, 7, 90),
	ftMotionCommandMakeAttackColl(1, 0, 15, 25, 1, 1, 120, 160, 0, 0, 90, 80, 0, 3, 0, 2, 7, 90),
#endif
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 80, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMMarioSpecialHiJump),
	ftMotionCommandSetColAnim(nGMColAnimFighterDamageCommon, 1),
	ftMotionCommandWait(1),
};

ftMotionCommand dLuigiMainMotion_0x17FC[] = {
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 12, 2, 1, 4, 310, 0, 0, 60, 361, 100, 10, 3, 0, 1, 2, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 2, 1, 4, 260, 150, 0, 60, 361, 100, 10, 3, 0, 1, 2, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 12, 1, 1, 4, 310, 0, 0, 60, 361, 100, 10, 3, 0, 1, 2, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 1, 1, 4, 260, 150, 0, 60, 361, 100, 10, 3, 0, 1, 2, 0),
#endif
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_SuperJumpPunchAir[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(2),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 12, 24, 1, 1, 280, 0, 0, 0, 80, 75, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(1, 0, 15, 24, 1, 1, 120, 160, 0, 0, 80, 75, 0, 3, 0, 2, 1, 80),
#else
	ftMotionCommandMakeAttackColl(0, 0, 12, 25, 1, 1, 280, 0, 0, 0, 80, 80, 0, 3, 0, 2, 7, 80),
	ftMotionCommandMakeAttackColl(1, 0, 15, 25, 1, 1, 120, 160, 0, 0, 80, 80, 0, 3, 0, 2, 7, 80),
#endif
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 80, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMMarioSpecialHiJump),
	ftMotionCommandSetColAnim(nGMColAnimFighterDamageCommon, 1),
	ftMotionCommandWait(1),
	ftMotionCommandGoto(dLuigiMainMotion_0x17FC),
};

ftMotionCommand dLuigiMainMotion_MarioTornadoGround[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(nSYAudioVoiceLuigiSpecialLw),
	ftMotionCommandMakeAttackColl(0, 0, 0, 16, 1, 0, 140, 0, 300, 150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(1, 0, 0, 16, 1, 0, 140, 0, 300, -150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(2, 0, 0, 16, 1, 0, 180, 0, 0, 0, 90, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing1),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 1, 0, 200, 0, 300, 150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(1, 0, 0, 18, 1, 0, 200, 0, 300, -150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_0x1958[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(nSYAudioVoiceLuigiSpecialLw),
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 140, 0, 300, 150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(1, 0, 0, 15, 1, 0, 140, 0, 300, -150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(2, 0, 0, 15, 1, 0, 180, 0, 120, 0, 90, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing1),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 1, 0, 200, 0, 300, 150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(1, 0, 0, 18, 1, 0, 200, 0, 300, -150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(2, 0, 0, 18, 1, 0, 220, 0, 120, 0, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(3, 0, 0, 18, 1, 0, 90, 0, 420, 0, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_0x1A28[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dLuigiMainMotion_0x1A2C[] = {
	ftMotionCommandEnd(),
};
