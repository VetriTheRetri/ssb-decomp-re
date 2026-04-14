/* ftMotionCommand script data for relocData file 202 (MarioMainMotion) */
/* File size: 6560 bytes (0x19A0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>

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
#if defined(REGION_JP)
	ftMotionPlayFGM(117),
#else
	ftMotionPlayFGM(121),
#endif
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x007C[] = {
	ftMotionCommandWaitAsync(2),
#if defined(REGION_JP)
	ftMotionPlayFGM(106),
#else
	ftMotionPlayFGM(110),
#endif
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
#if defined(REGION_JP)
	ftMotionPlayFGM(106),
#else
	ftMotionPlayFGM(110),
#endif
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMarioMainMotion_0x007C),
#if defined(REGION_JP)
	ftMotionPlayFGM(124),
#else
	ftMotionPlayFGM(128),
#endif
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x00D0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x00E0[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0110[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0120[] = {
#if defined(REGION_JP)
	ftMotionPlayVoice(425),
#else
	ftMotionPlayVoice(435),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0138[] = {
#if defined(REGION_JP)
	ftMotionPlayVoice(426),
#else
	ftMotionPlayVoice(436),
#endif
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x015C[] = {
	ftMotionCommandSetSlopeContour(3),
#if defined(REGION_JP)
	ftMotionPlayFGM(73),
#else
	ftMotionPlayFGM(77),
#endif
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0178[] = {
	ftMotionCommandSetSlopeContour(3),
#if defined(REGION_JP)
	ftMotionPlayFGM(73),
#else
	ftMotionPlayFGM(77),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0194[] = {
#if defined(REGION_JP)
	ftMotionPlayFGM(623),
#else
	ftMotionPlayFGM(635),
#endif
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x019C[] = {
#if defined(REGION_JP)
	ftMotionPlayFGM(623),
#else
	ftMotionPlayFGM(635),
#endif
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
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x01D8[] = {
	ftMotionCommandSetSlopeContour(3),
#if defined(REGION_JP)
	ftMotionPlayFGM(73),
#else
	ftMotionPlayFGM(77),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
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

u32 dMarioMainMotion_0x0324[] = {
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

u32 dMarioMainMotion_0x0380[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionPlayVoice(425),
#else
	ftMotionPlayVoice(435),
#endif
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x03BC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionPlayVoice(425),
#else
	ftMotionPlayVoice(435),
#endif
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x03FC[] = {
	ftMotionCommandGoto(dMarioMainMotion_0x03BC),
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

u32 dMarioMainMotion_0x0440[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
#if defined(REGION_JP)
	ftMotionPlayVoice(419),
#else
	ftMotionPlayVoice(429),
#endif
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 27, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(38),
#else
	ftMotionCommandPlayFGMStoreInfo(42),
#endif
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
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
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
#if defined(REGION_JP)
	ftMotionPlayVoice(419),
#else
	ftMotionPlayVoice(429),
#endif
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 6, 0, 0, 280, 80, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(38),
#else
	ftMotionCommandPlayFGMStoreInfo(42),
#endif
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
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0654[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0670[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dMarioMainMotion_0x0654),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0698[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x06B4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x06D4[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dMarioMainMotion_0x06B4),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0700[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0720[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x073C[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dMarioMainMotion_0x0720),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0764[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0780[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x07A0[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dMarioMainMotion_0x0780),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x07CC[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
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
	ftMotionCommandSubroutine(0x0000), /* extern */
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
	ftMotionCommandSubroutine(0x0064), /* extern */
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
	ftMotionCommandSubroutine(0x00C8), /* extern */
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
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x08DC[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x08F4[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0918[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(0),
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(75, 40),
#else
	ftMotionCommandSetColAnim(76, 40),
#endif
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
#if defined(REGION_JP)
	ftMotionCommandSubroutine(0x248), /* extern */
#else
	ftMotionCommandSubroutine(0x0248), /* extern */
#endif
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0950[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x096C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0984[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378), /* extern */
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
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x09D0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x09EC[] = {
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(74, 8),
#else
	ftMotionCommandSetColAnim(75, 8),
#endif
	ftMotionCommandWaitAsync(4),
#if defined(REGION_JP)
	ftMotionCommandSubroutine(0x494), /* extern */
#else
	ftMotionCommandSubroutine(0x0494), /* extern */
#endif
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0A08[] = {
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(74, 16),
#else
	ftMotionCommandSetColAnim(75, 16),
#endif
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
#if defined(REGION_JP)
	ftMotionCommandSubroutine(0x4F8), /* extern */
#else
	ftMotionCommandSubroutine(0x04F8), /* extern */
#endif
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0A38[] = {
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(74, 28),
#else
	ftMotionCommandSetColAnim(75, 28),
#endif
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(23),
#if defined(REGION_JP)
	ftMotionCommandSubroutine(0x55C), /* extern */
#else
	ftMotionCommandSubroutine(0x055C), /* extern */
#endif
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0A6C[] = {
	ftMotionCommandSetSlopeContour(4),
#if defined(REGION_JP)
	ftMotionCommandSetColAnim(74, 10),
#else
	ftMotionCommandSetColAnim(75, 10),
#endif
	ftMotionCommandWaitAsync(4),
#if defined(REGION_JP)
	ftMotionCommandSubroutine(0x5C0), /* extern */
#else
	ftMotionCommandSubroutine(0x05C0), /* extern */
#endif
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
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dMarioMainMotion_0x0AAC),
};

u32 dMarioMainMotion_0x0AD0[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(430),
#else
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(440),
#endif
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0B54[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0B5C[] = {
	ftMotionCommandSetSlopeContour(3),
#if defined(REGION_JP)
	ftMotionPlayVoice(424),
#else
	ftMotionPlayVoice(434),
#endif
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(20),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dMarioMainMotion_0x0B5C),
};

u32 dMarioMainMotion_0x0B8C[] = {
#if defined(REGION_JP)
	ftMotionPlayInterruptableVoice(314),
#else
	ftMotionPlayInterruptableVoice(324),
#endif
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dMarioMainMotion_0x0B8C),
};

FTThrowHitDesc dMarioMainMotion_0x0BB4[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dMarioMainMotion_0x0BEC[] = {
	ftMotionCommandSetThrow((u32)dMarioMainMotion_0x0BB4),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 28, 1, 1, 0, 290, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dMarioMainMotion_0x0C30[] = {
	{ 52, 12, 45, 70, 0, 80, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dMarioMainMotion_0x0C68[] = {
	ftMotionCommandSetThrow((u32)dMarioMainMotion_0x0C30),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(39),
#else
	ftMotionCommandPlayFGMStoreInfo(43),
#endif
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(14),
#if defined(REGION_JP)
	ftMotionPlayVoice(419),
#else
	ftMotionPlayVoice(429),
#endif
	ftMotionPlayFGM(18),
	ftMotionCommandEffect(0, 31, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
FTThrowHitDesc dMarioMainMotion_0x0CC4[] = {
	{ 0x00000034, 0x00000010, 0x0000002D, 0x00000046, 0x00000000, 0x00000046, 0x00000000 },
	{ 0xFFFFFFFF, 0x00000008, 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000 },
};
#else
FTThrowHitDesc dMarioMainMotion_0x0CC4[] = {
	{ 55, 16, 45, 70, 0, 70, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};
#endif

u32 dMarioMainMotion_0x0CFC[] = {
	ftMotionCommandSetThrow((u32)dMarioMainMotion_0x0CC4),
#if defined(REGION_JP)
	ftMotionPlayVoice(422),
#else
	ftMotionPlayVoice(432),
#endif
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(10),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 260, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionPlayFGM(293),
#else
	ftMotionPlayFGM(303),
#endif
	ftMotionCommandWait(8),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandMakeAttackColl(0, 0, 10, 10, 0, 0, 300, 120, 0, 0, 361, 80, 0, 3, 1, 2, 0, 30),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandLoopBegin(2),
#if defined(REGION_JP)
	ftMotionPlayFGM(39),
#else
	ftMotionPlayFGM(43),
#endif
	ftMotionCommandWait(14),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandEffect(0, 31, 0, 0, 200, -280, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandEffect(127, 33, 0, 0, 0, 0, 0, 0, 0),
#else
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
#endif
	ftMotionPlayFGM(18),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DB0[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DBC[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DC8[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DD4[] = {
	ftMotionCommandSubroutine(dMarioMainMotion_0x01B0),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DE8[] = {
	ftMotionCommandSubroutine(dMarioMainMotion_0x01B0),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0DFC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeRumble(60, 7),
	ftMotionCommandSetColAnim(40, 60),
#if defined(REGION_JP)
	ftMotionPlayFGM(202),
#else
	ftMotionPlayFGM(212),
#endif
	ftMotionCommandWaitAsync(120),
	ftMotionCommandMakeRumble(60, 7),
#if defined(REGION_JP)
	ftMotionPlayFGM(203),
#else
	ftMotionPlayFGM(213),
#endif
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0E24[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 10, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 9, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(39),
#else
	ftMotionCommandPlayFGMStoreInfo(43),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0E68[] = {
	ftMotionCommandWaitAsync(3),
#if defined(REGION_JP)
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 16, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 15, 2, 1, 0, 180, 0, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(39),
#else
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 16, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 15, 2, 1, 0, 180, 0, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(43),
#endif
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0EAC[] = {
#if defined(REGION_JP)
	ftMotionPlayVoice(419),
#else
	ftMotionPlayVoice(429),
#endif
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 4, 0, 0, 150, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(38),
#else
	ftMotionCommandPlayFGMStoreInfo(42),
#endif
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
	ftMotionCommandMakeAttackColl(0, 0, 5, 12, 1, 0, 250, 40, 0, 0, 361, 100, 0, 3, 1, 2, 1, 16),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(37),
#else
	ftMotionCommandPlayFGMStoreInfo(41),
#endif
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 10, 1, 0, 250, 40, 0, 0, 361, 100, 0, 3, 1, 2, 1, 10),
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0F58[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 14, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 14, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(38),
#else
	ftMotionCommandPlayFGMStoreInfo(42),
#endif
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0F94[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 13, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 13, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(38),
#else
	ftMotionCommandPlayFGMStoreInfo(42),
#endif
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x0FD0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 12, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(38),
#else
	ftMotionCommandPlayFGMStoreInfo(42),
#endif
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x100C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 14, 10, 1, 0, 180, 0, 0, 0, 86, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 10, 1, 0, 290, 60, 0, 0, 86, 150, 0, 3, 0, 1, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(38),
#else
	ftMotionCommandPlayFGMStoreInfo(42),
#endif
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x104C[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -140, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 24, 12, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 260, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(38),
#else
	ftMotionCommandPlayFGMStoreInfo(42),
#endif
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x109C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 18, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 18, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(37),
#else
	ftMotionCommandPlayFGMStoreInfo(41),
#endif
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1104[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 18, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 18, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(37),
#else
	ftMotionCommandPlayFGMStoreInfo(41),
#endif
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x116C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 17, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 17, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(37),
#else
	ftMotionCommandPlayFGMStoreInfo(41),
#endif
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x11D4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 16, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(37),
#else
	ftMotionCommandPlayFGMStoreInfo(41),
#endif
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x123C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 16, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 16, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(37),
#else
	ftMotionCommandPlayFGMStoreInfo(41),
#endif
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x12A4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, 31, 0, 0, 300, -100, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 19, 1, 0, 380, 0, 100, 0, 85, 120, 0, 3, 0, 2, 0, 26),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(37),
#else
	ftMotionCommandPlayFGMStoreInfo(41),
#endif
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x12FC[] = {
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
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(38),
#else
	ftMotionCommandPlayFGMStoreInfo(42),
#endif
	ftMotionCommandWait(15),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(38),
#else
	ftMotionCommandPlayFGMStoreInfo(42),
#endif
	ftMotionCommandWait(7),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x13A8[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(38),
#else
	ftMotionCommandPlayFGMStoreInfo(42),
#endif
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 0, 25, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(26),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1440[] = {
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(37),
#else
	ftMotionCommandPlayFGMStoreInfo(41),
#endif
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(12),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x14B0[] = {
#if defined(REGION_JP)
	ftMotionPlayFGM(73),
#else
	ftMotionPlayFGM(77),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x14C8[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 240, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 290, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(37),
#else
	ftMotionCommandPlayFGMStoreInfo(41),
#endif
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1538[] = {
#if defined(REGION_JP)
	ftMotionPlayFGM(73),
#else
	ftMotionPlayFGM(77),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1550[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 25, 12, 1, 0, 220, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 12, 1, 0, 250, 0, 0, 0, 80, 120, 0, 3, 0, 2, 1, 0),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(37),
#else
	ftMotionCommandPlayFGMStoreInfo(41),
#endif
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 9, 1, 0, 220, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 9, 1, 0, 250, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(7),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x15C0[] = {
#if defined(REGION_JP)
	ftMotionPlayFGM(73),
#else
	ftMotionPlayFGM(77),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x15D8[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 25, 3, 1, 0, 350, -30, 45, 0, -70, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 3, 1, 0, 350, 50, 30, 0, -70, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandLoopBegin(7),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(209),
#else
	ftMotionCommandPlayFGMStoreInfo(219),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(209),
#else
	ftMotionCommandPlayFGMStoreInfo(219),
#endif
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1640[] = {
#if defined(REGION_JP)
	ftMotionPlayFGM(73),
#else
	ftMotionPlayFGM(77),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1658[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(30, 7),
#if defined(REGION_JP)
	ftMotionPlayFGM(204),
#else
	ftMotionPlayFGM(214),
#endif
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x166C[] = {
	ftMotionCommandGoto(dMarioMainMotion_0x1658),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandSetSlopeContour(3),
};

u32 dMarioMainMotion_0x1688[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(39, 0),
	ftMotionCommandEffect(16, 31, 0, 60, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionPlayFGM(205),
#else
	ftMotionPlayFGM(215),
#endif
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x16B4[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandGoto(dMarioMainMotion_0x1688),
};

u32 dMarioMainMotion_0x16CC[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 5, 1, 4, 380, 0, 0, 0, 70, 100, 110, 3, 0, 1, 2, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 5, 1, 4, 260, 160, 0, 0, 90, 100, 110, 3, 0, 1, 2, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandEffect(15, 31, 0, 80, 0, 0, 0, 0, 0),
#if defined(REGION_JP)
	ftMotionPlayFGM(207),
#else
	ftMotionPlayFGM(217),
#endif
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandMakeAttackColl(0, 0, 12, 1, 1, 4, 310, 0, 0, 60, 75, 100, 100, 3, 0, 1, 2, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 1, 1, 4, 260, 150, 0, 60, 80, 100, 100, 3, 0, 1, 2, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeAttackColl(0, 0, 12, 3, 1, 4, 450, 0, 0, 0, 50, 170, 0, 3, 0, 2, 2, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 3, 1, 4, 200, 150, 0, 0, 50, 170, 0, 3, 0, 2, 2, 0),
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
#if defined(REGION_JP)
	ftMotionPlayVoice(422),
#else
	ftMotionPlayVoice(432),
#endif
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 300, 150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 300, -150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 220, 0, 0, 0, 90, 0, 1, 3, 0, 1, 1, 10),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(208),
#else
	ftMotionCommandPlayFGMStoreInfo(218),
#endif
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 160, 0, 280, 150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 160, 0, 280, -150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 200, 0, 300, 150, 90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 200, 0, 300, -150, 90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dMarioMainMotion_0x1884[] = {
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag3(1),
#if defined(REGION_JP)
	ftMotionPlayVoice(422),
#else
	ftMotionPlayVoice(432),
#endif
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 300, 150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 300, -150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 180, 0, 0, 0, 90, 0, 1, 3, 0, 1, 1, 10),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
#if defined(REGION_JP)
	ftMotionCommandPlayFGMStoreInfo(208),
#else
	ftMotionCommandPlayFGMStoreInfo(218),
#endif
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 260, 150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 260, -150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 160, 0, 80, 0, -90, 0, 1, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 100, 0, 420, 0, -90, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 200, 0, 300, 150, 90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 200, 0, 300, -150, 90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 220, 0, 80, 0, -90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 90, 0, 420, 0, -90, 0, 1, 3, 0, 2, 1, 120),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
