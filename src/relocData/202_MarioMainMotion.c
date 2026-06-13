/* ftMotionCommand script data for relocData file 202 (MarioMainMotion) */
/* File size: 6560 bytes (0x19A0) */

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
ftMotionCommand dMarioMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWait(3),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dMarioMainMotion_Wait_0x0024[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dMarioMainMotion_0x0000),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(dMarioMainMotion_0x0000),
	ftMotionCommandWait(10),
	ftMotionCommandSubroutine(dMarioMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dMarioMainMotion_Wait_0x0024),
};

ftMotionCommand dMarioMainMotion_Dash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMarioDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Run[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
};

ftMotionCommand dMarioMainMotion_0x00B0[] = {
	ftMotionCommandGoto(dMarioMainMotion_Run),
};

ftMotionCommand dMarioMainMotion_RunBrake[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Turn[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_TurnRun[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_LandingAirX_0x0110[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Jump[] = {
	ftMotionPlayVoice(nSYAudioVoiceMarioJump),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_JumpAerial[] = {
	ftMotionPlayVoice(nSYAudioVoiceMarioJumpAerial),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_LandingAirX_0x015C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_LandingAirX_0x0178[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ShieldDrop_0x0194[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip6),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ShieldDrop_0x019C[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip6),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_0x01B0[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dMarioMainMotion_Damage_0x01B8[] = {
	ftMotionCommandSubroutine(dMarioMainMotion_0x01B0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Damage_0x01C4[] = {
	ftMotionCommandSubroutine(dMarioMainMotion_0x01B0),
	ftMotionCommandSetDamageThrown((u32)dFTCommonMoveset_DamageScript), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_LandingAirX_0x01D8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_EnterPipe[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ExitPipe[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_DownBounceD[] = {
	ftMotionCommandSetTexturePartID(1),
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

ftMotionCommand dMarioMainMotion_StunLandU[] = {
	ftMotionCommandGoto(dMarioMainMotion_DownBounceD),
};

ftMotionCommand dMarioMainMotion_0x0254[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dMarioMainMotion_DownStandD_0x0274[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_StunStartU[] = {
	ftMotionCommandGoto(dMarioMainMotion_DownStandD_0x0274),
};

ftMotionCommand dMarioMainMotion_DownForwardD[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dMarioMainMotion_0x0254),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_DownForwardU[] = {
	ftMotionCommandGoto(dMarioMainMotion_DownForwardD),
};

ftMotionCommand dMarioMainMotion_0x02AC[] = {
	ftMotionCommandGoto(dMarioMainMotion_DownForwardD),
};

ftMotionCommand dMarioMainMotion_0x02B4[] = {
	ftMotionCommandGoto(dMarioMainMotion_DownForwardD),
};

ftMotionCommand dMarioMainMotion_DownAttackD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetTexturePartID(1),
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

ftMotionCommand dMarioMainMotion_DownAttackU[] = {
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

ftMotionCommand dMarioMainMotion_Tech[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceMarioJump),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_TechF[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceMarioJump),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_TechB[] = {
	ftMotionCommandGoto(dMarioMainMotion_TechF),
};

ftMotionCommand dMarioMainMotion_RollF[] = {
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

ftMotionCommand dMarioMainMotion_RollB[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffCatch[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffWait[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffQuick[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffClimbQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffClimbQuick2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffSlow[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffClimbSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffClimbSlow2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffAttackQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffAttackQuick2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceMarioSmash1),
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

ftMotionCommand dMarioMainMotion_CliffAttackSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffAttackSlow2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceMarioSmash1),
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

ftMotionCommand dMarioMainMotion_CliffEscapeQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffEscapeQuick2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffEscapeSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_CliffEscapeSlow2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_LightItemPickup[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_HeavyItemPickup[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemDrop[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowDash[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowSmashB_0x0654[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowSmashB_0x0670[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dMarioMainMotion_ItemThrowSmashB_0x0654),
};

ftMotionCommand dMarioMainMotion_ItemThrowSmashU_0x067C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowSmashD_0x0698[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowSmashB_0x06B4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowSmashB_0x06D4[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dMarioMainMotion_ItemThrowSmashB_0x06B4),
};

ftMotionCommand dMarioMainMotion_ItemThrowSmashU_0x06E0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowSmashD_0x0700[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowAirSmashB_0x0720[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowAirSmashB_0x073C[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dMarioMainMotion_ItemThrowAirSmashB_0x0720),
};

ftMotionCommand dMarioMainMotion_ItemThrowAirSmashU_0x0748[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowAirSmashF_0x0764[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowAirSmashB_0x0780[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowAirSmashB_0x07A0[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dMarioMainMotion_ItemThrowAirSmashB_0x0780),
};

ftMotionCommand dMarioMainMotion_ItemThrowAirSmashU_0x07AC[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_ItemThrowAirSmashF_0x07CC[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_HeavyItemThrowSmashB_0x07EC[] = {
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_HeavyItemThrowSmashB_0x07F8[] = {
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dMarioMainMotion_HeavyItemThrowSmashB_0x07EC),
};

ftMotionCommand dMarioMainMotion_HeavyItemThrowSmashB_0x0804[] = {
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_HeavyItemThrowSmashB_0x0810[] = {
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dMarioMainMotion_HeavyItemThrowSmashB_0x0804),
};


ftMotionCommand dMarioMainMotion_SwordSwing1[] = {
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

ftMotionCommand dMarioMainMotion_SwordSwing3[] = {
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

ftMotionCommand dMarioMainMotion_SwordSwing4[] = {
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

ftMotionCommand dMarioMainMotion_SwordSwingDash[] = {
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

ftMotionCommand dMarioMainMotion_BatSwing1[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing1), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_BatSwing3[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing3), /* extern */
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_BatSwing4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandSetTexturePartID(1),
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

ftMotionCommand dMarioMainMotion_BatSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwingDash), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_HarisenSwing1[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing1), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_HarisenSwing3[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing3), /* extern */
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_HarisenSwing4[] = {
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

ftMotionCommand dMarioMainMotion_HarisenSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwingDash), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_StarRodSwing1[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 8),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing1), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_StarRodSwing3[] = {
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

ftMotionCommand dMarioMainMotion_StarRodSwing4[] = {
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

ftMotionCommand dMarioMainMotion_StarRodSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 10),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwingDash), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_FireFlowerShoot_0x0A8C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_FireFlowerShoot_0x0A9C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Hammer[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_FireFlowerShoot), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dMarioMainMotion_Hammer),
};

ftMotionCommand dMarioMainMotion_0x0AD0[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
};

ftMotionCommand dMarioMainMotion_ShieldBreak[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceMarioDamage),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
};

ftMotionCommand dMarioMainMotion_Damaged_0x0B28[] = {
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
};

ftMotionCommand dMarioMainMotion_StunLandU_0x0B30[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_DownStandD_0x0B54[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Sleep_0x0B5C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceMarioFuraFura),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandEffect(0, nEFKindFuraSparkle, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(20),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dMarioMainMotion_Sleep_0x0B5C),
};

ftMotionCommand dMarioMainMotion_Sleep_0x0B8C[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceDonkeyFuraSleep),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dMarioMainMotion_Sleep_0x0B8C),
};

FTThrowHitDesc dMarioMainMotion_0x0BB4[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

ftMotionCommand dMarioMainMotion_Catch[] = {
	ftMotionCommandSetThrow((u32)dMarioMainMotion_0x0BB4),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 28, 1, 1, 0, 290, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dMarioMainMotion_0x0C30[] = {
	{ 52, 12, 45, 70, 0, 80, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

ftMotionCommand dMarioMainMotion_ThrowF[] = {
	ftMotionCommandSetThrow((u32)dMarioMainMotion_0x0C30),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(14),
	ftMotionPlayVoice(nSYAudioVoiceMarioSmash1),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
FTThrowHitDesc dMarioMainMotion_0x0CC4[] = {
	{ 0x00000034, 0x00000010, 0x0000002D, 0x00000046, 0x00000000, 0x00000046, 0x00000000 },
	{ 0xFFFFFFFF, 0x00000008, 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000 },
};
#else
FTThrowHitDesc dMarioMainMotion_0x0CC4[] = {
	{ 55, 16, 45, 70, 0, 70, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};
#endif

ftMotionCommand dMarioMainMotion_ThrowB[] = {
	ftMotionCommandSetThrow((u32)dMarioMainMotion_0x0CC4),
	ftMotionPlayVoice(nSYAudioVoiceMarioSpecialLw),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 260, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMMarioDownBounce),
	ftMotionCommandWait(8),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandMakeAttackColl(0, 0, 10, 10, 0, 0, 300, 120, 0, 0, 361, 80, 0, 3, 1, 2, 0, 30),
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

ftMotionCommand dMarioMainMotion_Damaged_0x0DB0[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageBumpHit), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Damaged_0x0DBC[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageRumble), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Wait_0x0DC8[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageFlameBurst), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_FalconDivePulled[] = {
	ftMotionCommandSubroutine(dMarioMainMotion_0x01B0),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkleDelay), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Damaged_0x0DE8[] = {
	ftMotionCommandSubroutine(dMarioMainMotion_0x01B0),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkle), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Taunt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeRumble(60, 7),
	ftMotionCommandSetColAnim(nGMColAnimFighterMarioAppeal, 60),
	ftMotionPlayFGM(nSYAudioFGMMarioAppealGrow),
	ftMotionCommandWaitAsync(120),
	ftMotionCommandMakeRumble(60, 7),
	ftMotionPlayFGM(nSYAudioFGMMarioAppealShrink),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Jab1[] = {
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

ftMotionCommand dMarioMainMotion_Jab2[] = {
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

ftMotionCommand dMarioMainMotion_Jab3[] = {
	ftMotionPlayVoice(nSYAudioVoiceMarioSmash1),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 4, 0, 0, 150, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetAttackCollDamage(0, 4),
	ftMotionCommandSetAttackCollDamage(1, 4),
	ftMotionCommandSetAttackCollSize(0, 180),
	ftMotionCommandSetAttackCollSize(1, 280),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_DashAttack[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 5, 12, 1, 0, 250, 40, 0, 0, 361, 100, 0, 3, 1, 2, 1, 16),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 10, 1, 0, 250, 40, 0, 0, 361, 100, 0, 3, 1, 2, 1, 10),
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_FTiltHigh[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 14, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 14, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_FTilt[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 13, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 13, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_FTiltLow[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 12, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_UTilt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 14, 10, 1, 0, 180, 0, 0, 0, 86, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 10, 1, 0, 290, 60, 0, 0, 86, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_DTilt[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -140, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 24, 12, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 260, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_FSmashHigh[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 18, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 18, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_FSmashMidHigh[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 18, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 18, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_FSmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 14, 17, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 17, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_FSmashMidLow[] = {
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

ftMotionCommand dMarioMainMotion_FSmashLow[] = {
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

ftMotionCommand dMarioMainMotion_USmash[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 300, -100, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 19, 1, 0, 380, 0, 100, 0, 85, 120, 0, 3, 0, 2, 0, 26),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_DSmash[] = {
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

ftMotionCommand dMarioMainMotion_AttackAirN[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 0, 25, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(26),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_AttackAirF[] = {
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

ftMotionCommand dMarioMainMotion_LandingAirF[] = {
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_AttackAirB[] = {
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

ftMotionCommand dMarioMainMotion_LandingAirB[] = {
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_AttackAirU[] = {
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

ftMotionCommand dMarioMainMotion_LandingAirU[] = {
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_AttackAirD[] = {
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

ftMotionCommand dMarioMainMotion_LandingAirX_0x1640[] = {
	ftMotionPlayFGM(nSYAudioFGMMarioLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Appear1[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(nSYAudioFGMMarioDokan),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_Appear2[] = {
	ftMotionCommandGoto(dMarioMainMotion_Appear1),
};

ftMotionCommand dMarioMainMotion_FireballGround[] = {
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandSetSlopeContour(3),
};

ftMotionCommand dMarioMainMotion_0x1688[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(nGMColAnimFighterMarioSpecialN, 0),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMMarioSpecialN),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_FireballAir[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandGoto(dMarioMainMotion_0x1688),
};

ftMotionCommand dMarioMainMotion_SuperJumpPunchAir_0x16CC[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 5, 1, 4, 380, 0, 0, 0, 70, 100, 110, 3, 0, 1, 2, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 5, 1, 4, 260, 160, 0, 0, 90, 100, 110, 3, 0, 1, 2, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 80, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMMarioSpecialHiJump),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandMakeAttackColl(0, 0, 12, 1, 1, 4, 310, 0, 0, 60, 75, 100, 100, 3, 0, 1, 2, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 1, 1, 4, 260, 150, 0, 60, 80, 100, 100, 3, 0, 1, 2, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeAttackColl(0, 0, 12, 3, 1, 4, 450, 0, 0, 0, 50, 170, 0, 3, 0, 2, 2, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 3, 1, 4, 200, 150, 0, 0, 50, 170, 0, 3, 0, 2, 2, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_SuperJumpPunchAir_0x17A8[] = {
	ftMotionCommandGoto(dMarioMainMotion_SuperJumpPunchAir_0x16CC),
};

ftMotionCommand dMarioMainMotion_0x17B0[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_MarioTornadoGround[] = {
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(nSYAudioVoiceMarioSpecialLw),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 300, 150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 300, -150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 220, 0, 0, 0, 90, 0, 1, 3, 0, 1, 1, 10),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 160, 0, 280, 150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 160, 0, 280, -150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 200, 0, 300, 150, 90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 200, 0, 300, -150, 90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMarioMainMotion_0x1884[] = {
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(nSYAudioVoiceMarioSpecialLw),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 300, 150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 300, -150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 180, 0, 0, 0, 90, 0, 1, 3, 0, 1, 1, 10),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 260, 150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 260, -150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 160, 0, 80, 0, -90, 0, 1, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 100, 0, 420, 0, -90, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 200, 0, 300, 150, 90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 200, 0, 300, -150, 90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 220, 0, 80, 0, -90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 90, 0, 420, 0, -90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
