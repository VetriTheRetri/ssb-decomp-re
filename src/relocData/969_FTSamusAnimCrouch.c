/* AnimJoint data for relocData file 969 (FTSamusAnimCrouch) */
/* 1008 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimCrouch_joint1[16];
extern u16 dFTSamusAnimCrouch_joint2[20];
extern u16 dFTSamusAnimCrouch_joint4[44];
extern u16 dFTSamusAnimCrouch_joint5[32];
extern u16 dFTSamusAnimCrouch_joint6[28];
extern u16 dFTSamusAnimCrouch_joint7[22];
extern u16 dFTSamusAnimCrouch_joint8[16];
extern u16 dFTSamusAnimCrouch_joint11[20];
extern u16 dFTSamusAnimCrouch_joint12[50];
extern u16 dFTSamusAnimCrouch_joint14[32];
extern u16 dFTSamusAnimCrouch_joint15[34];
extern u16 dFTSamusAnimCrouch_joint17[28];
extern u16 dFTSamusAnimCrouch_joint19[30];
extern u16 dFTSamusAnimCrouch_joint20[24];
extern u16 dFTSamusAnimCrouch_joint22[28];
extern u16 dFTSamusAnimCrouch_joint23[34];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimCrouch_joints[] = {
	(u32)dFTSamusAnimCrouch_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimCrouch_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimCrouch_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimCrouch_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimCrouch_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimCrouch_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimCrouch_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimCrouch_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimCrouch_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimCrouch_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimCrouch_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimCrouch_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimCrouch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimCrouch_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimCrouch_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimCrouch_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimCrouch_joint1[16] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, -2982,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 832, 222,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 7), 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimCrouch_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 7), 23, -145, -23, -84,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimCrouch_joint4[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 268, 67, 7, 1, 1, 2, -41, -83, 77, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 268, -46, 7, 22, 1, -1, -41, 55, 77, -102,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -8, 142, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimCrouch_joint5[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 5, -1722, -9, 1377, -75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -861, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1597, -30, 1077, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1639, -32, 1128, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -846, 14, -1663, -23, 1177, 48,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimCrouch_joint6[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -830, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -827, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimCrouch_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, -84, 0, -65, 0, 94,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 425, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 470, -134, 111,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 425, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimCrouch_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimCrouch_joint11[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 479, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 0, 479, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimCrouch_joint12[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1550, 22, -1479, 22, 1392, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1229, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1550, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1628, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1769, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1658, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1279, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1436, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1525, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1614, 43, -1515, 9, 1483, 46,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimCrouch_joint14[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -55,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -705, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -743, -23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimCrouch_joint15[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -42, -27, -59, -389, -259,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -374, -17, -1109, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 204, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 277, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 313, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 315, 2, -384, -10, -1095, 13,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimCrouch_joint17[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 385,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1073, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1205, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1356, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1361, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimCrouch_joint19[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 21, -29, 98, -45, -131,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 308, 5, -348, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -29, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -67, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -22, 307, -1, -372, -24,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimCrouch_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -94, 160, 99, -49, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -370, -42, 363, -9, -432, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -392, -22, 354, -8, -434, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimCrouch_joint22[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 401,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1057, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1184, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1298, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1300, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimCrouch_joint23[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, 44, 193, -16, -213, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 102, -81, -121, -111, -377, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, -58, -224, -71, -310, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -33, -265, -40, -277, 32,
	ftAnimEnd(),
	0x0000, 0x0000,
};
