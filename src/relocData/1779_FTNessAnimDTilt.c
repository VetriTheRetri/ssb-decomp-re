/* AnimJoint data for relocData file 1779 (FTNessAnimDTilt) */
/* 2496 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDTilt_joint1[62];
extern u16 dFTNessAnimDTilt_joint2[28];
extern u16 dFTNessAnimDTilt_joint4[44];
extern u16 dFTNessAnimDTilt_joint5[108];
extern u16 dFTNessAnimDTilt_joint6[48];
extern u16 dFTNessAnimDTilt_joint7[10];
extern u16 dFTNessAnimDTilt_joint10[38];
extern u16 dFTNessAnimDTilt_joint11[106];
extern u16 dFTNessAnimDTilt_joint12[38];
extern u16 dFTNessAnimDTilt_joint13[44];
extern u16 dFTNessAnimDTilt_joint15[10];
extern u16 dFTNessAnimDTilt_joint16[102];
extern u16 dFTNessAnimDTilt_joint18[82];
extern u16 dFTNessAnimDTilt_joint19[112];
extern u16 dFTNessAnimDTilt_joint21[58];
extern u16 dFTNessAnimDTilt_joint22[104];
extern u16 dFTNessAnimDTilt_joint24[52];
extern u16 dFTNessAnimDTilt_joint25[150];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimDTilt_joints[] = {
	(u32)dFTNessAnimDTilt_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimDTilt_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimDTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimDTilt_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimDTilt_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimDTilt_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimDTilt_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimDTilt_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimDTilt_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimDTilt_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimDTilt_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimDTilt_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimDTilt_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimDTilt_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimDTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimDTilt_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimDTilt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimDTilt_joint25, /* [24] joint 25 */
	0xFFFF025D, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimDTilt_joint1[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -24, 304, -88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -39, -39, 399, 344, -90, 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -39, 73, 433, -192, -88, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -148, -21, -12, 31, 327, -148, 170, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -148, 14, -12, -10, 326, 132, 170, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, -24, 304,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -19, -1048,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -88,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimDTilt_joint2[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 21,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -78, 23, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -80, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -80, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 7, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 21,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimDTilt_joint4[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 368, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 368, 0, 0, -38, 0, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -215, -21, -155, -22, 67, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -215, 13, -155, 15, 67, -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 236, 145,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 368,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDTilt_joint5[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 878, 288, -1381, 71, -1117, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1326, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1267, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1166, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1320, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1408, -38, -1411, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1242, -76, -1294, 14, -1072, 162,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1202, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1256, 5, -1086, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -989, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1253, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1227, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1188, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1245, -40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1273, 146, -1024, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1521, 192, -1295, -7, -1443, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1658, -242, -1260, 56, -1901, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1037, -389, -1182, -60, -1274, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 878, -158, -1381, -199, -1117, 156,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimDTilt_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -708, -32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -740, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -910, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -853, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -832, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -670, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, 295,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimDTilt_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 14),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDTilt_joint10[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, -22, 41,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 104, 51, -22, -33, 40, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 540, 44, -315, -21, -94, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 540, -7, -315, 9, -94, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 107, -22, 41,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDTilt_joint11[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 837, 182, 718, 271, -2524, 295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1020, 66, 990, 174, -2228, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 971, 41, 1066, 21, -2280, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1102, 20, 1032, -323, -2068, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1011, -67, 419, -315, -1877, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1782, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 947, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 401, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 383, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 351, -55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1812, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1867, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 961, -139, -1949, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 669, -611, -2379, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -262, -187, 279, 65, -2796, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 294, 550, 482, 219, -2495, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 837, 543, 718, 235, -2524, -28,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDTilt_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -263, 236,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -26, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, 320,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimDTilt_joint13[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 807, 54, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 90, -158, 54, 1, 126, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 17, 98, 60, 1, 76, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 879, 12, 64, -1, 44, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 90, 54, 126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimDTilt_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 14),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDTilt_joint16[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 180, 113, -204, 35, -689, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 293, 157, -168, 69, -659, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 494, 195, -64, 34, -573, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -127, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 684, 106, -522, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 708, 21, -416, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -409, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 718, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -115, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -117, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -409, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -417, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -127, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -193, 101, -481, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -720, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 727, -121, 75, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 475, -273, -13, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, -294, -204, -191, -689, 31,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDTilt_joint18[82] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), 658, -91,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -3, 4096, -1, 4096, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 624, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6, -182, 6144, 468, 6144, 468, 6144, 468,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 5734, -409, 5734, -409, 5734, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 6, -3,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, -90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimDTilt_joint19[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -208, -93, 34, -59, 27, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -301, -58, -25, -158, 137, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -326, 146, -282, -150, -20, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 118, -326, 141, -103, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -35, 0, 158, 329, 248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -44, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, -7, 392, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, -6, 451, 57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 589, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -46, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -32, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -26, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 603, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, 7, -12, 64, 431, -413,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -149, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 81, 50, -223, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -23, -61, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -208, -58, 34, -53, 27, 88,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDTilt_joint21[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -613, 91, 43, 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -449, 18, -364, -49, 226, -40, 126, -3, -82, -86, -12, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -540, -12, -107, 35, -119, -50, 124, -2, -125, -49, 51, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -539, -7, -116, 19, -124, 16, 124, 1, -125, 34, 51, -50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -613, 91, 43, 126, -82, -12,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDTilt_joint22[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2684, 625, 581, 161, 2281, 435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3309, 448, 742, 52, 2716, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3582, 365, 686, -18, 2995, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4040, 737, 706, -61, 3365, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5057, 511, 564, -57, 3766, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5063, 2, 591, 20, 3760, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5063, 0, 605, 8, 3755, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 566, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 5059, -2, 3756, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5052, -61, 3760, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4937, 60, 556, -38, 3660, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5172, 172, 490, -8, 3992, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5282, 364, 539, 45, 4384, 753,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5901, 618, 581, 41, 5498, 1113,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDTilt_joint24[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 891, -115,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 776, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, 407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, 70,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimDTilt_joint25[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 438, -211, -207, -97, -212, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 56, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 226, -123, -304, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 191, -69, -162, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -151, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -171, -365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -892, -378, 139, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -459, -207, -928, -32, 436, 197,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -602, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -957, -22, 534, 64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 432, -133,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1040, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -577, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -305, 203,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -67, 409, -1129, -41, 148, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 512, 650, -1122, 66, -422, -638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1232, 767, -997, -139, -1129, -699,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2046, 813, -1401, -404, -1821, -691,
	ftAnimEnd(),
	0x400E, 0xFFA7, 0xFEE5, 0xFE22, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0003, 0x011C, 0x006A, 0xFF89, 0x0044, 0xFDBB, 0xFFF4, 0x200F, 0x0001, 0x014F, 0x0007, 0xFFF8, 0x000F, 0xFDF1, 0x0007, 0x200F, 0x0006, 0x014F, 0xFFD6, 0xFFF8, 0xFFE5, 0xFDF1, 0x0004, 0x380F, 0x0004, 0xFFA7, 0xFEE5, 0xFE22, 0x0000,
};
