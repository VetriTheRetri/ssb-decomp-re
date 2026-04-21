/* AnimJoint data for relocData file 1799 (FTNessAnimAppearStart1) */
/* 1760 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimAppearStart1_joint1[32];
extern u16 dFTNessAnimAppearStart1_joint2[34];
extern u16 dFTNessAnimAppearStart1_joint3[22];
extern u16 dFTNessAnimAppearStart1_joint5[22];
extern u16 dFTNessAnimAppearStart1_joint6[72];
extern u16 dFTNessAnimAppearStart1_joint7[66];
extern u16 dFTNessAnimAppearStart1_joint8[12];
extern u16 dFTNessAnimAppearStart1_joint9[32];
extern u16 dFTNessAnimAppearStart1_joint11[12];
extern u16 dFTNessAnimAppearStart1_joint12[58];
extern u16 dFTNessAnimAppearStart1_joint13[26];
extern u16 dFTNessAnimAppearStart1_joint16[12];
extern u16 dFTNessAnimAppearStart1_joint17[88];
extern u16 dFTNessAnimAppearStart1_joint19[48];
extern u16 dFTNessAnimAppearStart1_joint20[72];
extern u16 dFTNessAnimAppearStart1_joint22[32];
extern u16 dFTNessAnimAppearStart1_joint23[58];
extern u16 dFTNessAnimAppearStart1_joint25[32];
extern u16 dFTNessAnimAppearStart1_joint26[58];
extern u16 dFTNessAnimAppearStart1_joint27[38];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimAppearStart1_joints[] = {
	(u32)dFTNessAnimAppearStart1_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimAppearStart1_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimAppearStart1_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimAppearStart1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimAppearStart1_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimAppearStart1_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimAppearStart1_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimAppearStart1_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimAppearStart1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimAppearStart1_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimAppearStart1_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimAppearStart1_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimAppearStart1_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimAppearStart1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimAppearStart1_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimAppearStart1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimAppearStart1_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimAppearStart1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimAppearStart1_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimAppearStart1_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimAppearStart1_joint1[32] = {
	ftAnimSetValBlock(FT_ANIM_ROTZ | FT_ANIM_SCAY), 0, -14964,
	0xA000, /* unknown opcode 20 */
	ftAnimBlock0(FT_ANIM_TRAX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0x466A, 0x6000, 0xC418, 0x9ED1, 0x1410, 0x0000, 0x0000, 0x0000, 0x0A28, 0x0027, 0x0000, 0x0000, 0x4307, 0xB5CD, 0x0000, 0x0000, 0xC30F, 0x51D1, 0x1028, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

/* Joint 2 */
u16 dFTNessAnimAppearStart1_joint2[34] = {
	ftAnimBlock(0, 32768),
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), -18238, 16395, -24488, 5690, 0, -26750,
	0xF580, /* unknown opcode 30 */
	0xC0E2, /* unknown opcode 24 */
	ftAnimSetFlagsT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17158),
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 1), 16513,
	ftAnimLoop(0x6873, 1537),
	0x8027, /* unknown opcode 16 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), -18238, 16395, -24488, 2561, -32767, 0,
	ftAnimEnd(),
	0x3961, 0xA8D1, 0x3FC9, 0x0FDB, 0xB98B, 0x176A, 0x0000, 0x0000,
};

/* Joint 3 */
u16 dFTNessAnimAppearStart1_joint3[22] = {
	ftAnimBlock(0, 0),
	0xBF34, /* unknown opcode 23 */
	0x0402, /* End */
	0x1602, 0x8000, 0x3D61, 0x0AC2, 0x3C89, 0xED15, 0x0601, 0x0027, 0xBF34, 0x0402, 0x0A01, 0x0001, 0xBFC9, 0x0FDB, 0x3982, 0x0538, 0x0000, 0x0000,
};

/* Joint 5 */
u16 dFTNessAnimAppearStart1_joint5[22] = {
	ftAnimBlock0(0),
	0x8000, /* unknown opcode 16 */
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18350), 5635, 0, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0600, 0x8027, 0x3E61, 0x47AE, 0x0A00, 0x8001, 0x0000, 0x0000, 0xB899, 0xF772, 0x0000, 0x0000,
};

/* Joint 6 */
u16 dFTNessAnimAppearStart1_joint6[72] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -17236, -17522, -17782, -16510, 30150,
	0xBC04, /* unknown opcode 23 */
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY), -16376, -23172, 15271, 8699, 3074, -32730,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 7789, 14858, 11647, -16376, 19310,
	0xB9F3, /* unknown opcode 23 */
	0xF64E, /* unknown opcode 30 */
	ftAnimBlock(FT_ANIM_SCAY, 22),
	0xBF83, /* unknown opcode 23 */
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ, 47048), -32544, 2561, 1, -16509, 19371, 15239, -18274, 2561,
	0x000F, /* End */
	0xBF83, 0x713B, 0xB98A, 0xA622, 0x0A03, 0x8001, 0x3FA0, 0x30A2, 0x3F2F, 0x4210, 0xBF83, 0x7A71, 0xBE13, 0xD770, 0xC008, 0x5375, 0xBF4F, 0x8C2D, 0x0A03, 0x8001, 0x4027, 0xB03F, 0x3FAF, 0x2FDC, 0xBFA8, 0x6717, 0xBE93, 0xB299, 0xC070, 0x1184, 0xBFCF, 0x7C1E, 0x0000, 0x0000,
};

/* Joint 7 */
u16 dFTNessAnimAppearStart1_joint7[66] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0x0000, 0x0000, 0xBC94, 0x24A4, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1002, 0x0009, 0xBC9B, 0x6E6C, 0x0A02, 0x0001, 0x0000, 0x0000, 0x3C1B, 0x6E6C, 0x0A02, 0x000A, 0x0000, 0x0000, 0xB6A6, 0xEB2C, 0x0A02, 0x0001, 0xBC93, 0x4DB6, 0xBC16, 0x6506, 0x0A02, 0x000D, 0xBC92, 0x368E, 0xBC12, 0x5990, 0x0A02, 0x0001, 0xBC92, 0x5990, 0xB5E0, 0x19AC, 0x0A02, 0x0003, 0xBC91, 0xBF47, 0x3744, 0xB750, 0x0A02, 0x0001, 0xBC91, 0xB138, 0xBEAC, 0x0FAC, 0x0A02, 0x0001, 0xBF30, 0x9DA6, 0xBF2C, 0x101C, 0x0000, 0x0000,
};

/* Joint 8 */
u16 dFTNessAnimAppearStart1_joint8[12] = {
	0x1603, 0x8000, 0xB3E0, 0x0000, 0x3335, 0xB513, 0xB26A, 0x2577, 0x0400, 0x0028, 0x0000, 0x0000,
};

/* Joint 9 */
u16 dFTNessAnimAppearStart1_joint9[32] = {
	0x0603, /* End */
	0x8000, 0xBCAE, 0xFEBA, 0x3F36, 0x6314, 0xBD82, 0xAD62, 0x0603, 0x8027, 0xBCAE, 0xFEBA, 0x3F36, 0x6314, 0xBD82, 0xAD62, 0x0A03, 0x8001, 0x3CF5, 0xC280, 0x3928, 0x10D4, 0x0000, 0x0000, 0x3704, 0x4C11, 0x0000, 0x0000, 0xB6A6, 0xF174, 0x0000, 0x0000,
};

/* Joint 11 */
u16 dFTNessAnimAppearStart1_joint11[12] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), 0, 0, 2944,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0400, 0x0028, 0x0000, 0x0000,
};

/* Joint 12 */
u16 dFTNessAnimAppearStart1_joint12[58] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	0xC0B6, /* unknown opcode 24 */
	0x9189, /* unknown opcode 18 */
	ftAnimSetTargetRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAI | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 59865), 16181, -18080, 14099, 29190, -16248, 22673, -18894,
	0xB8C2, /* unknown opcode 23 */
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32806),
	0xC0B6, /* unknown opcode 24 */
	0x8C0E, /* unknown opcode 17 */
	0xBA29, /* unknown opcode 23 */
	0xDAFE, /* unknown opcode 27 */
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 37195), 14875, 2464, -16248, 20224, -17773, -10037,
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32769),
	0xC0B6, /* unknown opcode 24 */
	0x91A8, /* unknown opcode 18 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2155, 16181, -17878, 16028, -14627, -16248, 22720,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 332, 2563, -32767, -16317, 4018,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 5023, 16297, 11284,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -25091, -16261, -8745, 16038, -25268, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimAppearStart1_joint13[26] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBF61, 0x4536, 0x3805, 0x341B, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x0027, 0xBF61, 0x42FE, 0xBAD2, 0x2C2C, 0x0A02, 0x0001, 0xBF62, 0x78E7, 0xBB9A, 0xF466, 0x0000, 0x0000,
};

/* Joint 16 */
u16 dFTNessAnimAppearStart1_joint16[12] = {
	0x1603, 0x8000, 0x3E35, 0xBA52, 0x3DD8, 0xD677, 0x3E7C, 0xFE0C, 0x0400, 0x0028, 0x0000, 0x0000,
};

/* Joint 17 */
u16 dFTNessAnimAppearStart1_joint17[88] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18490), -17557, -19793, -16601, -25639, -17466, -26005, -16468, 28689,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 24575, 3074, 34, -16469, -22207, -18418, 27451,
	ftAnimBlock0(FT_ANIM_SCAZ),
	0x8026, /* unknown opcode 16 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -16598, 15095, 10800, 2561, 30, -16600, -1717, -18469,
	0x7E1C, /* unknown opcode 15 */
	ftAnimBlock(FT_ANIM_SCAY, 1),
	0xBF27, /* unknown opcode 23 */
	ftAnimSetFlagsT(FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAY, 15170),
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAZ), 3073, 7, -16601, -27335, -18175, -5092, 1024, 3, 2562, 1, -16468, 26130,
	0xBB3E, /* unknown opcode 23 */
	0xAA04, /* unknown opcode 21 */
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAY),
	0x0003, /* End */
	0xBFAC, 0x6C96, 0xB8BC, 0xA29C, 0x0A03, 0x8001, 0x3F6E, 0x5E14, 0xBF33, 0x5FA9, 0xBF29, 0x2946, 0x3D82, 0x9F09, 0xBFAB, 0xB5B2, 0x3F1D, 0x0014, 0x0A03, 0x8001, 0xBEF0, 0x004C, 0xBFB3, 0x2F1E, 0xBF06, 0xED77, 0x3E08, 0xEF3E, 0xBDF6, 0xC820, 0x3F9C, 0x4931, 0x0000, 0x0000,
};

/* Joint 19 */
u16 dFTNessAnimAppearStart1_joint19[48] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0x3C6C, 0xC960, 0xBC6C, 0xC960, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x000E, 0x0000, 0x0000, 0xB99C, 0x1792, 0x0A02, 0x0001, 0x3C6C, 0x3ECF, 0x3BED, 0x8762, 0x0A02, 0x000D, 0x3C6B, 0xE80C, 0x3BEB, 0x912B, 0x0A02, 0x0001, 0x3C6B, 0x9129, 0xBBEB, 0xE80C, 0x0A02, 0x000A, 0x0000, 0x0000, 0xBBEB, 0xC54D, 0x1002, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000,
};

/* Joint 20 */
u16 dFTNessAnimAppearStart1_joint20[72] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	0xBF85, /* unknown opcode 23 */
	0xEF81, /* unknown opcode 29 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -9732, -16683, 28448, -18316,
	0xE794, /* unknown opcode 28 */
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 36307), 15341, -23615, 3073, -32730, -16507, -23160, -17658,
	0x01A2, /* End */
	0xBED5, 0x72E3, 0x3719, 0x96C7, 0x0A02, 0x0018, 0x3FD9, 0xC609, 0x3B6B, 0xE4F3, 0x0A02, 0x0001, 0x3FD9, 0xC38C, 0xBB72, 0x8B46, 0x0A02, 0x000D, 0x3FD9, 0x6F52, 0x3A65, 0xE097, 0x0A03, 0x8001, 0xBF85, 0xEE66, 0x3EC3, 0x77A7, 0xBED5, 0x76EC, 0x3E61, 0xEB52, 0x3FDA, 0x7BAD, 0xBF20, 0x183E, 0x0A03, 0x8001, 0xBE8F, 0xA6CF, 0x3F44, 0x0963, 0x3CC7, 0x86F1, 0x3EE1, 0xEF5B, 0x3EE5, 0x5C50, 0xBFA1, 0x2499, 0x0000, 0x0000,
};

/* Joint 22 */
u16 dFTNessAnimAppearStart1_joint22[32] = {
	0x0603, /* End */
	0x8000, 0xBF2E, 0xEA8F, 0x3E9C, 0x919B, 0x3EF3, 0xD125, 0x0603, 0x8027, 0xBF2E, 0xEA8F, 0x3E9C, 0x919B, 0x3EF3, 0xD125, 0x0A03, 0x8001, 0xBE30, 0x7F69, 0x3622, 0xDFC3, 0x3E0D, 0x6BD2, 0x39B6, 0xC460, 0x3E40, 0xE130, 0xB9D3, 0xB041, 0x0000, 0x0000,
};

/* Joint 23 */
u16 dFTNessAnimAppearStart1_joint23[58] = {
	0x0A03, 0x8000, 0xBE8F, 0xF161, 0xB70D, 0xDC41, 0x3E0A, 0xA0C4, 0x3768, 0x0F1A, 0xBF3A, 0x4ABC, 0x3741, 0x3E2C, 0x0A03, 0x8026,
	0xBE8F, 0xEBF2, 0xB843, 0x7A14, 0x3E0A, 0x8C5F, 0x38B1, 0x8D66, 0xBF3A, 0x5035, 0x38AE, 0x2F11, 0x0A03, 0x8001, 0xBE8F, 0xF25D,
	0x3CFA, 0x1856, 0x3E0A, 0xA3B8, 0x3E58, 0xF095, 0xBF3A, 0x4A77, 0x3E90, 0x5805, 0x0A03, 0x8001, 0xBE61, 0x51CE, 0x3D7A, 0x4BAF,
	0x3F0F, 0x1B63, 0x3ED8, 0xE4E9, 0xBE27, 0xE0B8, 0x3F10, 0x5249, 0x0000, 0x0000,
};

/* Joint 25 */
u16 dFTNessAnimAppearStart1_joint25[32] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0x3FDD, 0x2871, 0xB606, 0x0A92, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x0026, 0x3FDD, 0x3654, 0xB9D5, 0x359D, 0x0A02, 0x0001, 0x3FDD, 0x2849, 0xBF5B, 0x5F32, 0x0A02, 0x0001, 0x3C6B, 0x9129, 0xBFDB, 0x5127, 0x0000, 0x0000,
};

/* Joint 26 */
u16 dFTNessAnimAppearStart1_joint26[58] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), -7268, -18646, 4252, 16115,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -18570, -9216, 16206, -22006, -18519,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_SCAY, 2563), -32730, 16003, 7136,
	0xB9E1, /* unknown opcode 23 */
	0xEDB3, /* unknown opcode 29 */
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23665), -18201, -16723, 16206, -23277, 14468, -14113, 2563,
	0x8001, /* unknown opcode 16 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), -8153, 15828, 31337, 16115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAZ), -16961, 19650, 16206, -22161,
	0xBE80, /* unknown opcode 23 */
	0xD5E4, /* unknown opcode 26 */
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32769),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ, 22805), 15956, -3621, 16019, -18929, -16833, 11813, 16027,
	0x9E5E, /* unknown opcode 19 */
	0xBF00, /* unknown opcode 23 */
	0xDA40, /* unknown opcode 27 */
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTNessAnimAppearStart1_joint27[38] = {
	0x0603, /* End */
	0x8000, 0x3C12, 0x8630, 0xBC99, 0xAF6F, 0x3D0C, 0x629B, 0x0603, 0x8027, 0x3C12, 0x8630, 0xBC99, 0xAF6F, 0x3D0C, 0x629B, 0x0A03, 0x8001, 0xBD80, 0x58CE, 0x397E, 0x04D2, 0xBD49, 0x98C9, 0xB901, 0x0FFE, 0xBE70, 0xA25D, 0x38AF, 0x5FB3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
