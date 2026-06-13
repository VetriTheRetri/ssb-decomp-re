/* ftMotionCommand script data for relocData file 238 (NessMainMotion) */
/* File size: US 6064 bytes (0x17B0) / JP 6048 bytes (0x17A0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmsound.h>
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
extern ftMotionCommand dNessMainMotion_Jump[];
extern ftMotionCommand dNessMainMotion_DKTAAir[];
extern u32 dNessMainMotion_PKThunder[];
extern ftMotionCommand dNessMainMotion_DownSpecial[];
extern ftMotionCommand dNessMainMotion_DownSpecialStartAir[];
ftMotionCommand dNessMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWait(4),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandWait(3),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dNessMainMotion_EggLay_0x0024[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dNessMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dNessMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dNessMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dNessMainMotion_EggLay_0x0024),
};

ftMotionCommand dNessMainMotion_Dash[] = {
	ftMotionPlayFGM(nSYAudioFGMNessDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_Run[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMNessFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMNessFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
};

ftMotionCommand dNessMainMotion_0x00B0[] = {
	ftMotionCommandGoto(dNessMainMotion_Run),
};

ftMotionCommand dNessMainMotion_RunBrake[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_Turn[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_TurnRun[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_LandingAirX_0x0114[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandGoto(dNessMainMotion_Jump),
};

ftMotionCommand dNessMainMotion_Jump[] = {
	ftMotionPlayFGM(nSYAudioFGMNessJump),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, nEFKindPsionic, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_JumpAerial[] = {
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, nEFKindPsionic, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_LandingAirX_0x0180[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_LandingAirX_0x019C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_Teeter[] = {
	ftMotionPlayVoice(nSYAudioVoiceNessOttotto),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ShieldDrop_0x01C0[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip7),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ShieldDrop_0x01C8[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip7),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_0x01DC[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandReturn(),
};

ftMotionCommand dNessMainMotion_ClashingDuringPKTA_0x01E4[] = {
	ftMotionCommandSubroutine((ftMotionCommand *)dNessMainMotion_0x01DC),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_Damage[] = {
	ftMotionCommandSubroutine((ftMotionCommand *)dNessMainMotion_0x01DC),
	ftMotionCommandSetDamageThrown((u32)dFTCommonMoveset_DamageScript) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_LandingAirX_0x0204[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_EnterPipe[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ExitPipe[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_StunLandD[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_StunLandU[] = {
	ftMotionCommandGoto(dNessMainMotion_StunLandD),
};

ftMotionCommand dNessMainMotion_0x0280[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dNessMainMotion_StunStartD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_StunStartU[] = {
	ftMotionCommandGoto(dNessMainMotion_StunStartD),
};

ftMotionCommand dNessMainMotion_DownForwardD[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine((ftMotionCommand *)dNessMainMotion_0x0280),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_DownForwardU[] = {
	ftMotionCommandGoto(dNessMainMotion_DownForwardD),
};

ftMotionCommand dNessMainMotion_0x02D8[] = {
	ftMotionCommandGoto(dNessMainMotion_DownForwardD),
};

ftMotionCommand dNessMainMotion_0x02E0[] = {
	ftMotionCommandGoto(dNessMainMotion_DownForwardD),
};

ftMotionCommand dNessMainMotion_DownAttackD[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(14),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_DownAttackU[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 26, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 26, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_Tech[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(nSYAudioVoiceNessSmash1),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_TechF[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionPlayVoice(nSYAudioVoiceNessSmash1),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_TechB[] = {
	ftMotionCommandGoto(dNessMainMotion_TechF),
};

ftMotionCommand dNessMainMotion_RollF[] = {
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

ftMotionCommand dNessMainMotion_RollB[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffCatch[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffWait[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffQuick[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffClimbQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffClimbQuick2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffSlow[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffClimbSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffClimbSlow2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffAttackQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffAttackQuick2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceNessSmash1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 28, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffAttackSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffAttackSlow2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceNessSmash1),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 6, 0, 0, 280, 80, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffEscapeQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffEscapeQuick2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffEscapeSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_CliffEscapeSlow2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_LightItemPickup[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_HeavyItemPickup[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemDrop[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowDash[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowSmashB_0x0670[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowSmashB_0x068C[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dNessMainMotion_ItemThrowSmashB_0x0670),
};

ftMotionCommand dNessMainMotion_ItemThrowSmashU_0x0698[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowSmashD_0x06B4[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowSmashB_0x06D0[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowSmashB_0x06F0[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dNessMainMotion_ItemThrowSmashB_0x06D0),
};

ftMotionCommand dNessMainMotion_ItemThrowSmashU_0x06FC[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowSmashD_0x071C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowAirSmashB_0x073C[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowAirSmashB_0x0758[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dNessMainMotion_ItemThrowAirSmashB_0x073C),
};

ftMotionCommand dNessMainMotion_ItemThrowAirSmashU_0x0764[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowAirSmashF_0x0780[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowAirSmashB_0x079C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowAirSmashB_0x07BC[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dNessMainMotion_ItemThrowAirSmashB_0x079C),
};

ftMotionCommand dNessMainMotion_ItemThrowAirSmashU_0x07C8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ItemThrowAirSmashF_0x07E8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_HeavyItemThrowSmashB_0x0808[] = {
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_HeavyItemThrowSmashB_0x0814[] = {
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dNessMainMotion_HeavyItemThrowSmashB_0x0808),
};

ftMotionCommand dNessMainMotion_HeavyItemThrowSmashB_0x0820[] = {
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_HeavyItemThrowSmashB_0x082C[] = {
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dNessMainMotion_HeavyItemThrowSmashB_0x0820),
};

ftMotionCommand dNessMainMotion_SwordSwing1[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing1) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_SwordSwing3[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing3) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_SwordSwing4[] = {
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing4) /* extern */,
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_SwordSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwingDash) /* extern */,
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWait(25),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_BatSwing1[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing1) /* extern */,
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_BatSwing3[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing3) /* extern */,
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_BatSwing4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing4) /* extern */,
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_BatSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwingDash) /* extern */,
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_HarisenSwing1[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing1) /* extern */,
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_HarisenSwing3[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing3) /* extern */,
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_HarisenSwing4[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing4) /* extern */,
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_HarisenSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwingDash) /* extern */,
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_StarRodSwing1[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 8),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing1) /* extern */,
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_StarRodSwing3[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 16),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing3) /* extern */,
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_StarRodSwing4[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 28),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing4) /* extern */,
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_StarRodSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 10),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwingDash) /* extern */,
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_FireFlowerShoot_0x0AA8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_FireFlowerShoot_0x0AB8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_Hammer[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_FireFlowerShoot) /* extern */,
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dNessMainMotion_Hammer),
};

ftMotionCommand dNessMainMotion_0x0AE8[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dNessMainMotion_0x0AE8),
};

ftMotionCommand dNessMainMotion_ShieldBreak[] = {
	ftMotionCommandEffect(127, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceNessDamage),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dNessMainMotion_0x0AE8),
};

ftMotionCommand dNessMainMotion_ClashingDuringPKTA[] = {
	ftMotionCommandGoto(dNessMainMotion_0x0AE8),
};

ftMotionCommand dNessMainMotion_StunLandD_0x0B48[] = {
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_StunStart[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_Sleep_0x0B74[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceNessFuraFura),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandLoopBegin(12),
	ftMotionCommandEffect(0, nEFKindFuraSparkle, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dNessMainMotion_Sleep_0x0B74),
};

ftMotionCommand dNessMainMotion_Sleep_0x0BA4[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceNessFuraSleep),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dNessMainMotion_Sleep_0x0BA4),
};

FTThrowHitDesc dNessMainMotion_0x0BCC[2] = {
	{ -1, 8, 361, 100, 0, 0, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

ftMotionCommand dNessMainMotion_Catch[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow((u32)dNessMainMotion_0x0BCC),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dNessMainMotion_0x0C4C[2] = {
	{ 52, 16, 45, 70, 0, 90, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

ftMotionCommand dNessMainMotion_ThrowF[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow((u32)dNessMainMotion_0x0C4C),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionCommandEffect(30, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandMakeAttackColl(0, 0, 30, 10, 0, 0, 300, 0, 0, 0, 361, 80, 0, 3, 1, 2, 0, 10),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandEffect(30, nEFKindPsionic, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetTexturePartID(0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEffect(30, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dNessMainMotion_0x0D38[2] = {
	{ 52, 16, 45, 70, 0, 90, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

ftMotionCommand dNessMainMotion_ThrowB[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow((u32)dNessMainMotion_0x0D38),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionCommandEffect(30, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandMakeAttackColl(0, 0, 30, 10, 0, 0, 300, 0, 0, 0, 361, 80, 0, 3, 1, 2, 0, 10),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandEffect(30, nEFKindPsionic, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetTexturePartID(0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEffect(30, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ClashingDuringPKTA_0x0E24[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageBumpHit) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ClashingDuringPKTA_0x0E30[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageRumble) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_EggLay_0x0E3C[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageFlameBurst) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_FalconDivePulled[] = {
	ftMotionCommandSubroutine((ftMotionCommand *)dNessMainMotion_0x01DC),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkleDelay) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_ClashingDuringPKTA_0x0E5C[] = {
	ftMotionCommandSubroutine((ftMotionCommand *)dNessMainMotion_0x01DC),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkle) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_Taunt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(3),
	ftMotionPlayVoice(nSYAudioVoiceNessAppeal),
	ftMotionCommandWait(20),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_Jab1[] = {
	ftMotionCommandSetSlopeContour(1),
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

ftMotionCommand dNessMainMotion_Jab2[] = {
	ftMotionCommandSetSlopeContour(1),
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

ftMotionCommand dNessMainMotion_Jab3[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionPlayVoice(nSYAudioVoiceNessSmash1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 4, 0, 0, 150, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 28, 4, 0, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
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

ftMotionCommand dNessMainMotion_DashAttack[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 280, 0, 140, 120, 361, 100, 0, 3, 1, 2, 0, 16),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 9, 1, 0, 250, 0, 140, 120, 361, 100, 0, 3, 1, 2, 0, 10),
	ftMotionCommandWait(14),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_FTiltHigh[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 25, 11, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 11, 1, 0, 230, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_FTilt[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 25, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 10, 1, 0, 230, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_FTiltLow[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 25, 9, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 9, 1, 0, 230, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_UTilt[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetHitStatusPartID(12, 3),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 10, 8, 1, 0, 370, 0, 0, 0, 96, 40, 0, 3, 0, 1, 0, 70),
	ftMotionCommandMakeAttackColl(1, 0, 16, 8, 1, 0, 370, 0, 0, 0, 96, 40, 0, 3, 0, 1, 0, 70),
#else
	ftMotionCommandMakeAttackColl(0, 0, 10, 7, 1, 0, 370, 0, 0, 0, 100, 40, 0, 3, 0, 1, 0, 80),
	ftMotionCommandMakeAttackColl(1, 0, 16, 7, 1, 0, 370, 0, 0, 0, 100, 40, 0, 3, 0, 1, 0, 80),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(15),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_DTilt[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 19, 3, 1, 0, 160, 20, 0, 0, 361, 20, 0, 3, 0, 1, 1, 2),
	ftMotionCommandMakeAttackColl(1, 0, 20, 3, 1, 0, 200, 140, 0, 0, 361, 20, 0, 3, 0, 1, 1, 2),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

FTSpecialColl dNessMainMotion_0x1114 = {
	2,                              /* kind */
	0,                              /* joint_id */
	{ 0.0F, 150.0F, 0.0F },         /* offset */
	{ 300.0F, 300.0F, 300.0F },     /* size */
	1000,                           /* damage_resist */
};

ftMotionCommand dNessMainMotion_FSmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(17, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 17, 20, 1, 0, 200, 0, 280, 0, 361, 67, 0, 3, 0, 2, 7, 70),
	ftMotionCommandMakeAttackColl(1, 0, 17, 20, 1, 0, 180, 0, 60, 0, 361, 67, 0, 3, 0, 2, 7, 70),
#else
	ftMotionCommandMakeAttackColl(0, 0, 17, 18, 1, 0, 200, 0, 280, 0, 361, 65, 0, 3, 0, 2, 7, 70),
	ftMotionCommandMakeAttackColl(1, 0, 17, 18, 1, 0, 180, 0, 60, 0, 361, 65, 0, 3, 0, 2, 7, 70),
#endif
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_USmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(30, 0),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(30, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLinkSpecialNShoot),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 30, 19, 1, 0, 200, 0, 0, 0, 105, 100, 0, 3, 0, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 30, 17, 1, 0, 200, 0, 0, 0, 110, 100, 0, 3, 0, 2, 1, 20),
#endif
	ftMotionCommandWait(5),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 30, 17, 1, 0, 200, 0, 0, 0, 90, 100, 0, 3, 0, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 30, 15, 1, 0, 200, 0, 0, 0, 78, 100, 0, 3, 0, 2, 1, 0),
#endif
	ftMotionCommandWait(3),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 30, 14, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 30, 13, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
#endif
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionPlayFGM(nSYAudioFGMPunchS),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_DSmash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(30, 0),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLinkSpecialNShoot),
	ftMotionCommandEffect(30, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 100, 100, 100),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 30, 21, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 30, 19, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
#endif
	ftMotionCommandWait(40),
	ftMotionCommandClearAttackCollAll(),
	ftMotionPlayFGM(nSYAudioFGMPunchS),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_AttackAirN[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 26, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 0, 26, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandWait(30),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_AttackAirF[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 310, 0, 140, 180, 361, 100, 0, 3, 1, 2, 0, 16),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 1, 0, 280, 0, 140, 180, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandWait(13),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_LandingAirF[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_AttackAirB[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 16, 1, 0, 240, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 16, 1, 0, 290, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 26, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_LandingAirB[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_AttackAirU[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusPartID(12, 3),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 12, 17, 1, 0, 380, 0, 100, 0, 85, 120, 0, 3, 0, 2, 0, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 12, 15, 1, 0, 350, 0, 100, 0, 85, 110, 0, 3, 0, 2, 0, 10),
#endif
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_AttackAirD[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 320, 0, -30, 30, 934, 120, 0, 3, 0, 2, 0, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 300, 0, -30, 30, 934, 120, 0, 3, 0, 2, 0, 0),
	ftMotionCommandWait(13),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_LandingAirX_0x1494[] = {
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_AppearStart1[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_AppearStart2[] = {
	ftMotionCommandGoto(dNessMainMotion_AppearStart1),
};

ftMotionCommand dNessMainMotion_Appear1[] = {
	ftMotionPlayFGM(nSYAudioFGMBurnL),
	ftMotionCommandEffect(0, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteMultiExplode, 0, 0, 180, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterNessAppear, 0),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(36),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandMakeRumble(20, 7),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, nEFKindFlameRandom, 0, 0, 100, 0, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_Appear2[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_AppearEnd[] = {
	ftMotionCommandGoto(dNessMainMotion_Appear2),
};

ftMotionCommand dNessMainMotion_PKFireGround[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionPlayVoice(nSYAudioVoiceNessSpecialN),
	ftMotionCommandEffect(0, nEFKindPsionic, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 150, 130, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_PKFireAir[] = {
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionPlayVoice(nSYAudioVoiceNessSpecialN),
	ftMotionCommandEffect(0, nEFKindPsionic, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 120, 130, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_PKThunderStartGround1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayVoice(nSYAudioVoiceNessSpecialHi),
	ftMotionCommandEffect(0, nEFKindPsionic, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandPlayLoopSFXStoreInfo(nSYAudioFGMNessPKThunderLoop),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 150, 130, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_PKThunderStartGround2[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetColAnim(nGMColAnimFighterNessSpecialHiHold, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_PKThunderEnd[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
ftMotionCommand dNessMainMotion_DKTAAir[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandMakeAttackColl(0, 0, 0, 35, 1, 2, 400, 0, 100, 0, 361, 100, 0, 3, 0, 2, 4, 50),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetColAnim(65, 0),
	ftMotionPlayVoice(nSYAudioVoiceNessDamage),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayFGM(nSYAudioVoicePublicGaspM),
	ftMotionCommandEffect(0, nEFKindDustExpandLarge, 0, 0, 90, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_0x16AC[] = {
	ftMotionCommandGoto(dNessMainMotion_PKThunderStartGround1),
};
#else
ftMotionCommand dNessMainMotion_DKTAAir[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandMakeAttackColl(0, 0, 0, 30, 1, 2, 300, 0, 100, 0, 361, 84, 0, 3, 0, 2, 4, 40),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterNessSpecialHiJibaku, 0),
	ftMotionPlayVoice(nSYAudioVoiceNessDamage),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayFGM(nSYAudioVoicePublicGaspM),
	ftMotionCommandEffect(0, nEFKindDustExpandLarge, 0, 0, 90, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

/* Dispatch table: per-entry-point Goto's followed by raw config bytes.
 * Not a pure ftMotionCommand script — typed as u32 to suppress R018. */
#if defined(REGION_JP)
u32 dNessMainMotion_PKThunder[] = {
	ftMotionCommandGoto(dNessMainMotion_PKThunderStartGround2),
	ftMotionCommandGoto(dNessMainMotion_PKThunderEnd),
	ftMotionCommandGoto(dNessMainMotion_DKTAAir),
	ftMotionCommandEnd(),
	0x00000001,
	ftMotionCommandEnd(),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandStopLoopSFX(54722560),
	ftMotionCommandEnd(),
	ftMotionCommandStopLoopSFX(63438848),
	ftMotionCommandStopLoopSFX(63438848),
};
#else
u32 dNessMainMotion_PKThunder[] = {
	ftMotionCommandGoto(dNessMainMotion_PKThunderStartGround1),
	ftMotionCommandGoto(dNessMainMotion_PKThunderStartGround2),
	ftMotionCommandGoto(dNessMainMotion_PKThunderEnd),
	ftMotionCommandGoto(dNessMainMotion_DKTAAir),
	ftMotionCommandEnd(),
	0x00000001,
	ftMotionCommandEnd(),
	0x43960000,
	0x43430000,
	ftMotionCommandEnd(),
};
#endif

ftMotionCommand dNessMainMotion_0x16E8[] = {
#if defined(REGION_JP)
	ftMotionCommandStopLoopSFX(63438848),
#else
	ftMotionCommandStopLoopSFX(64421888),
	ftMotionCommandStopLoopSFX(64421888),
	ftMotionCommandStopLoopSFX(64421888),
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetSlopeContour(3),
#endif
};

ftMotionCommand dNessMainMotion_DownBStartGround[] = {
#if defined(REGION_US)
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetSlopeContour(3),
#endif
	ftMotionCommandEffect(0, nEFKindRipple, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandPlayLoopSFXStoreInfo(nSYAudioFGMNessSpecialLwStart),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(2),
#endif
};

ftMotionCommand dNessMainMotion_HealingDownB_0x1718[] = {
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(62, 0),
#else
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetColAnim(nGMColAnimFighterNessSpecialLwHold, 0),
#endif
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetSlopeContour(3),
#endif
};

ftMotionCommand dNessMainMotion_HealingDownB_0x1728[] = {
#if defined(REGION_US)
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetSlopeContour(3),
#endif
	ftMotionPlayFGM(nSYAudioFGMCharacterUnk1),
	ftMotionPlayFGM(nSYAudioVoicePublicAbsorb),
	ftMotionCommandSetColAnim(nGMColAnimFighterNessSpecialLwHit, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandEffect(8, nEFKindDamageFlyMDustReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(14),
	ftMotionCommandEffect(0, nEFKindHealSparkles, 0, 0, 0, 0, 200, 200, 200),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
#endif
};

#if defined(REGION_JP)
ftMotionCommand dNessMainMotion_DownSpecial[] = {
	ftMotionCommandGoto((ftMotionCommand *)((u8 *)dNessMainMotion_0x16E8 + 0x8)),
};
#else
ftMotionCommand dNessMainMotion_DownSpecial[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
ftMotionCommand dNessMainMotion_DownSpecialStartAir[] = {
	ftMotionCommandGoto((ftMotionCommand *)((u8 *)dNessMainMotion_DownBStartGround + 0x18)),
};

ftMotionCommand dNessMainMotion_0x1790[] = {
	ftMotionCommandGoto((ftMotionCommand *)((u8 *)dNessMainMotion_HealingDownB_0x1718 + 0x8)),
};

ftMotionCommand dNessMainMotion_0x1798[] = {
	ftMotionCommandGoto((ftMotionCommand *)((u8 *)dNessMainMotion_HealingDownB_0x1728 + 0x50)),
};
#else
ftMotionCommand dNessMainMotion_DownSpecialStartAir[] = {
	ftMotionCommandGoto(dNessMainMotion_DownBStartGround),
};

ftMotionCommand dNessMainMotion_0x1790[] = {
	ftMotionCommandGoto(dNessMainMotion_HealingDownB_0x1718),
};

ftMotionCommand dNessMainMotion_0x1798[] = {
	ftMotionCommandGoto(dNessMainMotion_HealingDownB_0x1728),
};

ftMotionCommand dNessMainMotion_0x17A0[] = {
	ftMotionCommandGoto(dNessMainMotion_DownSpecial),
};

ftMotionCommand dNessMainMotion_0x17A8[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dNessMainMotion_0x17AC[] = {
	ftMotionCommandEnd(),
};
#endif

