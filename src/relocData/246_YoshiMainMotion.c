/* ftMotionCommand script data for relocData file 246 (YoshiMainMotion) */
/* File size: 6080 bytes (0x17C0) */

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
ftMotionCommand dYoshiMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandWait(4),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWait(3),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandWait(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dYoshiMainMotion_EggLay_0x0034[] = {
	ftMotionCommandSubroutine(dYoshiMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dYoshiMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dYoshiMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dYoshiMainMotion_EggLay_0x0034),
};

ftMotionCommand dYoshiMainMotion_Dash[] = {
	ftMotionPlayFGM(nSYAudioFGMYoshiDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Run[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMYoshiFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMYoshiFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dYoshiMainMotion_Run),
};

ftMotionCommand dYoshiMainMotion_RunBrake[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Turn[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_TurnRun[] = {
	ftMotionCommandSetTexturePartID(11),
	ftMotionCommandSetTexturePartID(1048587),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_LandingAirX_0x012C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Jump[] = {
	ftMotionPlayVoice(nSYAudioVoiceYoshiJump),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_JumpAerialB[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionPlayVoice(nSYAudioVoiceYoshiHeavyGet),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CrouchIdle[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_LandingAirX_0x0188[] = {
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_LandingAirX_0x01A0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Teeter[] = {
	ftMotionPlayVoice(nSYAudioVoiceYoshiOttotto),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ShieldDrop_0x01C4[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip11),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ShieldDrop_0x01CC[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip11),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_0x01E0[] = {
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandReturn(),
};

ftMotionCommand dYoshiMainMotion_Damage_0x01EC[] = {
	ftMotionCommandSubroutine(dYoshiMainMotion_0x01E0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Damage_0x01F8[] = {
	ftMotionCommandSubroutine(dYoshiMainMotion_0x01E0),
	ftMotionCommandSetDamageThrown((u32)dFTCommonMoveset_DamageScript), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_LandingAirX_0x020C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_EnterPipe[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ExitPipe[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_StunLandD[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetTexturePartID(1048584),
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

ftMotionCommand dYoshiMainMotion_StunLandU[] = {
	ftMotionCommandGoto(dYoshiMainMotion_StunLandD),
};

ftMotionCommand dYoshiMainMotion_0x028C[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dYoshiMainMotion_StunStartD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_StunStartU[] = {
	ftMotionCommandGoto(dYoshiMainMotion_StunStartD),
};

ftMotionCommand dYoshiMainMotion_DownForwardD[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dYoshiMainMotion_0x028C),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_DownForwardU[] = {
	ftMotionCommandGoto(dYoshiMainMotion_DownForwardD),
	ftMotionCommandGoto(dYoshiMainMotion_DownForwardD),
	ftMotionCommandGoto(dYoshiMainMotion_DownForwardD),
};

ftMotionCommand dYoshiMainMotion_DownAttackD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 6, 0, 0, 220, 0, 150, 180, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 6, 0, 0, 220, 0, 150, 360, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandMakeAttackColl(0, 0, 0, 6, 0, 0, 220, 0, 150, -180, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 6, 0, 0, 220, 0, 150, -380, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(14),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_DownAttackU[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 28, 6, 0, 0, 280, 130, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandMakeAttackColl(0, 0, 23, 6, 0, 0, 280, 130, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Tech[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiJump),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_TechF[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiJump),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_TechB[] = {
	ftMotionCommandGoto(dYoshiMainMotion_TechF),
};

ftMotionCommand dYoshiMainMotion_RollF[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(-1, nEFKindYoshiEggEscape, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_RollB[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(-1, nEFKindYoshiEggEscape, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffCatch[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffWait[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffQuick[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffClimbQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffClimbQuick2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffSlow[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffClimbSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffClimbSlow2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffAttackQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffAttackQuick2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSmash1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandMakeAttackColl(0, 0, 19, 6, 1, 0, 220, 0, 0, -50, 361, 100, 100, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 6, 1, 0, 180, 0, 0, -80, 361, 100, 100, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffAttackSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffAttackSlow2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(16),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSmash1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 6, 1, 0, 350, 0, 180, 280, 361, 100, 100, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 6, 1, 0, 240, 0, 180, 60, 361, 100, 100, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffEscapeQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffEscapeQuick2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffEscapeSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CliffEscapeSlow2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(35),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_LightItemPickup[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_HeavyItemPickup[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemDrop[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowDash[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowSmashB_0x06E8[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowSmashB_0x0704[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dYoshiMainMotion_ItemThrowSmashB_0x06E8),
};

ftMotionCommand dYoshiMainMotion_ItemThrowSmashU_0x0710[] = {
	ftMotionCommandWaitAsync(11),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowSmashD_0x072C[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowSmashB_0x0748[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowSmashB_0x0768[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dYoshiMainMotion_ItemThrowSmashB_0x0748),
};

ftMotionCommand dYoshiMainMotion_ItemThrowSmashU_0x0774[] = {
	ftMotionCommandWaitAsync(11),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowSmashD_0x0794[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowAirSmashB_0x07B4[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowAirSmashB_0x07D0[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dYoshiMainMotion_ItemThrowAirSmashB_0x07B4),
};

ftMotionCommand dYoshiMainMotion_ItemThrowAirSmashU_0x07DC[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowAirSmashF_0x07F8[] = {
	ftMotionCommandWaitAsync(11),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowAirSmashB_0x0814[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowAirSmashB_0x083C[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dYoshiMainMotion_ItemThrowAirSmashB_0x0814),
};

ftMotionCommand dYoshiMainMotion_ItemThrowAirSmashU_0x0850[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_ItemThrowAirSmashF_0x0878[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_HeavyItemThrowSmashB_0x08A0[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_HeavyItemThrowSmashB_0x08AC[] = {
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dYoshiMainMotion_HeavyItemThrowSmashB_0x08A0),
};

ftMotionCommand dYoshiMainMotion_HeavyItemThrowSmashB_0x08B8[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_HeavyItemThrowSmashB_0x08CC[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dYoshiMainMotion_HeavyItemThrowSmashB_0x08B8),
};

ftMotionCommand dYoshiMainMotion_SwordSwing1[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing1), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_SwordSwing3[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing3), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_SwordSwing4[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing4), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_SwordSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwingDash), /* extern */
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_BatSwing1[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing1), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_BatSwing3[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing3), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_BatSwing4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing4), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_BatSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwingDash), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_HarisenSwing1[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing1), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_HarisenSwing3[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing3), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_HarisenSwing4[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing4), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_HarisenSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwingDash), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_StarRodSwing1[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 11),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing1), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_StarRodSwing3[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 18),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing3), /* extern */
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_StarRodSwing4[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 26),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing4), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_StarRodSwingDash[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 26),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwingDash), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_FireFlowerShoot_0x0BB4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_FireFlowerShoot_0x0BCC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Hammer[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_FireFlowerShoot), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dYoshiMainMotion_Hammer),
};

ftMotionCommand dYoshiMainMotion_0x0C0C[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dYoshiMainMotion_0x0C0C),
};

ftMotionCommand dYoshiMainMotion_ShieldBreak[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiDamage),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dYoshiMainMotion_0x0C0C),
};

ftMotionCommand dYoshiMainMotion_Damaged_0x0C68[] = {
	ftMotionCommandGoto(dYoshiMainMotion_0x0C0C),
};

ftMotionCommand dYoshiMainMotion_StunLandD_0x0C70[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_StunStart[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Sleep_0x0C9C[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceYoshiFuraFura),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandEffect(0, nEFKindFuraSparkle, 0, 0, 130, 0, 260, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dYoshiMainMotion_Sleep_0x0C9C),
};

ftMotionCommand dYoshiMainMotion_Sleep_0x0CD0[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceYoshiFuraSleep),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 140, 0, 280, 280, 230),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dYoshiMainMotion_Sleep_0x0CD0),
};

FTThrowHitDesc dYoshiMainMotion_0x0CFC[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

ftMotionCommand dYoshiMainMotion_Catch[] = {
	ftMotionCommandSetThrow((u32)dYoshiMainMotion_0x0CFC),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 31, 1, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -100, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiCatch),
	ftMotionCommandSetFlag1(6),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(44),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_CatchPull[] = {
	ftMotionCommandEnd(),
};

FTThrowHitDesc dYoshiMainMotion_0x0D90[] = {
	{ 52, 12, 45, 70, 0, 80, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

ftMotionCommand dYoshiMainMotion_ThrowF[] = {
	ftMotionCommandSetThrow((u32)dYoshiMainMotion_0x0D90),
	ftMotionCommandSetModelPartID(7, 1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(19),
	ftMotionPlayVoice(nSYAudioVoiceYoshiThrow),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandEffect(17, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetModelPartID(7, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dYoshiMainMotion_0x0E2C[] = {
	{ 52, 16, 45, 70, 0, 70, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

ftMotionCommand dYoshiMainMotion_ThrowB[] = {
	ftMotionCommandSetThrow((u32)dYoshiMainMotion_0x0E2C),
	ftMotionCommandSetModelPartID(7, 1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(19),
	ftMotionPlayVoice(nSYAudioVoiceYoshiThrow),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandEffect(31, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetModelPartID(7, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Damaged_0x0EC8[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageBumpHit), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Damaged_0x0ED4[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageRumble), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_EggLay_0x0EE0[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageFlameBurst), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_FalconDivePulled[] = {
	ftMotionCommandSubroutine(dYoshiMainMotion_0x01E0),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkleDelay), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Damaged_0x0F00[] = {
	ftMotionCommandSubroutine(dYoshiMainMotion_0x01E0),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkle), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Taunt[] = {
	ftMotionPlayVoice(nSYAudioVoiceYoshiAppeal),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Jab1[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 23, 3, 1, 0, 280, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 25, 3, 1, 0, 280, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Jab2[] = {
	ftMotionCommandWaitAsync(1),
	ftMotionCommandMakeAttackColl(0, 0, 28, 5, 1, 0, 300, 0, 0, 0, 361, 120, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 30, 5, 1, 0, 300, 0, 0, 0, 361, 120, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_DashAttack[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusPartID(7, 3),
	ftMotionCommandWait(8),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSmash2),
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 280, 0, 180, 280, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 12, 1, 0, 200, 0, 180, 30, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandSetAttackCollDamage(0, 8),
	ftMotionCommandSetAttackCollDamage(1, 8),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_FTiltHigh[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 28, 13, 1, 0, 300, 0, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 30, 13, 1, 0, 300, 90, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_FTilt[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 28, 13, 1, 0, 300, 0, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 30, 13, 1, 0, 300, 90, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_FTiltLow[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 28, 13, 1, 0, 300, 0, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 30, 13, 1, 0, 300, 90, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_UTilt[] = {
	ftMotionCommandWait(7),
	ftMotionCommandSetHitStatusPartID(7, 3),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 7, 12, 1, 0, 390, 0, 40, 40, 100, 100, 130, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 6, 12, 1, 0, 240, 0, 0, 0, 100, 100, 130, 3, 0, 2, 1, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 7, 12, 1, 0, 390, 0, 40, 40, 100, 100, 130, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 6, 12, 1, 0, 240, 0, 0, 0, 100, 100, 130, 3, 0, 1, 1, 0),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_DTilt[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(8),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 19, 10, 1, 0, 260, 0, -20, 0, 30, 100, 110, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 10, 1, 0, 210, 0, 0, 0, 30, 100, 110, 3, 0, 2, 0, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 19, 10, 1, 0, 260, 0, -20, 0, 30, 100, 110, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 10, 1, 0, 210, 0, 0, 0, 30, 100, 110, 3, 0, 1, 0, 0),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_0x1164[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandEffect(7, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandSetHitStatusPartID(7, 3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandMakeAttackColl(0, 0, 7, 18, 1, 0, 380, 0, 40, 40, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 6, 18, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(7),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_FSmashHigh[] = {
	ftMotionCommandGoto(dYoshiMainMotion_0x1164),
	ftMotionCommandGoto(dYoshiMainMotion_0x1164),
	ftMotionCommandGoto(dYoshiMainMotion_0x1164),
};

ftMotionCommand dYoshiMainMotion_USmash[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(7, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandSetHitStatusPartID(7, 3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandMakeAttackColl(0, 0, 7, 18, 1, 0, 320, 0, 40, 40, 361, 118, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 6, 18, 1, 0, 210, 0, 0, 0, 361, 118, 0, 3, 0, 2, 1, 20),
	ftMotionCommandWait(1),
	ftMotionCommandSetAttackCollSize(0, 370),
	ftMotionCommandSetAttackCollSize(1, 240),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 7, 18, 1, 0, 320, 0, 40, 40, 80, 110, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 6, 18, 1, 0, 210, 0, 0, 0, 80, 110, 0, 3, 0, 2, 1, 20),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_DSmash[] = {
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWait(6),
	ftMotionCommandSetSlopeContour(4),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 19, 13, 1, 0, 300, 0, 0, 0, 35, 105, 0, 3, 0, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 20, 13, 1, 0, 260, 0, 0, 0, 35, 105, 0, 3, 0, 2, 0, 20),
#else
	ftMotionCommandMakeAttackColl(0, 0, 19, 14, 1, 0, 300, 0, 0, 0, 30, 105, 0, 3, 0, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 260, 0, 0, 0, 30, 105, 0, 3, 0, 2, 0, 20),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(20, nEFKindSparkleWhiteScale, 0, 100, 0, 0, 60, 60, 60),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(13),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 19, 13, 1, 0, 300, 0, 0, 0, 35, 105, 0, 3, 0, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 20, 13, 1, 0, 260, 0, 0, 0, 35, 105, 0, 3, 0, 2, 0, 20),
#else
	ftMotionCommandMakeAttackColl(0, 0, 19, 14, 1, 0, 300, 0, 0, 0, 30, 105, 0, 3, 0, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 260, 0, 0, 0, 30, 105, 0, 3, 0, 2, 0, 20),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(20, nEFKindSparkleWhiteScale, 0, 100, 0, 0, 60, 60, 60),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_AttackAirN[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 28, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 23, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 28, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 23, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandWait(30),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_AttackAirF[] = {
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(40),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandMakeAttackColl(0, 0, 7, 18, 1, 0, 300, 0, 40, 40, -85, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 6, 18, 1, 0, 200, 0, 0, 0, -85, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 7, 18, 1, 0, 300, 0, 40, 40, -100, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 6, 18, 1, 0, 200, 0, 0, 0, -100, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(15),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_LandingAirF[] = {
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_AttackAirB[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 28, 16, 1, 0, 270, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 28, 16, 1, 0, 340, 110, 40, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 28, 10, 1, 0, 240, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 10, 1, 0, 300, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_LandingAirB[] = {
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_AttackAirU[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 19, 15, 1, 0, 340, 0, 0, 0, 90, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 20, 15, 1, 0, 340, 0, 120, 0, 90, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_AttackAirD[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 28, 4, 1, 0, 300, 0, 0, 0, -90, 90, 0, 3, 0, 2, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 23, 4, 1, 0, 300, 0, 0, 0, -90, 90, 0, 3, 0, 2, 1, 5),
	ftMotionCommandLoopBegin(14),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMMarioUnkSwing2),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_LandingAirX_0x1584[] = {
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Appear1[] = {
	ftMotionCommandWaitAsync(60),
	ftMotionCommandEffect(0, nEFKindEggBreak, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMYoshiEggLayShatter),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWait(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_Appear2[] = {
	ftMotionCommandGoto(dYoshiMainMotion_Appear1),
};

ftMotionCommand dYoshiMainMotion_EggThrowGround[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(13, nEFKindRipple, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMYoshiSpecialHiThrow),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_GroundPound[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -160, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSpecialLwJump),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandEffect(0, nEFKindRipple, 0, 0, 140, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSpecialLwFall),
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 1, 0, 460, 0, 160, 0, 60, 100, 0, 3, 0, 2, 1, 50),
	ftMotionCommandWait(100),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_GroundPoundAir[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, -160, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSpecialLwJump),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, nEFKindRipple, 0, 0, 140, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSpecialLwFall),
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 1, 0, 460, 0, 160, 0, 60, 100, 0, 3, 0, 2, 1, 50),
	ftMotionCommandWait(100),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_GroundPoundLanding[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionPlayFGM(nSYAudioFGMDonkeySlap2),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dYoshiMainMotion_0x16F8[] = {
	{ -1, 20, 361, 100, 0, 0, 0 },
	{ -1, 5, 361, 100, 0, 0, 0 },
};

ftMotionCommand dYoshiMainMotion_EggLay_0x1730[] = {
	ftMotionCommandSetThrow((u32)dYoshiMainMotion_0x16F8),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandMakeAttackColl(0, 0, 31, 1, 1, 0, 300, 0, 100, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMYoshiSpecialNTongue),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_EggLay_0x1760[] = {
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dYoshiMainMotion_EggLayGrabbedSomeoneComingInAndSwallowing[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, nEFKindFlameRandom, 0, 0, 100, 200, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMShellHit),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandWait(8),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};
