/* AnimJoint data for relocData file 2126 (FTBossAnimPunchEnd) */
/* 1808 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimPunchEnd_joint1[20];
extern u16 dFTBossAnimPunchEnd_joint3[24];
extern u16 dFTBossAnimPunchEnd_joint4[36];
extern u16 dFTBossAnimPunchEnd_joint5[38];
extern u16 dFTBossAnimPunchEnd_joint7[32];
extern u16 dFTBossAnimPunchEnd_joint8[44];
extern u16 dFTBossAnimPunchEnd_joint10[26];
extern u16 dFTBossAnimPunchEnd_joint11[86];
extern u16 dFTBossAnimPunchEnd_joint12[38];
extern u16 dFTBossAnimPunchEnd_joint14[38];
extern u16 dFTBossAnimPunchEnd_joint15[68];
extern u16 dFTBossAnimPunchEnd_joint16[38];
extern u16 dFTBossAnimPunchEnd_joint17[38];
extern u16 dFTBossAnimPunchEnd_joint19[24];
extern u16 dFTBossAnimPunchEnd_joint20[68];
extern u16 dFTBossAnimPunchEnd_joint21[36];
extern u16 dFTBossAnimPunchEnd_joint23[36];
extern u16 dFTBossAnimPunchEnd_joint24[84];
extern u16 dFTBossAnimPunchEnd_joint25[38];
extern u16 dFTBossAnimPunchEnd_joint26[40];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTBossAnimPunchEnd_joints[] = {
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint3, /* [1] joint 3 */
	NULL, /* [2] NULL */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTBossAnimPunchEnd_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimPunchEnd_joint1[20] = {
	ftAnimBlock0(FT_ANIM_TRAI),
	ftAnimEnd(),
	0x45BB, 0x8000, 0x1628, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0610, 0x0028, 0x0000, 0x0000, 0x1010, 0x0014, 0x0000, 0x0000, 0x0000, 0x0000,
};

/* Joint 3 */
u16 dFTBossAnimPunchEnd_joint3[24] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), 0, 0, 0, 0, 0, 0, 0, 0, 17174,
	ftAnimEnd(),
	0xC396, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x0400, 0x003C, 0x0000, 0x0000,
};

/* Joint 4 */
u16 dFTBossAnimPunchEnd_joint4[36] = {
	ftAnimSetValBlock(FT_ANIM_SCAY), -32768,
	0xBFDF, /* unknown opcode 23 */
	0x66F3, 5627, /* SetTranslateInterp */
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x1000, 0x8028, 0xBFDF, 0x66F3, 0x1000, 0x8003, 0xBFC9, 0x0FDB, 0x1000, 0x8011, 0xBFF5, 0xBE0B, 0x0000, 0x0000,
};

/* Joint 5 */
u16 dFTBossAnimPunchEnd_joint5[38] = {
	ftAnimSetValBlock(FT_ANIM_SCAY), -32768,
	0xBF32, /* unknown opcode 23 */
	0xB8C2, /* unknown opcode 23 */
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ, 0), 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x1000, 0x8028, 0xBF32, 0xB8C2, 0x0A00, 0x8003, 0xBEB2, 0xB8C2, 0x3C8E, 0xFA31, 0x1000, 0x8011, 0xBEB2, 0xB8C2, 0x0000, 0x0000,
};

/* Joint 7 */
u16 dFTBossAnimPunchEnd_joint7[32] = {
	ftAnimSetValBlockT(FT_ANIM_SCAY, 0), -16718,
	0xB8C2, /* unknown opcode 23 */
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), -32768, 0, 0, 0, 0, 17194, -1650, -15456,
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAZ, 16923),
	0xC0A2, /* unknown opcode 24 */
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 16256, 0, 16256,
	ftAnimEnd(),
	0x1001, 0x002B, 0xBEB2, 0xB8C2, 0x1001, 0x0011, 0x0000, 0x0000, 0x0000, 0x0000,
};

/* Joint 8 */
u16 dFTBossAnimPunchEnd_joint8[44] = {
	0x0A03, 0x8000, 0x3FE4, 0x0C0E, 0xB5B2, 0xB8C2, 0xBF57, 0x4D88, 0x36B7, 0x3094, 0x3F27, 0x53B8, 0x35C4, 0x9809, 0x0A03, 0x803B,
	0x3FE4, 0x0C00, 0xB4D6, 0x7750, 0xBF57, 0x4D4C, 0x35CD, 0x87AD, 0x3F27, 0x53DA, 0x348E, 0xFA35, 0x0C03, 0x0001, 0xBF57, 0x4D2B,
	0x3606, 0x0A92, 0x3F27, 0x53D7, 0xB456, 0x7750, 0x1000, 0x8001, 0x3FE4, 0x0C00, 0x0000, 0x0000,
};

/* Joint 10 */
u16 dFTBossAnimPunchEnd_joint10[26] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBEB2, 0xC214, 0x36E3, 0xDEC4, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x003B, 0xBEB2, 0xC188, 0x3606, 0x0A92, 0x0A02, 0x0001, 0xBEB2, 0xC136, 0x3623, 0x1564, 0x0000, 0x0000,
};

/* Joint 11 */
u16 dFTBossAnimPunchEnd_joint11[86] = {
	ftAnimBlock(FT_ANIM_ROTX | FT_ANIM_SCAY, 32768),
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 10442), -19058, -1483, -16848,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY), 13472, -9860, 15920, 9704, 13996, -27646, 3072, -32725,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 10441), -17496, 28091, 3073,
	0x003B, /* End */
	0xBE07, 0x5412, 0x3AB8, 0x6356, 0x0A02, 0x002A, 0x3E30, 0x265F, 0xB4D1, 0xFF7E, 0x0A02, 0x0001, 0x3E30, 0x2620, 0x3CF7, 0x6B4A, 0x0C02, 0x0005, 0x3EE4, 0xA0ED, 0xBC2E, 0x06CA, 0x0A00, 0x8001, 0x4046, 0x805A, 0xBC76, 0xCA20, 0x0C00, 0x800F, 0x4041, 0xBE91, 0xBAD8, 0x0080, 0x0400, 0x0004, 0x0A02, 0x0001, 0x3EDD, 0xFB71, 0xBB9A, 0xB5DA, 0x0A02, 0x000A, 0x3F37, 0x82AD, 0x3C4B, 0xE26C, 0x0A03, 0x8001, 0x4041, 0xB064, 0xBA62, 0xD2AF, 0xBE06, 0x8ED2, 0x3A45, 0x4025, 0x3F39, 0x3230, 0x3BD7, 0xC1F2, 0x0000, 0x0000,
};

/* Joint 12 */
u16 dFTBossAnimPunchEnd_joint12[38] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBE3D, 0x950F, 0x3699, 0x96C7, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x0033, 0xBE42, 0xAA9A, 0xBC17, 0xF6EF, 0x0A02, 0x0001, 0xBE50, 0x942A, 0xBC94, 0x1A73, 0x0A02, 0x0007, 0xBEB9, 0x49A9, 0xBC10, 0xADFB, 0x0A02, 0x0001, 0xBEBB, 0xBD9E, 0xBB9C, 0xFD35, 0x0000, 0x0000,
};

/* Joint 14 */
u16 dFTBossAnimPunchEnd_joint14[38] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBE2E, 0x3094, 0x36CB, 0x4BC3, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x0032, 0xBE2E, 0x30E3, 0xBB56, 0xFD13, 0x0A02, 0x0001, 0xBE34, 0xE7E8, 0xBC49, 0x9AC9, 0x0A02, 0x0008, 0xBED3, 0x94EA, 0xBC4E, 0x971C, 0x0A02, 0x0001, 0xBED7, 0x1694, 0xBBE0, 0x6A60, 0x0000, 0x0000,
};

/* Joint 15 */
u16 dFTBossAnimPunchEnd_joint15[68] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	0x8000, /* unknown opcode 16 */
	0xBC04, /* unknown opcode 23 */
	ftAnimSetFlagsT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAZ, 45956),
	0xEC9D, /* unknown opcode 29 */
	0xC03F, /* unknown opcode 24 */
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 13782), 30544, 4097, 0, -16315, -16315, 3073, -32709, -17259, -14369, 14485,
	ftAnimLoop(0x6E44, -16315),
	0xEBF2, /* unknown opcode 29 */
	ftAnimSetTargetRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 26355), 4098, 42, -16321, 8930, 2562, 1, -16321, 8930, 15604,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2562, 5, -16340, -2329,
	0xBBBF, /* unknown opcode 23 */
	0x990F, /* unknown opcode 19 */
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAY),
	0x0001, /* End */
	0xC02D, 0xB025, 0xBC32, 0xE3C3, 0x0A02, 0x000A, 0xC032, 0x390D, 0xBABE, 0x77C0, 0x0A03, 0x8001, 0xBC95, 0x5CE1, 0x3855, 0xFC71, 0xC045, 0xEBA3, 0x379E, 0x9D93, 0xC032, 0x4A16, 0xBA88, 0x4F6A, 0x0000, 0x0000,
};

/* Joint 16 */
u16 dFTBossAnimPunchEnd_joint16[38] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBE80, 0x3027, 0x357E, 0xADAF, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x0032, 0xBE80, 0x30AE, 0xBBF9, 0x04FD, 0x0A02, 0x0001, 0xBE87, 0xF86F, 0xBCF3, 0x39FC, 0x0A02, 0x0008, 0xBF3F, 0xA279, 0xBCCE, 0xF2A2, 0x0A02, 0x0001, 0xBF43, 0x3038, 0xBC63, 0x6FA0, 0x0000, 0x0000,
};

/* Joint 17 */
u16 dFTBossAnimPunchEnd_joint17[38] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBDC2, 0x4262, 0x3573, 0x8222, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x0032, 0xBDC2, 0x4460, 0xBBEE, 0x372A, 0x0A02, 0x0001, 0xBDE0, 0x09BD, 0xBCED, 0x128E, 0x0A02, 0x0008, 0xBF29, 0xF84E, 0xBD02, 0x925F, 0x0A02, 0x0001, 0xBF2E, 0x74C0, 0xBC8F, 0x8E36, 0x0000, 0x0000,
};

/* Joint 19 */
u16 dFTBossAnimPunchEnd_joint19[24] = {
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32768), 0, 0, -16974, -18238, 0, 0, -15930, 22403, -15363,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 17152, 5929,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 16256, 0, 16256,
	ftAnimEnd(),
	0x0400, 0x003C, 0x0000, 0x0000,
};

/* Joint 20 */
u16 dFTBossAnimPunchEnd_joint20[68] = {
	ftAnimBlock(FT_ANIM_SCAZ, 0),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAZ, 59774), 12814, -1483, 4098, -32768, -16312,
	0x8BB8, /* unknown opcode 17 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_SCAY | FT_ANIM_SCAZ), 27845, 3073, -32709, -16312, -1132, -17851,
	0xBEED, /* unknown opcode 23 */
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAI | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAZ), 26804, 14270, -7428, 2562, 42, 15902,
	ftAnimLoop(0x6D4D, -18974),
	0xC0D0, /* unknown opcode 24 */
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAY),
	0x0001, /* End */
	0x3E1E, 0x6C09, 0x3CF4, 0x446C, 0x0A02, 0x0006, 0x3EE1, 0xFBDB, 0xBC8C, 0x8D80, 0x0A02, 0x0001, 0x3ED5, 0x67F0, 0xBCFA, 0x56DA, 0x0A02, 0x0009, 0x3CC1, 0xCFC5, 0xBC6C, 0x4341, 0x0A03, 0x8001, 0xC049, 0x0252, 0xB9D7, 0xB902, 0x3D56, 0x712D, 0x3707, 0x93C2, 0x3C81, 0x6000, 0xBC00, 0xDF8A, 0x0000, 0x0000,
};

/* Joint 21 */
u16 dFTBossAnimPunchEnd_joint21[36] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAY), 0, -16767,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5121), -32768, 0, 0, 0, 0, 2562, 50, -16767,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), -17396, 962, 2562, 1, -16759, -6450, -17145, -27478, 2562, 8, -16562, -8430,
	0xBCE2, /* unknown opcode 23 */
	0x7989, /* unknown opcode 15 */
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAY),
	0x0001, /* End */
	0xBF52, 0xBF40, 0xBC78, 0x0B8C, 0x0000, 0x0000,
};

/* Joint 23 */
u16 dFTBossAnimPunchEnd_joint23[36] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAY), 0, -16963,
	0x9898, /* unknown opcode 19 */
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 32768), 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0A02, 0x0032, 0xBDBD, 0x999B, 0xBC04, 0xF822, 0x0A02, 0x0001, 0xBDDE, 0xD764, 0xBD03, 0xC1EA, 0x0A02, 0x0008, 0xBF3B, 0x7EDF, 0xBD12, 0x4C6D, 0x0A02, 0x0001, 0xBF40, 0x7EAC, 0xBC9F, 0xF9AA, 0x0000, 0x0000,
};

/* Joint 24 */
u16 dFTBossAnimPunchEnd_joint24[84] = {
	ftAnimBlock0(FT_ANIM_SCAZ),
	0x8000, /* unknown opcode 16 */
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 13388), -19421, 5476, 4099, 0, 16446, 2956,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAI | FT_ANIM_TRAY, 51278), 3072, -32725, 15597,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_SCAZ), 15272, -27281, 3073, 59,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAI | FT_ANIM_TRAX), -18413, -18294, 15078, 2562, 42,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAI | FT_ANIM_TRAY, 51291), 13526, 30544, 2562,
	0x0001, /* End */
	0x4053, 0xC84C, 0x3CF7, 0x6CA6, 0x0C02, 0x0005, 0x4066, 0x28A0, 0xBBC1, 0x57DD, 0x0A00, 0x8001, 0x3D20, 0xBFFF, 0x3C77, 0x17D3, 0x0C00, 0x800F, 0x3D87, 0x957B, 0xB929, 0x9BE2, 0x0400, 0x0004, 0x0A02, 0x0001, 0x4065, 0x6DBF, 0xBC34, 0x7B7A, 0x0A02, 0x000A, 0x4062, 0x1376, 0xBA83, 0xC5B9, 0x0A03, 0x8001, 0x3D87, 0x6A15, 0xB8AD, 0x9727, 0x403E, 0xB786, 0xB80D, 0xDC41, 0x4062, 0x0B0A, 0xBA06, 0xCF2A, 0x0000, 0x0000,
};

/* Joint 25 */
u16 dFTBossAnimPunchEnd_joint25[38] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBE47, 0x5C02, 0xB356, 0x7750, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x0033, 0xBE4C, 0x9E3E, 0xBC1D, 0x607C, 0x0A02, 0x0001, 0xBE5B, 0x0886, 0xBC90, 0xB352, 0x0A02, 0x0007, 0xBEC1, 0xDB81, 0xBC1B, 0x5B84, 0x0A02, 0x0001, 0xBEC4, 0x7823, 0xBBA7, 0x2866, 0x0000, 0x0000,
};

/* Joint 26 */
u16 dFTBossAnimPunchEnd_joint26[40] = {
	ftAnimBlock0(FT_ANIM_ROTX | FT_ANIM_SCAZ),
	ftAnimEnd(),
	0xBE29, 0x2F4C, 0x33B2, 0xB8C2, 0x1401, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A02, 0x0032, 0xBE29, 0x2FE6, 0xBB6B, 0x3E84, 0x0A02, 0x0001, 0xBE30, 0x8932, 0xBC5D, 0x6D0C, 0x0A02, 0x0008, 0xBEDF, 0xA029, 0xBC75, 0x55F4, 0x0A02, 0x0001, 0xBEE3, 0xC3C7, 0xBC04, 0x73B3, 0x0000, 0x0000, 0x0000, 0x0000,
};
