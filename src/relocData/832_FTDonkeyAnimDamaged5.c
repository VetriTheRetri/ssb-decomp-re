/* AnimJoint data for relocData file 832 (FTDonkeyAnimDamaged5) */
/* 2272 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamaged5_joint1[32];
extern u16 dFTDonkeyAnimDamaged5_joint2[38];
extern u16 dFTDonkeyAnimDamaged5_joint4[66];
extern u16 dFTDonkeyAnimDamaged5_joint5[112];
extern u16 dFTDonkeyAnimDamaged5_joint6[40];
extern u16 dFTDonkeyAnimDamaged5_joint7[32];
extern u16 dFTDonkeyAnimDamaged5_joint10[40];
extern u16 dFTDonkeyAnimDamaged5_joint11[118];
extern u16 dFTDonkeyAnimDamaged5_joint12[40];
extern u16 dFTDonkeyAnimDamaged5_joint13[30];
extern u16 dFTDonkeyAnimDamaged5_joint14[8];
extern u16 dFTDonkeyAnimDamaged5_joint16[14];
extern u16 dFTDonkeyAnimDamaged5_joint17[116];
extern u16 dFTDonkeyAnimDamaged5_joint19[48];
extern u16 dFTDonkeyAnimDamaged5_joint21[84];
extern u16 dFTDonkeyAnimDamaged5_joint22[110];
extern u16 dFTDonkeyAnimDamaged5_joint24[48];
extern u16 dFTDonkeyAnimDamaged5_joint25[110];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDamaged5_joints[] = {
	(u32)dFTDonkeyAnimDamaged5_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDamaged5_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDamaged5_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDamaged5_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDamaged5_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimDamaged5_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimDamaged5_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDamaged5_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDamaged5_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimDamaged5_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimDamaged5_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimDamaged5_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDamaged5_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDamaged5_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDamaged5_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDamaged5_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDamaged5_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimDamaged5_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimDamaged5_joint1[32] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 1031, 358,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -29, -400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -29, 1, 1233, 199, -400, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 22), -25, 17, 1631, 71, -394, 23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 30, 81, 949, -293, -319, 110,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimDamaged5_joint2[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -41, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 117, 183, 191, 52, 79, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 467, 15, 168, -1, 433, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 467, -27, 168, -7, 433, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -257, 1, -28, 2, 131, 25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimDamaged5_joint4[66] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 0, 41, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 750, 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 589, -212, -32, 49, 306, -25, 0, -74, 319, -661, -157, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -97, -16, 224, 7, -60, -11, -37, -12, -11, -114, -256, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 202, 34, 134, -5, 52, 0, -37, 11, -11, 101, -256, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 791, -26, 73, 6, -78, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 319, -157,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimDamaged5_joint5[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1671, -3, -1523, 54, 1134, 233,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1275, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1674, 4, 1368, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1661, -271, 1571, 626,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2217, -51, -960, 115, 2621, 460,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1764, 231, -1044, -43, 2492, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2468, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1754, 9, -1046, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1046, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1745, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1757, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2466, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 2488, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1764, -84, -1044, 22, 2492, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2014, 43, -1019, -72, 2481, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1840, 130, -1145, -110, 2036, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, 103, -1241, -39, 1699, -288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, 121, -1225, 15, 1458, -240,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimDamaged5_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -375,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1001, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1259, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1257, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -1261, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -927, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 200,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimDamaged5_joint7[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -1, 0, -1, 0, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1420, -56, -3, 0, 17, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -1420, 22, -3, -11, 17, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -825, -155, -308, -68, 165, 15,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimDamaged5_joint10[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 174, -210,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 401, 12, -33, -123, -20, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 226, 5, -561, -12, -15, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 525, 5, -331, 18, -390, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 358, -54, -90, -3, -85, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimDamaged5_joint11[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 193, 1436, -42, -2087, 345,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1301, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2181, 481,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1742, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1502, 434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1050, -140, -872, 753,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1062, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2804, 333, 3, 475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2848, 35, 78, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2875, 21, 128, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 83, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 2830, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1076, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1020, -23,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -192, -463,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2804, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2657, -351, 988, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2102, -342, 1049, 151, -922, -570,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1968, -43, -1487, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1290, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1317, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1884, -83, 1223, -94, -1617, -129,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimDamaged5_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -564,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1191, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1061, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1054, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1062, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1040, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -972, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 145,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimDamaged5_joint13[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 98, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1208, 44, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), 1208, -12, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 893, 131, 0, -37, 0, -52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimDamaged5_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTDonkeyAnimDamaged5_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1046, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 268, 714, 1072,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimDamaged5_joint17[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, -183, -392, -126, 2887, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -466, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -244, -499, 2923, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1060, -651, 3503, 528,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4195, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1795, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -378, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -276, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4197, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 4166, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1809, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1779, 16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -274, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -342, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1759, 115, -378, -224, 4195, 157,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1128, -238, 4802, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1548, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1522, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1802, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1269, -168, 4708, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1466, -162, 4614, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1887, -84, -1593, -127, 4628, 13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimDamaged5_joint19[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 986, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 821, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 821, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 886, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1027, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -326,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimDamaged5_joint21[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 31, 14, 32, -369, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -227, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 52, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 67, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 38, 29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -224, 24,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 52, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 5, -8,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 67, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -320, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -184, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 73, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -221, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -42, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 37, 0, -5, 105, 31,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimDamaged5_joint22[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1712, -206, 1391, 153, 1312, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1505, -276, 1544, 216, 1095, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1159, 44, 1824, 10, 1213, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1595, 359, 1565, -222, 1043, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1879, 149, 1380, -89, 1231, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1397, 5, 1274, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1905, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1913, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1921, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1402, 4, 1282, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 1410, 0, 1288, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1921, -19, 1411, 47, 1296, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1723, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1575, -13, 1488, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1478, -75, 1294, -272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1487, -137, 1423, -29, 944, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1447, -39, 1418, -5, 880, -63,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimDamaged5_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 961, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 960, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1025, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1046, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1215, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, -143,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimDamaged5_joint25[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 10, 103, 33, -387, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 18, 104, 136, 268, -394, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 217, 2, 639, 189, -178, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -237, -128, -309, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 516, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 102, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -234, 2, 103, 1, -307, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), -172, 1, 43, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 105, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), 132, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -170, -19, 123, -75, 69, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -85, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 158, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -210, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -118, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -161, 16, -118, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -86, 45, -146, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 16, -179, -33, 127, -30,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
