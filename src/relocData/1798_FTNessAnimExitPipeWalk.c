/* AnimJoint data for relocData file 1798 (FTNessAnimExitPipeWalk) */
/* 2944 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimExitPipeWalk_joint1[50];
extern u16 dFTNessAnimExitPipeWalk_joint2[62];
extern u16 dFTNessAnimExitPipeWalk_joint4[56];
extern u16 dFTNessAnimExitPipeWalk_joint5[138];
extern u16 dFTNessAnimExitPipeWalk_joint7[56];
extern u16 dFTNessAnimExitPipeWalk_joint8[56];
extern u16 dFTNessAnimExitPipeWalk_joint10[56];
extern u16 dFTNessAnimExitPipeWalk_joint11[150];
extern u16 dFTNessAnimExitPipeWalk_joint12[48];
extern u16 dFTNessAnimExitPipeWalk_joint13[54];
extern u16 dFTNessAnimExitPipeWalk_joint15[10];
extern u16 dFTNessAnimExitPipeWalk_joint16[128];
extern u16 dFTNessAnimExitPipeWalk_joint18[72];
extern u16 dFTNessAnimExitPipeWalk_joint19[136];
extern u16 dFTNessAnimExitPipeWalk_joint21[18];
extern u16 dFTNessAnimExitPipeWalk_joint22[106];
extern u16 dFTNessAnimExitPipeWalk_joint24[54];
extern u16 dFTNessAnimExitPipeWalk_joint25[140];
extern u16 dFTNessAnimExitPipeWalk_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimExitPipeWalk_joints[] = {
	(u32)dFTNessAnimExitPipeWalk_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimExitPipeWalk_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimExitPipeWalk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimExitPipeWalk_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimExitPipeWalk_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTNessAnimExitPipeWalk_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimExitPipeWalk_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimExitPipeWalk_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimExitPipeWalk_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimExitPipeWalk_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimExitPipeWalk_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimExitPipeWalk_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimExitPipeWalk_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimExitPipeWalk_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimExitPipeWalk_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimExitPipeWalk_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimExitPipeWalk_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimExitPipeWalk_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimExitPipeWalk_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimExitPipeWalk_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 453, -26,
	ftAnimSetValBlock(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -1380, 3481, 3481, 3481,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 442, 21,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 29), -24,
	ftAnimSetValT(FT_ANIM_TRAZ, 40), 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3481, 3481, 3481,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 506, 33,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 525, 51,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 11), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 636, -1,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimExitPipeWalk_joint2[62] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -72, 8, 17, -2,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -222,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 67, 11, 5, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -271,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 93, -2, -14, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -279,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 37, -9, 49, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -233,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -54, -11, 26, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -229,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -85, -1, 50, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -241,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -72, 8, 17, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), -222,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimExitPipeWalk_joint4[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 339, 2, 135, -11, 75, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 411, 7, -87, -22, -108, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 433, -5, -158, -4, -161, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 358, -4, -135, 10, -174, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 360, 1, 5, 18, -30, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 378, -1, 83, 11, 3, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 339, 1, 135, -9, 75, -6,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimExitPipeWalk_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -349, -20, -151, 7, 635, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -338, 13, -167, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 344, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 280, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -23, -94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -311, 28, -190, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -355, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -126, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -510, 46,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 64, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 5, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -350, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -294, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -442, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 133, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -65, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -356, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -258, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -142, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 187, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 389, 67,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -389, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -373, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 622, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -349, 24, -151, -9, 635, 13,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimExitPipeWalk_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -686, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -689, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -638, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -436, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -738, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -596, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -553, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -495, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimExitPipeWalk_joint8[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, 0, -68, 0, -32, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 173, 0, -68, 0, -24, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 196, 3, -69, 0, -29, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 204, -1, -69, 0, -54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 166, -2, -68, 0, -43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 172, 1, -68, 0, -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 187, 0, -68, 0, -32, 1,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimExitPipeWalk_joint10[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -181, 2, 4, 3, 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -159, 0, 106, 11, 35, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -187, -5, 155, 6, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -210, 0, 167, -4, 25, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -198, 0, 80, -9, 37, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -200, 1, 49, -6, 44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -181, 2, 4, 3, 39, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimExitPipeWalk_joint11[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, -23, 292, 9, -296, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 241, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 131, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -121, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -24, 96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 327, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 216, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 59, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 139, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 455, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 370, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 583, -25,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 31, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -18, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 530, 18, 548, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 457, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 546, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 234, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 421, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 219, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 235, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, -23, 261, 32, 171, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 368, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -97, -64, -389, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -151, -37, -486, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, 0, 356, -6, -542, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -151, 21, 355, -1, -538, 3,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimExitPipeWalk_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -737, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -854, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -729, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -736, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -679, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -609, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -398, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimExitPipeWalk_joint13[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 446, -1, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 373, -22, 26, 4, -41, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 289, -85, 28, -24, -40, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 202, -26, -21, -13, 44, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 210, 1, -12, 6, 28, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 216, 7, 51, 0, -88, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 446, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimExitPipeWalk_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimExitPipeWalk_joint16[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -212, 5, -130, 8, -238, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -134, 0, -68, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 118, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, 41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 388, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -137, -8, -79, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -47, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 35, 504, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 46, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 524, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 554, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -286, 2, 46, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -66, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -207, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 24, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -96, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -95, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -218, -6, -9, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -212, 0, -79, 14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -93, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -70, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -211, 0, -63, 7, -62, 16,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimExitPipeWalk_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 724, -10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 536, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 324, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 212, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 264, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 786, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 722, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 475, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 387, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimExitPipeWalk_joint19[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 37, 14, -2, 8, 24, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 124, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 149, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 15, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 105, -20, -150, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -44, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -341, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -94, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 166, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 270, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 76, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 174, -25, 26, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 28, 32, 248, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 133, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 6, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 24, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 164, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 257, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 299, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 218, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 143, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -6, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, -13, -2, -8, 24, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimExitPipeWalk_joint21[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 10, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 240, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 399, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), 10,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimExitPipeWalk_joint22[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 39, 7, 49, 0, 308, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -108, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 97, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 65, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 60, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 84, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -115, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -33, 24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 53, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 85, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 42, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 389, 90,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 59, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 47, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 48, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 44, -4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 495, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 540, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 559, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, -5, 44, -3, 571, 12,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimExitPipeWalk_joint24[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 546, 25,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 968, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 953, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 670, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 622, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 353, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 363, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 150, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -75,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimExitPipeWalk_joint25[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -106, -8, -50, 2, -181, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -230, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -26, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -151, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -141, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -96, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -228, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -141, 31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -36, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -108, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -36, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 2, -22, 3, -63, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -221, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 20, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 57, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 60, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -25, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -241, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -376, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -22, -6, -361, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -41, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -128, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 42, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 53, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -31, 7, 34, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -48, -18, -17, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -108, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -18, -27, -9, -90, 17,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimExitPipeWalk_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 419, 0, -3, 0, 108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 183, -18, -26, 0, 24, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 59, 8, -22, 0, 38, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 419, -3, 108,
	ftAnimEnd(),
	0x0000,
};
