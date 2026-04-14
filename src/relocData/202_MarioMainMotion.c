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

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0024[] = {
	0xBC000003, 0x88000000,
	0x000E0000, 0x0400005A,
	0x88000000, 0x00110000,
	0x0400000A, 0x88000000,
	0x00140000, 0x04000050,
	0x90000000, 0x002D0009,
	0xBC000003, 0x38000075,
	0x80000002, 0x98002C00,
	0x00000000, 0xFF880000,
	0x003C0000, 0x04000004,
	0x84000000, 0x00000000,
};
#else
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
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x007C[] = {
	0x08000002, 0x3800006A,
	0x98002C00, 0x00000000,
	0x003C0000, 0x00000000,
	0x0400000F, 0x3800006A,
	0x98002C00, 0x00000000,
	0x003C0000, 0x00000000,
	0x94000000, 0x90000000,
	0x006F001F, 0x3800007C,
	0x98002C00, 0x00000000,
	0x003C0000, 0x00000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x007C[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(110),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(110),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMarioMainMotion_0x007C),
	ftMotionPlayFGM(128),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

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

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0120[] = {
	0x440001A9, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x0120[] = {
	ftMotionPlayVoice(435),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0138[] = {
	0x440001AA, 0x80000002,
	0x98002C00, 0x00000000,
	0x00000064, 0x00640064,
	0x04000006, 0x84000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0138[] = {
	ftMotionPlayVoice(436),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x015C[] = {
	0xBC000003, 0x38000049,
	0x98002C00, 0x00000000,
	0xFFC40000, 0x00000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x015C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0178[] = {
	0xBC000003, 0x38000049,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0178[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0194[] = {
	0x3800026F, 0x00000000,
};
#else
u32 dMarioMainMotion_0x0194[] = {
	ftMotionPlayFGM(635),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x019C[] = {
	0x3800026F, 0x74000003,
	0x08000002, 0x74000001,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x019C[] = {
	ftMotionPlayFGM(635),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

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

#if defined(REGION_JP)
u32 dMarioMainMotion_0x01D8[] = {
	0xBC000003, 0x38000049,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x01D8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

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

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0380[] = {
	0xC4000009, 0x9800AC00,
	0x00000000, 0x00000000,
	0x00000000, 0x440001A9,
	0x38000011, 0x98007C00,
	0x00000000, 0x00000000,
	0x00000000, 0x74000003,
	0x08000018, 0x74000001,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0380[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(435),
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x03BC[] = {
	0xC4000007, 0x9800AC00,
	0x00000000, 0x00000000,
	0x00000000, 0x440001A9,
	0x3800000B, 0x98007C00,
	0x00000000, 0x00000000,
	0x00000000, 0x74000003,
	0x08000014, 0x74000001,
	0xC8000007, 0x00000000,
};
#else
u32 dMarioMainMotion_0x03BC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(435),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};
#endif

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

#if defined(REGION_JP)
u32 dMarioMainMotion_0x04DC[] = {
	0x98007C00, 0x00000000,
	0x00000000, 0x00000000,
	0x74000003, 0x440001A3,
	0x08000004, 0x0C0360C0,
	0x01180000, 0x00000000,
	0x5A464193, 0x00220000,
	0x0C80A0C0, 0x00960000,
	0x00000000, 0x5A464193,
	0x00220000, 0x4C000026,
	0x98004C00, 0x0000FFB0,
	0xFF4C0000, 0x00000000,
	0x04000002, 0x74000001,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x04DC[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(429),
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

u32 dMarioMainMotion_0x0548[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0550[] = {
	0x98007C00, 0x00000000,
	0x00000000, 0x00000000,
	0x74000003, 0x440001A3,
	0x08000003, 0x0C00A0C0,
	0x00960000, 0x00000000,
	0x5A464193, 0x00220000,
	0x0C8360C0, 0x01180050,
	0x00000000, 0x5A464193,
	0x00220000, 0x98004C00,
	0x00000000, 0xFF6A0000,
	0x00000000, 0x4C000026,
	0x04000002, 0x74000001,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0550[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(429),
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

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0918[] = {
	0xC4000007, 0x50000000,
	0xB12C0028, 0xAC000001,
	0x08000014, 0xBC000004,
	0x08000016, 0x88000000,
	0x02570092, 0x04000003,
	0xBC000003, 0x04000003,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x0918[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandSetTexturePartID(1),
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

#if defined(REGION_JP)
u32 dMarioMainMotion_0x09EC[] = {
	0xB1280008, 0x08000004,
	0x88000000, 0x02860125,
	0x04000008, 0x18000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x09EC[] = {
	ftMotionCommandSetColAnim(75, 8),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0A08[] = {
	0xB1280010, 0x08000009,
	0xBC000004, 0x88000000,
	0x0294013E, 0x0800000B,
	0x54000001, 0x04000009,
	0x18000000, 0x08000024,
	0xBC000003, 0x00000000,
};
#else
u32 dMarioMainMotion_0x0A08[] = {
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
u32 dMarioMainMotion_0x0A38[] = {
	0xB128001C, 0x50000000,
	0x08000014, 0xBC000004,
	0x08000017, 0x88000000,
	0x029F0157, 0x54000002,
	0x04000002, 0xBC000003,
	0x04000003, 0x18000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0A38[] = {
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
u32 dMarioMainMotion_0x0A6C[] = {
	0xBC000004, 0xB128000A,
	0x08000004, 0x88000000,
	0x02AF0170, 0x0400001B,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x0A6C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 10),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

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

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0AD0[] = {
	0x98007C00, 0x00000000,
	0x007800C8, 0x00C800C8,
	0x80000003, 0x98002800,
	0x00000000, 0x007800C8,
	0x00C800C8, 0x04000004,
	0x84000000, 0x90000000,
	0x02C902B4, 0x9BF88800,
	0x00000000, 0x00000000,
	0x00000000, 0x440001AE,
	0xAC000001, 0x74000003,
	0x90000000, 0x02CB02B4,
	0x90000000, 0x02E202B4,
	0x9BF88400, 0x00000000,
	0x00000000, 0x00000000,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0AD0[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(440),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
	ftMotionCommandGoto(dMarioMainMotion_0x0AD0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dMarioMainMotion_0x0B54[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0B5C[] = {
	0xBC000003, 0x440001A8,
	0xAC000001, 0x80000006,
	0x9800A000, 0x00000082,
	0x000000C8, 0x010400C8,
	0x04000014, 0x84000000,
	0x90000000, 0x02EC02D7,
};
#else
u32 dMarioMainMotion_0x0B5C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(434),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandLoopBegin(6),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(20),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dMarioMainMotion_0x0B5C),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0B8C[] = {
	0x4800013A, 0xAC000003,
	0xBC000003, 0x98016800,
	0x00000082, 0x000000C8,
	0x010400C8, 0x0400000A,
	0x90000000, 0x02FC02E3,
};
#else
u32 dMarioMainMotion_0x0B8C[] = {
	ftMotionPlayInterruptableVoice(324),
	ftMotionCommandSetTexturePartID(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dMarioMainMotion_0x0B8C),
};
#endif

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

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0C68[] = {
	0x30000000, 0x0340030C,
	0x4C000027, 0x04000004,
	0x74000002, 0x0800000E,
	0x440001A3, 0x38000012,
	0x98007C00, 0x000000C8,
	0x01180000, 0x00000000,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x9BF88400, 0x00000000,
	0x00000000, 0x00000000,
	0x5C000001, 0x74000001,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0C68[] = {
	ftMotionCommandSetThrow((u32)dMarioMainMotion_0x0C30),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(14),
	ftMotionPlayVoice(429),
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

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0CFC[] = {
	0x30000000, 0x03760331,
	0x440001A6, 0x04000004,
	0x74000002, 0x0800000A,
	0x9BF88400, 0x00000000,
	0x00000000, 0x00000000,
	0x98003400, 0x00000000,
	0x01040000, 0x00000000,
	0x38000125, 0x04000008,
	0xAC000001, 0x0C014140,
	0x012C0078, 0x00000000,
	0x5A450003, 0x01400F00,
	0x74000001, 0x80000002,
	0x38000027, 0x0400000E,
	0x84000000, 0x58000001,
	0x0800002D, 0x98007C00,
	0x000000C8, 0xFEE80000,
	0x00000000, 0x98004C00,
	0x00000000, 0x00960000,
	0x00000000, 0x9BF88400,
	0x00000000, 0x00000000,
	0x00000000, 0x38000012,
	0x5C000001, 0x18000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0CFC[] = {
	ftMotionCommandSetThrow((u32)dMarioMainMotion_0x0CC4),
	ftMotionPlayVoice(432),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 260, 0, 0, 0),
	ftMotionPlayFGM(303),
	ftMotionCommandWait(8),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandMakeAttackColl(0, 0, 10, 10, 0, 0, 300, 120, 0, 0, 361, 80, 0, 3, 1, 2, 0, 30),
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

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0DFC[] = {
	0xBC000003, 0xC4078007,
	0xB0A0003C, 0x380000CA,
	0x08000078, 0xC4078007,
	0x380000CB, 0x04000008,
	0x58000001, 0x00000000,
};
#else
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
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0E24[] = {
	0x08000002, 0x0C014050,
	0x00A00000, 0x00000000,
	0x5A432003, 0x00000400,
	0x0C812050, 0x00A00000,
	0x00000000, 0x5A432003,
	0x00000400, 0x4C000027,
	0x04000002, 0x18000000,
	0x0800000A, 0x58000001,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0E24[] = {
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
u32 dMarioMainMotion_0x0E68[] = {
	0x08000003, 0x0C020050,
	0x00B40010, 0x00000000,
	0x11832003, 0x00200400,
	0x0C81E050, 0x00B40000,
	0x00000000, 0x11832003,
	0x00200400, 0x4C000027,
	0x04000003, 0x18000000,
	0x08000008, 0x58000001,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0E68[] = {
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
u32 dMarioMainMotion_0x0EAC[] = {
	0x440001A3, 0x08000003,
	0x0C032080, 0x00960000,
	0x00000000, 0x5A464003,
	0x00220500, 0x0C836080,
	0x01180000, 0x00000000,
	0x5A464003, 0x00220500,
	0x4C000026, 0x04000002,
	0x20020000, 0x20820000,
	0x24005A00, 0x24808C00,
	0x04000003, 0x18000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0EAC[] = {
	ftMotionPlayVoice(429),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 4, 0, 0, 150, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
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
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0F00[] = {
	0xBC000004, 0x50000000,
	0x08000007, 0x0C00A190,
	0x00FA0028, 0x00000000,
	0x5A464003, 0x01420800,
	0x98004C00, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000025, 0x04000004,
	0x0C00A150, 0x00FA0028,
	0x00000000, 0x5A464003,
	0x01420500, 0x04000011,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x0F00[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 5, 12, 1, 0, 250, 40, 0, 0, 361, 100, 0, 3, 1, 2, 1, 16),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 10, 1, 0, 250, 40, 0, 0, 361, 100, 0, 3, 1, 2, 1, 10),
	ftMotionCommandWait(17),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0F58[] = {
	0x08000008, 0x0C0301D0,
	0x00B40014, 0x00000000,
	0x5A464003, 0x00220500,
	0x0C8321D0, 0x00E6005A,
	0x00000000, 0x5A464003,
	0x00220500, 0x4C000026,
	0x0400000A, 0x18000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0F58[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 14, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 14, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0F94[] = {
	0x08000008, 0x0C0301B0,
	0x00B40014, 0x00000000,
	0x5A464003, 0x00220500,
	0x0C8321B0, 0x00E6005A,
	0x00000000, 0x5A464003,
	0x00220500, 0x4C000026,
	0x0400000A, 0x18000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0F94[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 13, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 13, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x0FD0[] = {
	0x08000008, 0x0C030190,
	0x00B40014, 0x00000000,
	0x5A464003, 0x00220500,
	0x0C832190, 0x00E6005A,
	0x00000000, 0x5A464003,
	0x00220500, 0x4C000026,
	0x0400000A, 0x18000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x0FD0[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 24, 12, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 230, 90, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x100C[] = {
	0xBC000003, 0x08000005,
	0x0C01C150, 0x00B40000,
	0x00000000, 0x15896003,
	0x00200000, 0x0C81E150,
	0x0122003C, 0x00000000,
	0x15896003, 0x00200000,
	0x4C000026, 0x0400000C,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x100C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 14, 10, 1, 0, 180, 0, 0, 0, 86, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 10, 1, 0, 290, 60, 0, 0, 86, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x104C[] = {
	0xBC000002, 0x08000005,
	0x98002C00, 0x00000000,
	0xFF740000, 0x00000000,
	0x0C030190, 0x00B40014,
	0x00000000, 0x5A464003,
	0x00220000, 0x0C832190,
	0x0104008C, 0x00000000,
	0x5A464003, 0x00220000,
	0x4C000026, 0x04000007,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x104C[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -140, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 24, 12, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 260, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x109C[] = {
	0xBC000003, 0x08000004,
	0x98787C00, 0x003C0000,
	0x00000000, 0x00000000,
	0x08000010, 0x50000000,
	0x0C01C250, 0x00B40000,
	0x00000000, 0x5A464003,
	0x00400F00, 0x0C81E250,
	0x00F0003C, 0x00000000,
	0x5A464003, 0x00400F00,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x4C000025, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x109C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 18, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 18, 1, 0, 240, 60, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x1104[] = {
	0xBC000003, 0x08000004,
	0x98787C00, 0x003C0000,
	0x00000000, 0x00000000,
	0x08000010, 0x50000000,
	0x0C01C250, 0x00B40000,
	0x00000000, 0x5A464003,
	0x00400F00, 0x0C81E250,
	0x00F00032, 0x00000000,
	0x5A464003, 0x00400F00,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x4C000025, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x1104[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 18, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 18, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x116C[] = {
	0xBC000003, 0x08000004,
	0x98787C00, 0x003C0000,
	0x00000000, 0x00000000,
	0x08000010, 0x50000000,
	0x0C01C230, 0x00B40000,
	0x00000000, 0x5A464003,
	0x00400F00, 0x0C81E230,
	0x00F00032, 0x00000000,
	0x5A464003, 0x00400F00,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x4C000025, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x116C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(15, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 17, 1, 0, 180, 0, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandMakeAttackColl(1, 0, 15, 17, 1, 0, 240, 50, 0, 0, 361, 100, 0, 3, 0, 2, 0, 30),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x11D4[] = {
	0xBC000003, 0x08000004,
	0x98787C00, 0x003C0000,
	0x00000000, 0x00000000,
	0x08000010, 0x50000000,
	0x0C01C210, 0x00B40000,
	0x00000000, 0x5A464003,
	0x00400F00, 0x0C81E210,
	0x00F00032, 0x00000000,
	0x5A464003, 0x00400F00,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x4C000025, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x11D4[] = {
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
u32 dMarioMainMotion_0x123C[] = {
	0xBC000003, 0x08000004,
	0x98787C00, 0x003C0000,
	0x00000000, 0x00000000,
	0x08000010, 0x50000000,
	0x0C01C210, 0x00B40000,
	0x00000000, 0x5A464003,
	0x00400F00, 0x0C81E210,
	0x00F00032, 0x00000000,
	0x5A464003, 0x00400F00,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x4C000025, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x123C[] = {
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
u32 dMarioMainMotion_0x12A4[] = {
	0x08000007, 0x98007C00,
	0x0000012C, 0xFF9C0000,
	0x00000000, 0x50000000,
	0x70600003, 0x0C018270,
	0x017C0000, 0x00640000,
	0x15478003, 0x00400D00,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000025, 0x04000004,
	0x6C000001, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x12A4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, 31, 0, 0, 300, -100, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 19, 1, 0, 380, 0, 100, 0, 85, 120, 0, 3, 0, 2, 0, 26),
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
u32 dMarioMainMotion_0x12FC[] = {
	0xBC000004, 0x08000004,
	0x98C87C00, 0x00780000,
	0x00000000, 0x00000000,
	0x08000008, 0x50000000,
	0x0C032230, 0x00AA0000,
	0x00000014, 0x5A464003,
	0x00420A00, 0x0C832230,
	0x00D20078, 0x00000032,
	0x5A464003, 0x00420A00,
	0x0D028230, 0x00AA0000,
	0x00000014, 0x5A464003,
	0x00420A00, 0x0D828230,
	0x00D20078, 0x00000032,
	0x5A464003, 0x00420A00,
	0x98004000, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000026, 0x0400000F,
	0x98003C00, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000026, 0x04000007,
	0xBC000000, 0x18000000,
	0x00000000,
};
#else
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
u32 dMarioMainMotion_0x13A8[] = {
	0x08000003, 0x58000032,
	0x0C0321D0, 0x00F0000A,
	0x00000000, 0x5A464003,
	0x00420780, 0x0C8281D0,
	0x00F0000A, 0x00000000,
	0x5A464003, 0x00420780,
	0x0D00A1D0, 0x01040000,
	0x00000000, 0x5A464003,
	0x00420780, 0x4C000026,
	0x04000008, 0x0C032170,
	0x00F0000A, 0x00000000,
	0x5A464003, 0x00220000,
	0x0C828170, 0x00F0000A,
	0x00000000, 0x5A464003,
	0x00220000, 0x0D00A170,
	0x01040000, 0x00000000,
	0x5A464003, 0x00220000,
	0x0400001A, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x13A8[] = {
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 0, 25, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(26),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x1440[] = {
	0x0800000B, 0x58000001,
	0x0C032210, 0x00DCFFE2,
	0x002D0000, 0x5A464003,
	0x00420500, 0x0C832210,
	0x010E0050, 0x001E0000,
	0x5A464003, 0x00420500,
	0x4C000025, 0x04000004,
	0x0C032150, 0x00DCFFE2,
	0x002D0000, 0x5A464003,
	0x00220000, 0x0C832150,
	0x010E0050, 0x001E0000,
	0x5A464003, 0x00220000,
	0x0400000C, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x1440[] = {
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
u32 dMarioMainMotion_0x14B0[] = {
	0x38000049, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x14B0[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x14C8[] = {
	0x0800000A, 0x58000001,
	0x0C032210, 0x00F0FFE2,
	0x002D0000, 0x5A464003,
	0x00420500, 0x0C832210,
	0x01220050, 0x001E0000,
	0x5A464003, 0x00420500,
	0x4C000025, 0x04000004,
	0x0C032150, 0x00DCFFE2,
	0x002D0000, 0x5A464003,
	0x00220000, 0x0C832150,
	0x010E0050, 0x001E0000,
	0x5A464003, 0x00220000,
	0x04000006, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x14C8[] = {
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
u32 dMarioMainMotion_0x1538[] = {
	0x38000049, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x1538[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x1550[] = {
	0x08000002, 0x58000014,
	0x0C032190, 0x00DC0000,
	0x00000000, 0x14078003,
	0x00420000, 0x0C836190,
	0x00FA0000, 0x00000000,
	0x14078003, 0x00420000,
	0x4C000025, 0x04000003,
	0x0C032130, 0x00DC0000,
	0x00000000, 0x11878003,
	0x00220000, 0x0C836130,
	0x00FA0000, 0x00000000,
	0x11878003, 0x00220000,
	0x04000007, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x1550[] = {
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
u32 dMarioMainMotion_0x15C0[] = {
	0x38000049, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x15C0[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x15D8[] = {
	0x0800000A, 0x58000014,
	0x0C032070, 0x015EFFE2,
	0x002D0000, 0xEE86407B,
	0x00200000, 0x0C832070,
	0x015E0032, 0x001E0000,
	0xEE86407B, 0x00200000,
	0x80000007, 0x4C0000D1,
	0x04000002, 0x18000000,
	0x04000001, 0x2C000000,
	0x2C000001, 0x84000000,
	0x4C0000D1, 0x04000002,
	0x18000000, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x15D8[] = {
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
u32 dMarioMainMotion_0x1640[] = {
	0x38000049, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x1640[] = {
	ftMotionPlayFGM(77),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x1658[] = {
	0x0800001E, 0xC403C007,
	0x380000CC, 0x5C000001,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x1658[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(214),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};
#endif

u32 dMarioMainMotion_0x166C[] = {
	ftMotionCommandGoto(dMarioMainMotion_0x1658),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandSetSlopeContour(3),
};

#if defined(REGION_JP)
u32 dMarioMainMotion_0x1688[] = {
	0xAC000001, 0x08000010,
	0x54000001, 0xB09C0000,
	0x98807C00, 0x003C0000,
	0x00000000, 0x00000000,
	0x380000CD, 0xC4000006,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x1688[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(39, 0),
	ftMotionCommandEffect(16, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(215),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandEnd(),
};
#endif

u32 dMarioMainMotion_0x16B4[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandGoto(dMarioMainMotion_0x1688),
};

#if defined(REGION_JP)
u32 dMarioMainMotion_0x16CC[] = {
	0xC4000009, 0x08000002,
	0x74000003, 0x0C0180B4,
	0x017C0000, 0x00000000,
	0x118641BB, 0x00240000,
	0x0C81E0B4, 0x010400A0,
	0x00000000, 0x168641BB,
	0x00240000, 0x98004C00,
	0x00000000, 0xFF6A0000,
	0x00000000, 0x04000001,
	0x98787C00, 0x00500000,
	0x00000000, 0x00000000,
	0x380000CF, 0x08000006,
	0x74000001, 0x68000000,
	0x58000001, 0x5C000001,
	0x80000008, 0x0C018034,
	0x01360000, 0x0000003C,
	0x12C64193, 0x00240000,
	0x0C81E034, 0x01040096,
	0x0000003C, 0x14064193,
	0x00240000, 0x04000002,
	0x18000000, 0x84000000,
	0x0C018074, 0x01C20000,
	0x00000000, 0x0C8AA003,
	0x00440000, 0x0C81E074,
	0x00C80096, 0x00000000,
	0x0C8AA003, 0x00440000,
	0x04000002, 0x18000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x16CC[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 5, 1, 4, 380, 0, 0, 0, 70, 100, 110, 3, 0, 1, 2, 0),
	ftMotionCommandMakeAttackColl(1, 0, 15, 5, 1, 4, 260, 160, 0, 0, 90, 100, 110, 3, 0, 1, 2, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandEffect(15, 31, 0, 80, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(217),
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
#endif

u32 dMarioMainMotion_0x17A8[] = {
	ftMotionCommandGoto(dMarioMainMotion_0x16CC),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dMarioMainMotion_0x17B4[] = {
	0xC403C007, 0xBC000004,
	0x60000001, 0x440001A6,
	0x0C000030, 0x008C0000,
	0x012C0096, 0x2D000007,
	0x00222300, 0x0C800030,
	0x008C0000, 0x012CFF6A,
	0x2D000007, 0x00222300,
	0x0D000030, 0x00DC0000,
	0x00000000, 0x16800007,
	0x00220500, 0x04000004,
	0x8000000D, 0x4C0000D0,
	0x0C000030, 0x00A00000,
	0x01180096, 0x2D000007,
	0x00222300, 0x0C800030,
	0x00A00000, 0x0118FF6A,
	0x2D000007, 0x00222300,
	0x04000001, 0x18000000,
	0x04000002, 0x84000000,
	0xBC000003, 0x0C000030,
	0x00C80000, 0x012C0096,
	0x16800007, 0x00423C00,
	0x0C800030, 0x00C80000,
	0x012CFF6A, 0x16800007,
	0x00423C00, 0x58000001,
	0x60000000, 0x04000002,
	0x18000000, 0x00000000,
};
#else
u32 dMarioMainMotion_0x17B4[] = {
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(432),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 300, 150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 300, -150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 220, 0, 0, 0, 90, 0, 1, 3, 0, 1, 1, 10),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(218),
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
#endif

#if defined(REGION_JP)
u32 dMarioMainMotion_0x1884[] = {
	0xC403C007, 0x60000001,
	0x440001A6, 0x0C000030,
	0x008C0000, 0x012C0096,
	0x2D000007, 0x00222300,
	0x0C800030, 0x008C0000,
	0x012CFF6A, 0x2D000007,
	0x00222300, 0x0D000030,
	0x00B40000, 0x00000000,
	0x16800007, 0x00220500,
	0x04000004, 0x8000000D,
	0x4C0000D0, 0x0C000030,
	0x008C0000, 0x01040096,
	0x2D000007, 0x00222300,
	0x0C800030, 0x008C0000,
	0x0104FF6A, 0x2D000007,
	0x00222300, 0x0D000030,
	0x00A00000, 0x00500000,
	0xE9800007, 0x00220500,
	0x0D800030, 0x00640000,
	0x01A40000, 0xE9800007,
	0x00222300, 0x04000001,
	0x18000000, 0x04000002,
	0x84000000, 0x0C000030,
	0x00C80000, 0x012C0096,
	0x16800007, 0x00423C00,
	0x0C800030, 0x00C80000,
	0x012CFF6A, 0x16800007,
	0x00423C00, 0x0D000030,
	0x00DC0000, 0x00500000,
	0xE9800007, 0x00423C00,
	0x0D800030, 0x005A0000,
	0x01A40000, 0xE9800007,
	0x00423C00, 0x58000001,
	0x60000000, 0x5C000001,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dMarioMainMotion_0x1884[] = {
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag3(1),
	ftMotionPlayVoice(432),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 300, 150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 300, -150, 180, 0, 1, 3, 0, 1, 1, 70),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 180, 0, 0, 0, 90, 0, 1, 3, 0, 1, 1, 10),
	ftMotionCommandWait(4),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandPlayFGMStoreInfo(218),
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
#endif
