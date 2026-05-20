/* AnimJoint data for relocData file 571 (FTMarioAnimTaunt) */
/* 2224 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimTaunt_joint1[184];
extern u16 dFTMarioAnimTaunt_joint2[54];
extern u16 dFTMarioAnimTaunt_joint4[30];
extern u16 dFTMarioAnimTaunt_joint5[54];
extern u16 dFTMarioAnimTaunt_joint7[38];
extern u16 dFTMarioAnimTaunt_joint8[56];
extern u16 dFTMarioAnimTaunt_joint10[30];
extern u16 dFTMarioAnimTaunt_joint11[110];
extern u16 dFTMarioAnimTaunt_joint12[54];
extern u16 dFTMarioAnimTaunt_joint13[8];
extern u16 dFTMarioAnimTaunt_joint15[10];
extern u16 dFTMarioAnimTaunt_joint16[84];
extern u16 dFTMarioAnimTaunt_joint18[30];
extern u16 dFTMarioAnimTaunt_joint20[74];
extern u16 dFTMarioAnimTaunt_joint21[96];
extern u16 dFTMarioAnimTaunt_joint23[32];
extern u16 dFTMarioAnimTaunt_joint24[120];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTMarioAnimTaunt_joints[] = {
	(AObjEvent32 *)dFTMarioAnimTaunt_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTMarioAnimTaunt_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimTaunt_joint1[184] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 223, 540, 4096, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 0, 0, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_TRAY, 54), 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 5324, 5324, 5324,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5324, 5324, 5324,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 5324, 5324, 5324,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 7782, 7782, 7782,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 9216, 9216, 9240,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, 5324, 5324,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 7782, 7782, 7782,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 9216, 9216, 9240,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, 5324, 5324,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 9216, 9216, 9240,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 64), 9216, 9216, 9240,
	ftAnimBlock(0, 4),
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 60), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_TRAY, 54), 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, 5324, 5324,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 9216, 9216, 9240,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 7782, 7782, 7782,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, 5324, 5324,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 9216, 9216, 9240,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 7782, 7782, 7782,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 5324, 5324, 5324,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5324, 5324, 5324,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5324, 5324, 5324,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 6), 223, 540,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimTaunt_joint2[54] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -71, -790, -95, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, -804, 0, 0, 540, 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 168), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 54), 0, -804, 0, 0, 540,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 60), 0, -804, 0, 540,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 20), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 40), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 54), 0, -804, 0, 0, 531,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -71, -790, -95, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimTaunt_joint4[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 208, 258, 110,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 89, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 89, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 89, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 89, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 208, 258, 110,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimTaunt_joint5[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, -8, -1308, -1, -1880, 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 17), 1668,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 173), -1340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1794, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1794,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 158), -1794,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 156), 1668,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1668, 2, -1340, 1, -1794, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1719, 13, -1313, 4, -1852, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1733, 14, -1309, 3, -1870, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimTaunt_joint7[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -182, -18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -340, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 126), -340,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -340, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -331, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -234, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -201, 32,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimTaunt_joint8[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 201, -4, 176,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -102, -4, 293, 0, 93, 4,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 168), -102, 293, 93,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 0, -4,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 288, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 201, -4, 176,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimTaunt_joint10[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -221, 139, -209,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 778, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 0, 778, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 0, 778, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 54), 0, 778, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -221, 139, -209,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimTaunt_joint11[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 443, -77, 551, -74, 65, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 126, -71, -142, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 43, -41, -268, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 43, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -268, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 112), -272, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 270, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 163), 270, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 162), 43, 0,
	ftAnimBlock(0, 110),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -272, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 51), -268, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 41, 270, 11, -268, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 244, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 476, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -142, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -80, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 20, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 303, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 366, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 443, 77, 551, 74, 65, 45,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimTaunt_joint12[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -811, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -453, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, 134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -183,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 113), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 51), -183, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -804, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -811, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimTaunt_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 180),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimTaunt_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2412, -178, -804, 72, -33, 12,
	ftAnimBlock(0, 180),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimTaunt_joint16[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, -63, -230, -12, 45, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -361, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 24), -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -218, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -219, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 164), -241, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -358, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 129), -353, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -257, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 149), -273, 0,
	ftAnimBlock(0, 114),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -353, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 33), -347, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -347, 7, -241, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -213, 63, -4, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -272, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -252, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -135, 78, -230, 21, 45, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTMarioAnimTaunt_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 453,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 453,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 160), 496, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 441, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimTaunt_joint20[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 20, -11, 7, -156, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -97, 0, -80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -176, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -179, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 78), -182,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -80, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -97,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 161), -98, 0, -97, 0,
	ftAnimBlock(0, 75),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 85), -181, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -98, -8, -181, 28, -97, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -190, -21, 13, -6, -153, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -21, -11, -24, -156, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimTaunt_joint21[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1808, -15, 1421, -8, 1644, -63,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 1348,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1352, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1828, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1953, 62,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), 1953,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1348,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 165), 1323, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1953,
	ftAnimSetValRateT(FT_ANIM_ROTX, 112), 1948, 0,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 1352,
	ftAnimSetValRateT(FT_ANIM_ROTY, 157), 1335, 0,
	ftAnimBlock(0, 105),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1948, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 51), 1939, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1939, -62, 1335, 20, 1322, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1411, 8, 1576, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1814, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1777, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1790, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1808, 18, 1421, 9, 1644, 67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTMarioAnimTaunt_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 400, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 400, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 162), 446, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 456, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 438, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimTaunt_joint24[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, -1, -93, 38, -212, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 45, -43,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 95, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 117, -17,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -16, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -16, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 113), 65, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 164), -17, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -16, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 161), -15, 0,
	ftAnimBlock(0, 109),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 65, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 51), 62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, 31, 62, 29, -18, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 83, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -184, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 98, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 49, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -54, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 87, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 89, 0, -93, -39, -212, -28,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
