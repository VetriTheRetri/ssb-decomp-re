/* ftMotionCommand script data for relocData file 242 (PikachuMainMotion) */
/* File size: US 5984 bytes (0x1760) / JP 5968 bytes (0x1750) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <gm/gmsound.h>
#include <gm/gmdef.h>
u32 dPikachuMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandReturn(),
};

u32 dPikachuMainMotion_0x0010[] = {
	ftMotionCommandSubroutine(dPikachuMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dPikachuMainMotion_0x0000),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(dPikachuMainMotion_0x0000),
	ftMotionCommandWait(16),
	ftMotionCommandSubroutine(dPikachuMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dPikachuMainMotion_0x0000),
	ftMotionCommandWait(120),
	ftMotionCommandGoto(dPikachuMainMotion_0x0010),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x005C[] = {
	ftMotionPlayFGM(nSYAudioFGMPikachuDash),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0080[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMPikachuFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMPikachuFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dPikachuMainMotion_0x0080),
	ftMotionPlayFGM(nSYAudioFGMGroundBrakeGrind),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x00D8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x00E4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0118[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0128[] = {
	ftMotionPlayFGM(nSYAudioFGMInflateJump7),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0140[] = {
	ftMotionPlayFGM(nSYAudioFGMInflateJump2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0158[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0160[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMPikachuLanding),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandWait(5),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0184[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMPikachuLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(5),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x01A8[] = {
	ftMotionPlayVoice(nSYAudioVoicePikachuOttotto),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x01B0[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip8),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x01B8[] = {
	ftMotionPlayFGM(nSYAudioFGMCharacterUnkZip8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x01CC[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandReturn(),
};

u32 dPikachuMainMotion_0x01D8[] = {
	ftMotionCommandSubroutine(dPikachuMainMotion_0x01CC),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x01E4[] = {
	ftMotionCommandSubroutine(dPikachuMainMotion_0x01CC),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x01F8[] = {
	ftMotionPlayFGM(nSYAudioFGMPikachuLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0210[] = {
	ftMotionCommandSubroutine(dPikachuMainMotion_0x0000),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0228[] = {
	ftMotionCommandSubroutine(dPikachuMainMotion_0x0000),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0240[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0288[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x0240),
};

u32 dPikachuMainMotion_0x0290[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dPikachuMainMotion_0x02B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x02C8[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x02B0),
};

u32 dPikachuMainMotion_0x02D0[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandSubroutine(dPikachuMainMotion_0x0290),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x02E0[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x02D0),
	ftMotionCommandGoto(dPikachuMainMotion_0x02D0),
	ftMotionCommandGoto(dPikachuMainMotion_0x02D0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 6, 0, 0, 300, 0, 150, 300, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandMakeAttackColl(0, 0, 0, 6, 0, 0, 300, 0, 150, -300, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0354[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 23, 6, 1, 0, 260, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandMakeAttackColl(2, 0, 23, 6, 1, 0, 190, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x03B0[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 42, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoicePikachuSmash2),
	ftMotionPlayFGM(nSYAudioFGMHeavySwing1),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x03EC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 42, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoicePikachuSmash2),
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x042C[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x03EC),
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

u32 dPikachuMainMotion_0x0470[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x04A8[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x04BC[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x04D4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x04DC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x04E4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x04EC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x04F4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x04FC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0504[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x050C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 180, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 6, 0, 0, 210, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0578[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0584[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 6, 0, 0, 300, 0, 180, 300, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x05D8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x05E0[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0604[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x060C[] = {
	ftMotionPlayFGM(nSYAudioFGMEscape),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(35),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0630[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x063C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0648[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag2(16904112),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0658[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0674[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0690[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPikachuMainMotion_0x0674),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x06B8[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x06D4[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x06F4[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPikachuMainMotion_0x06D4),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0720[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0740[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x075C[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dPikachuMainMotion_0x0740),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0784[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x07A0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x07C0[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dPikachuMainMotion_0x07A0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x07EC[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x080C[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0818[] = {
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dPikachuMainMotion_0x080C),
};

u32 dPikachuMainMotion_0x0824[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0830[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPikachuMainMotion_0x0824),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0870[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x08A4[] = {
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(14),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x08DC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0910[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0934[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0958[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterBat, 40),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0988[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(24),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x09AC[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x09D0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x09F4[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0A18[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(24),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0A3C[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 6),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0A64[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 13),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0A94[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 28),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0AC8[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(nGMColAnimFighterStarRod, 30),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(24),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0AF0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0B00[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0B10[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dPikachuMainMotion_0x0B10),
};

u32 dPikachuMainMotion_0x0B30[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dPikachuMainMotion_0x0B30),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(nSYAudioVoicePikachuDeadUp),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dPikachuMainMotion_0x0B30),
	ftMotionCommandGoto(dPikachuMainMotion_0x0B30),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0BBC[] = {
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0BC0[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionPlayVoice(nSYAudioVoicePikachuFuraFura),
	ftMotionCommandLoopBegin(24),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dPikachuMainMotion_0x0BC0),
};

u32 dPikachuMainMotion_0x0BF0[] = {
	ftMotionPlayInterruptableVoice(nSYAudioVoicePikachuFuraSleep),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 220, 260, 220),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dPikachuMainMotion_0x0BF0),
};

FTThrowHitDesc dPikachuMainMotion_0x0C18[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dPikachuMainMotion_0x0C50[] = {
	ftMotionCommandSetThrow((u32)dPikachuMainMotion_0x0C18),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 290, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(nSYAudioFGMCatch),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dPikachuMainMotion_0x0C88[] = {
	{ 52, 12, 45, 70, 0, 80, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dPikachuMainMotion_0x0CC0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetThrow((u32)dPikachuMainMotion_0x0C88),
	ftMotionPlayVoice(nSYAudioVoicePikachuSmash1),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(20),
	ftMotionPlayFGM(nSYAudioFGMLightSwingL),
	ftMotionCommandEffect(0, 31, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dPikachuMainMotion_0x0D1C[] = {
	{ 52, 18, 45, 80, 0, 60, 2 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dPikachuMainMotion_0x0D54[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetThrow((u32)dPikachuMainMotion_0x0D1C),
	ftMotionPlayVoice(nSYAudioVoicePikachuSmash1),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandSetColAnim(nGMColAnimFighterPikachuAttackS4, 30),
	ftMotionCommandWaitAsync(12),
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric4),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(11),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 200, 200, 200),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0DD0[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0DDC[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0DE8[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0DF4[] = {
	ftMotionCommandSubroutine(dPikachuMainMotion_0x01CC),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0E08[] = {
	ftMotionCommandSubroutine(dPikachuMainMotion_0x01CC),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0E1C[] = {
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(nSYAudioVoicePikachuAppeal),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0E34[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 2, 1, 0, 260, 0, 65, 15, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 5, 2, 0, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 2, 1, 0, 260, 0, 65, 15, 361, 50, 0, 3, 0, 0, 0, 4),
	ftMotionCommandMakeAttackColl(1, 0, 5, 2, 0, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 4),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingS),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0E80[] = {
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(4),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 0, 270, 0, 70, 15, 361, 70, 0, 3, 0, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 5, 12, 1, 0, 180, 0, 20, 0, 361, 70, 0, 3, 0, 2, 0, 20),
#else
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 0, 270, 0, 70, 15, 361, 70, 0, 3, 0, 2, 0, 40),
	ftMotionCommandMakeAttackColl(1, 0, 5, 12, 1, 0, 180, 0, 20, 0, 361, 70, 0, 3, 0, 2, 0, 40),
#endif
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(nSYAudioFGMPikachuDownBounce),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(35),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0F00[] = {
	ftMotionCommandWaitAsync(5),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 28, 9, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandMakeAttackColl(1, 0, 23, 9, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandMakeAttackColl(2, 0, 5, 9, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
#else
	ftMotionCommandMakeAttackColl(0, 0, 28, 11, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandMakeAttackColl(1, 0, 23, 11, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandMakeAttackColl(2, 0, 5, 11, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0F50[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 28, 10, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 23, 10, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 5, 10, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0FA0[] = {
	ftMotionCommandWaitAsync(5),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 28, 10, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 23, 10, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 5, 10, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
#else
	ftMotionCommandMakeAttackColl(0, 0, 28, 9, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(1, 0, 23, 9, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
	ftMotionCommandMakeAttackColl(2, 0, 5, 9, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 6),
#endif
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0FF0[] = {
	ftMotionCommandWaitAsync(5),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 29, 11, 1, 0, 160, 0, 0, 0, 87, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 29, 11, 1, 0, 300, 115, 180, -60, 87, 100, 0, 3, 0, 2, 1, 10),
#else
	ftMotionCommandMakeAttackColl(0, 0, 29, 11, 1, 0, 160, 0, 0, 0, 87, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 29, 11, 1, 0, 300, 115, 180, -60, 87, 100, 0, 3, 0, 1, 1, 10),
#endif
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x103C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 29, 12, 1, 0, 160, 0, 0, 0, 35, 100, 0, 3, 0, 2, 1, 12),
	ftMotionCommandMakeAttackColl(1, 0, 29, 12, 1, 0, 280, 110, 170, -65, 35, 100, 0, 3, 0, 2, 1, 12),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x108C[] = {
	ftMotionCommandWaitAsync(21),
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric4),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(3),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x10B0[] = {
	ftMotionCommandSetParallelScript(dPikachuMainMotion_0x108C),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(nGMColAnimFighterPikachuAttackS4, 45),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandWait(1),
	ftMotionCommandSetTexturePartID(1048585),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 0, 2, 160, 0, 100, 200, 361, 100, 0, 3, 0, 2, 4, 20),
	ftMotionCommandWaitAsync(25),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 0, 2, 280, 0, 100, 200, 361, 100, 0, 3, 0, 2, 4, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 18, 0, 2, 320, 0, 100, 600, 361, 100, 0, 3, 0, 2, 4, 20),
#else
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 0, 2, 240, 0, 100, 200, 361, 100, 0, 3, 0, 2, 4, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 18, 0, 2, 260, 0, 100, 425, 361, 100, 0, 3, 0, 2, 4, 20),
	ftMotionCommandMakeAttackColl(2, 0, 0, 18, 0, 2, 320, 0, 100, 750, 361, 100, 0, 3, 0, 2, 4, 20),
#endif
	ftMotionCommandLoopBegin(8),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandWait(1),
	ftMotionCommandSetTexturePartID(1048585),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWait(13),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1170[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandMakeAttackColl(0, 0, 29, 18, 1, 0, 160, 0, 0, 0, 95, 100, 0, 3, 0, 2, 1, 40),
	ftMotionCommandMakeAttackColl(1, 0, 29, 18, 1, 0, 310, 115, 180, -60, 95, 100, 0, 3, 0, 2, 1, 40),
	ftMotionCommandEffect(29, 31, 0, 110, 170, -70, 100, 100, 100),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 29, 9, 1, 0, 200, 0, 0, 0, 90, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 29, 9, 1, 0, 230, 115, 180, -60, 90, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1200[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(26, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 26, 16, 1, 0, 270, 100, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 21, 16, 1, 0, 270, 100, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(2, 0, 5, 16, 1, 0, 180, 0, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(11),
	ftMotionCommandEffect(26, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 26, 13, 1, 0, 270, 100, 0, 0, 361, 110, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 21, 13, 1, 0, 270, 100, 0, 0, 361, 110, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(2, 0, 5, 13, 1, 0, 180, 0, 0, 0, 361, 110, 0, 3, 0, 2, 1, 30),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(4),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x12E8[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 26, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 21, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 0, 26, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 21, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(18),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1380[] = {
	ftMotionCommandSetColAnim(nGMColAnimFighterPikachuAttackS4, 26),
	ftMotionCommandWaitAsync(7),
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric2),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 2, 390, 0, 65, 15, 361, 100, 30, 3, 0, 1, 4, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 3, 1, 2, 340, 0, 0, 0, 361, 100, 30, 3, 0, 1, 4, 0),
	ftMotionCommandLoopBegin(6),
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
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x13EC[] = {
	ftMotionPlayFGM(nSYAudioFGMPikachuLanding),
	ftMotionCommandMakeAttackColl(0, 0, 11, 6, 1, 2, 360, 0, 65, 15, 361, 100, 0, 3, 0, 1, 4, 30),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1420[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 21, 16, 1, 0, 340, 100, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 5, 16, 1, 0, 300, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingL),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 21, 14, 1, 0, 310, 40, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 14, 1, 0, 270, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1490[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 29, 10, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 29, 10, 1, 0, 280, 96, 150, -50, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(nSYAudioFGMLightSwingM),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x14DC[] = {
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 31, 0, 0, 200, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterPikachuAttackS4, 25),
	ftMotionCommandWaitAsync(8),
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric3),
	ftMotionCommandMakeAttackColl(0, 0, 11, 13, 1, 2, 330, 0, 65, 15, 361, 100, 0, 3, 0, 2, 4, 20),
	ftMotionCommandMakeAttackColl(1, 0, 5, 13, 1, 2, 280, 0, 0, 0, 361, 100, 0, 3, 0, 2, 4, 20),
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1534[] = {
	ftMotionPlayFGM(nSYAudioFGMPikachuDeadSlam),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1574[] = {
	ftMotionPlayFGM(nSYAudioFGMPikachuLanding),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x158C[] = {
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayFGM(nSYAudioFGMMBallOpen),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x15A4[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x158C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionPlayVoice(nSYAudioVoicePikachuSpecialN),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x15F0[] = {
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionPlayVoice(nSYAudioVoicePikachuSpecialN),
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric5),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWait(60),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x162C[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(nSYAudioVoicePikachuSpecialLw),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1644[] = {
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMPikachuSpecialLwThunder),
	ftMotionCommandWait(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1668[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 70, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(nGMColAnimFighterPikachuSpecialLwHit, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 16, 0, 2, 700, 0, 300, 0, 361, 60, 0, 3, 2, 2, 4, 100),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(30),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x16E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(nGMColAnimFighterPikachuSpecialLwEnd, 0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x16F0[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x162C),
	ftMotionCommandGoto(dPikachuMainMotion_0x1644),
	ftMotionCommandGoto(dPikachuMainMotion_0x1668),
	ftMotionCommandGoto(dPikachuMainMotion_0x16E4),
};

u32 dPikachuMainMotion_0x1710[] = {
	ftMotionPlayFGM(nSYAudioFGMPikachuElectric1),
	ftMotionPlayVoice(nSYAudioVoicePikachuSpecialHi),
	ftMotionCommandEffect(0, 31, 0, 0, 200, 0, 60, 60, 60),
#if !defined(REGION_JP)
	ftMotionCommandSetColAnim(nGMColAnimFighterPikachuSpecialHi, 0),
#endif
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1730[] = {
	ftMotionCommandEffect(0, 71, 0, 0, 200, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWait(9),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1750[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x1710),
	ftMotionCommandGoto(dPikachuMainMotion_0x1730),
};

