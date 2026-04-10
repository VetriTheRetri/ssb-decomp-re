/* AnimJoint data for relocData file 1101 (FTSamusAnimDamage) */
/* 384 bytes: 92-byte header + per-joint AObjEvent32 scripts */

#include "relocdata_types.h"

extern u32 dFTSamusAnimDamage_joint2[4];
extern u32 dFTSamusAnimDamage_joint4[5];
extern u32 dFTSamusAnimDamage_joint5[4];
extern u32 dFTSamusAnimDamage_joint6[4];
extern u32 dFTSamusAnimDamage_joint7[4];
extern u32 dFTSamusAnimDamage_joint11[5];
extern u32 dFTSamusAnimDamage_joint12[4];
extern u32 dFTSamusAnimDamage_joint14[7];
extern u32 dFTSamusAnimDamage_joint15[7];
extern u32 dFTSamusAnimDamage_joint17[4];
extern u32 dFTSamusAnimDamage_joint19[9];
extern u32 dFTSamusAnimDamage_joint20[4];
extern u32 dFTSamusAnimDamage_joint22[11];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDamage_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTSamusAnimDamage_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDamage_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDamage_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDamage_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDamage_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDamage_joint11, /* [7] joint 11 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDamage_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDamage_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDamage_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDamage_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDamage_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDamage_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDamage_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0059, /* [22] END */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimDamage_pad[1] = { 0 };

/* Joint 2: 4 words @ 0x60 */
u32 dFTSamusAnimDamage_joint2[4] = {
	0x500E0000, 0xFEA400CD, 0x08010004, 0x00000000,
};

/* Joint 4: 5 words @ 0x70 */
u32 dFTSamusAnimDamage_joint4[5] = {
	0x50EE0000, 0x010C0000, 0x00170000, 0x00000801, 0x00040000,
};

/* Joint 5: 4 words @ 0x84 */
u32 dFTSamusAnimDamage_joint5[4] = {
	0x500E07E7, 0x0574F77F, 0x08010004, 0x00000000,
};

/* Joint 6: 4 words @ 0x94 */
u32 dFTSamusAnimDamage_joint6[4] = {
	0x500E0000, 0x0000FD5A, 0x08010004, 0x00000000,
};

/* Joint 7: 4 words @ 0xA4 */
u32 dFTSamusAnimDamage_joint7[4] = {
	0x500E01D0, 0xFE4FFE5D, 0x08010004, 0x00000000,
};

/* Joint 11: 5 words @ 0xB4 */
u32 dFTSamusAnimDamage_joint11[5] = {
	0x50EE0043, 0xFFEFFA3E, 0x0062003C, 0xFFD60801, 0x00040000,
};

/* Joint 12: 4 words @ 0xC8 */
u32 dFTSamusAnimDamage_joint12[4] = {
	0x500E031C, 0xFF480127, 0x08010004, 0x00000000,
};

/* Joint 14: 7 words @ 0xD8 */
u32 dFTSamusAnimDamage_joint14[7] = {
	0x2808FD63, 0x00004806, 0x00000000, 0x38090003, 0xFD632009, 0x0001FD63, 0x00000000,
};

/* Joint 15: 7 words @ 0xF4 */
u32 dFTSamusAnimDamage_joint15[7] = {
	0x2804F9C8, 0x0000480A, 0xFA6AF60A, 0x38050003, 0xF9C82005, 0x0001F9C8, 0x00000000,
};

/* Joint 17: 4 words @ 0x110 */
u32 dFTSamusAnimDamage_joint17[4] = {
	0x500E0000, 0x000004F2, 0x08010004, 0x00000000,
};

/* Joint 19: 9 words @ 0x120 */
u32 dFTSamusAnimDamage_joint19[9] = {
	0x2806FFA9, 0x0000FFB6, 0x00004808, 0x01AF3807, 0x0003FFA9, 0xFFB62007, 0x0001FFA9, 0x0000FFB6,
	0x00000000,
};

/* Joint 20: 4 words @ 0x144 */
u32 dFTSamusAnimDamage_joint20[4] = {
	0x500EFE10, 0xFF4BFD97, 0x08010004, 0x00000000,
};

/* Joint 22: 11 words @ 0x154 */
u32 dFTSamusAnimDamage_joint22[11] = {
	0x500E0000, 0x000001CA, 0x08010004, 0x00000000, 0x500E0008, 0x00410017, 0x08010004, 0x00000000,
	0x00000000, 0x00000000, 0x00000000,
};
