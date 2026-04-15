/* ftMotionCommand script data for relocData file 228 (KirbyMainMotion) */
/* File size: 9648 bytes (0x25B0) */

#include "relocdata_types.h"

#if defined(REGION_JP)

/* JP binary has a different layout; fold in its chain-encoded
 * bytes as a single raw u8 block. extractRelocInc regenerates
 * the inc.c below from the JP binary whenever JP assets are
 * extracted, and the companion .jp.reloc is empty so
 * fixRelocChain leaves the pre-baked chain bytes alone. */
u8 dKirbyMainMotion[9632] = {
	#include <KirbyMainMotion/jp_raw.data.inc.c>
};

#else  /* REGION_US */

#include <ft/ftdef.h>
#include <ft/fttypes.h>

u32 dKirbyMainMotion_0x0000[] = {
	0x0000000C,
};

u32 dKirbyMainMotion_0x0004[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(62914560),
	0x00000011,
};

u32 dKirbyMainMotion_0x000C[] = {
	0x00010007,
};

u32 dKirbyMainMotion_0x0010[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(62914560),
	0x00000011,
};

u32 dKirbyMainMotion_0x0018[] = {
	0x00020004,
};

u32 dKirbyMainMotion_0x001C[] = {
	ftMotionCommandStopLoopSFX(0),
	0x0000001E,
};

u32 dKirbyMainMotion_0x0024[] = {
	0x00030008,
};

u32 dKirbyMainMotion_0x0028[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(63753421),
	0x00000011,
};

u32 dKirbyMainMotion_0x0030[] = {
	0x0004000B,
};

u32 dKirbyMainMotion_0x0034[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(63753421),
	0x00000011,
};

u32 dKirbyMainMotion_0x003C[] = {
	0x0005000A,
};

u32 dKirbyMainMotion_0x0040[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(62914560),
	0x00000011,
};

u32 dKirbyMainMotion_0x0048[] = {
	0x00060005,
};

u32 dKirbyMainMotion_0x004C[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(64592282),
	0x00000019,
};

u32 dKirbyMainMotion_0x0054[] = {
	0x00070009,
};

u32 dKirbyMainMotion_0x0058[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(64592282),
	0x00000011,
};

u32 dKirbyMainMotion_0x0060[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x0064[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(63753421),
	0x00000011,
};

u32 dKirbyMainMotion_0x006C[] = {
	0x00090006,
};

u32 dKirbyMainMotion_0x0070[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(62914560),
	0x00000011,
};

u32 dKirbyMainMotion_0x0078[] = {
	0x000A0003,
};

u32 dKirbyMainMotion_0x007C[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(63753421),
	0x00000011,
};

u32 dKirbyMainMotion_0x0084[] = {
	0x000B000D,
};

u32 dKirbyMainMotion_0x0088[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(63753421),
	0x00000011,
};

u32 dKirbyMainMotion_0x0090[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x0094[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(58720256),
	0x00000011,
};

u32 dKirbyMainMotion_0x009C[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x00A0[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(62914560),
	0x00000011,
};

u32 dKirbyMainMotion_0x00A8[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x00AC[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(62914560),
	0x00000011,
};

u32 dKirbyMainMotion_0x00B4[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x00B8[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(62914560),
	0x00000011,
};

u32 dKirbyMainMotion_0x00C0[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x00C4[] = {
	ftMotionCommandStopLoopSFX(0),
	0x0000001E,
};

u32 dKirbyMainMotion_0x00CC[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x00D0[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(63753421),
	0x00000011,
};

u32 dKirbyMainMotion_0x00D8[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x00DC[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(63753421),
	0x00000011,
};

u32 dKirbyMainMotion_0x00E4[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x00E8[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(62914560),
	0x00000011,
};

u32 dKirbyMainMotion_0x00F0[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x00F4[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(64592282),
	0x00000011,
};

u32 dKirbyMainMotion_0x00FC[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x0100[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(64592282),
	0x00000011,
};

u32 dKirbyMainMotion_0x0108[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x010C[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(63753421),
	0x00000011,
};

u32 dKirbyMainMotion_0x0114[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x0118[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(62914560),
	0x00000011,
};

u32 dKirbyMainMotion_0x0120[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x0124[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(63753421),
	0x00000011,
};

u32 dKirbyMainMotion_0x012C[] = {
	0x00080000,
};

u32 dKirbyMainMotion_0x0130[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(63753421),
	0x00000011,
};

u32 dKirbyMainMotion_0x0138[] = {
	0x00020004,
};

u32 dKirbyMainMotion_0x013C[] = {
	ftMotionCommandStopLoopSFX(0),
	0x00000032,
};

u32 dKirbyMainMotion_0x0144[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandWait(3),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandReturn(),
};

u32 dKirbyMainMotion_0x0154[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0144),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0144),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0144),
	ftMotionCommandWait(140),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWait(80),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(70),
	ftMotionCommandGoto(dKirbyMainMotion_0x0154),
	ftMotionPlayFGM(119),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x01B8[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(108),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionPlayFGM(108),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dKirbyMainMotion_0x01B8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(128),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x021C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0228[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0258[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0268[] = {
	ftMotionPlayFGM(97),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0280[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionPlayFGM(86),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x02A4[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionPlayFGM(86),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x02C8[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionPlayFGM(86),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x02EC[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionPlayFGM(86),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0310[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionPlayFGM(86),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0330[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(75),
	ftMotionCommandWait(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0344[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x035C[] = {
	ftMotionPlayVoice(394),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0364[] = {
	ftMotionPlayFGM(633),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x036C[] = {
	ftMotionPlayFGM(633),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0380[] = {
	ftMotionCommandSetTexturePartID(9),
	ftMotionCommandReturn(),
};

u32 dKirbyMainMotion_0x0388[] = {
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0380),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0394[] = {
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0380),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03A8[] = {
	ftMotionPlayFGM(75),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03C0[] = {
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03C4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03CC[] = {
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03D0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03DC[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x03E8[] = {
	ftMotionCommandSetTexturePartID(8),
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

u32 dKirbyMainMotion_0x0428[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x03E8),
};

u32 dKirbyMainMotion_0x0430[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dKirbyMainMotion_0x0450[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0468[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x0450),
};

u32 dKirbyMainMotion_0x0470[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0430),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0480[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x0470),
	ftMotionCommandGoto(dKirbyMainMotion_0x0470),
	ftMotionCommandGoto(dKirbyMainMotion_0x0470),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 24, 6, 0, 0, 300, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 24, 6, 0, 0, 300, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x04F4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 29, 6, 1, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 29, 6, 1, 0, 80, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 29, 6, 1, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 29, 6, 1, 0, 80, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0578[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(380),
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x05B4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(380),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x05F4[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x05B4),
	ftMotionCommandSetTexturePartID(5),
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

u32 dKirbyMainMotion_0x063C[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0678[] = {
	ftMotionCommandSetTexturePartID(9),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(19),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0688[] = {
	ftMotionCommandSetTexturePartID(9),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x069C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06A4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06AC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(10),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06CC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06D4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x06E4[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 29, 4, 0, 0, 180, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 29, 4, 0, 0, 150, 200, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0748[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0758[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 4, 0, 0, 300, 0, 180, 300, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x07B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x07B8[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(40),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x07DC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x07E4[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(40),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0808[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0814[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(35),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0828[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0834[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0850[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x086C[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dKirbyMainMotion_0x0850),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0894[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x08B0[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x08D4[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dKirbyMainMotion_0x08B0),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0908[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x092C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0948[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dKirbyMainMotion_0x092C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0970[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x098C[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x09B0[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dKirbyMainMotion_0x098C),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x09E4[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0A08[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0A1C[] = {
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dKirbyMainMotion_0x0A08),
};

u32 dKirbyMainMotion_0x0A28[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0A40[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dKirbyMainMotion_0x0A28),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0A84[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0AB8[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0AF4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(1),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(21),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0B28[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0B4C[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0B70[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0BA4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0BC8[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0BF0[] = {
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0C18[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0C40[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0C64[] = {
	ftMotionCommandSetColAnim(75, 13),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0C8C[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetColAnim(75, 17),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0CC0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetColAnim(75, 32),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0CF8[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetColAnim(75, 26),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0D24[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0D34[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0D44[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dKirbyMainMotion_0x0D44),
};

u32 dKirbyMainMotion_0x0D68[] = {
	ftMotionCommandSetTexturePartID(7),
};

u32 dKirbyMainMotion_0x0D6C[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dKirbyMainMotion_0x0D6C),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(388),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dKirbyMainMotion_0x0D68),
	ftMotionCommandGoto(dKirbyMainMotion_0x0D68),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0DEC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0DF4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(389),
	ftMotionCommandSetTexturePartID(7),
	ftMotionCommandLoopBegin(12),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dKirbyMainMotion_0x0DF4),
};

u32 dKirbyMainMotion_0x0E24[] = {
	ftMotionPlayInterruptableVoice(397),
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dKirbyMainMotion_0x0E24),
};

FTThrowHitDesc dKirbyMainMotion_0x0E4C[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dKirbyMainMotion_0x0E84[] = {
	ftMotionCommandSetThrow((u32)dKirbyMainMotion_0x0E4C),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 260, 0, 0, -20, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 30, 1, 1, 0, 160, 0, 0, -160, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dKirbyMainMotion_0x0ED8[] = {
	{ 55, 13, 70, 70, 0, 100, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dKirbyMainMotion_0x0F10[] = {
	ftMotionCommandSetThrow((u32)dKirbyMainMotion_0x0ED8),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandPlayFGMStoreInfo(8),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(10),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 200, 0, 400),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0F60[] = {
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x0F64[] = {
	ftMotionCommandMakeAttackColl(0, 0, 0, 7, 1, 0, 200, 0, 0, 0, 361, 80, 0, 3, 0, 2, 0, 10),
	ftMotionPlayFGM(1),
	ftMotionCommandEffect(0, 29, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetAirJumpAdd(0),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dKirbyMainMotion_0x0FC8[] = {
	{ 54, 16, 115, 70, 0, 70, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dKirbyMainMotion_0x1000[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetThrow((u32)dKirbyMainMotion_0x0FC8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandPlayFGMStoreInfo(18),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(19),
	ftMotionPlayFGM(10),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, -280, 0, 0, 0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x107C[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1088[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1094[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x10A0[] = {
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0380),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x10B4[] = {
	ftMotionCommandSubroutine(dKirbyMainMotion_0x0380),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x10C8[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(377),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x10E4[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 0, 210, -50, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 11, 3, 1, 0, 210, 70, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1128[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 16, 4, 1, 0, 210, -50, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 16, 4, 1, 0, 210, 70, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x116C[] = {
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1170[] = {
	ftMotionCommandMakeAttackColl(0, 0, 16, 1, 1, 0, 100, -60, 0, 0, 65, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 16, 1, 1, 0, 100, 165, 0, 0, 65, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandReturn(),
};

u32 dKirbyMainMotion_0x11A8[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag2(3),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag2(4),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag2(5),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1170),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandGoto(dKirbyMainMotion_0x11A8),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(55050240),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1230[] = {
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(57671680),
	ftMotionCommandStopLoopSFX(59179008),
	ftMotionCommandStopLoopSFX(26738688),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(52428800),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandHideItem(22020096),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(57671680),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandStopLoopSFX(18874368),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(52428800),
	ftMotionCommandStopLoopSFX(59179008),
	ftMotionCommandHideItem(18874368),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandStopLoopSFX(55050240),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandStopLoopSFX(10485760),
	ftMotionCommandStopLoopSFX(53739520),
	ftMotionCommandHideItem(32505856),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x12B4[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionPlayVoice(378),
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 1, 0, 260, 0, 150, 200, 361, 100, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 8, 1, 0, 260, 0, 150, 200, 361, 100, 0, 3, 1, 2, 1, 10),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(16),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1324[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 11, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandMakeAttackColl(1, 0, 24, 11, 1, 0, 250, 160, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1360[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandMakeAttackColl(1, 0, 24, 10, 1, 0, 250, 160, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x139C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandMakeAttackColl(1, 0, 24, 9, 1, 0, 250, 160, 0, 0, 361, 100, 0, 3, 0, 1, 1, 8),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x13D8[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandMakeAttackColl(0, 0, 29, 14, 1, 0, 280, 0, 0, 0, 96, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 29, 14, 1, 0, 320, 200, 0, 0, 96, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 29, 10, 1, 0, 280, 0, 0, 0, 88, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 29, 10, 1, 0, 320, 200, 0, 0, 88, 100, 0, 3, 0, 1, 1, 20),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1440[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 250, 0, 0, 0, 20, 110, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 24, 9, 1, 0, 350, 150, 0, 0, 20, 110, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1480[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandMakeAttackColl(0, 0, 24, 17, 1, 0, 280, -20, 0, 0, 361, 120, 0, 3, 1, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 24, 17, 1, 0, 280, 140, 0, 0, 361, 120, 0, 3, 1, 2, 1, 20),
	ftMotionCommandEffect(22, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 24, 12, 1, 0, 250, -20, 0, 0, 361, 120, 0, 3, 1, 2, 1, 12),
	ftMotionCommandMakeAttackColl(1, 0, 24, 12, 1, 0, 250, 140, 0, 0, 361, 120, 0, 3, 1, 2, 1, 12),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x151C[] = {
	ftMotionCommandWaitAsync(14),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 29, 16, 1, 0, 320, 140, 0, 0, 90, 120, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 27, 16, 1, 0, 280, 0, 0, 0, 90, 120, 0, 3, 0, 2, 1, 20),
	ftMotionCommandEffect(27, 31, 0, 110, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 29, 12, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 12, 1, 0, 230, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x15BC[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusPartID(29, 3),
	ftMotionCommandSetHitStatusPartID(24, 3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 29, 18, 1, 0, 300, 180, 0, 0, 34, 75, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 24, 18, 1, 0, 300, 180, 0, 0, 34, 75, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(2, 0, 5, 18, 1, 0, 180, 0, 0, 0, 35, 75, 0, 3, 0, 2, 1, 30),
	ftMotionCommandEffect(27, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(22, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
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

u32 dKirbyMainMotion_0x1668[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 5, 15, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 24, 15, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 10, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 24, 10, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x16DC[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(30),
	ftMotionCommandMakeAttackColl(0, 0, 0, 2, 1, 0, 380, 0, 150, 220, -90, 100, 30, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 2, 1, 0, 360, 0, 150, 100, -90, 100, 30, 3, 0, 1, 1, 0),
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
	ftMotionCommandMakeAttackColl(0, 0, 0, 6, 1, 0, 380, 0, 150, 220, 361, 120, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 6, 1, 0, 360, 0, 150, 100, 361, 120, 0, 3, 0, 2, 1, 10),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1770[] = {
	ftMotionPlayFGM(75),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 3, 1, 0, 300, 0, 150, 220, 361, 100, 80, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 3, 1, 0, 270, 0, 150, 100, 361, 100, 80, 3, 0, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x17B8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 16, 1, 0, 380, 0, 150, -240, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 16, 1, 0, 360, 0, 150, -100, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 380, 0, 150, -240, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 12, 1, 0, 360, 0, 150, -100, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(16),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1828[] = {
	ftMotionPlayFGM(75),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1840[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetTexturePartID(5),
	ftMotionPlayFGM(195),
	ftMotionCommandSetFlag1(40),
	ftMotionCommandMakeAttackColl(0, 0, 5, 12, 1, 0, 210, 0, 60, 0, 361, 100, 100, 3, 0, 1, 0, 10),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetAttackCollDamage(0, 10),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetAttackCollDamage(0, 8),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetAttackCollDamage(0, 6),
	ftMotionCommandWait(16),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x188C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(22),
	ftMotionCommandMakeAttackColl(0, 0, 0, 3, 1, 0, 380, 0, -120, 100, -90, 100, 0, 3, 0, 1, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 0, 3, 1, 0, 360, 0, 0, 60, -90, 100, 0, 3, 0, 1, 0, 30),
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

u32 dKirbyMainMotion_0x18F4[] = {
	ftMotionPlayFGM(75),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 3, 1, 0, 300, 0, 0, 150, 361, 100, 80, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 3, 1, 0, 300, 0, 0, -150, 361, 100, 80, 3, 0, 2, 1, 0),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x193C[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(201),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionPlayFGM(290),
	ftMotionCommandEffect(0, 29, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1970[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x193C),
};

u32 dKirbyMainMotion_0x1978[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandMakeRumble(20, 7),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(4),
	ftMotionCommandWaitAsync(50),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWaitAsync(52),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(5),
	ftMotionCommandWaitAsync(58),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x19D4[] = {
	ftMotionCommandSetParallelScript(dKirbyMainMotion_0x1978),
	ftMotionPlayVoice(383),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 31, 0, 0, 340, -100, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionPlayFGM(192),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 8, 1, 3, 150, 0, 100, 200, 88, 100, 121, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 8, 1, 3, 150, 0, 100, 530, 96, 100, 121, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 8, 1, 3, 150, 0, 400, 200, 88, 100, 105, 3, 0, 2, 5, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 8, 1, 3, 150, 0, 400, 530, 96, 100, 105, 3, 0, 2, 5, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandEffect(0, 74, 0, 0, 0, 0, 120, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandEffect(0, 31, 0, 0, 280, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 2, 1, 3, 330, 0, 300, 400, -85, 100, 200, 3, 0, 2, 5, 0),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollSize(0, 0),
	ftMotionCommandWaitAsync(54),
	ftMotionCommandSetAttackCollSize(0, 450),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1AD8[] = {
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1ADC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayVoice(378),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(193),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1B30[] = {
	ftMotionCommandMakeRumble(10, 9),
	ftMotionCommandEffect(0, 76, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(54, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionPlayFGM(202),
	ftMotionCommandHideModelPartAll(),
	ftMotionPlayFGM(194),
	ftMotionCommandSetModelPartID(6, 2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1B84[] = {
	ftMotionPlayFGM(202),
	ftMotionCommandEffect(0, 76, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(54, 0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandMakeRumble(10, 9),
	ftMotionCommandHideModelPartAll(),
	ftMotionCommandSetModelPartID(6, 2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1BB4[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandHideModelPartAll(),
	ftMotionCommandSetModelPartID(6, 2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 20, 1, 0, 400, 0, 0, 0, 50, 70, 0, 3, 0, 2, 1, 70),
	ftMotionCommandPauseScript(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1BEC[] = {
	ftMotionCommandMakeAttackColl(0, 0, 0, 20, 1, 0, 400, 0, 0, 0, 50, 70, 0, 3, 0, 2, 1, 70),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1C04[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionPlayFGM(194),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1C40[] = {
	ftMotionCommandResetModelPartAll(),
	ftMotionPlayVoice(398),
	ftMotionCommandSetColAnim(55, 0),
	ftMotionCommandEffect(0, 77, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1C70[] = {
	ftMotionCommandSetModelPartID(6, 1),
	ftMotionCommandSetModelPartID(7, 0),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandReturn(),
};

u32 dKirbyMainMotion_0x1C80[] = {
	ftMotionCommandPlayLoopSFXStoreInfo(203),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1C70),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dKirbyMainMotion_0x1C94[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dKirbyMainMotion_0x1CCC[] = {
	ftMotionCommandSetThrow((u32)dKirbyMainMotion_0x1C94),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 290, 0, 240, 200, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 360, 0, 240, 410, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1D08[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x1C70),
	ftMotionCommandEffect(-1, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(196),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1D3C[] = {
	ftMotionCommandSetTexturePartID(10),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1D44[] = {
	ftMotionCommandMakeRumble(20, 7),
	ftMotionCommandSetTexturePartID(10),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(54),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1D78[] = {
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
};

u32 dKirbyMainMotion_0x1D88[] = {
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(39, 0),
	ftMotionCommandEffect(17, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(215),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1DB0[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, -200, 0, 0, 0),
	ftMotionCommandGoto(dKirbyMainMotion_0x1D88),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
};

u32 dKirbyMainMotion_0x1DD8[] = {
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(39, 0),
	ftMotionCommandEffect(17, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(215),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1E00[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, -200, 0, 0, 0),
	ftMotionCommandGoto(dKirbyMainMotion_0x1DD8),
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

u32 dKirbyMainMotion_0x1E60[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetColAnim(47, 0),
	ftMotionPlayFGM(185),
	ftMotionCommandEffect(17, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1EA4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1EBC[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1ED0[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(48, 0),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(179),
	ftMotionCommandEffect(0, 11, 0, 0, 90, -180, 0, 90, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dKirbyMainMotion_0x1ED0),
};

u32 dKirbyMainMotion_0x1F04[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(48, 0),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(179),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dKirbyMainMotion_0x1F04),
};

u32 dKirbyMainMotion_0x1F24[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandWait(2),
	ftMotionCommandSetColAnim(49, 4),
	ftMotionCommandWait(7),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 15, 14, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 14, 1, 0, 340, 300, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionPlayFGM(177),
	ftMotionPlayVoice(386),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x1F84[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x1F24),
};

u32 dKirbyMainMotion_0x1F8C[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionCommandSetColAnim(49, 16),
	ftMotionCommandWait(9),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandMakeAttackColl(0, 0, 15, 36, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 36, 1, 0, 340, 320, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 36, 1, 0, 50, 0, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 20, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEffect(17, 31, 0, 0, 0, 0, 200, 200, 0),
	ftMotionPlayFGM(176),
	ftMotionPlayVoice(386),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(17, 31, 0, 0, 0, 0, 200, 200, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x203C[] = {
	ftMotionCommandGoto(dKirbyMainMotion_0x1F8C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -240, 0, 0, 0),
	ftMotionCommandWait(13),
	ftMotionCommandEffect(17, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x2070[] = {
	ftMotionCommandWait(13),
	ftMotionCommandEffect(17, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x2088[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(17, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 7),
};

u32 dKirbyMainMotion_0x20A0[] = {
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dKirbyMainMotion_0x20A0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(47, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(17, 18, 0, 200, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -240, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x20F4[] = {
	ftMotionCommandSetColAnim(47, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(17, 18, 0, 200, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -200, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x2124[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetModelPartID(12, -1),
	ftMotionPlayVoice(381),
	ftMotionPlayFGM(207),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 210, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x2170[] = {
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x2174[] = {
	ftMotionPlayFGM(208),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetModelPartID(12, -1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x218C[] = {
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandSetModelPartID(6, 14),
	ftMotionCommandSetModelPartID(7, 0),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandReturn(),
};

FTThrowHitDesc dKirbyMainMotion_0x21A0[] = {
	{ -1, 20, 361, 100, 0, 0, 0 },
	{ -1, 5, 361, 100, 0, 0, 0 },
};

u32 dKirbyMainMotion_0x21D8[] = {
	ftMotionCommandSetThrow((u32)dKirbyMainMotion_0x21A0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSubroutine(dKirbyMainMotion_0x218C),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 300, 0, 100, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(254),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x2218[] = {
	ftMotionPlayFGM(19),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x222C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetTexturePartID(10),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetTexturePartID(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 7, 0, 0, 100, 200, 0, 0, 0),
	ftMotionPlayFGM(56),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x2268[] = {
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandSetTexturePartID(9),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandWait(60),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x228C[] = {
	ftMotionCommandSetParallelScript(dKirbyMainMotion_0x2268),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(50, 0),
	ftMotionPlayVoice(384),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(12),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandEffect(13, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 15, 24, 1, 0, 250, 400, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 26, 1, 0, 200, 0, 0, 0, 361, 120, 0, 3, 0, 2, 1, 30),
	ftMotionPlayFGM(184),
	ftMotionPlayVoice(385),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandStopRumble(7),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x2348[] = {
	ftMotionCommandSetParallelScript(dKirbyMainMotion_0x2268),
	ftMotionCommandSetColAnim(50, 0),
	ftMotionPlayVoice(384),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandWait(12),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(13, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(42),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 15, 24, 1, 0, 250, 400, 0, 0, 361, 120, 0, 3, 0, 2, 1, 40),
	ftMotionCommandMakeAttackColl(1, 0, 15, 26, 1, 0, 200, 0, 0, 0, 361, 120, 0, 3, 0, 2, 1, 40),
	ftMotionPlayFGM(184),
	ftMotionPlayVoice(385),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandStopRumble(7),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x241C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayVoice(382),
	ftMotionPlayFGM(229),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x245C[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayVoice(382),
	ftMotionPlayFGM(229),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x2490[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayFGM(222),
	ftMotionPlayVoice(395),
	ftMotionCommandEffect(0, 41, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 31, 0, 0, 150, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x24E8[] = {
	ftMotionCommandSetTexturePartID(6),
	ftMotionPlayFGM(222),
	ftMotionPlayVoice(395),
	ftMotionCommandEffect(0, 41, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dKirbyMainMotion_0x253C[] = {
	ftMotionCommandWaitAsync(12),
	ftMotionPlayFGM(177),
	ftMotionPlayVoice(387),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(16, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 16, 13, 1, 0, 310, -50, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20),
	ftMotionCommandMakeAttackColl(1, 0, 16, 13, 1, 0, 310, 70, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};

#endif
