/* ftMotionCommand script data for relocData file 202 (MarioMainMotion) */
/* File size: 6560 bytes (0x19A0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>

u32 dMarioMainMotion_0x0000[] = {
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

u32 dMarioMainMotion_0x0024[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dMarioMainMotion_0x0000),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(dMarioMainMotion_0x0000),
	ftMotionCommandWait(10),
	ftMotionCommandSubroutine(dMarioMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dMarioMainMotion_0x0024),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(121),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-120, 0),
	ftMotionCommandEffectS4(60, 0),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x007C[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(110),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(110),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMarioMainMotion_0x007C),
	ftMotionPlayFGM(128),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x00D0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x00E0[] = {
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(120, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0110[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0120[] = {
	ftMotionPlayVoice(435),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0138[] = {
	ftMotionPlayVoice(436),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 100),
	ftMotionCommandEffectS4(100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x015C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(77),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0178[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(77),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0194[] = {
	ftMotionPlayFGM(635),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x019C[] = {
	ftMotionPlayFGM(635),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x01B0[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandReturn(),
};

u32 dMarioMainMotion_0x01B8[] = {
	ftMotionCommandSubroutine(dMarioMainMotion_0x01B0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x01C4[] = {
	ftMotionCommandSubroutine(dMarioMainMotion_0x01B0),
	ftMotionCommandSetDamageThrownS1(),
	ftMotionCommandSetDamageThrownS2(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x01D8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(77),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x01F4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0200[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x020C[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(-1, 33, 0),
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

u32 dMarioMainMotion_0x024C[] = {
	ftMotionCommandGoto(dMarioMainMotion_0x020C),
};

u32 dMarioMainMotion_0x0254[] = {
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dMarioMainMotion_0x0274[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x028C[] = {
	ftMotionCommandGoto(dMarioMainMotion_0x0274),
};

u32 dMarioMainMotion_0x0294[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandSubroutine(dMarioMainMotion_0x0254),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x02A4[] = {
	ftMotionCommandGoto(dMarioMainMotion_0x0294),
	ftMotionCommandGoto(dMarioMainMotion_0x0294),
	ftMotionCommandGoto(dMarioMainMotion_0x0294),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 12, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(200, 0),
	ftMotionCommandMakeAttackCollS3(100, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackCollS1(0, 0, 12, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(200, 0),
	ftMotionCommandMakeAttackCollS3(100, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(14),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0324[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(180, 70),
	ftMotionCommandMakeAttackCollS3(-50, 60),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(180, 70),
	ftMotionCommandMakeAttackCollS3(-50, 60),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0380[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffectS1(0, 43, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayVoice(435),
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

u32 dMarioMainMotion_0x03BC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffectS1(0, 43, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayVoice(435),
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

u32 dMarioMainMotion_0x03FC[] = {
	ftMotionCommandGoto(dMarioMainMotion_0x03BC),
	ftMotionPlayFGM(11),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 120),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(100, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0440[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 120),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffectS1(0, 15, 0),
	ftMotionCommandEffectS2(-100, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0478[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(19),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0488[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x049C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x04A4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x04AC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x04B4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x04BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x04C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x04CC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x04DC[] = {
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(429),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 27, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 5, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(150, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, -80),
	ftMotionCommandEffectS3(-180, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0548[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0550[] = {
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(429),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackCollS1(0, 0, 5, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(150, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 27, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(280, 80),
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
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x05BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x05C4[] = {
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

u32 dMarioMainMotion_0x05E8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x05F0[] = {
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

u32 dMarioMainMotion_0x0614[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0620[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x062C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0638[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0654[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0670[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dMarioMainMotion_0x0654),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0698[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x06B4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x06D4[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dMarioMainMotion_0x06B4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0700[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0720[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x073C[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dMarioMainMotion_0x0720),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0764[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0780[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x07A0[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dMarioMainMotion_0x0780),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x07CC[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x07EC[] = {
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x07F8[] = {
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dMarioMainMotion_0x07EC),
};

u32 dMarioMainMotion_0x0804[] = {
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0810[] = {
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dMarioMainMotion_0x0804),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0000), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0844[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0064), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0878[] = {
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x00C8), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x08B0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x012C), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x08DC[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x01A0), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x08F4[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x01F4), /* extern */
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0918[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0248), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0950[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x02B0), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x096C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0324), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0984[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0378), /* extern */
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x09A8[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x03CC), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x09D0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0430), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x09EC[] = {
	ftMotionCommandSetColAnim(75, 8),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0494), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0A08[] = {
	ftMotionCommandSetColAnim(75, 16),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x04F8), /* extern */
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0A38[] = {
	ftMotionCommandSetColAnim(75, 28),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x055C), /* extern */
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0A6C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 10),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x05C0), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0A8C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0A9C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0AAC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dMarioMainMotion_0x0AAC),
};

u32 dMarioMainMotion_0x0AD0[] = {
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(120, 200),
	ftMotionCommandEffectS4(200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffectS1(0, 10, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(120, 200),
	ftMotionCommandEffectS4(200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
	ftMotionCommandEffectS1(-1, 34, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayVoice(440),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0B54[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0B5C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(434),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandEffectS1(0, 40, 0),
	ftMotionCommandEffectS2(0, 130),
	ftMotionCommandEffectS3(0, 200),
	ftMotionCommandEffectS4(260, 200),
	ftMotionCommandWait(20),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dMarioMainMotion_0x0B5C),
};

u32 dMarioMainMotion_0x0B8C[] = {
	ftMotionPlayInterruptableVoice(324),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffectS1(0, 90, 0),
	ftMotionCommandEffectS2(0, 130),
	ftMotionCommandEffectS3(0, 200),
	ftMotionCommandEffectS4(260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dMarioMainMotion_0x0B8C),
};

u32 dMarioMainMotion_0x0BB4[] = {
	0xFFFFFFFF,
	0x00000006,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	0xFFFFFFFF,
	0x00000006,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	ftMotionCommandSetThrow((u32)dMarioMainMotion_0x0BB4),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-120, 0),
	ftMotionCommandEffectS4(60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackCollS1(0, 0, 28, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(290, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0C30[] = {
	0x00000034,
	0x0000000C,
	0x0000002D,
	0x00000046,
	0x00000000,
	0x00000050,
	0x00000000,
	0xFFFFFFFF,
	0x00000006,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	ftMotionCommandSetThrow((u32)dMarioMainMotion_0x0C30),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(14),
	ftMotionPlayVoice(429),
	ftMotionPlayFGM(18),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 200),
	ftMotionCommandEffectS3(280, 0),
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
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0CC4[] = {
	0x00000037,
	0x00000010,
	0x0000002D,
	0x00000046,
	0x00000000,
	0x00000046,
	0x00000000,
	0xFFFFFFFF,
	0x00000008,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	ftMotionCommandSetThrow((u32)dMarioMainMotion_0x0CC4),
	ftMotionPlayVoice(432),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(260, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayFGM(303),
	ftMotionCommandWait(8),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandMakeAttackCollS1(0, 0, 10, 10, 0, 0),
	ftMotionCommandMakeAttackCollS2(300, 120),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 80, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 0, 30),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandLoopBegin(2),
	ftMotionPlayFGM(43),
	ftMotionCommandWait(14),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 200),
	ftMotionCommandEffectS3(-280, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayFGM(18),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DB0[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DBC[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DC8[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DD4[] = {
	ftMotionCommandSubroutine(dMarioMainMotion_0x01B0),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DE8[] = {
	ftMotionCommandSubroutine(dMarioMainMotion_0x01B0),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DFC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeRumble(60, 7),
	ftMotionCommandSetColAnim(40, 60),
	ftMotionPlayFGM(212),
	ftMotionCommandWaitAsync(120),
	ftMotionCommandMakeRumble(60, 7),
	ftMotionPlayFGM(213),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0E24[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackCollS1(0, 0, 10, 2, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 50, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 0, 0, 8),
	ftMotionCommandMakeAttackCollS1(1, 0, 9, 2, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 50, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0E68[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackCollS1(0, 0, 16, 2, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 16),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(70, 50, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 0, 0, 8),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 2, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(70, 50, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0EAC[] = {
	ftMotionPlayVoice(429),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 4, 0, 0),
	ftMotionCommandMakeAttackCollS2(150, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 27, 4, 0, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(2),
	ftMotionCommandSetAttackCollDamage(0, 4),
	ftMotionCommandSetAttackCollDamage(1, 4),
	ftMotionCommandSetAttackCollSize(0, 180),
	ftMotionCommandSetAttackCollSize(1, 280),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0F00[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackCollS1(0, 0, 5, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(250, 40),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 1, 16),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 5, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(250, 40),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 1, 10),
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0F58[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackCollS1(0, 0, 24, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 20),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 25, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(230, 90),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0F94[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackCollS1(0, 0, 24, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 20),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 25, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(230, 90),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0FD0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackCollS1(0, 0, 24, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 20),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 25, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(230, 90),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x100C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(86, 150, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(290, 60),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(86, 150, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x104C[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-140, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 24, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 20),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 25, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 140),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x109C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(60, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 18, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 18, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 60),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1104[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(60, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 18, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 18, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 50),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x116C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(60, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 17, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 17, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 50),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x11D4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(60, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 50),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x123C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(60, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 14, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 50),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 30),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x12A4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 300),
	ftMotionCommandEffectS3(-100, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandMakeAttackCollS1(0, 0, 12, 19, 1, 0),
	ftMotionCommandMakeAttackCollS2(380, 0),
	ftMotionCommandMakeAttackCollS3(100, 0),
	ftMotionCommandMakeAttackCollS4(85, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 26),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x12FC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffectS1(25, 31, 0),
	ftMotionCommandEffectS2(120, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 17, 1, 0),
	ftMotionCommandMakeAttackCollS2(170, 0),
	ftMotionCommandMakeAttackCollS3(0, 20),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 20),
	ftMotionCommandMakeAttackCollS1(1, 0, 25, 17, 1, 0),
	ftMotionCommandMakeAttackCollS2(210, 120),
	ftMotionCommandMakeAttackCollS3(0, 50),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 20),
	ftMotionCommandMakeAttackCollS1(2, 0, 20, 17, 1, 0),
	ftMotionCommandMakeAttackCollS2(170, 0),
	ftMotionCommandMakeAttackCollS3(0, 20),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 20),
	ftMotionCommandMakeAttackCollS1(3, 0, 20, 17, 1, 0),
	ftMotionCommandMakeAttackCollS2(210, 120),
	ftMotionCommandMakeAttackCollS3(0, 50),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 20),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(15),
	ftMotionCommandEffectS1(0, 15, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(7),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x13A8[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 10),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 15),
	ftMotionCommandMakeAttackCollS1(1, 0, 20, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 10),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 15),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 10),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 20, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 10),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandWait(26),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1440[] = {
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, -30),
	ftMotionCommandMakeAttackCollS3(45, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 25, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 80),
	ftMotionCommandMakeAttackCollS3(30, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, -30),
	ftMotionCommandMakeAttackCollS3(45, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 25, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 80),
	ftMotionCommandMakeAttackCollS3(30, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandWait(12),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x14B0[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x14C8[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, -30),
	ftMotionCommandMakeAttackCollS3(45, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 25, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(290, 80),
	ftMotionCommandMakeAttackCollS3(30, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, -30),
	ftMotionCommandMakeAttackCollS3(45, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 25, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 80),
	ftMotionCommandMakeAttackCollS3(30, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1538[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1550[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(80, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 27, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(250, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(80, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(70, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 27, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(250, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(70, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandWait(7),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x15C0[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x15D8[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackCollS1(0, 0, 25, 3, 1, 0),
	ftMotionCommandMakeAttackCollS2(350, -30),
	ftMotionCommandMakeAttackCollS3(45, 0),
	ftMotionCommandMakeAttackCollS4(-70, 100, 30, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 25, 3, 1, 0),
	ftMotionCommandMakeAttackCollS2(350, 50),
	ftMotionCommandMakeAttackCollS3(30, 0),
	ftMotionCommandMakeAttackCollS4(-70, 100, 30, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandLoopBegin(7),
	ftMotionCommandPlayFGMStoreInfo(219),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPlayFGMStoreInfo(219),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1640[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1658[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(214),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x166C[] = {
	ftMotionCommandGoto(dMarioMainMotion_0x1658),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-180, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetSlopeContour(3),
};

u32 dMarioMainMotion_0x1688[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(39, 0),
	ftMotionCommandEffectS1(16, 31, 0),
	ftMotionCommandEffectS2(60, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayFGM(215),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x16B4[] = {
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandGoto(dMarioMainMotion_0x1688),
};

u32 dMarioMainMotion_0x16CC[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandMakeAttackCollS1(0, 0, 12, 5, 1, 4),
	ftMotionCommandMakeAttackCollS2(380, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(70, 100, 110, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 2, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 5, 1, 4),
	ftMotionCommandMakeAttackCollS2(260, 160),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(90, 100, 110, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 2, 0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(80, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayFGM(217),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandMakeAttackCollS1(0, 0, 12, 1, 1, 4),
	ftMotionCommandMakeAttackCollS2(310, 0),
	ftMotionCommandMakeAttackCollS3(0, 60),
	ftMotionCommandMakeAttackCollS4(75, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 2, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 1, 1, 4),
	ftMotionCommandMakeAttackCollS2(260, 150),
	ftMotionCommandMakeAttackCollS3(0, 60),
	ftMotionCommandMakeAttackCollS4(80, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 2, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeAttackCollS1(0, 0, 12, 3, 1, 4),
	ftMotionCommandMakeAttackCollS2(450, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(50, 170, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 2, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 3, 1, 4),
	ftMotionCommandMakeAttackCollS2(200, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(50, 170, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 2, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x17A8[] = {
	ftMotionCommandGoto(dMarioMainMotion_0x16CC),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x17B4[] = {
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(432),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(140, 0),
	ftMotionCommandMakeAttackCollS3(300, 150),
	ftMotionCommandMakeAttackCollS4(180, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 70),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(140, 0),
	ftMotionCommandMakeAttackCollS3(300, -150),
	ftMotionCommandMakeAttackCollS4(180, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 70),
	ftMotionCommandMakeAttackCollS1(2, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(90, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(218),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 0),
	ftMotionCommandMakeAttackCollS3(280, 150),
	ftMotionCommandMakeAttackCollS4(180, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 70),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 0),
	ftMotionCommandMakeAttackCollS3(280, -150),
	ftMotionCommandMakeAttackCollS4(180, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 70),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 0),
	ftMotionCommandMakeAttackCollS3(300, 150),
	ftMotionCommandMakeAttackCollS4(90, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 120),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 0),
	ftMotionCommandMakeAttackCollS3(300, -150),
	ftMotionCommandMakeAttackCollS4(90, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 120),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1884[] = {
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(432),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(140, 0),
	ftMotionCommandMakeAttackCollS3(300, 150),
	ftMotionCommandMakeAttackCollS4(180, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 70),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(140, 0),
	ftMotionCommandMakeAttackCollS3(300, -150),
	ftMotionCommandMakeAttackCollS4(180, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 70),
	ftMotionCommandMakeAttackCollS1(2, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(90, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(218),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(140, 0),
	ftMotionCommandMakeAttackCollS3(260, 150),
	ftMotionCommandMakeAttackCollS4(180, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 70),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(140, 0),
	ftMotionCommandMakeAttackCollS3(260, -150),
	ftMotionCommandMakeAttackCollS4(180, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 70),
	ftMotionCommandMakeAttackCollS1(2, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 0),
	ftMotionCommandMakeAttackCollS3(80, 0),
	ftMotionCommandMakeAttackCollS4(-90, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandMakeAttackCollS1(3, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(100, 0),
	ftMotionCommandMakeAttackCollS3(420, 0),
	ftMotionCommandMakeAttackCollS4(-90, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 70),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 0),
	ftMotionCommandMakeAttackCollS3(300, 150),
	ftMotionCommandMakeAttackCollS4(90, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 120),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 0),
	ftMotionCommandMakeAttackCollS3(300, -150),
	ftMotionCommandMakeAttackCollS4(90, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 120),
	ftMotionCommandMakeAttackCollS1(2, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, 0),
	ftMotionCommandMakeAttackCollS3(80, 0),
	ftMotionCommandMakeAttackCollS4(-90, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 120),
	ftMotionCommandMakeAttackCollS1(3, 0, 0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(90, 0),
	ftMotionCommandMakeAttackCollS3(420, 0),
	ftMotionCommandMakeAttackCollS4(-90, 0, 1, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 120),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
