/* AnimJoint data for relocData file 2121 (FTBossAnimUnknown3) */
/* 1312 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimUnknown3_joint1[32];
extern u16 dFTBossAnimUnknown3_joint3[24];
extern u16 dFTBossAnimUnknown3_joint4[32];
extern u16 dFTBossAnimUnknown3_joint5[24];
extern u16 dFTBossAnimUnknown3_joint7[24];
extern u16 dFTBossAnimUnknown3_joint8[44];
extern u16 dFTBossAnimUnknown3_joint10[26];
extern u16 dFTBossAnimUnknown3_joint11[44];
extern u16 dFTBossAnimUnknown3_joint12[24];
extern u16 dFTBossAnimUnknown3_joint14[24];
extern u16 dFTBossAnimUnknown3_joint15[44];
extern u16 dFTBossAnimUnknown3_joint16[26];
extern u16 dFTBossAnimUnknown3_joint17[26];
extern u16 dFTBossAnimUnknown3_joint19[24];
extern u16 dFTBossAnimUnknown3_joint20[42];
extern u16 dFTBossAnimUnknown3_joint21[24];
extern u16 dFTBossAnimUnknown3_joint23[24];
extern u16 dFTBossAnimUnknown3_joint24[44];
extern u16 dFTBossAnimUnknown3_joint25[52];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimUnknown3_joints[] = {
	(u32)dFTBossAnimUnknown3_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimUnknown3_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimUnknown3_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimUnknown3_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimUnknown3_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimUnknown3_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimUnknown3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimUnknown3_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimUnknown3_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimUnknown3_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimUnknown3_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimUnknown3_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimUnknown3_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimUnknown3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimUnknown3_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimUnknown3_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimUnknown3_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimUnknown3_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimUnknown3_joint25, /* [24] joint 25 */
	0xFFFF013B, /* [25] END */
};

/* Joint 1 */
u16 dFTBossAnimUnknown3_joint1[32] = {
	ftAnimSetValBlock(FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_SCAY), 0, -14742, 24576,
	ftAnimEnd(),
	0x0000, 0x1420, 0x0000, 0x0000, 0x0000, 0x0C08, 0x003C, 0x0000, 0x0000, 0x43C8, 0x0000, 0x1010, 0x003C, 0x0000, 0x0000, 0x0A18, 0x0014, 0x460C, 0xA000, 0x43C8, 0x0000, 0x45BB, 0x8000, 0x43FA, 0x0000, 0x0000, 0x0000,
};

/* Joint 3 */
u16 dFTBossAnimUnknown3_joint3[24] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), 0, 0, 0, 0, 0, 0, -15594, 0, 17332,
	ftAnimEnd(),
	0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x0400, 0x0050, 0x0000, 0x0000,
};

/* Joint 4 */
u16 dFTBossAnimUnknown3_joint4[32] = {
	ftAnimSetValBlock(FT_ANIM_SCAY), -32768,
	0xBFC9, /* unknown opcode 23 */
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5627),
	ftAnimEnd(),
	0x3FC9, 0x0FDB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x1000, 0x803C, 0xBFC9, 0x0FDB, 0x1000, 0x8014, 0xC01C, 0x61AA, 0x0000, 0x0000,
};

/* Joint 5 */
u16 dFTBossAnimUnknown3_joint5[24] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), -16718, -18238, 0, 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x0400, 0x0050, 0x0000, 0x0000,
};

/* Joint 7 */
u16 dFTBossAnimUnknown3_joint7[24] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), 16050, -18238, 16050, -18238, 16050, -18238, 17194, -1650, -15456,
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAZ, 16923),
	0xC0A2, /* unknown opcode 24 */
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 16256, 0, 16256,
	ftAnimEnd(),
	0x0400, 0x0050, 0x0000, 0x0000,
};

/* Joint 8 */
u16 dFTBossAnimUnknown3_joint8[44] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -16369, -18867, -30803, -17131, -3942, -18988, 15206, 16268, -17562,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), -1483, 2563, -32689, 16366, -16395, 13562,
	ftAnimSetTargetRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ, 48405), -3141, 13479, -29386, 16268, -17560, 13751, 12436,
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32769),
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -16380, 13818, 13789, -17131, -4293, 13968, 6186, 16268, -17563,
	0xB4D6, /* unknown opcode 22 */
	ftAnimSetFlags(FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTBossAnimUnknown3_joint10[26] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBF86, 0x0B64, 0xB663, 0xDEC4, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBF86, 0x0B9A, 0x3608, 0x467B, 0x0A02, 0x0001, 0xBF86, 0x0B4D, 0x371A, 0x25C1, 0x0000, 0x0000,
};

/* Joint 11 */
u16 dFTBossAnimUnknown3_joint11[44] = {
	0x0C03, 0x0000, 0x393F, 0xA300, 0x344F, 0xFDAB, 0x3FC9, 0x31FB, 0xB40E, 0xFA35, 0x1000, 0x8000, 0x403D, 0xE455, 0x0A03, 0x804F,
	0x403D, 0xE456, 0xB48E, 0xFA35, 0x393F, 0x9A00, 0x3378, 0x02E3, 0x3FC9, 0x3204, 0x340E, 0xFA35, 0x0A03, 0x8001, 0x403D, 0xE455,
	0xB48E, 0xFA35, 0x393F, 0x7300, 0xB41B, 0xFF5E, 0x3FC9, 0x31F2, 0xB60E, 0xFA35, 0x0000, 0x0000,
};

/* Joint 12 */
u16 dFTBossAnimUnknown3_joint12[24] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAY), 0, -16496,
	ftAnimSetFlagsT(FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5121),
	0x8000, /* unknown opcode 16 */
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBF90, 0x70B5, 0xB520, 0xD97C, 0x0A02, 0x0001, 0xBF90, 0x70B9, 0xB50E, 0xFA35, 0x0000, 0x0000,
};

/* Joint 14 */
u16 dFTBossAnimUnknown3_joint14[24] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAY), 0, -16430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5121), -32768, 0, 0, 0, 0, 2562,
	0x004F, /* End */
	0xBFD2, 0x25FB, 0xB58E, 0xFA35, 0x0A02, 0x0001, 0xBFD2, 0x2609, 0xB5D6, 0x7750, 0x0000, 0x0000,
};

/* Joint 15 */
u16 dFTBossAnimUnknown3_joint15[44] = {
	0x0A03, 0x8000, 0xBD54, 0xCE53, 0x33CD, 0x87AD, 0xC048, 0xA53C, 0xB48E, 0xFA35, 0xBFD8, 0xFF20, 0x3681, 0x92C0, 0x0C02, 0x804F,
	0xBD54, 0xCE19, 0xB2C4, 0x9809, 0xBFD8, 0xFEFE, 0xB57A, 0x35DD, 0x1001, 0x004F, 0xC048, 0xA53E, 0x0C02, 0x8001, 0xBD54, 0xCE3E,
	0xB413, 0x7206, 0xBFD8, 0xFF0E, 0xB5FA, 0x35DD, 0x1001, 0x0001, 0xC048, 0xA53E, 0x0000, 0x0000,
};

/* Joint 16 */
u16 dFTBossAnimUnknown3_joint16[26] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBFA9, 0x322E, 0x3556, 0x7750, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBFA9, 0x321E, 0xB456, 0x7750, 0x0A02, 0x0001, 0xBFA9, 0x3228, 0xB5A0, 0xD97C, 0x0000, 0x0000,
};

/* Joint 17 */
u16 dFTBossAnimUnknown3_joint17[26] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBFBC, 0x771E, 0x35B2, 0xB8C2, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBFBC, 0x7705, 0xB4B2, 0xB8C2, 0x0A02, 0x0001, 0xBFBC, 0x7716, 0xB60E, 0xFA35, 0x0000, 0x0000,
};

/* Joint 19 */
u16 dFTBossAnimUnknown3_joint19[24] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), 0, 0, -16718, -18238, 0, 0, -15930, 22403, -15363,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 17152, 5929,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 16256, 0, 16256,
	ftAnimEnd(),
	0x0400, 0x0050, 0x0000, 0x0000,
};

/* Joint 20 */
u16 dFTBossAnimUnknown3_joint20[42] = {
	0x0C01, 0x0000, 0x3EB4, 0x952F, 0x3432, 0xB8C2, 0x1002, 0x8000, 0xC048, 0x7B3B, 0x3FBA, 0x24AD, 0x0A03, 0x804F, 0xC048, 0x7B37,
	0x3556, 0x7750, 0x3EB4, 0x9539, 0x3486, 0x0A92, 0x3FBA, 0x24D1, 0x3656, 0x7750, 0x0A03, 0x8001, 0xC048, 0x7B38, 0xB48E, 0xFA35,
	0x3EB4, 0x953F, 0x3456, 0x7750, 0x3FBA, 0x24C9, 0xB57A, 0x35DD, 0x0000, 0x0000,
};

/* Joint 21 */
u16 dFTBossAnimUnknown3_joint21[24] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAY), 0, -16471,
	0xB6A6, /* unknown opcode 22 */
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 32768), 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0A02, 0x004F, 0xBFA9, 0xB6A0, 0x34B2, 0xB8C2, 0x0A02, 0x0001, 0xBFA9, 0xB6A8, 0xB57A, 0x35DD, 0x0000, 0x0000,
};

/* Joint 23 */
u16 dFTBossAnimUnknown3_joint23[24] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAY), 0, -16453,
	0xF13F, /* unknown opcode 30 */
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 32768), 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0A02, 0x004F, 0xBFBB, 0xF133, 0x34D6, 0x7750, 0x0A02, 0x0001, 0xBFBB, 0xF140, 0xB5D6, 0x7750, 0x0000, 0x0000,
};

/* Joint 24 */
u16 dFTBossAnimUnknown3_joint24[44] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_SCAY | FT_ANIM_SCAZ), -30880, -19442, -1483, 16435, -8070,
	0xB48E, /* unknown opcode 22 */
	0xFA35, /* unknown opcode 31 */
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAZ), -3357, 13710, -1483, 2563,
	0x804F, /* unknown opcode 16 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_SCAY | FT_ANIM_SCAZ), -30967, 13490, -18238, 16435, -8077,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAZ), -1483, 16538, -3363, 13818,
	ftAnimSetTargetRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ, 2563), -32767, 15956, -30906, 13685, -16884, 16435, -8072,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), -18238, 16538, -3361, 13710, -1483, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimUnknown3_joint25[52] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBF84, 0x5871, 0xB4D6, 0x7750, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBF84, 0x587B, 0x347A, 0x35DD, 0x0A02, 0x0001, 0xBF84, 0x5878, 0x34B2, 0xB8C2, 0x0000, 0x0000, 0x0C02, 0x0000, 0xBFD8, 0x8E71, 0xB50E, 0xFA35, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x004F, 0xBFD8, 0x8E87, 0x348E, 0xFA35, 0x0A02, 0x0001, 0xBFD8, 0x8E84, 0x34D6, 0x7750, 0x0000, 0x0000,
};
