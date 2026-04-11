/* AnimJoint data for relocData file 1435 (FTKirbyAnimBoomerangAirMiss) */
/* 2736 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimBoomerangAirMiss_joint1[56];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint2[18];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint3[48];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint5[98];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint6[232];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint7[24];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint8[42];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint10[90];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint11[162];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint12[18];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint14[10];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint15[138];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint17[22];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint19[156];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint20[88];
extern u16 dFTKirbyAnimBoomerangAirMiss_joint22[120];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimBoomerangAirMiss_joints[] = {
	(u32)dFTKirbyAnimBoomerangAirMiss_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimBoomerangAirMiss_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0277, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimBoomerangAirMiss_joint1[56] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, 600,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -240, -144,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 10), -360, 240,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 240, 299,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 240, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 150, -192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimBoomerangAirMiss_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 26), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimBoomerangAirMiss_joint3[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 268, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 268, -5, 714, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, -28, -268, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -536, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 0, 20, -536, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 268, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimBoomerangAirMiss_joint5[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 178, -120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 10), -60, 32, 60, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 268, -20, 89, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), -120,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -60, -72, -120, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 60,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), -150, -120, -150, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 60,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -536, -50, -357, -27,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -180, 80, -60, 160, 60, -280,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -90, 36, -30, 18, -150, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -536, 26, -357, 26, -120, 16, -30, -16, -90, 64,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -60, -72, -30, 72,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -120, -120, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimBoomerangAirMiss_joint6[232] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -572, 1, -609, -10, -1891, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -764, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -631, -49, -1866, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -699, -352, -1816, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1337, -740, -1201, 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2179, -482, -388, 448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2301, -99, -721, 37, -304, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -685, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2379, -75, -272, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -2746, -79, -223, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2854, -612, -180, 533,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3971, -786, -763, 38, 844, 696,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -483, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4427, -274, 1211, 198,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4579, -60, 1252, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -437, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -352, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4642, -23, 1228, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1553, 380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -4477, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4365, -10, -241, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -620, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4499, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4880, -209, 2016, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4917, -167, -705, -69, 2064, 186,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -592, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5216, -432, 2389, 463,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5781, -342, 2990, 381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5902, -69, 3153, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -5474, -1, 2662, -106,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -565, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -320, 15,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5478, 11, 2571, -74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -5016, 422, 2315, -261,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -326, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -621, -90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4472, 548, 1927, -435,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3920, 341, -629, 6, 1443, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3789, 131, -609, 19, 1325, -118,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimBoomerangAirMiss_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimBoomerangAirMiss_joint8[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 536,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 804, 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 20, 536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 402, 30, 536, -61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 402, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 402, -30, 536, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -20, 536, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 536,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimBoomerangAirMiss_joint10[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -178, 120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), -60, 16, 30, 32,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), -268,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 178, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 10), 120,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 120, 48, 60, 24,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), -90,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 180, 43, -60, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 16, 0, -11, 180, -29, -60, 14, 60, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -8, 120, -32, -30, -32, 30, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -120, -72, -30, -24,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 120, -120, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimBoomerangAirMiss_joint11[162] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1040, 20, 995, 1, -287, 17,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1080, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -396, 191, 214, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -210, 181, 335, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 528, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 576, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1099, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 991, -49,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 573, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 374, -370,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 566, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 146, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 949, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1065, 116,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -85, -359, -255, -295,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -595, -52, -438, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1187, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1387, 23,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -655, -63, -451, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1164, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -504, 51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1404, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1280, -83,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1289, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1631, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1517, 144, 1193, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1051, 31, 1005, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -300, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1039, 12, 996, -8, -286, 13,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimBoomerangAirMiss_joint12[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 44), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimBoomerangAirMiss_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 46),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimBoomerangAirMiss_joint15[138] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, 9, -302, 0, 237, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -263, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -319, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 466, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 444, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 276, -55,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -259, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -170, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 105, 208,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 202, -92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -263, -574,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, 164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 535, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1058, -403, -112, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -108, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1069, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1041, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -498, 192,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 532, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 274, -34,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -296, 174,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 225, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -124, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -292, -18,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 274, 34, 249, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 20, -302, -9, 237, -11,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimBoomerangAirMiss_joint17[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 32), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimBoomerangAirMiss_joint19[156] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, -6, -158, -3, -2864, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -2773, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -520, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -512, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -389, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2779, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2906, -42,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -274, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -70, 211,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -343, 90, -2948, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 252, 743,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2906, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 209, 203, -2794, 361,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 335, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1277, 518, -2183, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1289, -11, -2196, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2368, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1253, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 946, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 339, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 349, -30,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2429, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2819, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 782, -201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 160, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 297, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -149, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 51, -95, -2849, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -302, -34, -2869, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, -19, -158, -8, -2864, 5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimBoomerangAirMiss_joint20[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 4, 300, -2, 233, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 251, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 20), 73, -9, 101, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 55, -34, 74, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -294, -16, -323, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 258, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 328, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -305, -10, -334, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 14, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -357, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -354, 5, 339, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -303, 10, 305, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 94, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 225, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, 6, 300, -5, 233, 8,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimBoomerangAirMiss_joint22[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 45), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x280E, 0x0142, 0xFFFB, 0x009E, 0xFFFC, 0x015D, 0x0000, 0x4F00, 0x0E66, 0x0E66, 0x0E66, 0x2805, 0x0015, 0xFF46, 0x0015, 0x200B, 0x0013, 0xFF27, 0xFFFD, 0x01D6, 0xFFFA, 0x200B, 0x0001, 0xFF28, 0x0015, 0x01CA, 0xFFE9, 0x2809, 0x0005, 0x00B5, 0xFFF9, 0x2803, 0x0006, 0x012D, 0x001B, 0x0801, 0x0001, 0x2005, 0x0001, 0xFF6B, 0x0040, 0x2805, 0x0005, 0x00F4, 0x0015, 0x0801, 0x0003, 0x2009, 0x0001, 0x00B3, 0xFFFE, 0x2809, 0x000C, 0x009E, 0x0017, 0x2003, 0x0001, 0x013C, 0x000A, 0x2803, 0x000C, 0x0163, 0x001C, 0x2005, 0x0001, 0x0105, 0x000E, 0x2805, 0x000B, 0x013E, 0xFFFA, 0x0801, 0x000A, 0x2009, 0x0001, 0x00BE, 0x0028, 0x2809, 0x0006, 0x015C, 0x0001, 0x2007, 0x0001, 0x017D, 0x0010, 0x012E, 0xFFE6, 0x2007, 0x0005, 0x0148, 0xFFF6, 0x00A3, 0xFFF8, 0x200F, 0x0001, 0x0142, 0xFFFA, 0x009E, 0xFFFC, 0x015D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
