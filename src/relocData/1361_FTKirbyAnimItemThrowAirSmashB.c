/* AnimJoint data for relocData file 1361 (FTKirbyAnimItemThrowAirSmashB) */
/* 1904 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimItemThrowAirSmashB_joint1[10];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint2[34];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint3[40];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint5[44];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint6[148];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint7[14];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint9[66];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint10[146];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint11[16];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint13[10];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint14[80];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint16[8];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint18[92];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint19[74];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint21[12];
extern u16 dFTKirbyAnimItemThrowAirSmashB_joint22[114];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimItemThrowAirSmashB_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimItemThrowAirSmashB_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -312, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, -12, 0, -14,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint3[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -268, -14, -536, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 178, 26, 268, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 6, 312, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 268, 22, 0, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 268, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint5[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 178, -120, -120, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 0, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 178, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 178, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 0, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint6[148] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -568, -382, -612, 55, -1895, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -951, -443, -557, 142, -1894, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1454, -199, -328, 129, -1551, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1825, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -588, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1350, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1108, 278,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -600, 148,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1844, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2186, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -497, 118, -612, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -391, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -144, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -136, 24, -2221, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 142, -66, -2547, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -465, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -607, -67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 18, -288, -2441, 303,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -995, -334, -1340, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -693, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -581, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1104, -42, -1229, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -680, 171, -1763, -201,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -610, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -617, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -568, 112, -612, 4, -1895, -132,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint9[66] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -178, 120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 89, -178, 89,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 6), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), 536, 53, 357, 53, -60, 96,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 4), -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 6), 536, -38, 357, -38, -60, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 60, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -44, -178, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 120, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -178, 120, -120, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint10[146] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1039, 294, 996, 210, -286, 171,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -429, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1206, 34, -115, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1064, -26, -159, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1340, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -147, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -241, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -601, -40, 1476, -75, -119, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -509, 71, 1190, -181, 187, 172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 332, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -458, 80, 1112, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 140, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1101, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, 209,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 736, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 107, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 664, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 764, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1018, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 516, -258, 1145, 5, 933, -138,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 980, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -305, -324, 479, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -500, -134, 382, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -741, -190, 104, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -955, -147, -173, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1036, -80, 999, 18, -283, -109,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint14[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -228, -302, -56, 237, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -449, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -651, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -16, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 165, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -443, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -295, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -649, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -322, 32,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -238, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 63, 124,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 245, -8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 205, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 89, -302, 19, 237, -8,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint18[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, 192, -158, 89, -2864, -48,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -121, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2996, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -393, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -96, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -46, 35, -87, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -51, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -257, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2998, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -2909, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -35, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -108, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -271, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -282, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2902, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2883, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, -39, -158, -50, -2864, 18,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint19[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 252, 300, 72, 233, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 364, -61, 430, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 116, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -130, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 292, -62, 529, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 567, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 380, -49,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -113, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -38, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 232, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -198, -128, 328, -39, 237, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, -96, 302, -25, 237, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint21[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimItemThrowAirSmashB_joint22[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1930, -218, -1766, 100, -1259, -53,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1258, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1605, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1712, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2002, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1940, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1138, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1094, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1911, -54, -1565, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1555, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1818, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1092, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1252, -39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1558, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1626, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1833, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1885, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1284, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1276, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1643, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1712, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1930, 45, -1766, -54, -1255, 20,
	ftAnimEnd(),
	0x0000, 0x0000,
};
