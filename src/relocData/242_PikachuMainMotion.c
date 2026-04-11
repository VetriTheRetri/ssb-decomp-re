/* ftMotionCommand script data for relocData file 242 (PikachuMainMotion) */
/* File size: 5984 bytes (0x1760) */

#include "relocdata_types.h"
#include <ft/ftdef.h>

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
	ftMotionPlayFGM(125),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-120, 0),
	ftMotionCommandEffectS4(60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0080[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(112),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(112),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dPikachuMainMotion_0x0080),
	ftMotionPlayFGM(128),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x00D8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x00E4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(120, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
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
	ftMotionPlayFGM(101),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0140[] = {
	ftMotionPlayFGM(90),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 100),
	ftMotionCommandEffectS4(100, 100),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0158[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0160[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(79),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(5),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0184[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(79),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(5),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x01A8[] = {
	ftMotionPlayVoice(549),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x01B0[] = {
	ftMotionPlayFGM(637),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x01B8[] = {
	ftMotionPlayFGM(637),
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
	ftMotionCommandSetDamageThrownS1(),
	ftMotionCommandSetDamageThrownS2(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x01F8[] = {
	ftMotionPlayFGM(79),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
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
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0288[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x0240),
};

u32 dPikachuMainMotion_0x0290[] = {
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
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
	ftMotionPlayFGM(11),
	ftMotionCommandSubroutine(dPikachuMainMotion_0x0290),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x02E0[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x02D0),
	ftMotionCommandGoto(dPikachuMainMotion_0x02D0),
	ftMotionCommandGoto(dPikachuMainMotion_0x02D0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(300, 0),
	ftMotionCommandMakeAttackCollS3(150, 300),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(300, 0),
	ftMotionCommandMakeAttackCollS3(150, -300),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0354[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 23, 6, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 80, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandMakeAttackCollS1(2, 0, 23, 6, 1, 0),
	ftMotionCommandMakeAttackCollS2(190, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 80, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x03B0[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffectS1(0, 42, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayVoice(538),
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

u32 dPikachuMainMotion_0x03EC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffectS1(0, 42, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayVoice(538),
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

u32 dPikachuMainMotion_0x042C[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x03EC),
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

u32 dPikachuMainMotion_0x0470[] = {
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

u32 dPikachuMainMotion_0x04A8[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(19),
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
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 5, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 28, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(210, 0),
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

u32 dPikachuMainMotion_0x0578[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0584[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(300, 0),
	ftMotionCommandMakeAttackCollS3(180, 300),
	ftMotionCommandMakeAttackCollS4(361, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x05D8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x05E0[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(100, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
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
	ftMotionPlayFGM(11),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(100, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
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
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0674[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0690[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPikachuMainMotion_0x0674),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x06B8[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x06D4[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x06F4[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPikachuMainMotion_0x06D4),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0720[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0740[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x075C[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dPikachuMainMotion_0x0740),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0784[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x07A0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x07C0[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dPikachuMainMotion_0x07A0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x07EC[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
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
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0000), /* extern */
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
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0064), /* extern */
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
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x00C8), /* extern */
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
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x012C), /* extern */
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
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x01A0), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0934[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x01F4), /* extern */
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
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0248), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0988[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x02B0), /* extern */
	ftMotionCommandWait(24),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x09AC[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0324), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x09D0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0378), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x09F4[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x03CC), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0A18[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0430), /* extern */
	ftMotionCommandWait(24),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0A3C[] = {
	ftMotionCommandSetColAnim(75, 6),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0494), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0A64[] = {
	ftMotionCommandSetColAnim(75, 13),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x04F8), /* extern */
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0A94[] = {
	ftMotionCommandSetColAnim(75, 28),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x055C), /* extern */
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
	ftMotionCommandSetColAnim(75, 30),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x05C0), /* extern */
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
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dPikachuMainMotion_0x0B10),
};

u32 dPikachuMainMotion_0x0B30[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
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
	ftMotionCommandGoto(dPikachuMainMotion_0x0B30),
	ftMotionCommandEffectS1(-1, 34, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayVoice(542),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dPikachuMainMotion_0x0B30),
	ftMotionCommandGoto(dPikachuMainMotion_0x0B30),
	ftMotionCommandSetTexturePartID(6),
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

u32 dPikachuMainMotion_0x0BBC[] = {
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0BC0[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionPlayVoice(543),
	ftMotionCommandLoopBegin(24),
	ftMotionCommandEffectS1(0, 40, 0),
	ftMotionCommandEffectS2(0, 130),
	ftMotionCommandEffectS3(0, 200),
	ftMotionCommandEffectS4(260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dPikachuMainMotion_0x0BC0),
};

u32 dPikachuMainMotion_0x0BF0[] = {
	ftMotionPlayInterruptableVoice(551),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandEffectS1(0, 90, 0),
	ftMotionCommandEffectS2(0, 130),
	ftMotionCommandEffectS3(0, 220),
	ftMotionCommandEffectS4(260, 220),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dPikachuMainMotion_0x0BF0),
};

u32 dPikachuMainMotion_0x0C18[] = {
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
	ftMotionCommandSetThrow((u32)dPikachuMainMotion_0x0C18),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackCollS1(0, 0, 30, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(290, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0C88[] = {
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
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetThrow((u32)dPikachuMainMotion_0x0C88),
	ftMotionPlayVoice(537),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(20),
	ftMotionPlayFGM(41),
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

u32 dPikachuMainMotion_0x0D1C[] = {
	0x00000034,
	0x00000012,
	0x0000002D,
	0x00000050,
	0x00000000,
	0x0000003C,
	0x00000002,
	0xFFFFFFFF,
	0x00000008,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetThrow((u32)dPikachuMainMotion_0x0D1C),
	ftMotionPlayVoice(537),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandSetColAnim(56, 30),
	ftMotionCommandWaitAsync(12),
	ftMotionPlayFGM(228),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandLoopBegin(11),
	ftMotionCommandEffectS1(30, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 200),
	ftMotionCommandEffectS4(200, 200),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 22, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0DD0[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0DDC[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0DE8[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0DF4[] = {
	ftMotionCommandSubroutine(dPikachuMainMotion_0x01CC),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0E08[] = {
	ftMotionCommandSubroutine(dPikachuMainMotion_0x01CC),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0E1C[] = {
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(536),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0E34[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackCollS1(0, 0, 11, 2, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 0),
	ftMotionCommandMakeAttackCollS3(65, 15),
	ftMotionCommandMakeAttackCollS4(361, 50, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 0, 0, 4),
	ftMotionCommandMakeAttackCollS1(1, 0, 5, 2, 0, 0),
	ftMotionCommandMakeAttackCollS2(160, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 50, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 0, 0, 4),
	ftMotionCommandPlayFGMStoreInfo(43),
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
	ftMotionCommandMakeAttackCollS1(0, 0, 11, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 0),
	ftMotionCommandMakeAttackCollS3(70, 15),
	ftMotionCommandMakeAttackCollS4(361, 70, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 40),
	ftMotionCommandMakeAttackCollS1(1, 0, 5, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(20, 0),
	ftMotionCommandMakeAttackCollS4(361, 70, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 40),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(305),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(35),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0F00[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackCollS1(0, 0, 28, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 8),
	ftMotionCommandMakeAttackCollS1(1, 0, 23, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 8),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 8),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0F50[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackCollS1(0, 0, 28, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 6),
	ftMotionCommandMakeAttackCollS1(1, 0, 23, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 6),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 6),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0FA0[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackCollS1(0, 0, 28, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 6),
	ftMotionCommandMakeAttackCollS1(1, 0, 23, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 6),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 6),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x0FF0[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackCollS1(0, 0, 29, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(87, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 29, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(300, 115),
	ftMotionCommandMakeAttackCollS3(180, -60),
	ftMotionCommandMakeAttackCollS4(87, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x103C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackCollS1(0, 0, 29, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(35, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 12),
	ftMotionCommandMakeAttackCollS1(1, 0, 29, 12, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 110),
	ftMotionCommandMakeAttackCollS3(170, -65),
	ftMotionCommandMakeAttackCollS4(35, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 12),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x108C[] = {
	ftMotionCommandWaitAsync(21),
	ftMotionPlayFGM(228),
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
	ftMotionCommandSetColAnim(56, 45),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandSetTexturePartID(1048584),
	ftMotionCommandWait(1),
	ftMotionCommandSetTexturePartID(1048585),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 18, 0, 2),
	ftMotionCommandMakeAttackCollS2(160, 0),
	ftMotionCommandMakeAttackCollS3(100, 200),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 4, 20),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 18, 0, 2),
	ftMotionCommandMakeAttackCollS2(240, 0),
	ftMotionCommandMakeAttackCollS3(100, 200),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 4, 20),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 18, 0, 2),
	ftMotionCommandMakeAttackCollS2(260, 0),
	ftMotionCommandMakeAttackCollS3(100, 425),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 4, 20),
	ftMotionCommandMakeAttackCollS1(2, 0, 0, 18, 0, 2),
	ftMotionCommandMakeAttackCollS2(320, 0),
	ftMotionCommandMakeAttackCollS3(100, 750),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 4, 20),
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
	ftMotionCommandMakeAttackCollS1(0, 0, 29, 18, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(95, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 40),
	ftMotionCommandMakeAttackCollS1(1, 0, 29, 18, 1, 0),
	ftMotionCommandMakeAttackCollS2(310, 115),
	ftMotionCommandMakeAttackCollS3(180, -60),
	ftMotionCommandMakeAttackCollS4(95, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 40),
	ftMotionCommandEffectS1(29, 31, 0),
	ftMotionCommandEffectS2(110, 170),
	ftMotionCommandEffectS3(-70, 100),
	ftMotionCommandEffectS4(100, 100),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-180, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackCollS1(0, 0, 29, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(90, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 29, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(230, 115),
	ftMotionCommandMakeAttackCollS3(180, -60),
	ftMotionCommandMakeAttackCollS4(90, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1200[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffectS1(26, 31, 0),
	ftMotionCommandEffectS2(120, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 26, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 100),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandMakeAttackCollS1(1, 0, 21, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 100),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(11),
	ftMotionCommandEffectS1(26, 31, 0),
	ftMotionCommandEffectS2(120, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 26, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 100),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 110, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandMakeAttackCollS1(1, 0, 21, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 100),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 110, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 110, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandEffectS1(0, 15, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x12E8[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackCollS1(0, 0, 26, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 10),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 15),
	ftMotionCommandMakeAttackCollS1(1, 0, 21, 14, 1, 0),
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
	ftMotionCommandMakeAttackCollS1(0, 0, 26, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 10),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 21, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 10),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 11, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandWait(18),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1380[] = {
	ftMotionCommandSetColAnim(56, 26),
	ftMotionCommandWaitAsync(7),
	ftMotionPlayFGM(226),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackCollS1(0, 0, 11, 3, 1, 2),
	ftMotionCommandMakeAttackCollS2(390, 0),
	ftMotionCommandMakeAttackCollS3(65, 15),
	ftMotionCommandMakeAttackCollS4(361, 100, 30, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 4, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 5, 3, 1, 2),
	ftMotionCommandMakeAttackCollS2(340, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 30, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 4, 0),
	ftMotionCommandLoopBegin(6),
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
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x13EC[] = {
	ftMotionPlayFGM(79),
	ftMotionCommandMakeAttackCollS1(0, 0, 11, 6, 1, 2),
	ftMotionCommandMakeAttackCollS2(360, 0),
	ftMotionCommandMakeAttackCollS3(65, 15),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 4, 30),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1420[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackCollS1(0, 0, 21, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(340, 100),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 15),
	ftMotionCommandMakeAttackCollS1(1, 0, 5, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(300, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 21, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(310, 40),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 5, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1490[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackCollS1(0, 0, 29, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 29, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 96),
	ftMotionCommandMakeAttackCollS3(150, -50),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x14DC[] = {
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 200),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetColAnim(56, 25),
	ftMotionCommandWaitAsync(8),
	ftMotionPlayFGM(227),
	ftMotionCommandMakeAttackCollS1(0, 0, 11, 13, 1, 2),
	ftMotionCommandMakeAttackCollS2(330, 0),
	ftMotionCommandMakeAttackCollS3(65, 15),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 4, 20),
	ftMotionCommandMakeAttackCollS1(1, 0, 5, 13, 1, 2),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 4, 20),
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1534[] = {
	ftMotionPlayFGM(294),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 22, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1574[] = {
	ftMotionPlayFGM(79),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x158C[] = {
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayFGM(139),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x15A4[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x158C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionPlayVoice(540),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-180, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x15F0[] = {
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionPlayVoice(540),
	ftMotionPlayFGM(229),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-180, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(60),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x162C[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(541),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1644[] = {
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandSetTexturePartID(1048583),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(232),
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
	ftMotionCommandEffectS1(0, 70, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetColAnim(60, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 16, 0, 2),
	ftMotionCommandMakeAttackCollS2(700, 0),
	ftMotionCommandMakeAttackCollS3(300, 0),
	ftMotionCommandMakeAttackCollS4(361, 60, 0, 3),
	ftMotionCommandMakeAttackCollS5(2, 2, 4, 100),
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
	ftMotionCommandSetColAnim(61, 0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x16F0[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x162C),
	ftMotionCommandGoto(dPikachuMainMotion_0x1644),
	ftMotionCommandGoto(dPikachuMainMotion_0x1668),
	ftMotionCommandGoto(dPikachuMainMotion_0x16E4),
};

u32 dPikachuMainMotion_0x1710[] = {
	ftMotionPlayFGM(225),
	ftMotionPlayVoice(547),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 200),
	ftMotionCommandEffectS3(0, 60),
	ftMotionCommandEffectS4(60, 60),
	ftMotionCommandSetColAnim(58, 0),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1730[] = {
	ftMotionCommandEffectS1(0, 71, 0),
	ftMotionCommandEffectS2(0, 200),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWait(9),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPikachuMainMotion_0x1750[] = {
	ftMotionCommandGoto(dPikachuMainMotion_0x1710),
	ftMotionCommandGoto(dPikachuMainMotion_0x1730),
};
