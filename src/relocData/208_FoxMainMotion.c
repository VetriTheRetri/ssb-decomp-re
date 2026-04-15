/* ftMotionCommand script data for relocData file 208 (FoxMainMotion) */
/* File size: 6816 bytes (0x1AA0) */

#include "relocdata_types.h"

#if defined(REGION_JP)

/* JP binary has a different layout; fold it in as a chain-encoded
 * raw u32 blob. The companion .jp.reloc is empty so fixRelocChain
 * leaves the pre-baked JP chain bytes alone. */
/* JP binary has a different layout; fold it in as a single raw
 * u8 block that extractRelocInc regenerates from the JP binary
 * whenever JP assets are extracted. The companion .jp.reloc is
 * empty so fixRelocChain leaves the pre-baked chain bytes alone. */
u8 dFoxMainMotion[6848] = {
	#include <FoxMainMotion/jp_raw.data.inc.c>
};

#else  /* REGION_US */

#include <ft/ftdef.h>
#include <ft/fttypes.h>

u32 dFoxMainMotion_0x0000[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0008[] = {
	ftMotionPlayFGM(118),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x002C[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(107),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionPlayFGM(107),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dFoxMainMotion_0x002C),
	ftMotionPlayFGM(128),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0080[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x008C[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x00BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x00CC[] = {
	ftMotionPlayFGM(96),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x00E4[] = {
	ftMotionPlayFGM(85),
	ftMotionPlayVoice(363),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x010C[] = {
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0124[] = {
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x013C[] = {
	ftMotionPlayVoice(369),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0144[] = {
	ftMotionPlayFGM(632),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x014C[] = {
	ftMotionPlayFGM(632),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0160[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandReturn(),
};

u32 dFoxMainMotion_0x016C[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x0160),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0178[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x0160),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x018C[] = {
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01A4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01AC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01B4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01BC[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01C8[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01D4[] = {
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

u32 dFoxMainMotion_0x0218[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x01D4),
};

u32 dFoxMainMotion_0x0220[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dFoxMainMotion_0x0240[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x025C[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x0240),
};

u32 dFoxMainMotion_0x0264[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandSubroutine(dFoxMainMotion_0x0220),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0274[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x0264),
	ftMotionCommandGoto(dFoxMainMotion_0x0264),
	ftMotionCommandGoto(dFoxMainMotion_0x0264),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 1, 0, 180, 120, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 1, 0, 180, 120, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0310[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 6, 1, 0, 180, 150, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 6, 1, 0, 180, 150, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0394[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(369),
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x03D0[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(369),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0410[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x03D0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(11),
	ftMotionPlayVoice(364),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0448[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(11),
	ftMotionPlayVoice(364),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0474[] = {
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(19),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0484[] = {
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0498[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04A0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04A8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04B8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04C0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04C8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04D8[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(1),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 4, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(14),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0540[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0550[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 5, 4, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05B8[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(16),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05DC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05E4[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(14),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0608[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(157),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x061C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x062C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x063C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(57),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x065C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x067C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_0x065C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x06AC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x06CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x06F0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_0x06CC),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0724[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0748[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0764[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dFoxMainMotion_0x0748),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x078C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x07A8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x07C8[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dFoxMainMotion_0x07A8),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x07F4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0814[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0824[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dFoxMainMotion_0x0814),
};

u32 dFoxMainMotion_0x0834[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0848[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_0x0834),
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0880[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x08B8[] = {
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x08F0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(28),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0924[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0940[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0968[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0998[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x09BC[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x09D8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A00[] = {
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A24[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A48[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandSetColAnim(75, 9),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 15),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A9C[] = {
	ftMotionCommandSetColAnim(75, 25),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0ACC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 34),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0AF4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0B04[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0B14[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dFoxMainMotion_0x0B14),
};

u32 dFoxMainMotion_0x0B34[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dFoxMainMotion_0x0B34),
	ftMotionPlayVoice(375),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dFoxMainMotion_0x0B34),
	ftMotionCommandGoto(dFoxMainMotion_0x0B34),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0BBC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0BC4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(376),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dFoxMainMotion_0x0BC4),
};

u32 dFoxMainMotion_0x0BF8[] = {
	ftMotionPlayInterruptableVoice(371),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dFoxMainMotion_0x0BF8),
};

FTThrowHitDesc dFoxMainMotion_0x0C20[] = {
	{ -1, 2, 361, 100, 0, 0, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

u32 dFoxMainMotion_0x0C58[] = {
	ftMotionCommandSetThrow((u32)dFoxMainMotion_0x0C20),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 260, 50, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dFoxMainMotion_0x0C8C[] = {
	{ 52, 12, 45, 60, 0, 80, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

u32 dFoxMainMotion_0x0CC4[] = {
	ftMotionCommandSetThrow((u32)dFoxMainMotion_0x0C8C),
	ftMotionPlayVoice(374),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 31, 0, 0, 380, 320, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(18),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dFoxMainMotion_0x0D20[] = {
	{ 52, 15, 45, 60, 0, 80, 0 },
	{ -1, 9, 361, 100, 0, 0, 0 },
};

u32 dFoxMainMotion_0x0D58[] = {
	ftMotionCommandSetThrow((u32)dFoxMainMotion_0x0D20),
	ftMotionPlayVoice(374),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandMakeAttackColl(0, 0, 20, 10, 0, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 10, 0, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, 31, 0, 0, 320, -340, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag2(2),
	ftMotionPlayFGM(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0DE4[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0DF0[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0DFC[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E08[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x0160),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E1C[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x0160),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E30[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(365),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E4C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 8, 4, 1, 0, 200, 140, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 8, 4, 1, 0, 200, 0, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E94[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 14, 4, 1, 0, 200, 140, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 4, 1, 0, 200, 0, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0EDC[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0EE0[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 60, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 60, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandGoto(dFoxMainMotion_0x0EE0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x102C[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1030[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 10, 1, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 10, 1, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 7, 1, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 7, 1, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x10B0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 11, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 11, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x10F0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1130[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 9, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1170[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 8, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x11B0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 8, 1, 0, 200, 20, 0, 0, 361, 100, 10, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 200, 140, 0, 0, 361, 100, 10, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x11F0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 220, 20, 0, 0, 80, 150, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 9, 1, 0, 350, 80, 0, 0, 80, 150, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1230[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 29, 12, 1, 0, 230, 0, 0, -60, 70, 125, 0, 3, 0, 1, 0, 25),
	ftMotionCommandMakeAttackColl(1, 0, 29, 12, 1, 0, 230, 0, 0, -200, 90, 125, 0, 3, 0, 1, 0, 25),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1280[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 20, 17, 1, 0, 280, 60, 0, 0, 361, 120, 0, 3, 0, 2, 1, 0),
	ftMotionCommandEffect(20, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(5),
	ftMotionCommandMakeAttackColl(0, 0, 20, 13, 1, 0, 280, 60, 0, 0, 361, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1308[] = {
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 200, 0, 0, 0, 80, 140, 0, 3, 0, 2, 1, 25),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 280, 70, 0, 0, 80, 140, 0, 3, 0, 2, 1, 25),
	ftMotionCommandEffect(25, 31, 0, 110, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 8, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 230, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x13B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusPartID(25, 3),
	ftMotionCommandSetHitStatusPartID(20, 3),
	ftMotionCommandSetHitStatusPartID(24, 3),
	ftMotionCommandSetHitStatusPartID(19, 3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 260, 90, 0, 0, 25, 80, 0, 3, 0, 2, 1, 35),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 260, 90, 0, 0, 25, 80, 0, 3, 0, 2, 1, 35),
	ftMotionCommandEffect(25, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(20, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(1),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x144C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 5, 14, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 210, 70, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 25, 14, 1, 0, 180, 70, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 9, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 9, 1, 0, 210, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 25, 9, 1, 0, 180, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x14E4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 12, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 310, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 8, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 280, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(14),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1554[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1578[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 5, 12, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 300, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 8, 1, 0, 200, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 8, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 8, 1, 0, 200, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(20),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1610[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1634[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 5, 2, 1, 0, 320, 0, 0, 0, 90, 100, 100, 3, 0, 0, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 2, 1, 0, 340, 110, 0, 0, 90, 100, 100, 3, 0, 0, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 1, 5, 13, 1, 0, 340, 0, 0, 0, 90, 135, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 1, 25, 13, 1, 0, 370, 110, 0, 0, 90, 135, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x16A4[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 20, 2, 1, 0, 310, -40, 45, 0, -70, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 2, 1, 0, 360, 30, 30, 0, -70, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x177C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1798[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionPlayFGM(191),
	ftMotionCommandWait(32),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x17AC[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x1798),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetColAnim(47, 0),
	ftMotionPlayFGM(185),
	ftMotionCommandEffect(17, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1800[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(47, 0),
	ftMotionPlayFGM(185),
	ftMotionCommandEffect(17, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1840[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 180, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1868[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x1840),
};

u32 dFoxMainMotion_0x1870[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(12, 31, 0, 0, 60, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(42, 36),
	ftMotionPlayFGM(186),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1894[] = {
	ftMotionCommandSetParallelScript(dFoxMainMotion_0x1870),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(11),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x18BC[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x1894),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(362),
	ftMotionCommandSetColAnim(43, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 16, 1, 1, 180, 0, 0, 0, 80, 60, 0, 3, 5, 2, 1, 60),
	ftMotionCommandEffect(0, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 29, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(187),
};

u32 dFoxMainMotion_0x1908[] = {
	ftMotionCommandLoopBegin(2),
	ftMotionCommandWait(4),
	ftMotionCommandEffect(6, 28, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dFoxMainMotion_0x1908),
	ftMotionPlayVoice(362),
	ftMotionCommandSetColAnim(43, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 16, 1, 1, 180, 0, 0, 0, 80, 60, 0, 3, 5, 2, 1, 60),
	ftMotionCommandEffect(0, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 29, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(187),
	ftMotionCommandGoto(dFoxMainMotion_0x1908),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x197C[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1980[] = {
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetAirJumpAdd(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x19B0[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x19B4[] = {
	0x00000004,
};

u32 dFoxMainMotion_0x19B8[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x19BC[] = {
	ftMotionCommandStopLoopSFX(40894464),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x19C4[] = {
	ftMotionCommandStopLoopSFX(61800448),
	ftMotionCommandStopLoopSFX(61800448),
	ftMotionCommandStopLoopSFX(61800448),
	0x00000032,
};

u32 dFoxMainMotion_0x19D4[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 240, 200, 0, 0, 0),
	ftMotionPlayFGM(189),
	ftMotionCommandMakeAttackColl(0, 0, 0, 5, 0, 2, 360, 0, 240, 0, 0, 100, 80, 3, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1A28[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(41, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1A34[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(8, 27, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(188),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1A68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag2(3),
	ftMotionCommandResetColAnim(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1A78[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x19D4),
	ftMotionCommandGoto(dFoxMainMotion_0x1A28),
	ftMotionCommandGoto(dFoxMainMotion_0x1A34),
	ftMotionCommandGoto(dFoxMainMotion_0x1A68),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1A9C[] = {
	ftMotionCommandEnd(),
};

#endif
