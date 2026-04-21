/* AnimJoint data for relocData file 1800 (FTNessAnimAppearStart2) */
/* 1616 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimAppearStart2_joint1[32];
extern u16 dFTNessAnimAppearStart2_joint2[40];
extern u16 dFTNessAnimAppearStart2_joint3[22];
extern u16 dFTNessAnimAppearStart2_joint5[22];
extern u16 dFTNessAnimAppearStart2_joint6[58];
extern u16 dFTNessAnimAppearStart2_joint7[54];
extern u16 dFTNessAnimAppearStart2_joint8[12];
extern u16 dFTNessAnimAppearStart2_joint9[32];
extern u16 dFTNessAnimAppearStart2_joint11[12];
extern u16 dFTNessAnimAppearStart2_joint12[58];
extern u16 dFTNessAnimAppearStart2_joint13[32];
extern u16 dFTNessAnimAppearStart2_joint16[12];
extern u16 dFTNessAnimAppearStart2_joint17[58];
extern u16 dFTNessAnimAppearStart2_joint19[34];
extern u16 dFTNessAnimAppearStart2_joint20[58];
extern u16 dFTNessAnimAppearStart2_joint22[32];
extern u16 dFTNessAnimAppearStart2_joint23[58];
extern u16 dFTNessAnimAppearStart2_joint25[32];
extern u16 dFTNessAnimAppearStart2_joint26[58];
extern u16 dFTNessAnimAppearStart2_joint27[38];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimAppearStart2_joints[] = {
	(u32)dFTNessAnimAppearStart2_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimAppearStart2_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimAppearStart2_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimAppearStart2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimAppearStart2_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimAppearStart2_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimAppearStart2_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimAppearStart2_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimAppearStart2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimAppearStart2_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimAppearStart2_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimAppearStart2_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimAppearStart2_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimAppearStart2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimAppearStart2_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimAppearStart2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimAppearStart2_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimAppearStart2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimAppearStart2_joint26, /* [25] joint 26 */
	(u32)dFTNessAnimAppearStart2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTNessAnimAppearStart2_joint1[32] = {
	ftAnimBlock0(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0x458C, 0xA000, 0xC230, 0x34A9, 0x466A, 0x6000, 0xC415, 0x1B4D, 0x1410, 0x0000, 0x0000, 0x0000, 0x0A28, 0x0027, 0x0000, 0x0000, 0xC310, 0xBEFD, 0x0000, 0x0000, 0xC302, 0xC171, 0x1028, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

/* Joint 2 */
u16 dFTNessAnimAppearStart2_joint2[40] = {
	ftAnimBlock(0, 32768),
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), -18238, 16515, 16303, 5690, 0, -26750,
	0xF580, /* unknown opcode 30 */
	0xC0E2, /* unknown opcode 24 */
	ftAnimSetFlagsT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17158),
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 1), 16513,
	ftAnimLoop(0x6873, 1537),
	0x8027, /* unknown opcode 16 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), -18238, 16515, 16303, 3585, -32768, -17747,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAZ), 14993, -9250, 2561, -32767, 0,
	ftAnimEnd(),
	0x39D7, 0xCBC4, 0x3FC9, 0x0FDB, 0xBA84, 0xD6A0, 0x0000, 0x0000,
};

/* Joint 3 */
u16 dFTNessAnimAppearStart2_joint3[22] = {
	ftAnimBlock(0, 0),
	0xBF34, /* unknown opcode 23 */
	0x0402, /* End */
	0x1602, 0x8000, 0x3D61, 0x0AC2, 0x3C89, 0xED15, 0x0601, 0x0027, 0xBF34, 0x0402, 0x0A01, 0x0001, 0xBFC9, 0x0FDB, 0x3982, 0x0538, 0x0000, 0x0000,
};

/* Joint 5 */
u16 dFTNessAnimAppearStart2_joint5[22] = {
	ftAnimBlock0(0),
	0x8000, /* unknown opcode 16 */
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY | FT_ANIM_SCAZ, 18350), 5635, 0, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0600, 0x8027, 0x3E61, 0x47AE, 0x0A00, 0x8001, 0x0000, 0x0000, 0xB899, 0xF772, 0x0000, 0x0000,
};

/* Joint 6 */
u16 dFTNessAnimAppearStart2_joint6[58] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	0xBFFA, /* unknown opcode 23 */
	ftAnimBlock0(FT_ANIM_ROTY | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ),
	0xB92C, /* unknown opcode 23 */
	0x9402, /* unknown opcode 18 */
	0xC009, /* unknown opcode 24 */
	0x0639, /* End */
	0x3773, 0x8222, 0x3F88, 0xACED, 0x3923, 0xEBDC, 0x0A03, 0x8026, 0xBFFA, 0x8AD4, 0x3AA3, 0x4B02, 0xC009, 0x30FA, 0x3BCB, 0xF73A, 0x3F89, 0x15D1, 0xB95D, 0xDDC3, 0x0A03, 0x8001, 0xBFFA, 0x0BDA, 0x3F37, 0xCBC2, 0xC009, 0x082E, 0x3E22, 0xA576, 0x3F88, 0xAA4F, 0xBF57, 0x1952, 0x0A03, 0x8001, 0xBF05, 0x7E24, 0x3FB7, 0x4CC9, 0xBFE9, 0xB896, 0x3EA1, 0x5F16, 0xBF1C, 0x0702, 0xBFD6, 0xADD0, 0x0000, 0x0000,
};

/* Joint 7 */
u16 dFTNessAnimAppearStart2_joint7[54] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBC94, 0x24A5, 0xB939, 0xC30E, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1002, 0x000F, 0x0000, 0x0000, 0x0A02, 0x0001, 0x0000, 0x0000, 0xBC14, 0x62D2, 0x0A02, 0x000C, 0xBC93, 0x2AEE, 0xBC12, 0x6E8E, 0x0A02, 0x0001, 0xBC92, 0x6E8D, 0x3C13, 0x2AEE, 0x0A02, 0x0009, 0xBC91, 0x9C20, 0xBC11, 0xF071, 0x0A02, 0x0001, 0xBC91, 0xF070, 0xBEAC, 0x10FA, 0x0A02, 0x0001, 0xBF30, 0x9DD9, 0xBF2C, 0x0E56, 0x0000, 0x0000,
};

/* Joint 8 */
u16 dFTNessAnimAppearStart2_joint8[12] = {
	0x1603, 0x8000, 0xB3E0, 0x0000, 0x3335, 0xB513, 0xB26A, 0x2577, 0x0400, 0x0028, 0x0000, 0x0000,
};

/* Joint 9 */
u16 dFTNessAnimAppearStart2_joint9[32] = {
	0x0603, /* End */
	0x8000, 0xBCAE, 0xFEBA, 0x3F36, 0x6314, 0xBD82, 0xAD62, 0x0603, 0x8027, 0xBCAE, 0xFEBA, 0x3F36, 0x6314, 0xBD82, 0xAD62, 0x0A03, 0x8001, 0x3CF5, 0xC280, 0x3928, 0x10D4, 0x0000, 0x0000, 0x3704, 0x4C11, 0x0000, 0x0000, 0xB6A6, 0xF174, 0x0000, 0x0000,
};

/* Joint 11 */
u16 dFTNessAnimAppearStart2_joint11[12] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), 0, 0, 2944,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0400, 0x0028, 0x0000, 0x0000,
};

/* Joint 12 */
u16 dFTNessAnimAppearStart2_joint12[58] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	0xC000, /* unknown opcode 24 */
	0x785E, /* unknown opcode 15 */
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ, 61411), 16413, 16982, 14531, 31252, -16535,
	0xB813, /* unknown opcode 23 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ), -1483, 2563, -32730, -16384,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 47946), 24595, 16413, 31620, -17576, -11649,
	0xBF69, /* unknown opcode 23 */
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY, 47899), 12901, 2563, -32767, -16384,
	0x7841, /* unknown opcode 15 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 17164, 16413, 16975, -16732, 1745, -16535,
	0xB7DE, /* unknown opcode 22 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAZ), -9557, 2563, -32767, 15808, 1219, 16390, 30823,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -3167, -16605, 8701, -16565, 14318, 15859, -123,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimAppearStart2_joint13[32] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBFDE, 0x747C, 0xB909, 0xCFAB, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x0026, 0xBFDF, 0x2ACD, 0x3BAC, 0x7786, 0x0A02, 0x0001, 0xBFDE, 0x7488, 0x3EDB, 0xDCA7, 0x0A02, 0x0001, 0xBF62, 0x78F2, 0x3F5A, 0x701E, 0x0000, 0x0000,
};

/* Joint 16 */
u16 dFTNessAnimAppearStart2_joint16[12] = {
	0x1603, 0x8000, 0x3E35, 0xBA52, 0x3DD8, 0xD677, 0x3E7C, 0xFE0C, 0x0400, 0x0028, 0x0000, 0x0000,
};

/* Joint 17 */
u16 dFTNessAnimAppearStart2_joint17[58] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 15080), -18027, -2707, 16495,
	0xA074, /* unknown opcode 20 */
	0xB7AE, /* unknown opcode 22 */
	ftAnimSetVal0RateT(FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 49294), 6089, 14184, 22166, 2563,
	0x8026, /* unknown opcode 16 */
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY), -17489, 15432, -802,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 38091), 14946, -27614, -16242, 24081, -17909,
	0xF0C4, /* unknown opcode 30 */
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32769),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 37144), -16805, 23669, 16495,
	0xA3BC, /* unknown opcode 20 */
	0xBD12, /* unknown opcode 23 */
	ftAnimSetVal0RateT(FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY, 49294), 25294, 16150, -4844, 2563,
	0x8001, /* unknown opcode 16 */
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 20513), -16670, 1981, 16491,
	0x02B1, /* End */
	0xBD94, 0x2165, 0xC051, 0x4598, 0x3F97, 0x0009, 0x0000, 0x0000,
};

/* Joint 19 */
u16 dFTNessAnimAppearStart2_joint19[34] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAY), 0, 0,
	ftAnimEnd(),
	0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1002, 0x0019, 0x0000, 0x0000, 0x0A02, 0x0001, 0x0000, 0x0000, 0x3BEF, 0xACCC, 0x0A02, 0x000D, 0x3C6C, 0x8422, 0x36D0, 0x911D, 0x0A02, 0x0001, 0x3C6B, 0xC54E, 0xB83E, 0xD476, 0x0000, 0x0000,
};

/* Joint 20 */
u16 dFTNessAnimAppearStart2_joint20[58] = {
	0x0A03, 0x8000, 0xC049, 0x9F6C, 0x398F, 0x41B2, 0x4060, 0x63F6, 0xB90A, 0x3AE6, 0xBFF3, 0xAE9B, 0xB8AF, 0x5EE5, 0x0A03, 0x8026,
	0xC048, 0xD3CD, 0xBC3F, 0x4666, 0x4060, 0x0545, 0x3BB0, 0x90F4, 0xBFF5, 0x1230, 0x3B5F, 0x8875, 0x0A03, 0x8001, 0xC049, 0x9F1C,
	0xBE11, 0x8746, 0x4060, 0x62AE, 0xBE44, 0x223B, 0xBFF4, 0x9A78, 0xBEC9, 0x303D, 0x0A03, 0x8001, 0xC05B, 0x04B6, 0xBE8B, 0x2CCE,
	0x4047, 0x80FD, 0xBEC7, 0x0D82, 0xC02C, 0xD527, 0xBF4A, 0x1FAC, 0x0000, 0x0000,
};

/* Joint 22 */
u16 dFTNessAnimAppearStart2_joint22[32] = {
	0x0603, /* End */
	0x8000, 0xBF2E, 0xEA8F, 0x3E9C, 0x919B, 0x3EF3, 0xD125, 0x0603, 0x8027, 0xBF2E, 0xEA8F, 0x3E9C, 0x919B, 0x3EF3, 0xD125, 0x0A03, 0x8001, 0xBE30, 0x7F69, 0x3622, 0xDFC3, 0x3E0D, 0x6BD2, 0x39B6, 0xC460, 0x3E40, 0xE130, 0xB9D3, 0xB041, 0x0000, 0x0000,
};

/* Joint 23 */
u16 dFTNessAnimAppearStart2_joint23[58] = {
	0x0A03, 0x8000, 0xBEAB, 0x0878, 0x36B9, 0x6C7D, 0x3E8A, 0x4BC9, 0xB772, 0xABAB, 0xBF1A, 0xDF51, 0xB712, 0x5412, 0x0A03, 0x8026,
	0xBEAA, 0xFDDC, 0xB8A0, 0xBEAD, 0x3E89, 0xFEF0, 0x3A11, 0xE8D6, 0xBF1B, 0x0997, 0x3A20, 0x4192, 0x0A03, 0x8001, 0xBEAB, 0x0858,
	0x3D69, 0x51C6, 0x3E8A, 0x4BE3, 0x3E14, 0x37A5, 0xBF1A, 0xDF42, 0x3E62, 0x21D6, 0x0A03, 0x8001, 0xBE61, 0x52D6, 0x3DE9, 0x7BB3,
	0x3F0F, 0x1B4A, 0x3E93, 0xEAB1, 0xBE27, 0xE2AF, 0x3EE1, 0xCD2D, 0x0000, 0x0000,
};

/* Joint 25 */
u16 dFTNessAnimAppearStart2_joint25[32] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0x3FC2, 0x513B, 0x38A0, 0x91FF, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x0026, 0x3FC2, 0xBA20, 0xBB46, 0xD3F2, 0x0A02, 0x0001, 0x3FC2, 0x512B, 0xBF40, 0xE295, 0x0A02, 0x0001, 0x3C6B, 0xC54E, 0xBFC0, 0x79A1, 0x0000, 0x0000,
};

/* Joint 26 */
u16 dFTNessAnimAppearStart2_joint26[58] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAY), -29007, 14482, 21522,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAI | FT_ANIM_TRAX), 18726, -18501, -22427,
	0xC012, /* unknown opcode 24 */
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 47111), 10374, 2563, -32730, 16472, -17543, -17623, -15193, 16434, 16193, 14867,
	0xEF22, /* unknown opcode 29 */
	0xC012, /* unknown opcode 24 */
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAZ, 14897), 12178, 2563, -32767, 16472,
	0x8EE0, /* unknown opcode 17 */
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ, 63565), 16434, 18691, 15627, 15098, -16366, 11519, -16755, -29258,
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32769),
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY), -17666, 15970, -15908, 16438,
	0x9919, /* unknown opcode 19 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 709, -16331, -25561, -16627, -17252,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTNessAnimAppearStart2_joint27[38] = {
	0x0603, /* End */
	0x8000, 0xBDE1, 0xCAFA, 0xBED0, 0x59DE, 0xBDF7, 0x45B1, 0x0603, 0x8027, 0xBDE1, 0xCAFA, 0xBED0, 0x59DE, 0xBDF7, 0x45B1, 0x0A03, 0x8001, 0xBD80, 0x58CE, 0x397E, 0x04D2, 0xBD49, 0x98C9, 0xB901, 0x0FFE, 0xBE70, 0xA25D, 0xB920, 0xD47B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
