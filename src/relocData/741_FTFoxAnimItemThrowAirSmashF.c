/* AnimJoint data for relocData file 741 (FTFoxAnimItemThrowAirSmashF) */
/* 2400 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimItemThrowAirSmashF_joint1[10];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint2[22];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint4[32];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint5[136];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint6[70];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint7[10];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint8[46];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint10[10];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint11[148];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint12[54];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint13[62];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint15[10];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint16[94];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint18[16];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint20[112];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint21[100];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint23[48];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint24[104];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint25[32];
extern u16 dFTFoxAnimItemThrowAirSmashF_joint26[32];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimItemThrowAirSmashF_joints[] = {
	(u32)dFTFoxAnimItemThrowAirSmashF_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimItemThrowAirSmashF_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimItemThrowAirSmashF_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 960, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimItemThrowAirSmashF_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 268, 18, 268, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 223, -14, 223, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimItemThrowAirSmashF_joint4[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 357, 29, 357, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 357, -17, 268, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 178, -29, 178, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimItemThrowAirSmashF_joint5[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1328, -15, -1326, 8, 1146, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1203, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1344, -162, 1153, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1653, -258, 1601, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1861, -263, -1191, -156, 1849, 383,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1682, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2181, -43, 2368, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1947, 133, 2737, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1913, 36, -1428, 180, 2510, -162,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2449, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -1882, -74, -1360, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1962, -59, -1274, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1138, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2244, -130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2532, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2196, -423,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1239, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -981, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2349, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2098, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1632, 420, 1670, -516,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1256, 158, -1204, -154, 1163, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1315, -36, -1291, -60, 1156, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1328, -13, -1326, -34, 1146, -9,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimItemThrowAirSmashF_joint6[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -568, -442,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -884, -396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1362, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -732, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -574, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -438, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -660, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -497, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 189,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimItemThrowAirSmashF_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimItemThrowAirSmashF_joint8[46] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 268,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 268, 7, -268, -44,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 6), 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), -268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 268, 8,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 6), 357,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 357, -7, -268, 44,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 178, 268,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimItemThrowAirSmashF_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimItemThrowAirSmashF_joint11[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1976, 439, 1090, 164, 1592, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2415, 705, 1255, 62, 1913, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3387, 583, 1214, 147, 2411, 349,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1497, -557,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3581, 115, 2611, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3619, -390, 2806, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2800, -306, 434, -681, 2511, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 119, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3007, 105, 2730, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2973, -20, 2686, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 104, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 187, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2955, -11, 2666, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3015, 33, 2813, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3054, 104, 2898, 198,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 3322, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 274, 44, 3211, 226,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 281, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3352, 118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3460, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3392, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 3528, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3601, -4, 321, 111, 3401, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3518, -8, 503, 97, 3162, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3584, 66, 517, 13, 3200, 38,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimItemThrowAirSmashF_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, -437,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -667, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -469, 329,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 230,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimItemThrowAirSmashF_joint13[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -357, 65, 0, -79, 0, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 263, 669, -317, 11, 317, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 981, 283, 22, 191, -135, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 829, -33, 64, -39, -58, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 848, -25, -134, 1, -44, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 679, -56, 71, 8, 17, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimItemThrowAirSmashF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimItemThrowAirSmashF_joint16[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 2, -5, 13, 18, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -141, -86, -106, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 73, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 271, 127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 130, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -214, -37, -414, -252,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -294, -23, -695, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 69, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -358, -29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, -16, -688, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -170, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -367, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -375, 6, -247, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -38, 69, 8, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -103, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -16, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 37, -5, 11, 18, 10,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimItemThrowAirSmashF_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimItemThrowAirSmashF_joint20[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 22, -64, -10, 610, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -45, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -107, -114, 281, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -296, -103, 146, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 323, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -108, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -177, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -101, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 310, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 57, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -69, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 92, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -109, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 13, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 148, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 402, 95,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 42, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 175, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 484, 190, 126, 10, 515, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 34, -97, -47, -32, 603, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -51, -64, -17, 610, 6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimItemThrowAirSmashF_joint21[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, 71, 1603, -37, 1116, 122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1413, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1871, 185, 1389, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2044, 127, 1338, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2117, 18, 1093, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1260, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 947, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2142, 23, 1114, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1312, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 2101, -95,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 969, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1128, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1282, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1110, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1099, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1569, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2013, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1623, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, -23, 1603, 33, 1116, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimItemThrowAirSmashF_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 626, -256,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 493, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 628, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 626, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimItemThrowAirSmashF_joint24[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1622, -152, 1484, 36, -1700, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1711, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1650, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1622, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1389, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1333, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1664, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1660, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1299, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1562, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1619, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1652, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1650, -3, 1668, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1720, -25, 1736, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1597, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1776, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1758, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1710, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1724, 26, 1608, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1667, 50, 1516, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1622, 44, 1484, -31, -1700, 9,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimItemThrowAirSmashF_joint25[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -393, 35, 219, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 215, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 0, -11, 219, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 0,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimItemThrowAirSmashF_joint26[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 225, -29, -122, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), -178, 11, -122, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 402, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
