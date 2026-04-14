/* ftMotionCommand script data for relocData file 216 (SamusMainMotion) */
/* File size: 7872 bytes (0x1EC0) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>

u32 dSamusMainMotion_0x0000[] = {
	ftMotionCommandHideModelPartAll(),
	ftMotionCommandSetModelPartID(6, 1),
	ftMotionCommandSetDamageCollPartIDS1(6),
	ftMotionCommandSetDamageCollPartIDS2(0, 25),
	ftMotionCommandSetDamageCollPartIDS3(-8, 200),
	ftMotionCommandSetDamageCollPartIDS4(260, 150),
	ftMotionCommandSetHitStatusPartID(5, 3),
	ftMotionCommandSetHitStatusPartID(13, 3),
	ftMotionCommandSetHitStatusPartID(15, 3),
	ftMotionCommandSetHitStatusPartID(8, 3),
	ftMotionCommandSetHitStatusPartID(16, 3),
	ftMotionCommandSetHitStatusPartID(9, 3),
	ftMotionCommandSetHitStatusPartID(32, 3),
	ftMotionCommandSetHitStatusPartID(27, 3),
	ftMotionCommandSetHitStatusPartID(33, 3),
	ftMotionCommandSetHitStatusPartID(28, 3),
	ftMotionCommandReturn(),
};

u32 dSamusMainMotion_0x0044[] = {
	ftMotionCommandSetModelPartID(6, 2),
	ftMotionCommandSetDamageCollPartIDS1(6),
	ftMotionCommandSetDamageCollPartIDS2(0, 25),
	ftMotionCommandSetDamageCollPartIDS3(-8, 130),
	ftMotionCommandSetDamageCollPartIDS4(130, 130),
	ftMotionCommandReturn(),
};

u32 dSamusMainMotion_0x005C[] = {
	ftMotionCommandSetModelPartID(6, 1),
	ftMotionCommandSetDamageCollPartIDS1(6),
	ftMotionCommandSetDamageCollPartIDS2(0, 25),
	ftMotionCommandSetDamageCollPartIDS3(-8, 200),
	ftMotionCommandSetDamageCollPartIDS4(260, 150),
	ftMotionCommandReturn(),
};

u32 dSamusMainMotion_0x0074[] = {
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandResetDamageCollPartAll(),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandReturn(),
};

u32 dSamusMainMotion_0x0084[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x008C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0094[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x009C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x00A4[] = {
	0xBC000003, 0x3800007B,
	0x80000002, 0x98002C00,
	0x00000000, 0xFF880000,
	0x003C0000, 0x04000006,
	0x84000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x00A4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(127),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x00CC[] = {
	0xBC000003, 0x3800006E,
	0x98002C00, 0x00000000,
	0x003C0000, 0x00000000,
	0x0400000C, 0x3800006E,
	0x98002C00, 0x00000000,
	0x003C0000, 0x00000000,
	0x94000000, 0x90000000,
	0x00A60033, 0xBC000003,
	0x3800007C, 0x98002C00,
	0x00000000, 0x003C0000,
	0x00000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x00CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(114),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(12),
	ftMotionPlayFGM(114),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dSamusMainMotion_0x00CC),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(128),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x0124[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0134[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, 100, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0164[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0174[] = {
	0x38000063, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x0174[] = {
	ftMotionPlayFGM(103),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x018C[] = {
	0x38000058, 0x80000002,
	0x98002C00, 0x00000000,
	0x00000064, 0x00640064,
	0x04000006, 0x84000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x018C[] = {
	ftMotionPlayFGM(92),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x01B0[] = {
	0xBC000003, 0x3800004D,
	0x98002C00, 0x00000000,
	0xFFC40000, 0x00000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x01B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(81),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x01CC[] = {
	0xBC000003, 0x3800004D,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x01CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(81),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x01E8[] = {
	0x38000273, 0x00000000,
};
#else
u32 dSamusMainMotion_0x01E8[] = {
	ftMotionPlayFGM(639),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x01F0[] = {
	0x38000273, 0x74000003,
	0x08000002, 0x74000001,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x01F0[] = {
	ftMotionPlayFGM(639),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x0204[] = {
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0210[] = {
	0x3800004D, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x0210[] = {
	ftMotionPlayFGM(81),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x0228[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0230[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0238[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0240[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x024C[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0258[] = {
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

u32 dSamusMainMotion_0x0294[] = {
	ftMotionCommandGoto(dSamusMainMotion_0x0258),
};

u32 dSamusMainMotion_0x029C[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dSamusMainMotion_0x02BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x02D4[] = {
	ftMotionCommandGoto(dSamusMainMotion_0x02BC),
};

u32 dSamusMainMotion_0x02DC[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandSubroutine(dSamusMainMotion_0x029C),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x02EC[] = {
	ftMotionCommandGoto(dSamusMainMotion_0x02DC),
	ftMotionCommandGoto(dSamusMainMotion_0x02DC),
	ftMotionCommandGoto(dSamusMainMotion_0x02DC),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 33, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandMakeAttackColl(0, 0, 33, 6, 0, 0, 200, 150, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0388[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 33, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 28, 6, 0, 0, 190, 160, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(3, 0, 28, 6, 0, 0, 160, 0, 0, 0, 361, 100, 80, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0400[] = {
	0xC4000009, 0x9800AC00,
	0x00000000, 0x00000000,
	0x00000000, 0x44000238,
	0x38000011, 0x98007C00,
	0x00000000, 0x00000000,
	0x00000000, 0x74000003,
	0x08000018, 0x74000001,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x0400[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(580),
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x043C[] = {
	0xC4000007, 0x9800AC00,
	0x00000000, 0x00000000,
	0x00000000, 0x44000238,
	0x3800000B, 0x98007C00,
	0x00000000, 0x00000000,
	0x00000000, 0x74000003,
	0x08000014, 0x74000001,
	0xC8000007, 0x00000000,
};
#else
u32 dSamusMainMotion_0x043C[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(580),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x047C[] = {
	ftMotionCommandGoto(dSamusMainMotion_0x043C),
};

u32 dSamusMainMotion_0x0484[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionPlayFGM(11),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(35),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x04D0[] = {
	ftMotionCommandSetParallelScript(dSamusMainMotion_0x0484),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x04F4[] = {
	ftMotionCommandSetParallelScript(dSamusMainMotion_0x0484),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0510[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(19),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x051C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x052C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0534[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x053C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0544[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x054C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0554[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x055C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0564[] = {
	0x98007C00, 0x00000000,
	0x00000000, 0x00000000,
	0x74000003, 0x44000231,
	0x08000005, 0x0C0460C0,
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
u32 dSamusMainMotion_0x0564[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(573),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandMakeAttackColl(0, 0, 35, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
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

u32 dSamusMainMotion_0x05D0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x05E0[] = {
	0x98007C00, 0x00000000,
	0x00000000, 0x00000000,
	0x44000231, 0x74000003,
	0x0800000D, 0x0C00A0C0,
	0x00960000, 0x00000000,
	0x5A464193, 0x00220000,
	0x0C8140C0, 0x01180000,
	0x00000000, 0x5A464193,
	0x00220000, 0x98004C00,
	0x00000000, 0xFF6A0000,
	0x00000000, 0x4C000026,
	0x04000002, 0x74000001,
	0x04000003, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x05E0[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(573),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 10, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x064C[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0654[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(29),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x06A8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x06B0[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWait(28),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(37),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(41),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0704[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0714[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0724[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0734[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0750[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0770[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dSamusMainMotion_0x0750),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x07A0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x07C0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x07E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dSamusMainMotion_0x07C0),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0818[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x083C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0858[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dSamusMainMotion_0x083C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0880[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x089C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x08BC[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dSamusMainMotion_0x089C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x08E8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0908[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0918[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dSamusMainMotion_0x0908),
};

u32 dSamusMainMotion_0x0928[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x093C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandGoto(dSamusMainMotion_0x0928),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x097C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x09B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x09E8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0A20[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0A38[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0A5C[] = {
	0xC4000007, 0x50000000,
	0xB12C0028, 0x08000013,
	0xBC000004, 0x88000000,
	0x02A70092, 0x04000006,
	0x18000000, 0x08000033,
	0xBC000003, 0x00000000,
};
#else
u32 dSamusMainMotion_0x0A5C[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x0A8C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0AB4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0ACC[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0AF0[] = {
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0B14[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0B3C[] = {
	0xB128000A, 0x08000006,
	0x88000000, 0x02DB0125,
	0x0400000A, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x0B3C[] = {
	ftMotionCommandSetColAnim(75, 10),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(10),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0B58[] = {
	0xB1280011, 0x08000008,
	0xBC000004, 0x08000009,
	0x88000000, 0x02E7013E,
	0x0800000B, 0x54000001,
	0x04000006, 0x18000000,
	0xBC000003, 0x00000000,
};
#else
u32 dSamusMainMotion_0x0B58[] = {
	ftMotionCommandSetColAnim(75, 17),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0B88[] = {
	0xB1280019, 0x50000000,
	0x08000013, 0xBC000004,
	0x88000000, 0x02F50157,
	0x08000015, 0x54000002,
	0x04000004, 0x18000000,
	0x08000033, 0xBC000003,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x0B88[] = {
	ftMotionCommandSetColAnim(75, 25),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(51),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0BBC[] = {
	0xBC000003, 0x08000004,
	0xBC000004, 0xB1280016,
	0x08000004, 0x88000000,
	0x03060170, 0x04000012,
	0x18000000, 0x08000028,
	0xBC000003, 0x00000000,
};
#else
u32 dSamusMainMotion_0x0BBC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 22),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x0BEC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0BFC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0C0C[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dSamusMainMotion_0x0C0C),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0C2C[] = {
	0x98007C00, 0x00000000,
	0x007800C8, 0x00C800C8,
	0x80000003, 0x98002800,
	0x00000000, 0x007800C8,
	0x00C800C8, 0x04000004,
	0x84000000, 0x90000000,
	0x031F030B, 0x9BF88800,
	0x00000000, 0x00000000,
	0x00000000, 0x44000239,
	0x74000003, 0x90000000,
	0x0321030B, 0x90000000,
	0x033A030B, 0x9BF88800,
	0x00000000, 0x00000000,
	0x00000000, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x0C2C[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dSamusMainMotion_0x0C2C),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(581),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dSamusMainMotion_0x0C2C),
	ftMotionCommandGoto(dSamusMainMotion_0x0C2C),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x0CAC[] = {
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0CB0[] = {
	0xBC000003, 0x44000235,
};
#else
u32 dSamusMainMotion_0x0CB0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(577),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0CB8[] = {
	0x80000003, 0x98002800,
	0x00000000, 0x00C800C8,
	0x00C800C8, 0x0400000A,
	0x84000000, 0x98003400,
	0x00000000, 0x00000064,
	0x00000000, 0x90000000,
	0x0343032E, 0xBC000003,
	0x44000235,
};
#else
u32 dSamusMainMotion_0x0CB8[] = {
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 200, 200, 200, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 100, 0, 0),
	ftMotionCommandGoto(dSamusMainMotion_0x0CB8),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(577),
};
#endif

u32 dSamusMainMotion_0x0CF4[] = {
	ftMotionCommandEffect(0, 90, 0, 0, 150, 0, 200, 300, 200),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dSamusMainMotion_0x0CF4),
};

u32 dSamusMainMotion_0x0D10[] = {
	ftMotionCommandSetModelPartID(24, 1),
	ftMotionCommandSetModelPartID(25, -1),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandSetModelPartID(18, 0),
	ftMotionCommandSetModelPartID(19, 0),
	ftMotionCommandSetModelPartID(20, 0),
	ftMotionCommandSetModelPartID(21, 0),
	ftMotionCommandSetModelPartID(22, 0),
	ftMotionCommandReturn(),
};

FTThrowHitDesc dSamusMainMotion_0x0D34[] = {
	{ -1, 8, 361, 100, 0, 0, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0D6C[] = {
	0xBC000003, 0x30000000,
	0x035F034D, 0x88000000,
	0x03860344, 0x80000005,
	0x04000004, 0x98807C00,
	0x00960000, 0x00000064,
	0x00640064, 0x84000000,
	0xC4020009, 0x0C048030,
	0x00D20000, 0x00000000,
	0x5A464003, 0x00200000,
	0x0C848030, 0x00A00000,
	0x000000C8, 0x5A464003,
	0x00200000, 0x98004000,
	0x00000000, 0xFF9C0000,
	0x00000000, 0x380000EE,
	0x58000011, 0x5C000009,
	0x80000005, 0x04000003,
	0x99207C00, 0x00960000,
	0x00000064, 0x00640064,
	0x84000000, 0x04000004,
	0x18000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x0D6C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow((u32)dSamusMainMotion_0x0D34),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandLoopBegin(5),
	ftMotionCommandWait(4),
	ftMotionCommandEffect(16, 31, 0, 150, 0, 0, 100, 100, 100),
	ftMotionCommandLoopEnd(),
	ftMotionCommandMakeRumble(16, 9),
	ftMotionCommandMakeAttackColl(0, 0, 36, 1, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 36, 1, 1, 0, 160, 0, 0, 200, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -100, 0, 0, 0),
	ftMotionPlayFGM(248),
	ftMotionCommandSetFlag1(17),
	ftMotionCommandSetFlag2(9),
	ftMotionCommandLoopBegin(5),
	ftMotionCommandWait(3),
	ftMotionCommandEffect(36, 31, 0, 150, 0, 0, 100, 100, 100),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x0E0C[] = {
	ftMotionPlayFGM(19),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dSamusMainMotion_0x0E20[] = {
	{ 52, 16, 40, 60, 0, 90, 2 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0E58[] = {
	0x30000000, 0x03990388,
	0x88000000, 0x03BD0344,
	0x04000004, 0x74000002,
	0x08000009, 0x44000231,
	0x38000012, 0x98007C00,
	0x000000C8, 0x01180000,
	0x00000000, 0x98004C00,
	0x00000000, 0xFF6A0000,
	0x00000000, 0x9BF88400,
	0x00000000, 0x00000000,
	0x00000000, 0x5C000001,
	0x74000001, 0x00000000,
};
#else
u32 dSamusMainMotion_0x0E58[] = {
	ftMotionCommandSetThrow((u32)dSamusMainMotion_0x0E20),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(9),
	ftMotionPlayVoice(573),
	ftMotionPlayFGM(18),
	ftMotionCommandEffect(0, 31, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

FTThrowHitDesc dSamusMainMotion_0x0EB8[] = {
	{ 52, 18, 40, 60, 0, 90, 2 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0EF0[] = {
	0x30000000, 0x03BF03AE,
	0x88000000, 0x06B90344,
	0x04000004, 0x74000002,
	0x08000009, 0x44000231,
	0x38000012, 0x98007C00,
	0x000000C8, 0x01180000,
	0x00000000, 0x98004C00,
	0x00000000, 0xFF6A0000,
	0x00000000, 0x9BF88400,
	0x00000000, 0x00000000,
	0x00000000, 0x5C000002,
	0x74000001, 0x00000000,
};
#else
u32 dSamusMainMotion_0x0EF0[] = {
	ftMotionCommandSetThrow((u32)dSamusMainMotion_0x0EB8),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0D10),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(9),
	ftMotionPlayVoice(573),
	ftMotionPlayFGM(18),
	ftMotionCommandEffect(0, 31, 0, 0, 200, 280, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x0F50[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0F5C[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0F68[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0F74[] = {
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x0F80[] = {
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0F8C[] = {
	0x04000018, 0xC4000006,
	0x44000238, 0x0800003C,
	0x58000001, 0x00000000,
};
#else
u32 dSamusMainMotion_0x0F8C[] = {
	ftMotionCommandWait(24),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(580),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x0FA4[] = {
	0xBC000003, 0x08000004,
	0x0C012070, 0x00B40078,
	0x00000000, 0x5A464003,
	0x00000000, 0x0C810070,
	0x00B4003C, 0x00000000,
	0x5A464003, 0x00000000,
	0x0D010070, 0x00B4FFC4,
	0x00000000, 0x5A464003,
	0x00000000, 0x4C000027,
	0x04000002, 0x18000000,
	0x0800000C, 0x58000001,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x0FA4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 9, 3, 1, 0, 180, 120, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 8, 3, 1, 0, 180, 60, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(2, 0, 8, 3, 1, 0, 180, -60, 0, 0, 361, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1000[] = {
	0xBC000003, 0x08000007,
	0x0C0200F0, 0x00DC0078,
	0x00000000, 0x5A464003,
	0x00400500, 0x0C81E0F0,
	0x00DC001E, 0x00000000,
	0x5A464003, 0x00400500,
	0x4C000026, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x1000[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 16, 7, 1, 0, 220, 120, 0, 0, 361, 100, 0, 3, 0, 1, 0, 10),
	ftMotionCommandMakeAttackColl(1, 0, 15, 7, 1, 0, 220, 30, 0, 0, 361, 100, 0, 3, 0, 1, 0, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1040[] = {
	0x08000006, 0x0C01E190,
	0x00DC0010, 0x00000000,
	0x5A464003, 0x01400000,
	0x98004C00, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000025, 0x04000004,
	0x0C01E150, 0x00DC0010,
	0x00000000, 0x5A464003,
	0x01400000, 0x04000010,
	0x18000000, 0xBC000003,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x1040[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 15, 12, 1, 0, 220, 16, 0, 0, 361, 100, 0, 3, 1, 2, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 15, 10, 1, 0, 220, 16, 0, 0, 361, 100, 0, 3, 1, 2, 0, 0),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1094[] = {
	0x08000007, 0x4C000026,
	0x0D040190, 0x006E0000,
	0x00000000, 0x5A464003,
	0x00220500, 0x0C842190,
	0x00C80000, 0x00000000,
	0x5A464003, 0x00220500,
	0x0C042190, 0x00C800B4,
	0x00000000, 0x5A464003,
	0x00220500, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x1094[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandMakeAttackColl(2, 0, 32, 12, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 12, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 12, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x10E4[] = {
	0x08000007, 0x4C000026,
	0x0D040170, 0x006E0000,
	0x00000000, 0x5A464003,
	0x00220500, 0x0C842170,
	0x00C80000, 0x00000000,
	0x5A464003, 0x00220500,
	0x0C042170, 0x00C800B4,
	0x00000000, 0x5A464003,
	0x00220500, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x10E4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandMakeAttackColl(2, 0, 32, 11, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 11, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 11, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1134[] = {
	0x08000007, 0x4C000026,
	0x0D040150, 0x006E0000,
	0x00000000, 0x5A464003,
	0x00220500, 0x0C842150,
	0x00C80000, 0x00000000,
	0x5A464003, 0x00220500,
	0x0C042150, 0x00C800B4,
	0x00000000, 0x5A464003,
	0x00220500, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x1134[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandMakeAttackColl(2, 0, 32, 10, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 10, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 10, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1184[] = {
	0x08000007, 0x4C000026,
	0x0D040130, 0x006E0000,
	0x00000000, 0x5A464003,
	0x00220500, 0x0C842130,
	0x00C80000, 0x00000000,
	0x5A464003, 0x00220500,
	0x0C042130, 0x00C800B4,
	0x00000000, 0x5A464003,
	0x00220500, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x1184[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandMakeAttackColl(2, 0, 32, 9, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 9, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 9, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x11D4[] = {
	0x08000007, 0x4C000026,
	0x0D040130, 0x006E0000,
	0x00000000, 0x5A464003,
	0x00220500, 0x0C842130,
	0x00C80000, 0x00000000,
	0x5A464003, 0x00220500,
	0x0C042130, 0x00C800B4,
	0x00000000, 0x5A464003,
	0x00220500, 0x04000005,
	0x18000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x11D4[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandMakeAttackColl(2, 0, 32, 9, 1, 0, 110, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 9, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(0, 0, 33, 9, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1224[] = {
	0x08000008, 0x0C042110,
	0x00C8FFEC, 0x00000000,
	0x5A464003, 0x00220000,
	0x0C842110, 0x00C800B4,
	0x00000000, 0x5A464003,
	0x00220000, 0x4C000026,
	0x04000011, 0x0C0421B0,
	0x012CFFEC, 0x00000000,
	0x5A464003, 0x00420280,
	0x0C8421B0, 0x012C00B4,
	0x00000000, 0x5A464003,
	0x00420280, 0x4C000025,
	0x99087C00, 0x00640000,
	0x00000000, 0x00000000,
	0x04000005, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x1224[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 33, 8, 1, 0, 200, -20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 8, 1, 0, 200, 180, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(17),
	ftMotionCommandMakeAttackColl(0, 0, 33, 13, 1, 0, 300, -20, 0, 0, 361, 100, 0, 3, 0, 2, 1, 5),
	ftMotionCommandMakeAttackColl(1, 0, 33, 13, 1, 0, 300, 180, 0, 0, 361, 100, 0, 3, 0, 2, 1, 5),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandEffect(33, 31, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x12A0[] = {
	0xBC000004, 0xA0500001,
	0x08000008, 0x0C0421B0,
	0x00C8FFD8, 0x00000000,
	0x0A064003, 0x00220500,
	0x0C8421B0, 0x00C800B4,
	0x00000000, 0x0A064003,
	0x00220500, 0x4C000026,
	0x04000005, 0x18000000,
	0x0800001E, 0xBC000001,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x12A0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetModelPartID(10, 1),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandMakeAttackColl(0, 0, 33, 13, 1, 0, 200, -40, 0, 0, 40, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 13, 1, 0, 200, 180, 0, 0, 40, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x12EC[] = {
	0xBC000003, 0x08000008,
	0x98807C00, 0x00780000,
	0x00000000, 0x00000000,
	0x0800000C, 0x0C020290,
	0x00D2FFB0, 0x00000000,
	0x5A464003, 0x00400780,
	0x0C820290, 0x00F00078,
	0x00000000, 0x5A464003,
	0x00400780, 0x0D010290,
	0x00960000, 0x00000000,
	0x0A064003, 0x00400780,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x50000000, 0x4C000025,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x12EC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 20, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 20, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 20, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1368[] = {
	0xBC000003, 0x08000008,
	0x98807C00, 0x00780000,
	0x00000000, 0x00000000,
	0x0800000C, 0x0C020270,
	0x00D2FFB0, 0x00000000,
	0x5A464003, 0x00400780,
	0x0C820270, 0x00F00078,
	0x00000000, 0x5A464003,
	0x00400780, 0x0D010270,
	0x00960000, 0x00000000,
	0x0A064003, 0x00400780,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x50000000, 0x4C000025,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x1368[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 19, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 19, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 19, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x13E4[] = {
	0xBC000003, 0x08000008,
	0x98807C00, 0x00780000,
	0x00000000, 0x00000000,
	0x0800000C, 0x0C020250,
	0x00D2FFB0, 0x00000000,
	0x5A464003, 0x00400780,
	0x0C820250, 0x00F00078,
	0x00000000, 0x5A464003,
	0x00400780, 0x0D010250,
	0x00960000, 0x00000000,
	0x0A064003, 0x00400780,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x4C000025, 0x50000000,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x13E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 18, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 18, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 18, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1460[] = {
	0xBC000003, 0x08000008,
	0x98807C00, 0x00780000,
	0x00000000, 0x00000000,
	0x0800000C, 0x0C020230,
	0x00D2FFB0, 0x00000000,
	0x5A464003, 0x00400780,
	0x0C820230, 0x00F00078,
	0x00000000, 0x5A464003,
	0x00400780, 0x0D010230,
	0x00960000, 0x00000000,
	0x0A064003, 0x00400780,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x4C000025, 0x50000000,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x1460[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 17, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 17, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 17, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x14DC[] = {
	0xBC000003, 0x08000008,
	0x98807C00, 0x00780000,
	0x00000000, 0x00000000,
	0x0800000C, 0x0C020210,
	0x00D2FFB0, 0x00000000,
	0x5A464003, 0x00400780,
	0x0C820210, 0x00F00078,
	0x00000000, 0x5A464003,
	0x00400780, 0x0D010210,
	0x00960000, 0x00000000,
	0x0A064003, 0x00400780,
	0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000,
	0x4C000025, 0x50000000,
	0x04000004, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x14DC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 16, 16, 1, 0, 210, -80, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(1, 0, 16, 16, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandMakeAttackColl(2, 0, 8, 16, 1, 0, 150, 0, 0, 0, 40, 100, 0, 3, 0, 2, 0, 15),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1558[] = {
	0xBC000003, 0x44000236,
	0x08000008, 0x98807C00,
	0x003C0000, 0x00000000,
	0x00000000, 0x08000011,
	0x0C020151, 0x00BEFFB0,
	0x00000000, 0x14064003,
	0x01460500, 0x0C820151,
	0x017200C8, 0x00000000,
	0x14064003, 0x01460500,
	0x98807000, 0x012C0000,
	0x00000000, 0x00000000,
	0x98004C00, 0x00000000,
	0xFF4C0000, 0x00000000,
	0x9BF89400, 0x00000000,
	0x00000000, 0x00000000,
	0xC400C007, 0x4C000002,
	0x04000002, 0x18000000,
	0x04000002, 0x2C000000,
	0x2C000001, 0x98807000,
	0x012C0000, 0x00000000,
	0x00000000, 0x9BF89400,
	0x00000000, 0x00000000,
	0x00000000, 0xC400C007,
	0x4C000002, 0x04000002,
	0x18000000, 0x04000002,
	0x2C000000, 0x2C000001,
	0x98807000, 0x012C0000,
	0x00000000, 0x00000000,
	0x9BF89400, 0x00000000,
	0x00000000, 0x00000000,
	0xC400C007, 0x4C000002,
	0x04000002, 0x18000000,
	0x04000002, 0x2C000000,
	0x2C000001, 0x98807000,
	0x012C0000, 0x00000000,
	0x00000000, 0x9BF89400,
	0x00000000, 0x00000000,
	0x00000000, 0xC400C007,
	0x4C000002, 0x04000002,
	0x18000000, 0x04000002,
	0x2C000000, 0x2C000001,
	0x98807000, 0x012C0000,
	0x00000000, 0x00000000,
	0x98004C00, 0x00000000,
	0xFF4C0000, 0x00000000,
	0x9BF89400, 0x00000000,
	0x00000000, 0x00000000,
	0xC400C007, 0x4C000002,
	0x04000002, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x1558[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(578),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(16, 31, 0, 60, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandMakeAttackColl(0, 0, 16, 10, 1, 1, 190, -80, 0, 0, 80, 100, 0, 3, 1, 2, 3, 22),
	ftMotionCommandMakeAttackColl(1, 0, 16, 10, 1, 1, 400, 200, 0, 0, 80, 100, 0, 3, 1, 2, 3, 22),
	ftMotionCommandEffect(16, 28, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandEffect(-1, 37, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(2),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, 28, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 37, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(2),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, 28, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 37, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(2),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, 28, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 37, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(2),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, 28, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandEffect(-1, 37, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(6, 7),
	ftMotionCommandPlayFGMStoreInfo(2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x16E4[] = {
	0xBC000003, 0x50000000,
	0x08000008, 0xBC000004,
	0x0C042210, 0x00D2FFC4,
	0x00000000, 0x0F050003,
	0x00421180, 0x0C842210,
	0x00F000DC, 0x00000000,
	0x0F050003, 0x00421180,
	0x99087C00, 0x00DC0000,
	0x00000000, 0x00000000,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x4C000025, 0x04000005,
	0x18000000, 0x04000006,
	0x0C0421D0, 0x00D2FFC4,
	0x00000000, 0x0F050003,
	0x00221180, 0x0C8421D0,
	0x00F000DC, 0x00000000,
	0x0F050003, 0x00221180,
	0x4C000026, 0x04000004,
	0x18000000, 0x0800001F,
	0xBC000003, 0x00000000,
};
#else
u32 dSamusMainMotion_0x16E4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandMakeAttackColl(0, 0, 33, 16, 1, 0, 210, -60, 0, 0, 60, 80, 0, 3, 0, 2, 1, 35),
	ftMotionCommandMakeAttackColl(1, 0, 33, 16, 1, 0, 240, 220, 0, 0, 60, 80, 0, 3, 0, 2, 1, 35),
	ftMotionCommandEffect(33, 31, 0, 220, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 0, 33, 14, 1, 0, 210, -60, 0, 0, 60, 80, 0, 3, 0, 1, 1, 35),
	ftMotionCommandMakeAttackColl(1, 0, 33, 14, 1, 0, 240, 220, 0, 0, 60, 80, 0, 3, 0, 1, 1, 35),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(31),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x178C[] = {
	0x08000004, 0x58000032,
	0x0C036210, 0x00F0FFE2,
	0x00000000, 0x5A464003,
	0x00420500, 0x0C842210,
	0x01180032, 0x00000000,
	0x5A464003, 0x00420500,
	0x4C000026, 0x04000004,
	0x0C0361B0, 0x00F0FFE2,
	0x00000000, 0x5A464003,
	0x00220500, 0x0C8421B0,
	0x01180032, 0x00000000,
	0x5A464003, 0x00220500,
	0x04000014, 0x58000000,
	0x18000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x178C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 27, 16, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 16, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 27, 13, 1, 0, 240, -30, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 33, 13, 1, 0, 280, 50, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(20),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x17FC[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 16, 5, 1, 1, 230, -110, 0, 0, 361, 100, 0, 3, 0, 2, 3, 0),
	ftMotionCommandMakeAttackColl(1, 0, 16, 5, 1, 1, 350, 200, 0, 0, 361, 100, 0, 3, 0, 2, 3, 0),
	ftMotionCommandEffect(16, 28, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 80, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 37, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, 28, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 37, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, 28, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 80, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 37, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(5),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandEffect(16, 28, 0, 300, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 37, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(7, 7),
	ftMotionCommandPlayFGMStoreInfo(2),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1938[] = {
	0x08000005, 0x58000001,
	0x0C0421D0, 0x00F0FFE2,
	0x00000000, 0x5A491003,
	0x00420000, 0x0C8421D0,
	0x0104006E, 0x00000000,
	0x5A491003, 0x00420000,
	0x4C000025, 0x04000004,
	0x0C042150, 0x00F0FFE2,
	0x00000000, 0x5A491003,
	0x00220000, 0x0C842150,
	0x0104006E, 0x00000000,
	0x5A491003, 0x00220000,
	0x4C000026, 0x04000008,
	0x58000000, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x1938[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 33, 14, 1, 0, 240, -30, 0, 0, 361, 145, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 14, 1, 0, 260, 110, 0, 0, 361, 145, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 33, 10, 1, 0, 240, -30, 0, 0, 361, 145, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 33, 10, 1, 0, 260, 110, 0, 0, 361, 145, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x19AC[] = {
	0xBC000004, 0x3800004D,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x0800000F, 0x00000000,
};
#else
u32 dSamusMainMotion_0x19AC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(81),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x19CC[] = {
	0x08000006, 0x58000001,
	0x44000237, 0x0C038050,
	0x0140FFCE, 0x002D0000,
	0x1406407B, 0x00200000,
	0x0C838050, 0x01680064,
	0x001E0000, 0x1406407B,
	0x00200000, 0x80000004,
	0x04000002, 0x18000000,
	0x04000001, 0x2C000000,
	0x2C000001, 0x84000000,
	0x04000002, 0x18000000,
	0x0C038090, 0x0122FFCE,
	0x002D0000, 0x14096003,
	0x00200000, 0x0C838090,
	0x0140003C, 0x001E0000,
	0x14096003, 0x00200000,
	0x58000000, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x19CC[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayVoice(579),
	ftMotionCommandMakeAttackColl(0, 0, 28, 2, 1, 0, 320, -50, 45, 0, 80, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 2, 1, 0, 360, 100, 30, 0, 80, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 28, 4, 1, 0, 290, -50, 45, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 4, 1, 0, 320, 60, 30, 0, 80, 150, 0, 3, 0, 1, 0, 0),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1A58[] = {
	0x3800004D, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x1A58[] = {
	ftMotionPlayFGM(81),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1A70[] = {
	0x08000004, 0x58000014,
	0x0C0201D0, 0x00FAFFC4,
	0x00000000, 0xE9864003,
	0x00400000, 0x0C8201D0,
	0x01180078, 0x00000000,
	0xE9864003, 0x00400000,
	0x4C000025, 0x04000009,
	0x58000000, 0x18000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x1A70[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 16, 14, 1, 0, 250, -60, 0, 0, -90, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 16, 14, 1, 0, 280, 120, 0, 0, -90, 100, 0, 3, 0, 2, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(9),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1AB4[] = {
	0x3800004D, 0x98003400,
	0x00000000, 0x00000000,
	0x00000000, 0x00000000,
};
#else
u32 dSamusMainMotion_0x1AB4[] = {
	ftMotionPlayFGM(81),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1ACC[] = {
	0x08000001, 0x380000F1,
	0x04000050, 0x5C000001,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x1ACC[] = {
	ftMotionCommandWaitAsync(1),
	ftMotionPlayFGM(251),
	ftMotionCommandWait(80),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1AE0[] = {
	0x90000000, 0x074906B3,
	0xB0B40000, 0x74000002,
	0x98004C00, 0x00000000,
	0xFF4C0000, 0x00000000,
	0x08000004, 0x68000000,
	0x58000001, 0x380000EF,
	0x98005800, 0x00000000,
	0x00000000, 0x00000000,
	0x98287C00, 0x00000000,
	0x000000C8, 0x00C80000,
	0x0C000050, 0x00C80000,
	0xFFE2008C, 0x19000007,
	0x03223C00, 0x0C800050,
	0x00C80000, 0xFFE2FF74,
	0x19000007, 0x03223C00,
	0x0D000050, 0x00C80000,
	0x014A008C, 0x19000007,
	0x03223700, 0x0D800050,
	0x00C80000, 0x014AFF74,
	0x19000007, 0x03223700,
	0x04000002, 0x80000003,
	0x98287C00, 0x00000000,
	0x000000C8, 0x00C80000,
	0x0C000030, 0x00B40000,
	0xFFB0006E, 0x1A400007,
	0x03223700, 0x0C800030,
	0x00B40000, 0xFFB0FF92,
	0x1A400007, 0x03223700,
	0x0D000030, 0x00B40000,
	0x0136006E, 0x19000007,
	0x03222300, 0x0D800030,
	0x00B40000, 0x0136FF92,
	0x19000007, 0x03222300,
	0x04000002, 0x18000000,
	0x84000000, 0x74000001,
	0x8000000A, 0x98287C00,
	0x00000000, 0x000000C8,
	0x00C800C8, 0x0C000030,
	0x008C0000, 0x01220064,
	0x32000007, 0x03220A00,
	0x0C800030, 0x008C0000,
	0x0122FF9C, 0x32000007,
	0x03220A00, 0x0D000030,
	0x008C0000, 0x000A0064,
	0x1B800007, 0x03221900,
	0x0D800030, 0x008C0000,
	0x000AFF9C, 0x1B800007,
	0x03221900, 0x04000002,
	0x18000000, 0x84000000,
};
#else
u32 dSamusMainMotion_0x1AE0[] = {
	ftMotionCommandGoto(dSamusMainMotion_0x1ACC),
	ftMotionCommandSetColAnim(45, 0),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandSetFlag1(1),
	ftMotionPlayFGM(249),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(5, 31, 0, 0, 0, 0, 200, 200, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 2, 1, 0, 200, 0, -30, 140, 100, 0, 1, 3, 3, 0, 1, 120),
	ftMotionCommandMakeAttackColl(1, 0, 0, 2, 1, 0, 200, 0, -30, -140, 100, 0, 1, 3, 3, 0, 1, 120),
	ftMotionCommandMakeAttackColl(2, 0, 0, 2, 1, 0, 200, 0, 330, 140, 100, 0, 1, 3, 3, 0, 1, 110),
	ftMotionCommandMakeAttackColl(3, 0, 0, 2, 1, 0, 200, 0, 330, -140, 100, 0, 1, 3, 3, 0, 1, 110),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(5, 31, 0, 0, 0, 0, 200, 200, 0),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 180, 0, -80, 110, 105, 0, 1, 3, 3, 0, 1, 110),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 180, 0, -80, -110, 105, 0, 1, 3, 3, 0, 1, 110),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 180, 0, 310, 110, 100, 0, 1, 3, 3, 0, 1, 70),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 180, 0, 310, -110, 100, 0, 1, 3, 3, 0, 1, 70),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
	ftMotionCommandLoopBegin(10),
	ftMotionCommandEffect(5, 31, 0, 0, 0, 0, 200, 200, 200),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 140, 0, 290, 100, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 140, 0, 290, -100, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 140, 0, 10, 100, 110, 0, 1, 3, 3, 0, 1, 50),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 140, 0, 10, -100, 110, 0, 1, 3, 3, 0, 1, 50),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1C68[] = {
	0x0C000032, 0x01900000,
	0x00640000, 0x5A464143,
	0x03420000, 0x04000002,
	0x18000000, 0xB4000000,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x1C68[] = {
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 2, 400, 0, 100, 0, 361, 100, 80, 3, 3, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandResetColAnim(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1C8C[] = {
	0xB0B40000, 0x74000002,
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x08000004, 0x380000EF,
	0x74000001, 0x8000000D,
	0x98287C00, 0x00000000,
	0x000000C8, 0x00C800C8,
	0x0C000030, 0x00A00000,
	0x01220096, 0x32000007,
	0x03220A00, 0x0C800030,
	0x00A00000, 0x0122FF6A,
	0x32000007, 0x03220A00,
	0x0D000030, 0x00A00000,
	0x000A0096, 0x1B800007,
	0x03221900, 0x0D800030,
	0x00A00000, 0x000AFF6A,
	0x1B800007, 0x03221900,
	0x04000002, 0x18000000,
	0x84000000, 0x90000000,
	0x0769071A, 0x00000000,
};
#else
u32 dSamusMainMotion_0x1C8C[] = {
	ftMotionCommandSetColAnim(45, 0),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionPlayFGM(249),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandLoopBegin(13),
	ftMotionCommandEffect(5, 31, 0, 0, 0, 0, 200, 200, 200),
	ftMotionCommandMakeAttackColl(0, 0, 0, 1, 1, 0, 160, 0, 290, 150, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(1, 0, 0, 1, 1, 0, 160, 0, 290, -150, 200, 0, 1, 3, 3, 0, 1, 20),
	ftMotionCommandMakeAttackColl(2, 0, 0, 1, 1, 0, 160, 0, 10, 150, 110, 0, 1, 3, 3, 0, 1, 50),
	ftMotionCommandMakeAttackColl(3, 0, 0, 1, 1, 0, 160, 0, 10, -150, 110, 0, 1, 3, 3, 0, 1, 50),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dSamusMainMotion_0x1C68),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x1D2C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWait(13),
	ftMotionCommandEffect(16, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1D58[] = {
	ftMotionCommandWait(13),
	ftMotionCommandEffect(16, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1D70[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(16, 31, 0, 150, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 7),
};

u32 dSamusMainMotion_0x1D88[] = {
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dSamusMainMotion_0x1D88),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetColAnim(47, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(16, 18, 0, 200, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEnd(),
};

u32 dSamusMainMotion_0x1DE0[] = {
	ftMotionCommandSetColAnim(47, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEffect(16, 18, 0, 200, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEnd(),
};

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1E10[] = {
	0x98003400, 0x00000000,
	0x00000000, 0x00000000,
	0x08000003, 0x88000000,
	0x07920000, 0x68000000,
	0x0800000A, 0x54000001,
	0x380000ED, 0xC4000006,
	0x60000001, 0x88000000,
	0x07960011, 0x0800002B,
	0x60000000, 0x88000000,
	0x07990017, 0x08000031,
	0x88000000, 0x07A1001D,
	0x00000000,
};
#else
u32 dSamusMainMotion_0x1E10[] = {
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandSetAirJumpMax(0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionPlayFGM(247),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetFlag3(1),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(43),
	ftMotionCommandSetFlag3(0),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(49),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dSamusMainMotion_0x1E6C[] = {
	0x98002C00, 0x00000000,
	0x00000000, 0x00000000,
	0x08000003, 0x88000000,
	0x07A70000, 0x0800000A,
	0x54000001, 0x380000ED,
	0xC4000006, 0x88000000,
	0x07AA0011, 0x0800002B,
	0x88000000, 0x07AD0017,
	0x08000031, 0x88000000,
	0xFFFF001D, 0x00000000,
};
#else
u32 dSamusMainMotion_0x1E6C[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0000),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionPlayFGM(247),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0044),
	ftMotionCommandWaitAsync(43),
	ftMotionCommandSubroutine(dSamusMainMotion_0x005C),
	ftMotionCommandWaitAsync(49),
	ftMotionCommandSubroutine(dSamusMainMotion_0x0074),
	ftMotionCommandEnd(),
};
#endif

u32 dSamusMainMotion_0x1EBC[] = {
	ftMotionCommandEnd(),
};
