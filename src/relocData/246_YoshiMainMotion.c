/* ftMotionCommand script data for relocData file 246 (YoshiMainMotion) */
/* File size: 6080 bytes (0x17C0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>

u32 dYoshiMainMotion_0x0000[] = {
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

u32 dYoshiMainMotion_0x0034[] = {
	ftMotionCommandSubroutine(dYoshiMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dYoshiMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dYoshiMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dYoshiMainMotion_0x0034),
	ftMotionPlayFGM(nSYAudioFGMYoshiDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0084[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMYoshiFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMYoshiFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dYoshiMainMotion_0x0084),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x00DC[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x00E8[] = {
	ftMotionCommandSetTexturePartID(11),
	ftMotionCommandSetTexturePartID(1048587),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x012C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x013C[] = {
	ftMotionPlayVoice(nSYAudioVoiceYoshiJump),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0154[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionPlayVoice(nSYAudioVoiceYoshiHeavyGet),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0180[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0188[] = {
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x01A0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x01BC[] = {
	ftMotionPlayVoice(nSYAudioVoiceYoshiOttotto),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x01C4[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip11),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x01CC[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip11),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x01E0[] = {
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandReturn(),
};

u32 dYoshiMainMotion_0x01EC[] = {
	ftMotionCommandSubroutine(dYoshiMainMotion_0x01E0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x01F8[] = {
	ftMotionCommandSubroutine(dYoshiMainMotion_0x01E0),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x020C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0228[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0234[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0240[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0284[] = {
	ftMotionCommandGoto(dYoshiMainMotion_0x0240),
};

u32 dYoshiMainMotion_0x028C[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dYoshiMainMotion_0x02AC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x02C4[] = {
	ftMotionCommandGoto(dYoshiMainMotion_0x02AC),
};

u32 dYoshiMainMotion_0x02CC[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dYoshiMainMotion_0x028C),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x02DC[] = {
	ftMotionCommandGoto(dYoshiMainMotion_0x02CC),
	ftMotionCommandGoto(dYoshiMainMotion_0x02CC),
	ftMotionCommandGoto(dYoshiMainMotion_0x02CC),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
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

u32 dYoshiMainMotion_0x037C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
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

u32 dYoshiMainMotion_0x03E0[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiJump),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0424[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiJump),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x046C[] = {
	ftMotionCommandGoto(dYoshiMainMotion_0x0424),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(-1, 87, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x04C0[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(-1, 87, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0508[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x051C[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0534[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x053C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0544[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x054C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0554[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x055C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0564[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x056C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSmash1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandMakeAttackColl(0, 0, 19, 6, 1, 0, 220, 0, 0, -50, 361, 100, 100, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 6, 1, 0, 180, 0, 0, -80, 361, 100, 100, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x05D8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x05E0[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(16),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSmash1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 6, 1, 0, 350, 0, 180, 280, 361, 100, 100, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 6, 1, 0, 240, 0, 180, 60, 361, 100, 100, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0650[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0658[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x067C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0684[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(35),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x06A8[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x06B4[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x06C0[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x06CC[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x06E8[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0704[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dYoshiMainMotion_0x06E8),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x072C[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0748[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0768[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dYoshiMainMotion_0x0748),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0794[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x07B4[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x07D0[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dYoshiMainMotion_0x07B4),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x07F8[] = {
	ftMotionCommandWaitAsync(11),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0814[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x083C[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dYoshiMainMotion_0x0814),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0878[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x08A0[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x08AC[] = {
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dYoshiMainMotion_0x08A0),
};

u32 dYoshiMainMotion_0x08B8[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x08CC[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dYoshiMainMotion_0x08B8),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0914[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0948[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0988[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x09BC[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x09E0[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0A04[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(75, 40),
#else
	ftMotionCommandSetColAnim(76, 40),
#endif
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0A3C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0A60[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0A84[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0AA8[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0AD4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0AF8[] = {
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(74, 11),
#else
	ftMotionCommandSetColAnim(75, 11),
#endif
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0B20[] = {
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(74, 18),
#else
	ftMotionCommandSetColAnim(75, 18),
#endif
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0B50[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(74, 26),
#else
	ftMotionCommandSetColAnim(75, 26),
#endif
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0B8C[] = {
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(74, 26),
#else
	ftMotionCommandSetColAnim(75, 26),
#endif
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0BB4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0BCC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0BE4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dYoshiMainMotion_0x0BE4),
};

u32 dYoshiMainMotion_0x0C0C[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dYoshiMainMotion_0x0C0C),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 34, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionPlayVoice(nSYAudioVoiceYoshiDamage),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dYoshiMainMotion_0x0C0C),
	ftMotionCommandGoto(dYoshiMainMotion_0x0C0C),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0C94[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0C9C[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceYoshiFuraFura),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 260, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dYoshiMainMotion_0x0C9C),
};

u32 dYoshiMainMotion_0x0CD0[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceYoshiFuraSleep),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 140, 0, 280, 280, 230),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dYoshiMainMotion_0x0CD0),
};

FTThrowHitDesc dYoshiMainMotion_0x0CFC[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dYoshiMainMotion_0x0D34[] = {
	ftMotionCommandSetThrow((u32)dYoshiMainMotion_0x0CFC),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 31, 1, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -100, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiCatch),
	ftMotionCommandSetFlag1(6),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(44),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0D8C[] = {
	ftMotionCommandEnd(),
};

FTThrowHitDesc dYoshiMainMotion_0x0D90[] = {
	{ 52, 12, 45, 70, 0, 80, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dYoshiMainMotion_0x0DC8[] = {
	ftMotionCommandSetThrow((u32)dYoshiMainMotion_0x0D90),
	ftMotionCommandSetModelPartID(7, 1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(19),
	ftMotionPlayVoice(nSYAudioVoiceYoshiThrow),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandEffect(17, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
#endif
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

u32 dYoshiMainMotion_0x0E64[] = {
	ftMotionCommandSetThrow((u32)dYoshiMainMotion_0x0E2C),
	ftMotionCommandSetModelPartID(7, 1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(19),
	ftMotionPlayVoice(nSYAudioVoiceYoshiThrow),
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandEffect(31, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetModelPartID(7, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0EC8[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0ED4[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0EE0[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0EEC[] = {
	ftMotionCommandSubroutine(dYoshiMainMotion_0x01E0),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0F00[] = {
	ftMotionCommandSubroutine(dYoshiMainMotion_0x01E0),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0F14[] = {
	ftMotionPlayVoice(nSYAudioVoiceYoshiAppeal),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0F28[] = {
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

u32 dYoshiMainMotion_0x0F6C[] = {
	ftMotionCommandWaitAsync(1),
	ftMotionCommandMakeAttackColl(0, 0, 28, 5, 1, 0, 300, 0, 0, 0, 361, 120, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 30, 5, 1, 0, 300, 0, 0, 0, 361, 120, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x0FAC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusPartID(7, 3),
	ftMotionCommandWait(8),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSmash2),
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 280, 0, 180, 280, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 12, 1, 0, 200, 0, 180, 30, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
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

u32 dYoshiMainMotion_0x101C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 28, 13, 1, 0, 300, 0, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 30, 13, 1, 0, 300, 90, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x1058[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 28, 13, 1, 0, 300, 0, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 30, 13, 1, 0, 300, 90, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x1094[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 28, 13, 1, 0, 300, 0, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 30, 13, 1, 0, 300, 90, 0, 0, 70, 100, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x10D0[] = {
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

u32 dYoshiMainMotion_0x1114[] = {
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
	ftMotionCommandEffect(0, 16, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x1164[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandEffect(7, 31, 0, 0, 0, 0, 100, 100, 100),
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

u32 dYoshiMainMotion_0x11C8[] = {
	ftMotionCommandGoto(dYoshiMainMotion_0x1164),
	ftMotionCommandGoto(dYoshiMainMotion_0x1164),
	ftMotionCommandGoto(dYoshiMainMotion_0x1164),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(7, 31, 0, 0, 0, 0, 100, 100, 100),
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

u32 dYoshiMainMotion_0x1274[] = {
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
	ftMotionCommandEffect(20, 31, 0, 100, 0, 0, 60, 60, 60),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 150, 0, 0, 0),
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
	ftMotionCommandEffect(20, 31, 0, 100, 0, 0, 60, 60, 60),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x1334[] = {
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

u32 dYoshiMainMotion_0x13CC[] = {
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

u32 dYoshiMainMotion_0x1444[] = {
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x145C[] = {
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

u32 dYoshiMainMotion_0x14CC[] = {
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x14E4[] = {
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

u32 dYoshiMainMotion_0x1528[] = {
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

u32 dYoshiMainMotion_0x1584[] = {
	ftMotionPlayFGM(nSYAudioFGMYoshiLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x159C[] = {
	ftMotionCommandWaitAsync(60),
	ftMotionCommandEffect(0, 91, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMYoshiEggLayShatter),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWait(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x15C4[] = {
	ftMotionCommandGoto(dYoshiMainMotion_0x159C),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(13, 71, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMYoshiSpecialHiThrow),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x160C[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -160, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSpecialLwJump),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandEffect(0, 71, 0, 0, 140, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSpecialLwFall),
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 1, 0, 460, 0, 160, 0, 60, 100, 0, 3, 0, 2, 1, 50),
	ftMotionCommandWait(100),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x1660[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(0, 13, 0, 0, 0, -160, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSpecialLwJump),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 71, 0, 0, 140, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionPlayVoice(nSYAudioVoiceYoshiSpecialLwFall),
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 1, 0, 460, 0, 160, 0, 60, 100, 0, 3, 0, 2, 1, 50),
	ftMotionCommandWait(100),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x16B4[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionPlayFGM(nSYAudioFGMDonkeySlap2),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dYoshiMainMotion_0x16F8[] = {
	{ -1, 20, 361, 100, 0, 0, 0 },
	{ -1, 5, 361, 100, 0, 0, 0 },
};

u32 dYoshiMainMotion_0x1730[] = {
	ftMotionCommandSetThrow((u32)dYoshiMainMotion_0x16F8),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandMakeAttackColl(0, 0, 31, 1, 1, 0, 300, 0, 100, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMYoshiSpecialNTongue),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x1760[] = {
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dYoshiMainMotion_0x1774[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 7, 0, 0, 100, 200, 0, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMShellHit),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandWait(8),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};
