/* AnimJoint data for relocData file 873 (FTDonkeyAnimTaunt) */
/* 2896 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimTaunt_joint1[10];
extern u16 dFTDonkeyAnimTaunt_joint2[60];
extern u16 dFTDonkeyAnimTaunt_joint4[86];
extern u16 dFTDonkeyAnimTaunt_joint5[206];
extern u16 dFTDonkeyAnimTaunt_joint6[56];
extern u16 dFTDonkeyAnimTaunt_joint7[34];
extern u16 dFTDonkeyAnimTaunt_joint8[66];
extern u16 dFTDonkeyAnimTaunt_joint10[8];
extern u16 dFTDonkeyAnimTaunt_joint11[212];
extern u16 dFTDonkeyAnimTaunt_joint12[56];
extern u16 dFTDonkeyAnimTaunt_joint13[34];
extern u16 dFTDonkeyAnimTaunt_joint14[10];
extern u16 dFTDonkeyAnimTaunt_joint16[42];
extern u16 dFTDonkeyAnimTaunt_joint17[112];
extern u16 dFTDonkeyAnimTaunt_joint19[38];
extern u16 dFTDonkeyAnimTaunt_joint21[112];
extern u16 dFTDonkeyAnimTaunt_joint22[102];
extern u16 dFTDonkeyAnimTaunt_joint24[154];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimTaunt_joints[] = {
	(u32)dFTDonkeyAnimTaunt_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimTaunt_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimTaunt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimTaunt_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimTaunt_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimTaunt_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimTaunt_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimTaunt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimTaunt_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimTaunt_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimTaunt_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimTaunt_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimTaunt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimTaunt_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimTaunt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimTaunt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimTaunt_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimTaunt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF029B, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimTaunt_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -29, 1031, -400,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimTaunt_joint2[60] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -214,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -265, -12, -41, -27, -16, 0,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -154,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -420, 0, -453, 0, -6, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 15), -154,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -420, -453, -6,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 5), -167,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 8), -143,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 8), -167,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 8), -143,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), -154,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -265, 21, -41, 40, -16, -1,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 10), -154,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimTaunt_joint4[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 750, 8, 24, -17, 41, -21, 0, 105, 319, -49, -157, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 874, 0, -228, 0, -278, 0, 197, 0, 226, 0, 25, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 197, 226, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 868, 0, -240, 0, -266, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 877, -220, -286,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 868, -240, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 877, 0, -220, 0, -286, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 874, 0, -228, 0, -278, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 750, -12, 24, 26, 41, 32, 0, -158, 319, 74, -157, -144,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimTaunt_joint5[206] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -16, -84, 3, -473, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -308, -32, -356, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), -93, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -118, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -372, -87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -340, -31, -393, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -452, -50, -443, 20,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -463, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -518, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -507, -42, -408, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -540, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -365, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -488, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -440, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -543, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -514, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -447, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -473, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -411, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -462, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -466, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -513, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -452, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -443, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -475, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -465, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -452, 8, -463, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -347, 95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -153, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -315, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -239, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -72, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -381, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -69, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -79, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 27, -84, -5, -473, -92,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimTaunt_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -139,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1126, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1175, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1225, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1212, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1244, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1243, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), -1222, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1221, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1249, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1257, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -614, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 206,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimTaunt_joint7[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -113, 0, -19, 0, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1583, 0, -268, 0, 806, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), -1583, -268, 806,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 158, 0, 27, 0, -81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimTaunt_joint8[66] = {
	ftAnimSetValAfter(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1354, 213,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, 9, -67, 2, -44, -1,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 319, 0, -35, 0, -72, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 15), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 319, -35, -72,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 5), 99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 8), -94, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 8), 99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 8), -94, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 6), 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 174, -14, -67, -3, -44, 2,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 10), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimTaunt_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimTaunt_joint11[212] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 38, 1436, -16, 1129, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1298, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1969, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1429, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1425, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1202, -82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1258, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1196, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2004, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2149, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1114, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1043, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1235, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1247, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2145, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2127, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1063, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1112, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1253, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1219, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2130, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2068, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1121, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1096, 6,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1208, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1212, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2063, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 2064, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1103, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1120, -5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2059, -4, 1204, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1999, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1268, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1116, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1143, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1216, 81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1411, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1952, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1554, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1334, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1305, -67,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1416, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1413, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1227, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -62, 1436, 22, 1129, -97,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimTaunt_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -133,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1169, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1208, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1230, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1216, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1245, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1247, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -1240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1240, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1251, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -619, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 202,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimTaunt_joint13[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 103, 108, 0, 11, 1, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1738, 0, 177, 0, 913, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 1738, 177, 913,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 103, -162, 0, -17, 1, -88,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimTaunt_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimTaunt_joint16[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -350, 0, 217, -4, 241, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -380, -1, -113, -4, -119, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -396, 0, 81, -1, 77, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -379, 0, -154, -4, -161, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -404, 0, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimTaunt_joint17[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, 6, -392, 14, -329, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -111, 1, -210, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 150, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 153, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -110, 1, -210, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -112, 1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), -212,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 153, 2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -106, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -211, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -208, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 154, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -212, -7, 146, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -370, -22, -275, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -96, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -51, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -9, -392, -22, -329, -54,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTDonkeyAnimTaunt_joint19[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 949, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 950, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 951,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 950, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 950, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 956, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1023, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 2,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTDonkeyAnimTaunt_joint21[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, -14, 14, -11, -369, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -32, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -582, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -160, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -156, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -147, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -33, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -33, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -581, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -577, 1,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -146, 0,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -576,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -579, 6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -146, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -168, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -32, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -389, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -172, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -133, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 20, 14, 16, -369, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimTaunt_joint22[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, -5, 217, -13, -295, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 122, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -261, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 36, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 37, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 40, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 113, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), -261, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 116, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 104, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 37, 5,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 96, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -262, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -293, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 45, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 196, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 8, 217, 20, -295, -2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimTaunt_joint24[154] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 940, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 941, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 947, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 946, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 971, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 992, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 1,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0007, 0xFFE8, 0x0067, 0xFFF3, 0xFE7D, 0x0007, 0x2803, 0x0012, 0xFF89, 0xFFFE, 0x200D, 0x0010, 0xFF9C, 0xFFFF, 0xFF17, 0x0001, 0x200D, 0x0001, 0xFF9A, 0xFFFF, 0xFF18, 0x0001, 0x2809, 0x0010, 0xFF17, 0x0001, 0x2805, 0x0011, 0xFF99, 0xFFFF, 0x0801, 0x0001, 0x2003, 0x0001, 0xFF87, 0xFFFE, 0x2003, 0x000C, 0xFF94, 0xFFFD, 0x2003, 0x0001, 0xFF91, 0xFFFD, 0x2803, 0x000B, 0xFF9B, 0x0003, 0x0801, 0x0001, 0x2009, 0x0001, 0xFF19, 0x0002, 0x2809, 0x000F, 0xFF14, 0x0001, 0x2005, 0x0001, 0xFF97, 0xFFFF, 0x2805, 0x000E, 0xFF9E, 0xFFFF, 0x0801, 0x0008, 0x2003, 0x0001, 0xFF9E, 0x0000, 0x2803, 0x000D, 0xFFBA, 0x000F, 0x0801, 0x0005, 0x200D, 0x0001, 0xFF9D, 0x0001, 0xFF15, 0xFFFF, 0x280D, 0x0009, 0x0054, 0x0014, 0xFE8A, 0xFFF3, 0x0801, 0x0007, 0x2003, 0x0001, 0xFFCC, 0x0016, 0x2003, 0x0001, 0xFFE6, 0x001E, 0x200F, 0x0001, 0x0007, 0x0022, 0x0067, 0x0013, 0xFE7D, 0xFFF4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
