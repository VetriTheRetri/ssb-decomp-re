/* ftMotionCommand script data for relocData file 224 (LinkMainMotion) */
/* File size: 7920 bytes (0x1EF0) */

#include "relocdata_types.h"
extern ftMotionCommand dFTCommonMoveset_DamageBumpHit[];
extern ftMotionCommand dFTCommonMoveset_DamageRumble[];
extern ftMotionCommand dFTCommonMoveset_DamageFlameBurst[];
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
ftMotionCommand dLinkMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWait(6),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dLinkMainMotion_EggLay_0x0014[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0000),
	ftMotionCommandWait(30),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0000),
	ftMotionCommandWait(50),
	ftMotionCommandGoto(dLinkMainMotion_EggLay_0x0014),
};

ftMotionCommand dLinkMainMotion_Walk1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Walk2[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Dash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMLinkDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Run[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMLinkFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMLinkFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
};

ftMotionCommand dLinkMainMotion_0x00B0[] = {
	ftMotionCommandGoto(dLinkMainMotion_Run),
};

ftMotionCommand dLinkMainMotion_RunBrake[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Turn[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_TurnRun[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_LandingAirX_0x0118[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Jump[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundGrind3),
	ftMotionPlayVoice(nSYAudioVoiceLinkJump),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_JumpAerial[] = {
	ftMotionPlayFGM(nSYAudioFGMUnkGrind5),
	ftMotionPlayVoice(nSYAudioVoiceLinkJumpAerial),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_LandingAirX_0x016C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMLinkLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_LandingAirX_0x0188[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMLinkLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Teeter[] = {
	ftMotionPlayVoice(nSYAudioVoiceLinkOttotto),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ShieldDrop_0x01AC[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip5),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ShieldDrop_0x01B4[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip5),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_0x01C8[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_0x01CC[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandReturn(),
};

ftMotionCommand dLinkMainMotion_Damage_0x01D8[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Damage_0x01E4[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
	ftMotionCommandSetDamageThrown((u32)dFTCommonMoveset_DamageScript), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_LandingAirX_0x01F8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMLinkLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Crouch[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CrouchIdle[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CrouchEnd[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_EnterPipe[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ExitPipe[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_StunLandD[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
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

ftMotionCommand dLinkMainMotion_StunLandU[] = {
	ftMotionCommandGoto(dLinkMainMotion_StunLandD),
};

ftMotionCommand dLinkMainMotion_0x0290[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dLinkMainMotion_StunStartD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_StunStartU[] = {
	ftMotionCommandGoto(dLinkMainMotion_StunStartD),
};

ftMotionCommand dLinkMainMotion_DownForwardD[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0290),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_DownForwardU[] = {
	ftMotionCommandGoto(dLinkMainMotion_DownForwardD),
};

ftMotionCommand dLinkMainMotion_0x02E8[] = {
	ftMotionCommandGoto(dLinkMainMotion_DownForwardD),
};

ftMotionCommand dLinkMainMotion_0x02F0[] = {
	ftMotionCommandGoto(dLinkMainMotion_DownForwardD),
};

ftMotionCommand dLinkMainMotion_DownAttackD[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 6, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 6, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_DownAttackU[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 0, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 0, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 6, 0, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 6, 0, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Tech[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, nEFKindFlashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceLinkGrunt2),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_TechF[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, nEFKindFlashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_TechB[] = {
	ftMotionCommandGoto(dLinkMainMotion_TechF),
};

ftMotionCommand dLinkMainMotion_RollF[] = {
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

ftMotionCommand dLinkMainMotion_RollB[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffCatch[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffWait[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffQuick[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffClimbQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffClimbQuick2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffSlow[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffClimbSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffClimbSlow2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffAttackQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffAttackQuick2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceLinkSmash1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffAttackSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffAttackSlow2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceLinkSmash1),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 240, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffEscapeQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffEscapeQuick2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffEscapeSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_CliffEscapeSlow2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_LightItemPickup[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_HeavyItemPickup[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemDrop[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowDash[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowSmashB_0x07D8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowSmashB_0x0804[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLinkMainMotion_ItemThrowSmashB_0x07D8),
};

ftMotionCommand dLinkMainMotion_ItemThrowSmashU_0x0814[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowSmashD_0x0840[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowSmashB_0x086C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowSmashB_0x089C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLinkMainMotion_ItemThrowSmashB_0x086C),
};

ftMotionCommand dLinkMainMotion_ItemThrowSmashU_0x08AC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowSmashD_0x08DC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowAirSmashB_0x090C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowAirSmashB_0x0934[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dLinkMainMotion_ItemThrowAirSmashB_0x090C),
};

ftMotionCommand dLinkMainMotion_ItemThrowAirSmashU_0x0940[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowAirSmashF_0x0968[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowAirSmashB_0x0990[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowAirSmashB_0x09BC[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dLinkMainMotion_ItemThrowAirSmashB_0x0990),
};

ftMotionCommand dLinkMainMotion_ItemThrowAirSmashU_0x09C8[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_ItemThrowAirSmashF_0x09F4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_HeavyItemThrowSmashB_0x0A20[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_HeavyItemThrowSmashB_0x0A3C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dLinkMainMotion_HeavyItemThrowSmashB_0x0A20),
};

ftMotionCommand dLinkMainMotion_HeavyItemThrowSmashB_0x0A4C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_HeavyItemThrowSmashB_0x0A68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLinkMainMotion_HeavyItemThrowSmashB_0x0A4C),
};

ftMotionCommand dLinkMainMotion_SwordSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing1), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_SwordSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing3), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_SwordSwing4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing4), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_SwordSwingDash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwingDash), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(15),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_BatSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing1), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_BatSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing3), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_BatSwing4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing4), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_BatSwingDash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwingDash), /* extern */
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_HarisenSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing1), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_HarisenSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing3), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_HarisenSwing4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing4), /* extern */
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_HarisenSwingDash[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwingDash), /* extern */
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_StarRodSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 11),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing1), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_StarRodSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 15),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing3), /* extern */
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_StarRodSwing4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 28),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing4), /* extern */
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_StarRodSwingDash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 25),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwingDash), /* extern */
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_FireFlowerShoot_0x0D18[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_FireFlowerShoot_0x0D28[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_Hammer[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandSetModelPartID(11, -1),
#if defined(REGION_US)
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
#endif
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_FireFlowerShoot), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dLinkMainMotion_Hammer),
};

u32 dLinkMainMotion_0x0D68[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dLinkMainMotion_0x0D68),
};

u32 dLinkMainMotion_ShieldBreak[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandGoto(dLinkMainMotion_0x0D68),
};

u32 dLinkMainMotion_0x0DC8[] = {
	ftMotionCommandGoto(dLinkMainMotion_0x0D68),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_StunLand[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Sleep_0x0DF8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Sleep_0x0E00[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceLinkFuraFura),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandLoopBegin(5),
	ftMotionCommandEffect(0, nEFKindFuraSparkle, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dLinkMainMotion_Sleep_0x0E00),
};

u32 dLinkMainMotion_Sleep_0x0E34[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceLinkFuraSleep),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dLinkMainMotion_Sleep_0x0E34),
};

FTThrowHitDesc dLinkMainMotion_0x0E5C[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

ftMotionCommand dLinkMainMotion_Catch[] = {
	ftMotionCommandSetThrow((u32)dLinkMainMotion_0x0E5C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandMakeRumble(16, 9),
	ftMotionCommandMakeAttackColl(0, 0, 35, 1, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -100, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMLinkCatchHookshot),
	ftMotionCommandSetFlag1(12),
	ftMotionCommandSetFlag2(5),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(35, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 90, 90, 90),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_CatchPull[] = {
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dLinkMainMotion_0x0F34[] = {
	{ 52, 14, 45, 70, 0, 80, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dLinkMainMotion_ThrowF[] = {
	ftMotionCommandSetThrow((u32)dLinkMainMotion_0x0F34),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 32, 8, 0, 0, 240, 130, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 32, 8, 0, 0, 200, 0, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionPlayFGM(nSYAudioFGMKickL),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dLinkMainMotion_0x1008[] = {
	{ 52, 16, 45, 70, 0, 70, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

ftMotionCommand dLinkMainMotion_ThrowB[] = {
	ftMotionCommandSetThrow((u32)dLinkMainMotion_0x1008),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 27, 8, 0, 0, 240, 130, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 27, 8, 0, 0, 200, 0, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionPlayFGM(nSYAudioFGMKickL),
	ftMotionCommandEffect(35, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Damaged_0x10F0[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageBumpHit), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Damaged_0x10FC[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageRumble), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_EggLay_0x1108[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageFlameBurst), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_FalconDivePulled[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkleDelay), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Damaged_0x1128[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkle), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Taunt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionPlayVoice(nSYAudioVoiceLinkSmash1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Jab1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 11, 5, 1, 3, 220, 0, 0, 250, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 5, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Jab2[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 3, 220, 0, 0, 250, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 3, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Jab3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 250, 361, 100, 0, 3, 0, 1, 5, 6),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 6),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioVoiceLinkJumpAerial),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_JabLoop_0x12A8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_JabLoop_0x12B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandPauseScript(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandGoto(dLinkMainMotion_JabLoop_0x12B0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_JabLoopEnd[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_DashAttack[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 11, 14, 1, 3, 220, 0, 0, 190, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 10),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 11, 10, 1, 3, 220, 0, 0, 190, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 11, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_FTilt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionPlayVoice(nSYAudioVoiceLinkJumpAerial),
	ftMotionCommandMakeAttackColl(0, 0, 11, 18, 1, 3, 260, 0, 0, 280, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 17, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -100, 0, 80, 100),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 300, 400, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_UTilt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(8),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 15, 1, 3, 240, 0, 0, 260, 90, 100, 0, 3, 0, 2, 5, 20),
	ftMotionCommandMakeAttackColl(1, 0, 10, 15, 1, 3, 180, 0, 0, 0, 90, 100, 0, 3, 0, 2, 5, 20),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 10, 1, 3, 200, 0, 0, 240, 79, 100, 0, 3, 0, 2, 5, 20),
	ftMotionCommandMakeAttackColl(1, 0, 10, 10, 1, 3, 160, 0, 0, 0, 79, 100, 0, 3, 0, 2, 5, 20),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandWait(9),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 60, -360, 0, 0, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_DTilt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 240, 0, 0, 250, 80, 85, 0, 3, 0, 1, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 10, 12, 1, 3, 180, 0, 0, 0, 80, 85, 0, 3, 0, 1, 5, 30),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing3),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(6),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_FSmash[] = {
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandMakeAttackColl(0, 0, 11, 20, 1, 3, 280, 0, 0, 270, 50, 100, 0, 3, 0, 1, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 11, 20, 1, 3, 280, 0, 0, 130, 50, 100, 0, 3, 0, 1, 5, 30),
	ftMotionCommandMakeAttackColl(2, 0, 10, 20, 1, 3, 200, 0, 0, 0, 50, 100, 0, 3, 0, 1, 5, 30),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 240, 0, 0, 270, 361, 100, 0, 3, 0, 1, 5, 20),
	ftMotionCommandMakeAttackColl(1, 0, 11, 12, 1, 3, 240, 0, 0, 130, 361, 100, 0, 3, 0, 1, 5, 20),
	ftMotionCommandMakeAttackColl(2, 0, 10, 12, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 20),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(37),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_USmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(11),
	ftMotionPlayVoice(nSYAudioVoiceLinkSmash1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 1, 3, 240, 0, 0, 180, 120, 100, 80, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 1, 3, 240, 0, 0, 0, 100, 100, 80, 3, 0, 0, 5, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 7, 1, 3, 240, 0, 0, 180, 120, 100, 80, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 7, 1, 3, 240, 0, 0, 0, 100, 100, 80, 3, 0, 0, 5, 0),
#endif
	ftMotionCommandWait(2),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 1, 3, 220, 0, 0, 180, 80, 100, 30, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 1, 3, 160, 0, 0, 0, 80, 100, 30, 3, 0, 0, 5, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 7, 1, 3, 220, 0, 0, 180, 80, 100, 30, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 7, 1, 3, 160, 0, 0, 0, 80, 100, 30, 3, 0, 0, 5, 0),
#endif
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 4, 1, 3, 380, 0, 0, 180, 80, 100, 25, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 1, 3, 200, 0, 0, 0, 80, 100, 25, 3, 0, 0, 5, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 3, 380, 0, 0, 180, 80, 100, 25, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 3, 1, 3, 200, 0, 0, 0, 80, 100, 25, 3, 0, 0, 5, 0),
#endif
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 380, 0, 0, 180, 90, 90, 0, 3, 0, 2, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 10, 12, 1, 3, 200, 0, 0, 0, 90, 90, 0, 3, 0, 2, 5, 30),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_DSmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 240, 40, 100, 0, 3, 0, 2, 5, 35),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 260, 40, 100, 0, 3, 0, 2, 5, 35),
#endif
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 150, 0, 0, 0, 75, 100, 0, 3, 0, 2, 5, 35),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 240, 40, 100, 0, 3, 0, 2, 5, 35),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 260, 40, 100, 0, 3, 0, 2, 5, 35),
#endif
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 150, 0, 0, 0, 75, 100, 0, 3, 0, 2, 5, 35),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_AttackAirN[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 32, 10, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 27, 10, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 10, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 32, 8, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 8, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10),
	ftMotionCommandMakeAttackColl(2, 0, 5, 8, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_AttackAirF[] = {
	ftMotionCommandSetFlag1(50),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 11, 20, 1, 3, 280, 0, 0, 250, 361, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandMakeAttackColl(1, 0, 10, 20, 1, 3, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 180, 0, 0, 250, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 12, 1, 3, 150, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(17),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_AttackAirB_0x1AB0[] = {
	ftMotionPlayFGM(nSYAudioFGMLinkLanding),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_AttackAirB_0x1AB8[] = {
	ftMotionCommandSetFlag1(50),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 27, 10, 1, 0, 280, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 10, 1, 0, 280, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 10, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 32, 10, 1, 0, 280, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 32, 10, 1, 0, 280, 90, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 10, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(9),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_AttackAirU[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 360, 0, 0, 100, 70, 100, 0, 3, 0, 2, 5, 5),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 100, 70, 100, 0, 3, 0, 2, 5, 5),
#endif
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 70, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWait(44),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_AttackAirD[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(30),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 180, 90, 90, 90),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 18, 1, 3, 360, 0, 0, 100, 361, 100, 0, 3, 0, 2, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 10, 18, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 30),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 100, 361, 100, 0, 3, 0, 2, 5, 25),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 25),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMBladeSwing4),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(65),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(12),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandHideItem(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_LandingAirD[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionPlayFGM(nSYAudioFGMLinkDeadSlam),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandHideItem(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_LandingAirX_0x1CA8[] = {
	ftMotionPlayFGM(nSYAudioFGMLinkLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Appear1[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(60, 7),
	ftMotionPlayFGM(nSYAudioFGMLinkAppear),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(87),
	ftMotionCommandSetModelPartID(20, -1),
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionPlayFGM(nSYAudioFGMBladeDraw),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Appear2[] = {
	ftMotionCommandGoto(dLinkMainMotion_Appear1),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_Bomb[] = {
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandWaitAsync(29),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayFGM(nSYAudioFGMLinkSpecialLwGet),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(19, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_MissingBoomerang_0x1D2C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetModelPartID(11, 1),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionPlayVoice(nSYAudioVoiceLinkSmash1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(10, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetModelPartID(20, -1),
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_MissingBoomerang_0x1D88[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetModelPartID(20, -1),
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_CatchingBoomerang[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayFGM(nSYAudioFGMLinkSpecialNGet),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandSetModelPartID(11, 1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetModelPartID(20, -1),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_UpSpecial[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMLinkSpecialHi),
	ftMotionPlayVoice(nSYAudioVoiceLinkSpecialHi),
	ftMotionCommandSetColAnim(nGMColAnimFighterSamusSpecialNEnd, 50),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag2(13),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 100, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 200, 0, 0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 250, 0, 0, 0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(11, nEFKindSparkleWhiteScale, 0, 0, 0, 300, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 300, 361, 100, 0, 3, 0, 2, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 30),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 1, 3, 180, 0, 0, 300, 361, 100, 0, 3, 0, 1, 5, 10),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 1, 3, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 10),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag2(3),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetFlag2(4),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag2(13),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dLinkMainMotion_0x1EEC[] = {
	ftMotionCommandEnd(),
};
