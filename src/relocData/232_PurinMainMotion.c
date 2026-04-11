/* ftMotionCommand script data for relocData file 232 (PurinMainMotion) */
/* File size: 6016 bytes (0x1780) */

#include "relocdata_types.h"
#include <ft/ftdef.h>

u32 dPurinMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandWait(3),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandWait(1),
	ftMotionCommandReturn(),
};

u32 dPurinMainMotion_0x0034[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWait(10),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dPurinMainMotion_0x0034),
	ftMotionPlayFGM(126),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-120, 0),
	ftMotionCommandEffectS4(60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0088[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(113),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(113),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dPurinMainMotion_0x0088),
	ftMotionPlayFGM(128),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x00E0[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x00EC[] = {
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(120, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x011C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x012C[] = {
	ftMotionPlayFGM(102),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0144[] = {
	ftMotionPlayFGM(91),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 100),
	ftMotionCommandEffectS4(100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0164[] = {
	ftMotionPlayFGM(91),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 100),
	ftMotionCommandEffectS4(100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0184[] = {
	ftMotionPlayFGM(91),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 100),
	ftMotionCommandEffectS4(100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x01A4[] = {
	ftMotionPlayFGM(91),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 100),
	ftMotionCommandEffectS4(100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x01C4[] = {
	ftMotionPlayFGM(91),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 100),
	ftMotionCommandEffectS4(100, 100),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x01DC[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-60, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x01F4[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x020C[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0210[] = {
	ftMotionPlayFGM(638),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0218[] = {
	ftMotionPlayFGM(638),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x022C[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
	ftMotionCommandReturn(),
};

u32 dPurinMainMotion_0x0238[] = {
	ftMotionCommandSubroutine(dPurinMainMotion_0x022C),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0244[] = {
	ftMotionCommandSubroutine(dPurinMainMotion_0x022C),
	ftMotionCommandSetDamageThrownS1(),
	ftMotionCommandSetDamageThrownS2(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0258[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0270[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0274[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x027C[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0280[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x028C[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0298[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetTexturePartID(1048582),
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
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x02E4[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x0298),
};

u32 dPurinMainMotion_0x02EC[] = {
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dPurinMainMotion_0x030C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0324[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x030C),
};

u32 dPurinMainMotion_0x032C[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandSubroutine(dPurinMainMotion_0x02EC),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x033C[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x032C),
	ftMotionCommandGoto(dPurinMainMotion_0x032C),
	ftMotionCommandGoto(dPurinMainMotion_0x032C),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 23, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(300, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackCollS1(0, 0, 23, 6, 0, 0),
	ftMotionCommandMakeAttackCollS2(300, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 90, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x03B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 10, 6, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 100),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 80, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackCollS1(2, 0, 28, 6, 1, 0),
	ftMotionCommandMakeAttackCollS2(190, 160),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 80, 3),
	ftMotionCommandMakeAttackCollS5(1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x040C[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffectS1(0, 43, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayVoice(559),
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

u32 dPurinMainMotion_0x0448[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffectS1(0, 43, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayVoice(559),
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

u32 dPurinMainMotion_0x0488[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x0448),
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

u32 dPurinMainMotion_0x04CC[] = {
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

u32 dPurinMainMotion_0x0504[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(19),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0510[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0520[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0528[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0530[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(10),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0540[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0548[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0550[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0558[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0568[] = {
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 28, 4, 0, 0),
	ftMotionCommandMakeAttackCollS2(180, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 28, 4, 0, 0),
	ftMotionCommandMakeAttackCollS2(150, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, -80),
	ftMotionCommandEffectS3(-180, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x05C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x05D4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 4, 0, 0),
	ftMotionCommandMakeAttackCollS2(300, 0),
	ftMotionCommandMakeAttackCollS3(180, 300),
	ftMotionCommandMakeAttackCollS4(361, 100, 100, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0628[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0630[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(100, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(40),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0654[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x065C[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(100, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(40),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0680[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x068C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(41),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x06A0[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x06AC[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x06C8[] = {
	ftMotionCommandWaitAsync(14),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x06E4[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPurinMainMotion_0x06C8),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x070C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0728[] = {
	ftMotionCommandWaitAsync(14),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0748[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPurinMainMotion_0x0728),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0774[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0794[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x07B0[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dPurinMainMotion_0x0794),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x07D8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x07F4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0814[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dPurinMainMotion_0x07F4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0840[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0860[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0874[] = {
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dPurinMainMotion_0x0860),
};

u32 dPurinMainMotion_0x0880[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0894[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPurinMainMotion_0x0880),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0000), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x08D4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0064), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0908[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x00C8), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0940[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(1),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x012C), /* extern */
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(21),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0974[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x01A0), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0998[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x01F4), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x09BC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0248), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x09F4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x02B0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0A18[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0324), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0A44[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0378), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0A70[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x03CC), /* extern */
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0A9C[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0430), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0AC8[] = {
	ftMotionCommandSetColAnim(75, 13),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0494), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0AF0[] = {
	ftMotionCommandSetColAnim(75, 17),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x04F8), /* extern */
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0B20[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 32),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x055C), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0B54[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 26),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x05C0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0B7C[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(1),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0B9C[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(1),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0BBC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dPurinMainMotion_0x0BBC),
};

u32 dPurinMainMotion_0x0BE4[] = {
	ftMotionCommandSetColAnim(43, 0),
	ftMotionCommandEffectS1(0, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(120, 200),
	ftMotionCommandEffectS4(200, 200),
	ftMotionCommandLoopBegin(10),
	ftMotionCommandEffectS1(0, 10, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(120, 200),
	ftMotionCommandEffectS4(200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dPurinMainMotion_0x0BE4),
	ftMotionCommandEffectS1(-1, 34, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionPlayVoice(562),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dPurinMainMotion_0x0BE4),
	ftMotionCommandGoto(dPurinMainMotion_0x0BE4),
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

u32 dPurinMainMotion_0x0C68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0C70[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(563),
	ftMotionCommandLoopBegin(120),
	ftMotionCommandEffectS1(0, 40, 0),
	ftMotionCommandEffectS2(0, 130),
	ftMotionCommandEffectS3(0, 240),
	ftMotionCommandEffectS4(240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dPurinMainMotion_0x0C70),
};

u32 dPurinMainMotion_0x0CA4[] = {
	ftMotionPlayInterruptableVoice(569),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffectS1(0, 90, 0),
	ftMotionCommandEffectS2(0, 130),
	ftMotionCommandEffectS3(0, 240),
	ftMotionCommandEffectS4(240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dPurinMainMotion_0x0CA4),
};

u32 dPurinMainMotion_0x0CD0[] = {
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
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetThrow((u32)dPurinMainMotion_0x0CD0),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-120, 0),
	ftMotionCommandEffectS4(60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackCollS1(0, 0, 29, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(240, 0),
	ftMotionCommandMakeAttackCollS3(0, -30),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 29, 1, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 0),
	ftMotionCommandMakeAttackCollS3(0, -160),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0D64[] = {
	0x00000037,
	0x0000000E,
	0x0000005A,
	0x00000032,
	0x00000000,
	0x0000005A,
	0x00000000,
	0xFFFFFFFF,
	0x00000006,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	ftMotionCommandSetThrow((u32)dPurinMainMotion_0x0D64),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(8),
	ftMotionPlayFGM(18),
	ftMotionCommandEffectS1(0, 41, 0),
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
	ftMotionCommandEffectS1(0, 41, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 200),
	ftMotionCommandEffectS4(0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffectS1(0, 41, 0),
	ftMotionCommandEffectS2(0, 300),
	ftMotionCommandEffectS3(0, 200),
	ftMotionCommandEffectS4(0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffectS1(0, 41, 0),
	ftMotionCommandEffectS2(0, 600),
	ftMotionCommandEffectS3(0, 200),
	ftMotionCommandEffectS4(0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffectS1(0, 41, 0),
	ftMotionCommandEffectS2(0, 900),
	ftMotionCommandEffectS3(0, 200),
	ftMotionCommandEffectS4(0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffectS1(0, 41, 0),
	ftMotionCommandEffectS2(0, 1200),
	ftMotionCommandEffectS3(0, 200),
	ftMotionCommandEffectS4(0, 200),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0E54[] = {
	0x00000034,
	0x00000010,
	0x0000002D,
	0x00000046,
	0x00000000,
	0x00000050,
	0x00000000,
	0xFFFFFFFF,
	0x00000008,
	0x00000169,
	0x00000064,
	0x00000000,
	0x00000000,
	0x00000000,
	ftMotionCommandSetThrow((u32)dPurinMainMotion_0x0E54),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandPlayFGMStoreInfo(18),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(19),
	ftMotionPlayFGM(10),
	ftMotionCommandEffectS1(29, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 15, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(150, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 22, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-280, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(-1, 33, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F00[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F0C[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F18[] = {
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F24[] = {
	ftMotionCommandSubroutine(dPurinMainMotion_0x022C),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F38[] = {
	ftMotionCommandSubroutine(dPurinMainMotion_0x022C),
	ftMotionCommandSubroutineS1(),
	ftMotionCommandSubroutineS2(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F4C[] = {
	ftMotionPlayVoice(557),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWait(10),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F78[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackCollS1(0, 0, 11, 3, 1, 0),
	ftMotionCommandMakeAttackCollS2(210, -50),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 50, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 0, 0, 8),
	ftMotionCommandMakeAttackCollS1(1, 0, 11, 3, 1, 0),
	ftMotionCommandMakeAttackCollS2(210, 70),
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

u32 dPurinMainMotion_0x0FBC[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackCollS1(0, 0, 15, 4, 1, 0),
	ftMotionCommandMakeAttackCollS2(210, -50),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(70, 50, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 8),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 4, 1, 0),
	ftMotionCommandMakeAttackCollS2(210, 70),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(70, 50, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0FFC[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1000[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x1000),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x100C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionPlayVoice(558),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 0),
	ftMotionCommandMakeAttackCollS3(150, 200),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 1, 10),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 8),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandWait(8),
	ftMotionCommandEffectS1(0, 11, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-120, 0),
	ftMotionCommandEffectS4(60, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1084[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackCollS1(0, 0, 23, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(250, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 5),
	ftMotionCommandMakeAttackCollS1(1, 0, 23, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(250, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x10C0[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackCollS1(0, 0, 23, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 5),
	ftMotionCommandMakeAttackCollS1(1, 0, 23, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x10FC[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackCollS1(0, 0, 23, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(250, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 5),
	ftMotionCommandMakeAttackCollS1(1, 0, 23, 8, 1, 0),
	ftMotionCommandMakeAttackCollS2(250, 150),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1138[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackCollS1(0, 0, 28, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(85, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 28, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(320, 140),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(85, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1174[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandMakeAttackCollS1(0, 0, 23, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(70, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 23, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(200, 140),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(70, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x11B4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackCollS1(0, 0, 23, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 23, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 140),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(1, 2, 1, 10),
	ftMotionCommandEffectS1(21, 31, 0),
	ftMotionCommandEffectS2(120, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-180, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(3),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandSetAttackCollDamage(1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x122C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 5, 18, 1, 0),
	ftMotionCommandMakeAttackCollS2(380, 0),
	ftMotionCommandMakeAttackCollS3(180, 0),
	ftMotionCommandMakeAttackCollS4(80, 130, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 22),
	ftMotionCommandMakeAttackCollS1(1, 0, 5, 18, 1, 0),
	ftMotionCommandMakeAttackCollS2(280, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(80, 130, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 22),
	ftMotionCommandEffectS1(26, 31, 0),
	ftMotionCommandEffectS2(110, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 19, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-180, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 5, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(380, 0),
	ftMotionCommandMakeAttackCollS3(180, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 5, 10, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x12B8[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusPartID(28, 3),
	ftMotionCommandSetHitStatusPartID(23, 3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackCollS1(0, 0, 28, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(40, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 20),
	ftMotionCommandMakeAttackCollS1(1, 0, 23, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 200),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(40, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 20),
	ftMotionCommandMakeAttackCollS1(2, 0, 5, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(160, 100),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(40, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 20),
	ftMotionCommandEffectS1(26, 31, 0),
	ftMotionCommandEffectS2(90, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(21, 31, 0),
	ftMotionCommandEffectS2(90, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandSetAttackCollDamage(1, 10),
	ftMotionCommandSetAttackCollDamage(2, 10),
	ftMotionCommandWait(16),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(34),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1364[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackCollS1(0, 0, 5, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandMakeAttackCollS1(1, 0, 23, 14, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 120),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 5, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(210, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 23, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(260, 120),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 10),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x13D4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, 0),
	ftMotionCommandMakeAttackCollS3(150, 220),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 0),
	ftMotionCommandMakeAttackCollS3(150, 100),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, 0),
	ftMotionCommandMakeAttackCollS3(150, 220),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 0),
	ftMotionCommandMakeAttackCollS3(150, 100),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1444[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x145C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackCollS1(0, 0, 26, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, -30),
	ftMotionCommandMakeAttackCollS3(45, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandMakeAttackCollS1(1, 0, 26, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 150),
	ftMotionCommandMakeAttackCollS3(30, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackCollS1(0, 0, 26, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(220, -30),
	ftMotionCommandMakeAttackCollS3(45, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 26, 9, 1, 0),
	ftMotionCommandMakeAttackCollS2(270, 150),
	ftMotionCommandMakeAttackCollS3(30, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 1, 0),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x14D0[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x14E8[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(40),
	ftMotionCommandMakeAttackCollS1(0, 0, 11, 16, 1, 0),
	ftMotionCommandMakeAttackCollS2(230, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(70, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(9),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1518[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 3, 1, 0),
	ftMotionCommandMakeAttackCollS2(360, 0),
	ftMotionCommandMakeAttackCollS3(-120, 100),
	ftMotionCommandMakeAttackCollS4(-90, 100, 30, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandMakeAttackCollS1(1, 0, 0, 3, 1, 0),
	ftMotionCommandMakeAttackCollS2(360, 0),
	ftMotionCommandMakeAttackCollS3(0, 60),
	ftMotionCommandMakeAttackCollS4(-90, 100, 30, 3),
	ftMotionCommandMakeAttackCollS5(0, 1, 0, 0),
	ftMotionCommandLoopBegin(9),
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

u32 dPurinMainMotion_0x1580[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(80),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 3, 1, 0),
	ftMotionCommandMakeAttackCollS2(360, 0),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(80, 40, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 1, 30),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(10),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x15C0[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffectS1(0, 13, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x15E0[] = {
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayFGM(139),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x15F8[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x15E0),
	ftMotionCommandWaitAsync(12),
	ftMotionPlayFGM(177),
	ftMotionPlayVoice(561),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffectS1(15, 31, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(0, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandEffectS1(0, 16, 0),
	ftMotionCommandEffectS2(0, 0),
	ftMotionCommandEffectS3(-120, 0),
	ftMotionCommandEffectS4(0, 0),
	ftMotionCommandMakeAttackCollS1(0, 0, 15, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(310, -50),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(120, 75, 0, 3),
	ftMotionCommandMakeAttackCollS5(20, 2, 6, 20),
	ftMotionCommandMakeAttackCollS1(1, 0, 15, 13, 1, 0),
	ftMotionCommandMakeAttackCollS2(310, 70),
	ftMotionCommandMakeAttackCollS3(0, 0),
	ftMotionCommandMakeAttackCollS4(120, 75, 0, 3),
	ftMotionCommandMakeAttackCollS5(20, 2, 6, 20),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1674[] = {
	ftMotionPlayFGM(234),
	ftMotionPlayVoice(572),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandMakeAttackCollS1(0, 0, 6, 0, 0, 6),
	ftMotionCommandMakeAttackCollS2(600, 0),
	ftMotionCommandMakeAttackCollS3(70, 0),
	ftMotionCommandMakeAttackCollS4(361, 100, 0, 2),
	ftMotionCommandMakeAttackCollS5(0, 0, 0, 0),
	ftMotionCommandMakeRumble(10, 7),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandWait(8),
	ftMotionCommandSetAttackCollSize(0, 60),
	ftMotionCommandWaitAsync(69),
	ftMotionCommandSetAttackCollSize(0, 600),
	ftMotionCommandMakeRumble(10, 7),
	ftMotionCommandWait(8),
	ftMotionCommandSetAttackCollSize(0, 60),
	ftMotionCommandWaitAsync(113),
	ftMotionCommandSetAttackCollSize(0, 760),
	ftMotionCommandMakeRumble(10, 7),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWait(5),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x16F4[] = {
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(233),
	ftMotionPlayVoice(570),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(1),
	ftMotionCommandMakeAttackCollS1(0, 0, 0, 20, 0, 0),
	ftMotionCommandMakeAttackCollS2(260, 0),
	ftMotionCommandMakeAttackCollS3(150, 0),
	ftMotionCommandMakeAttackCollS4(361, 120, 0, 3),
	ftMotionCommandMakeAttackCollS5(0, 2, 7, 60),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(180),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandWaitAsync(210),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandSetTexturePartID(1048576),
	ftMotionPlayVoice(571),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dPurinMainMotion_0x0000),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1778[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x177C[] = {
	ftMotionCommandEnd(),
};
