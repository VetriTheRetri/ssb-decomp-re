/* ftMotionCommand script data for relocData file 232 (PurinMainMotion) */
/* File size: 6016 bytes (0x1780) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>

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

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0034[] = {
	0xBC000003, 0x88000000,
	0x00120000, 0x0400005A,
	0x88000000, 0x00150000,
	0x0400000A, 0x88000000,
	0x00180000, 0x04000050,
	0x90000000, 0x0031000D,
	0x3800007A, 0x80000002,
	0x98002C00, 0x00000000,
	0xFF880000, 0x003C0000,
	0x04000006, 0x84000000,
	0x00000000,
};
#else
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
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0088[] = {
	0xBC000004, 0x08000002,
	0x3800006D, 0x98002C00,
	0x00000000, 0x003C0000,
	0x00000000, 0x0400000F,
	0x3800006D, 0x98002C00,
	0x00000000, 0x003C0000,
	0x00000000, 0x94000000,
	0x90000000, 0x008F0022,
	0x3800007C, 0x98002C00,
	0x00000000, 0x003C0000,
	0x00000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x0088[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(113),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(113),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dPurinMainMotion_0x0088),
	ftMotionPlayFGM(128),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dPurinMainMotion_0x00E0[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x00EC[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x011C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dPurinMainMotion_0x012C[] = {
	0x38000062, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x012C[] = {
	ftMotionPlayFGM(102),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0144[] = {
	0x38000057, 0x98002C00,
	0x00000000, 0x00000064,
	0x00640064, 0x08000019,
	0x58000001, 0x00000000,
};
#else
u32 dPurinMainMotion_0x0144[] = {
	ftMotionPlayFGM(91),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0164[] = {
	0x38000057, 0x98002C00,
	0x00000000, 0x00000064,
	0x00640064, 0x08000019,
	0x58000001, 0x00000000,
};
#else
u32 dPurinMainMotion_0x0164[] = {
	ftMotionPlayFGM(91),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0184[] = {
	0x38000057, 0x98002C00,
	0x00000000, 0x00000064,
	0x00640064, 0x08000019,
	0x58000001, 0x00000000,
};
#else
u32 dPurinMainMotion_0x0184[] = {
	ftMotionPlayFGM(91),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x01A4[] = {
	0x38000057, 0x98002C00,
	0x00000000, 0x00000064,
	0x00640064, 0x08000019,
	0x58000001, 0x00000000,
};
#else
u32 dPurinMainMotion_0x01A4[] = {
	ftMotionPlayFGM(91),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x01C4[] = {
	0x38000057, 0x98002C00,
	0x00000000, 0x00000064,
	0x00640064, 0x00000000,
};
#else
u32 dPurinMainMotion_0x01C4[] = {
	ftMotionPlayFGM(91),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x01DC[] = {
	0x3800004C, 0x98002C00,
	0x00000000, 0xFFC40000,
	0x00000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x01DC[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x01F4[] = {
	0x3800004C, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x01F4[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dPurinMainMotion_0x020C[] = {
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0210[] = {
	0x38000272, 0x00000000,
};
#else
u32 dPurinMainMotion_0x0210[] = {
	ftMotionPlayFGM(638),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0218[] = {
	0x38000272, 0x74000003,
	0x08000002, 0x74000001,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x0218[] = {
	ftMotionPlayFGM(638),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

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
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0258[] = {
	0x3800004C, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x0258[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

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
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 23, 6, 0, 0, 300, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 23, 6, 0, 0, 300, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x03B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 10, 6, 1, 0, 260, 100, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(2, 0, 28, 6, 1, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dPurinMainMotion_0x040C[] = {
	0xC4000009, 0x9800AC00,
	0x00000000, 0x00000000,
	0x00000000, 0x44000223,
	0x38000011, 0x98007C00,
	0x00000000, 0x00000000,
	0x00000000, 0x74000003,
	0x08000018, 0x74000001,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x040C[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(559),
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0448[] = {
	0xC4000007, 0x9800AC00,
	0x00000000, 0x00000000,
	0x00000000, 0x44000223,
	0x3800000B, 0x98007C00,
	0x00000000, 0x00000000,
	0x00000000, 0x74000003,
	0x08000014, 0x74000001,
	0xC8000007, 0x00000000,
};
#else
u32 dPurinMainMotion_0x0448[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(559),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};
#endif

u32 dPurinMainMotion_0x0488[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x0448),
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

u32 dPurinMainMotion_0x04CC[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
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

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0568[] = {
	0x98007C00, 0x00000000,
	0x00000000, 0x00000000,
	0x50000000, 0x0C038080,
	0x00B40000, 0x00000000,
	0x5A464193, 0x00220000,
	0x0C838080, 0x009600C8,
	0x00000000, 0x5A464193,
	0x00220000, 0x4C000026,
	0x98004C00, 0x0000FFB0,
	0xFF4C0000, 0x00000000,
	0x0400000A, 0x18000000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x0568[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 28, 4, 0, 0, 180, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 4, 0, 0, 150, 200, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dPurinMainMotion_0x05C4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dPurinMainMotion_0x05D4[] = {
	0x74000003, 0x08000020,
	0x74000001, 0x50000000,
	0x0C000080, 0x012C0000,
	0x00B4012C, 0x5A464193,
	0x00220000, 0x98004C00,
	0x00000000, 0xFF6A0000,
	0x00000000, 0x98007C00,
	0x00000000, 0x00000000,
	0x00000000, 0x4C000026,
	0x04000008, 0x18000000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x05D4[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 4, 0, 0, 300, 0, 180, 300, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dPurinMainMotion_0x0628[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0630[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
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
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x06C8[] = {
	ftMotionCommandWaitAsync(14),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x06E4[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPurinMainMotion_0x06C8),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x070C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0728[] = {
	ftMotionCommandWaitAsync(14),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0748[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dPurinMainMotion_0x0728),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0774[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0794[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x07B0[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dPurinMainMotion_0x0794),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x07D8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x07F4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0814[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dPurinMainMotion_0x07F4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0840[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
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
	ftMotionCommandSubroutine(0x0000), /* extern */
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
	ftMotionCommandSubroutine(0x0064), /* extern */
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
	ftMotionCommandSubroutine(0x00C8), /* extern */
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
	ftMotionCommandSubroutine(0x012C), /* extern */
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
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0998[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(26),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dPurinMainMotion_0x09BC[] = {
	0xC4000007, 0xAC000004,
	0xAC100004, 0xBC000004,
	0x50000000, 0xB12C0028,
	0x08000013, 0x88000000,
	0x02800092, 0x04000008,
	0x18000000, 0x08000026,
	0xBC000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x09BC[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetSlopeContour(4),
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
#endif

u32 dPurinMainMotion_0x09F4[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
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
	ftMotionCommandSubroutine(0x0324), /* extern */
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
	ftMotionCommandSubroutine(0x0378), /* extern */
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
	ftMotionCommandSubroutine(0x03CC), /* extern */
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
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0AC8[] = {
	0xB128000D, 0x08000005,
	0xBC000004, 0x88000000,
	0x02C00125, 0x04000008,
	0x18000000, 0x08000012,
	0xBC000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x0AC8[] = {
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
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0AF0[] = {
	0xB1280011, 0x08000009,
	0xBC000004, 0x88000000,
	0x02CD013E, 0x0800000A,
	0x54000001, 0x04000007,
	0x18000000, 0x08000026,
	0xBC000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x0AF0[] = {
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
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0B20[] = {
	0xBC000004, 0xB1280020,
	0x50000000, 0x08000013,
	0x88000000, 0x02D90157,
	0x08000015, 0x54000002,
	0x0400000C, 0x18000000,
	0x08000026, 0xBC000000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x0B20[] = {
	ftMotionCommandSetSlopeContour(4),
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
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0B54[] = {
	0xBC000004, 0xB128001A,
	0x08000004, 0x88000000,
	0x02F40170, 0x04000016,
	0x18000000, 0x08000026,
	0xBC000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x0B54[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 26),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(22),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};
#endif

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
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dPurinMainMotion_0x0BBC),
};

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0BE4[] = {
	0xB0AC0000, 0x98007C00,
	0x00000000, 0x007800C8,
	0x00C800C8, 0x8000000A,
	0x98002800, 0x00000000,
	0x007800C8, 0x00C800C8,
	0x04000004, 0x84000000,
	0x90000000, 0x030E02F9,
	0x9BF88800, 0x00000000,
	0x00000000, 0x00000000,
	0x44000226, 0x74000003,
	0x90000000, 0x031002F9,
	0x90000000, 0x032802F9,
	0x9BF88400, 0x00000000,
	0x00000000, 0x00000000,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x0BE4[] = {
	ftMotionCommandSetColAnim(43, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(10),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dPurinMainMotion_0x0BE4),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(562),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dPurinMainMotion_0x0BE4),
	ftMotionCommandGoto(dPurinMainMotion_0x0BE4),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dPurinMainMotion_0x0C68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0C70[] = {
	0xAC000004, 0xAC100004,
	0xBC000003, 0x44000227,
	0x80000078, 0x9800A000,
	0x00000082, 0x000000F0,
	0x00F000F0, 0x0400000A,
	0x84000000, 0x90000000,
	0x0333031C,
};
#else
u32 dPurinMainMotion_0x0C70[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(563),
	ftMotionCommandLoopBegin(120),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dPurinMainMotion_0x0C70),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0CA4[] = {
	0x4800022D, 0xAC000005,
	0xAC100005, 0xBC000003,
	0x98016800, 0x00000082,
	0x000000F0, 0x00F000F0,
	0x0400000A, 0x90000000,
	0x03450329,
};
#else
u32 dPurinMainMotion_0x0CA4[] = {
	ftMotionPlayInterruptableVoice(569),
	ftMotionCommandSetTexturePartID(5),
	ftMotionCommandSetTexturePartID(1048581),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dPurinMainMotion_0x0CA4),
};
#endif

FTThrowHitDesc dPurinMainMotion_0x0CD0[] = {
	{ -1, 6, 361, 100, 0, 0, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};

u32 dPurinMainMotion_0x0D08[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetThrow((u32)dPurinMainMotion_0x0CD0),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 29, 1, 1, 0, 240, 0, 0, -30, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 29, 1, 1, 0, 160, 0, 0, -160, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
FTThrowHitDesc dPurinMainMotion_0x0D64[] = {
	{ 0x00000036, 0x0000000E, 0x0000005A, 0x00000032, 0x00000000, 0x0000005A, 0x00000000 },
	{ 0xFFFFFFFF, 0x00000006, 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000 },
};
#else
FTThrowHitDesc dPurinMainMotion_0x0D64[] = {
	{ 55, 14, 90, 50, 0, 90, 0 },
	{ -1, 6, 361, 100, 0, 0, 0 },
};
#endif

u32 dPurinMainMotion_0x0D9C[] = {
	ftMotionCommandSetThrow((u32)dPurinMainMotion_0x0D64),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(8),
	ftMotionPlayFGM(18),
	ftMotionCommandEffect(0, 41, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 41, 0, 0, 0, 0, 200, 0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 41, 0, 0, 300, 0, 200, 0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 41, 0, 0, 600, 0, 200, 0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 41, 0, 0, 900, 0, 200, 0, 200),
	ftMotionCommandWait(2),
	ftMotionCommandEffect(0, 41, 0, 0, 1200, 0, 200, 0, 200),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dPurinMainMotion_0x0E54[] = {
	{ 52, 16, 45, 70, 0, 80, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dPurinMainMotion_0x0E8C[] = {
	ftMotionCommandSetThrow((u32)dPurinMainMotion_0x0E54),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandPlayFGMStoreInfo(18),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(19),
	ftMotionPlayFGM(10),
	ftMotionCommandEffect(29, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 150, 0, 0, 0),
	ftMotionCommandEffect(0, 22, 0, 0, 0, -280, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F00[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F0C[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F18[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F24[] = {
	ftMotionCommandSubroutine(dPurinMainMotion_0x022C),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x0F38[] = {
	ftMotionCommandSubroutine(dPurinMainMotion_0x022C),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0F4C[] = {
	0x44000221, 0xC4000006,
	0x0400000A, 0x88000000,
	0x03DA0000, 0x04000014,
	0x88000000, 0x04010000,
	0x0800003C, 0x58000001,
	0x00000000,
};
#else
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
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0F78[] = {
	0x08000005, 0x0C016070,
	0x00D2FFCE, 0x00000000,
	0x5A432003, 0x00000400,
	0x0C816070, 0x00D20046,
	0x00000000, 0x5A432003,
	0x00000400, 0x4C000027,
	0x04000002, 0x18000000,
	0x0800000A, 0x58000001,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x0F78[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 11, 3, 1, 0, 210, -50, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 11, 3, 1, 0, 210, 70, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x0FBC[] = {
	0x08000005, 0x0C01E090,
	0x00D2FFCE, 0x00000000,
	0x11832003, 0x00200400,
	0x0C81E090, 0x00D20046,
	0x00000000, 0x11832003,
	0x00200400, 0x4C000026,
	0x04000003, 0x18000000,
	0x08000008, 0x00000000,
};
#else
u32 dPurinMainMotion_0x0FBC[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 15, 4, 1, 0, 210, -50, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 15, 4, 1, 0, 210, 70, 0, 0, 70, 50, 0, 3, 0, 1, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEnd(),
};
#endif

u32 dPurinMainMotion_0x0FFC[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x1000[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x1000),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dPurinMainMotion_0x100C[] = {
	0x08000004, 0x44000222,
	0x0C000150, 0x01040000,
	0x009600C8, 0x5A464003,
	0x01420500, 0x98004C00,
	0x00000000, 0x00000000,
	0x00000000, 0x4C000025,
	0x04000004, 0x20040000,
	0x08000012, 0x18000000,
	0xBC000004, 0x98004000,
	0x00000000, 0x00000000,
	0x00000000, 0x80000002,
	0x04000008, 0x98002C00,
	0x00000000, 0xFF880000,
	0x003C0000, 0x84000000,
	0xBC000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x100C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionPlayVoice(558),
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 1, 0, 260, 0, 150, 200, 361, 100, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandSetAttackCollDamage(0, 8),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandWait(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x1084[] = {
	0x08000007, 0x0C02E110,
	0x00FA0000, 0x00000000,
	0x5A464003, 0x00220280,
	0x0C82E110, 0x00FA0096,
	0x00000000, 0x5A464003,
	0x00220280, 0x4C000026,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x1084[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 23, 8, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 23, 8, 1, 0, 250, 150, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x10C0[] = {
	0x08000007, 0x0C02E110,
	0x00C80000, 0x00000000,
	0x5A464003, 0x00220280,
	0x0C82E110, 0x00C80096,
	0x00000000, 0x5A464003,
	0x00220280, 0x4C000026,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x10C0[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 23, 8, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 23, 8, 1, 0, 200, 150, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x10FC[] = {
	0x08000007, 0x0C02E110,
	0x00FA0000, 0x00000000,
	0x5A464003, 0x00220280,
	0x0C82E110, 0x00FA0096,
	0x00000000, 0x5A464003,
	0x00220280, 0x4C000026,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x10FC[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 23, 8, 1, 0, 250, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 23, 8, 1, 0, 250, 150, 0, 0, 361, 100, 0, 3, 0, 1, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x1138[] = {
	0x08000007, 0x0C038150,
	0x01180000, 0x00000000,
	0x15464003, 0x00220500,
	0x0C838150, 0x0140008C,
	0x00000000, 0x15464003,
	0x00220500, 0x4C000026,
	0x04000008, 0x18000000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x1138[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 28, 10, 1, 0, 280, 0, 0, 0, 85, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 28, 10, 1, 0, 320, 140, 0, 0, 85, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x1174[] = {
	0xBC000004, 0x0800000B,
	0x0C02E150, 0x00C80000,
	0x00000000, 0x11878003,
	0x00220000, 0x0C82E150,
	0x00C8008C, 0x00000000,
	0x11878003, 0x00220000,
	0x4C000026, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x1174[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandMakeAttackColl(0, 0, 23, 10, 1, 0, 200, 0, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 23, 10, 1, 0, 200, 140, 0, 0, 70, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x11B4[] = {
	0xBC000003, 0x0800000C,
	0x0C02E210, 0x01180000,
	0x00000000, 0x5A478003,
	0x01420500, 0x0C82E210,
	0x0118008C, 0x00000000,
	0x5A478003, 0x01420500,
	0x98A87C00, 0x00780000,
	0x00000000, 0x00000000,
	0x98004C00, 0x00000000,
	0xFF4C0000, 0x00000000,
	0x4C000025, 0x50000000,
	0x04000003, 0x20050000,
	0x20850000, 0x04000005,
	0x18000000, 0x0800001E,
	0xBC000003, 0x00000000,
};
#else
u32 dPurinMainMotion_0x11B4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 23, 16, 1, 0, 280, 0, 0, 0, 361, 120, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 23, 16, 1, 0, 280, 140, 0, 0, 361, 120, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(21, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
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
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x122C[] = {
	0x08000008, 0x50000000,
	0x0C00A250, 0x017C0000,
	0x00B40000, 0x14082003,
	0x00420B00, 0x0C80A250,
	0x01180000, 0x00000000,
	0x14082003, 0x00420B00,
	0x98D07C00, 0x006E0000,
	0x00000000, 0x00000000,
	0x98004C00, 0x00000000,
	0xFF4C0000, 0x00000000,
	0x4C000025, 0x04000004,
	0x0C00A150, 0x017C0000,
	0x00B40000, 0x5A464003,
	0x00220500, 0x0C80A150,
	0x01040000, 0x00000000,
	0x5A464003, 0x00220500,
	0x04000003, 0x18000000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x122C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 5, 18, 1, 0, 380, 0, 180, 0, 80, 130, 0, 3, 0, 2, 1, 22),
	ftMotionCommandMakeAttackColl(1, 0, 5, 18, 1, 0, 280, 0, 0, 0, 80, 130, 0, 3, 0, 2, 1, 22),
	ftMotionCommandEffect(26, 31, 0, 110, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 10, 1, 0, 380, 0, 180, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 5, 10, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x12B8[] = {
	0x08000007, 0xBC000004,
	0x70E00003, 0x70B80003,
	0x50000000, 0x0C038210,
	0x01040064, 0x00000000,
	0x0A064003, 0x00420A00,
	0x0C82E210, 0x01040064,
	0x00000000, 0x0A064003,
	0x00420A00, 0x0D00A210,
	0x00A00064, 0x00000000,
	0x0A064003, 0x00420A00,
	0x98D07C00, 0x005A0000,
	0x00000000, 0x00000000,
	0x98A87C00, 0x005A0000,
	0x00000000, 0x00000000,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000025, 0x04000004,
	0x20050000, 0x20850000,
	0x21050000, 0x04000010,
	0x6C000001, 0x18000000,
	0x08000022, 0xBC000000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x12B8[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusPartID(28, 3),
	ftMotionCommandSetHitStatusPartID(23, 3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 28, 16, 1, 0, 260, 200, 0, 0, 40, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 23, 16, 1, 0, 260, 200, 0, 0, 40, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 5, 16, 1, 0, 160, 100, 0, 0, 40, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandEffect(26, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(21, 31, 0, 90, 0, 0, 0, 0, 0),
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
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x1364[] = {
	0x08000006, 0x58000032,
	0x0C00A1D0, 0x00DC0000,
	0x00000000, 0x5A464003,
	0x00420F00, 0x0C82E1D0,
	0x01040078, 0x00000000,
	0x5A464003, 0x00420F00,
	0x4C000026, 0x04000004,
	0x0C00A130, 0x00D20000,
	0x00000000, 0x5A464003,
	0x00220500, 0x0C82E130,
	0x01040078, 0x00000000,
	0x5A464003, 0x00220500,
	0x04000018, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x1364[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 5, 14, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandMakeAttackColl(1, 0, 23, 14, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 30),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 9, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 23, 9, 1, 0, 260, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x13D4[] = {
	0x08000008, 0x58000032,
	0x0C0001B0, 0x00DC0000,
	0x009600DC, 0x5A464003,
	0x00420500, 0x0C8001B0,
	0x010E0000, 0x00960064,
	0x5A464003, 0x00420500,
	0x4C000025, 0x04000004,
	0x0C000130, 0x00DC0000,
	0x009600DC, 0x5A464003,
	0x00220000, 0x0C800130,
	0x010E0000, 0x00960064,
	0x5A464003, 0x00220000,
	0x0400000C, 0x18000000,
	0x58000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x13D4[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 0, 13, 1, 0, 220, 0, 150, 220, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 0, 13, 1, 0, 270, 0, 150, 100, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 9, 1, 0, 220, 0, 150, 220, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 9, 1, 0, 270, 0, 150, 100, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x1444[] = {
	0x3800004C, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x1444[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x145C[] = {
	0x08000008, 0x58000001,
	0x0C0341B0, 0x00DCFFE2,
	0x002D0000, 0x5A464003,
	0x00420500, 0x0C8341B0,
	0x010E0096, 0x001E0000,
	0x5A464003, 0x00420500,
	0x4C000025, 0x04000004,
	0x0C034130, 0x00DCFFE2,
	0x002D0000, 0x5A464003,
	0x00220000, 0x0C834130,
	0x010E0096, 0x001E0000,
	0x5A464003, 0x00220000,
	0x0400000A, 0x18000000,
	0x04000006, 0x58000000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x145C[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 13, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 13, 1, 0, 270, 150, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 26, 9, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 9, 1, 0, 270, 150, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x14D0[] = {
	0x3800004C, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x14D0[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x14E8[] = {
	0x08000008, 0x58000028,
	0x0C016210, 0x00E60000,
	0x00000000, 0x11878003,
	0x00400000, 0x4C000025,
	0x04000009, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x14E8[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(40),
	ftMotionCommandMakeAttackColl(0, 0, 11, 16, 1, 0, 230, 0, 0, 0, 70, 120, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(9),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x1518[] = {
	0x08000004, 0x58000032,
	0x0C000070, 0x01680000,
	0xFF880064, 0xE986407B,
	0x00200000, 0x0C800070,
	0x01680000, 0x0000003C,
	0xE986407B, 0x00200000,
	0x80000009, 0x4C0000D1,
	0x04000002, 0x18000000,
	0x04000001, 0x2C000000,
	0x2C000001, 0x84000000,
	0x4C0000D1, 0x04000002,
	0x18000000, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x1518[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 0, 3, 1, 0, 360, 0, -120, 100, -90, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 0, 3, 1, 0, 360, 0, 0, 60, -90, 100, 30, 3, 0, 1, 0, 0),
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
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x1580[] = {
	0xBC000004, 0x3800004C,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x0C000070, 0x01680000,
	0x00000000, 0x14028003,
	0x00420F00, 0x04000001,
	0x18000000, 0x0400000A,
	0xBC000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x1580[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(80),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 3, 1, 0, 360, 0, 0, 0, 80, 40, 0, 3, 0, 2, 1, 30),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(10),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x15C0[] = {
	0x3800004C, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x04000001,
	0x18000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x15C0[] = {
	ftMotionPlayFGM(80),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x15E0[] = {
	0x08000028, 0x58000001,
	0x38000087, 0xC403C007,
	0x5C000001, 0x00000000,
};
#else
u32 dPurinMainMotion_0x15E0[] = {
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayFGM(139),
	ftMotionCommandMakeRumble(30, 7),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x15F8[] = {
	0x90000000, 0x05D90578,
	0x0800000C, 0x380000A7,
	0x44000225, 0x58000001,
	0x5C000001, 0x98787C00,
	0x00000000, 0x00000000,
	0x00000000, 0x98004000,
	0x00000000, 0xFF880000,
	0x00000000, 0x0C01E1B0,
	0x0136FFCE, 0x00000000,
	0x1E04B003, 0x144C0A00,
	0x0C81E1B0, 0x01360046,
	0x00000000, 0x1E04B003,
	0x144C0A00, 0xC4000006,
	0x0800001C, 0x18000000,
	0x0800001E, 0x5C000002,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x15F8[] = {
	ftMotionCommandGoto(dPurinMainMotion_0x15E0),
	ftMotionCommandWaitAsync(12),
	ftMotionPlayFGM(177),
	ftMotionPlayVoice(561),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(15, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 15, 13, 1, 0, 310, -50, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20),
	ftMotionCommandMakeAttackColl(1, 0, 15, 13, 1, 0, 310, 70, 0, 0, 120, 75, 0, 3, 20, 2, 6, 20),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x1674[] = {
	0x380000E0, 0x44000230,
	0xAC000004, 0xAC100004,
	0x58000001, 0x0800001C,
	0x0C00C006, 0x02580000,
	0x00460000, 0x5A464002,
	0x00000000, 0xC4014007,
	0xAC000005, 0xAC100005,
	0x04000008, 0x24001E00,
	0x08000045, 0x24012C00,
	0xC4014007, 0x04000008,
	0x24001E00, 0x08000071,
	0x24017C00, 0xC4014007,
	0xAC000004, 0xAC100004,
	0x04000005, 0xAC000000,
	0xAC100000, 0x04000008,
	0x18000000, 0x00000000,
};
#else
u32 dPurinMainMotion_0x1674[] = {
	ftMotionPlayFGM(234),
	ftMotionPlayVoice(572),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetTexturePartID(1048580),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandMakeAttackColl(0, 0, 6, 0, 0, 6, 600, 0, 70, 0, 361, 100, 0, 2, 0, 0, 0, 0),
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
#endif

#if defined(REGION_JP)
u32 dPurinMainMotion_0x16F4[] = {
	0xC403C007, 0x380000DF,
	0x4400022E, 0x74000003,
	0x04000001, 0x0C0001C0,
	0x01040000, 0x00960000,
	0x5A48C003, 0x00420A00,
	0x04000001, 0x18000000,
	0xAC000004, 0xAC100004,
	0x0800001B, 0xAC000005,
	0xAC100005, 0x0800001E,
	0x74000001, 0x080000B4,
	0xAC000004, 0xAC100004,
	0x080000D2, 0xAC000000,
	0xAC100000, 0x4400022F,
	0x04000014, 0x88000000,
	0x05DC0000, 0x04000014,
	0x88000000, 0xFFFF0000,
	0x00000000,
};
#else
u32 dPurinMainMotion_0x16F4[] = {
	ftMotionCommandMakeRumble(30, 7),
	ftMotionPlayFGM(233),
	ftMotionPlayVoice(570),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(1),
	ftMotionCommandMakeAttackColl(0, 0, 0, 20, 0, 0, 260, 0, 150, 0, 361, 120, 0, 3, 0, 2, 7, 60),
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
#endif

u32 dPurinMainMotion_0x1778[] = {
	ftMotionCommandEnd(),
};

u32 dPurinMainMotion_0x177C[] = {
	ftMotionCommandEnd(),
};
