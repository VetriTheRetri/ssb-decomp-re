/* relocData file 330: PurinModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
extern MObjSub *dPurinModel_gap_0x24F8_sub_0xB28[];
extern u16 dPurinModel_palette_0x7588[];
extern u16 dPurinModel_palette_0x75B0[];
extern u16 dPurinModel_palette_0x75D8[];
extern u16 dPurinModel_palette_0x7600[];
extern u16 dPurinModel_palette_0x7628[];
extern MObjSub *dPurinModel_gap_0x24F8_sub_0xB10[];
extern MObjSub *dPurinModel_gap_0x24F8_sub_0xB20[];
extern MObjSub *dPurinModel_gap_0x24F8_sub_0xB08[];
extern MObjSub *dPurinModel_gap_0x24F8_sub_0xAE0[];
extern MObjSub *dPurinModel_gap_0x24F8_sub_0xB00[];
extern MObjSub *dPurinModel_gap_0x24F8_sub_0xB18[];
extern u16 dPurinModel_Lut_0x6948_palette[];
extern u8 dPurinModel_Tex_0x6970[];
extern u16 dPurinModel_gap_0x6028_sub_0x880[];
extern u16 dPurinModel_gap_0x6028_sub_0x8A8[];
extern u16 dPurinModel_gap_0x6028_sub_0x8D0[];
extern u16 dPurinModel_gap_0x6028_sub_0x8F8[];
/* Vtx: JointVerts @ 0x0 (2 vertices) */
Vtx dPurinModel_JointVerts_Vtx[2] = {
	#include <PurinModel/JointVerts.vtx.inc.c>
};

/* Raw data from file offset 0x0020 to 0x0040 (32 bytes) */
u8 dPurinModel_Joint_0x0020_post[32] = {
	#include <PurinModel/Joint_0x0020_post.data.inc.c>
};

/* Raw data from file offset 0x0040 to 0x0060 (32 bytes) */
u8 dPurinModel_Joint_0x0040_post[32] = {
	#include <PurinModel/Joint_0x0040_post.data.inc.c>
};

/* u32 pointer array @ 0x60 (8 entries) */
u32 dPurinModel_Joint_0x0060_post[8] = {
	0x001A021A,
	0x00000000,
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0xA10),
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x150),
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x380),
};

/* u32 pointer array @ 0x80 (8 entries) */
u32 dPurinModel_Joint_0x0080_post[8] = {
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x5B0),
	0x00000000,
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x9E8),
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x88),
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0xB0),
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0xD8),
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x128),
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0xA10),
};

/* u32 pointer array @ 0xA0 (8 entries) */
u32 dPurinModel_Joint_0x00A0_post[8] = {
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x150),
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x380),
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x7E0),
	0x00000000,
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x9E8),
};

/* u32 pointer array @ 0xC0 (8 entries) */
u32 dPurinModel_Joint_0x00C0_post[8] = {
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x88),
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0xB0),
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0xD8),
	(u32)((u8*)&dPurinModel_Tex_0x6970 + 0x128),
	(u32)dPurinModel_palette_0x7628,
	(u32)dPurinModel_palette_0x7588,
	(u32)dPurinModel_palette_0x75B0,
	(u32)dPurinModel_palette_0x75D8,
};

/* u32 pointer array @ 0xE0 (8 entries) */
u32 dPurinModel_Joint_0x00E0_post[8] = {
	(u32)dPurinModel_palette_0x7600,
	(u32)&dPurinModel_Lut_0x6948_palette,
	(u32)&dPurinModel_gap_0x6028_sub_0x880,
	(u32)&dPurinModel_gap_0x6028_sub_0x8A8,
	(u32)&dPurinModel_gap_0x6028_sub_0x8D0,
	(u32)&dPurinModel_gap_0x6028_sub_0x8F8,
	(u32)&dPurinModel_Lut_0x6948_palette,
	(u32)&dPurinModel_gap_0x6028_sub_0x880,
};

/* Raw data from file offset 0x100 to 0x110 (16 bytes).
 * Holds palette/sprite tables. The 15 MObjSubs (0x78 bytes
 * each, file offsets 0x110..0x818) and
 * 7 MObjSub* trailing-index cells (0x818..0x870)
 * have been split out below. */
u8 dPurinModel_Joint_0x0100_post[16] = {
	#include <PurinModel/Joint_0x0100_post.data.inc.c>
};

/* MObjSub @ 0x110 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x10[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)((u8*)dPurinModel_Joint_0x0060_post + 0x8),
		0x004E, 0x0008, 0x0020, 0x0020,
		0,
		0.24688799679279327f, 0.22193999588489532f,
		0.43902501463890076f, 0.4073210060596466f,
		0.24688799679279327f, 0.43902501463890076f,
		(void**)((u8*)dPurinModel_Joint_0x0080_post + 0x8),
		0x0005,
		0x02, 0x00,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.24688799679279327f, 0.22193999588489532f,
		0.24688799679279327f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x188 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x88[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)((u8*)dPurinModel_Joint_0x0080_post + 0x1C),
		0x004E, 0x0008, 0x0020, 0x0020,
		0,
		0.24690000712871552f, 0.22190000116825104f,
		0.4390000104904175f, 0.4072999954223633f,
		0.24690000712871552f, 0.4390000104904175f,
		(void**)((u8*)dPurinModel_Joint_0x00A0_post + 0x1C),
		0x0005,
		0x02, 0x00,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.24690000712871552f, 0.22190000116825104f,
		0.24690000712871552f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x200 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x100[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x00F6, 0x0007, 0x0010, 0x0010,
		0,
		0.4350000023841858f, 0.5270000100135803f,
		0.12999999523162842f, 0.12999999523162842f,
		0.4350000023841858f, 0.12999999523162842f,
		(void**)((u8*)dPurinModel_Joint_0x00C0_post + 0x10),
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.4350000023841858f, 0.5270000100135803f,
		0.4350000023841858f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x278 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x178[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x2F0 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x1F0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x368 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x268[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0010, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)((u8*)dPurinModel_Joint_0x00E0_post + 0x4),
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x3E0 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x2E0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x458 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x358[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x4D0 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x3D0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x548 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x448[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0010, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)((u8*)dPurinModel_Joint_0x00E0_post + 0x18),
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x5C0 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x4C0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x638 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x538[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x6B0 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x5B0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x728 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x628[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x7A0 */
MObjSub dPurinModel_Joint_0x0100_post_sub_0x6A0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub* trailing-index cells, NULL-terminated lists indexed by
 * dPurinModel_gap_0x0000[joint] dispatch. */
MObjSub *dPurinModel_Joint_0x0100_post_sub_0x718[10] = {
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x10,
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x88,
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x100,
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x178,
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x1F0,
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x268,
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x2E0,
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x448,
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x4C0,
	NULL,
};
MObjSub *dPurinModel_Joint_0x0100_post_sub_0x740[2] = {
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x3D0,
	NULL,
};
MObjSub *dPurinModel_Joint_0x0100_post_sub_0x748[2] = {
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x358,
	NULL,
};
MObjSub *dPurinModel_Joint_0x0100_post_sub_0x750[2] = {
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x5B0,
	NULL,
};
MObjSub *dPurinModel_Joint_0x0100_post_sub_0x758[2] = {
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x538,
	NULL,
};
MObjSub *dPurinModel_Joint_0x0100_post_sub_0x760[2] = {
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x628,
	NULL,
};
MObjSub *dPurinModel_Joint_0x0100_post_sub_0x768[2] = {
	(MObjSub *)dPurinModel_Joint_0x0100_post_sub_0x6A0,
	NULL,
};

/* Vtx: Vtx_0x0870 @ 0x870 (10 vertices) */
Vtx dPurinModel_Vtx_0x0870_Vtx[10] = {
	#include <PurinModel/Vtx_0x0870.vtx.inc.c>
};

/* Vtx: Vtx_0x0910 @ 0x910 (10 vertices) */
Vtx dPurinModel_Vtx_0x0910_Vtx[10] = {
	#include <PurinModel/Vtx_0x0910.vtx.inc.c>
};

/* Vtx: Vtx_0x09B0 @ 0x9B0 (5 vertices) */
Vtx dPurinModel_Vtx_0x09B0_Vtx[5] = {
	#include <PurinModel/Vtx_0x09B0.vtx.inc.c>
};

/* Vtx: Vtx_0x0A00_Vtx @ 0xA00 (32 vertices) */
Vtx dPurinModel_Vtx_0x0A00_Vtx[32] = {
	#include <PurinModel/Vtx_0x0A00.vtx.inc.c>
};

/* Vtx: Vtx_0x0C00 @ 0xC00 (5 vertices) */
Vtx dPurinModel_Vtx_0x0C00_Vtx[5] = {
	#include <PurinModel/Vtx_0x0C00.vtx.inc.c>
};

/* Vtx: Vtx_0x0C50 @ 0xC50 (14 vertices) */
Vtx dPurinModel_Vtx_0x0C50_Vtx[14] = {
	#include <PurinModel/Vtx_0x0C50.vtx.inc.c>
};

/* Vtx: Vtx_0x0D30 @ 0xD30 (2 vertices) */
Vtx dPurinModel_Vtx_0x0D30_Vtx[2] = {
	#include <PurinModel/Vtx_0x0D30.vtx.inc.c>
};

/* Vtx: Vtx_0x0D50 @ 0xD50 (2 vertices) */
Vtx dPurinModel_Vtx_0x0D50_Vtx[2] = {
	#include <PurinModel/Vtx_0x0D50.vtx.inc.c>
};

/* Vtx: Vtx_0x0D70 @ 0xD70 (13 vertices) */
Vtx dPurinModel_Vtx_0x0D70_Vtx[13] = {
	#include <PurinModel/Vtx_0x0D70.vtx.inc.c>
};

/* Vtx: Vtx_0x0E40 @ 0xE40 (2 vertices) */
Vtx dPurinModel_Vtx_0x0E40_Vtx[2] = {
	#include <PurinModel/Vtx_0x0E40.vtx.inc.c>
};

/* Vtx: Vtx_0x0E60 @ 0xE60 (1 vertices) */
Vtx dPurinModel_Vtx_0x0E60_Vtx[1] = {
	#include <PurinModel/Vtx_0x0E60.vtx.inc.c>
};

/* Vtx: Vtx_0x0E70 @ 0xE70 (22 vertices) */
Vtx dPurinModel_Vtx_0x0E70_Vtx[22] = {
	#include <PurinModel/Vtx_0x0E70.vtx.inc.c>
};

/* Vtx: Vtx_0x0FD0 @ 0xFD0 (3 vertices) */
Vtx dPurinModel_Vtx_0x0FD0_Vtx[3] = {
	#include <PurinModel/Vtx_0x0FD0.vtx.inc.c>
};

/* Vtx: Vtx_0x1000 @ 0x1000 (8 vertices) */
Vtx dPurinModel_Vtx_0x1000_Vtx[8] = {
	#include <PurinModel/Vtx_0x1000.vtx.inc.c>
};

/* Vtx: Vtx_0x1080 @ 0x1080 (3 vertices) */
Vtx dPurinModel_Vtx_0x1080_Vtx[3] = {
	#include <PurinModel/Vtx_0x1080.vtx.inc.c>
};

/* Vtx: Vtx_0x10B0 @ 0x10B0 (8 vertices) */
Vtx dPurinModel_Vtx_0x10B0_Vtx[8] = {
	#include <PurinModel/Vtx_0x10B0.vtx.inc.c>
};

/* Vtx: Vtx_0x1130 @ 0x1130 (13 vertices) */
Vtx dPurinModel_Vtx_0x1130_Vtx[13] = {
	#include <PurinModel/Vtx_0x1130.vtx.inc.c>
};

/* Vtx: Vtx_0x1200 @ 0x1200 (6 vertices) */
Vtx dPurinModel_Vtx_0x1200_Vtx[6] = {
	#include <PurinModel/Vtx_0x1200.vtx.inc.c>
};

/* Vtx: Vtx_0x1260 @ 0x1260 (12 vertices) */
Vtx dPurinModel_Vtx_0x1260_Vtx[12] = {
	#include <PurinModel/Vtx_0x1260.vtx.inc.c>
};

/* Vtx: Vtx_0x1320 @ 0x1320 (6 vertices) */
Vtx dPurinModel_Vtx_0x1320_Vtx[6] = {
	#include <PurinModel/Vtx_0x1320.vtx.inc.c>
};

/* Vtx: Vtx_0x1380 @ 0x1380 (15 vertices) */
Vtx dPurinModel_Vtx_0x1380_Vtx[15] = {
	#include <PurinModel/Vtx_0x1380.vtx.inc.c>
};

/* Vtx: Vtx_0x1470 @ 0x1470 (15 vertices) */
Vtx dPurinModel_Vtx_0x1470_Vtx[15] = {
	#include <PurinModel/Vtx_0x1470.vtx.inc.c>
};

/* DisplayList: Joint_0x1560 @ 0x1560 (1728 bytes, 216 cmds) */
Gfx dPurinModel_Joint_0x1560_DisplayList[216] = {
	#include <PurinModel/Joint_0x1560.dl.inc.c>
};

/* DisplayList: Joint_0x1C20 @ 0x1C20 (152 bytes, 19 cmds) */
Gfx dPurinModel_Joint_0x1C20_DisplayList[19] = {
	#include <PurinModel/Joint_0x1C20.dl.inc.c>
};

/* DisplayList: Joint_0x1CB8 @ 0x1CB8 (192 bytes, 24 cmds) */
Gfx dPurinModel_Joint_0x1CB8_DisplayList[24] = {
	#include <PurinModel/Joint_0x1CB8.dl.inc.c>
};

/* DisplayList: Joint_0x1D78 @ 0x1D78 (160 bytes, 20 cmds) */
Gfx dPurinModel_Joint_0x1D78_DisplayList[20] = {
	#include <PurinModel/Joint_0x1D78.dl.inc.c>
};

/* DisplayList: Joint_0x1E18 @ 0x1E18 (192 bytes, 24 cmds) */
Gfx dPurinModel_Joint_0x1E18_DisplayList[24] = {
	#include <PurinModel/Joint_0x1E18.dl.inc.c>
};

/* DisplayList: Joint_0x1ED8 @ 0x1ED8 (184 bytes, 23 cmds) */
Gfx dPurinModel_Joint_0x1ED8_DisplayList[23] = {
	#include <PurinModel/Joint_0x1ED8.dl.inc.c>
};

/* DisplayList: Joint_0x1F90 @ 0x1F90 (152 bytes, 19 cmds) */
Gfx dPurinModel_Joint_0x1F90_DisplayList[19] = {
	#include <PurinModel/Joint_0x1F90.dl.inc.c>
};

/* DObjDesc: JointTree @ 0x2028 (28 entries) */
DObjDesc dPurinModel_JointTree[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinModel_Joint_0x1560_DisplayList, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -19.500003814697266f, 39.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.80000305175781f, -30.0f }, { 0.0f, -1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x1C20_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.9038249850273132f, -0.6086379885673523f, 5.9965410232543945f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x1CB8_DisplayList, { 72.0719985961914f, 1.4000000192027073e-05f, -1.5999999959603883e-05f }, { 0.0f, 0.0f, -0.4704279899597168f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.79998016357422f, -30.0f }, { 0.0f, 1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x1D78_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.9065089821815491f, 0.6037060022354126f, -0.29135599732398987f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x1E18_DisplayList, { 72.0719985961914f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.4582650065422058f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 45.629737854003906f, -0.135670006275177f, -1.5999999959603883e-05f }, { 0.7883700132369995f, -1.570796012878418f, 0.7883700132369995f }, { 1.0f, 1.0399980545043945f, 1.0000009536743164f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -0.5318750143051147f, -0.5556820034980774f, 0.3715670108795166f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.013922999612987041f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x1ED8_DisplayList, { 9.999999974752427e-07f, 0.0f, 7.000000096013537e-06f }, { -3.7447760105133057f, 3.03692889213562f, -3.218498945236206f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.5355820059776306f, 0.552141010761261f, 0.37861400842666626f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x1F90_DisplayList, { 0.0f, 0.0f, 0.0f }, { -2.538408041000366f, -3.036932945251465f, 3.0716419219970703f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 0.0f, 2.2393685335362908e-33f, 0.0f }, { 0.0f, 0.0f, 2.251407248727642e-33f }, { 2.287518618855895e-33f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x24F8 to 0x3028 (2864 bytes) */
/* gap sub-block @ 0x24F8 (was gap+0x0, 64 bytes) */
u8 dPurinModel_gap_0x24F8[64] = {
	#include <PurinModel/gap_0x24F8.data.inc.c>
};

/* gap sub-block @ 0x2538 (was gap+0x40, 92 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x40[23] = {
	aobjEvent32SetValAfter(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(46),
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x40C00000,  /* 6.0f */
	aobjEvent32Wait(48),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2594 (was gap+0x9C, 92 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x9C[23] = {
	aobjEvent32SetValAfter(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(46),
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x40C00000,  /* 6.0f */
	aobjEvent32Wait(48),
	aobjEvent32End(),
};

/* gap sub-block @ 0x25F0 (was gap+0xF8, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0xF8[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2620 (was gap+0x128, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x128[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2650 (was gap+0x158, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x158[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2680 (was gap+0x188, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x188[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x26B0 (was gap+0x1B8, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x1B8[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x26E0 (was gap+0x1E8, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x1E8[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2710 (was gap+0x218, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x218[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2740 (was gap+0x248, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x248[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2770 (was gap+0x278, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x278[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x27A0 (was gap+0x2A8, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x2A8[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x27D0 (was gap+0x2D8, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x2D8[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2800 (was gap+0x308, 48 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x308[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2830 (was gap+0x338, 56 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x338[14] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFCDD8FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2868 (was gap+0x370, 36 bytes) */
AObjEvent32 *dPurinModel_gap_0x24F8_sub_0x370[9] = {
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x40,
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x9C,
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0xF8,
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x128,
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x158,
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x188,
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x1B8,
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x248,
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x278,
};

/* gap sub-block @ 0x288C (was gap+0x394, 4 bytes) */
AObjEvent32 *dPurinModel_gap_0x24F8_sub_0x394[1] = {
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x218,
};

/* gap sub-block @ 0x2890 (was gap+0x398, 4 bytes) */
AObjEvent32 *dPurinModel_gap_0x24F8_sub_0x398[1] = {
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x1E8,
};

/* gap sub-block @ 0x2894 (was gap+0x39C, 4 bytes) */
AObjEvent32 *dPurinModel_gap_0x24F8_sub_0x39C[1] = {
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x2D8,
};

/* gap sub-block @ 0x2898 (was gap+0x3A0, 4 bytes) */
AObjEvent32 *dPurinModel_gap_0x24F8_sub_0x3A0[1] = {
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x2A8,
};

/* gap sub-block @ 0x289C (was gap+0x3A4, 4 bytes) */
AObjEvent32 *dPurinModel_gap_0x24F8_sub_0x3A4[1] = {
	(AObjEvent32 *)dPurinModel_gap_0x24F8_sub_0x308,
};

/* gap sub-block @ 0x28A0 (was gap+0x3A8, 16 bytes) */
u32 dPurinModel_gap_0x24F8_sub_0x3A8[4] = {
	(u32)dPurinModel_gap_0x24F8_sub_0x338,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* gap sub-block @ 0x28B0 (was gap+0x3B8, 104 bytes) */
MObjSub *dPurinModel_gap_0x24F8_sub_0x3B8[26] = {
	NULL,
	NULL,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0xAE0,
	NULL,
	NULL,
	NULL,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0xB00,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0xB08,
	NULL,
	NULL,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0xB10,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0xB18,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0xB20,
	NULL,
	NULL,
	NULL,
	NULL,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0xB28,
	NULL,
};

/* u32 pointer array @ 0x2918 (8 entries) */
u32 dPurinModel_gap_0x24F8_sub_0x420[8] = {
	0x0A4A1CE0,
	0x00000000,
	0x00000000,
	0x00000000,
	0x0A4B1AB0,
	0x0A4C1B3C,
	0x0A4E1BC8,
	0x00000000,
};

/* u32 pointer array @ 0x2938 (5 entries) */
u32 dPurinModel_gap_0x24F8_sub_0x440[5] = {
	0x0A4F1CD6,
	0x0A501A7E,
	0x0A511A88,
	0x0A521A92,
	0x0A531AA6,
};

/* u32 pointer array @ 0x294C (8 entries) */
u32 dPurinModel_gap_0x24F8_sub_0x454[8] = {
	0x0A571CE0,
	0x00000000,
	0x00000000,
	0x00000000,
	0x0A581AB0,
	0x0A591B3C,
	0x0A5B1C54,
	0x00000000,
};

/* u32 pointer array @ 0x296C (5 entries) */
u32 dPurinModel_gap_0x24F8_sub_0x474[5] = {
	0x0A5C1CD6,
	0x0A5D1A7E,
	0x0A5E1A88,
	0x0A5F1A92,
	0x0A601AA6,
};

/* u32 pointer array @ 0x2980 (5 entries) */
u32 dPurinModel_gap_0x24F8_sub_0x488[5] = {
	0x0A611D8A,
	0x0A621D62,
	0x0A631D6C,
	0x0A641D76,
	0x0A651D80,
};

/* u32 pointer array @ 0x2994 (5 entries) */
u32 dPurinModel_gap_0x24F8_sub_0x49C[5] = {
	0x0A661A52,
	0x0A671A2A,
	0x0A681A34,
	0x0A691A3E,
	0x0A6A1A48,
};

/* u32 pointer array @ 0x29A8 (6 entries) */
u32 dPurinModel_gap_0x24F8_sub_0x4B0[6] = {
	0x0A6B1A52,
	0x0A6C1A2A,
	0x0A6D1A34,
	0x0A6E1A3E,
	0x0A711A48,
	0x00000000,
};

/* MObjSub @ 0x29C0 */
MObjSub dPurinModel_gap_0x24F8_sub_0x4C8[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dPurinModel_gap_0x24F8_sub_0x420,
		0x004E, 0x0008, 0x0020, 0x0020,
		0,
		0.24688799679279327f, 0.22193999588489532f,
		0.43902501463890076f, 0.4073210060596466f,
		0.24688799679279327f, 0.43902501463890076f,
		(void**)dPurinModel_gap_0x24F8_sub_0x440,
		0x0005,
		0x02, 0x00,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.24688799679279327f, 0.22193999588489532f,
		0.24688799679279327f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2A38 */
MObjSub dPurinModel_gap_0x24F8_sub_0x540[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dPurinModel_gap_0x24F8_sub_0x454,
		0x004E, 0x0008, 0x0020, 0x0020,
		0,
		0.24688799679279327f, 0.22193999588489532f,
		0.43902501463890076f, 0.4073210060596466f,
		0.24688799679279327f, 0.43902501463890076f,
		(void**)dPurinModel_gap_0x24F8_sub_0x474,
		0x0005,
		0x02, 0x00,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.24688799679279327f, 0.22193999588489532f,
		0.24688799679279327f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2AB0 */
MObjSub dPurinModel_gap_0x24F8_sub_0x5B8[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x00F6, 0x0007, 0x0010, 0x0010,
		0,
		0.4350000023841858f, 0.5270000100135803f,
		0.12999999523162842f, 0.12999999523162842f,
		0.4350000023841858f, 0.12999999523162842f,
		(void**)dPurinModel_gap_0x24F8_sub_0x488,
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.4350000023841858f, 0.5270000100135803f,
		0.4350000023841858f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2B28 */
MObjSub dPurinModel_gap_0x24F8_sub_0x630[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0080, 0x000B, 0x0010, 0x0010,
		0,
		0.6650000214576721f, 0.003000000026077032f,
		0.3100000023841858f, 0.25f,
		0.6650000214576721f, 0.3100000023841858f,
		(void**)dPurinModel_gap_0x24F8_sub_0x49C,
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.6650000214576721f, 0.003000000026077032f,
		0.6650000214576721f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2BA0 */
MObjSub dPurinModel_gap_0x24F8_sub_0x6A8[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0080, 0x000B, 0x0010, 0x0010,
		0,
		0.6650000214576721f, 0.003000000026077032f,
		0.3100000023841858f, 0.25f,
		0.6650000214576721f, 0.3100000023841858f,
		(void**)dPurinModel_gap_0x24F8_sub_0x4B0,
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.6650000214576721f, 0.003000000026077032f,
		0.6650000214576721f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2C18 */
MObjSub dPurinModel_gap_0x24F8_sub_0x720[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2C90 */
MObjSub dPurinModel_gap_0x24F8_sub_0x798[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2D08 */
MObjSub dPurinModel_gap_0x24F8_sub_0x810[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2D80 */
MObjSub dPurinModel_gap_0x24F8_sub_0x888[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2DF8 */
MObjSub dPurinModel_gap_0x24F8_sub_0x900[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2E70 */
MObjSub dPurinModel_gap_0x24F8_sub_0x978[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2EE8 */
MObjSub dPurinModel_gap_0x24F8_sub_0x9F0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2F60 */
MObjSub dPurinModel_gap_0x24F8_sub_0xA68[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xCD, 0xD8, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x2FD8 (was gap+0xAE0, 32 bytes) */
MObjSub *dPurinModel_gap_0x24F8_sub_0xAE0[8] = {
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x4C8,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x540,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x5B8,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x630,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x6A8,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x720,
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x798,
	NULL,
};

/* gap sub-block @ 0x2FF8 (was gap+0xB00, 8 bytes) */
MObjSub *dPurinModel_gap_0x24F8_sub_0xB00[2] = {
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x888,
	NULL,
};

/* gap sub-block @ 0x3000 (was gap+0xB08, 8 bytes) */
MObjSub *dPurinModel_gap_0x24F8_sub_0xB08[2] = {
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x810,
	NULL,
};

/* gap sub-block @ 0x3008 (was gap+0xB10, 8 bytes) */
MObjSub *dPurinModel_gap_0x24F8_sub_0xB10[2] = {
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x978,
	NULL,
};

/* gap sub-block @ 0x3010 (was gap+0xB18, 8 bytes) */
MObjSub *dPurinModel_gap_0x24F8_sub_0xB18[2] = {
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x900,
	NULL,
};

/* gap sub-block @ 0x3018 (was gap+0xB20, 8 bytes) */
MObjSub *dPurinModel_gap_0x24F8_sub_0xB20[2] = {
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0x9F0,
	NULL,
};

/* gap sub-block @ 0x3020 (was gap+0xB28, 8 bytes) */
MObjSub *dPurinModel_gap_0x24F8_sub_0xB28[2] = {
	(MObjSub *)dPurinModel_gap_0x24F8_sub_0xA68,
	NULL,
};

/* Vtx: Vtx_0x3028 @ 0x3028 (10 vertices) */
Vtx dPurinModel_Vtx_0x3028_Vtx[10] = {
	#include <PurinModel/Vtx_0x3028.vtx.inc.c>
};

/* Vtx: Vtx_0x30C8 @ 0x30C8 (10 vertices) */
Vtx dPurinModel_Vtx_0x30C8_Vtx[10] = {
	#include <PurinModel/Vtx_0x30C8.vtx.inc.c>
};

/* Vtx: Vtx_0x3168 @ 0x3168 (5 vertices) */
Vtx dPurinModel_Vtx_0x3168_Vtx[5] = {
	#include <PurinModel/Vtx_0x3168.vtx.inc.c>
};

/* Vtx: Vtx_0x31B8 @ 0x31B8 (3 vertices) */
Vtx dPurinModel_Vtx_0x31B8_Vtx[3] = {
	#include <PurinModel/Vtx_0x31B8.vtx.inc.c>
};

/* Vtx: Vtx_0x31E8 @ 0x31E8 (3 vertices) */
Vtx dPurinModel_Vtx_0x31E8_Vtx[3] = {
	#include <PurinModel/Vtx_0x31E8.vtx.inc.c>
};

/* Vtx: Vtx_0x3218 @ 0x3218 (32 vertices) */
Vtx dPurinModel_Vtx_0x3218_Vtx[32] = {
	#include <PurinModel/Vtx_0x3218.vtx.inc.c>
};

/* Vtx: Vtx_0x3418 @ 0x3418 (5 vertices) */
Vtx dPurinModel_Vtx_0x3418_Vtx[5] = {
	#include <PurinModel/Vtx_0x3418.vtx.inc.c>
};

/* Vtx: Vtx_0x3468 @ 0x3468 (6 vertices) */
Vtx dPurinModel_Vtx_0x3468_Vtx[6] = {
	#include <PurinModel/Vtx_0x3468.vtx.inc.c>
};

/* Vtx: Vtx_0x34C8 @ 0x34C8 (5 vertices) */
Vtx dPurinModel_Vtx_0x34C8_Vtx[5] = {
	#include <PurinModel/Vtx_0x34C8.vtx.inc.c>
};

/* Vtx: Vtx_0x3518 @ 0x3518 (13 vertices) */
Vtx dPurinModel_Vtx_0x3518_Vtx[13] = {
	#include <PurinModel/Vtx_0x3518.vtx.inc.c>
};

/* Vtx: Vtx_0x35E8_Vtx @ 0x35E8 (9 vertices) */
Vtx dPurinModel_Vtx_0x35E8_Vtx[9] = {
	#include <PurinModel/Vtx_0x35E8.vtx.inc.c>
};

/* Vtx: Vtx_0x3678_Vtx @ 0x3678 (6 vertices) */
Vtx dPurinModel_Vtx_0x3678_Vtx[6] = {
	#include <PurinModel/Vtx_0x3678.vtx.inc.c>
};

/* Vtx: Vtx_0x36D8 @ 0x36D8 (1 vertices) */
Vtx dPurinModel_Vtx_0x36D8_Vtx[1] = {
	#include <PurinModel/Vtx_0x36D8.vtx.inc.c>
};

/* Vtx: Vtx_0x36E8 @ 0x36E8 (2 vertices) */
Vtx dPurinModel_Vtx_0x36E8_Vtx[2] = {
	#include <PurinModel/Vtx_0x36E8.vtx.inc.c>
};

/* Vtx: Vtx_0x3708 @ 0x3708 (4 vertices) */
Vtx dPurinModel_Vtx_0x3708_Vtx[4] = {
	#include <PurinModel/Vtx_0x3708.vtx.inc.c>
};

/* Vtx: Vtx_0x3748 @ 0x3748 (3 vertices) */
Vtx dPurinModel_Vtx_0x3748_Vtx[3] = {
	#include <PurinModel/Vtx_0x3748.vtx.inc.c>
};

/* Vtx: Vtx_0x3778 @ 0x3778 (9 vertices) */
Vtx dPurinModel_Vtx_0x3778_Vtx[9] = {
	#include <PurinModel/Vtx_0x3778.vtx.inc.c>
};

/* Vtx: Vtx_0x3808 @ 0x3808 (9 vertices) */
Vtx dPurinModel_Vtx_0x3808_Vtx[9] = {
	#include <PurinModel/Vtx_0x3808.vtx.inc.c>
};

/* DisplayList: Joint_0x3898 @ 0x3898 (1144 bytes, 143 cmds) */
Gfx dPurinModel_Joint_0x3898_DisplayList[143] = {
	#include <PurinModel/Joint_0x3898.dl.inc.c>
};

/* DisplayList: Joint_0x3D10 @ 0x3D10 (128 bytes, 16 cmds) */
Gfx dPurinModel_Joint_0x3D10_DisplayList[16] = {
	#include <PurinModel/Joint_0x3D10.dl.inc.c>
};

/* DisplayList: Joint_0x3D90 @ 0x3D90 (168 bytes, 21 cmds) */
Gfx dPurinModel_Joint_0x3D90_DisplayList[21] = {
	#include <PurinModel/Joint_0x3D90.dl.inc.c>
};

/* DisplayList: Joint_0x3E38 @ 0x3E38 (160 bytes, 20 cmds) */
Gfx dPurinModel_Joint_0x3E38_DisplayList[20] = {
	#include <PurinModel/Joint_0x3E38.dl.inc.c>
};

/* DisplayList: Joint_0x3ED8 @ 0x3ED8 (184 bytes, 23 cmds) */
Gfx dPurinModel_Joint_0x3ED8_DisplayList[23] = {
	#include <PurinModel/Joint_0x3ED8.dl.inc.c>
};

/* DisplayList: Joint_0x3F90 @ 0x3F90 (136 bytes, 17 cmds) */
Gfx dPurinModel_Joint_0x3F90_DisplayList[17] = {
	#include <PurinModel/Joint_0x3F90.dl.inc.c>
};

/* DisplayList: Joint_0x4018 @ 0x4018 (136 bytes, 17 cmds) */
Gfx dPurinModel_Joint_0x4018_DisplayList[17] = {
	#include <PurinModel/Joint_0x4018.dl.inc.c>
};

/* DObjDesc: JointTree_0x40A0 @ 0x40A0 (29 entries) */
DObjDesc dPurinModel_JointTree_0x40A0[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinModel_Joint_0x3898_DisplayList, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -19.500003814697266f, 39.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.80000305175781f, -30.0f }, { 0.0f, -1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x3D10_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.9038249850273132f, -0.6086369752883911f, -0.28664499521255493f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x3D90_DisplayList, { 72.0719985961914f, 1.4000000192027073e-05f, -1.5999999959603883e-05f }, { 0.0f, 0.0f, -0.470427006483078f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.79998016357422f, -30.0f }, { 0.0f, 1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x3E38_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.9065089821815491f, 0.6037049889564514f, -0.29135701060295105f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x3ED8_DisplayList, { 72.0719985961914f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.45826199650764465f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 45.629737854003906f, -0.135670006275177f, -1.5999999959603883e-05f }, { 0.7883700132369995f, -1.570796012878418f, 0.7883700132369995f }, { 1.0f, 1.0399980545043945f, 1.0000009536743164f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -0.5355820059776306f, -0.552141010761261f, 0.37861400842666626f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x3F90_DisplayList, { 9.999999974752427e-07f, 0.0f, 7.000000096013537e-06f }, { -3.744776964187622f, 3.036932945251465f, -3.2115440368652344f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.5355820059776306f, 0.552141010761261f, 0.37861400842666626f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x4018_DisplayList, { 0.0f, 0.0f, 0.0f }, { -2.538408041000366f, -3.036932945251465f, 3.0716419219970703f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 1.720275293065678e-28f, 0.0f, 0.0f }, { 0.0f, 1.7281647447122388e-28f, 1.7518306922394907e-28f } },
	{ 0, (void*)0x00000000, { 1.7597194216623223e-28f, 1.8228284144506248e-28f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x459C to 0x4BF0 (1620 bytes) */
/* gap sub-block @ 0x459C (was gap+0x0, 28 bytes) */
u8 dPurinModel_gap_0x459C[28] = {
	#include <PurinModel/gap_0x459C.data.inc.c>
};

/* gap sub-block @ 0x45B8 (was gap+0x1C, 92 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x1C[23] = {
	aobjEvent32SetValAfter(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(46),
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x40C00000,  /* 6.0f */
	aobjEvent32Wait(48),
	aobjEvent32End(),
};

/* gap sub-block @ 0x4614 (was gap+0x78, 92 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x78[23] = {
	aobjEvent32SetValAfter(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(46),
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x40C00000,  /* 6.0f */
	aobjEvent32Wait(48),
	aobjEvent32End(),
};

/* gap sub-block @ 0x4670 (was gap+0xD4, 48 bytes) */
u32 dPurinModel_gap_0x459C_sub_0xD4[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x46A0 (was gap+0x104, 48 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x104[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x46D0 (was gap+0x134, 48 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x134[12] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x4700 (was gap+0x164, 48 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x164[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x4730 (was gap+0x194, 48 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x194[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x4760 (was gap+0x1C4, 48 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x1C4[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x4790 (was gap+0x1F4, 48 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x1F4[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x47C0 (was gap+0x224, 48 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x224[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x47F0 (was gap+0x254, 48 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x254[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x4820 (was gap+0x284, 48 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x284[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x4850 (was gap+0x2B4, 48 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x2B4[12] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFFCDD8FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 2),
	    0xE0B8D8FF,  /* -1.065574101873066e+20f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xF8D0C8FF,  /* -3.387732598991924e+34f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xD0F8FFFF,  /* -33420212224.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFFF7BDFF,  /* nanf */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x4880 (was gap+0x2E4, 28 bytes) */
AObjEvent32 *dPurinModel_gap_0x459C_sub_0x2E4[7] = {
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0x1C,
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0x78,
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0xD4,
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0x104,
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0x134,
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0x164,
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0x194,
};

/* gap sub-block @ 0x489C (was gap+0x300, 4 bytes) */
AObjEvent32 *dPurinModel_gap_0x459C_sub_0x300[1] = {
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0x1F4,
};

/* gap sub-block @ 0x48A0 (was gap+0x304, 4 bytes) */
AObjEvent32 *dPurinModel_gap_0x459C_sub_0x304[1] = {
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0x1C4,
};

/* gap sub-block @ 0x48A4 (was gap+0x308, 4 bytes) */
AObjEvent32 *dPurinModel_gap_0x459C_sub_0x308[1] = {
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0x254,
};

/* gap sub-block @ 0x48A8 (was gap+0x30C, 4 bytes) */
AObjEvent32 *dPurinModel_gap_0x459C_sub_0x30C[1] = {
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0x224,
};

/* gap sub-block @ 0x48AC (was gap+0x310, 4 bytes) */
AObjEvent32 *dPurinModel_gap_0x459C_sub_0x310[1] = {
	(AObjEvent32 *)dPurinModel_gap_0x459C_sub_0x284,
};

/* gap sub-block @ 0x48B0 (was gap+0x314, 20 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x314[20] = {
	#include <PurinModel/gap_0x459C_sub_0x314.data.inc.c>
};

/* u32 pointer array @ 0x48C4 (3 entries) */
u32 dPurinModel_gap_0x459C_sub_0x328[3] = {
	0x123219EA,
	0x12331A16,
	0x12341A20,
};

/* u32 pointer array @ 0x48D0 (4 entries) */
u32 dPurinModel_gap_0x459C_sub_0x334[4] = {
	0x123519EA,
	0x12361A16,
	0x12431A20,
	0x00000000,
};

/* MObjSub @ 0x48E0 */
MObjSub dPurinModel_gap_0x459C_sub_0x344[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x004D, 0x0007, 0x0010, 0x0010,
		0,
		0.41999998688697815f, 0.13086099922657013f,
		0.41280001401901245f, 0.6822779774665833f,
		0.41999998688697815f, 0.41280001401901245f,
		(void**)dPurinModel_gap_0x459C_sub_0x328,
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.41999998688697815f, 0.13086099922657013f,
		0.41999998688697815f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4958 */
MObjSub dPurinModel_gap_0x459C_sub_0x3BC[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x004D, 0x0007, 0x0010, 0x0010,
		0,
		0.41999998688697815f, 0.13086099922657013f,
		0.41280001401901245f, 0.6822779774665833f,
		0.41999998688697815f, 0.41280001401901245f,
		(void**)dPurinModel_gap_0x459C_sub_0x334,
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.41999998688697815f, 0.13086099922657013f,
		0.41999998688697815f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x49D0 (was gap+0x434, 16 bytes) */
MObjSub *dPurinModel_gap_0x459C_sub_0x434[4] = {
	(MObjSub *)dPurinModel_gap_0x459C_sub_0x344,
	(MObjSub *)dPurinModel_gap_0x459C_sub_0x3BC,
	NULL,
	NULL,
};

/* gap sub-block @ 0x49E0 (was gap+0x444, 64 bytes) */
Vtx dPurinModel_gap_0x459C_sub_0x444[4] = {
	#include <PurinModel/gap_0x459C_sub_0x444.vtx.inc.c>
};

/* gap sub-block @ 0x4A20 (was gap+0x484, 64 bytes) */
Vtx dPurinModel_gap_0x459C_sub_0x484[4] = {
	#include <PurinModel/gap_0x459C_sub_0x484.vtx.inc.c>
};

/* Gfx DL: gap_0x459C_sub_0x4C4 @ 0x4A60 (38 cmds) */
Gfx dPurinModel_gap_0x459C_sub_0x4C4[38] = {
	#include <PurinModel/gap_0x459C_sub_0x4C4.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0x4B90 (4 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x4C4_post[4] = {
	#include <PurinModel/gap_0x459C_sub_0x4C4_post.data.inc.c>
};

/* gap sub-block @ 0x4B94 (was gap+0x5F8, 40 bytes) */
u16 dPurinModel_gap_0x459C_sub_0x5F8[20] = {
	#include <PurinModel/gap_0x459C_sub_0x5F8.palette.inc.c>
};

/* gap sub-block @ 0x4BBC (was gap+0x620, 40 bytes) */
u16 dPurinModel_gap_0x459C_sub_0x620[20] = {
	#include <PurinModel/gap_0x459C_sub_0x620.palette.inc.c>
};

/* gap sub-block @ 0x4BE4 (was gap+0x648, 12 bytes) */
u32 dPurinModel_gap_0x459C_sub_0x648[3] = {
	(u32)dPurinModel_gap_0x459C_sub_0x5F8,
	(u32)dPurinModel_gap_0x459C_sub_0x620,
	aobjEvent32End(),
};

/* Vtx: Vtx_0x4BF0 @ 0x4BF0 (6 vertices) */
Vtx dPurinModel_Vtx_0x4BF0_Vtx[6] = {
	#include <PurinModel/Vtx_0x4BF0.vtx.inc.c>
};

/* Vtx: Vtx_0x4C50_Vtx @ 0x4C50 (32 vertices) */
Vtx dPurinModel_Vtx_0x4C50_Vtx[32] = {
	#include <PurinModel/Vtx_0x4C50.vtx.inc.c>
};

/* Vtx: Vtx_0x4E50 @ 0x4E50 (4 vertices) */
Vtx dPurinModel_Vtx_0x4E50_Vtx[4] = {
	#include <PurinModel/Vtx_0x4E50.vtx.inc.c>
};

/* Vtx: Vtx_0x4E90 @ 0x4E90 (1 vertices) */
Vtx dPurinModel_Vtx_0x4E90_Vtx[1] = {
	#include <PurinModel/Vtx_0x4E90.vtx.inc.c>
};

/* Vtx: Vtx_0x4EA0 @ 0x4EA0 (1 vertices) */
Vtx dPurinModel_Vtx_0x4EA0_Vtx[1] = {
	#include <PurinModel/Vtx_0x4EA0.vtx.inc.c>
};

/* Vtx: Vtx_0x4EB0 @ 0x4EB0 (17 vertices) */
Vtx dPurinModel_Vtx_0x4EB0_Vtx[17] = {
	#include <PurinModel/Vtx_0x4EB0.vtx.inc.c>
};

/* Vtx: Vtx_0x4FC0 @ 0x4FC0 (1 vertices) */
Vtx dPurinModel_Vtx_0x4FC0_Vtx[1] = {
	#include <PurinModel/Vtx_0x4FC0.vtx.inc.c>
};

/* Vtx: Vtx_0x4FD0 @ 0x4FD0 (15 vertices) */
Vtx dPurinModel_Vtx_0x4FD0_Vtx[15] = {
	#include <PurinModel/Vtx_0x4FD0.vtx.inc.c>
};

/* Vtx: Vtx_0x50C0 @ 0x50C0 (3 vertices) */
Vtx dPurinModel_Vtx_0x50C0_Vtx[3] = {
	#include <PurinModel/Vtx_0x50C0.vtx.inc.c>
};

/* Vtx: Vtx_0x50F0 @ 0x50F0 (9 vertices) */
Vtx dPurinModel_Vtx_0x50F0_Vtx[9] = {
	#include <PurinModel/Vtx_0x50F0.vtx.inc.c>
};

/* Vtx: Vtx_0x5180 @ 0x5180 (8 vertices) */
Vtx dPurinModel_Vtx_0x5180_Vtx[8] = {
	#include <PurinModel/Vtx_0x5180.vtx.inc.c>
};

/* Vtx: Vtx_0x5200 @ 0x5200 (12 vertices) */
Vtx dPurinModel_Vtx_0x5200_Vtx[12] = {
	#include <PurinModel/Vtx_0x5200.vtx.inc.c>
};

/* Vtx: Vtx_0x52C0 @ 0x52C0 (9 vertices) */
Vtx dPurinModel_Vtx_0x52C0_Vtx[9] = {
	#include <PurinModel/Vtx_0x52C0.vtx.inc.c>
};

/* Vtx: Vtx_0x5350 @ 0x5350 (13 vertices) */
Vtx dPurinModel_Vtx_0x5350_Vtx[13] = {
	#include <PurinModel/Vtx_0x5350.vtx.inc.c>
};

/* Vtx: Vtx_0x5420 @ 0x5420 (10 vertices) */
Vtx dPurinModel_Vtx_0x5420_Vtx[10] = {
	#include <PurinModel/Vtx_0x5420.vtx.inc.c>
};

/* DisplayList: Joint_0x54C0 @ 0x54C0 (912 bytes, 114 cmds) */
Gfx dPurinModel_Joint_0x54C0_DisplayList[114] = {
	#include <PurinModel/Joint_0x54C0.dl.inc.c>
};

/* DisplayList: Joint_0x5850 @ 0x5850 (128 bytes, 16 cmds) */
Gfx dPurinModel_Joint_0x5850_DisplayList[16] = {
	#include <PurinModel/Joint_0x5850.dl.inc.c>
};

/* DisplayList: Joint_0x58D0 @ 0x58D0 (168 bytes, 21 cmds) */
Gfx dPurinModel_Joint_0x58D0_DisplayList[21] = {
	#include <PurinModel/Joint_0x58D0.dl.inc.c>
};

/* DisplayList: Joint_0x5978 @ 0x5978 (128 bytes, 16 cmds) */
Gfx dPurinModel_Joint_0x5978_DisplayList[16] = {
	#include <PurinModel/Joint_0x5978.dl.inc.c>
};

/* DisplayList: Joint_0x59F8 @ 0x59F8 (168 bytes, 21 cmds) */
Gfx dPurinModel_Joint_0x59F8_DisplayList[21] = {
	#include <PurinModel/Joint_0x59F8.dl.inc.c>
};

/* DisplayList: Joint_0x5AA0 @ 0x5AA0 (136 bytes, 17 cmds) */
Gfx dPurinModel_Joint_0x5AA0_DisplayList[17] = {
	#include <PurinModel/Joint_0x5AA0.dl.inc.c>
};

/* DisplayList: Joint_0x5B28 @ 0x5B28 (136 bytes, 17 cmds) */
Gfx dPurinModel_Joint_0x5B28_DisplayList[17] = {
	#include <PurinModel/Joint_0x5B28.dl.inc.c>
};

/* DObjDesc: JointTree_0x5BB0 @ 0x5BB0 (26 entries) */
DObjDesc dPurinModel_JointTree_0x5BB0[] = {
	{ 0, (void*)0x00000000, { 0.0f, 182.09222412109375f, -3.999999989900971e-06f }, { -0.785398006439209f, 1.1344640254974365f, -0.5934119820594788f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 58.49999237060547f, 39.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinModel_Joint_0x54C0_DisplayList, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.80000305175781f, -30.0f }, { 0.0f, -1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x5850_DisplayList, { 0.0f, 0.0f, 0.0f }, { 1.3153259754180908f, -0.7221639752388f, -1.1007790565490723f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x58D0_DisplayList, { 72.0719985961914f, 1.4000000192027073e-05f, -1.5999999959603883e-05f }, { 0.0f, 0.0f, -0.013074999675154686f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.79998016357422f, -30.0f }, { 0.0f, 1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x5978_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.3026680052280426f, 1.3106609582901f, -0.29833701252937317f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x59F8_DisplayList, { 72.0719985961914f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.16277199983596802f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 45.629737854003906f, -0.135670006275177f, -1.5999999959603883e-05f }, { 0.7883700132369995f, -1.570796012878418f, 0.7883700132369995f }, { 1.0f, 1.0399980545043945f, 1.0000009536743164f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -2.0617239475250244f, -0.5303580164909363f, -0.92569899559021f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x5AA0_DisplayList, { 9.999999974752427e-07f, 0.0f, 7.000000096013537e-06f }, { -4.259256839752197f, 0.833840012550354f, -4.074271202087402f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 2.7891058921813965f, 0.7046949863433838f, -0.8597949743270874f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.013935999944806099f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x5B28_DisplayList, { 0.0f, 0.0f, 0.0f }, { -2.490288019180298f, -0.4021880030632019f, 2.368514060974121f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x6028 to 0x6948 (2336 bytes) */
PAD(8);

/* gap sub-block @ 0x6030 (was gap+0x8, 80 bytes) */
Vtx dPurinModel_gap_0x6028_sub_0x8[5] = {
	#include <PurinModel/gap_0x6028_sub_0x8.vtx.inc.c>
};

/* gap sub-block @ 0x6080 (was gap+0x58, 336 bytes) */
Vtx dPurinModel_gap_0x6028_sub_0x58[21] = {
	#include <PurinModel/gap_0x6028_sub_0x58.vtx.inc.c>
};

/* Vtx: gap_0x6028_sub_0x1A8 @ 0x61D0 (32 vertices) */
Vtx dPurinModel_gap_0x6028_sub_0x1A8[32] = {
	#include <PurinModel/gap_0x6028_sub_0x1A8.vtx.inc.c>
};

/* gap sub-block @ 0x63D0 (was gap+0x3A8, 80 bytes) */
Vtx dPurinModel_gap_0x6028_sub_0x3A8[5] = {
	#include <PurinModel/gap_0x6028_sub_0x3A8.vtx.inc.c>
};

/* gap sub-block @ 0x6420 (was gap+0x3F8, 32 bytes) */
Vtx dPurinModel_gap_0x6028_sub_0x3F8[2] = {
	#include <PurinModel/gap_0x6028_sub_0x3F8.vtx.inc.c>
};

/* gap sub-block @ 0x6440 (was gap+0x418, 144 bytes) */
Vtx dPurinModel_gap_0x6028_sub_0x418[9] = {
	#include <PurinModel/gap_0x6028_sub_0x418.vtx.inc.c>
};

/* Gfx DL: gap_0x6028_sub_0x4A8 @ 0x64D0 (90 cmds) */
Gfx dPurinModel_gap_0x6028_sub_0x4A8[90] = {
	#include <PurinModel/gap_0x6028_sub_0x4A8.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x67A8 (was gap+0x780, 40 bytes) */
u16 dPurinModel_gap_0x6028_sub_0x780[20] = {
	#include <PurinModel/gap_0x6028_sub_0x780.palette.inc.c>
};

/* gap sub-block @ 0x67D0 (was gap+0x7A8, 136 bytes) */
/* @tex fmt=CI4 dim=49x30 */
u8 dPurinModel_Tex_0x67D0[136] = {
	#include <PurinModel/Tex_0x67D0.tex.inc.c>
};

/* gap sub-block @ 0x6858 (was gap+0x830, 40 bytes) */
u16 dPurinModel_gap_0x6028_sub_0x830[20] = {
	#include <PurinModel/gap_0x6028_sub_0x830.palette.inc.c>
};

/* gap sub-block @ 0x6880 (was gap+0x858, 40 bytes) */
u16 dPurinModel_gap_0x6028_sub_0x858[20] = {
	#include <PurinModel/gap_0x6028_sub_0x858.palette.inc.c>
};

/* gap sub-block @ 0x68A8 (was gap+0x880, 40 bytes) */
u16 dPurinModel_gap_0x6028_sub_0x880[20] = {
	#include <PurinModel/gap_0x6028_sub_0x880.palette.inc.c>
};

/* gap sub-block @ 0x68D0 (was gap+0x8A8, 40 bytes) */
u16 dPurinModel_gap_0x6028_sub_0x8A8[20] = {
	#include <PurinModel/gap_0x6028_sub_0x8A8.palette.inc.c>
};

/* gap sub-block @ 0x68F8 (was gap+0x8D0, 40 bytes) */
u16 dPurinModel_gap_0x6028_sub_0x8D0[20] = {
	#include <PurinModel/gap_0x6028_sub_0x8D0.palette.inc.c>
};

/* gap sub-block @ 0x6920 (was gap+0x8F8, 40 bytes) */
u16 dPurinModel_gap_0x6028_sub_0x8F8[20] = {
	#include <PurinModel/gap_0x6028_sub_0x8F8.palette.inc.c>
};

/* Palette: Lut_0x6948 @ 0x6948 (16 colors RGBA5551) */
u16 dPurinModel_Lut_0x6948_palette[16] = {
	#include <PurinModel/Lut_0x6948.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x6970 (3296 bytes) */
/* Texture: 0x6970 (CI4 — trailing 0xC8 bytes split as palette frames) */
u8 dPurinModel_Tex_0x6970[3096] = {
	#include <PurinModel/Tex_0x6970.tex.inc.c>
};

u16 dPurinModel_palette_0x7588[20] = {
	#include <PurinModel/palette_0x7588.palette.inc.c>
};

u16 dPurinModel_palette_0x75B0[20] = {
	#include <PurinModel/palette_0x75B0.palette.inc.c>
};

u16 dPurinModel_palette_0x75D8[20] = {
	#include <PurinModel/palette_0x75D8.palette.inc.c>
};

u16 dPurinModel_palette_0x7600[20] = {
	#include <PurinModel/palette_0x7600.palette.inc.c>
};

u16 dPurinModel_palette_0x7628[20] = {
	#include <PurinModel/palette_0x7628.palette.inc.c>
};

/* Texture data @ 0x7650 (1080 bytes) */
/* @tex fmt=CI4 dim=123x112 */
u8 dPurinModel_Tex_0x7650[1080] = {
	#include <PurinModel/Tex_0x7650.tex.inc.c>
};

/* Texture data for sprite Stock */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Stock (8(16)x10 ci4) */
u8 dPurinModel_Stock_tex[88] = {
	#include <PurinModel/Stock.ci4.inc.c>
};

/* Palette: @ 0x7AE0 (16 colors RGBA5551) */
u16 dPurinModel_palette_0x7AE0[16] = {
	#include <PurinModel/palette_0x7AE0.palette.inc.c>
};

/* "Stock LUTs" — palette frames cycled by FTSprites.stock_luts (PurinMain).
 * dPurinMain_stock_luts[5] targets palette_0x7AE0, gap_0x7B00_sub_0x{8,30,58,80}.
 * Each frame is 16 colors RGBA5551 (32 bytes); first 4 trail an 8-byte pad,
 * last has none. The standalone gap_0x7B00[8] is the trailing pad of palette_0x7AE0. */
u16 dPurinModel_gap_0x7B00[4] = {
	#include <PurinModel/gap_0x7B00.palette.inc.c>
};

u16 dPurinModel_gap_0x7B00_sub_0x8[20] = {
	#include <PurinModel/gap_0x7B00_sub_0x8.palette.inc.c>
};

u16 dPurinModel_gap_0x7B00_sub_0x30[20] = {
	#include <PurinModel/gap_0x7B00_sub_0x30.palette.inc.c>
};

u16 dPurinModel_gap_0x7B00_sub_0x58[20] = {
	#include <PurinModel/gap_0x7B00_sub_0x58.palette.inc.c>
};

u16 dPurinModel_gap_0x7B00_sub_0x80[16] = {
	#include <PurinModel/gap_0x7B00_sub_0x80.palette.inc.c>
};

/* Sprite: Stock */

/* Sprite: Stock (8x10 ci4) */

Bitmap dPurinModel_Stock_bitmaps[] = {
	{ 8, 16, 0, 0, dPurinModel_Stock_tex, 10, 0 },
};

Sprite dPurinModel_Stock = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dPurinModel_palette_0x7AE0,
	0, 1,
	1, 36,
	10, 10,
	2, 0,
	(Bitmap*)dPurinModel_Stock_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: FTEmblem */

Gfx dPurinModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (24(32)x24 i4) */
u8 dPurinModel_FTEmblem_tex[384] = {
	#include <PurinModel/FTEmblem.i4.inc.c>
};

Bitmap dPurinModel_FTEmblem_bitmaps[] = {
	{ 24, 32, 0, 0, dPurinModel_FTEmblem_tex, 24, 0 },
};

/* Sprite: FTEmblem (24x24 i4) */
Sprite dPurinModel_FTEmblem = {
	0, 0,
	24, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	4, 0,
	(Bitmap*)dPurinModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

