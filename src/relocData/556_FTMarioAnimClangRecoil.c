/* AnimJoint data for relocData file 556 (FTMarioAnimClangRecoil) */
/* 2064 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimClangRecoil_joint1[30];
extern u16 dFTMarioAnimClangRecoil_joint2[10];
extern u16 dFTMarioAnimClangRecoil_joint4[20];
extern u16 dFTMarioAnimClangRecoil_joint5[102];
extern u16 dFTMarioAnimClangRecoil_joint6[42];
extern u16 dFTMarioAnimClangRecoil_joint7[30];
extern u16 dFTMarioAnimClangRecoil_joint8[30];
extern u16 dFTMarioAnimClangRecoil_joint10[10];
extern u16 dFTMarioAnimClangRecoil_joint11[124];
extern u16 dFTMarioAnimClangRecoil_joint12[54];
extern u16 dFTMarioAnimClangRecoil_joint13[30];
extern u16 dFTMarioAnimClangRecoil_joint15[10];
extern u16 dFTMarioAnimClangRecoil_joint16[100];
extern u16 dFTMarioAnimClangRecoil_joint18[46];
extern u16 dFTMarioAnimClangRecoil_joint20[98];
extern u16 dFTMarioAnimClangRecoil_joint21[100];
extern u16 dFTMarioAnimClangRecoil_joint23[48];
extern u16 dFTMarioAnimClangRecoil_joint24[100];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimClangRecoil_joints[] = {
	(u32)dFTMarioAnimClangRecoil_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimClangRecoil_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimClangRecoil_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimClangRecoil_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimClangRecoil_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimClangRecoil_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimClangRecoil_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimClangRecoil_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimClangRecoil_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimClangRecoil_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimClangRecoil_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimClangRecoil_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimClangRecoil_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimClangRecoil_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimClangRecoil_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimClangRecoil_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimClangRecoil_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimClangRecoil_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimClangRecoil_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -241, 0, 540, -600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 420, -87, -480, 87,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 420, 80, -480, 319,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 540, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimClangRecoil_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -71, -790, -95, 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimClangRecoil_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 294,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 258, 110, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 348, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 348, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 208,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimClangRecoil_joint5[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 556, 54, 239, -17, -720, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 169, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -767, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 611, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 722, 102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 945, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 93, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -147, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -174, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -143, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -749, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 936, -13, -147, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 821, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, -117, -721, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -382, -59, -608, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 559, -287, -402, 24, -406, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, -212, -334, 51, -276, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, -114, -300, 33, -272, 3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimClangRecoil_joint6[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -240, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -361, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -266, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -182, 84,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimClangRecoil_joint7[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 187, 17, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -62, 187, -18, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -625, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimClangRecoil_joint8[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 375, 168, 251,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 362, -1, 56, -10, 65, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 362, -13, 56, -5, 65, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimClangRecoil_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimClangRecoil_joint11[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -949, 57, 474, -9, -806, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -751, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 464, -18, -791, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 437, 43, -748, 140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -248, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -449, 275, 551, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -201, 130, 492, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 307, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -187, -16, -162, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -267, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -135, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 267, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 369, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -284, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -265, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -138, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -63, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -115, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 88, 204, 431, 53, 18, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 525, 37, 71, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 293, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 409, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 33, 551, 26, 65, -5,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimClangRecoil_joint12[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -438, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -884, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -872, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -907, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -965, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -949, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -860, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, 49,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimClangRecoil_joint13[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 312, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1279, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 625, -46, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 625, 72, 0, 19, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimClangRecoil_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimClangRecoil_joint16[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1027, 5, -349, 2, 630, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -985, 23, -323, 18, 615, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -961, 11, -303, -37, 595, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -937, 89, 609, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -520, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -603, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -701, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -792, 274, 488, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -387, 361, 114, -330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 210, -641, 77, -172, -181,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -380, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 25, -33, -229, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -32, -55, -163, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -119, -25, 2, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -309, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -254, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, -15, -230, 23, 45, 43,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimClangRecoil_joint18[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 489, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 896, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 794, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 485, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -84,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimClangRecoil_joint20[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, -10, 160, 3, 616, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -451, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 179, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 531, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 435, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -484, -4, 328, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -460, 49, 150, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -384, 56, 18, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -411, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, -54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -180, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 171, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -45, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -441, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -314, 69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -159, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -244, 51, -27, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, 32, -11, 15, -156, 3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimClangRecoil_joint21[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -169, -118, -135, -57, -151, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -287, -178, -193, -79, -170, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -527, -201, -294, -61, -134, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -288, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -689, -104, -73, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -735, -14, -51, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -534, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -190, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -294, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, 93,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -454, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -10, 113,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, 83, -189, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 194, -4, 5, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 96, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 172, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 200, 28, 187, -7, 35, 30,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimClangRecoil_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 456, 77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 534, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 672, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 835, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 863, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 892, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 869, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 713, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 490, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimClangRecoil_joint24[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, 53, -181, 119, -65, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -191, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 36, 78, -62, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 139, 91, 152, 169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 247, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 335, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -393, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 235, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 26, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 342, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 223, -87,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -388, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -330, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 122, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -79, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 51, 25, -283, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 77, 18, -235, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 11, -93, -14, -212, 23,
	ftAnimEnd(),
};
