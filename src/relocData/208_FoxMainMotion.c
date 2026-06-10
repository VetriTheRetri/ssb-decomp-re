/* ftMotionCommand script data for relocData file 208 (FoxMainMotion) */
/* File size: US 6816 bytes (0x1AA0) / JP 6848 bytes (0x1AC0) */

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
extern ftMotionCommand dFoxMainMotion_ReadyingFireFoxAir[];
extern ftMotionCommand dFoxMainMotion_LandingWhileFireFoxAir[];
extern ftMotionCommand dFoxMainMotion_ShineStart[];
extern ftMotionCommand dFoxMainMotion_Reflecting[];
extern ftMotionCommand dFoxMainMotion_SpecialDispatch[];
ftMotionCommand dFoxMainMotion_EggLay_0x0000[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Dash[] = {
	ftMotionPlayFGM(nSYAudioFGMFoxDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Run[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMFoxFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionPlayFGM(nSYAudioFGMFoxFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
};

ftMotionCommand dFoxMainMotion_0x0060[] = {
	ftMotionCommandGoto(dFoxMainMotion_Run),
};

/* RunBrake — was dFoxMainMotion_Run + 0x3C. */
ftMotionCommand dFoxMainMotion_RunBrake[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Turn[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_TurnRun[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_LandingAirX_0x00BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_JumpB[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundGrind2),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_JumpAerialB[] = {
	ftMotionPlayFGM(nSYAudioFGMUnkGrind4),
	ftMotionPlayVoice(nSYAudioVoiceFoxJumpAerial),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_LandingAirX_0x010C[] = {
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_LandingAirX_0x0124[] = {
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Teeter[] = {
	ftMotionPlayVoice(nSYAudioVoiceFoxOttotto),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ShieldDrop_0x0144[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ShieldDrop_0x014C[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

/* Subroutine body shared by 0x016C, 0x0178, 0x0E08, 0x0E1C (texture-part toggle). */
ftMotionCommand dFoxMainMotion_ShieldDropTexturePartToggle[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandReturn(),
};

ftMotionCommand dFoxMainMotion_Damage_0x016C[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_ShieldDropTexturePartToggle),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Damage_0x0178[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_ShieldDropTexturePartToggle),
	ftMotionCommandSetDamageThrown((u32)dFTCommonMoveset_DamageScript) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_LandingAirX_0x018C[] = {
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Crouch[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CrouchIdle[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CrouchEnd[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_EnterPipe[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ExitPipe[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_StunLandD[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
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

ftMotionCommand dFoxMainMotion_StunLandU[] = {
	ftMotionCommandGoto(dFoxMainMotion_StunLandD),
};

/* Subroutine body called from dFoxMainMotion_DownForwardD — was 0x0218+0x8. */
ftMotionCommand dFoxMainMotion_StunLandUBody[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dFoxMainMotion_StunStartD_0x0240[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_StunStartU[] = {
	ftMotionCommandGoto(dFoxMainMotion_StunStartD_0x0240),
};

ftMotionCommand dFoxMainMotion_DownForwardD[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dFoxMainMotion_StunLandUBody),
	ftMotionCommandEnd(),
};

/* DownForwardU — Goto-redirect to 0x0264. */
ftMotionCommand dFoxMainMotion_DownForwardU[] = {
	ftMotionCommandGoto(dFoxMainMotion_DownForwardD),
};

/* DownBackD — Goto-redirect to 0x0264. (was 0x0274+0x8) */
ftMotionCommand dFoxMainMotion_DownBackD[] = {
	ftMotionCommandGoto(dFoxMainMotion_DownForwardD),
};

/* DownBackU — Goto-redirect to 0x0264. (was 0x0274+0x10) */
ftMotionCommand dFoxMainMotion_DownBackU[] = {
	ftMotionCommandGoto(dFoxMainMotion_DownForwardD),
};

/* DownAttackD — real script. (was 0x0274+0x18) */
ftMotionCommand dFoxMainMotion_DownAttackD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 1, 0, 180, 120, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 1, 0, 180, 120, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_DownAttackU[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 6, 1, 0, 180, 150, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 6, 1, 0, 180, 150, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Tech[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceFoxOttotto),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_TechF[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceFoxOttotto),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_TechB[] = {
	ftMotionCommandGoto(dFoxMainMotion_TechF),
};

ftMotionCommand dFoxMainMotion_TechB_0x418[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionPlayVoice(nSYAudioVoiceFoxEscape),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_RollB[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionPlayVoice(nSYAudioVoiceFoxEscape),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffCatch[] = {
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffWait[] = {
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffQuick[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffClimbQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffClimbQuick2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffSlow[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffClimbSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffClimbSlow2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffAttackQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffAttackQuick2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(1),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 4, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(14),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffAttackSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffAttackSlow2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 5, 4, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffEscapeQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffEscapeQuick2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(16),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffEscapeSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_CliffEscapeSlow2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(14),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_LightItemPickup[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMTitlePressStart),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_HeavyItemPickup[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemDrop[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowDash[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMItemThrow),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowSmashB_0x065C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowSmashB_0x067C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_ItemThrowSmashB_0x065C),
};

/* ItemThrowSmashU — was 0x067C+0x10. */
ftMotionCommand dFoxMainMotion_ItemThrowSmashU_0x068C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowSmashD_0x06AC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowSmashB_0x06CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowSmashB_0x06F0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_ItemThrowSmashB_0x06CC),
};

/* ItemThrowSmashU (air variant) — was 0x06F0+0x10. */
ftMotionCommand dFoxMainMotion_ItemThrowSmashU_0x0700[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowSmashD_0x0724[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowAirSmashB_0x0748[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowAirSmashB_0x0764[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dFoxMainMotion_ItemThrowAirSmashB_0x0748),
};

/* ItemThrowAirSmashU — was 0x0764+0xC. */
ftMotionCommand dFoxMainMotion_ItemThrowAirSmashU_0x0770[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowAirSmashF_0x078C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowAirSmashB_0x07A8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowAirSmashB_0x07C8[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dFoxMainMotion_ItemThrowAirSmashB_0x07A8),
};

/* ItemThrowAirSmashU (air variant) — was 0x07C8+0xC. */
ftMotionCommand dFoxMainMotion_ItemThrowAirSmashU_0x07D4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_ItemThrowAirSmashF_0x07F4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_HeavyItemThrowSmashB_0x0814[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_HeavyItemThrowSmashB_0x0824[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dFoxMainMotion_HeavyItemThrowSmashB_0x0814),
};

ftMotionCommand dFoxMainMotion_HeavyItemThrowSmashB_0x0834[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_HeavyItemThrowSmashB_0x0848[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_HeavyItemThrowSmashB_0x0834),
};

/* StarRodNeutral — was 0x0848+0x10. */
ftMotionCommand dFoxMainMotion_SwordSwing1[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing1) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_SwordSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing3) /* extern */,
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_SwordSwing4[] = {
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing4) /* extern */,
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_SwordSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwingDash) /* extern */,
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWait(28),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_BatSwing1[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing1) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_BatSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing3) /* extern */,
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_BatSwing4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing4) /* extern */,
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_BatSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwingDash) /* extern */,
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_HarisenSwing1[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing1) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_HarisenSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing3) /* extern */,
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_HarisenSwing4[] = {
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing4) /* extern */,
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_HarisenSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwingDash) /* extern */,
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_StarRodSwing1[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 9),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing1) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_StarRodSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 15),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing3) /* extern */,
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_StarRodSwing4[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 25),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing4) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_StarRodSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 34),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwingDash) /* extern */,
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FireFlowerShoot_0x0AF4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FireFlowerShoot_0x0B04[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_HammerIdle[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_FireFlowerShoot) /* extern */,
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dFoxMainMotion_HammerIdle),
};

ftMotionCommand dFoxMainMotion_AttackSomething_0x0B34[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dFoxMainMotion_AttackSomething_0x0B34),
};

ftMotionCommand dFoxMainMotion_0x0B68[] = {
	ftMotionPlayVoice(nSYAudioVoiceFoxDamage),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandEffect(127, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dFoxMainMotion_AttackSomething_0x0B34),
};

ftMotionCommand dFoxMainMotion_0x0B98[] = {
	ftMotionCommandGoto(dFoxMainMotion_AttackSomething_0x0B34),
};

ftMotionCommand dFoxMainMotion_0x0BA0[] = {
	ftMotionCommandEffect(127, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_StunStartD_0x0BBC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Sleep_0x0BC4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceFoxFuraFura),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandEffect(0, nEFKindFuraSparkle, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dFoxMainMotion_Sleep_0x0BC4),
};

ftMotionCommand dFoxMainMotion_Sleep_0x0BF8[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceFoxFuraSleep),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dFoxMainMotion_Sleep_0x0BF8),
};

/* FTThrowHitDesc[2] embedded at file offset 0x0C20 (= 0x0BF8 + 10 words).
 * Referenced by Catch_0x0C58's SetThrow. */
FTThrowHitDesc dFoxMainMotion_0x0C20[2] = {
	{ -1, 2, 361, 100, 0, 0, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

ftMotionCommand dFoxMainMotion_Catch[] = {
	ftMotionCommandSetThrow((u32)dFoxMainMotion_0x0C20),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 260, 50, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

/* FTThrowHitDesc[2] at file offset 0x0C8C (= Catch_0x0C58 + 13 words).
 * Referenced by ThrowF_0x0CC4's SetThrow. */
FTThrowHitDesc dFoxMainMotion_0x0C8C[2] = {
	{ 52, 12, 45, 60, 0, 80, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

ftMotionCommand dFoxMainMotion_ThrowF[] = {
	ftMotionCommandSetThrow((u32)dFoxMainMotion_0x0C8C),
	ftMotionPlayVoice(nSYAudioVoiceFoxSmash3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 380, 320, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

/* FTThrowHitDesc[2] at file offset 0x0D20 (= ThrowF_0x0CC4 + 23 words).
 * Referenced by ThrowB_0x0D58's SetThrow. */
FTThrowHitDesc dFoxMainMotion_0x0D20[2] = {
	{ 52, 15, 45, 60, 0, 80, 0 },
	{ -1, 9, 361, 100, 0, 0, 0 },
};

ftMotionCommand dFoxMainMotion_ThrowB[] = {
	ftMotionCommandSetThrow((u32)dFoxMainMotion_0x0D20),
	ftMotionPlayVoice(nSYAudioVoiceFoxSmash3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandMakeAttackColl(0, 0, 20, 10, 0, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 10, 0, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 320, -340, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(127, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag2(2),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Damaged_0x0DE4[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageBumpHit) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Damaged_0x0DF0[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageRumble) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_EggLay_0x0DFC[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageFlameBurst) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FalconDivePulled[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_ShieldDropTexturePartToggle),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkleDelay) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Damaged_0x0E1C[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_ShieldDropTexturePartToggle),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkle) /* extern */,
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Taunt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(nSYAudioVoiceFoxSelected),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Jab1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 8, 4, 1, 0, 200, 140, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 8, 4, 1, 0, 200, 0, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Jab2[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 14, 4, 1, 0, 200, 140, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 4, 1, 0, 200, 0, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_JabLoopStart[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_JabLoop[] = {
	ftMotionCommandWaitAsync(2),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
#else
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandClearAttackCollAll(),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
#else
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 60, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 60, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandGoto(dFoxMainMotion_JabLoop),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_JabLoopEnd[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_DashAttack[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 10, 1, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 10, 1, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 7, 1, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 7, 1, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FTiltHigh[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 11, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 11, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FTiltMidHigh[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FTilt[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 9, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FTiltMidLow[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 8, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FTiltLow[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 8, 1, 0, 200, 20, 0, 0, 361, 100, 10, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 200, 140, 0, 0, 361, 100, 10, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_UTilt[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 220, 20, 0, 0, 80, 150, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 9, 1, 0, 350, 80, 0, 0, 80, 150, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_DTilt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 29, 10, 1, 0, 230, 0, 0, -60, 70, 125, 0, 3, 0, 1, 0, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 29, 12, 1, 0, 230, 0, 0, -60, 70, 125, 0, 3, 0, 1, 0, 25),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(1, 0, 29, 10, 1, 0, 230, 0, 0, -200, 90, 125, 0, 3, 0, 1, 0, 0),
#else
	ftMotionCommandMakeAttackColl(1, 0, 29, 12, 1, 0, 230, 0, 0, -200, 90, 125, 0, 3, 0, 1, 0, 25),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FSmash[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 20, 17, 1, 0, 280, 60, 0, 0, 361, 120, 0, 3, 0, 2, 1, 0),
	ftMotionCommandEffect(20, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(5),
	ftMotionCommandMakeAttackColl(0, 0, 20, 13, 1, 0, 280, 60, 0, 0, 361, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_USmash[] = {
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 200, 0, 0, 0, 80, 140, 0, 3, 0, 2, 1, 25),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 280, 70, 0, 0, 80, 140, 0, 3, 0, 2, 1, 25),
	ftMotionCommandEffect(25, nEFKindSparkleWhiteScale, 0, 110, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 8, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 230, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_DSmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusPartID(25, 3),
	ftMotionCommandSetHitStatusPartID(20, 3),
	ftMotionCommandSetHitStatusPartID(24, 3),
	ftMotionCommandSetHitStatusPartID(19, 3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 260, 90, 0, 0, 70, 100, 0, 3, 0, 2, 1, 30),
#else
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 260, 90, 0, 0, 25, 80, 0, 3, 0, 2, 1, 35),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 260, 90, 0, 0, 70, 100, 0, 3, 0, 2, 1, 30),
#else
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 260, 90, 0, 0, 25, 80, 0, 3, 0, 2, 1, 35),
#endif
	ftMotionCommandEffect(25, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(20, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(1),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_AttackAirN[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 5, 14, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 210, 70, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 25, 14, 1, 0, 180, 70, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 9, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 9, 1, 0, 210, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 25, 9, 1, 0, 180, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_AttackAirF[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 12, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 310, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 8, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 280, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(14),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_LandingAirF[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_AttackAirB[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 5, 12, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 300, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 8, 1, 0, 200, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 8, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 8, 1, 0, 200, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(20),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_LandingAirB[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_AttackAirU[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 5, 2, 1, 0, 320, 0, 0, 0, 90, 100, 100, 3, 0, 0, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 2, 1, 0, 340, 110, 0, 0, 90, 100, 100, 3, 0, 0, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 1, 5, 13, 1, 0, 340, 0, 0, 0, 90, 135, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 1, 25, 13, 1, 0, 370, 110, 0, 0, 90, 135, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_AttackAirD[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 20, 2, 1, 0, 310, -40, 45, 0, 954, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 2, 1, 0, 360, 30, 30, 0, 954, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMFoxAttackAirLw),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_LandingAirX_0x177C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMFoxLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Appear[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionPlayFGM(nSYAudioFGMFoxAppearArwing),
	ftMotionCommandWait(32),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Arwing[] = {
	ftMotionCommandGoto(dFoxMainMotion_Appear),
};

ftMotionCommand dFoxMainMotion_Laser[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialN),
	ftMotionCommandEffect(17, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_LaserAerial[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(nGMColAnimFighterFoxSpecialHiStart, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialN),
	ftMotionCommandEffect(17, nEFKindSparkleWhiteScale, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FireFoxStartGround[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 180, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FireFoxStartAerial[] = {
	ftMotionCommandGoto(dFoxMainMotion_FireFoxStartGround),
};

/* ReadyingFireFoxGround sub-script — was 0x1868+0x8. */
ftMotionCommand dFoxMainMotion_FireFoxStartAerialBody[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(12, nEFKindSparkleWhiteScale, 0, 0, 60, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterDonkeySpecialNEnd, 36),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiStart),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
/* JP Ground absorbs the leading loop block (8 words = 0x20 bytes) that the
 * auto-decoder mis-attributed to the next script. ftdata.c JP confirms the
 * real ReadyingFireFoxAir entry is at 0x18BC+0x20 = 0x18DC. */
ftMotionCommand dFoxMainMotion_ReadyingFireFoxGround[] = {
	ftMotionCommandSetParallelScript(dFoxMainMotion_FireFoxStartAerialBody),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(11),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(11),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#else
ftMotionCommand dFoxMainMotion_ReadyingFireFoxGround[] = {
	ftMotionCommandSetParallelScript(dFoxMainMotion_FireFoxStartAerialBody),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(11),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#endif

/* FireFox dispatch — single-Goto redirect; identical in US/JP. */
ftMotionCommand dFoxMainMotion_ReadyingFireFoxAir[] = {
	ftMotionCommandGoto(dFoxMainMotion_ReadyingFireFoxGround),
};

#if defined(REGION_JP)
/* JP FireFoxGround/Air: damage=13, angle=361, kbs=50, kbb=65. */
ftMotionCommand dFoxMainMotion_FireFoxGround[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(nSYAudioVoiceFoxSpecialHi),
	ftMotionCommandSetColAnim(nGMColAnimFighterUnknown1, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 13, 1, 1, 180, 0, 0, 0, 361, 50, 0, 3, 5, 2, 1, 65),
	ftMotionCommandEffect(0, nEFKindQuakeMag0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteMultiExplode, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiFly),
	ftMotionCommandLoopBegin(2),                                             /* +0x44: self-Goto target (loop body start) */
	ftMotionCommandWait(4),
	ftMotionCommandEffect(6, nEFKindSparkleWhite, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPauseScript(),
};

ftMotionCommand dFoxMainMotion_0x1928[] = {
	ftMotionCommandGoto((ftMotionCommand *)((u8 *)dFoxMainMotion_FireFoxGround + 0x44)),                         /* back-Goto to internal LoopBegin (word 17) */
};

ftMotionCommand dFoxMainMotion_FireFoxAir[] = {
	ftMotionPlayVoice(nSYAudioVoiceFoxSpecialHi),
	ftMotionCommandSetColAnim(nGMColAnimFighterUnknown1, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 13, 1, 1, 180, 0, 0, 0, 361, 50, 0, 3, 5, 2, 1, 65),
	ftMotionCommandEffect(0, nEFKindQuakeMag0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteMultiExplode, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiFly),
	ftMotionCommandGoto((ftMotionCommand *)((u8 *)dFoxMainMotion_FireFoxGround + 0x44)),                         /* loops back into FireFoxGround LoopBegin */
};
#else
/* US FireFoxGround/Air: damage=16, angle=80, kbs=60, kbb=60. */
ftMotionCommand dFoxMainMotion_FireFoxGround[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(nSYAudioVoiceFoxSpecialHi),
	ftMotionCommandSetColAnim(nGMColAnimFighterUnknown1, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 16, 1, 1, 180, 0, 0, 0, 80, 60, 0, 3, 5, 2, 1, 60),
	ftMotionCommandEffect(0, nEFKindQuakeMag0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteMultiExplode, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiFly),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandWait(4),
	ftMotionCommandEffect(6, nEFKindSparkleWhite, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPauseScript(),
};

ftMotionCommand dFoxMainMotion_0x1928[] = {
	ftMotionCommandGoto((ftMotionCommand *)((u8 *)dFoxMainMotion_FireFoxGround + 0x44)),
};

ftMotionCommand dFoxMainMotion_FireFoxAir[] = {
	ftMotionPlayVoice(nSYAudioVoiceFoxSpecialHi),
	ftMotionCommandSetColAnim(nGMColAnimFighterUnknown1, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 16, 1, 1, 180, 0, 0, 0, 80, 60, 0, 3, 5, 2, 1, 60),
	ftMotionCommandEffect(0, nEFKindQuakeMag0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteMultiExplode, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialHiFly),
	ftMotionCommandGoto((ftMotionCommand *)((u8 *)dFoxMainMotion_FireFoxGround + 0x44)),
};
#endif

/* Identical in US/JP — empty single-End animations. */
ftMotionCommand dFoxMainMotion_FireFoxEndGround[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_FireFoxEndAir[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_LandingWhileFireFoxAir[] = {
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindQuakeMag0, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetAirJumpAdd(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

/* Reflector hurt-collision sphere — identical bytes US/JP (different file
 * offsets: US 0x19B0, JP 0x19D0). Fetched by ftFoxSpecialLwStartInitStatusVars
 * via the llFoxMainMotionLwReflectorFTSpecialColl linker offset constant. */
FTSpecialColl dFoxMainMotion_LwReflectorFTSpecialColl = {
	/* kind          */ 0,
	/* joint_id      */ 4,
	/* offset        */ { 0.0F, 60.0F, 0.0F },
	/* size          */ { 350.0F, 350.0F, 350.0F },
	/* damage_resist */ 50,
};

ftMotionCommand dFoxMainMotion_ShineStart[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 240, 200, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialLwStart),
	ftMotionCommandMakeAttackColl(0, 0, 0, 5, 0, 2, 360, 0, 240, 0, 0, 100, 80, 3, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_SwitchDirectionShine[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterDonkeySpecialNLoop, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Reflecting[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(8, nEFKindDamageFlyMDustReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMFoxSpecialLwHit),
	ftMotionCommandEnd(),
};

ftMotionCommand dFoxMainMotion_Shine[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag2(3),
	ftMotionCommandResetColAnim(),
	ftMotionCommandEnd(),
};

/* Special-move dispatch table — 4 Gotos + End + PAD; identical bytes US/JP. */
ftMotionCommand dFoxMainMotion_SpecialDispatch[] = {
	ftMotionCommandGoto(dFoxMainMotion_ShineStart),
};

ftMotionCommand dFoxMainMotion_0x1A80[] = {
	ftMotionCommandGoto(dFoxMainMotion_SwitchDirectionShine),
};

ftMotionCommand dFoxMainMotion_0x1A88[] = {
	ftMotionCommandGoto(dFoxMainMotion_Reflecting),
};

ftMotionCommand dFoxMainMotion_0x1A90[] = {
	ftMotionCommandGoto(dFoxMainMotion_Shine),
};

ftMotionCommand dFoxMainMotion_0x1A98[] = {
	ftMotionCommandEnd(),
};

