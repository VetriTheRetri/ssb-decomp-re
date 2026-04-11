/* AnimJoint data for relocData file 2125 (FTBossAnimPunch3) */
/* 1344 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimPunch3_joint1[42];
extern u16 dFTBossAnimPunch3_joint3[24];
extern u16 dFTBossAnimPunch3_joint4[32];
extern u16 dFTBossAnimPunch3_joint5[24];
extern u16 dFTBossAnimPunch3_joint7[24];
extern u16 dFTBossAnimPunch3_joint8[44];
extern u16 dFTBossAnimPunch3_joint10[26];
extern u16 dFTBossAnimPunch3_joint11[42];
extern u16 dFTBossAnimPunch3_joint12[26];
extern u16 dFTBossAnimPunch3_joint14[26];
extern u16 dFTBossAnimPunch3_joint15[44];
extern u16 dFTBossAnimPunch3_joint16[26];
extern u16 dFTBossAnimPunch3_joint17[26];
extern u16 dFTBossAnimPunch3_joint19[24];
extern u16 dFTBossAnimPunch3_joint20[42];
extern u16 dFTBossAnimPunch3_joint21[24];
extern u16 dFTBossAnimPunch3_joint23[24];
extern u16 dFTBossAnimPunch3_joint24[44];
extern u16 dFTBossAnimPunch3_joint25[56];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimPunch3_joints[] = {
	(u32)dFTBossAnimPunch3_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimPunch3_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimPunch3_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimPunch3_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimPunch3_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimPunch3_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimPunch3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimPunch3_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimPunch3_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimPunch3_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimPunch3_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimPunch3_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimPunch3_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimPunch3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimPunch3_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimPunch3_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimPunch3_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimPunch3_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimPunch3_joint25, /* [24] joint 25 */
	0xFFFF0141, /* [25] END */
};

/* Joint 1 */
u16 dFTBossAnimPunch3_joint1[42] = {
	ftAnimBlock0(FT_ANIM_ROTZ | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0x3A2B, 0xE153, 0xB731, 0x6CB9, 0x1030, 0x0000, 0x0000, 0x0000, 0xC66A, 0x6000, 0x0C28, 0x003C, 0x0000, 0x0000, 0xB75C, 0x01B2, 0x0000, 0x0000, 0x43C8, 0x0000, 0x1010, 0x003C, 0x0000, 0x0000, 0x0A38, 0x0014, 0xB9CE, 0x4197, 0xB796, 0x0124, 0x45BB, 0x8000, 0x43FA, 0x0000, 0x460C, 0xA000, 0x43C8, 0x0000, 0x0000, 0x0000,
};

/* Joint 3 */
u16 dFTBossAnimPunch3_joint3[24] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), 0, 0, -16439, 4059, 0, 0, 0, 0, 17332,
	ftAnimEnd(),
	0xC316, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x0400, 0x0050, 0x0000, 0x0000,
};

/* Joint 4 */
u16 dFTBossAnimPunch3_joint4[32] = {
	ftAnimSetValBlock(FT_ANIM_SCAY), -32768,
	0xBFC9, /* unknown opcode 23 */
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5627),
	ftAnimEnd(),
	0x3FC9, 0x0FDB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x1000, 0x803C, 0xBFC9, 0x0FDB, 0x1000, 0x8014, 0xC01C, 0x61AA, 0x0000, 0x0000,
};

/* Joint 5 */
u16 dFTBossAnimPunch3_joint5[24] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), -16718, -18238, 0, 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x0400, 0x0050, 0x0000, 0x0000,
};

/* Joint 7 */
u16 dFTBossAnimPunch3_joint7[24] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), 16050, -18238, 16050, -18238, 16050, -18238, 17194, -1650, -15456,
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAZ, 16923),
	0xC0A2, /* unknown opcode 24 */
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 16256, 0, 16256,
	ftAnimEnd(),
	0x0400, 0x0050, 0x0000, 0x0000,
};

/* Joint 8 */
u16 dFTBossAnimPunch3_joint8[44] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -16370, -18950, 13789, -17131, -4054, -19087, 17978, -16219, -7935,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), -1483, 2563, -32689, 16366, -16394,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), 30544, -17131, -3413, 13544, 22166, -16219,
	0xE100, /* unknown opcode 28 */
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), -18238, 2563, -32767, 16366, -16381, 13782,
	ftAnimSetFlags(FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ),
	0xBD15, /* unknown opcode 23 */
	0xEE71, /* unknown opcode 29 */
	ftAnimSetTargetRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10374), -16219, -7935, -19186, -1483, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimPunch3_joint10[26] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBF86, 0x0B61, 0xB629, 0xC91F, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBF86, 0x0B90, 0x3613, 0x7206, 0x0A02, 0x0001, 0xBF86, 0x0B46, 0x3713, 0x7206, 0x0000, 0x0000,
};

/* Joint 11 */
u16 dFTBossAnimPunch3_joint11[42] = {
	0x0C01, 0x0000, 0x393F, 0xE700, 0x3447, 0xFF4E, 0x1002, 0x8000, 0x403D, 0xE454, 0x3FC9, 0x31FA, 0x0A03, 0x804F, 0x403D, 0xE456,
	0xB4D6, 0x7750, 0x393F, 0xC2FF, 0xB458, 0x0080, 0x3FC9, 0x3204, 0xB5E8, 0x5696, 0x0A03, 0x8001, 0x403D, 0xE454, 0xB50E, 0xFA35,
	0x393F, 0x1300, 0xB52F, 0xFFBF, 0x3FC9, 0x31D3, 0xB6C4, 0x9809, 0x0000, 0x0000,
};

/* Joint 12 */
u16 dFTBossAnimPunch3_joint12[26] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBF90, 0x70B9, 0xB40E, 0xFA35, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBF90, 0x70B4, 0xB544, 0x9809, 0x0A02, 0x0001, 0xBF90, 0x70BD, 0xB58E, 0xFA35, 0x0000, 0x0000,
};

/* Joint 14 */
u16 dFTBossAnimPunch3_joint14[26] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBFD2, 0x2609, 0x340E, 0xFA35, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBFD2, 0x25FC, 0xB597, 0xE9D9, 0x0A02, 0x0001, 0xBFD2, 0x2607, 0xB5B2, 0xB8C2, 0x0000, 0x0000,
};

/* Joint 15 */
u16 dFTBossAnimPunch3_joint15[44] = {
	0x0A03, 0x8000, 0xBD54, 0xCE79, 0x33C4, 0x9809, 0xC048, 0xA53E, 0xB48E, 0xFA35, 0xBFD8, 0xFF20, 0x3681, 0x92C0, 0x0C02, 0x804F,
	0xBD54, 0xCE20, 0xB2A0, 0xD97C, 0xBFD8, 0xFEFE, 0xB57A, 0x35DD, 0x1001, 0x004F, 0xC048, 0xA53E, 0x0C02, 0x8001, 0xBD54, 0xCE45,
	0xB413, 0x7206, 0xBFD8, 0xFF0E, 0xB5FA, 0x35DD, 0x1001, 0x0001, 0xC048, 0xA53E, 0x0000, 0x0000,
};

/* Joint 16 */
u16 dFTBossAnimPunch3_joint16[26] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBFA9, 0x322E, 0x3556, 0x7750, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBFA9, 0x321E, 0xB40E, 0xFA35, 0x0A02, 0x0001, 0xBFA9, 0x3228, 0xB5A0, 0xD97C, 0x0000, 0x0000,
};

/* Joint 17 */
u16 dFTBossAnimPunch3_joint17[26] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBFBC, 0x771E, 0x357A, 0x35DD, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBFBC, 0x7705, 0xB4B2, 0xB8C2, 0x0A02, 0x0001, 0xBFBC, 0x7716, 0xB60E, 0xFA35, 0x0000, 0x0000,
};

/* Joint 19 */
u16 dFTBossAnimPunch3_joint19[24] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), 0, 0, -16718, -18238, 0, 0, -15930, 22403, -15363,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 17152, 5929,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 16256, 0, 16256,
	ftAnimEnd(),
	0x0400, 0x0050, 0x0000, 0x0000,
};

/* Joint 20 */
u16 dFTBossAnimPunch3_joint20[42] = {
	ftAnimBlock(FT_ANIM_SCAZ, 0),
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), -27343, 13362, -18238, 4098, -32768, -16312,
	0x7B3B, /* unknown opcode 15 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 9383, 2563, -32689, -16312, 31541, 13654, 30544, 16052,
	0x9544, /* unknown opcode 18 */
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 13789, 16314, 9427, 13782, 30544, 2563, -32767, -16312,
	0x7B3A, /* unknown opcode 15 */
	0xB58E, /* unknown opcode 22 */
	0xFA35, /* unknown opcode 31 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), -27337, -19260, -26615, 16314, 9368, -18708,
	0xCE67, /* unknown opcode 25 */
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTBossAnimPunch3_joint21[24] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAY), 0, -16471,
	0xB6A4, /* unknown opcode 22 */
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 32768), 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0A02, 0x004F, 0xBFA9, 0xB69F, 0x34B2, 0xB8C2, 0x0A02, 0x0001, 0xBFA9, 0xB6A1, 0xB48E, 0xFA35, 0x0000, 0x0000,
};

/* Joint 23 */
u16 dFTBossAnimPunch3_joint23[24] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAY), 0, -16453,
	0xF139, /* unknown opcode 30 */
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 32768), 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0A02, 0x004F, 0xBFBB, 0xF132, 0x34B2, 0xB8C2, 0x0A02, 0x0001, 0xBFBB, 0xF137, 0xB532, 0xB8C2, 0x0000, 0x0000,
};

/* Joint 24 */
u16 dFTBossAnimPunch3_joint24[44] = {
	0x0C02, 0x8000, 0x3E54, 0x8738, 0x33B2, 0xB8C2, 0x409A, 0xF2E3, 0x358E, 0xFA35, 0x1001, 0x0000, 0x4033, 0xE078, 0x0A03, 0x804F,
	0x3E54, 0x8764, 0xB20E, 0xFA35, 0x4033, 0xE078, 0xB40E, 0xFA35, 0x409A, 0xF2E7, 0xB50E, 0xFA35, 0x0C02, 0x8001, 0x3E54, 0x8745,
	0xB4F1, 0x463A, 0x409A, 0xF2D5, 0xB70E, 0xFA35, 0x1001, 0x0001, 0x4033, 0xE078, 0x0000, 0x0000,
};

/* Joint 25 */
u16 dFTBossAnimPunch3_joint25[56] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBF84, 0x5871, 0xB40E, 0xFA35, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBF84, 0x5878, 0xB30E, 0xFA35, 0x0A02, 0x0001, 0xBF84, 0x587B, 0xB4B2, 0xB8C2, 0x0000, 0x0000, 0x0C02, 0x0000, 0xBFD8, 0x8E71, 0xB50E, 0xFA35, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBFD8, 0x8E82, 0xB40E, 0xFA35, 0x0A02, 0x0001, 0xBFD8, 0x8E8A, 0xB57A, 0x35DD, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
