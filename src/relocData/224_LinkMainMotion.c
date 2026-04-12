/* ftMotionCommand script data for relocData file 224 (LinkMainMotion) */
/* File size: 7920 bytes (0x1EF0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>

u32 dLinkMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWait(6),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(1),
	ftMotionCommandReturn(),
};

u32 dLinkMainMotion_0x0014[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0000),
	ftMotionCommandWait(30),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0000),
	ftMotionCommandWait(50),
	ftMotionCommandGoto(dLinkMainMotion_0x0014),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x004C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0054[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(120),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x007C[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(109),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(109),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dLinkMainMotion_0x007C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(128),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x00D4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x00E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0118[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0128[] = {
	ftMotionPlayFGM(98),
	ftMotionPlayVoice(408),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0144[] = {
	ftMotionPlayFGM(87),
	ftMotionPlayVoice(409),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x016C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(76),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0188[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(76),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01A4[] = {
	ftMotionPlayVoice(412),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01AC[] = {
	ftMotionPlayFGM(634),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01B4[] = {
	ftMotionPlayFGM(634),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01C8[] = {
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01CC[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandReturn(),
};

u32 dLinkMainMotion_0x01D8[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01E4[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x01F8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(76),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0214[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x021C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0224[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x022C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0238[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0244[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
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

u32 dLinkMainMotion_0x0288[] = {
	ftMotionCommandGoto(dLinkMainMotion_0x0244),
};

u32 dLinkMainMotion_0x0290[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dLinkMainMotion_0x02B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x02C8[] = {
	ftMotionCommandGoto(dLinkMainMotion_0x02B0),
};

u32 dLinkMainMotion_0x02D0[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandSubroutine(dLinkMainMotion_0x0290),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x02E0[] = {
	ftMotionCommandGoto(dLinkMainMotion_0x02D0),
	ftMotionCommandGoto(dLinkMainMotion_0x02D0),
	ftMotionCommandGoto(dLinkMainMotion_0x02D0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(259),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlayFGMStoreInfo(259),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 6, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 6, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x03CC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(259),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 0, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 0, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlayFGMStoreInfo(259),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 6, 0, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 6, 0, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 1, 5, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x049C[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 42, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(415),
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x04D8[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 42, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0514[] = {
	ftMotionCommandGoto(dLinkMainMotion_0x04D8),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0558[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0590[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(19),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05A4[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05CC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05DC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05E4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05EC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x05FC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0604[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(401),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 200, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandPlayFGMStoreInfo(259),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0680[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0688[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(401),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 240, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 110, 3, 0, 2, 5, 0),
	ftMotionCommandPlayFGMStoreInfo(259),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0708[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0710[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0734[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x073C[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0760[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x077C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0794[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x07B0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x07D8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0804[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLinkMainMotion_0x07D8),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0840[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x086C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x089C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLinkMainMotion_0x086C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x08DC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x090C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0934[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dLinkMainMotion_0x090C),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0968[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0990[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x09BC[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dLinkMainMotion_0x0990),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x09F4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0A20[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0A3C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dLinkMainMotion_0x0A20),
};

u32 dLinkMainMotion_0x0A4C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0A68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLinkMainMotion_0x0A4C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0AA4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0AD0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0B0C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(15),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0B48[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0B64[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0B80[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0BB4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0BE0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0BFC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0C18[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0C48[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0C68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(75, 11),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0C88[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(75, 15),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0CB0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(75, 28),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0CE8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 25),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0D18[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0D28[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0D38[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dLinkMainMotion_0x0D38),
};

u32 dLinkMainMotion_0x0D68[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dLinkMainMotion_0x0D68),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandGoto(dLinkMainMotion_0x0D68),
	ftMotionCommandGoto(dLinkMainMotion_0x0D68),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0DD4[] = {
	ftMotionCommandEffect(-1, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0DF8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0E00[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(406),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandLoopBegin(5),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dLinkMainMotion_0x0E00),
};

u32 dLinkMainMotion_0x0E34[] = {
	ftMotionPlayInterruptableVoice(414),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dLinkMainMotion_0x0E34),
};

FTThrowHitDesc dLinkMainMotion_0x0E5C[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dLinkMainMotion_0x0E94[] = {
	ftMotionCommandSetThrow((u32)dLinkMainMotion_0x0E5C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandMakeRumble(16, 9),
	ftMotionCommandMakeAttackColl(0, 0, 35, 1, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -100, 0, 0, 0),
	ftMotionPlayFGM(210),
	ftMotionCommandSetFlag1(12),
	ftMotionCommandSetFlag2(5),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(35, 31, 0, 0, 0, 0, 90, 90, 90),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x0F18[] = {
	ftMotionPlayFGM(19),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dLinkMainMotion_0x0F34[] = {
	{ 52, 14, 45, 70, 0, 80, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dLinkMainMotion_0x0F6C[] = {
	ftMotionCommandSetThrow((u32)dLinkMainMotion_0x0F34),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 32, 8, 0, 0, 240, 130, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 32, 8, 0, 0, 200, 0, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionPlayFGM(31),
	ftMotionCommandEffect(15, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dLinkMainMotion_0x1008[] = {
	{ 52, 16, 45, 70, 0, 70, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dLinkMainMotion_0x1040[] = {
	ftMotionCommandSetThrow((u32)dLinkMainMotion_0x1008),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionPlayFGM(18),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 27, 8, 0, 0, 240, 130, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 27, 8, 0, 0, 200, 0, 0, 0, 361, 80, 0, 3, 0, 1, 1, 20),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionPlayFGM(31),
	ftMotionCommandEffect(35, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetModelPartID(21, -1),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x10F0[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x10FC[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1108[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1114[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1128[] = {
	ftMotionCommandSubroutine(dLinkMainMotion_0x01CC),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x113C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionPlayVoice(401),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1174[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 11, 5, 1, 3, 220, 0, 0, 250, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 5, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(260),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x11DC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 3, 220, 0, 0, 250, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 3, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(260),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1244[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 11, 4, 1, 3, 220, 0, 0, 250, 361, 100, 0, 3, 0, 1, 5, 6),
	ftMotionCommandMakeAttackColl(1, 0, 10, 4, 1, 3, 160, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 6),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandPlayFGMStoreInfo(409),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x12A8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x12B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(260),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(260),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(260),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(260),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandMakeAttackColl(0, 0, 11, 1, 1, 3, 220, 0, 0, 270, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandMakeAttackColl(1, 0, 10, 1, 1, 3, 160, 0, 0, 0, 361, 50, 0, 3, 0, 1, 5, 8),
	ftMotionCommandPlayFGMStoreInfo(260),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandPauseScript(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandGoto(dLinkMainMotion_0x12B0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1440[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(11, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1458[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 11, 14, 1, 3, 220, 0, 0, 190, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 10),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 11, 10, 1, 3, 220, 0, 0, 190, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 11, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1500[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionPlayVoice(409),
	ftMotionCommandMakeAttackColl(0, 0, 11, 18, 1, 3, 260, 0, 0, 280, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 17, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -100, 0, 80, 100),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 31, 0, 0, 300, 400, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1578[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 11, 10, 1, 3, 200, 0, 0, 240, 79, 100, 0, 3, 0, 2, 5, 20),
	ftMotionCommandMakeAttackColl(1, 0, 10, 10, 1, 3, 160, 0, 0, 0, 79, 100, 0, 3, 0, 2, 5, 20),
	ftMotionCommandPlayFGMStoreInfo(259),
	ftMotionCommandWait(9),
	ftMotionCommandEffect(0, 31, 0, 0, 60, -360, 0, 0, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x15D8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 240, 0, 0, 250, 80, 85, 0, 3, 0, 1, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 10, 12, 1, 3, 180, 0, 0, 0, 80, 85, 0, 3, 0, 1, 5, 30),
	ftMotionCommandPlayFGMStoreInfo(259),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(6),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1648[] = {
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandMakeAttackColl(0, 0, 11, 20, 1, 3, 280, 0, 0, 270, 50, 100, 0, 3, 0, 1, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 11, 20, 1, 3, 280, 0, 0, 130, 50, 100, 0, 3, 0, 1, 5, 30),
	ftMotionCommandMakeAttackColl(2, 0, 10, 20, 1, 3, 200, 0, 0, 0, 50, 100, 0, 3, 0, 1, 5, 30),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 240, 0, 0, 270, 361, 100, 0, 3, 0, 1, 5, 20),
	ftMotionCommandMakeAttackColl(1, 0, 11, 12, 1, 3, 240, 0, 0, 130, 361, 100, 0, 3, 0, 1, 5, 20),
	ftMotionCommandMakeAttackColl(2, 0, 10, 12, 1, 3, 180, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 20),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(37),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1724[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 0, 0, 0),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(11),
	ftMotionPlayVoice(401),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 11, 7, 1, 3, 240, 0, 0, 180, 120, 100, 80, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 7, 1, 3, 240, 0, 0, 0, 100, 100, 80, 3, 0, 0, 5, 0),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 11, 7, 1, 3, 220, 0, 0, 180, 80, 100, 30, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 7, 1, 3, 160, 0, 0, 0, 80, 100, 30, 3, 0, 0, 5, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 3, 380, 0, 0, 180, 80, 100, 25, 3, 0, 0, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 3, 1, 3, 200, 0, 0, 0, 80, 100, 25, 3, 0, 0, 5, 0),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 380, 0, 0, 180, 90, 90, 0, 3, 0, 2, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 10, 12, 1, 3, 200, 0, 0, 0, 90, 90, 0, 3, 0, 2, 5, 30),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1898[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 260, 40, 100, 0, 3, 0, 2, 5, 35),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 150, 0, 0, 0, 75, 100, 0, 3, 0, 2, 5, 35),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 220, 0, 0, 260, 40, 100, 0, 3, 0, 2, 5, 35),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 150, 0, 0, 0, 75, 100, 0, 3, 0, 2, 5, 35),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1984[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 32, 10, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 27, 10, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 10, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 32, 8, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 8, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10),
	ftMotionCommandMakeAttackColl(2, 0, 5, 8, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 0, 1, 10),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1A1C[] = {
	ftMotionCommandSetFlag1(50),
	ftMotionCommandWaitAsync(14),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 11, 20, 1, 3, 280, 0, 0, 250, 361, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandMakeAttackColl(1, 0, 10, 20, 1, 3, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 11, 12, 1, 3, 180, 0, 0, 250, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 12, 1, 3, 150, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 0),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandWait(17),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1AB0[] = {
	ftMotionPlayFGM(76),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1AB8[] = {
	ftMotionCommandSetFlag1(50),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 27, 10, 1, 0, 280, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 10, 1, 0, 280, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 10, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 32, 10, 1, 0, 280, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 32, 10, 1, 0, 280, 90, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 10, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(9),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1B6C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 100, 70, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 70, 100, 0, 3, 0, 2, 5, 5),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandWait(44),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1BD4[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(0, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(30),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 180, 90, 90, 90),
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 100, 361, 100, 0, 3, 0, 2, 5, 25),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 25),
	ftMotionCommandPlayFGMStoreInfo(258),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(65),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(12),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandHideItem(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1C54[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionPlayFGM(291),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandHideItem(1),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1CA8[] = {
	ftMotionPlayFGM(76),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1CC0[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(60, 7),
	ftMotionPlayFGM(211),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(87),
	ftMotionCommandSetModelPartID(20, -1),
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionPlayFGM(264),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1CEC[] = {
	ftMotionCommandGoto(dLinkMainMotion_0x1CC0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1CF8[] = {
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(19, -1),
	ftMotionCommandWaitAsync(29),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayFGM(205),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(19, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1D2C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetModelPartID(11, 1),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionPlayVoice(401),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(10, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetModelPartID(20, -1),
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1D88[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetModelPartID(20, -1),
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1DA4[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayFGM(208),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandSetModelPartID(11, 1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetModelPartID(20, -1),
	ftMotionCommandSetModelPartID(11, -1),
	ftMotionCommandSetModelPartID(11, 0),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1DCC[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(209),
	ftMotionPlayVoice(404),
	ftMotionCommandSetColAnim(44, 50),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag2(13),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 100, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 200, 0, 0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 250, 0, 0, 0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(11, 31, 0, 0, 0, 300, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 3, 300, 0, 0, 300, 361, 100, 0, 3, 0, 2, 5, 30),
	ftMotionCommandMakeAttackColl(1, 0, 10, 16, 1, 3, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 5, 30),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 11, 8, 1, 3, 180, 0, 0, 300, 361, 100, 0, 3, 0, 1, 5, 10),
	ftMotionCommandMakeAttackColl(1, 0, 10, 8, 1, 3, 140, 0, 0, 0, 361, 100, 0, 3, 0, 1, 5, 10),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag2(3),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetFlag2(4),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag2(13),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLinkMainMotion_0x1EEC[] = {
	ftMotionCommandEnd(),
};
