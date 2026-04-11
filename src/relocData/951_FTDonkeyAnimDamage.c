/* AnimJoint data for relocData file 951 (FTDonkeyAnimDamage) */
/* 432 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimDamage_joint1[12];
extern u16 dFTDonkeyAnimDamage_joint2[8];
extern u16 dFTDonkeyAnimDamage_joint4[8];
extern u16 dFTDonkeyAnimDamage_joint5[16];
extern u16 dFTDonkeyAnimDamage_joint7[16];
extern u16 dFTDonkeyAnimDamage_joint10[8];
extern u16 dFTDonkeyAnimDamage_joint11[22];
extern u16 dFTDonkeyAnimDamage_joint13[14];
extern u16 dFTDonkeyAnimDamage_joint16[10];
extern u16 dFTDonkeyAnimDamage_joint17[8];
extern u16 dFTDonkeyAnimDamage_joint19[8];
extern u16 dFTDonkeyAnimDamage_joint21[8];
extern u16 dFTDonkeyAnimDamage_joint22[8];
extern u16 dFTDonkeyAnimDamage_joint24[18];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimDamage_joints[] = {
	(u32)dFTDonkeyAnimDamage_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimDamage_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimDamage_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimDamage_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimDamage_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTDonkeyAnimDamage_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimDamage_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimDamage_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTDonkeyAnimDamage_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimDamage_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimDamage_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimDamage_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimDamage_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimDamage_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0067, /* [24] END */
};

/* 4-byte alignment padding */
static u32 dFTDonkeyAnimDamage_pad[1] = { 0 };

/* Joint 1: 12 AObjEvent16 values @ 0x68 */
u16 dFTDonkeyAnimDamage_joint1[12] = {
	0x48E0, 0x0014, 0x0303, 0xFD87, 0x50E1, 0x0005, 0x007B, 0x0395, 0xFD3A, 0x0801, 0x0004, 0x0000,
};

/* Joint 2: 8 AObjEvent16 values @ 0x80 */
u16 dFTDonkeyAnimDamage_joint2[8] = {
	0x500E, 0x0000, 0x0000, 0x0000, 0x0801, 0x0004, 0x0000, 0x0000,
};

/* Joint 4: 8 AObjEvent16 values @ 0x90 */
u16 dFTDonkeyAnimDamage_joint4[8] = {
	0x500E, 0x0165, 0x0000, 0x0000, 0x0801, 0x0004, 0x0000, 0x0000,
};

/* Joint 5: 16 AObjEvent16 values @ 0xA0 */
u16 dFTDonkeyAnimDamage_joint5[16] = {
	0x2804, 0xFE3D, 0x0000, 0x480A, 0xF666, 0xFC95, 0x2005, 0x0003, 0xFE3D, 0x0000, 0x2005, 0x0001, 0xFE3D, 0x0000, 0x0000, 0x0000,
};

/* Joint 7: 16 AObjEvent16 values @ 0xC0 */
u16 dFTDonkeyAnimDamage_joint7[16] = {
	0x2808, 0xFD80, 0x0000, 0x4806, 0x0000, 0x0000, 0x2009, 0x0003, 0xFD80, 0x0000, 0x2009, 0x0001, 0xFD80, 0x0000, 0x0000, 0x0000,
};

/* Joint 10: 8 AObjEvent16 values @ 0xE0 */
u16 dFTDonkeyAnimDamage_joint10[8] = {
	0x500E, 0xFDE8, 0x0000, 0x0000, 0x0801, 0x0004, 0x0000, 0x0000,
};

/* Joint 11: 22 AObjEvent16 values @ 0xF0 */
u16 dFTDonkeyAnimDamage_joint11[22] = {
	0x200E, 0x0462, 0x0000, 0x0552, 0x0000, 0x01E6, 0x0000, 0x380F, 0x0003, 0x0462, 0x0552, 0x01E6, 0x200F, 0x0001, 0x0462, 0x0000,
	0x0552, 0x0000, 0x01E6, 0x0000, 0x0000, 0x0000,
};

/* Joint 13: 14 AObjEvent16 values @ 0x11C */
u16 dFTDonkeyAnimDamage_joint13[14] = {
	0x2808, 0xFE4E, 0x0000, 0x4806, 0x0000, 0x0000, 0x3809, 0x0003, 0xFE4E, 0x2009, 0x0001, 0xFE4E, 0x0000, 0x0000,
};

/* Joint 16: 10 AObjEvent16 values @ 0x138 */
u16 dFTDonkeyAnimDamage_joint16[10] = {
	0x50EE, 0x045A, 0xFC89, 0xFED4, 0x0076, 0x007A, 0x002E, 0x0801, 0x0004, 0x0000,
};

/* Joint 17: 8 AObjEvent16 values @ 0x14C */
u16 dFTDonkeyAnimDamage_joint17[8] = {
	0x500E, 0x0057, 0xFE21, 0xFAF4, 0x0801, 0x0004, 0x0000, 0x0000,
};

/* Joint 19: 8 AObjEvent16 values @ 0x15C */
u16 dFTDonkeyAnimDamage_joint19[8] = {
	0x500E, 0x0000, 0x0000, 0x031A, 0x0801, 0x0004, 0x0000, 0x0000,
};

/* Joint 21: 8 AObjEvent16 values @ 0x16C */
u16 dFTDonkeyAnimDamage_joint21[8] = {
	0x500E, 0x007E, 0x0120, 0x0017, 0x0801, 0x0004, 0x0000, 0x0000,
};

/* Joint 22: 8 AObjEvent16 values @ 0x17C */
u16 dFTDonkeyAnimDamage_joint22[8] = {
	0x500E, 0x0228, 0x0171, 0xFD8D, 0x0801, 0x0004, 0x0000, 0x0000,
};

/* Joint 24: 18 AObjEvent16 values @ 0x18C */
u16 dFTDonkeyAnimDamage_joint24[18] = {
	0x500E, 0x0000, 0x0000, 0x0247, 0x0801, 0x0004, 0x0000, 0x0000, 0x500E, 0xFE43, 0xFEF6, 0x0018, 0x0801, 0x0004, 0x0000, 0x0000,
	0x0000, 0x0000,
};
