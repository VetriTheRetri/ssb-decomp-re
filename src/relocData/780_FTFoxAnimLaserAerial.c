/* AnimJoint data for relocData file 780 (FTFoxAnimLaserAerial) */
/* 3024 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimLaserAerial_joint1[18];
extern u16 dFTFoxAnimLaserAerial_joint2[30];
extern u16 dFTFoxAnimLaserAerial_joint4[38];
extern u16 dFTFoxAnimLaserAerial_joint5[246];
extern u16 dFTFoxAnimLaserAerial_joint6[102];
extern u16 dFTFoxAnimLaserAerial_joint7[10];
extern u16 dFTFoxAnimLaserAerial_joint8[30];
extern u16 dFTFoxAnimLaserAerial_joint10[10];
extern u16 dFTFoxAnimLaserAerial_joint11[282];
extern u16 dFTFoxAnimLaserAerial_joint12[118];
extern u16 dFTFoxAnimLaserAerial_joint13[50];
extern u16 dFTFoxAnimLaserAerial_joint15[30];
extern u16 dFTFoxAnimLaserAerial_joint16[82];
extern u16 dFTFoxAnimLaserAerial_joint18[8];
extern u16 dFTFoxAnimLaserAerial_joint20[82];
extern u16 dFTFoxAnimLaserAerial_joint21[96];
extern u16 dFTFoxAnimLaserAerial_joint23[54];
extern u16 dFTFoxAnimLaserAerial_joint24[112];
extern u16 dFTFoxAnimLaserAerial_joint25[30];
extern u16 dFTFoxAnimLaserAerial_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimLaserAerial_joints[] = {
	(u32)dFTFoxAnimLaserAerial_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimLaserAerial_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimLaserAerial_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimLaserAerial_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimLaserAerial_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimLaserAerial_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimLaserAerial_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimLaserAerial_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimLaserAerial_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimLaserAerial_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimLaserAerial_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimLaserAerial_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimLaserAerial_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimLaserAerial_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimLaserAerial_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimLaserAerial_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimLaserAerial_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimLaserAerial_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimLaserAerial_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimLaserAerial_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimLaserAerial_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), -240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 25), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimLaserAerial_joint2[30] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -244, -290, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -244, -290, -93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimLaserAerial_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 312, 145, 241,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 312, 145, 241,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 180,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimLaserAerial_joint5[246] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1331, 221, -1323, -2, 1151, 213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1291, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1746, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1109, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1291, -221,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1751, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1203, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1268, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1738, 46, 1636, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1507, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1285, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1335, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1672, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1367, -143,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), 1050,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1275, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1166, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1672, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1666, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1050, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 856, 65,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1150, -36, -1653, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1425, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1346, 216, 995, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1220, 55, 1070, 152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1275, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1841, -342, 1301, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2170, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1213, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1269, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1862, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1287, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1364, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2175, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2091, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2046, 160, -1191, 182, 2102, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1020, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1770, 406, 1940, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1233, 322, 1442, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1124, 80, -1143, -151, 1327, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1457, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1073, 25, 1229, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1160, 1, 1259, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1454, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1345, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1155, -15, 1240, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1297, -34, 1174, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1331, -34, -1323, 21, 1151, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimLaserAerial_joint6[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -380, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -741, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -509, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -428, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -428, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 210,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -518, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -934, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1088, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -254, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -7,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimLaserAerial_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimLaserAerial_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, 268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 19, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 19, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 178, 268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimLaserAerial_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimLaserAerial_joint11[282] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 367, -675, 517, -163, -16, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -307, -352, 353, -258, 83, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -336, 145, 1, -182, -126, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 182, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, -56, -126, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -111, -51, -493, -254,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -258, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 19, -134, -635, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -86, 0, -804, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -776, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 18, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 82, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -303, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -830, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 82, -66, -251, 62, -830, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, -61, -125, 64, -691, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 16, -122, -1, -721, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -85, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 96, 130, -936, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 242, 66, -1078, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 236, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -100, -914, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -124, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -912, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -829, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -815, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -86, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -169, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 138, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 91, -35, -615, 151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 69, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -298, 130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -181, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -116, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 64, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -118, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, 35, -102, 15, -415, 136,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -67, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -23, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 135, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 147, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 216, 95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -55, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 362, 75, 118, 286, 116, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 367, 5, 517, 399, -16, -132,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimLaserAerial_joint12[118] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -490,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -684, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1375, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1412, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1106, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -940, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1052, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1206, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1249, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, 624,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 468,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -278, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 270,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimLaserAerial_joint13[50] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -155, 185, 1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -133, 210, 7,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 217, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, 211, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, 211, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimLaserAerial_joint15[30] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 28), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 804,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 1608,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 2412,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 3216,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 3216,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 5), 3216,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimLaserAerial_joint16[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -5, 0, 21, 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 14, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 306, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, 70,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 507,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, -28, 9, -124, 507, -207,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -238, -117, 92, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -226, 20, 116, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 192, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 21, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -5, 0, 21, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimLaserAerial_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 45),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimLaserAerial_joint20[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 0, -64, 0, 613, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 620, 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -289, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -349, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -290, 46,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 620,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 620, 89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -188, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, 71, 799, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 705, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -282, 10, -44, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 27), -17, 1, -65, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 704, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 613, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, 0, -64, 0, 613, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimLaserAerial_joint21[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 0, 5, 0, -492, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -16, 0, -92, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -169, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -74, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 91, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, 67, -92, -105, 91, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 118, 61, -302, -102, -204, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, -19, -297, 8, -189, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 15, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -114, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -128, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -274, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -318, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -491, -1,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 8, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -6, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -7, 0, 5, 0, -492, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimLaserAerial_joint23[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 650, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 618, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 582, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -291,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 190, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 624, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimLaserAerial_joint24[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -14, 0, 124, 0, -91, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -333, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -40, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -74, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -107, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -331, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -331, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6, -35, -107, 63, -331, 503,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -30, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 63, 675, 494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, -2, 657, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 123, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 465, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 460, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 382, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 362, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 153, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, -34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -90, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -25, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, 0, 124, 0, -91, -1,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimLaserAerial_joint25[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 261, 7, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 199, 23, 52, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 643, -11, 70, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, -44, 0, 7,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimLaserAerial_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 0, -16, 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), -42, 22, -29, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 402, 24, -47, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 402, 1, 0, -3,
	ftAnimEnd(),
	0x0000, 0x0000,
};
