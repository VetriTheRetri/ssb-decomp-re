/* AnimJoint data for relocData file 880 (FTDonkeyAnimCliffClimbQuick1) */
/* 848 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffClimbQuick1_joint1[18];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint2[26];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint3[18];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint5[18];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint6[24];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint7[16];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint8[18];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint9[12];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint11[12];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint12[40];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint13[16];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint14[16];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint17[10];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint18[24];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint20[16];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint22[24];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint23[24];
extern u16 dFTDonkeyAnimCliffClimbQuick1_joint25[40];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCliffClimbQuick1_joints[] = {
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimCliffClimbQuick1_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF00C8, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint1[18] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 6,
	ftAnimSetValRate(FT_ANIM_TRAY), -868, 2403,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 0, 420,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint2[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -24,
	ftAnimSetValRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1048, 113, -274, 117,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1157, 776, -391, 187,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 776,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 187,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -285, 149,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 1284, 1492,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint3[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 17, 93, -53, 0, -28, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 2951, 97, -41, 0, -16, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint5[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 414, 35, 15, 0, 7, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 827, 11, 24, 0, 41, 1,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -119, 49, -305, -39, 294, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -44, -20, -428, 19, -33, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -83, -38, -357, 71, -148, -115,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1003, 52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -951, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint8[18] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -145, 8, -63, 5, -98, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 5, 0, 2, 0, 3,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint9[12] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 174, -67, -44,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint11[12] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -724, -183, 91,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -398, 70, 29,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint12[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1512, -189, 1233, -153, 1755, -222,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 977, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1323, -453, 1532, -489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 605, -531, 777, -594,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 260, -167, 1073, 31, 344, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 10, 1040, -33, 224, -120,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1061, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1064, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint14[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 75, 446, 21, 178, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1201, 14, 397, -18, 201, -7,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint17[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	_FT_ANIM_CMD(11, 0, 1), 6,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 348, 47, -691, 68, 1800, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 360, -4, -430, 78, 2153, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 367, 6, -371, 58, 2340, 187,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1189, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1065, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 973, -91,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 377, -72, 9, 0, 41, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -95, -251, 10, 0, -2, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -351, -255, 10, 0, -20, -17,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -316, -72, 198, -42, 2024, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -546, -56, 188, 70, 2283, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -586, -40, 282, 93, 2379, 96,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffClimbQuick1_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1190, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1198, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1151, -47,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0653, 0x0039, 0x06CA, 0xFFFA, 0xFB0A, 0xFFEB, 0x200F, 0x0003, 0x073A, 0x0053, 0x06AC, 0xFFEF, 0xFAA7, 0xFFCD, 0x200F, 0x0001, 0x0788, 0x004E, 0x0698, 0xFFEC, 0xFA6C, 0xFFC6, 0x0000,
};
