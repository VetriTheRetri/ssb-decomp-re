/* ftMotionCommand script data for relocData file 212 (DonkeyMainMotion) */
/* File size: 7376 bytes (0x1CD0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>

u32 dDonkeyMainMotion_0x0000[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0008[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0010[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0018[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0020[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionPlayFGM(116),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-120, 0),
	ftMotionCommandEffectS4(60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0048[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(105),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(50, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0048),
	ftMotionPlayFGM(128),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0084[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0094[] = {
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(100, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x00C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x00D4[] = {
	ftMotionPlayFGM(94),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x00EC[] = {
	ftMotionPlayFGM(83),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 100),
	ftMotionCommandEffectS4(100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0110[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(72),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x012C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(72),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0148[] = {
	ftMotionPlayFGM(630),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0150[] = {
	ftMotionPlayFGM(630),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0164[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandReturn(),
};

u32 dDonkeyMainMotion_0x016C[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0178[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandSetDamageThrownS1(),
	ftMotionCommandSetDamageThrownS2(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x018C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(72),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01A8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01B8[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01C0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01D0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01DC[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x01E8[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(-1, 34, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0228[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x01E8),
};

u32 dDonkeyMainMotion_0x0230[] = {
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dDonkeyMainMotion_0x0250[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0268[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x0250),
};

u32 dDonkeyMainMotion_0x0270[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0230),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0280[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x0270),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0270),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0270),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 16, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(220, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 14, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(220, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackCollS1(0, 0, 16, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(220, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 14, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(220, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0320[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 21, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(210, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 21, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(210, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackCollS1(0, 0, 21, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(210, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 21, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(210, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x03A4[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffectS1(0, 44, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayVoice(327),
	ftMotionPlayFGM(17),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x03E4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffectS1(0, 44, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayVoice(327),
	ftMotionPlayFGM(11),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0428[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x03E4),
	ftMotionCommandWaitAsync(4),
	ftMotionPlayFGM(11),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0460[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionPlayFGM(11),
	ftMotionCommandEffectS1(0, 15, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x048C[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(19),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x049C[] = {
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04B8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04C0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04C8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04D0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04D8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04E0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x04E8[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(326),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandMakeAttackCollS1(0, 0, 5, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(330, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, -80),
	ftMotionCommandEffectS3(-180, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0548[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionPlayVoice(326),
	ftMotionCommandWait(9),
	ftMotionCommandMakeAttackCollS1(0, 0, 10, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(12),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05B4[] = {
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05B8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05C0[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(100, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05E4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05EC[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(100, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0610[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0620[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0630[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0640[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0660[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0680[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0660),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x06B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x06D0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x06F8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dDonkeyMainMotion_0x06D0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0734[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x075C[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0778[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dDonkeyMainMotion_0x075C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x07A0[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x07BC[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x07E0[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dDonkeyMainMotion_0x07BC),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0814[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0838[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0848[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0838),
};

u32 dDonkeyMainMotion_0x0858[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0878[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0858),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0000), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x08B4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0064), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x08DC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x00C8), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0910[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x012C), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0944[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x01A0), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0960[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x01F4), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0978[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0248), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x09A4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x02B0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x09C8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0324), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x09E4[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0378), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x09FC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x03CC), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0A1C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0430), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0A40[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(75, 8),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0494), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0A60[] = {
	ftMotionCommandSetColAnim(75, 13),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x04F8), /* extern */
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0A84[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetColAnim(75, 24),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x055C), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0AB4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 22),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x05C0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0ADC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0AEC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0B00[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B00),
};

u32 dDonkeyMainMotion_0x0B24[] = {
	ftMotionCommandEffectS1(-1, 34, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(200, 200),
	ftMotionCommandEffectS4(200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffectS1(0, 10, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(200, 200),
	ftMotionCommandEffectS4(200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandEffectS1(-1, 34, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(-1, 34, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0BB4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0BBC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(331),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandEffectS1(0, 40, 0),
	ftMotionCommandEffectS2(0, 180),
	ftMotionCommandEffectS3(0, 380),
	ftMotionCommandEffectS4(380, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0BBC),
};

u32 dDonkeyMainMotion_0x0BEC[] = {
	ftMotionPlayInterruptableVoice(324),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffectS1(0, 90, 0),
	ftMotionCommandEffectS2(0, 150),
	ftMotionCommandEffectS3(0, 300),
	ftMotionCommandEffectS4(300, 300),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0BEC),
};

u32 dDonkeyMainMotion_0x0C14[] = {
	0xFFFFFFFF,
	0x00000002,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	0xFFFFFFFF,
	0x00000002,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0C14),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackCollS1(0, 0, 29, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(330, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(200, 250),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0C94[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffectS1(29, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffectS1(0, 22, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayFGM(9),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0CF0[] = {
	0x00000034,
	0x00000008,
	0x0000002D,
	0x00000050,
	0x00000000,
	0x00000046,
	0x00000000,
	0xFFFFFFFF,
	0x00000002,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0CF0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffectS1(29, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(18),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0D88[] = {
	0x00000034,
	0x00000012,
	0x0000002D,
	0x00000046,
	0x00000000,
	0x00000050,
	0x00000000,
	0xFFFFFFFF,
	0x00000009,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0D88),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffectS1(29, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(18),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E1C[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E28[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E34[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E40[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E54[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(325),
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

u32 dDonkeyMainMotion_0x0EA0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackCollS1(0, 0, 9, 4, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 140),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 9, 4, 1, 0),
	ftMotionCommandMakeAttackCollS2(210, -40),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0EE8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackCollS1(0, 0, 15, 4, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 140),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 4, 1, 0),
	ftMotionCommandMakeAttackCollS2(210, -40),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0F28[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackCollS1(0, 0, 21, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(290, 90),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(100, 100, 120, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 21, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(290, 90),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(100, 100, 120, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 1, 0),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0F7C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 14, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, -30),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0FD0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 14, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, -30),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1024[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 14, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, -30),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1078[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 8, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(100, 130, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 9, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(250, 190),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(100, 130, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(20),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x10C8[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWait(5),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(40, 80, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 180),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(40, 80, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1110[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(90, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 21, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 21, 1, 0),
	ftMotionCommandMakeAttackCollS2(320, 240),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandMakeAttackCollS1(2, 0, 14, 21, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, -30),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1194[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(90, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 21, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 21, 1, 0),
	ftMotionCommandMakeAttackCollS2(320, 240),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandMakeAttackCollS1(2, 0, 14, 21, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, -30),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1218[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(90, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 20, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 20, 1, 0),
	ftMotionCommandMakeAttackCollS2(320, 240),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandMakeAttackCollS1(2, 0, 14, 20, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, -30),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x129C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(90, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 19, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 19, 1, 0),
	ftMotionCommandMakeAttackCollS2(320, 240),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandMakeAttackCollS1(2, 0, 14, 19, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, -30),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1320[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(90, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 19, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 19, 1, 0),
	ftMotionCommandMakeAttackCollS2(320, 240),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandMakeAttackCollS1(2, 0, 14, 19, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, -30),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x13A4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWait(4),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(180, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(9, 31, 0),
	ftMotionCommandEffectS2(180, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(10),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandSetHitStatusPartID(15, 3),
	ftMotionCommandSetHitStatusPartID(9, 3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackCollS1(0, 0, 15, 21, 1, 0),
	ftMotionCommandMakeAttackCollS2(480, 180),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(90, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(4, 2, 0, 40),
	ftMotionCommandMakeAttackCollS1(1, 0, 9, 21, 1, 0),
	ftMotionCommandMakeAttackCollS2(480, 180),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(90, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(4, 2, 0, 40),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayFGM(2),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(20),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1458[] = {
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 26, 19, 1, 0),
	ftMotionCommandMakeAttackCollS2(210, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(60, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandMakeAttackCollS1(1, 0, 21, 19, 1, 0),
	ftMotionCommandMakeAttackCollS2(210, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(60, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandMakeAttackCollS1(2, 0, 26, 19, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 180),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(60, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandMakeAttackCollS1(3, 0, 21, 19, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 180),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(60, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(26, 31, 0),
	ftMotionCommandEffectS2(180, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(21, 31, 0),
	ftMotionCommandEffectS2(180, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(54),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x150C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackCollS1(0, 0, 15, 15, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 120),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 9, 15, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 120),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 15, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 15, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 120),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 9, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 120),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandWait(22),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x15A4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackCollS1(0, 0, 15, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 220),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(-70, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 14, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandMakeAttackCollS1(2, 0, 8, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 20),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(16),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1604[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(72),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1620[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 15, 1, 0),
	ftMotionCommandMakeAttackCollS2(340, 0),
	ftMotionCommandMakeAttackCollS3(200, -370),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 15, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(140, -170),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(340, 0),
	ftMotionCommandMakeAttackCollS3(200, -370),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(140, -170),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandWait(22),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1690[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(72),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x16AC[] = {
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackCollS1(0, 0, 8, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 10),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(110, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 9, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(300, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(110, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(18),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x16F8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackCollS1(0, 0, 26, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(330, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(-90, 90, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 15),
	ftMotionCommandMakeAttackCollS1(1, 0, 21, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(330, 80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(-90, 90, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 15),
	ftMotionCommandMakeAttackCollS1(2, 0, 26, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, -80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(-90, 90, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 15),
	ftMotionCommandMakeAttackCollS1(3, 0, 21, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, -80),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(-90, 90, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(41),
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

u32 dDonkeyMainMotion_0x1788[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(72),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x17A4[] = {
	ftMotionCommandWaitAsync(56),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandEffectS1(0, 29, 0),
	ftMotionCommandEffectS2(0, 250),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 46, 0),
	ftMotionCommandEffectS2(0, 250),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayFGM(59),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x17DC[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x17A4),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-100, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x17FC[] = {
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1810[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(48, 0),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(179),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 90),
	ftMotionCommandEffectS3(-180, 0),
	ftMotionCommandEffectS4(90, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1810),
};

u32 dDonkeyMainMotion_0x1844[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(48, 0),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(179),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1844),
};

u32 dDonkeyMainMotion_0x1864[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetColAnim(49, 4),
	ftMotionCommandWait(7),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-100, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(2, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 14, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(340, 290),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(2, 2, 0, 0),
	ftMotionPlayFGM(177),
	ftMotionPlayVoice(329),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x18C4[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x1864),
};

u32 dDonkeyMainMotion_0x18CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(49, 16),
	ftMotionCommandWait(9),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 36, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(12, 2, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 14, 36, 1, 0),
	ftMotionCommandMakeAttackCollS2(340, 290),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(12, 2, 1, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 36, 1, 0),
	ftMotionCommandMakeAttackCollS2(50, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(12, 2, 1, 0),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 20, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-100, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(16, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 200),
	ftMotionCommandEffectS4(200, 0),
	ftMotionPlayFGM(176),
	ftMotionPlayVoice(329),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandEffectS1(16, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 200),
	ftMotionCommandEffectS4(200, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x197C[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x18CC),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(3),
	ftMotionPlayFGM(178),
	ftMotionCommandMakeAttackCollS1(0, 0, 8, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 100, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 14, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 100, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 0),
	ftMotionCommandEffectS1(0, 22, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandLoopBegin(5),
	ftMotionPlayFGM(178),
	ftMotionCommandMakeAttackCollS1(0, 0, 8, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 100, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 14, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 100, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 21, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 100),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 100, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetHitStatusPartAll(1),
};

u32 dDonkeyMainMotion_0x1A34[] = {
	ftMotionCommandLoopBegin(3),
	ftMotionPlayFGM(178),
	ftMotionCommandMakeAttackCollS1(0, 1, 8, 3, 1, 0),
	ftMotionCommandMakeAttackCollS2(140, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 0, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 1, 14, 3, 1, 0),
	ftMotionCommandMakeAttackCollS2(140, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 0, 0, 0),
	ftMotionCommandMakeAttackCollS1(2, 1, 21, 3, 1, 0),
	ftMotionCommandMakeAttackCollS2(80, 100),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1A8C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(3),
	ftMotionPlayFGM(178),
	ftMotionCommandMakeAttackCollS1(0, 0, 8, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 100, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 14, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 100, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 0),
	ftMotionCommandEffectS1(0, 22, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusPartID(15, 2),
	ftMotionCommandSetHitStatusPartID(9, 2),
	ftMotionCommandLoopBegin(5),
	ftMotionPlayFGM(178),
	ftMotionCommandMakeAttackCollS1(0, 0, 8, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 100, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 14, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 100, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 21, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 100),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 100, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1A34),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandWait(2),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1B64[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 10, 0, 0),
	ftMotionCommandMakeAttackCollS2(400, 0),
	ftMotionCommandMakeAttackCollS3(0, -500),
	ftMotionCommandMakeAttackCollS4(90, 100, 150, 2),
	ftMotionCommandMakeAttackCollS5(-4, 2, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 10, 0, 0),
	ftMotionCommandMakeAttackCollS2(400, 0),
	ftMotionCommandMakeAttackCollS3(0, -100),
	ftMotionCommandMakeAttackCollS4(90, 100, 150, 2),
	ftMotionCommandMakeAttackCollS5(-4, 2, 1, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 0, 10, 0, 0),
	ftMotionCommandMakeAttackCollS2(400, 0),
	ftMotionCommandMakeAttackCollS3(0, 300),
	ftMotionCommandMakeAttackCollS4(90, 100, 150, 2),
	ftMotionCommandMakeAttackCollS5(-4, 2, 1, 0),
	ftMotionCommandMakeAttackCollS1(3, 0, 0, 10, 0, 0),
	ftMotionCommandMakeAttackCollS2(400, 0),
	ftMotionCommandMakeAttackCollS3(0, 700),
	ftMotionCommandMakeAttackCollS4(90, 100, 150, 2),
	ftMotionCommandMakeAttackCollS5(-4, 2, 1, 0),
	ftMotionPlayFGM(175),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 22, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 10, 0, 0),
	ftMotionCommandMakeAttackCollS2(400, 0),
	ftMotionCommandMakeAttackCollS3(0, -500),
	ftMotionCommandMakeAttackCollS4(90, 100, 150, 2),
	ftMotionCommandMakeAttackCollS5(-4, 2, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 10, 0, 0),
	ftMotionCommandMakeAttackCollS2(400, 0),
	ftMotionCommandMakeAttackCollS3(0, -100),
	ftMotionCommandMakeAttackCollS4(90, 100, 150, 2),
	ftMotionCommandMakeAttackCollS5(-4, 2, 1, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 0, 10, 0, 0),
	ftMotionCommandMakeAttackCollS2(400, 0),
	ftMotionCommandMakeAttackCollS3(0, 300),
	ftMotionCommandMakeAttackCollS4(90, 100, 150, 2),
	ftMotionCommandMakeAttackCollS5(-4, 2, 1, 0),
	ftMotionCommandMakeAttackCollS1(3, 0, 0, 10, 0, 0),
	ftMotionCommandMakeAttackCollS2(400, 0),
	ftMotionCommandMakeAttackCollS3(0, 700),
	ftMotionCommandMakeAttackCollS4(90, 100, 150, 2),
	ftMotionCommandMakeAttackCollS5(-4, 2, 1, 0),
	ftMotionPlayFGM(175),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 22, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1B64),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1CA8[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1CB8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1CC4[] = {
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1CC8[] = {
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x1CCC[] = {
	ftMotionCommandEnd(),
};
