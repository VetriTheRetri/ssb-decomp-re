/* ftMotionCommand script data for relocData file 235 (CaptainMainMotion) */
/* File size: 7600 bytes (0x1DB0) */

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
/* Captain FightSpecialHi (Falcon Dive) capture-grab offsets per victim FTKind.
 * Loaded by ftCommonCaptureCaptainUpdatePositions (via llCaptainMainMotionSpecialHiVec2h
 * at offset 0x0); indexed by capture_fp->fkind. 27 entries covering all FTKinds
 * (playable, boss, MMario, N-series, GDonkey). */
Vec2h dCaptainMainMotion_0x0000[nFTKindEnumCount] = {
	{ 0x001E, 0x0046 }, /* Mario   */
	{ 0x0028, 0x0028 }, /* Fox     */
	{ 0x0064, 0x00FA }, /* Donkey  */
	{ 0x0050, 0x00D2 }, /* Samus   */
	{ 0x001E, 0x0046 }, /* Luigi   */
	{ 0x0064, 0x00A0 }, /* Link    */
	{ 0x0000, 0x006E }, /* Yoshi   */
	{ 0x0050, 0x00D2 }, /* Captain */
	{ 0x0014, 0x0064 }, /* Kirby   */
	{ -0x000A, 0x0050 }, /* Pikachu */
	{ 0x0014, 0x0064 }, /* Purin   */
	{ 0x001E, 0x0046 }, /* Ness    */
	{ 0x0000, 0x0000 }, /* Boss    */
	{ 0x001E, 0x0046 }, /* MMario  */
	{ 0x001E, 0x0046 }, /* NMario  */
	{ 0x0028, 0x0028 }, /* NFox    */
	{ 0x0078, 0x0104 }, /* NDonkey */
	{ 0x0050, 0x00D2 }, /* NSamus  */
	{ 0x001E, 0x0046 }, /* NLuigi  */
	{ 0x0064, 0x00A0 }, /* NLink   */
	{ 0x0000, 0x0000 }, /* NYoshi  */
	{ 0x0050, 0x00D2 }, /* NCaptain*/
	{ 0x0014, 0x0064 }, /* NKirby  */
	{ -0x000A, 0x0050 }, /* NPikachu*/
	{ 0x0014, 0x0064 }, /* NPurin  */
	{ 0x0032, 0x0096 }, /* NNess   */
	{ 0x0064, 0x00FA }, /* GDonkey */
};

ftMotionCommand dCaptainMainMotion_EggLay_0x006C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Walk1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Walk2[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Walk3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Dash[] = {
	ftMotionPlayFGM(nSYAudioFGMCaptainDash),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Run[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(4),
	ftMotionPlayFGM(nSYAudioFGMCaptainFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionPlayFGM(nSYAudioFGMCaptainFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dCaptainMainMotion_Run),
};

ftMotionCommand dCaptainMainMotion_RunBrake[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(6),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Turn[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_TurnRun[] = {
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 100, 0, 0, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_LandingAirX_0x0144[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_JumpF[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundGrind1),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(30),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_JumpB[] = {
	ftMotionPlayFGM(nSYAudioFGMGroundGrind1),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandWait(30),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_JumpAerial[] = {
	ftMotionPlayVoice(nSYAudioVoiceCaptainJumpAerial),
	ftMotionPlayFGM(nSYAudioFGMUnkGrind3),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Fall[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FallAerial[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_LandingAirX_0x01D0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_LandingAirX_0x01EC[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ShieldDrop_0x0208[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip2),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ShieldDrop_0x0210[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Teeter[] = {
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Teeterstart[] = {
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_LandingAirX_0x023C[] = {
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_0x0254[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandReturn(),
};

ftMotionCommand dCaptainMainMotion_Damage_0x025C[] = {
	ftMotionCommandSubroutine(dCaptainMainMotion_0x0254),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Damage_0x0268[] = {
	ftMotionCommandSubroutine(dCaptainMainMotion_0x0254),
	ftMotionCommandSetDamageThrown((u32)dFTCommonMoveset_DamageScript), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Crouch[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CrouchIdle[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CrouchEnd[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_EnterPipe[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ExitPipe[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_StunLandD[] = {
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

ftMotionCommand dCaptainMainMotion_StunLandU[] = {
	ftMotionCommandGoto(dCaptainMainMotion_StunLandD),
};

ftMotionCommand dCaptainMainMotion_0x02F0[] = {
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

ftMotionCommand dCaptainMainMotion_StunStartD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_StunStartU[] = {
	ftMotionCommandGoto(dCaptainMainMotion_StunStartD),
};

ftMotionCommand dCaptainMainMotion_DownForwardD[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x02F0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_DownForwardU[] = {
	ftMotionCommandGoto(dCaptainMainMotion_DownForwardD),
	ftMotionCommandGoto(dCaptainMainMotion_DownForwardD),
	ftMotionCommandGoto(dCaptainMainMotion_DownForwardD),
};

ftMotionCommand dCaptainMainMotion_DownAttackD[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 26, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_DownAttackU[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 26, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 21, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 21, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Tech[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceCaptainUnkQuick),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_TechF[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, nEFKindFlashMiddle, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceCaptainUnkQuick),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_TechB[] = {
	ftMotionCommandGoto(dCaptainMainMotion_TechF),
};

ftMotionCommand dCaptainMainMotion_RollF[] = {
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

ftMotionCommand dCaptainMainMotion_RollB[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustHeavy, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffCatch[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffWait[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffQuick[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffClimbQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffClimbQuick2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffSlow[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffClimbSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffClimbSlow2[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffAttackQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffAttackQuick2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceCaptainJumpAerial),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 28, 6, 0, 0, 270, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 6, 0, 0, 240, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 6, 0, 0, 160, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffAttackSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffAttackSlow2[] = {
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceCaptainJumpAerial),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandMakeAttackColl(0, 0, 5, 4, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffEscapeQuick1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffEscapeQuick2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffEscapeSlow1[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CliffEscapeSlow2[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_LightItemPickup[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_HeavyItemPickup[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemDrop[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowDash[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowSmashB_0x0740[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowSmashB_0x0760[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dCaptainMainMotion_ItemThrowSmashB_0x0740),
};

ftMotionCommand dCaptainMainMotion_ItemThrowSmashU_0x0770[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowSmashD_0x0790[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowSmashB_0x07B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowSmashB_0x07D4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dCaptainMainMotion_ItemThrowSmashB_0x07B0),
};

ftMotionCommand dCaptainMainMotion_ItemThrowSmashU_0x07E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowSmashD_0x0808[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowAirSmashB_0x082C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowAirSmashB_0x0848[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dCaptainMainMotion_ItemThrowAirSmashB_0x082C),
};

ftMotionCommand dCaptainMainMotion_ItemThrowAirSmashU_0x0854[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowAirSmashF_0x0870[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowAirSmashB_0x088C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowAirSmashB_0x08AC[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dCaptainMainMotion_ItemThrowAirSmashB_0x088C),
};

ftMotionCommand dCaptainMainMotion_ItemThrowAirSmashU_0x08B8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_ItemThrowAirSmashF_0x08D8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_HeavyItemThrowSmashB_0x08F8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_HeavyItemThrowSmashB_0x0908[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dCaptainMainMotion_HeavyItemThrowSmashB_0x08F8),
};

ftMotionCommand dCaptainMainMotion_HeavyItemThrowSmashB_0x0918[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_HeavyItemThrowSmashB_0x0928[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dCaptainMainMotion_HeavyItemThrowSmashB_0x0918),
};

ftMotionCommand dCaptainMainMotion_SwordSwing1[] = {
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

ftMotionCommand dCaptainMainMotion_SwordSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing3), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_SwordSwing4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwing4), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(11),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_SwordSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_SwordSwingDash), /* extern */
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(15),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_BatSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing1), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_BatSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing3), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_BatSwing4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwing4), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_BatSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_BatSwingDash), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_HarisenSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing1), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_HarisenSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing3), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_HarisenSwing4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwing4), /* extern */
	ftMotionCommandWait(14),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_HarisenSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_HarisenSwingDash), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_StarRodSwing1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 16),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing1), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_StarRodSwing3[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 13),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing3), /* extern */
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_StarRodSwing4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 36),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwing4), /* extern */
	ftMotionCommandWait(14),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_StarRodSwingDash[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 20),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_StarRodSwingDash), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FireFlowerShoot_0x0C04[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FireFlowerShoot_0x0C14[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Hammer[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_FireFlowerShoot), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dCaptainMainMotion_Hammer),
};

ftMotionCommand dCaptainMainMotion_0x0C44[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindShockSmall, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dCaptainMainMotion_0x0C44),
};

ftMotionCommand dCaptainMainMotion_ShieldBreak[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceCaptainDamage),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dCaptainMainMotion_0x0C44),
};

ftMotionCommand dCaptainMainMotion_Damaged_0x0C9C[] = {
	ftMotionCommandGoto(dCaptainMainMotion_0x0C44),
};

ftMotionCommand dCaptainMainMotion_StunLandD_0x0CA4[] = {
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_StunStart[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Sleep_0x0CD0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceCaptainFuraFura),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandLoopBegin(12),
	ftMotionCommandEffect(0, nEFKindFuraSparkle, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dCaptainMainMotion_Sleep_0x0CD0),
};

ftMotionCommand dCaptainMainMotion_Sleep_0x0D00[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceCaptainFuraSleep),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindMusicNote, 0, 0, 150, 0, 240, 300, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dCaptainMainMotion_Sleep_0x0D00),
};

FTThrowHitDesc dCaptainMainMotion_0x0D28[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

ftMotionCommand dCaptainMainMotion_Catch[] = {
	ftMotionCommandSetThrow((u32)dCaptainMainMotion_0x0D28),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 29, 1, 1, 0, 300, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dCaptainMainMotion_0x0DA4[] = {
	{ 52, 12, 70, 50, 0, 100, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

ftMotionCommand dCaptainMainMotion_ThrowF[] = {
	ftMotionCommandSetThrow((u32)dCaptainMainMotion_0x0DA4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(12),
	ftMotionPlayFGM(nSYAudioFGMDonkeySlap2),
	ftMotionCommandEffect(29, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 280, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag2, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dCaptainMainMotion_0x0E50[] = {
	{ 52, 16, 361, 50, 0, 100, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

ftMotionCommand dCaptainMainMotion_ThrowB[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandSetThrow((u32)dCaptainMainMotion_0x0E50),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 26, 10, 0, 0, 200, 200, 0, 0, 361, 80, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 0, 0, 140, 0, 0, 0, 361, 80, 0, 3, 0, 2, 1, 30),
	ftMotionPlayFGM(nSYAudioFGMKickL),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(26, nEFKindDamageNormal, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Damaged_0x0F18[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageBumpHit), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Damaged_0x0F24[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageRumble), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_EggLay_0x0F30[] = {
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageFlameBurst), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FalconDivePulled[] = {
	ftMotionCommandSubroutine(dCaptainMainMotion_0x0254),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkleDelay), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Damaged_0x0F50[] = {
	ftMotionCommandSubroutine(dCaptainMainMotion_0x0254),
	ftMotionCommandSubroutine((u32)dFTCommonMoveset_DamageSparkle), /* extern */
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Taunt[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(nSYAudioVoiceCaptainAppeal),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Jab1[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 9, 3, 1, 0, 180, 120, 0, 0, 361, 80, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 8, 3, 1, 0, 180, 60, 0, 0, 361, 80, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 8, 3, 1, 0, 180, -60, 0, 0, 361, 80, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Jab2[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 15, 3, 1, 0, 220, 120, 0, 0, 361, 80, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 3, 1, 0, 220, 30, 0, 0, 361, 80, 0, 3, 0, 2, 0, 0),
#else
	ftMotionCommandMakeAttackColl(0, 0, 15, 3, 1, 0, 220, 120, 0, 0, 361, 80, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 3, 1, 0, 220, 30, 0, 0, 361, 80, 0, 3, 0, 1, 0, 0),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Jab3[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(5),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 26, 4, 1, 0, 270, 120, 0, 0, 80, 30, 0, 3, 0, 2, 0, 40),
#else
	ftMotionCommandMakeAttackColl(0, 0, 26, 4, 1, 0, 270, 120, 0, 0, 80, 30, 0, 3, 0, 1, 1, 40),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_JabLoopStart[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_0x1068[] = {
	ftMotionCommandMakeAttackColl(0, 0, 14, 1, 1, 0, 210, 0, 0, 0, 361, 70, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 1, 1, 0, 210, 220, 0, 0, 361, 70, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSmash2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandReturn(),
};

ftMotionCommand dCaptainMainMotion_JabLoop[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x1068),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x1068),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x1068),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x1068),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(35),
	ftMotionCommandSubroutine(dCaptainMainMotion_0x1068),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dCaptainMainMotion_JabLoop),
};

ftMotionCommand dCaptainMainMotion_JabLoopEnd[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_DashAttack[] = {
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 14, 12, 1, 0, 220, 16, 0, 0, 361, 100, 0, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 9),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FTiltHigh[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 21, 15, 1, 0, 220, 200, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 21, 15, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 20, 15, 1, 0, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FTiltMidHigh[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 21, 14, 1, 0, 220, 200, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 21, 14, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 20, 14, 1, 0, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FTilt[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 21, 13, 1, 0, 220, 200, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 21, 13, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 20, 13, 1, 0, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FTiltMidLow[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 21, 12, 1, 0, 220, 200, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 21, 12, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 20, 12, 1, 0, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FTiltLow[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandMakeAttackColl(0, 0, 21, 11, 1, 0, 220, 200, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 21, 11, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 20, 11, 1, 0, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_UTilt[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 26, 9, 1, 0, 240, -20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 9, 1, 0, 240, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(10),
	ftMotionCommandMakeAttackColl(0, 1, 26, 14, 1, 0, 240, -20, 0, 0, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 1, 26, 14, 1, 0, 240, 180, 0, 0, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_DTilt[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 21, 11, 1, 0, 200, -40, 0, 0, 30, 80, 0, 3, 0, 1, 1, 25),
	ftMotionCommandMakeAttackColl(1, 0, 21, 11, 1, 0, 200, 180, 0, 0, 30, 80, 0, 3, 0, 1, 1, 25),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FSmashHigh[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(8),
	ftMotionPlayVoice(nSYAudioVoiceCaptainAttackS4),
	ftMotionCommandEffect(26, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 19, 1, 1, 360, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 26, 19, 1, 1, 360, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 5, 19, 1, 1, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 8),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FSmash[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(8),
	ftMotionPlayVoice(nSYAudioVoiceCaptainAttackS4),
	ftMotionCommandEffect(26, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 18, 1, 1, 360, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 26, 18, 1, 1, 360, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 5, 18, 1, 1, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 8),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FSmashLow[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(8),
	ftMotionPlayVoice(nSYAudioVoiceCaptainAttackS4),
	ftMotionCommandEffect(26, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 17, 1, 1, 360, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 26, 17, 1, 1, 360, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 5, 17, 1, 1, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 8),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_USmash[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, nEFKindSparkleWhiteScale, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 17, 1, 0, 380, 160, 0, 0, 95, 40, 0, 3, 0, 2, 0, 90),
	ftMotionCommandMakeAttackColl(2, 0, 14, 17, 1, 0, 280, 0, 0, 0, 95, 40, 0, 3, 0, 2, 0, 90),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_DSmash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 26, 16, 1, 0, 210, -130, 0, 0, 60, 100, 0, 3, 0, 2, 1, 25),
	ftMotionCommandMakeAttackColl(1, 0, 26, 16, 1, 0, 300, 300, 0, 0, 60, 100, 0, 3, 0, 2, 1, 25),
	ftMotionCommandEffect(26, nEFKindSparkleWhiteScale, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 0, 26, 14, 1, 0, 210, -130, 0, 0, 60, 100, 0, 3, 0, 1, 1, 25),
	ftMotionCommandMakeAttackColl(1, 0, 26, 14, 1, 0, 300, 300, 0, 0, 60, 100, 0, 3, 0, 1, 1, 25),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_AttackAirN[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 20, 16, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 26, 16, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 13, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 13, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(20),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_AttackAirF[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 26, 10, 1, 0, 210, -60, 0, 0, 361, 80, 0, 3, 0, 2, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 26, 10, 1, 0, 240, 220, 0, 0, 361, 80, 0, 3, 0, 2, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 1, 21, 12, 1, 0, 210, -60, 0, 0, 361, 80, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 1, 21, 12, 1, 0, 240, 220, 0, 0, 361, 80, 0, 3, 0, 2, 1, 20),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_LandingAirF[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_AttackAirB[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetFlag1(100),
	ftMotionCommandMakeAttackColl(0, 0, 8, 16, 1, 0, 280, 180, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 8, 16, 1, 0, 240, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 8, 16, 1, 0, 250, 150, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 8, 16, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 10),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(10),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_LandingAirB[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_AttackAirU[] = {
	ftMotionCommandSetFlag1(50),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandMakeAttackColl(0, 0, 21, 16, 1, 0, 220, -60, 0, 0, 80, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 21, 16, 1, 0, 260, 220, 0, 0, 80, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 21, 16, 1, 0, 220, -60, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 21, 16, 1, 0, 260, 220, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 21, 16, 1, 0, 220, -60, 0, 0, 20, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 21, 16, 1, 0, 260, 220, 0, 0, 20, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_AttackAirD[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetFlag1(40),
	ftMotionCommandMakeAttackColl(0, 0, 26, 14, 1, 0, 330, 0, 120, 0, -80, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 14, 1, 0, 190, 0, 30, 0, -80, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(18),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_LandingAirX_0x18B8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMCaptainLanding),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_Appear[] = {
	ftMotionPlayFGM(nSYAudioFGMCaptainAppearCar1),
	ftMotionCommandWait(30),
	ftMotionCommandMakeRumble(50, 7),
	ftMotionCommandWait(20),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_AppearAir[] = {
	ftMotionCommandGoto(dCaptainMainMotion_Appear),
};

ftMotionCommand dCaptainMainMotion_BlueFalcon2[] = {
	ftMotionPlayFGM(nSYAudioFGMCaptainAppearCar2),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_BlueFalcon1[] = {
	ftMotionCommandGoto(dCaptainMainMotion_BlueFalcon2),
};

ftMotionCommand dCaptainMainMotion_FalconPunchGround[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 0),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialNFalcon),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(12),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 16, 24, 1, 0, 250, 100, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 14, 25, 1, 0, 200, 60, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(2, 0, 14, 26, 1, 0, 180, -60, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialNPunch),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandStopRumble(7),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FalconPunchAir[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialN, 0),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialNFalcon),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandWait(12),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(16, nEFKindSparkleWhiteScale, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 16, 24, 1, 0, 320, 100, 0, 0, 361, 120, 0, 3, 4, 2, 1, 40),
	ftMotionCommandMakeAttackColl(1, 0, 14, 25, 1, 0, 270, 60, 0, 0, 361, 120, 0, 3, 4, 2, 1, 40),
	ftMotionCommandMakeAttackColl(2, 0, 14, 26, 1, 0, 240, -60, 0, 0, 361, 120, 0, 3, 4, 2, 1, 40),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialNPunch),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandStopRumble(7),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_DownSpecial[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialLw),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingL),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNStart),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -140, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 21, 15, 1, 1, 220, 200, 0, 0, 361, 70, 0, 3, 4, 2, 1, 40),
	ftMotionCommandMakeAttackColl(1, 0, 21, 15, 1, 1, 200, 0, 0, 0, 361, 70, 0, 3, 4, 2, 1, 40),
	ftMotionCommandMakeAttackColl(2, 0, 20, 15, 1, 1, 140, 0, 0, 0, 361, 70, 0, 3, 4, 2, 1, 40),
	ftMotionCommandMakeRumble(20, 7),
	ftMotionCommandLoopBegin(5),
	ftMotionCommandEffect(0, nEFKindSparkleWhite, 0, 0, 200, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetFlag1(2),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetFlag3(1),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -140, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_VelocityXDownSpecialAir[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -180, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCaptainDownBounce),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag3(1),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_LandingDownSpecial[] = {
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 200, 0, 0, 140, 361, 20, 0, 3, 2, 2, 1, 60),
	ftMotionCommandMakeAttackColl(1, 0, 0, 12, 1, 0, 200, 0, 0, -140, 361, 20, 0, 3, 2, 2, 1, 60),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCaptainDownBounce),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_DownSpecialAir[] = {
	ftMotionCommandGoto(dCaptainMainMotion_DownSpecial),
};

ftMotionCommand dCaptainMainMotion_FalconDiveEnd1_0x1C18[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteMultiExplode, 0, 0, 300, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustHeavyReverse, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCaptainDeadSlam),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dCaptainMainMotion_0x1C54[] = {
	{ -1, 20, 361, 82, 0, 30, 1 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

ftMotionCommand dCaptainMainMotion_FalconDive[] = {
	ftMotionCommandSetThrow((u32)dCaptainMainMotion_0x1C54),
	ftMotionCommandEffect(0, nEFKindRipple, 0, 0, 180, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialHi),
	ftMotionCommandSetColAnim(nGMColAnimFighterCaptainSpecialHi, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 200, 0, 260, 180, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 300, 0, 260, 400, 361, 100, 0, 2, 0, 1, 0, 0),
	ftMotionCommandEffect(0, nEFKindDustDashSmall, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollID(1),
	ftMotionCommandLoopBegin(10),
	ftMotionCommandEffect(28, nEFKindStarRodSpark, 0, 0, 0, 0, 180, 180, 180),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 260, 180, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_CatchingEnemyWhileDiving[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandEffect(17, 38, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_FalconDiveEnd1[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, nEFKindSparkleWhiteMultiExplode, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, nEFKindQuakeMag1, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, nEFKindImpactWave, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMExplodeL),
	ftMotionPlayVoice(nSYAudioVoiceCaptainSpecialHi),
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_0x1DA4[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_0x1DA8[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dCaptainMainMotion_0x1DAC[] = {
	ftMotionCommandEnd(),
};

