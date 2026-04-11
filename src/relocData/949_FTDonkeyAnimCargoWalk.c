/* AnimJoint data for relocData file 949 (FTDonkeyAnimCargoWalk) */
/* 1872 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCargoWalk_joint1[38];
extern u16 dFTDonkeyAnimCargoWalk_joint2[46];
extern u16 dFTDonkeyAnimCargoWalk_joint4[42];
extern u16 dFTDonkeyAnimCargoWalk_joint5[48];
extern u16 dFTDonkeyAnimCargoWalk_joint6[16];
extern u16 dFTDonkeyAnimCargoWalk_joint7[28];
extern u16 dFTDonkeyAnimCargoWalk_joint8[54];
extern u16 dFTDonkeyAnimCargoWalk_joint10[60];
extern u16 dFTDonkeyAnimCargoWalk_joint11[56];
extern u16 dFTDonkeyAnimCargoWalk_joint12[24];
extern u16 dFTDonkeyAnimCargoWalk_joint13[16];
extern u16 dFTDonkeyAnimCargoWalk_joint14[12];
extern u16 dFTDonkeyAnimCargoWalk_joint16[14];
extern u16 dFTDonkeyAnimCargoWalk_joint17[82];
extern u16 dFTDonkeyAnimCargoWalk_joint19[32];
extern u16 dFTDonkeyAnimCargoWalk_joint21[80];
extern u16 dFTDonkeyAnimCargoWalk_joint22[90];
extern u16 dFTDonkeyAnimCargoWalk_joint24[32];
extern u16 dFTDonkeyAnimCargoWalk_joint25[114];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCargoWalk_joints[] = {
	(u32)dFTDonkeyAnimCargoWalk_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCargoWalk_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCargoWalk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimCargoWalk_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimCargoWalk_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCargoWalk_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCargoWalk_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCargoWalk_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimCargoWalk_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimCargoWalk_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCargoWalk_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCargoWalk_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCargoWalk_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimCargoWalk_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimCargoWalk_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimCargoWalk_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimCargoWalk_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimCargoWalk_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTDonkeyAnimCargoWalk_joint25, /* [24] joint 25 */
	0xFFFF01CD, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimCargoWalk_joint1[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 110, 1058, -567,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 951, -554,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), 94, -69,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 2,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -42, 50, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 21, 99, 1182, 61, -583, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 99,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 110, 1058, -567,
	ftAnimLoop(0x6800, -74),
};

/* Joint 2 */
u16 dFTDonkeyAnimCargoWalk_joint2[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -79, -96, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -133, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 65, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), 10,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 31, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), -96,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -77, -1,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -79,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -61,
	ftAnimLoop(0x6800, -90),
};

/* Joint 4 */
u16 dFTDonkeyAnimCargoWalk_joint4[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 832, 69, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 914, -39, 20,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -3, 8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 867, -4, 85, -7,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -4,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -7,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 10), -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 753, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 832,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCargoWalk_joint5[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 209, -7, -278, -4, -1325, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1136, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -288, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -130, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 191, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1203, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1309, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, 18, -278, 10, -1325, -15,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCargoWalk_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1124, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -1135, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1124, 10,
	ftAnimLoop(0x6800, -30),
};

/* Joint 7 */
u16 dFTDonkeyAnimCargoWalk_joint7[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1048, -322, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1236, -3, -318, 6, 327, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1100, 18, -220, 0, 237, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1048, -322, 312,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimCargoWalk_joint8[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 150, -67, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 130, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 23, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -32,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -69, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 71, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 154, 0,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 9,
	ftAnimBlock(0, 6),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 150,
	ftAnimLoop(0x6800, -106),
};

/* Joint 10 */
u16 dFTDonkeyAnimCargoWalk_joint10[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -280, 153, -30,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -328, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 35,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -1, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -45, 5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 97, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -382,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -269, 10,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 163, 0,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 9), -30,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), -280,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 153,
	ftAnimLoop(0x6800, -118),
};

/* Joint 11 */
u16 dFTDonkeyAnimCargoWalk_joint11[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 233, -34, 234, 23, 2321, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -258, 36, 1645, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 264, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 252, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 267, -25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -213, 53, 1743, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 216, 33, 2309, 26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 244, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 233, 17, 234, -9, 2321, 11,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCargoWalk_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1324, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1204, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1261, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1328, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1324, 4,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTDonkeyAnimCargoWalk_joint13[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1233, 221, 296,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1133, 167, 428,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1233, 221, 296,
	ftAnimLoop(0x6800, -30),
};

/* Joint 14 */
u16 dFTDonkeyAnimCargoWalk_joint14[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1424, 0, 972, 120, 120, 120,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimCargoWalk_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -537,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -537,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimCargoWalk_joint17[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -428, -18, -458, -3, -416, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -195, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -380, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -363, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -288, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -215, -39,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -506, -60,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -428, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -525, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -271, -93, -540, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -403, -201, -485, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -673, -98, -283, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -600, 121, -313, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -430, 170, -458, 67, -414, -101,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimCargoWalk_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 990, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1123, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1004, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 967, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 972, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 989, 17,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTDonkeyAnimCargoWalk_joint21[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, -1, 205, 8, -337, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -544, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -9, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 138, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 253, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -492, 76,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 247, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 274, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -301, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 61, 77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 265, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 267, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -26, 205, -62, -337, -36,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimCargoWalk_joint22[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -267, 1, 304, 16, -364, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 453, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -4, 140, -745, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 118, 80, -689, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 129, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -540, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 429, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 450, 22,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 199, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 146, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -376, -53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 466, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 313, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -62, -178, -433, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -209, -102, -394, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, -57, 304, -9, -364, 30,
	ftAnimLoop(0x6800, -176),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimCargoWalk_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1247, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1204, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1109, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 932, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 898, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1231, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1247, 16,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTDonkeyAnimCargoWalk_joint25[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 412, -21, -138, -49, -750, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -284, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 281, -175, -585, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 40, -216, -364, 185,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -141, 30, -231, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -209, 59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -290, -41,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -108, 32, -256, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -354, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -40, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -333, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -354, 115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -690, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 11, 115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 348, 111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -199, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 412, 63, -138, 60, -750, -59,
	ftAnimLoop(0x6800, -196),
	ftAnimEnd(),
	0x50EE, 0xFCDC, 0x0000, 0x0000, 0xFF92, 0x0221, 0x03F9, 0x0801, 0x0014, 0x6800, 0xFFEC, 0x0000, 0x0000, 0x0000,
};
