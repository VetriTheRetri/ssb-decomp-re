/* AnimJoint data for relocData file 1857 (FTYoshiAnimCeilingBonk) */
/* 1504 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimCeilingBonk_joint1[20];
extern u16 dFTYoshiAnimCeilingBonk_joint2[56];
extern u16 dFTYoshiAnimCeilingBonk_joint3[12];
extern u16 dFTYoshiAnimCeilingBonk_joint4[10];
extern u16 dFTYoshiAnimCeilingBonk_joint6[14];
extern u16 dFTYoshiAnimCeilingBonk_joint7[60];
extern u16 dFTYoshiAnimCeilingBonk_joint8[24];
extern u16 dFTYoshiAnimCeilingBonk_joint10[8];
extern u16 dFTYoshiAnimCeilingBonk_joint11[68];
extern u16 dFTYoshiAnimCeilingBonk_joint12[28];
extern u16 dFTYoshiAnimCeilingBonk_joint13[10];
extern u16 dFTYoshiAnimCeilingBonk_joint14[8];
extern u16 dFTYoshiAnimCeilingBonk_joint15[14];
extern u16 dFTYoshiAnimCeilingBonk_joint17[14];
extern u16 dFTYoshiAnimCeilingBonk_joint18[64];
extern u16 dFTYoshiAnimCeilingBonk_joint20[40];
extern u16 dFTYoshiAnimCeilingBonk_joint22[68];
extern u16 dFTYoshiAnimCeilingBonk_joint23[64];
extern u16 dFTYoshiAnimCeilingBonk_joint25[40];
extern u16 dFTYoshiAnimCeilingBonk_joint26[78];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTYoshiAnimCeilingBonk_joints[] = {
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTYoshiAnimCeilingBonk_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimCeilingBonk_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_SCAY), 4096, -3276,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0, 0, 0, 672, 2, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 4), 2048,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 4), 4096, 3276,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimCeilingBonk_joint2[56] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 0, 1952,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ), -268, 63,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 642, 4837,
	ftAnimSetValT(FT_ANIM_ROTX, 8), -268,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), 63,
	ftAnimSetValT(FT_ANIM_TRAZ, 6), 63,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1209, 3262,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1458, 1071,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1477, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1458, -1075,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1208, -3263,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 642, -4833,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), 0, -1952,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 1), 63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimCeilingBonk_joint3[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), -44,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 172,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), -44,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimCeilingBonk_joint4[10] = {
	ftAnimSetVal(FT_ANIM_ROTX), 446,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 446,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimCeilingBonk_joint6[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 255, -92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 255, 91,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimCeilingBonk_joint7[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1542, -338, -1220, 129, 708, 368,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2363, -87, 1508, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1131, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1218, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2336, 2, -1167, 0, 1499, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1137, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2358, 81, -1216, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1089, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2172, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1937, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1542, 395, -1220, -131, 708, -428,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimCeilingBonk_joint8[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -729, -170,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -989, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -918, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 189,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimCeilingBonk_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimCeilingBonk_joint11[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -88, 525, 442, 124, -919, 543,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 510, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 437, 313, -375, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 539, 161, -292, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 760, 96, 404, -43, -95, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 506, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 731, -5, -103, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 749, -97, -104, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 536, -114, -291, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 521, -312, -280, -314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -88, -609, 442, -64, -919, -638,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimCeilingBonk_joint12[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -658, -276,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -935, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -944, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -947, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -658, 321,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimCeilingBonk_joint13[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 330, 893, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 330, 893, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimCeilingBonk_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1072, 1608, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimCeilingBonk_joint15[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 428, 39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 586,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 428, -39,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimCeilingBonk_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -278, 100,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -278, -99,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimCeilingBonk_joint18[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 327, -308, -130, -172, -235, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -185, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -339, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -698, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -18, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 129, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -18, -156, -460, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -183, 18, -143, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, 255, -302, 104, -315, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, 308, -130, 172, -235, 80,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimCeilingBonk_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 347, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 362, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 165, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 471, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 362, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimCeilingBonk_joint22[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -466, 230, -981, -411, 1765, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -236, 92, -1393, -267, 1444, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -281, -38, -1516, -135, 1421, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -248, 5, 1605, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1664, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1528, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -301, 0, -1614, 46, 1503, -87,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -227, -109, 1449, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1436, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1361, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -466, -238, -980, 380, 1765, 315,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimCeilingBonk_joint23[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1936, 308, 1478, -173, -1843, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1420, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1268, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1921, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1744, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2301, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1587, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1735, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1587, 156, -2064, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1422, -20, -1747, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1627, -256, 1304, 105, -1922, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1936, -308, 1478, 173, -1843, 78,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimCeilingBonk_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 347, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 162, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 166, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 364, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimCeilingBonk_joint26[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1140, -236, 627, -378, 156, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1376, -110, 249, -224, -158, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1362, 37, 178, -127, -186, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1301, -3, -5, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1368, 0, 108, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1301, 3, -5, 34, -116, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -158, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1361, -37, 177, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1375, 110, 247, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1140, 235, 627, 380, 156, 315,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
