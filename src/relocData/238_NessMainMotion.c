/* ftMotionCommand script data for relocData file 238 (NessMainMotion) */
/* File size: US 6064 bytes (0x17B0) / JP 6048 bytes (0x17A0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmsound.h>
#include <gm/gmdef.h>
extern u32 dNessMainMotion_0x0128[];
extern u32 dNessMainMotion_0x165C[];
extern u32 dNessMainMotion_0x16B0[];
extern u32 dNessMainMotion_0x1780[];
extern u32 dNessMainMotion_0x1788[];
u32 dNessMainMotion_0x0000[] = {
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

u32 dNessMainMotion_0x0024[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dNessMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dNessMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dNessMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dNessMainMotion_0x0024),
	ftMotionPlayFGM(nSYAudioFGMNessDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x007C[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMNessFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMNessFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dNessMainMotion_0x007C),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x00D0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x00E0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0114[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandGoto(dNessMainMotion_0x0128),
};

u32 dNessMainMotion_0x0128[] = {
	ftMotionPlayFGM(nSYAudioFGMNessJump),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, 41, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x015C[] = {
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, 41, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0180[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x019C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x01B8[] = {
	ftMotionPlayVoice(nSYAudioVoiceNessOttotto),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x01C0[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip7),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x01C8[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip7),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandReturn(),
};

u32 dNessMainMotion_0x01E4[] = {
	ftMotionCommandSubroutine(dNessMainMotion_0x01C8 + 5),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x01F0[] = {
	ftMotionCommandSubroutine(dNessMainMotion_0x01C8 + 5),
	ftMotionCommandSetDamageThrown(0x0758) /* extern */,
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0204[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0220[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x022C[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0238[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0278[] = {
	ftMotionCommandGoto(dNessMainMotion_0x0238),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dNessMainMotion_0x02A0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x02B8[] = {
	ftMotionCommandGoto(dNessMainMotion_0x02A0),
};

u32 dNessMainMotion_0x02C0[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dNessMainMotion_0x0278 + 2),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x02D0[] = {
	ftMotionCommandGoto(dNessMainMotion_0x02C0),
	ftMotionCommandGoto(dNessMainMotion_0x02C0),
	ftMotionCommandGoto(dNessMainMotion_0x02C0),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
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

u32 dNessMainMotion_0x0358[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
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

u32 dNessMainMotion_0x03BC[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(nSYAudioVoiceNessSmash1),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x03E8[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionPlayVoice(nSYAudioVoiceNessSmash1),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0418[] = {
	ftMotionCommandGoto(dNessMainMotion_0x03E8),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x045C[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0494[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04A4[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04B8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04C0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04C8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04D0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04D8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04E0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04E8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04F8[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceNessSmash1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 28, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0564[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x056C[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(nSYAudioVoiceNessSmash1),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 6, 0, 0, 280, 80, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x05D8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x05E0[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0604[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x060C[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0630[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x063C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0648[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0654[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0670[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x068C[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dNessMainMotion_0x0670),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x06B4[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x06D0[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x06F0[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dNessMainMotion_0x06D0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x071C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x073C[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0758[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dNessMainMotion_0x073C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0780[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x079C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x07BC[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dNessMainMotion_0x079C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x07E8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0808[] = {
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0814[] = {
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dNessMainMotion_0x0808),
};

u32 dNessMainMotion_0x0820[] = {
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x082C[] = {
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dNessMainMotion_0x0820),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0000) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0860[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0064) /* extern */,
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0894[] = {
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x00C8) /* extern */,
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x08D0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x012C) /* extern */,
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 262143),
	ftMotionCommandWait(25),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x08F8[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x01A0) /* extern */,
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0910[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4) /* extern */,
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0934[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x0248) /* extern */,
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x096C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0) /* extern */,
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0988[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0324) /* extern */,
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x09A0[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378) /* extern */,
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x09C4[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x03CC) /* extern */,
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x09EC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430) /* extern */,
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0A08[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 8),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0494) /* extern */,
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0A24[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 16),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x04F8) /* extern */,
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0A54[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 28),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x055C) /* extern */,
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0A88[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 10),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0) /* extern */,
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0AA8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0AB8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0AC8[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0634) /* extern */,
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dNessMainMotion_0x0AC8),
};

u32 dNessMainMotion_0x0AE8[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dNessMainMotion_0x0AE8),
	ftMotionCommandEffect(127, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoiceNessDamage),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dNessMainMotion_0x0AE8),
	ftMotionCommandGoto(dNessMainMotion_0x0AE8),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0B6C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0B74[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoiceNessFuraFura),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandLoopBegin(12),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dNessMainMotion_0x0B74),
};

u32 dNessMainMotion_0x0BA4[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoiceNessFuraSleep),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dNessMainMotion_0x0BA4),
	0xFFFFFFFF,
	0x00000008,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	0xFFFFFFFF,
	0x00000008,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
};

u32 dNessMainMotion_0x0C04[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow(dNessMainMotion_0x0BA4 + 10),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
	0x00000034,
	0x00000010,
	0x0000002D,
	0x00000046,
	0x00000000,
	0x0000005A,
	0x00000000,
	0xFFFFFFFF,
	0x00000008,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
};

u32 dNessMainMotion_0x0C84[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow(dNessMainMotion_0x0C04 + 18),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandMakeAttackColl(0, 0, 30, 10, 0, 0, 300, 0, 0, 0, 361, 80, 0, 3, 1, 2, 0, 10),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandEffect(30, 41, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetTexturePartID(0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
	0x00000034,
	0x00000010,
	0x0000002D,
	0x00000046,
	0x00000000,
	0x0000005A,
	0x00000000,
	0xFFFFFFFF,
	0x00000008,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
};

u32 dNessMainMotion_0x0D70[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow(dNessMainMotion_0x0C84 + 45),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandMakeAttackColl(0, 0, 30, 10, 0, 0, 300, 0, 0, 0, 361, 80, 0, 3, 1, 2, 0, 10),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandEffect(30, 41, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandSetTexturePartID(0),
	ftMotionPlayFGM(nSYAudioFGMLightSwingLw1),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E24[] = {
	ftMotionCommandSubroutine(0x06AC) /* extern */,
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E30[] = {
	ftMotionCommandSubroutine(0x06C4) /* extern */,
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E3C[] = {
	ftMotionCommandSubroutine(0x06CC) /* extern */,
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E48[] = {
	ftMotionCommandSubroutine(dNessMainMotion_0x01C8 + 5),
	ftMotionCommandSubroutine(0x06F0) /* extern */,
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E5C[] = {
	ftMotionCommandSubroutine(dNessMainMotion_0x01C8 + 5),
	ftMotionCommandSubroutine(0x070C) /* extern */,
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E70[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(3),
	ftMotionPlayVoice(nSYAudioVoiceNessAppeal),
	ftMotionCommandWait(20),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E90[] = {
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

u32 dNessMainMotion_0x0ED8[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(3),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 16, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
#else
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 16, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(1, 0, 15, 2, 1, 0, 180, 0, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
#else
	ftMotionCommandMakeAttackColl(1, 0, 15, 2, 1, 0, 180, 0, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0F20[] = {
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

u32 dNessMainMotion_0x0F74[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 280, 0, 140, 120, 361, 100, 0, 3, 1, 2, 0, 16),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 9, 1, 0, 250, 0, 140, 120, 361, 100, 0, 3, 1, 2, 0, 10),
	ftMotionCommandWait(14),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0FCC[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 25, 11, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 11, 1, 0, 230, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1008[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 25, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 10, 1, 0, 230, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1044[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 25, 9, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 9, 1, 0, 230, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1080[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetHitStatusPartID(12, 3),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 10, 8, 1, 0, 370, 0, 0, 0, 96, 40, 0, 3, 0, 1, 0, 70),
#else
	ftMotionCommandMakeAttackColl(0, 0, 10, 7, 1, 0, 370, 0, 0, 0, 100, 40, 0, 3, 0, 1, 0, 80),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(1, 0, 16, 8, 1, 0, 370, 0, 0, 0, 96, 40, 0, 3, 0, 1, 0, 70),
#else
	ftMotionCommandMakeAttackColl(1, 0, 16, 7, 1, 0, 370, 0, 0, 0, 100, 40, 0, 3, 0, 1, 0, 80),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(15),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x10C8[] = {
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
	0x00000002,
	0x00000000,
	0x00000000,
	0x43160000,
	0x00000000,
	0x43960000,
	0x43960000,
	0x43960000,
	0x000003E8,
};

u32 dNessMainMotion_0x1138[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(17, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 17, 20, 1, 0, 200, 0, 280, 0, 361, 67, 0, 3, 0, 2, 7, 70),
#else
	ftMotionCommandMakeAttackColl(0, 0, 17, 18, 1, 0, 200, 0, 280, 0, 361, 65, 0, 3, 0, 2, 7, 70),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(1, 0, 17, 20, 1, 0, 180, 0, 60, 0, 361, 67, 0, 3, 0, 2, 7, 70),
#else
	ftMotionCommandMakeAttackColl(1, 0, 17, 18, 1, 0, 180, 0, 60, 0, 361, 65, 0, 3, 0, 2, 7, 70),
#endif
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x11A8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(30, 0),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 100, 100, 100),
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

u32 dNessMainMotion_0x122C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(nSYAudioFGMExplodeS),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(30, 0),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLinkSpecialNShoot),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 100, 100, 100),
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

u32 dNessMainMotion_0x127C[] = {
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

u32 dNessMainMotion_0x1314[] = {
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

u32 dNessMainMotion_0x1360[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1384[] = {
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

u32 dNessMainMotion_0x13F4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1410[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusPartID(12, 3),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 12, 17, 1, 0, 380, 0, 100, 0, 85, 120, 0, 3, 0, 2, 0, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 12, 15, 1, 0, 350, 0, 100, 0, 85, 110, 0, 3, 0, 2, 0, 10),
#endif
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1454[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 320, 0, -30, 30, 934, 120, 0, 3, 0, 2, 0, 10),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 300, 0, -30, 30, 934, 120, 0, 3, 0, 2, 0, 0),
	ftMotionCommandWait(13),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1494[] = {
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x14AC[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x14B8[] = {
	ftMotionCommandGoto(dNessMainMotion_0x14AC),
	ftMotionPlayFGM(nSYAudioFGMBurnL),
	ftMotionCommandEffect(0, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 29, 0, 0, 180, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterNessAppear, 0),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(36),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandMakeRumble(20, 7),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, 7, 0, 0, 100, 0, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1520[] = {
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1524[] = {
	ftMotionCommandGoto(dNessMainMotion_0x1520),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionPlayVoice(nSYAudioVoiceNessSpecialN),
	ftMotionCommandEffect(0, 41, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 31, 0, 0, 150, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x158C[] = {
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(nSYAudioFGMNessPSI),
	ftMotionPlayVoice(nSYAudioVoiceNessSpecialN),
	ftMotionCommandEffect(0, 41, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x15E8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayVoice(nSYAudioVoiceNessSpecialHi),
	ftMotionCommandEffect(0, 41, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandPlayLoopSFXStoreInfo(nSYAudioFGMNessPKThunderLoop),
	ftMotionCommandEffect(0, 31, 0, 0, 150, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1638[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetColAnim(nGMColAnimFighterNessSpecialHiHold, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1654[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dNessMainMotion_0x165C[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandMakeAttackColl(0, 0, 0, 35, 1, 2, 400, 0, 100, 0, 361, 100, 0, 3, 0, 2, 4, 50),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterNessSpecialHiJibaku, 0),
	ftMotionPlayVoice(nSYAudioVoiceNessDamage),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayFGM(nSYAudioVoicePublicGaspM),
	ftMotionCommandEffect(0, 17, 0, 0, 90, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
	ftMotionCommandGoto(0x05AD057A),
};
#else
u32 dNessMainMotion_0x165C[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandMakeAttackColl(0, 0, 0, 30, 1, 2, 300, 0, 100, 0, 361, 84, 0, 3, 0, 2, 4, 40),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterNessSpecialHiJibaku, 0),
	ftMotionPlayVoice(nSYAudioVoiceNessDamage),
	ftMotionPlayFGM(nSYAudioFGMCaptainSpecialNPunch),
	ftMotionPlayFGM(nSYAudioVoicePublicGaspM),
	ftMotionCommandEffect(0, 17, 0, 0, 90, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dNessMainMotion_0x16B0[] = {
	ftMotionCommandGoto(dNessMainMotion_0x15E8),
	ftMotionCommandGoto(dNessMainMotion_0x1638),
	ftMotionCommandGoto(dNessMainMotion_0x1654),
	0x00000000,
	0x00000001,
	0x00000000,
	0x43960000,
	0x43430000,
	0x00000000,
	0x43C80000,
	0x43C80000,
};
#else
u32 dNessMainMotion_0x16B0[] = {
	ftMotionCommandGoto(dNessMainMotion_0x15E8),
	ftMotionCommandGoto(dNessMainMotion_0x1638),
	ftMotionCommandGoto(dNessMainMotion_0x1654),
	ftMotionCommandGoto(dNessMainMotion_0x165C),
	0x00000000,
	0x00000001,
	0x00000000,
	0x43960000,
	0x43430000,
	0x00000000,
};
#endif

u32 dNessMainMotion_0x16E8[] = {
#if defined(REGION_JP)
	ftMotionCommandStopLoopSFX(63438848),
#else
	ftMotionCommandStopLoopSFX(64421888),
#endif
#if defined(REGION_JP)
	ftMotionCommandEnd(),
#else
	ftMotionCommandStopLoopSFX(64421888),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeRumble(0, 9),
#else
	ftMotionCommandStopLoopSFX(64421888),
#endif
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
#else
	ftMotionCommandEnd(),
#endif
};

u32 dNessMainMotion_0x16F8[] = {
#if defined(REGION_JP)
	ftMotionCommandEffect(0, 71, 0, 0, 120, 0, 0, 0, 0),
#else
	ftMotionCommandMakeRumble(0, 9),
#endif
#if defined(REGION_JP)
	ftMotionCommandPlayLoopSFXStoreInfo(nSYAudioFGMNessSpecialLwStart),
#else
	ftMotionCommandSetSlopeContour(3),
#endif
#if defined(REGION_JP)
	ftMotionCommandEnd(),
#else
	ftMotionCommandEffect(0, 71, 0, 0, 120, 0, 0, 0, 0),
#endif
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
#else
	ftMotionCommandPlayLoopSFXStoreInfo(nSYAudioFGMNessSpecialLwStart),
#endif
#if defined(REGION_JP)
	ftMotionCommandSetTexturePartID(2),
#else
	ftMotionCommandEnd(),
#endif
};

u32 dNessMainMotion_0x1718[] = {
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(nGMColAnimFighterNessSpecialLwHold, 0),
#else
	ftMotionCommandSetSlopeContour(3),
#endif
#if defined(REGION_JP)
	ftMotionCommandEnd(),
#else
	ftMotionCommandSetTexturePartID(2),
#endif
#if defined(REGION_JP)
	ftMotionCommandMakeRumble(0, 10),
#else
	ftMotionCommandSetColAnim(nGMColAnimFighterNessSpecialLwHold, 0),
#endif
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
#else
	ftMotionCommandEnd(),
#endif
};

u32 dNessMainMotion_0x1728[] = {
#if defined(REGION_JP)
	ftMotionPlayFGM(nSYAudioFGMCharacterUnk1),
#else
	ftMotionCommandMakeRumble(0, 10),
#endif
#if defined(REGION_JP)
	ftMotionPlayFGM(nSYAudioVoicePublicAbsorb),
#else
	ftMotionCommandSetSlopeContour(3),
#endif
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(nGMColAnimFighterNessSpecialLwHit, 0),
#else
	ftMotionPlayFGM(nSYAudioFGMCharacterUnk1),
#endif
#if defined(REGION_JP)
	ftMotionCommandEffect(0, 19, 0, 0, 0, -120, 0, 0, 0),
#else
	ftMotionPlayFGM(nSYAudioVoicePublicAbsorb),
#endif
#if defined(REGION_JP)
	ftMotionCommandEffect(8, 27, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandSetColAnim(nGMColAnimFighterNessSpecialLwHit, 0),
#endif
#if defined(REGION_JP)
	ftMotionCommandLoopBegin(14),
#else
	ftMotionCommandEffect(0, 19, 0, 0, 0, -120, 0, 0, 0),
#endif
#if defined(REGION_JP)
	ftMotionCommandEffect(0, 74, 0, 0, 0, 0, 200, 200, 200),
#else
	ftMotionCommandEffect(8, 27, 0, 0, 0, 0, 0, 0, 0),
#endif
#if defined(REGION_JP)
	ftMotionCommandWait(1),
#else
	ftMotionCommandLoopBegin(14),
#endif
#if defined(REGION_JP)
	ftMotionCommandLoopEnd(),
#else
	ftMotionCommandEffect(0, 74, 0, 0, 0, 0, 200, 200, 200),
#endif
#if defined(REGION_JP)
	ftMotionCommandSetFlag1(1),
#else
	ftMotionCommandWait(1),
#endif
#if defined(REGION_JP)
	ftMotionCommandEnd(),
#else
	ftMotionCommandLoopEnd(),
#endif
#if defined(REGION_JP)
	ftMotionCommandSetSlopeContour(3),
#else
	ftMotionCommandSetFlag1(1),
#endif
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dNessMainMotion_0x1780[] = {
	ftMotionCommandGoto(0x05E305BC),
};
#else
u32 dNessMainMotion_0x1780[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dNessMainMotion_0x1788[] = {
	ftMotionCommandGoto(dNessMainMotion_0x16F8),
	ftMotionCommandGoto(dNessMainMotion_0x1718),
	ftMotionCommandGoto(dNessMainMotion_0x1728),
};
#else
u32 dNessMainMotion_0x1788[] = {
	ftMotionCommandGoto(dNessMainMotion_0x16F8),
	ftMotionCommandGoto(dNessMainMotion_0x1718),
	ftMotionCommandGoto(dNessMainMotion_0x1728),
	ftMotionCommandGoto(dNessMainMotion_0x1780),
	0x00000000,
	0x00000000,
};
#endif

