/* relocData file 342: PikachuSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
extern MObjSub *dPikachuSpecial3_gap_0x2118_sub_0x10[];

extern u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A40[];
extern u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A64[];
extern u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A78[];
extern u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A8C[];
extern u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AA0[];
extern u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AB0[];
extern u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AC4[];

extern u32 dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data[];
extern u32 dPikachuSpecial3_ThunderJoltAnimJoint_AnimJoint_0x22E8[];

extern u32 dPikachuSpecial3_ThunderJoltMatAnimJoint_MatAnimJoint_0x2358[];
extern AObjEvent32* dPikachuSpecial3_ThunderJoltMatAnimJoint_MatAnimJoint_0x2388[];


/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
/* Raw data from file offset 0x0000 to 0x1A20 (6688 bytes) */
PAD(8);

/* gap sub-block @ 0x0008 (was gap+0x8, 40 bytes) */
u16 dPikachuSpecial3_gap_0x0000_sub_0x8[16] = {
	#include <PikachuSpecial3/gap_0x0000_sub_0x8.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x0030 (was gap+0x30, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dPikachuSpecial3_gap_0x0000_sub_0x8 */
u8 dPikachuSpecial3_Tex_0x0030[512] = {
	#include <PikachuSpecial3/Tex_0x0030.tex.inc.c>
};

/* gap sub-block @ 0x0230 (was gap+0x230, 64 bytes) */
Vtx dPikachuSpecial3_gap_0x0000_sub_0x230[4] = {
	#include <PikachuSpecial3/gap_0x0000_sub_0x230.vtx.inc.c>
};

/* Gfx DL: gap_0x0000_sub_0x270 @ 0x270 (29 cmds) */
Gfx dPikachuSpecial3_gap_0x0000_sub_0x270[29] = {
	#include <PikachuSpecial3/gap_0x0000_sub_0x270.dl.inc.c>
};

PAD(8);

extern u32 dPikachuSpecial3_gap_0x0000_sub_0x364[];
extern MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1350[];
extern MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1358[];
extern MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1360[];
extern MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1368[];
extern MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1370[];
extern MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1378[];

/* @ 0x360: single AObjEvent32* pointer to the script below. */
AObjEvent32 *dPikachuSpecial3_gap_0x0000_sub_0x360[1] = {
	(AObjEvent32 *)dPikachuSpecial3_gap_0x0000_sub_0x364,
};

/* @ 0x364: AObjEvent32 script (37 u32) — SetAnim self-loopback at +0x8C
 * (followed by aobjEvent32End and 16 bytes of trailing zero pad). */
u32 dPikachuSpecial3_gap_0x0000_sub_0x364[37] = {
	aobjEvent32SetValAfter(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x380, 0),
	    0x3F933332,  /* 1.1499998569488525f */
	    0x3F933332,  /* 1.1499998569488525f */
	    0x3F933332,  /* 1.1499998569488525f */
	aobjEvent32SetValAfter(0x004, 3),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F2B1785,  /* 0.6683276295661926f */
	    0x3F2B1785,  /* 0.6683276295661926f */
	    0x3F2B1785,  /* 0.6683276295661926f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FAB990D,  /* 1.3406082391738892f */
	    0x3FAB990D,  /* 1.3406082391738892f */
	    0x3FAB990D,  /* 1.3406082391738892f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FAF5C29,  /* 1.3700000047683716f */
	    0x3FAF5C29,  /* 1.3700000047683716f */
	    0x3FAF5C29,  /* 1.3700000047683716f */
	aobjEvent32SetValAfter(0x004, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FAB990D,  /* 1.3406082391738892f */
	    0x3FAB990D,  /* 1.3406082391738892f */
	    0x3FAB990D,  /* 1.3406082391738892f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F2B1785,  /* 0.6683276295661926f */
	    0x3F2B1785,  /* 0.6683276295661926f */
	    0x3F2B1785,  /* 0.6683276295661926f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F933332,  /* 1.1499998569488525f */
	    0x3F933332,  /* 1.1499998569488525f */
	    0x3F933332,  /* 1.1499998569488525f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_gap_0x0000_sub_0x364,
	aobjEvent32End(),
};

PAD(16);

/* @tex fmt=IA8 dim=32x32 */
u8 dPikachuSpecial3_Tex_0x408[1032] = {
	#include <PikachuSpecial3/Tex_0x408.tex.inc.c>
};

/* @tex fmt=IA8 dim=32x32 */
u8 dPikachuSpecial3_Tex_0x810[1032] = {
	#include <PikachuSpecial3/Tex_0x810.tex.inc.c>
};

/* @tex fmt=IA8 dim=32x32 */
u8 dPikachuSpecial3_Tex_0xC18[1024] = {
	#include <PikachuSpecial3/Tex_0xC18.tex.inc.c>
};

/* @ 0x1018: MObjSub** lookup table — 2 NULL slots + 6 pointers to per-frame
 * MObjSub* tables (sub_0x1350..sub_0x1378). */
MObjSub **dPikachuSpecial3_gap_0x0000_sub_0x1018[8] = {
	NULL,
	NULL,
	dPikachuSpecial3_gap_0x0000_sub_0x1350,
	dPikachuSpecial3_gap_0x0000_sub_0x1358,
	dPikachuSpecial3_gap_0x0000_sub_0x1360,
	dPikachuSpecial3_gap_0x0000_sub_0x1368,
	dPikachuSpecial3_gap_0x0000_sub_0x1370,
	dPikachuSpecial3_gap_0x0000_sub_0x1378,
};

/* u32 pointer array @ 0x1038 (3 entries) */
u8 *dPikachuSpecial3_gap_0x0000_sub_0x1038[3] = {
	dPikachuSpecial3_Tex_0xC18,
	dPikachuSpecial3_Tex_0x810,
	dPikachuSpecial3_Tex_0x408,
};

/* u8* pointer array @ 0x1044 (3 entries) */
u8 *dPikachuSpecial3_gap_0x0000_sub_0x1044[3] = {
	dPikachuSpecial3_Tex_0xC18,
	dPikachuSpecial3_Tex_0x810,
	dPikachuSpecial3_Tex_0x408,
};

/* u8* pointer array @ 0x1050 (3 entries) */
u8 *dPikachuSpecial3_gap_0x0000_sub_0x1050[3] = {
	dPikachuSpecial3_Tex_0xC18,
	NULL,
	dPikachuSpecial3_Tex_0x408,
};

/* u8* pointer array @ 0x105C (3 entries) */
u8 *dPikachuSpecial3_gap_0x0000_sub_0x105C[3] = {
	dPikachuSpecial3_Tex_0xC18,
	dPikachuSpecial3_Tex_0x810,
	dPikachuSpecial3_Tex_0x408,
};

/* u8* pointer array @ 0x1068 (3 entries) */
u8 *dPikachuSpecial3_gap_0x0000_sub_0x1068[3] = {
	dPikachuSpecial3_Tex_0xC18,
	dPikachuSpecial3_Tex_0x810,
	dPikachuSpecial3_Tex_0x408,
};

/* u8* pointer array @ 0x1074 (3 entries) */
u8 *dPikachuSpecial3_gap_0x0000_sub_0x1074[3] = {
	dPikachuSpecial3_Tex_0xC18,
	dPikachuSpecial3_Tex_0x810,
	dPikachuSpecial3_Tex_0x408,
};

/* MObjSub @ 0x1080 */
MObjSub dPikachuSpecial3_gap_0x0000_sub_0x1080[1] = {
	{
		0x0000,
		0x03, 0x02,
		(void**)dPikachuSpecial3_gap_0x0000_sub_0x1038,
		0x003A, 0x0004, 0x0020, 0x0020,
		0,
		0.1080000028014183f, 0.0709730014204979f,
		0.800000011920929f, 0.5460289716720581f,
		0.1080000028014183f, 0.800000011920929f,
		(void**)0x00000000,
		0x0001,
		0x03, 0x01,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.1080000028014183f, 0.0709730014204979f,
		0.1080000028014183f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x59, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x10F8 */
MObjSub dPikachuSpecial3_gap_0x0000_sub_0x10F8[1] = {
	{
		0x0000,
		0x03, 0x02,
		(void**)dPikachuSpecial3_gap_0x0000_sub_0x1044,
		0x003A, 0x0004, 0x0020, 0x0020,
		0,
		0.1080000028014183f, 0.0709730014204979f,
		0.800000011920929f, 0.5460289716720581f,
		0.1080000028014183f, 0.800000011920929f,
		(void**)0x00000000,
		0x0001,
		0x03, 0x01,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.1080000028014183f, 0.0709730014204979f,
		0.1080000028014183f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x59, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x1170 */
MObjSub dPikachuSpecial3_gap_0x0000_sub_0x1170[1] = {
	{
		0x0000,
		0x03, 0x02,
		(void**)dPikachuSpecial3_gap_0x0000_sub_0x1050,
		0x003A, 0x0004, 0x0020, 0x0020,
		0,
		0.1080000028014183f, 0.0709730014204979f,
		0.800000011920929f, 0.5460289716720581f,
		0.1080000028014183f, 0.800000011920929f,
		(void**)0x00000000,
		0x0001,
		0x03, 0x01,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.1080000028014183f, 0.0709730014204979f,
		0.1080000028014183f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x59, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x11E8 */
MObjSub dPikachuSpecial3_gap_0x0000_sub_0x11E8[1] = {
	{
		0x0000,
		0x03, 0x02,
		(void**)dPikachuSpecial3_gap_0x0000_sub_0x105C,
		0x003A, 0x0004, 0x0020, 0x0020,
		0,
		0.1080000028014183f, 0.0709730014204979f,
		0.800000011920929f, 0.5460289716720581f,
		0.1080000028014183f, 0.800000011920929f,
		(void**)0x00000000,
		0x0001,
		0x03, 0x01,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.1080000028014183f, 0.0709730014204979f,
		0.1080000028014183f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x59, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x1260 */
MObjSub dPikachuSpecial3_gap_0x0000_sub_0x1260[1] = {
	{
		0x0000,
		0x03, 0x02,
		(void**)dPikachuSpecial3_gap_0x0000_sub_0x1068,
		0x003A, 0x0004, 0x0020, 0x0020,
		0,
		0.1080000028014183f, 0.0709730014204979f,
		0.800000011920929f, 0.5460289716720581f,
		0.1080000028014183f, 0.800000011920929f,
		(void**)0x00000000,
		0x0001,
		0x03, 0x01,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.1080000028014183f, 0.0709730014204979f,
		0.1080000028014183f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x59, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x12D8 */
MObjSub dPikachuSpecial3_gap_0x0000_sub_0x12D8[1] = {
	{
		0x0000,
		0x03, 0x02,
		(void**)dPikachuSpecial3_gap_0x0000_sub_0x1074,
		0x003A, 0x0004, 0x0020, 0x0020,
		0,
		0.1080000028014183f, 0.0709730014204979f,
		0.800000011920929f, 0.5460289716720581f,
		0.1080000028014183f, 0.800000011920929f,
		(void**)0x00000000,
		0x0001,
		0x03, 0x01,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.1080000028014183f, 0.0709730014204979f,
		0.1080000028014183f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x59, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x1350 (was gap+0x1350, 8 bytes) */
MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1350[2] = {
	(MObjSub *)dPikachuSpecial3_gap_0x0000_sub_0x1080,
	NULL,
};

/* gap sub-block @ 0x1358 (was gap+0x1358, 8 bytes) */
MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1358[2] = {
	(MObjSub *)dPikachuSpecial3_gap_0x0000_sub_0x10F8,
	NULL,
};

/* gap sub-block @ 0x1360 (was gap+0x1360, 8 bytes) */
MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1360[2] = {
	(MObjSub *)dPikachuSpecial3_gap_0x0000_sub_0x1170,
	NULL,
};

/* gap sub-block @ 0x1368 (was gap+0x1368, 8 bytes) */
MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1368[2] = {
	(MObjSub *)dPikachuSpecial3_gap_0x0000_sub_0x11E8,
	NULL,
};

/* gap sub-block @ 0x1370 (was gap+0x1370, 8 bytes) */
MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1370[2] = {
	(MObjSub *)dPikachuSpecial3_gap_0x0000_sub_0x1260,
	NULL,
};

/* gap sub-block @ 0x1378 (was gap+0x1378, 8 bytes) */
MObjSub *dPikachuSpecial3_gap_0x0000_sub_0x1378[2] = {
	(MObjSub *)dPikachuSpecial3_gap_0x0000_sub_0x12D8,
	NULL,
};

/* Vtx: gap_0x0000_sub_0x1380 @ 0x1380 (3 vertices) */
Vtx dPikachuSpecial3_gap_0x0000_sub_0x1380[3] = {
	#include <PikachuSpecial3/gap_0x0000_sub_0x1380.vtx.inc.c>
};

/* gap sub-block @ 0x13B0 (was gap+0x13B0, 48 bytes) */
Vtx dPikachuSpecial3_gap_0x0000_sub_0x13B0[3] = {
	#include <PikachuSpecial3/gap_0x0000_sub_0x13B0.vtx.inc.c>
};

/* gap sub-block @ 0x13E0 (was gap+0x13E0, 32 bytes) */
Vtx dPikachuSpecial3_gap_0x0000_sub_0x13E0[2] = {
	#include <PikachuSpecial3/gap_0x0000_sub_0x13E0.vtx.inc.c>
};

/* gap sub-block @ 0x1400 (was gap+0x1400, 48 bytes) */
Vtx dPikachuSpecial3_gap_0x0000_sub_0x1400[3] = {
	#include <PikachuSpecial3/gap_0x0000_sub_0x1400.vtx.inc.c>
};

/* gap sub-block @ 0x1430 (was gap+0x1430, 48 bytes) */
Vtx dPikachuSpecial3_gap_0x0000_sub_0x1430[3] = {
	#include <PikachuSpecial3/gap_0x0000_sub_0x1430.vtx.inc.c>
};

/* gap sub-block @ 0x1460 (was gap+0x1460, 48 bytes) */
Vtx dPikachuSpecial3_gap_0x0000_sub_0x1460[3] = {
	#include <PikachuSpecial3/gap_0x0000_sub_0x1460.vtx.inc.c>
};

/* gap sub-block @ 0x1490 (was gap+0x1490, 152 bytes) */
Gfx dPikachuSpecial3_DL_0x1490[19] = {
	#include <PikachuSpecial3/DL_0x1490.dl.inc.c>
};

/* gap sub-block @ 0x1528 (was gap+0x1528, 152 bytes) */
Gfx dPikachuSpecial3_DL_0x1528[19] = {
	#include <PikachuSpecial3/DL_0x1528.dl.inc.c>
};

/* gap sub-block @ 0x15C0 (was gap+0x15C0, 160 bytes) */
Gfx dPikachuSpecial3_DL_0x15C0[20] = {
	#include <PikachuSpecial3/DL_0x15C0.dl.inc.c>
};

/* gap sub-block @ 0x1660 (was gap+0x1660, 152 bytes) */
Gfx dPikachuSpecial3_DL_0x1660[19] = {
	#include <PikachuSpecial3/DL_0x1660.dl.inc.c>
};

/* gap sub-block @ 0x16F8 (was gap+0x16F8, 152 bytes) */
Gfx dPikachuSpecial3_DL_0x16F8[19] = {
	#include <PikachuSpecial3/DL_0x16F8.dl.inc.c>
};

/* gap sub-block @ 0x1790 (was gap+0x1790, 152 bytes) */
Gfx dPikachuSpecial3_DL_0x1790[19] = {
	#include <PikachuSpecial3/DL_0x1790.dl.inc.c>
};

/* gap sub-block @ 0x1828 (was gap+0x1828, 16 bytes) */
DObjDLLink dPikachuSpecial3_gap_0x0000_sub_0x1828[2] = {
	{ 1, dPikachuSpecial3_DL_0x1490 },
	{ 4, NULL },
};

/* gap sub-block @ 0x1838 (was gap+0x1838, 16 bytes) */
DObjDLLink dPikachuSpecial3_gap_0x0000_sub_0x1838[2] = {
	{ 1, dPikachuSpecial3_DL_0x1528 },
	{ 4, NULL },
};

/* gap sub-block @ 0x1848 (was gap+0x1848, 16 bytes) */
DObjDLLink dPikachuSpecial3_gap_0x0000_sub_0x1848[2] = {
	{ 1, dPikachuSpecial3_DL_0x15C0 },
	{ 4, NULL },
};

/* gap sub-block @ 0x1858 (was gap+0x1858, 16 bytes) */
DObjDLLink dPikachuSpecial3_gap_0x0000_sub_0x1858[2] = {
	{ 1, dPikachuSpecial3_DL_0x1660 },
	{ 4, NULL },
};

/* gap sub-block @ 0x1868 (was gap+0x1868, 16 bytes) */
DObjDLLink dPikachuSpecial3_gap_0x0000_sub_0x1868[2] = {
	{ 1, dPikachuSpecial3_DL_0x16F8 },
	{ 4, NULL },
};

/* gap sub-block @ 0x1878 (was gap+0x1878, 16 bytes) */
DObjDLLink dPikachuSpecial3_gap_0x0000_sub_0x1878[2] = {
	{ 1, dPikachuSpecial3_DL_0x1790 },
	{ 4, NULL },
};

/* gap sub-block @ 0x1888 (was gap+0x1888, 408 bytes) */
/* DObjDesc array @ 0x1888 — 8 real entries + 1 sentinel. Entries 2..7 point
 * to the six DObjDLLink sub-blocks above (each wrapping one Gfx DL). */
DObjDesc dPikachuSpecial3_gap_0x0000_sub_0x1888[9] = {
	{  0, (void *)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{  1, (void *)0x00000000, { 600.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{  2, (void *)&dPikachuSpecial3_gap_0x0000_sub_0x1828, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.785398006f }, { 1.5f, 1.5f, 1.0f } },
	{  2, (void *)&dPikachuSpecial3_gap_0x0000_sub_0x1838, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.261799008f },  { 1.5f, 1.5f, 1.0f } },
	{  2, (void *)&dPikachuSpecial3_gap_0x0000_sub_0x1848, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.30899704f },   { 1.5f, 1.5f, 1.0f } },
	{  2, (void *)&dPikachuSpecial3_gap_0x0000_sub_0x1858, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.30899704f },  { 1.5f, 1.5f, 1.0f } },
	{  2, (void *)&dPikachuSpecial3_gap_0x0000_sub_0x1868, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.261799008f }, { 1.5f, 1.5f, 1.0f } },
	{  2, (void *)&dPikachuSpecial3_gap_0x0000_sub_0x1878, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.785398006f },  { 1.5f, 1.5f, 1.0f } },
	{ 18, (void *)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x1A20 to 0x1AE0 (192 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint[8] = {
	NULL,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A40,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A64,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A78,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A8C,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AA0,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AB0,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AC4,
};

u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A40[9] = {
	aobjEvent32SetVal(0x010, 0),
	    0xC3C30000,
	aobjEvent32SetValAfter(0x060, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x010, 9),
	    0x44160000,
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A40,
};

u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A64[5] = {
	aobjEvent32SetFlags(0x002, 1),
	aobjEvent32SetFlags(0x000, 4),
	aobjEvent32SetFlags(0x002, 4),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A64,
};

u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A78[5] = {
	aobjEvent32SetFlags(0x002, 3),
	aobjEvent32SetFlags(0x000, 4),
	aobjEvent32SetFlags(0x002, 2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A78,
};

u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A8C[5] = {
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32SetFlags(0x000, 4),
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1A8C,
};

u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AA0[4] = {
	aobjEvent32SetFlags(0x000, 4),
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AA0,
};

u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AB0[5] = {
	aobjEvent32SetFlags(0x002, 2),
	aobjEvent32SetFlags(0x000, 4),
	aobjEvent32SetFlags(0x002, 3),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AB0,
};

u32 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AC4[6] = {
	aobjEvent32SetFlags(0x002, 4),
	aobjEvent32SetFlags(0x000, 4),
	aobjEvent32SetFlags(0x002, 1),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint_0x1AC4,
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x1AE0 to 0x1C70 (400 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
extern u32 dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data[];
extern AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x120[];
extern AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x124[];
extern AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x128[];
extern AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x12C[];
extern AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x130[];
extern AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x134[];

AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint[8] = {
	NULL,
	NULL,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x120,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x124,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x128,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x12C,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x130,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x134,
};

/* Continuous AObjEvent32 script stream — 6 sub-scripts separated by SetAnim
 * loopbacks at +0x34, +0x64, +0x84, +0xBC, +0xF4, +0x11C. Each is targeted
 * by the corresponding pointer-table entry below. */
/* 6 separate AObjEvent32 scripts, each ending with SetAnim loopback to its own start. */
u32 dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data[14] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x32400000,  /* 1.1175870895385742e-08f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data,
};
u32 dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x38[12] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x38,
};
u32 dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x68[8] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x68,
};
u32 dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x88[14] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x88,
};
u32 dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0xC0[14] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0xB2D00000,  /* -2.421438694000244e-08f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0xC0,
};
u32 dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0xF8[10] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0xF8,
};

/* @ +0x120..+0x137: pointer-table entries — 6 separate AObjEvent32 *[1] arrays
 * (one per script-start) so each MatAnimJoint slot references a bare symbol. */
AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x120[1] = {
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data,
};
AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x124[1] = {
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x38,
};
AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x128[1] = {
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x68,
};
AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x12C[1] = {
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x88,
};
AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x130[1] = {
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0xC0,
};
AObjEvent32 *dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0x134[1] = {
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint_data_at_0xF8,
};

/* @ +0x138..+0x16F: PAD(16) + 16-color RGBA5551 palette + PAD(8) */
PAD(16);

u16 dPikachuSpecial3_ThunderJoltBMatAnimJoint_palette[16] = {
	#include <PikachuSpecial3/ThunderJoltBMatAnimJoint_palette.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x1C70 @ 0x1C70 (16 colors RGBA5551) */
u16 dPikachuSpecial3_Lut_0x1C70_palette[16] = {
	#include <PikachuSpecial3/Lut_0x1C70.palette.inc.c>
};

/* Raw data from file offset 0x1C90 to 0x20A0 (1040 bytes) */
PAD(8);

/* gap sub-block @ 0x1C98 (was gap+0x8, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 */
u8 dPikachuSpecial3_Tex_0x1C98[512] = {
	#include <PikachuSpecial3/Tex_0x1C98.tex.inc.c>
};

PAD(8);

/* gap sub-block @ 0x1EA0 (was gap+0x210, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 */
u8 dPikachuSpecial3_Tex_0x1EA0[512] = {
	#include <PikachuSpecial3/Tex_0x1EA0.tex.inc.c>
};

/* MObjSub-list head @ 0x20a0 — 4-entry MObjSub** array.
 * The real MObjSub data starts at +0x10 (dPikachuSpecial3_ThunderJoltMObjSub_MObjSub_real below). */
MObjSub **dPikachuSpecial3_ThunderJoltMObjSub_MObjSub[2] = {
	NULL,
	NULL,
};

/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x8). */
void *dPikachuSpecial3_ThunderJoltMObjSub_MObjSub_sprites[2] = {
	(void *)dPikachuSpecial3_Tex_0x1EA0,
	(void *)dPikachuSpecial3_Tex_0x1C98,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dPikachuSpecial3_ThunderJoltMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dPikachuSpecial3_ThunderJoltMObjSub_MObjSub_sprites,
		0x0020, 0x0000, 0x0040, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0040, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x2118 to 0x2130 (24 bytes) */
/* gap sub-block @ 0x2128 (was gap+0x10, 8 bytes) */
/* MObjSub.sprites pointer table @ +0x2128 (2 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
MObjSub *dPikachuSpecial3_gap_0x2118_sub_0x10[2] = {
	&dPikachuSpecial3_ThunderJoltMObjSub_MObjSub_real,
	NULL,
};

/* Vtx: Vtx_0x2130 @ 0x2130 (4 vertices) */
Vtx dPikachuSpecial3_Vtx_0x2130_Vtx[4] = {
	#include <PikachuSpecial3/Vtx_0x2130.vtx.inc.c>
};

/* DisplayList: Joint_0x2170 @ 0x2170 (232 bytes) */
Gfx dPikachuSpecial3_Joint_0x2170_DisplayList[29] = {
	#include <PikachuSpecial3/Joint_0x2170.dl.inc.c>
};

/* DObjDesc: ThunderJoltDObjDesc @ 0x2258 (3 entries) */
DObjDesc dPikachuSpecial3_ThunderJoltDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dPikachuSpecial3_Joint_0x2170_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.2000000476837158f, 1.5f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x22E0 to 0x2350 (112 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dPikachuSpecial3_ThunderJoltAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltAnimJoint_AnimJoint_0x22E8,
};

u32 dPikachuSpecial3_ThunderJoltAnimJoint_AnimJoint_0x22E8[] = {
	aobjEvent32SetValAfter(0x3F0, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x40600000,  /* 3.5f */
	    0x40066666,  /* 2.0999999046325684f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfterBlock(0x180, 3),
	    0x3FECCCCD,  /* 1.850000023841858f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x180, 1),
	    0x3F4E147B,  /* 0.8050000071525574f */
	    0x4019999A,  /* 2.4000000953674316f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x3FF851EC,  /* 1.940000057220459f */
	    0x3F000000,  /* 0.5f */
	aobjEvent32SetValAfterBlock(0x180, 1),
	    0x3FF851EC,  /* 1.940000057220459f */
	    0x3F000000,  /* 0.5f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dPikachuSpecial3_ThunderJoltAnimJoint_AnimJoint_0x22E8),
};

PAD(12);

/* Raw data from file offset 0x2350 to 0x2390 (64 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 **dPikachuSpecial3_ThunderJoltMatAnimJoint_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dPikachuSpecial3_ThunderJoltMatAnimJoint_MatAnimJoint_0x2388,
};

u32 dPikachuSpecial3_ThunderJoltMatAnimJoint_MatAnimJoint_0x2358[] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x32980000,  /* 1.7695128917694092e-08f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dPikachuSpecial3_ThunderJoltMatAnimJoint_MatAnimJoint_0x2358),
};

AObjEvent32* dPikachuSpecial3_ThunderJoltMatAnimJoint_MatAnimJoint_0x2388[] = {
	(AObjEvent32*)(dPikachuSpecial3_ThunderJoltMatAnimJoint_MatAnimJoint_0x2358),
	NULL,
};