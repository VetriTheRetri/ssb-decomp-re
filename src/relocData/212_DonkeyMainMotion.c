/* ftMotionCommand script data for relocData file 212 (DonkeyMainMotion) */
/* File size: 7376 bytes (0x1CD0) */

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
ftMotionCommand dDonkeyMainMotion_EggLay_0x0000[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Walk1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Walk2[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Walk3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Dash[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Run[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 50, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_Run),
};

ftMotionCommand dDonkeyMainMotion_RunBrake[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Turn[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_TurnRun[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 100, 0, 0, 0),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_LandingAirX_0x00C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Jump[] = {
	ftMotionPlayFGM(nSYAudioFGMKirbyPurinJump),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_JumpAerial[] = {
	ftMotionPlayFGM(nSYAudioFGMUnkGrind2),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_LandingAirX_0x0110[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_LandingAirX_0x012C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ShieldDrop_0x0148[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ShieldDrop_0x0150[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_0x0164[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandReturn(),
};

ftMotionCommand dDonkeyMainMotion_Damage_0x016C[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Damage_0x0178[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandSetDamageThrown((u32)dFTCommonMoveset_DamageScript), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_LandingAirX_0x018C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Crouch[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CrouchIdle[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CrouchEnd[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_EnterPipe[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ExitPipe[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_StunLandD[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_StunLandU[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_StunLandD),
};

ftMotionCommand dDonkeyMainMotion_0x0230[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dDonkeyMainMotion_StunStartD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_StunStartU[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_StunStartD),
};

ftMotionCommand dDonkeyMainMotion_DownForwardD[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0230),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_DownForwardU[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_DownForwardD),
	ftMotionCommandGoto(dDonkeyMainMotion_DownForwardD),
	ftMotionCommandGoto(dDonkeyMainMotion_DownForwardD),
};

ftMotionCommand dDonkeyMainMotion_DownAttackD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 16, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 16, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_DownAttackU[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 21, 6, 0, 0, 210, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 21, 6, 0, 0, 210, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 0, 21, 6, 0, 0, 210, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 21, 6, 0, 0, 210, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Tech[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, nEFKindFlashLarge, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySmash2),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_TechF[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, nEFKindFlashLarge, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySmash2),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_TechB[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_TechF),
};

ftMotionCommand dDonkeyMainMotion_RollF[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_RollB[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffCatch[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffWait[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffQuick[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffClimbQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffClimbQuick2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffSlow[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffClimbSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffClimbSlow2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffAttackQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffAttackQuick2[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySmash1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 330, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffAttackSlow1[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySmash1),
	ftMotionCommandWait(9),
	ftMotionCommandMakeAttackColl(0, 0, 10, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(12),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffAttackSlow2[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffEscapeQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffEscapeQuick2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffEscapeSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CliffEscapeSlow2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_LightItemPickup[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_HeavyItemPickup[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemDrop[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowDash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowSmashB_0x0660[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowSmashB_0x0680[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dDonkeyMainMotion_ItemThrowSmashB_0x0660),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowSmashU_0x0690[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowSmashD_0x06B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowSmashB_0x06D0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowSmashB_0x06F8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dDonkeyMainMotion_ItemThrowSmashB_0x06D0),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowSmashU_0x070C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowSmashD_0x0734[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowAirSmashB_0x075C[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowAirSmashB_0x0778[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dDonkeyMainMotion_ItemThrowAirSmashB_0x075C),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowAirSmashU_0x0784[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowAirSmashF_0x07A0[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowAirSmashB_0x07BC[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowAirSmashB_0x07E0[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dDonkeyMainMotion_ItemThrowAirSmashB_0x07BC),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowAirSmashU_0x07F0[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ItemThrowAirSmashF_0x0814[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CargoAirThrow_0x0838[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CargoAirThrow_0x0848[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dDonkeyMainMotion_CargoAirThrow_0x0838),
};

ftMotionCommand dDonkeyMainMotion_CargoAirThrow_0x0858[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CargoAirThrow_0x0878[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dDonkeyMainMotion_CargoAirThrow_0x0858),
};

ftMotionCommand dDonkeyMainMotion_SwordSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing1), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_SwordSwing3[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing3), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_SwordSwing4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing4), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_SwordSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwingDash), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_BatSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing1), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_BatSwing3[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing3), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_BatSwing4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing4), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_BatSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwingDash), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_HarisenSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing1), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_HarisenSwing3[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing3), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_HarisenSwing4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing4), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_HarisenSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwingDash), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_StarRodSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 8),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing1), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_StarRodSwing3[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 13),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing3), /* extern */
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_StarRodSwing4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 24),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing4), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_StarRodSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 22),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwingDash), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_FireFlowerShoot_0x0ADC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_FireFlowerShoot_0x0AEC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Hammer[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_FireFlowerShoot), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dDonkeyMainMotion_Hammer),
};

ftMotionCommand dDonkeyMainMotion_0x0B24[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 200, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 200, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
};

ftMotionCommand dDonkeyMainMotion_ShieldBreak[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
};

ftMotionCommand dDonkeyMainMotion_Damaged_0x0B88[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
};

ftMotionCommand dDonkeyMainMotion_StunLandD_0x0B90[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_StunStart[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Sleep_0x0BBC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceDonkeyFuraFura),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandEffect(0, nEFKindFuraSparkle, 0, 0, 180, 0, 380, 380, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dDonkeyMainMotion_Sleep_0x0BBC),
};

ftMotionCommand dDonkeyMainMotion_Sleep_0x0BEC[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceDonkeyFuraSleep),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 150, 0, 300, 300, 300),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dDonkeyMainMotion_Sleep_0x0BEC),
};

FTThrowHitDesc dDonkeyMainMotion_0x0C14[] = {
	{ -1, 2, 361, 100, 0, 0, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

ftMotionCommand dDonkeyMainMotion_Catch[] = {
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0C14),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 29, 1, 1, 0, 330, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 180, 0, 200, 250, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_ThrowF[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffect(29, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMDonkeySlap1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dDonkeyMainMotion_0x0CF0[] = {
	{ 52, 8, 45, 80, 0, 70, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

ftMotionCommand dDonkeyMainMotion_CargoAirThrow_0x0D28[] = {
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0CF0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(29, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dDonkeyMainMotion_0x0D88[] = {
	{ 52, 18, 45, 70, 0, 80, 0 },
	{ -1, 9, 361, 100, 0, 0, 0 },
};

ftMotionCommand dDonkeyMainMotion_ThrowB[] = {
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0D88),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(29, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Damaged_0x0E1C[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageBumpHit), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Damaged_0x0E28[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageRumble), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_EggLay_0x0E34[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageFlameBurst), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Damaged_0x0E40[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkleDelay), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_FalconDivePulled[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkle), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Taunt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(nSYAudioVoiceDonkeyAppeal),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandHideItem(1),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Jab1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 9, 4, 1, 0, 280, 140, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 4, 1, 0, 210, -40, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Jab2[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 15, 4, 1, 0, 280, 140, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 4, 1, 0, 210, -40, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_DashAttack[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 21, 12, 1, 0, 290, 90, 0, 0, 100, 100, 120, 3, 1, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 21, 12, 1, 0, 290, 90, 0, 0, 100, 100, 120, 3, 1, 2, 1, 0),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_FTiltHigh[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 14, 13, 1, 0, 240, 80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 13, 1, 0, 280, 150, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 14, 13, 1, 0, 180, -30, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_FTilt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 14, 12, 1, 0, 240, 80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 12, 1, 0, 280, 150, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 14, 12, 1, 0, 180, -30, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_FTiltLow[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 14, 11, 1, 0, 240, 80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 11, 1, 0, 280, 150, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 14, 11, 1, 0, 180, -30, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_UTilt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 8, 13, 1, 0, 240, 80, 0, 0, 100, 130, 0, 3, 0, 2, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 9, 13, 1, 0, 250, 190, 0, 0, 100, 130, 0, 3, 0, 2, 0, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(20),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_DTilt[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWait(5),
	ftMotionCommandMakeAttackColl(0, 0, 14, 8, 1, 0, 220, 80, 0, 0, 40, 80, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 8, 1, 0, 240, 180, 0, 0, 40, 80, 0, 3, 0, 2, 0, 30),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_FSmashHigh[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 21, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 21, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 21, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_FSmashMidHigh[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 21, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 21, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 21, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_FSmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 20, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 20, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 20, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_FSmashMidLow[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 19, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 19, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 19, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_FSmashLow[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 19, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 19, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 19, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_USmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWait(4),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(9, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandSetHitStatusPartID(15, 3),
	ftMotionCommandSetHitStatusPartID(9, 3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 15, 21, 1, 0, 480, 180, 0, 0, 90, 100, 0, 3, 4, 2, 0, 40),
	ftMotionCommandMakeAttackColl(1, 0, 9, 21, 1, 0, 480, 180, 0, 0, 90, 100, 0, 3, 4, 2, 0, 40),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(20),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_DSmash[] = {
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 26, 19, 1, 0, 210, 0, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 21, 19, 1, 0, 210, 0, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(2, 0, 26, 19, 1, 0, 270, 180, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(3, 0, 21, 19, 1, 0, 270, 180, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(26, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(21, nEFKindSparkleWhiteScale, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(54),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_AttackAirN[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 15, 15, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 15, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 15, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 15, 12, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 12, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 12, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandWait(22),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_AttackAirF[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 15, 16, 1, 0, 240, 220, 0, 0, -70, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 16, 1, 0, 160, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 8, 16, 1, 0, 160, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(16),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_LandingAirF[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_AttackAirB[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 340, 0, 200, -370, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 15, 1, 0, 280, 0, 140, -170, 361, 100, 0, 3, 0, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 340, 0, 200, -370, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 15, 1, 0, 280, 0, 140, -170, 361, 100, 0, 3, 0, 2, 1, 10),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 1, 0, 340, 0, 200, -370, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 1, 0, 280, 0, 140, -170, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(22),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_LandingAirB[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_AttackAirU[] = {
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 8, 12, 1, 0, 260, 10, 0, 0, 110, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 12, 1, 0, 300, 150, 0, 0, 110, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(18),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_AttackAirD[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(20),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 26, 13, 1, 0, 330, 80, 0, 0, -90, 80, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 21, 13, 1, 0, 330, 80, 0, 0, -90, 80, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(2, 0, 26, 13, 1, 0, 280, -80, 0, 0, -90, 80, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(3, 0, 21, 13, 1, 0, 280, -80, 0, 0, -90, 80, 0, 3, 0, 2, 1, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 26, 13, 1, 0, 330, 80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 21, 13, 1, 0, 330, 80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 26, 13, 1, 0, 280, -80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(3, 0, 21, 13, 1, 0, 280, -80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandSetAttackCollDamage(1, 10),
	ftMotionCommandSetAttackCollDamage(2, 10),
	ftMotionCommandSetAttackCollDamage(3, 10),
	ftMotionCommandSetAttackCollSize(0, 300),
	ftMotionCommandSetAttackCollSize(1, 300),
	ftMotionCommandSetAttackCollSize(2, 260),
	ftMotionCommandSetAttackCollSize(3, 260),
	ftMotionCommandWait(18),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_LandingAirX_0x1788[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeyLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Appear1[] = {
	ftMotionCommandWaitAsync(56),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteMultiExplode, 0, 0, 250, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindBoxSmash, 0, 0, 250, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMContainerSmash),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_Appear2[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_Appear1),
};

ftMotionCommand dDonkeyMainMotion_GiantPunchGroundLoopStart[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_GiantPunchAirLoopStart[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_GiantPunchGroundLoop[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHi, 0),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyCharge),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 90, -180, 0, 90, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_GiantPunchGroundLoop),
};

ftMotionCommand dDonkeyMainMotion_GiantPunchAirLoop[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHi, 0),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMDonkeyCharge),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_GiantPunchAirLoop),
};

ftMotionCommand dDonkeyMainMotion_GiantPunchGroundFullyChargedPunch_0x1864[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetColAnim(nGMColAnimFighterLinkSpecialHi, 4),
	ftMotionCommandWait(7),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 14, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 14, 1, 0, 340, 290, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMBossUnk2),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySpecialN),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_GiantPunchAirFullyChargedPunch_0x18C4[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_GiantPunchGroundFullyChargedPunch_0x1864),
};

ftMotionCommand dDonkeyMainMotion_GiantPunchGroundFullyChargedPunch_0x18CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterLinkSpecialHi, 16),
	ftMotionCommandWait(9),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandMakeAttackColl(0, 0, 14, 36, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 36, 1, 0, 340, 290, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 36, 1, 0, 50, 0, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, nEFKindDustDashLarge, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 0),
	ftMotionPlayFGM(nSYAudioFGMBossUnk1),
	ftMotionPlayVoice(nSYAudioVoiceDonkeySpecialN),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 200, 200, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_GiantPunchAirFullyChargedPunch_0x197C[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_GiantPunchGroundFullyChargedPunch_0x18CC),
};

ftMotionCommand dDonkeyMainMotion_SpinningKongGround[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeySpin),
	ftMotionCommandMakeAttackColl(0, 0, 8, 12, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 12, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandLoopBegin(5),
	ftMotionPlayFGM(nSYAudioFGMDonkeySpin),
	ftMotionCommandMakeAttackColl(0, 0, 8, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 21, 8, 1, 0, 160, 100, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetHitStatusPartAll(1),
};

ftMotionCommand dDonkeyMainMotion_0x1A34[] = {
	ftMotionCommandLoopBegin(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeySpin),
	ftMotionCommandMakeAttackColl(0, 1, 8, 3, 1, 0, 140, 200, 0, 0, 361, 100, 0, 3, 1, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 1, 14, 3, 1, 0, 140, 200, 0, 0, 361, 100, 0, 3, 1, 0, 0, 0),
	ftMotionCommandMakeAttackColl(2, 1, 21, 3, 1, 0, 80, 100, 0, 0, 361, 100, 0, 3, 1, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_SpinningKongAir[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(3),
	ftMotionPlayFGM(nSYAudioFGMDonkeySpin),
	ftMotionCommandMakeAttackColl(0, 0, 8, 12, 1, 0, 220, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 12, 1, 0, 220, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusPartID(15, 2),
	ftMotionCommandSetHitStatusPartID(9, 2),
	ftMotionCommandLoopBegin(5),
	ftMotionPlayFGM(nSYAudioFGMDonkeySpin),
	ftMotionCommandMakeAttackColl(0, 0, 8, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 21, 8, 1, 0, 160, 100, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1A34),
};

ftMotionCommand dDonkeyMainMotion_HandSlapStart[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandWait(2),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_HandSlapLoop[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(16),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 0, 0, 400, 0, 0, -500, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 0, 0, 400, 0, 0, -100, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 10, 0, 0, 400, 0, 0, 300, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 10, 0, 0, 400, 0, 0, 700, 90, 100, 150, 2, 252, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 0, 0, 400, 0, 0, -500, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 0, 0, 400, 0, 0, -100, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 10, 0, 0, 400, 0, 0, 300, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 10, 0, 0, 400, 0, 0, 700, 90, 100, 150, 2, -4, 2, 1, 0),
#endif
	ftMotionPlayFGM(nSYAudioFGMBossSlam),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 0, 0, 400, 0, 0, -500, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 0, 0, 400, 0, 0, -100, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 10, 0, 0, 400, 0, 0, 300, 90, 100, 150, 2, 252, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 10, 0, 0, 400, 0, 0, 700, 90, 100, 150, 2, 252, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 0, 0, 400, 0, 0, -500, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 0, 0, 400, 0, 0, -100, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 10, 0, 0, 400, 0, 0, 300, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 10, 0, 0, 400, 0, 0, 700, 90, 100, 150, 2, -4, 2, 1, 0),
#endif
	ftMotionPlayFGM(nSYAudioFGMBossSlam),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_HandSlapLoop),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_HandSlapEnd[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_CargoTurn[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_0x1CC4[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_0x1CC8[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dDonkeyMainMotion_0x1CCC[] = {
	ftMotionCommandEnd(),
};
