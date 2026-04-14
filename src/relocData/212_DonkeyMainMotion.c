/* ftMotionCommand script data for relocData file 212 (DonkeyMainMotion) */
/* File size: 7376 bytes (0x1CD0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>

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

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0020[] = {
	0xA0600002, 0x38000070,
	0x80000002, 0x98002C00,
	0x00000000, 0xFF880000,
	0x003C0000, 0x04000006,
	0x84000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0020[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionPlayFGM(116),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0048[] = {
	0x08000002, 0x38000065,
	0x98002C00, 0x00000000,
	0x00320000, 0x00000000,
	0x94000000, 0x90000000,
	0x005C0012, 0x3800007C,
	0x98002C00, 0x00000000,
	0x003C0000, 0x00000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0048[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(105),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 50, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0048),
	ftMotionPlayFGM(128),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dDonkeyMainMotion_0x0084[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(2),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0094[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, 100, 0, 0, 0),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x00C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x00D4[] = {
	0x3800005A, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x00D4[] = {
	ftMotionPlayFGM(94),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x00EC[] = {
	0x3800004F, 0x80000002,
	0x98002C00, 0x00000000,
	0x00000064, 0x00640064,
	0x04000006, 0x84000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x00EC[] = {
	ftMotionPlayFGM(83),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0110[] = {
	0xBC000003, 0x38000044,
	0x98002C00, 0x00000000,
	0xFFC40000, 0x00000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0110[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(72),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x012C[] = {
	0xBC000003, 0x38000044,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x012C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(72),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0148[] = {
	0x3800026A, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0148[] = {
	ftMotionPlayFGM(630),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0150[] = {
	0x3800026A, 0x74000003,
	0x08000002, 0x74000001,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0150[] = {
	ftMotionPlayFGM(630),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

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
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x018C[] = {
	0xBC000003, 0x38000044,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x018C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(72),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

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
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 16, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 16, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 6, 0, 0, 220, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0320[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 21, 6, 0, 0, 210, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 21, 6, 0, 0, 210, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 0, 21, 6, 0, 0, 210, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 21, 6, 0, 0, 210, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x03A4[] = {
	0xC4000009, 0xA0600002,
	0x9800B000, 0x00000000,
	0x00000000, 0x00000000,
	0x4400013D, 0x38000011,
	0x98007C00, 0x00000000,
	0x00000000, 0x00000000,
	0x74000003, 0x08000018,
	0x74000001, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x03A4[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, 44, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(327),
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x03E4[] = {
	0xC4000007, 0xA0600002,
	0x9800B000, 0x00000000,
	0x00000000, 0x00000000,
	0x4400013D, 0x3800000B,
	0x98007C00, 0x00000000,
	0x00000000, 0x00000000,
	0x74000003, 0x08000014,
	0x74000001, 0xC8000007,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x03E4[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, 44, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(327),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};
#endif

u32 dDonkeyMainMotion_0x0428[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x03E4),
	ftMotionCommandWaitAsync(4),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 15, 0, 0, 0, 0, 0, 0, 0),
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

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x04E8[] = {
	0xA0600002, 0x98007C00,
	0x00000000, 0x00000000,
	0x00000000, 0x74000003,
	0x4400013C, 0x08000002,
	0x4C000026, 0x0C00A0C0,
	0x014A0000, 0x00000000,
	0x5A464193, 0x00220000,
	0x04000002, 0x74000001,
	0x98004C00, 0x0000FFB0,
	0xFF4C0000, 0x00000000,
	0x04000008, 0x18000000,
	0xA0600000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x04E8[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(326),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 330, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0548[] = {
	0xA0600002, 0x98007C00,
	0x00000000, 0x00000000,
	0x00000000, 0x74000003,
	0xA0500001, 0x4400013C,
	0x04000009, 0x0C0140C0,
	0x01180000, 0x00000000,
	0x5A464193, 0x00220000,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x4C000026, 0x04000002,
	0x74000001, 0x04000004,
	0x18000000, 0x0400000C,
	0xA0500000, 0xA0600000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0548[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionPlayVoice(326),
	ftMotionCommandWait(9),
	ftMotionCommandMakeAttackColl(0, 0, 10, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
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
#endif

u32 dDonkeyMainMotion_0x05B4[] = {
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05B8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x05C0[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0660[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0680[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0660),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x06B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x06D0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
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
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0734[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x075C[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0778[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dDonkeyMainMotion_0x075C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x07A0[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x07BC[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0814[] = {
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
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
	ftMotionCommandSubroutine(0x0000), /* extern */
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
	ftMotionCommandSubroutine(0x0064), /* extern */
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
	ftMotionCommandSubroutine(0x00C8), /* extern */
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
	ftMotionCommandSubroutine(0x012C), /* extern */
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
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0960[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0978[] = {
	0xC4000007, 0xBC000003,
	0xA0600002, 0x50000000,
	0xB12C0028, 0x08000014,
	0x88000000, 0x026C0092,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0978[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dDonkeyMainMotion_0x09A4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x09C8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x09E4[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x09FC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0A1C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0A40[] = {
	0xBC000003, 0xB1280008,
	0x08000005, 0x88000000,
	0x029B0125, 0x04000006,
	0x18000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0A40[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(75, 8),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0A60[] = {
	0xB128000D, 0x08000009,
	0x88000000, 0x02A7013E,
	0x0800000A, 0x54000001,
	0x04000003, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0A60[] = {
	ftMotionCommandSetColAnim(75, 13),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0A84[] = {
	0xBC000003, 0xA0600002,
	0xB1280018, 0x50000000,
	0x08000014, 0x88000000,
	0x02B10157, 0x08000015,
	0x54000002, 0x04000003,
	0x18000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0A84[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetColAnim(75, 24),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0AB4[] = {
	0xBC000004, 0xB1280016,
	0x08000004, 0x88000000,
	0x02C40170, 0x04000016,
	0x18000000, 0x0800002E,
	0xBC000003, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0AB4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 22),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(46),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#endif

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
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B00),
};

u32 dDonkeyMainMotion_0x0B24[] = {
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 200, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 200, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0B24),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0BB4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0BBC[] = {
	0xBC000003, 0x44000141,
	0xA0600001, 0x80000009,
	0x9800A000, 0x000000B4,
	0x0000017C, 0x017C00C8,
	0x0400000A, 0x84000000,
	0x90000000, 0x030402EF,
};
#else
u32 dDonkeyMainMotion_0x0BBC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(331),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandEffect(0, 40, 0, 0, 180, 0, 380, 380, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0BBC),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0BEC[] = {
	0x4800013A, 0xA0600001,
	0xBC000003, 0x98016800,
	0x00000096, 0x0000012C,
	0x012C012C, 0x0400000A,
	0x90000000, 0x031402FB,
};
#else
u32 dDonkeyMainMotion_0x0BEC[] = {
	ftMotionPlayInterruptableVoice(324),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 150, 0, 300, 300, 300),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dDonkeyMainMotion_0x0BEC),
};
#endif

FTThrowHitDesc dDonkeyMainMotion_0x0C14[] = {
	{ -1, 2, 361, 100, 0, 0, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

u32 dDonkeyMainMotion_0x0C4C[] = {
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0C14),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 29, 1, 1, 0, 330, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 180, 0, 200, 250, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0C94[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffect(29, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(9),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dDonkeyMainMotion_0x0CF0[] = {
	{ 52, 8, 45, 80, 0, 70, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

u32 dDonkeyMainMotion_0x0D28[] = {
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0CF0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(29, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(18),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dDonkeyMainMotion_0x0D88[] = {
	{ 52, 18, 45, 70, 0, 80, 0 },
	{ -1, 9, 361, 100, 0, 0, 0 },
};

u32 dDonkeyMainMotion_0x0DC0[] = {
	ftMotionCommandSetThrow((u32)dDonkeyMainMotion_0x0D88),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(29, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(18),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E1C[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E28[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E34[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E40[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x0E54[] = {
	ftMotionCommandSubroutine(dDonkeyMainMotion_0x0164),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0E68[] = {
	0xBC000003, 0xC4000009,
	0x4400013B, 0xC0000000,
	0xA0800001, 0xA0500001,
	0xA0600002, 0x0800002E,
	0xA0600000, 0x08000032,
	0xC0000001, 0x0800003C,
	0x58000001, 0x00000000,
};
#else
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
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0EA0[] = {
	0xBC000003, 0x08000005,
	0x0C012090, 0x0118008C,
	0x00000000, 0x5A464003,
	0x00200000, 0x0C812090,
	0x00D2FFD8, 0x00000000,
	0x5A464003, 0x00200000,
	0x4C000027, 0x04000004,
	0x18000000, 0x0800000B,
	0x58000001, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0EA0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 9, 4, 1, 0, 280, 140, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 4, 1, 0, 210, -40, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0EE8[] = {
	0xBC000003, 0x08000006,
	0x0C01E090, 0x0118008C,
	0x00000000, 0x5A464003,
	0x00200000, 0x0C81E090,
	0x00D2FFD8, 0x00000000,
	0x5A464003, 0x00200000,
	0x4C000026, 0x04000006,
	0x18000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0EE8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 15, 4, 1, 0, 280, 140, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 4, 1, 0, 210, -40, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0F28[] = {
	0xBC000002, 0x08000002,
	0x0C02A190, 0x0122005A,
	0x00000000, 0x190641E3,
	0x01420000, 0x4C000025,
	0x98004C00, 0x00000000,
	0x00000000, 0x00000000,
	0x04000004, 0x0C02A190,
	0x0122005A, 0x00000000,
	0x190641E3, 0x01420000,
	0x04000014, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0F28[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 21, 12, 1, 0, 290, 90, 0, 0, 100, 100, 120, 3, 1, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 21, 12, 1, 0, 290, 90, 0, 0, 100, 100, 120, 3, 1, 2, 1, 0),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0F7C[] = {
	0xBC000003, 0x0800000C,
	0x0C01C1B0, 0x00F00050,
	0x00000000, 0x5A464003,
	0x00400000, 0x0C81E1B0,
	0x01180096, 0x00000000,
	0x5A464003, 0x00400000,
	0x0D01C1B0, 0x00B4FFE2,
	0x00000000, 0x5A464003,
	0x00400000, 0x4C000025,
	0x04000006, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0F7C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 14, 13, 1, 0, 240, 80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 13, 1, 0, 280, 150, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 14, 13, 1, 0, 180, -30, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x0FD0[] = {
	0xBC000003, 0x0800000C,
	0x0C01C190, 0x00F00050,
	0x00000000, 0x5A464003,
	0x00400000, 0x0C81E190,
	0x01180096, 0x00000000,
	0x5A464003, 0x00400000,
	0x0D01C190, 0x00B4FFE2,
	0x00000000, 0x5A464003,
	0x00400000, 0x4C000025,
	0x04000006, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x0FD0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 14, 12, 1, 0, 240, 80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 12, 1, 0, 280, 150, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 14, 12, 1, 0, 180, -30, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1024[] = {
	0xBC000003, 0x0800000C,
	0x0C01C170, 0x00F00050,
	0x00000000, 0x5A464003,
	0x00400000, 0x0C81E170,
	0x01180096, 0x00000000,
	0x5A464003, 0x00400000,
	0x0D01C170, 0x00B4FFE2,
	0x00000000, 0x5A464003,
	0x00400000, 0x4C000025,
	0x04000006, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1024[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 14, 11, 1, 0, 240, 80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 11, 1, 0, 280, 150, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 14, 11, 1, 0, 180, -30, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1078[] = {
	0xBC000003, 0xA0500001,
	0xA0600002, 0x08000004,
	0x0C0101B0, 0x00F00050,
	0x00000000, 0x19082003,
	0x00400500, 0x0C8121B0,
	0x00FA00BE, 0x00000000,
	0x19082003, 0x00400500,
	0x4C000025, 0x04000014,
	0xA0500000, 0xA0600000,
	0x18000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1078[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 8, 13, 1, 0, 240, 80, 0, 0, 100, 130, 0, 3, 0, 2, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 9, 13, 1, 0, 250, 190, 0, 0, 100, 130, 0, 3, 0, 2, 0, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(20),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x10C8[] = {
	0xBC000004, 0x08000006,
	0xA0800001, 0x04000005,
	0x0C01C110, 0x00DC0050,
	0x00000000, 0x0A050003,
	0x00400F00, 0x0C81E110,
	0x00F000B4, 0x00000000,
	0x0A050003, 0x00400F00,
	0x4C000025, 0x04000006,
	0x18000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x10C8[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWait(5),
	ftMotionCommandMakeAttackColl(0, 0, 14, 8, 1, 0, 220, 80, 0, 0, 40, 80, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 8, 1, 0, 240, 180, 0, 0, 40, 80, 0, 3, 0, 2, 0, 30),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1110[] = {
	0xBC000003, 0xA0800001,
	0x08000006, 0x98787C00,
	0x005A0000, 0x00000000,
	0x00000000, 0x0800001B,
	0x50000000, 0x0C01C2B0,
	0x01180050, 0x00000000,
	0x5A464003, 0x01400A00,
	0x0C81E2B0, 0x014000F0,
	0x00000000, 0x5A464003,
	0x01400A00, 0x0D01C2B0,
	0x00C8FFE2, 0x00000000,
	0x5A464003, 0x01400A00,
	0x98004C00, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000025, 0x04000006,
	0xA0800000, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1110[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 21, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 21, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 21, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1194[] = {
	0xBC000003, 0xA0800001,
	0x08000006, 0x98787C00,
	0x005A0000, 0x00000000,
	0x00000000, 0x0800001B,
	0x50000000, 0x0C01C2B0,
	0x01180050, 0x00000000,
	0x5A464003, 0x01400A00,
	0x0C81E2B0, 0x014000F0,
	0x00000000, 0x5A464003,
	0x01400A00, 0x0D01C2B0,
	0x00C8FFE2, 0x00000000,
	0x5A464003, 0x01400A00,
	0x98004C00, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000025, 0x04000006,
	0xA0800000, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1194[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 21, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 21, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 21, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1218[] = {
	0xBC000003, 0xA0800001,
	0x08000006, 0x98787C00,
	0x005A0000, 0x00000000,
	0x00000000, 0x0800001B,
	0x50000000, 0x0C01C290,
	0x01180050, 0x00000000,
	0x5A464003, 0x01400A00,
	0x0C81E290, 0x014000F0,
	0x00000000, 0x5A464003,
	0x01400A00, 0x0D01C290,
	0x00C8FFE2, 0x00000000,
	0x5A464003, 0x01400A00,
	0x98004C00, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000025, 0x04000006,
	0xA0800000, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1218[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 20, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 20, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 20, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x129C[] = {
	0xBC000003, 0xA0800001,
	0x08000006, 0x98787C00,
	0x005A0000, 0x00000000,
	0x00000000, 0x0800001B,
	0x50000000, 0x0C01C270,
	0x01180050, 0x00000000,
	0x5A464003, 0x01400A00,
	0x0C81E270, 0x014000F0,
	0x00000000, 0x5A464003,
	0x01400A00, 0x0D01C270,
	0x00C8FFE2, 0x00000000,
	0x5A464003, 0x01400A00,
	0x98004C00, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000025, 0x04000006,
	0xA0800000, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x129C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 19, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 19, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 19, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1320[] = {
	0xBC000003, 0xA0800001,
	0x08000006, 0x98787C00,
	0x005A0000, 0x00000000,
	0x00000000, 0x0800001B,
	0x50000000, 0x0C01C270,
	0x01180050, 0x00000000,
	0x5A464003, 0x01400A00,
	0x0C81E270, 0x014000F0,
	0x00000000, 0x5A464003,
	0x01400A00, 0x0D01C270,
	0x00C8FFE2, 0x00000000,
	0x5A464003, 0x01400A00,
	0x98004C00, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000025, 0x04000006,
	0xA0800000, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1320[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(15, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(27),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 19, 1, 0, 280, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 19, 1, 0, 320, 240, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 14, 19, 1, 0, 200, -30, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dDonkeyMainMotion_0x13A4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWait(4),
	ftMotionCommandEffect(15, 31, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(9, 31, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandSetHitStatusPartID(15, 3),
	ftMotionCommandSetHitStatusPartID(9, 3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 15, 21, 1, 0, 480, 180, 0, 0, 90, 100, 0, 3, 4, 2, 0, 40),
	ftMotionCommandMakeAttackColl(1, 0, 9, 21, 1, 0, 480, 180, 0, 0, 90, 100, 0, 3, 4, 2, 0, 40),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(2),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(20),
	ftMotionCommandSetModelPartID(12, 0),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1458[] = {
	0x50000000, 0x0800000C,
	0xA0800001, 0xA0500001,
	0xBC000004, 0x0C034270,
	0x00D20000, 0x00000000,
	0x0F064003, 0x00420F00,
	0x0C82A270, 0x00D20000,
	0x00000000, 0x0F064003,
	0x00420F00, 0x0D034270,
	0x010E00B4, 0x00000000,
	0x0F064003, 0x00420F00,
	0x0D82A270, 0x010E00B4,
	0x00000000, 0x0F064003,
	0x00420F00, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x98D07C00,
	0x00B40000, 0x00000000,
	0x00000000, 0x98A87C00,
	0x00B40000, 0x00000000,
	0x00000000, 0x4C000025,
	0x04000014, 0x18000000,
	0x08000036, 0xA0800000,
	0xA0500000, 0xBC000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1458[] = {
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 26, 19, 1, 0, 210, 0, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 21, 19, 1, 0, 210, 0, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(2, 0, 26, 19, 1, 0, 270, 180, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(3, 0, 21, 19, 1, 0, 270, 180, 0, 0, 60, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(26, 31, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(21, 31, 0, 180, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(20),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(54),
	ftMotionCommandSetModelPartID(16, 0),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x150C[] = {
	0x08000004, 0x58000032,
	0x0C01E1F0, 0x00C80078,
	0x00000000, 0x5A464003,
	0x00400000, 0x0C8121F0,
	0x00C80078, 0x00000000,
	0x5A464003, 0x00400000,
	0x0D00A1F0, 0x01180000,
	0x00000000, 0x5A464003,
	0x00400000, 0x4C000026,
	0x04000004, 0x0C01E190,
	0x00C80078, 0x00000000,
	0x5A464003, 0x00400000,
	0x0C812190, 0x00C80078,
	0x00000000, 0x5A464003,
	0x00400000, 0x0D00A190,
	0x01180000, 0x00000000,
	0x5A464003, 0x00400000,
	0x04000016, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x150C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 15, 15, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 15, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 15, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 15, 12, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 12, 1, 0, 200, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 12, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandWait(22),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x15A4[] = {
	0x08000008, 0x0C01E210,
	0x00F000DC, 0x00000000,
	0xEE864003, 0x00400000,
	0x0C81C210, 0x00A00050,
	0x00000000, 0x5A464003,
	0x01400A00, 0x0D010210,
	0x00A00050, 0x00000000,
	0x5A464003, 0x01400A00,
	0x4C000025, 0x04000008,
	0x18000000, 0x04000004,
	0x58000001, 0x04000010,
	0x58000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x15A4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 15, 16, 1, 0, 240, 220, 0, 0, -70, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 16, 1, 0, 160, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandMakeAttackColl(2, 0, 8, 16, 1, 0, 160, 80, 0, 0, 361, 100, 0, 3, 1, 2, 0, 20),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWait(16),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1604[] = {
	0xBC000004, 0x38000044,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1604[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(72),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1620[] = {
	0x08000008, 0x58000001,
	0x0C0001F0, 0x01540000,
	0x00C8FE8E, 0x5A464003,
	0x00420000, 0x0C8001F0,
	0x01180000, 0x008CFF56,
	0x5A464003, 0x00420000,
	0x4C000025, 0x04000006,
	0x0C000150, 0x01540000,
	0x00C8FE8E, 0x5A464003,
	0x00220000, 0x0C800150,
	0x01180000, 0x008CFF56,
	0x5A464003, 0x00220000,
	0x04000016, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1620[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 340, 0, 200, -370, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 15, 1, 0, 280, 0, 140, -170, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 1, 0, 340, 0, 200, -370, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 1, 0, 280, 0, 140, -170, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(22),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1690[] = {
	0xBC000004, 0x38000044,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1690[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(72),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x16AC[] = {
	0xA0500001, 0x08000003,
	0x58000014, 0x0C010190,
	0x0104000A, 0x00000000,
	0x1B864003, 0x00400000,
	0x0C812190, 0x012C0096,
	0x00000000, 0x1B864003,
	0x00400000, 0x4C000025,
	0x04000012, 0xA0500000,
	0x58000000, 0x18000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x16AC[] = {
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 8, 12, 1, 0, 260, 10, 0, 0, 110, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 9, 12, 1, 0, 300, 150, 0, 0, 110, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(18),
	ftMotionCommandSetModelPartID(10, 0),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x16F8[] = {
	0x08000006, 0x58000014,
	0x0C0341B0, 0x014A0050,
	0x00000000, 0xE9850003,
	0x00420500, 0x0C82A1B0,
	0x014A0050, 0x00000000,
	0xE9850003, 0x00420500,
	0x0D0341B0, 0x0118FFB0,
	0x00000000, 0xE9850003,
	0x00420500, 0x0D82A1B0,
	0x0118FFB0, 0x00000000,
	0xE9850003, 0x00420500,
	0x4C000025, 0x04000006,
	0x20050000, 0x20850000,
	0x21050000, 0x21850000,
	0x24009600, 0x24809600,
	0x25008200, 0x25808200,
	0x04000012, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x16F8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 26, 13, 1, 0, 330, 80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 21, 13, 1, 0, 330, 80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 26, 13, 1, 0, 280, -80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(3, 0, 21, 13, 1, 0, 280, -80, 0, 0, -90, 90, 0, 3, 0, 2, 1, 15),
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
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1788[] = {
	0xBC000003, 0x38000044,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1788[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(72),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x17A4[] = {
	0x08000038, 0xC400000A,
	0x98007400, 0x000000FA,
	0x00000000, 0x00000000,
	0x9800B800, 0x000000FA,
	0x00000000, 0x00000000,
	0x38000037, 0x04000004,
	0x5C000001, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x17A4[] = {
	ftMotionCommandWaitAsync(56),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandEffect(0, 29, 0, 0, 250, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 46, 0, 0, 250, 0, 0, 0, 0),
	ftMotionPlayFGM(59),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};
#endif

u32 dDonkeyMainMotion_0x17DC[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x17A4),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dDonkeyMainMotion_0x17FC[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1810[] = {
	0xC4000007, 0xBC000003,
	0xB0C00000, 0xA0600002,
	0x08000002, 0x380000A9,
	0x98002C00, 0x0000005A,
	0xFF4C0000, 0x005A0000,
	0x94000000, 0x90000000,
	0x06180604,
};
#else
u32 dDonkeyMainMotion_0x1810[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(48, 0),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(179),
	ftMotionCommandEffect(0, 11, 0, 0, 90, -180, 0, 90, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1810),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1844[] = {
	0xC4000007, 0xB0C00000,
	0xA0600002, 0x08000002,
	0x380000A9, 0x94000000,
	0x90000000, 0x06320611,
};
#else
u32 dDonkeyMainMotion_0x1844[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(48, 0),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(179),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1844),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1864[] = {
	0xBC000003, 0x04000002,
	0xB0C40004, 0x04000007,
	0xC400000A, 0x98004C00,
	0x00000000, 0xFF9C0000,
	0x00000000, 0x0C01C1D0,
	0x01180000, 0x00000000,
	0x5A464003, 0x02400000,
	0x0C81C1D0, 0x01540122,
	0x00000000, 0x5A464003,
	0x02400000, 0x380000A7,
	0x4400013F, 0x04000003,
	0x18000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1864[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(2),
	ftMotionCommandSetColAnim(49, 4),
	ftMotionCommandWait(7),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 14, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 14, 1, 0, 340, 290, 0, 0, 361, 100, 0, 3, 2, 2, 0, 0),
	ftMotionPlayFGM(177),
	ftMotionPlayVoice(329),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dDonkeyMainMotion_0x18C4[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x1864),
};

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x18CC[] = {
	0xBC000003, 0xB0C40010,
	0x04000009, 0x74000003,
	0xC400000A, 0x0C01C490,
	0x01180000, 0x00000000,
	0x5A464003, 0x0C420000,
	0x0C81C490, 0x01540122,
	0x00000000, 0x5A464003,
	0x0C420000, 0x0D00A490,
	0x00320000, 0x00000000,
	0x5A464003, 0x0C420000,
	0x9BF88400, 0x00000000,
	0x00000000, 0x00000000,
	0x98005000, 0x00000000,
	0xFF9C0000, 0x00000000,
	0x98807C00, 0x00000000,
	0x000000C8, 0x00C80000,
	0x380000A6, 0x4400013F,
	0x04000002, 0x74000001,
	0x04000002, 0x98807C00,
	0x00000000, 0x000000C8,
	0x00C80000, 0x04000004,
	0x18000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x18CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(49, 16),
	ftMotionCommandWait(9),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandMakeAttackColl(0, 0, 14, 36, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 36, 1, 0, 340, 290, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 36, 1, 0, 50, 0, 0, 0, 361, 100, 0, 3, 12, 2, 1, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 20, 0, 0, 0, -100, 0, 0, 0),
	ftMotionCommandEffect(16, 31, 0, 0, 0, 0, 200, 200, 0),
	ftMotionPlayFGM(176),
	ftMotionPlayVoice(329),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(16, 31, 0, 0, 0, 0, 200, 200, 0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x197C[] = {
	0x90000000, 0x06D20633,
	0x74000003, 0x04000003,
	0x380000A8, 0x0C010190,
	0x00C800C8, 0x00000000,
	0x5A478193, 0x01400000,
	0x0C81C190, 0x00C800C8,
	0x00000000, 0x5A478193,
	0x01400000, 0x98005800,
	0x00000000, 0x00000000,
	0x00000000, 0x04000003,
	0x74000001, 0x04000003,
	0x80000005, 0x380000A8,
	0x0C010110, 0x00C800C8,
	0x00000000, 0x5A478193,
	0x01400000, 0x0C81C110,
	0x00C800C8, 0x00000000,
	0x5A478193, 0x01400000,
	0x0D02A110, 0x00A00064,
	0x00000000, 0x5A478193,
	0x01400000, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x04000008,
	0x84000000, 0x6C000001,
};
#else
u32 dDonkeyMainMotion_0x197C[] = {
	ftMotionCommandGoto(dDonkeyMainMotion_0x18CC),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(3),
	ftMotionPlayFGM(178),
	ftMotionCommandMakeAttackColl(0, 0, 8, 12, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 12, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandLoopBegin(5),
	ftMotionPlayFGM(178),
	ftMotionCommandMakeAttackColl(0, 0, 8, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 21, 8, 1, 0, 160, 100, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetHitStatusPartAll(1),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1A34[] = {
	0x80000003, 0x380000A8,
	0x0C110070, 0x008C00C8,
	0x00000000, 0x5A464003,
	0x01000000, 0x0C91C070,
	0x008C00C8, 0x00000000,
	0x5A464003, 0x01000000,
	0x0D12A070, 0x00500064,
	0x00000000, 0x5A464003,
	0x01000000, 0x04000008,
	0x58000001, 0x84000000,
	0x18000000, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1A34[] = {
	ftMotionCommandLoopBegin(3),
	ftMotionPlayFGM(178),
	ftMotionCommandMakeAttackColl(0, 1, 8, 3, 1, 0, 140, 200, 0, 0, 361, 100, 0, 3, 1, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 1, 14, 3, 1, 0, 140, 200, 0, 0, 361, 100, 0, 3, 1, 0, 0, 0),
	ftMotionCommandMakeAttackColl(2, 1, 21, 3, 1, 0, 80, 100, 0, 0, 361, 100, 0, 3, 1, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1A8C[] = {
	0x74000003, 0x04000003,
	0x380000A8, 0x0C010190,
	0x00DC00C8, 0x00000000,
	0x5A478193, 0x01400000,
	0x0C81C190, 0x00DC00C8,
	0x00000000, 0x5A478193,
	0x01400000, 0x98005800,
	0x00000000, 0x00000000,
	0x00000000, 0x04000003,
	0x74000001, 0x04000003,
	0x70780002, 0x70480002,
	0x80000005, 0x380000A8,
	0x0C010110, 0x00C800C8,
	0x00000000, 0x5A478193,
	0x01400000, 0x0C81C110,
	0x00C800C8, 0x00000000,
	0x5A478193, 0x01400000,
	0x0D02A110, 0x00A00064,
	0x00000000, 0x5A478193,
	0x01400000, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x04000008,
	0x84000000, 0x6C000001,
	0x90000000, 0x0728068D,
	0xC0000000, 0x74000003,
	0xA0800001, 0xA0500001,
	0x04000002, 0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1A8C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(3),
	ftMotionPlayFGM(178),
	ftMotionCommandMakeAttackColl(0, 0, 8, 12, 1, 0, 220, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 12, 1, 0, 220, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandSetHitStatusPartID(15, 2),
	ftMotionCommandSetHitStatusPartID(9, 2),
	ftMotionCommandLoopBegin(5),
	ftMotionPlayFGM(178),
	ftMotionCommandMakeAttackColl(0, 0, 8, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 8, 1, 0, 200, 200, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 21, 8, 1, 0, 160, 100, 0, 0, 361, 120, 100, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
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
#endif

#if defined(REGION_JP)
u32 dDonkeyMainMotion_0x1B64[] = {
	0xBC000003, 0xA0600002,
	0xA0800001, 0xA0500001,
	0xC0000000, 0x08000010,
	0x0C000140, 0x01900000,
	0x0000FE0C, 0x1686425A,
	0xFC420000, 0x0C800140,
	0x01900000, 0x0000FF9C,
	0x1686425A, 0xFC420000,
	0x0D000140, 0x01900000,
	0x0000012C, 0x1686425A,
	0xFC420000, 0x0D800140,
	0x01900000, 0x000002BC,
	0x1686425A, 0xFC420000,
	0x380000A5, 0x9BF88400,
	0x00000000, 0x00000000,
	0x00000000, 0x98005800,
	0x00000000, 0x00000000,
	0x00000000, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x04000002,
	0x18000000, 0x04000008,
	0x0C000140, 0x01900000,
	0x0000FE0C, 0x1686425A,
	0xFC420000, 0x0C800140,
	0x01900000, 0x0000FF9C,
	0x1686425A, 0xFC420000,
	0x0D000140, 0x01900000,
	0x0000012C, 0x1686425A,
	0xFC420000, 0x0D800140,
	0x01900000, 0x000002BC,
	0x1686425A, 0xFC420000,
	0x380000A5, 0x9BF88400,
	0x00000000, 0x00000000,
	0x00000000, 0x98005800,
	0x00000000, 0x00000000,
	0x00000000, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x04000002,
	0x18000000, 0x94000000,
	0x90000000, 0xFFFF06D9,
	0x00000000,
};
#else
u32 dDonkeyMainMotion_0x1B64[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(12, 2),
	ftMotionCommandSetModelPartID(16, 1),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 0, 0, 400, 0, 0, -500, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 0, 0, 400, 0, 0, -100, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 10, 0, 0, 400, 0, 0, 300, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 10, 0, 0, 400, 0, 0, 700, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionPlayFGM(175),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 0, 0, 400, 0, 0, -500, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 10, 0, 0, 400, 0, 0, -100, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 0, 10, 0, 0, 400, 0, 0, 300, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 0, 10, 0, 0, 400, 0, 0, 700, 90, 100, 150, 2, -4, 2, 1, 0),
	ftMotionPlayFGM(175),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dDonkeyMainMotion_0x1B64),
	ftMotionCommandEnd(),
};
#endif

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
