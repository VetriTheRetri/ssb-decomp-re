/* AnimJoint data for relocData file 368 (FTMarioAnimPose) */
/* 400 bytes: 96-byte header + per-joint AObjEvent32 scripts */

#include "relocdata_types.h"

extern u32 dFTMarioAnimPose_joint1[5];
extern u32 dFTMarioAnimPose_joint2[5];
extern u32 dFTMarioAnimPose_joint4[5];
extern u32 dFTMarioAnimPose_joint5[4];
extern u32 dFTMarioAnimPose_joint7[4];
extern u32 dFTMarioAnimPose_joint8[5];
extern u32 dFTMarioAnimPose_joint10[5];
extern u32 dFTMarioAnimPose_joint11[4];
extern u32 dFTMarioAnimPose_joint15[4];
extern u32 dFTMarioAnimPose_joint16[4];
extern u32 dFTMarioAnimPose_joint18[4];
extern u32 dFTMarioAnimPose_joint20[4];
extern u32 dFTMarioAnimPose_joint21[8];
extern u32 dFTMarioAnimPose_joint23[15];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimPose_joints[] = {
	(u32)dFTMarioAnimPose_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimPose_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimPose_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimPose_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimPose_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTMarioAnimPose_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimPose_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimPose_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimPose_joint15, /* [11] joint 15 */
	0x00000000, /* [12] NULL */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimPose_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimPose_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimPose_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimPose_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimPose_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF005B, /* [23] END */
};

/* Joint 1: 5 words @ 0x60 */
u32 dFTMarioAnimPose_joint1[5] = {
	0x50EE00FA, 0xFD5FFE49, 0x0000021C, 0x00BF0801, 0x00010000,
};

/* Joint 2: 5 words @ 0x74 */
u32 dFTMarioAnimPose_joint2[5] = {
	0x50EEFFB9, 0xFCEAFFA1, 0x00000000, 0x00000801, 0x00010000,
};

/* Joint 4: 5 words @ 0x88 */
u32 dFTMarioAnimPose_joint4[5] = {
	0x50EE0569, 0x01B50504, 0x00000000, 0x00000801, 0x00010000,
};

/* Joint 5: 4 words @ 0x9C */
u32 dFTMarioAnimPose_joint5[4] = {
	0x500E059C, 0xFC4EFA8D, 0x08010001, 0x00000000,
};

/* Joint 7: 4 words @ 0xAC */
u32 dFTMarioAnimPose_joint7[4] = {
	0x500E0000, 0x00000000, 0x08010001, 0x00000000,
};

/* Joint 8: 5 words @ 0xBC */
u32 dFTMarioAnimPose_joint8[5] = {
	0x50EE00AD, 0x00720117, 0x00000120, 0x00000801, 0x00010000,
};

/* Joint 10: 5 words @ 0xD0 */
u32 dFTMarioAnimPose_joint10[5] = {
	0x50EEFF44, 0xFF3CFF4C, 0x00000036, 0xFFEF0801, 0x00010000,
};

/* Joint 11: 4 words @ 0xE4 */
u32 dFTMarioAnimPose_joint11[4] = {
	0x500EFDB4, 0x025B06D9, 0x08010001, 0x00000000,
};

/* Joint 15: 4 words @ 0xF4 */
u32 dFTMarioAnimPose_joint15[4] = {
	0x500E0000, 0x0000FEE4, 0x08010001, 0x00000000,
};

/* Joint 16: 4 words @ 0x104 */
u32 dFTMarioAnimPose_joint16[4] = {
	0x500E0281, 0xFB65FB4C, 0x08010001, 0x00000000,
};

/* Joint 18: 4 words @ 0x114 */
u32 dFTMarioAnimPose_joint18[4] = {
	0x500E0000, 0x00000000, 0x08010001, 0x00000000,
};

/* Joint 20: 4 words @ 0x124 */
u32 dFTMarioAnimPose_joint20[4] = {
	0x500EF98E, 0x075106DA, 0x08010001, 0x00000000,
};

/* Joint 21: 8 words @ 0x134 */
u32 dFTMarioAnimPose_joint21[8] = {
	0x200EFB03, 0x000001CF, 0x0000FD7D, 0x0000200F, 0x0001FB03, 0x000001CF, 0x0000FD7D, 0x00000000,
};

/* Joint 23: 15 words @ 0x154 */
u32 dFTMarioAnimPose_joint23[15] = {
	0x28080007, 0x00004806, 0x00000000, 0x20090001, 0x00070000, 0x00000000, 0x280205CD, 0x0000480C,
	0xFA8D07BE, 0x20030001, 0x05CD0000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};
