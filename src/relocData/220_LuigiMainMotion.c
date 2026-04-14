/* ftMotionCommand script data for relocData file 220 (LuigiMainMotion) */
/* File size: 6704 bytes (0x1A30) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>

u32 dLuigiMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandWait(5),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(1),
	ftMotionCommandReturn(),
};

u32 dLuigiMainMotion_0x0024[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dLuigiMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dLuigiMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dLuigiMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandGoto(dLuigiMainMotion_0x0024),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x005C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(117),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x005C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(121),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0084[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(106),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(106),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dLuigiMainMotion_0x0084),
	ftMotionPlayFGM(124),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0084[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(110),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(110),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dLuigiMainMotion_0x0084),
	ftMotionPlayFGM(128),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x00D8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x00E8[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0118[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0128[] = {
	ftMotionPlayVoice(413),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0128[] = {
	ftMotionPlayVoice(423),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0140[] = {
	ftMotionPlayVoice(414),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0140[] = {
	ftMotionPlayVoice(424),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0164[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(73),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0164[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0180[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(73),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0180[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x019C[] = {
	ftMotionPlayFGM(623),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x019C[] = {
	ftMotionPlayFGM(635),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x01A4[] = {
	ftMotionPlayFGM(623),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x01A4[] = {
	ftMotionPlayFGM(635),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x01B8[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandReturn(),
};

u32 dLuigiMainMotion_0x01C0[] = {
	ftMotionCommandSubroutine(dLuigiMainMotion_0x01B8),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x01CC[] = {
	ftMotionCommandSubroutine(dLuigiMainMotion_0x01B8),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x01E0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(73),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x01E0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x01FC[] = {
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x020C[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0218[] = {
	ftMotionCommandSetTexturePartID(2),
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

u32 dLuigiMainMotion_0x0258[] = {
	ftMotionCommandGoto(dLuigiMainMotion_0x0218),
};

u32 dLuigiMainMotion_0x0260[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dLuigiMainMotion_0x0280[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0298[] = {
	ftMotionCommandGoto(dLuigiMainMotion_0x0280),
};

u32 dLuigiMainMotion_0x02A0[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandSubroutine(dLuigiMainMotion_0x0260),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x02B0[] = {
	ftMotionCommandGoto(dLuigiMainMotion_0x02A0),
	ftMotionCommandGoto(dLuigiMainMotion_0x02A0),
	ftMotionCommandGoto(dLuigiMainMotion_0x02A0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(14),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0330[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x038C[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(413),
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x038C[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(423),
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x03CC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(413),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x03CC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(423),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x040C[] = {
	ftMotionCommandGoto(dLuigiMainMotion_0x03CC),
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

u32 dLuigiMainMotion_0x0450[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0488[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(19),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0498[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x04AC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x04B4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x04BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x04C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x04CC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x04D4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x04DC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x04EC[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(406),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 27, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(38),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x04EC[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(416),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 27, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x0558[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0560[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(406),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 6, 0, 0, 280, 80, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(38),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0560[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(416),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 6, 0, 0, 280, 80, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x05CC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x05D4[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x05F8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0600[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0624[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0630[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0640[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x064C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0668[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0684[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLuigiMainMotion_0x0668),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x06AC[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x06C8[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x06E8[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dLuigiMainMotion_0x06C8),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0714[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0734[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0750[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dLuigiMainMotion_0x0734),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0778[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0794[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x07B4[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dLuigiMainMotion_0x0794),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x07E0[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0800[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0810[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dLuigiMainMotion_0x0800),
};

u32 dLuigiMainMotion_0x0820[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0834[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dLuigiMainMotion_0x0820),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x086C[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x08A0[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x08DC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0908[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0920[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0944[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(75, 40),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x248), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0944[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x0980[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x099C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x09B4[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x09D8[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0A00[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0A1C[] = {
	ftMotionCommandSetColAnim(74, 8),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x494), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0A1C[] = {
	ftMotionCommandSetColAnim(75, 8),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0A38[] = {
	ftMotionCommandSetColAnim(74, 16),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x4F8), /* extern */
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0A38[] = {
	ftMotionCommandSetColAnim(75, 16),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0A68[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetColAnim(74, 28),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandSubroutine(0x55C), /* extern */
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0A68[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetColAnim(75, 28),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0AA0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(74, 10),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x5C0), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0AA0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 10),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x0AC0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0AD4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0AE8[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dLuigiMainMotion_0x0AE8),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0B0C[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dLuigiMainMotion_0x0B0C),
	ftMotionCommandEffect(127, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(430),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dLuigiMainMotion_0x0B0C),
	ftMotionCommandGoto(dLuigiMainMotion_0x0B0C),
	ftMotionCommandEffect(127, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0B0C[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dLuigiMainMotion_0x0B0C),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(440),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dLuigiMainMotion_0x0B0C),
	ftMotionCommandGoto(dLuigiMainMotion_0x0B0C),
	ftMotionCommandEffect(-1, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x0B90[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0B98[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(411),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(20),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dLuigiMainMotion_0x0B98),
};
#else
u32 dLuigiMainMotion_0x0B98[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(421),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(20),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dLuigiMainMotion_0x0B98),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0BC8[] = {
	ftMotionPlayInterruptableVoice(314),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dLuigiMainMotion_0x0BC8),
};
#else
u32 dLuigiMainMotion_0x0BC8[] = {
	ftMotionPlayInterruptableVoice(324),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dLuigiMainMotion_0x0BC8),
};
#endif

FTThrowHitDesc dLuigiMainMotion_0x0BF0[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dLuigiMainMotion_0x0C28[] = {
	ftMotionCommandSetThrow((u32)dLuigiMainMotion_0x0BF0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 28, 1, 1, 0, 290, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
FTThrowHitDesc dLuigiMainMotion_0x0C6C[] = {
	{ 0x00000034, 0x0000000C, 0x0000002D, 0x00000046, 0x00000000, 0x00000050, 0x00000000 },
	{ 0xFFFFFFFF, 0x00000006, 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000 },
};
#else
FTThrowHitDesc dLuigiMainMotion_0x0C6C[] = {
	{ 55, 16, 45, 70, 0, 70, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0CA4[] = {
	ftMotionCommandSetThrow((u32)dLuigiMainMotion_0x0C6C),
	ftMotionCommandPlayFGMStoreInfo(39),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(14),
	ftMotionPlayVoice(406),
	ftMotionPlayFGM(18),
	ftMotionCommandEffect(0, 31, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0CA4[] = {
	ftMotionCommandSetThrow((u32)dLuigiMainMotion_0x0C6C),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(14),
	ftMotionPlayVoice(416),
	ftMotionPlayFGM(18),
	ftMotionCommandEffect(0, 31, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
FTThrowHitDesc dLuigiMainMotion_0x0D00[] = {
	{ 0x00000034, 0x00000010, 0x0000002D, 0x00000046, 0x00000000, 0x00000046, 0x00000000 },
	{ 0xFFFFFFFF, 0x00000008, 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000 },
};
#else
FTThrowHitDesc dLuigiMainMotion_0x0D00[] = {
	{ 52, 12, 45, 70, 0, 80, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0D38[] = {
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandSetThrow((u32)dLuigiMainMotion_0x0D00),
	ftMotionPlayVoice(409),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 260, 0, 0, 0),
	ftMotionPlayFGM(293),
	ftMotionCommandWait(8),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandMakeAttackColl(0, 0, 10, 10, 0, 0, 300, 120, 0, 0, 361, 80, 0, 3, 1, 2, 0, 20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandLoopBegin(2),
	ftMotionPlayFGM(39),
	ftMotionCommandWait(14),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandEffect(0, 31, 0, 0, 200, -280, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(18),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0D38[] = {
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandSetThrow((u32)dLuigiMainMotion_0x0D00),
	ftMotionPlayVoice(419),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 260, 0, 0, 0),
	ftMotionPlayFGM(303),
	ftMotionCommandWait(8),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandMakeAttackColl(0, 0, 10, 10, 0, 0, 300, 120, 0, 0, 361, 80, 0, 3, 1, 2, 0, 20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandLoopBegin(2),
	ftMotionPlayFGM(43),
	ftMotionCommandWait(14),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandEffect(0, 31, 0, 0, 200, -280, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(18),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x0DF0[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0DFC[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0E08[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0E14[] = {
	ftMotionCommandSubroutine(dLuigiMainMotion_0x01B8),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0E28[] = {
	ftMotionCommandSubroutine(dLuigiMainMotion_0x01B8),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x0E3C[] = {
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWaitAsync(47),
	ftMotionCommandMakeAttackColl(0, 0, 22, 1, 0, 0, 100, 0, 0, 0, 361, 100, 60, 3, 0, 0, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0E70[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 10, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 9, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(39),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0E70[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 10, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 9, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0EB4[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 16, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 15, 2, 1, 0, 180, 0, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(39),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0EB4[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 16, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 15, 2, 1, 0, 180, 0, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0EF8[] = {
	ftMotionPlayVoice(406),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 4, 0, 0, 150, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(38),
	ftMotionCommandWait(2),
	ftMotionCommandSetAttackCollDamage(0, 4),
	ftMotionCommandSetAttackCollDamage(1, 4),
	ftMotionCommandSetAttackCollSize(0, 180),
	ftMotionCommandSetAttackCollSize(1, 280),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0EF8[] = {
	ftMotionPlayVoice(416),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 4, 0, 0, 150, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(2),
	ftMotionCommandSetAttackCollDamage(0, 4),
	ftMotionCommandSetAttackCollDamage(1, 4),
	ftMotionCommandSetAttackCollSize(0, 180),
	ftMotionCommandSetAttackCollSize(1, 280),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x0F4C[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(37),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 10, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 10, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWait(6),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 2, 1, 0, 280, 0, 100, 0, 361, 100, 0, 3, 0, 1, 0, 50),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x0F4C[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 10, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 10, 2, 1, 0, 180, 0, 0, 0, 30, 100, 40, 3, 0, 0, 0, 0),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWait(6),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 2, 1, 0, 280, 0, 100, 0, 361, 100, 0, 3, 0, 1, 0, 50),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1010[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(38),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1010[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x104C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(38),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x104C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1088[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(38),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1088[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 220, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x10C4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 14, 10, 1, 0, 180, 0, 0, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 10, 1, 0, 290, 60, 0, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(38),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x10C4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 14, 10, 1, 0, 180, 0, 0, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 10, 1, 0, 290, 60, 0, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1104[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 19, 7, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 7, 1, 0, 260, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(38),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1104[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 19, 7, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 7, 1, 0, 260, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1144[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 16, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(37),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1144[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 16, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x11AC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 16, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(37),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x11AC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 16, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1214[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 15, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 15, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(37),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1214[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 15, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 15, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x127C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 14, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 14, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(37),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x127C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 14, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 14, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x12E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 14, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 14, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(37),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x12E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 14, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 14, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x134C[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, 31, 0, 0, 300, -100, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 19, 1, 0, 400, 0, 100, 0, 85, 120, 0, 3, 0, 2, 0, 26),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(37),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x134C[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, 31, 0, 0, 300, -100, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 19, 1, 0, 400, 0, 100, 0, 85, 120, 0, 3, 0, 2, 0, 26),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x13A4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(25, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 25, 17, 1, 0, 170, 0, 0, 20, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 25, 17, 1, 0, 210, 120, 0, 50, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 20, 17, 1, 0, 170, 0, 0, 20, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(3, 0, 20, 17, 1, 0, 210, 120, 0, 50, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(38),
	ftMotionCommandWait(15),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(38),
	ftMotionCommandWait(7),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x13A4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(25, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 25, 17, 1, 0, 170, 0, 0, 20, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 25, 17, 1, 0, 210, 120, 0, 50, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 20, 17, 1, 0, 170, 0, 0, 20, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(3, 0, 20, 17, 1, 0, 210, 120, 0, 50, 361, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(15),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(7),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1450[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(38),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 0, 25, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandWait(26),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1450[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 0, 25, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandWait(26),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x14E8[] = {
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(37),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(12),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x14E8[] = {
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(12),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1558[] = {
	ftMotionPlayFGM(73),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1558[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1570[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 240, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 290, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(37),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1570[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 240, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 290, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x15E0[] = {
	ftMotionPlayFGM(73),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x15E0[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x15F8[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 25, 12, 1, 0, 220, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 12, 1, 0, 250, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(37),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 9, 1, 0, 220, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 9, 1, 0, 250, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(7),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x15F8[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 25, 12, 1, 0, 220, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 12, 1, 0, 250, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 9, 1, 0, 220, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 9, 1, 0, 250, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(7),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1668[] = {
	ftMotionPlayFGM(73),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1668[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1680[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 25, 3, 1, 0, 350, -30, 45, 0, -70, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 3, 1, 0, 350, 50, 30, 0, -70, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandLoopBegin(7),
	ftMotionCommandPlayFGMStoreInfo(209),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPlayFGMStoreInfo(209),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1680[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 25, 3, 1, 0, 350, -30, 45, 0, -70, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 3, 1, 0, 350, 50, 30, 0, -70, 100, 30, 3, 0, 1, 0, 0),
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
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x16E8[] = {
	ftMotionPlayFGM(73),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x16E8[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1700[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(204),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWait(10),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1700[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(214),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandWait(10),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x1738[] = {
	ftMotionCommandGoto(dLuigiMainMotion_0x1700),
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x1744[] = {
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetSlopeContour(3),
};

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1758[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(39, 0),
	ftMotionCommandEffect(16, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(205),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1758[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(39, 0),
	ftMotionCommandEffect(16, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(215),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1784[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandGoto(dLuigiMainMotion_0x1758),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 12, 25, 1, 1, 280, 0, 0, 0, 80, 78, 0, 3, 0, 2, 1, 100),
	ftMotionCommandMakeAttackColl(1, 0, 15, 25, 1, 1, 120, 160, 0, 0, 80, 78, 0, 3, 0, 2, 1, 100),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(15, 31, 0, 80, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(207),
	ftMotionCommandSetColAnim(5, 1),
	ftMotionCommandWait(1),
};
#else
u32 dLuigiMainMotion_0x1784[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandGoto(dLuigiMainMotion_0x1758),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 12, 25, 1, 1, 280, 0, 0, 0, 90, 80, 0, 3, 0, 2, 7, 90),
	ftMotionCommandMakeAttackColl(1, 0, 15, 25, 1, 1, 120, 160, 0, 0, 90, 80, 0, 3, 0, 2, 7, 90),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(15, 31, 0, 80, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(217),
	ftMotionCommandSetColAnim(5, 1),
	ftMotionCommandWait(1),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x17FC[] = {
	ftMotionCommandMakeAttackColl(0, 0, 12, 2, 1, 4, 310, 0, 0, 60, 361, 100, 10, 3, 0, 1, 2, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 2, 1, 4, 260, 150, 0, 60, 361, 100, 10, 3, 0, 1, 2, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x17FC[] = {
	ftMotionCommandMakeAttackColl(0, 0, 12, 1, 1, 4, 310, 0, 0, 60, 361, 100, 10, 3, 0, 1, 2, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 1, 1, 4, 260, 150, 0, 60, 361, 100, 10, 3, 0, 1, 2, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1844[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 12, 24, 1, 1, 280, 0, 0, 0, 80, 75, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(1, 0, 15, 24, 1, 1, 120, 160, 0, 0, 80, 75, 0, 3, 0, 2, 1, 80),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(15, 31, 0, 80, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(207),
	ftMotionCommandSetColAnim(5, 1),
	ftMotionCommandWait(1),
	ftMotionCommandGoto(dLuigiMainMotion_0x17FC),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(409),
	ftMotionCommandMakeAttackColl(0, 0, 0, 16, 1, 0, 140, 0, 300, 150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(1, 0, 0, 16, 1, 0, 140, 0, 300, -150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(2, 0, 0, 16, 1, 0, 180, 0, 0, 0, 90, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(208),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 1, 0, 200, 0, 300, 150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(1, 0, 0, 18, 1, 0, 200, 0, 300, -150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1844[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 12, 25, 1, 1, 280, 0, 0, 0, 80, 80, 0, 3, 0, 2, 7, 80),
	ftMotionCommandMakeAttackColl(1, 0, 15, 25, 1, 1, 120, 160, 0, 0, 80, 80, 0, 3, 0, 2, 7, 80),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(15, 31, 0, 80, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(217),
	ftMotionCommandSetColAnim(5, 1),
	ftMotionCommandWait(1),
	ftMotionCommandGoto(dLuigiMainMotion_0x17FC),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(419),
	ftMotionCommandMakeAttackColl(0, 0, 0, 16, 1, 0, 140, 0, 300, 150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(1, 0, 0, 16, 1, 0, 140, 0, 300, -150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(2, 0, 0, 16, 1, 0, 180, 0, 0, 0, 90, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(218),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 1, 0, 200, 0, 300, 150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(1, 0, 0, 18, 1, 0, 200, 0, 300, -150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dLuigiMainMotion_0x1958[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(409),
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 140, 0, 300, 150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(1, 0, 0, 15, 1, 0, 140, 0, 300, -150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(2, 0, 0, 15, 1, 0, 180, 0, 120, 0, 90, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(208),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 1, 0, 200, 0, 300, 150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(1, 0, 0, 18, 1, 0, 200, 0, 300, -150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(2, 0, 0, 18, 1, 0, 220, 0, 120, 0, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(3, 0, 0, 18, 1, 0, 90, 0, 420, 0, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandEnd(),
};
#else
u32 dLuigiMainMotion_0x1958[] = {
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(419),
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 140, 0, 300, 150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(1, 0, 0, 15, 1, 0, 140, 0, 300, -150, 65, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandMakeAttackColl(2, 0, 0, 15, 1, 0, 180, 0, 120, 0, 90, 90, 0, 3, 0, 1, 1, 65),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(218),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeAttackColl(0, 0, 0, 18, 1, 0, 200, 0, 300, 150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(1, 0, 0, 18, 1, 0, 200, 0, 300, -150, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(2, 0, 0, 18, 1, 0, 220, 0, 120, 0, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandMakeAttackColl(3, 0, 0, 18, 1, 0, 90, 0, 420, 0, 70, 100, 0, 3, 0, 2, 1, 80),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(20),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandEnd(),
};
#endif

u32 dLuigiMainMotion_0x1A28[] = {
	ftMotionCommandEnd(),
};

u32 dLuigiMainMotion_0x1A2C[] = {
	ftMotionCommandEnd(),
};
