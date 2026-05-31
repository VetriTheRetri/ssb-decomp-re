/* ftMotionCommand script data for relocData file 216 (SamusMainMotion) */
/* File size: 7872 bytes (0x1EC0) */

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
ftMotionCommand dSamusMainMotion_0x0000[] = {
	ftMotionCommandHideModelPartAll(),
	ftMotionCommandSetModelPartID(6, 1),
	ftMotionCommandSetDamageCollPartIDS1(6),
	ftMotionCommandSetDamageCollPartIDS2(0, 25),
	ftMotionCommandSetDamageCollPartIDS3(-8, 200),
	ftMotionCommandSetDamageCollPartIDS4(260, 150),
	ftMotionCommandSetHitStatusPartID(5, 3),
	ftMotionCommandSetHitStatusPartID(13, 3),
	ftMotionCommandSetHitStatusPartID(15, 3),
	ftMotionCommandSetHitStatusPartID(8, 3),
	ftMotionCommandSetHitStatusPartID(16, 3),
	ftMotionCommandSetHitStatusPartID(9, 3),
	ftMotionCommandSetHitStatusPartID(32, 3),
	ftMotionCommandSetHitStatusPartID(27, 3),
	ftMotionCommandSetHitStatusPartID(33, 3),
	ftMotionCommandSetHitStatusPartID(28, 3),
	ftMotionCommandReturn(),
};

ftMotionCommand dSamusMainMotion_0x0044[] = {
	ftMotionCommandSetModelPartID(6, 2),
	ftMotionCommandSetDamageCollPartIDS1(6),
	ftMotionCommandSetDamageCollPartIDS2(0, 25),
	ftMotionCommandSetDamageCollPartIDS3(-8, 130),
	ftMotionCommandSetDamageCollPartIDS4(130, 130),
	ftMotionCommandReturn(),
};

ftMotionCommand dSamusMainMotion_0x005C[] = {
	ftMotionCommandSetModelPartID(6, 1),
	ftMotionCommandSetDamageCollPartIDS1(6),
	ftMotionCommandSetDamageCollPartIDS2(0, 25),
	ftMotionCommandSetDamageCollPartIDS3(-8, 200),
	ftMotionCommandSetDamageCollPartIDS4(260, 150),
	ftMotionCommandReturn(),
};

ftMotionCommand dSamusMainMotion_0x0074[] = {
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandResetDamageCollPartAll(),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dSamusMainMotion_EggLay_0x0084[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Walk1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Walk2[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Walk3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Dash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMSamusDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Run[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMSamusFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(12),
	ftMotionPlayFGM(nSYAudioFGMSamusFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dSamusMainMotion_Run),
};

ftMotionCommand dSamusMainMotion_RunBrake[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Turn[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_TurnRun[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 100, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_LandingAirX_0x0164[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Jump[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundGrind4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_JumpAerial[] = {
	ftMotionPlayFGM(nSYAudioFGMSamusJumpAerial),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_LandingAirX_0x01B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_LandingAirX_0x01CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ShieldDrop_0x01E8[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip10),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ShieldDrop_0x01F0[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip10),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Damage[] = {
	ftMotionCommandSetDamageThrown((u32)dFTCommonMoveset_DamageScript), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_LandingAirX_0x0210[] = {
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Crouch[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CrouchIdle[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CrouchEnd[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_EnterPipe[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ExitPipe[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_StunLandD[] = {
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

ftMotionCommand dSamusMainMotion_StunLandU[] = {
	ftMotionCommandGoto(dSamusMainMotion_StunLandD),
};

ftMotionCommand dSamusMainMotion_0x029C[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dSamusMainMotion_StunStartD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_StunStartU[] = {
	ftMotionCommandGoto(dSamusMainMotion_StunStartD),
};

ftMotionCommand dSamusMainMotion_DownForwardD[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dSamusMainMotion_0x029C),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_DownForwardU[] = {
	ftMotionCommandGoto(dSamusMainMotion_DownForwardD),
	ftMotionCommandGoto(dSamusMainMotion_DownForwardD),
	ftMotionCommandGoto(dSamusMainMotion_DownForwardD),
};

ftMotionCommand dSamusMainMotion_DownAttackD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 33, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandMakeAttackColl(0, 0, 33, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_DownAttackU[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 33, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 28, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 28, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Tech[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceSamusAppeal),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_TechF[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceSamusAppeal),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_TechB[] = {
	ftMotionCommandGoto(dSamusMainMotion_TechF),
};

ftMotionCommand dSamusMainMotion_0x0484[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(35),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_RollF[] = {
	ftMotionCommandSetParallelScript(dSamusMainMotion_0x0484),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_RollB[] = {
	ftMotionCommandSetParallelScript(dSamusMainMotion_0x0484),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffCatch[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffWait[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffQuick[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffClimbQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffClimbQuick2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffSlow[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffClimbSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffClimbSlow2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffAttackQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffAttackQuick2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceSamusSmash1),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 35, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffAttackSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffAttackSlow2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceSamusSmash1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffEscapeQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffEscapeQuick2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(29),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffEscapeSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CliffEscapeSlow2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWait(28),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(37),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(41),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_LightItemPickup[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_HeavyItemPickup[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemDrop[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowDash[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowSmashB_0x0750[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowSmashB_0x0770[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dSamusMainMotion_ItemThrowSmashB_0x0750),
};

ftMotionCommand dSamusMainMotion_ItemThrowSmashU_0x0780[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowSmashD_0x07A0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowSmashB_0x07C0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowSmashB_0x07E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dSamusMainMotion_ItemThrowSmashB_0x07C0),
};

ftMotionCommand dSamusMainMotion_ItemThrowSmashU_0x07F4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowSmashD_0x0818[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowAirSmashB_0x083C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowAirSmashB_0x0858[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dSamusMainMotion_ItemThrowAirSmashB_0x083C),
};

ftMotionCommand dSamusMainMotion_ItemThrowAirSmashU_0x0864[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowAirSmashF_0x0880[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowAirSmashB_0x089C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowAirSmashB_0x08BC[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dSamusMainMotion_ItemThrowAirSmashB_0x089C),
};

ftMotionCommand dSamusMainMotion_ItemThrowAirSmashU_0x08C8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ItemThrowAirSmashF_0x08E8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_HeavyItemThrowSmashB_0x0908[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_HeavyItemThrowSmashB_0x0918[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dSamusMainMotion_HeavyItemThrowSmashB_0x0908),
};

ftMotionCommand dSamusMainMotion_HeavyItemThrowSmashB_0x0928[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_HeavyItemThrowSmashB_0x093C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandGoto(dSamusMainMotion_HeavyItemThrowSmashB_0x0928),
};

ftMotionCommand dSamusMainMotion_SwordSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing1), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_SwordSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing3), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_SwordSwing4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing4), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_SwordSwingDash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwingDash), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_BatSwing1[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing1), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_BatSwing3[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing3), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_BatSwing4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing4), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_BatSwingDash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwingDash), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_HarisenSwing1[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing1), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_HarisenSwing3[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing3), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_HarisenSwing4[] = {
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing4), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_HarisenSwingDash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwingDash), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_StarRodSwing1[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 10),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing1), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_StarRodSwing3[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 17),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing3), /* extern */
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_StarRodSwing4[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 25),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing4), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_StarRodSwingDash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 22),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwingDash), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FireFlowerShoot_0x0BEC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FireFlowerShoot_0x0BFC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Hammer[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_FireFlowerShoot), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dSamusMainMotion_Hammer),
};

ftMotionCommand dSamusMainMotion_0x0C2C[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dSamusMainMotion_0x0C2C),
};

ftMotionCommand dSamusMainMotion_ShieldBreak[] = {
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionPlayVoice(nSYAudioVoiceSamusDamage),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dSamusMainMotion_0x0C2C),
};

ftMotionCommand dSamusMainMotion_Damaged_0x0C80[] = {
	ftMotionCommandGoto(dSamusMainMotion_0x0C2C),
};

ftMotionCommand dSamusMainMotion_StunLandD_0x0C88[] = {
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_StunStart[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Sleep[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceSamusFura),
};

ftMotionCommand dSamusMainMotion_0x0CB8[] = {
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 200, 200, 200, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 100, 0, 0),
	ftMotionCommandGoto(dSamusMainMotion_0x0CB8),
};

ftMotionCommand dSamusMainMotion_Sleep_0x0CEC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceSamusFura),
};

ftMotionCommand dSamusMainMotion_0x0CF4[] = {
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 150, 0, 200, 300, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dSamusMainMotion_0x0CF4),
};

ftMotionCommand dSamusMainMotion_0x0D10[] = {
	ftMotionCommandSetModelPartID(24, 1),
	ftMotionCommandSetModelPartID(25, -1),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(22, 0),
	ftMotionCommandReturn(),
};

FTThrowHitDesc dSamusMainMotion_0x0D34[] = {
	{ -1, 8, 361, 100, 0, 0, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

ftMotionCommand dSamusMainMotion_Catch[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow((u32)dSamusMainMotion_0x0D34),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandLoopBegin(5),
	ftMotionCommandWait(4),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 150, 0, 0, 100, 100, 100),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeRumble(16, 9),
	ftMotionCommandMakeAttackColl(0, 0, 36, 1, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 36, 1, 1, 0, 160, 0, 0, 200, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -100, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMSamusCatchGrappleBeam),
	ftMotionCommandSetFlag1(17),
	ftMotionCommandSetFlag2(9),
	ftMotionCommandLoopBegin(5),
	ftMotionCommandWait(3),
	ftMotionCommandEffect(36, nEFKindSparkleWhiteScale, 0, 150, 0, 0, 100, 100, 100),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_CatchPull[] = {
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dSamusMainMotion_0x0E20[] = {
	{ 52, 16, 40, 60, 0, 90, 2 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

ftMotionCommand dSamusMainMotion_ThrowF[] = {
	ftMotionCommandSetThrow((u32)dSamusMainMotion_0x0E20),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(9),
	ftMotionPlayVoice(nSYAudioVoiceSamusSmash1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dSamusMainMotion_0x0EB8[] = {
	{ 52, 18, 40, 60, 0, 90, 2 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

ftMotionCommand dSamusMainMotion_ThrowB[] = {
	ftMotionCommandSetThrow((u32)dSamusMainMotion_0x0EB8),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(9),
	ftMotionPlayVoice(nSYAudioVoiceSamusSmash1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Damaged_0x0F50[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageBumpHit), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Damaged_0x0F5C[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageRumble), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_EggLay_0x0F68[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageFlameBurst), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FalconDivePulled[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkleDelay), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Damaged_0x0F80[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkle), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Taunt[] = {
	ftMotionCommandWait(24),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(nSYAudioVoiceSamusAppeal),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Jab1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 9, 3, 1, 0, 180, 120, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 8, 3, 1, 0, 180, 60, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 8, 3, 1, 0, 180, -60, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Jab2[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 16, 7, 1, 0, 220, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 15, 7, 1, 0, 220, 30, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 16, 7, 1, 0, 220, 120, 0, 0, 361, 100, 0, 3, 0, 1, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 15, 7, 1, 0, 220, 30, 0, 0, 361, 100, 0, 3, 0, 1, 0, 10),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_DashAttack[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 15, 12, 1, 0, 220, 16, 0, 0, 361, 100, 0, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 15, 10, 1, 0, 220, 16, 0, 0, 361, 100, 0, 3, 1, 2, 0, 0),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FTiltHigh[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(2, 0, 32, 12, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 12, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 12, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FTiltMidHigh[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(2, 0, 32, 11, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 11, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 11, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FTilt[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(2, 0, 32, 10, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 10, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 10, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FTiltMidLow[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(2, 0, 32, 9, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 9, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 9, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FTiltLow[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(2, 0, 32, 9, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 9, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 9, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_UTilt[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 33, 8, 1, 0, 200, -20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 8, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(17),
	ftMotionCommandMakeAttackColl(0, 0, 33, 13, 1, 0, 300, -20, 0, 0, 361, 100, 0, 3, 0, 2, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 33, 13, 1, 0, 300, 180, 0, 0, 361, 100, 0, 3, 0, 2, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandEffect(33, nEFKindSparkleWhiteScale, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_DTilt[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 33, 13, 1, 0, 200, -40, 0, 0, 40, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 13, 1, 0, 200, 180, 0, 0, 40, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FSmashHigh[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 20, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 20, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 20, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FSmashMidHigh[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 19, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 19, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 19, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FSmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 18, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 18, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 18, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FSmashMidLow[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 17, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 17, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 17, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_FSmashLow[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 16, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 16, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 16, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_USmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceSamusAttackHi4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(17),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 16, 10, 1, 1, 190, -80, 0, 0, 80, 100, 0, 3, 1, 2, 3, 10),
	ftMotionCommandMakeAttackColl(1, 0, 16, 10, 1, 1, 370, 200, 0, 0, 80, 100, 0, 3, 1, 2, 3, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 16, 10, 1, 1, 190, -80, 0, 0, 80, 100, 0, 3, 1, 2, 3, 22),
	ftMotionCommandMakeAttackColl(1, 0, 16, 10, 1, 1, 400, 200, 0, 0, 80, 100, 0, 3, 1, 2, 3, 22),
#endif
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(3),
#endif
	ftMotionCommandClearAttackCollAll(),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(1),
#endif
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(3),
#endif
	ftMotionCommandClearAttackCollAll(),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(1),
#endif
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(3),
#endif
	ftMotionCommandClearAttackCollAll(),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(1),
#endif
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(3),
#endif
	ftMotionCommandClearAttackCollAll(),
#if defined(REGION_JP)
	ftMotionCommandWait(2),
#else
	ftMotionCommandWait(1),
#endif
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_DSmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 33, 16, 1, 0, 210, -60, 0, 0, 60, 80, 0, 3, 0, 2, 1, 35),
	ftMotionCommandMakeAttackColl(1, 0, 33, 16, 1, 0, 240, 220, 0, 0, 60, 80, 0, 3, 0, 2, 1, 35),
	ftMotionCommandEffect(33, nEFKindSparkleWhiteScale, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 0, 33, 14, 1, 0, 210, -60, 0, 0, 60, 80, 0, 3, 0, 1, 1, 35),
	ftMotionCommandMakeAttackColl(1, 0, 33, 14, 1, 0, 240, 220, 0, 0, 60, 80, 0, 3, 0, 1, 1, 35),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_AttackAirN[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 27, 16, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 16, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 27, 13, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 13, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(20),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_AttackAirF[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 16, 5, 1, 1, 230, -110, 0, 0, 361, 100, 0, 3, 0, 2, 3, 0),
	ftMotionCommandMakeAttackColl(1, 0, 16, 5, 1, 1, 350, 200, 0, 0, 361, 100, 0, 3, 0, 2, 3, 0),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 80, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 80, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhite, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindFireSpark, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_AttackAirB[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 33, 14, 1, 0, 240, -30, 0, 0, 361, 145, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 14, 1, 0, 260, 110, 0, 0, 361, 145, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 33, 10, 1, 0, 240, -30, 0, 0, 361, 145, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 10, 1, 0, 260, 110, 0, 0, 361, 145, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_LandingAirB[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_AttackAirU[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayVoice(nSYAudioVoiceSamusUnkSlash),
	ftMotionCommandMakeAttackColl(0, 0, 28, 2, 1, 0, 320, -50, 45, 0, 80, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 2, 1, 0, 360, 100, 30, 0, 80, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 28, 4, 1, 0, 290, -50, 45, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 4, 1, 0, 320, 60, 30, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_LandingAirU[] = {
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_AttackAirD[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 16, 14, 1, 0, 250, -60, 0, 0, -90, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 16, 14, 1, 0, 280, 120, 0, 0, -90, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(9),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_LandingAirX_0x1AB4[] = {
	ftMotionPlayFGM(nSYAudioFGMSamusLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Appear1[] = {
	ftMotionCommandWaitAsync(1),
	ftMotionPlayFGM(nSYAudioFGMSamusUnkCharge),
	ftMotionCommandWait(80),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Appear2[] = {
	ftMotionCommandGoto(dSamusMainMotion_Appear1),
};

ftMotionCommand dSamusMainMotion_ScrewAttackGround[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterSamusSpecialHi, 0),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialHi),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(5, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 0),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 2, 1, 0, 200, 0, -30, 140, 100, 0, 1, 3, 3, 1, 1, 120),
	ftMotionCommandMakeAttackColl(1, 0, 0, 2, 1, 0, 200, 0, -30, -140, 100, 0, 1, 3, 3, 1, 1, 120),
	ftMotionCommandMakeAttackColl(2, 0, 0, 2, 1, 0, 200, 0, 330, 140, 100, 0, 1, 3, 3, 1, 1, 110),
	ftMotionCommandMakeAttackColl(3, 0, 0, 2, 1, 0, 200, 0, 330, -140, 100, 0, 1, 3, 3, 1, 1, 110),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 2, 1, 0, 200, 0, -30, 140, 100, 0, 1, 3, 3, 0, 1, 120),
	ftMotionCommandMakeAttackColl(1, 0, 0, 2, 1, 0, 200, 0, -30, -140, 100, 0, 1, 3, 3, 0, 1, 120),
	ftMotionCommandMakeAttackColl(2, 0, 0, 2, 1, 0, 200, 0, 330, 140, 100, 0, 1, 3, 3, 0, 1, 110),
	ftMotionCommandMakeAttackColl(3, 0, 0, 2, 1, 0, 200, 0, 330, -140, 100, 0, 1, 3, 3, 0, 1, 110),
#endif
	ftMotionCommandWait(2),
#if defined(REGION_JP)
#else
	ftMotionCommandSetHitStatusAll(1),
#endif
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(5, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 0),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 180, 0, -80, 110, 105, 0, 1, 3, 3, 1, 1, 110),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 180, 0, -80, -110, 105, 0, 1, 3, 3, 1, 1, 110),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 180, 0, 310, 110, 100, 0, 1, 3, 3, 1, 1, 70),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 180, 0, 310, -110, 100, 0, 1, 3, 3, 1, 1, 70),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 180, 0, -80, 110, 105, 0, 1, 3, 3, 0, 1, 110),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 180, 0, -80, -110, 105, 0, 1, 3, 3, 0, 1, 110),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 180, 0, 310, 110, 100, 0, 1, 3, 3, 0, 1, 70),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 180, 0, 310, -110, 100, 0, 1, 3, 3, 0, 1, 70),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
#if defined(REGION_JP)
	ftMotionCommandSetHitStatusAll(1),
#else
#endif
	ftMotionCommandLoopBegin(10),
	ftMotionCommandEffect(5, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 200),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 290, 100, 200, 0, 1, 3, 3, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 290, -100, 200, 0, 1, 3, 3, 1, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 140, 0, 10, 100, 110, 0, 1, 3, 3, 1, 1, 50),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 140, 0, 10, -100, 110, 0, 1, 3, 3, 1, 1, 50),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 290, 100, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 290, -100, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 140, 0, 10, 100, 110, 0, 1, 3, 3, 0, 1, 50),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 140, 0, 10, -100, 110, 0, 1, 3, 3, 0, 1, 50),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
};

ftMotionCommand dSamusMainMotion_0x1C68[] = {
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 2, 400, 0, 100, 0, 361, 100, 80, 3, 3, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 2, 400, 0, 100, 0, 361, 100, 80, 3, 3, 1, 1, 0),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandResetColAnim(),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ScrewAttackAir[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterSamusSpecialHi, 0),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialHi),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandEffect(5, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 200),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 160, 0, 290, 150, 200, 0, 1, 3, 3, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 160, 0, 290, -150, 200, 0, 1, 3, 3, 1, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 160, 0, 10, 150, 110, 0, 1, 3, 3, 1, 1, 50),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 160, 0, 10, -150, 110, 0, 1, 3, 3, 1, 1, 50),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 160, 0, 290, 150, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 160, 0, 290, -150, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 160, 0, 10, 150, 110, 0, 1, 3, 3, 0, 1, 50),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 160, 0, 10, -150, 110, 0, 1, 3, 3, 0, 1, 50),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dSamusMainMotion_0x1C68),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_StartingChargeShot[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWait(13),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_StartingChargeShotAir[] = {
	ftMotionCommandWait(13),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ChargingNeutralSpecial[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 7),
};

ftMotionCommand dSamusMainMotion_0x1D88[] = {
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dSamusMainMotion_0x1D88),
};

ftMotionCommand dSamusMainMotion_Shooting[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(16, nEFKindDustExpandSmall, 0, 200, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_ShootingAir[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(16, nEFKindDustExpandSmall, 0, 200, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_Bomb[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialLw),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetFlag3(1),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(43),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(49),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_0x1E6C[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionPlayFGM(nSYAudioFGMSamusSpecialLw),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(43),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(49),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

ftMotionCommand dSamusMainMotion_0x1EBC[] = {
	ftMotionCommandEnd(),
};
