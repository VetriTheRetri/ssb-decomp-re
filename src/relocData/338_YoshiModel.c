/* relocData file 338: YoshiModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>
extern u8 dYoshiModel_gap_0x38F4_sub_0x708[];

extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1410[];
extern AObjEvent32 *dYoshiModel_gap_0x38F4_sub_0x6E8[];
extern AObjEvent32 *dYoshiModel_gap_0x6E70_sub_0x13BC[];
extern AObjEvent32 *dYoshiModel_gap_0x6E70_sub_0x6A4[];
extern MObjSub *dYoshiModel_gap_0x6E70_sub_0x9A8[];
extern u32 dYoshiModel_gap_0x38F4_sub_0x16C[];
extern u32 dYoshiModel_gap_0x38F4_sub_0x1A4[];
extern u32 dYoshiModel_gap_0x38F4_sub_0x1DC[];
extern u32 dYoshiModel_gap_0x38F4_sub_0x54[];
extern MObjSub dYoshiModel_gap_0x38F4_sub_0x8BC[];
extern MObjSub dYoshiModel_gap_0x38F4_sub_0x934[];
extern MObjSub dYoshiModel_gap_0x38F4_sub_0x9AC[];
extern MObjSub dYoshiModel_gap_0x38F4_sub_0xA24[];
extern MObjSub dYoshiModel_gap_0x38F4_sub_0xA9C[];
extern u32 dYoshiModel_gap_0x38F4_sub_0xE0[];
extern u32 dYoshiModel_gap_0x6E70_sub_0x12A4[];
extern u32 dYoshiModel_gap_0x6E70_sub_0x12DC[];
extern u32 dYoshiModel_gap_0x6E70_sub_0x1314[];
extern u32 dYoshiModel_gap_0x6E70_sub_0x134C[];
extern u32 dYoshiModel_gap_0x6E70_sub_0x1384[];
extern u32 dYoshiModel_gap_0x6E70_sub_0x168[];
extern u32 dYoshiModel_gap_0x6E70_sub_0x1A0[];
extern u32 dYoshiModel_gap_0x6E70_sub_0x1D8[];
extern u32 dYoshiModel_gap_0x6E70_sub_0x50[];
extern MObjSub dYoshiModel_gap_0x6E70_sub_0x750[];
extern MObjSub dYoshiModel_gap_0x6E70_sub_0x7C8[];
extern MObjSub dYoshiModel_gap_0x6E70_sub_0x840[];
extern MObjSub dYoshiModel_gap_0x6E70_sub_0x8B8[];
extern MObjSub dYoshiModel_gap_0x6E70_sub_0x930[];
extern u32 dYoshiModel_gap_0x6E70_sub_0xDC[];
extern u8 dYoshiModel_Joint_0x0080_post[];
extern u8 dYoshiModel_Tex_0x9518[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x13FC[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1408[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1428[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1430[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1438[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1440[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1448[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1450[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1458[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1460[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1468[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1470[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x147C[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1484[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x148C[];
extern MObjSub *dYoshiModel_gap_0x38F4_sub_0x1498[];

/* Forward DObjDesc chain-target decls for fixRelocChain.py */
/* commonparts[0].p_mobjsubs target — per-joint MObjSub** table indexed
 * by joint_id (matches dYoshiModel_JointTree's joint count). Each
 * non-NULL slot points to a NULL-terminated MObjSub* list living
 * inside Joint_0x0080_post (or, for joint 28, inside Tex_0x9518).
 * Engine consumes via lbCommonAddMObjForFighterPartsDObj —
 * commonparts->p_mobjsubs[joint_id]. The 0x00..0x80 range was carved
 * into 6 sub-blocks by the splat splitter at chain landing points;
 * preserved here for matching but typed as MObjSub** slots. */

/* slots [0..1] (joints 0..1) */
MObjSub *dYoshiModel_gap_0x0000[2] = {
	NULL,                                                          /* joint 0 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xD60),      /* joint 1 */
};

/* slots [2..5] (joints 2..5) */
MObjSub *dYoshiModel_gap_0x0000_sub_0x8[4] = {
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xD74),      /* joint 2 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xD7C),      /* joint 3 */
	NULL,                                                          /* joint 4 */
	NULL,                                                          /* joint 5 */
};

/* slots [6..7] (joints 6..7) */
MObjSub *dYoshiModel_gap_0x0000_sub_0x18[2] = {
	NULL,                                                          /* joint 6 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xD94),      /* joint 7 */
};

/* slots [8..15] (joints 8..15) */
MObjSub *dYoshiModel_Joint_0x0020_post[8] = {
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xD9C),      /* joint 8 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xDA4),      /* joint 9 */
	NULL,                                                          /* joint 10 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xDAC),      /* joint 11 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xDB4),      /* joint 12 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xDBC),      /* joint 13 */
	NULL,                                                          /* joint 14 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xDC4),      /* joint 15 */
};

/* slots [16..23] (joints 16..23) */
MObjSub *dYoshiModel_Joint_0x0040_post[8] = {
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xDCC),      /* joint 16 */
	NULL,                                                          /* joint 17 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xDD4),      /* joint 18 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xDDC),      /* joint 19 */
	NULL,                                                          /* joint 20 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xDE8),      /* joint 21 */
	NULL,                                                          /* joint 22 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xDF0),      /* joint 23 */
};

/* slots [24..31] (joints 24..31) */
MObjSub *dYoshiModel_Joint_0x0060_post[8] = {
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xDF8),      /* joint 24 */
	NULL,                                                          /* joint 25 */
	(MObjSub *)((u8 *)dYoshiModel_Joint_0x0080_post + 0xE04),      /* joint 26 */
	NULL,                                                          /* joint 27 */
	(MObjSub *)((u8 *)dYoshiModel_Tex_0x9518 + 0x6B8),             /* joint 28 (lives in Tex_0x9518) */
	NULL,                                                          /* joint 29 */
	NULL,                                                          /* joint 30 */
	NULL,                                                          /* joint 31 */
};

/* Raw data from file offset 0x0080 to 0x0E90 (3600 bytes) */
u8 dYoshiModel_Joint_0x0080_post[3600] = {
	#include <YoshiModel/Joint_0x0080_post.data.inc.c>
};

/* Vtx: Vtx_0x0E90 @ 0xE90 (5 vertices) */
Vtx dYoshiModel_Vtx_0x0E90_Vtx[5] = {
	#include <YoshiModel/Vtx_0x0E90.vtx.inc.c>
};

/* Vtx: Vtx_0x0EE0 @ 0xEE0 (4 vertices) */
Vtx dYoshiModel_Vtx_0x0EE0_Vtx[4] = {
	#include <YoshiModel/Vtx_0x0EE0.vtx.inc.c>
};

/* Vtx: Vtx_0x0F20_Vtx @ 0xF20 (6 vertices) */
Vtx dYoshiModel_Vtx_0x0F20_Vtx[6] = {
	#include <YoshiModel/Vtx_0x0F20.vtx.inc.c>
};

/* Vtx: Vtx_0x0F80_Vtx @ 0xF80 (8 vertices) */
Vtx dYoshiModel_Vtx_0x0F80_Vtx[8] = {
	#include <YoshiModel/Vtx_0x0F80.vtx.inc.c>
};

/* Vtx: Vtx_0x1000 @ 0x1000 (2 vertices) */
Vtx dYoshiModel_Vtx_0x1000_Vtx[2] = {
	#include <YoshiModel/Vtx_0x1000.vtx.inc.c>
};

/* Vtx: Vtx_0x1020_Vtx @ 0x1020 (3 vertices) */
Vtx dYoshiModel_Vtx_0x1020_Vtx[3] = {
	#include <YoshiModel/Vtx_0x1020.vtx.inc.c>
};

/* Vtx: Vtx_0x1050 @ 0x1050 (9 vertices) */
Vtx dYoshiModel_Vtx_0x1050_Vtx[9] = {
	#include <YoshiModel/Vtx_0x1050.vtx.inc.c>
};

/* Vtx: Vtx_0x10E0 @ 0x10E0 (2 vertices) */
Vtx dYoshiModel_Vtx_0x10E0_Vtx[2] = {
	#include <YoshiModel/Vtx_0x10E0.vtx.inc.c>
};

/* Vtx: Vtx_0x1100 @ 0x1100 (5 vertices) */
Vtx dYoshiModel_Vtx_0x1100_Vtx[5] = {
	#include <YoshiModel/Vtx_0x1100.vtx.inc.c>
};

/* Vtx: Vtx_0x1150 @ 0x1150 (14 vertices) */
Vtx dYoshiModel_Vtx_0x1150_Vtx[14] = {
	#include <YoshiModel/Vtx_0x1150.vtx.inc.c>
};

/* Vtx: Vtx_0x1230_Vtx @ 0x1230 (28 vertices) */
Vtx dYoshiModel_Vtx_0x1230_Vtx[28] = {
	#include <YoshiModel/Vtx_0x1230.vtx.inc.c>
};

/* Vtx: Vtx_0x13F0 @ 0x13F0 (6 vertices) */
Vtx dYoshiModel_Vtx_0x13F0_Vtx[6] = {
	#include <YoshiModel/Vtx_0x13F0.vtx.inc.c>
};

/* Vtx: Vtx_0x1450 @ 0x1450 (6 vertices) */
Vtx dYoshiModel_Vtx_0x1450_Vtx[6] = {
	#include <YoshiModel/Vtx_0x1450.vtx.inc.c>
};

/* Vtx: Vtx_0x14B0_Vtx @ 0x14B0 (24 vertices) */
Vtx dYoshiModel_Vtx_0x14B0_Vtx[24] = {
	#include <YoshiModel/Vtx_0x14B0.vtx.inc.c>
};

/* Vtx: Vtx_0x1630 @ 0x1630 (4 vertices) */
Vtx dYoshiModel_Vtx_0x1630_Vtx[4] = {
	#include <YoshiModel/Vtx_0x1630.vtx.inc.c>
};

/* Vtx: Vtx_0x1670 @ 0x1670 (7 vertices) */
Vtx dYoshiModel_Vtx_0x1670_Vtx[7] = {
	#include <YoshiModel/Vtx_0x1670.vtx.inc.c>
};

/* Vtx: Vtx_0x16E0 @ 0x16E0 (3 vertices) */
Vtx dYoshiModel_Vtx_0x16E0_Vtx[3] = {
	#include <YoshiModel/Vtx_0x16E0.vtx.inc.c>
};

/* Vtx: Vtx_0x1710 @ 0x1710 (7 vertices) */
Vtx dYoshiModel_Vtx_0x1710_Vtx[7] = {
	#include <YoshiModel/Vtx_0x1710.vtx.inc.c>
};

/* Vtx: Vtx_0x1780 @ 0x1780 (7 vertices) */
Vtx dYoshiModel_Vtx_0x1780_Vtx[7] = {
	#include <YoshiModel/Vtx_0x1780.vtx.inc.c>
};

/* Vtx: Vtx_0x17F0 @ 0x17F0 (3 vertices) */
Vtx dYoshiModel_Vtx_0x17F0_Vtx[3] = {
	#include <YoshiModel/Vtx_0x17F0.vtx.inc.c>
};

/* Vtx: Vtx_0x1820 @ 0x1820 (7 vertices) */
Vtx dYoshiModel_Vtx_0x1820_Vtx[7] = {
	#include <YoshiModel/Vtx_0x1820.vtx.inc.c>
};

/* Vtx: Vtx_0x1890 @ 0x1890 (2 vertices) */
Vtx dYoshiModel_Vtx_0x1890_Vtx[2] = {
	#include <YoshiModel/Vtx_0x1890.vtx.inc.c>
};

/* Vtx: Vtx_0x18B0 @ 0x18B0 (1 vertices) */
Vtx dYoshiModel_Vtx_0x18B0_Vtx[1] = {
	#include <YoshiModel/Vtx_0x18B0.vtx.inc.c>
};

/* Vtx: Vtx_0x18C0 @ 0x18C0 (1 vertices) */
Vtx dYoshiModel_Vtx_0x18C0_Vtx[1] = {
	#include <YoshiModel/Vtx_0x18C0.vtx.inc.c>
};

/* Vtx: Vtx_0x18D0 @ 0x18D0 (2 vertices) */
Vtx dYoshiModel_Vtx_0x18D0_Vtx[2] = {
	#include <YoshiModel/Vtx_0x18D0.vtx.inc.c>
};

/* Vtx: Vtx_0x18F0 @ 0x18F0 (1 vertices) */
Vtx dYoshiModel_Vtx_0x18F0_Vtx[1] = {
	#include <YoshiModel/Vtx_0x18F0.vtx.inc.c>
};

/* Vtx: Vtx_0x1900 @ 0x1900 (14 vertices) */
Vtx dYoshiModel_Vtx_0x1900_Vtx[14] = {
	#include <YoshiModel/Vtx_0x1900.vtx.inc.c>
};

/* Vtx: Vtx_0x19E0 @ 0x19E0 (16 vertices) */
Vtx dYoshiModel_Vtx_0x19E0_Vtx[16] = {
	#include <YoshiModel/Vtx_0x19E0.vtx.inc.c>
};

/* Vtx: Vtx_0x1AE0 @ 0x1AE0 (6 vertices) */
Vtx dYoshiModel_Vtx_0x1AE0_Vtx[6] = {
	#include <YoshiModel/Vtx_0x1AE0.vtx.inc.c>
};

/* Vtx: Vtx_0x1B40 @ 0x1B40 (22 vertices) */
Vtx dYoshiModel_Vtx_0x1B40_Vtx[22] = {
	#include <YoshiModel/Vtx_0x1B40.vtx.inc.c>
};

/* Vtx: Vtx_0x1CA0 @ 0x1CA0 (14 vertices) */
Vtx dYoshiModel_Vtx_0x1CA0_Vtx[14] = {
	#include <YoshiModel/Vtx_0x1CA0.vtx.inc.c>
};

/* Vtx: Vtx_0x1D80 @ 0x1D80 (16 vertices) */
Vtx dYoshiModel_Vtx_0x1D80_Vtx[16] = {
	#include <YoshiModel/Vtx_0x1D80.vtx.inc.c>
};

/* Vtx: Vtx_0x1E80 @ 0x1E80 (6 vertices) */
Vtx dYoshiModel_Vtx_0x1E80_Vtx[6] = {
	#include <YoshiModel/Vtx_0x1E80.vtx.inc.c>
};

/* Vtx: Vtx_0x1EE0 @ 0x1EE0 (23 vertices) */
Vtx dYoshiModel_Vtx_0x1EE0_Vtx[23] = {
	#include <YoshiModel/Vtx_0x1EE0.vtx.inc.c>
};

/* DisplayList: Joint_0x2050 @ 0x2050 (504 bytes, 63 cmds) */
Gfx dYoshiModel_Joint_0x2050_DisplayList[63] = {
	#include <YoshiModel/Joint_0x2050.dl.inc.c>
};

/* Gfx DL: Joint_0x2050_post @ 0x2248 (42 cmds) */
Gfx dYoshiModel_Joint_0x2050_post[42] = {
	#include <YoshiModel/Joint_0x2050_post.dl.inc.c>
};

/* DisplayList: Joint_0x2398 @ 0x2398 (896 bytes, 112 cmds) */
Gfx dYoshiModel_Joint_0x2398_DisplayList[112] = {
	#include <YoshiModel/Joint_0x2398.dl.inc.c>
};

/* DisplayList: Joint_0x2718 @ 0x2718 (232 bytes, 29 cmds) */
Gfx dYoshiModel_Joint_0x2718_DisplayList[29] = {
	#include <YoshiModel/Joint_0x2718.dl.inc.c>
};

/* DisplayList: Joint_0x2800 @ 0x2800 (272 bytes, 34 cmds) */
Gfx dYoshiModel_Joint_0x2800_DisplayList[34] = {
	#include <YoshiModel/Joint_0x2800.dl.inc.c>
};

/* DisplayList: Joint_0x2910 @ 0x2910 (120 bytes, 15 cmds) */
Gfx dYoshiModel_Joint_0x2910_DisplayList[15] = {
	#include <YoshiModel/Joint_0x2910.dl.inc.c>
};

/* DisplayList: Joint_0x2988 @ 0x2988 (128 bytes, 16 cmds) */
Gfx dYoshiModel_Joint_0x2988_DisplayList[16] = {
	#include <YoshiModel/Joint_0x2988.dl.inc.c>
};

/* DisplayList: Joint_0x2A08 @ 0x2A08 (168 bytes, 21 cmds) */
Gfx dYoshiModel_Joint_0x2A08_DisplayList[21] = {
	#include <YoshiModel/Joint_0x2A08.dl.inc.c>
};

/* DisplayList: Joint_0x2AB0 @ 0x2AB0 (120 bytes, 15 cmds) */
Gfx dYoshiModel_Joint_0x2AB0_DisplayList[15] = {
	#include <YoshiModel/Joint_0x2AB0.dl.inc.c>
};

/* DisplayList: Joint_0x2B28 @ 0x2B28 (128 bytes, 16 cmds) */
Gfx dYoshiModel_Joint_0x2B28_DisplayList[16] = {
	#include <YoshiModel/Joint_0x2B28.dl.inc.c>
};

/* DisplayList: Joint_0x2BA8 @ 0x2BA8 (168 bytes, 21 cmds) */
Gfx dYoshiModel_Joint_0x2BA8_DisplayList[21] = {
	#include <YoshiModel/Joint_0x2BA8.dl.inc.c>
};

/* Gfx DL: Joint_0x2BA8_post @ 0x2C50 (27 cmds) */
Gfx dYoshiModel_Joint_0x2BA8_post[27] = {
	#include <YoshiModel/Joint_0x2BA8_post.dl.inc.c>
};

/* DisplayList: Joint_0x2D28 @ 0x2D28 (168 bytes, 21 cmds) */
Gfx dYoshiModel_Joint_0x2D28_DisplayList[21] = {
	#include <YoshiModel/Joint_0x2D28.dl.inc.c>
};

/* DisplayList: Joint_0x2DD0 @ 0x2DD0 (168 bytes, 21 cmds) */
Gfx dYoshiModel_Joint_0x2DD0_DisplayList[21] = {
	#include <YoshiModel/Joint_0x2DD0.dl.inc.c>
};

/* DisplayList: Joint_0x2E78 @ 0x2E78 (216 bytes, 27 cmds) */
Gfx dYoshiModel_Joint_0x2E78_DisplayList[27] = {
	#include <YoshiModel/Joint_0x2E78.dl.inc.c>
};

/* DisplayList: Joint_0x2F50 @ 0x2F50 (120 bytes, 15 cmds) */
Gfx dYoshiModel_Joint_0x2F50_DisplayList[15] = {
	#include <YoshiModel/Joint_0x2F50.dl.inc.c>
};

/* DisplayList: Joint_0x2FC8 @ 0x2FC8 (168 bytes, 21 cmds) */
Gfx dYoshiModel_Joint_0x2FC8_DisplayList[21] = {
	#include <YoshiModel/Joint_0x2FC8.dl.inc.c>
};

/* DisplayList: Joint_0x3070 @ 0x3070 (216 bytes, 27 cmds) */
Gfx dYoshiModel_Joint_0x3070_DisplayList[27] = {
	#include <YoshiModel/Joint_0x3070.dl.inc.c>
};

/* DisplayList: Joint_0x3148 @ 0x3148 (120 bytes, 15 cmds) */
Gfx dYoshiModel_Joint_0x3148_DisplayList[15] = {
	#include <YoshiModel/Joint_0x3148.dl.inc.c>
};

/* Gfx DL: Joint_0x3148_post @ 0x31C0 (21 cmds) */
Gfx dYoshiModel_Joint_0x3148_post[21] = {
	#include <YoshiModel/Joint_0x3148_post.dl.inc.c>
};

/* Gfx DL: Joint_0x3148_post_post @ 0x3268 (20 cmds) */
Gfx dYoshiModel_Joint_0x3148_post_post[20] = {
	#include <YoshiModel/Joint_0x3148_post_post.dl.inc.c>
};

/* DObj.dls pre/post-matrix DL pairs @ 0x3308 (19 pairs, 152 bytes).
 * Each 2-slot { dls[0], dls[1] } is the target of one DObjDesc.dl in
 * dYoshiModel_JointTree below; dls[0] (when non-NULL) draws before
 * gcPrepDObjMatrix, dls[1] after. See ftDisplayMainDrawDefault case 1. */
Gfx *dYoshiModel_Joint_0x3148_post_post_post[38] = {
	NULL,                                       dYoshiModel_Joint_0x2050_DisplayList,
	dYoshiModel_Joint_0x3148_post,              dYoshiModel_Joint_0x2050_post,
	NULL,                                       dYoshiModel_Joint_0x2398_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2718_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2800_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2910_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2988_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2A08_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2AB0_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2B28_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2BA8_DisplayList,
	dYoshiModel_Joint_0x3148_post_post,         dYoshiModel_Joint_0x2BA8_post,
	NULL,                                       dYoshiModel_Joint_0x2D28_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2DD0_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2E78_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2F50_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x2FC8_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x3070_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x3148_DisplayList,
};

/* DObjDesc: JointTree @ 0x33A0 (31 entries) */
DObjDesc dYoshiModel_JointTree[] = {
	{ 0, (void*)0x00000000, { 0.0f, 168.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dYoshiModel_Joint_0x3148_post_post_post, { 0.0f, 0.0f, 0.0f }, { -0.00133500003721565f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)&dYoshiModel_Joint_0x3148_post_post_post[2], { 0.0f, 0.0f, 43.20000076293945f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)&dYoshiModel_Joint_0x3148_post_post_post[4], { 0.0f, 150.1874542236328f, 82.48522186279297f }, { 0.0015869999770075083f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)&dYoshiModel_Joint_0x3148_post_post_post[6], { 0.0f, 12.000017166137695f, 30.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)&dYoshiModel_Joint_0x3148_post_post_post[8], { 0.0f, 43.961997985839844f, 18.00503158569336f }, { 0.0005750000127591193f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 60.0f, 12.34529972076416f, 52.72035217285156f }, { -1.570796012878418f, -0.0065449997782707214f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)&dYoshiModel_Joint_0x3148_post_post_post[10], { 0.0f, 0.0f, 0.0f }, { -3.1415929794311523f, 3.1415929794311523f, 2.655714988708496f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)&dYoshiModel_Joint_0x3148_post_post_post[12], { 43.199981689453125f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.7103569507598877f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)&dYoshiModel_Joint_0x3148_post_post_post[14], { 43.199989318847656f, 1.1000000085914508e-05f, 1.1000000085914508e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -60.0f, 12.34529972076416f, 52.72035217285156f }, { -1.570796012878418f, -0.0065449997782707214f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)&dYoshiModel_Joint_0x3148_post_post_post[16], { 0.0f, 0.0f, 0.0f }, { -3.1415929794311523f, 3.1415929794311523f, 2.655714988708496f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)&dYoshiModel_Joint_0x3148_post_post_post[18], { 43.19999313354492f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.7103580236434937f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)&dYoshiModel_Joint_0x3148_post_post_post[20], { 43.20000076293945f, 2.099999983329326e-05f, 1.1000000085914508e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 0.0f, 39.17806625366211f, 7.000000096013537e-06f }, { -2.0943949222564697f, 3.1415929794311523f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)&dYoshiModel_Joint_0x3148_post_post_post[22], { 0.0f, 53.99999237060547f, -60.0f }, { 0.0065449997782707214f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)&dYoshiModel_Joint_0x3148_post_post_post[24], { 0.0f, 12.00000286102295f, -65.99998474121094f }, { 0.0015869999770075083f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 60.0f, -24.0000057220459f, 24.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)&dYoshiModel_Joint_0x3148_post_post_post[26], { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.393779993057251f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)&dYoshiModel_Joint_0x3148_post_post_post[28], { 55.20000457763672f, -7.000000096013537e-06f, 0.0f }, { 0.0f, 0.0f, 0.9752870202064514f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 82.60124969482422f, -4.999999873689376e-06f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)&dYoshiModel_Joint_0x3148_post_post_post[30], { 0.0f, 0.0f, 0.0f }, { 3.1415929794311523f, 0.0f, -0.5888599753379822f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -60.0f, -24.0000057220459f, 24.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)&dYoshiModel_Joint_0x3148_post_post_post[32], { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.393779993057251f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)&dYoshiModel_Joint_0x3148_post_post_post[34], { 55.20000457763672f, -7.000000096013537e-06f, 0.0f }, { 0.0f, 0.0f, 0.9752860069274902f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 82.60123443603516f, -3.999999989900971e-06f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)&dYoshiModel_Joint_0x3148_post_post_post[36], { 9.999999974752427e-07f, 0.0f, 0.0f }, { 3.1415929794311523f, 0.0f, -0.5888599753379822f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -168.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 2.0961795183637217e-30f, 2.1085062223241845e-30f, 2.157810216979594e-30f }, { 0.0f, 0.0f, 0.0f }, { 2.170137109019153e-30f, 2.1824632487423273e-30f, 2.20711534010958e-30f } },
	{ 0, (void *)dYoshiModel_gap_0x38F4_sub_0x708, { 2.231767619555929e-30f, 2.2564197109231817e-30f, 0.0f }, { 2.268745850646356e-30f, 2.293397942013609e-30f, 0.0f }, { 2.3057240817367833e-30f, 2.330376173104036e-30f, 0.0f } },
};

/* Raw data from file offset 0x38F4 to 0x4D98 (5284 bytes) */
/* gap sub-block @ 0x38F4 (was gap+0x0, 28 bytes) */
u8 dYoshiModel_gap_0x38F4[28] = {
	#include <YoshiModel/gap_0x38F4.data.inc.c>
};

/* gap sub-block @ 0x3910 (was gap+0x1C, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x1C[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x1C.data.inc.c>
};

/* gap sub-block @ 0x3948 (was gap+0x54, 140 bytes) */
u32 dYoshiModel_gap_0x38F4_sub_0x54[35] = {
	aobjEvent32SetValAfter(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x41400000,  /* 12.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x41500000,  /* 13.0f */
	aobjEvent32Wait(46),
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41000000,  /* 8.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41100000,  /* 9.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41200000,  /* 10.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x41300000,  /* 11.0f */
	aobjEvent32Wait(43),
	aobjEvent32End(),
};

/* gap sub-block @ 0x39D4 (was gap+0xE0, 140 bytes) */
u32 dYoshiModel_gap_0x38F4_sub_0xE0[35] = {
	aobjEvent32SetValAfter(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x41400000,  /* 12.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x41500000,  /* 13.0f */
	aobjEvent32Wait(46),
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41000000,  /* 8.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41100000,  /* 9.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41200000,  /* 10.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x41300000,  /* 11.0f */
	aobjEvent32Wait(43),
	aobjEvent32End(),
};

/* gap sub-block @ 0x3A60 (was gap+0x16C, 56 bytes) */
u32 dYoshiModel_gap_0x38F4_sub_0x16C[14] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x40FF15FF,  /* 7.971435070037842f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF2963FF,  /* -2.2515874069109466e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x00F4FFFF,  /* 2.2499695157409383e-38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFFF00FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF84C6FF,  /* nanf */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x3910DEFF,  /* 0.00013815982674714178f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x3A98 (was gap+0x1A4, 56 bytes) */
u32 dYoshiModel_gap_0x38F4_sub_0x1A4[14] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x40FF15FF,  /* 7.971435070037842f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF2963FF,  /* -2.2515874069109466e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x00F4FFFF,  /* 2.2499695157409383e-38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFFF00FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF84C6FF,  /* nanf */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x3910DEFF,  /* 0.00013815982674714178f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x3AD0 (was gap+0x1DC, 56 bytes) */
u32 dYoshiModel_gap_0x38F4_sub_0x1DC[14] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x3B08 (was gap+0x214, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x214[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x214.data.inc.c>
};

/* gap sub-block @ 0x3B40 (was gap+0x24C, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x24C[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x24C.data.inc.c>
};

/* gap sub-block @ 0x3B78 (was gap+0x284, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x284[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x284.data.inc.c>
};

/* gap sub-block @ 0x3BB0 (was gap+0x2BC, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x2BC[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x2BC.data.inc.c>
};

/* gap sub-block @ 0x3BE8 (was gap+0x2F4, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x2F4[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x2F4.data.inc.c>
};

/* gap sub-block @ 0x3C20 (was gap+0x32C, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x32C[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x32C.data.inc.c>
};

/* gap sub-block @ 0x3C58 (was gap+0x364, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x364[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x364.data.inc.c>
};

/* gap sub-block @ 0x3C90 (was gap+0x39C, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x39C[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x39C.data.inc.c>
};

/* gap sub-block @ 0x3CC8 (was gap+0x3D4, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x3D4[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x3D4.data.inc.c>
};

/* gap sub-block @ 0x3D00 (was gap+0x40C, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x40C[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x40C.data.inc.c>
};

/* gap sub-block @ 0x3D38 (was gap+0x444, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x444[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x444.data.inc.c>
};

/* gap sub-block @ 0x3D70 (was gap+0x47C, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x47C[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x47C.data.inc.c>
};

/* gap sub-block @ 0x3DA8 (was gap+0x4B4, 80 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x4B4[80] = {
	#include <YoshiModel/gap_0x38F4_sub_0x4B4.data.inc.c>
};

/* gap sub-block @ 0x3DF8 (was gap+0x504, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x504[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x504.data.inc.c>
};

/* gap sub-block @ 0x3E30 (was gap+0x53C, 80 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x53C[80] = {
	#include <YoshiModel/gap_0x38F4_sub_0x53C.data.inc.c>
};

/* gap sub-block @ 0x3E80 (was gap+0x58C, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x58C[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x58C.data.inc.c>
};

/* gap sub-block @ 0x3EB8 (was gap+0x5C4, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x5C4[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x5C4.data.inc.c>
};

/* gap sub-block @ 0x3EF0 (was gap+0x5FC, 80 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x5FC[80] = {
	#include <YoshiModel/gap_0x38F4_sub_0x5FC.data.inc.c>
};

/* gap sub-block @ 0x3F40 (was gap+0x64C, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x64C[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x64C.data.inc.c>
};

/* gap sub-block @ 0x3F78 (was gap+0x684, 80 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x684[80] = {
	#include <YoshiModel/gap_0x38F4_sub_0x684.data.inc.c>
};

/* gap sub-block @ 0x3FC8 (was gap+0x6D4, 16 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x6D4[16] = {
	#include <YoshiModel/gap_0x38F4_sub_0x6D4.data.inc.c>
};

/* gap sub-block @ 0x3FD8 (was gap+0x6E4, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x6E4[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x6E4.data.inc.c>
};

/* gap sub-block @ 0x3FDC (was gap+0x6E8, 20 bytes) */
AObjEvent32 *dYoshiModel_gap_0x38F4_sub_0x6E8[5] = {
	(AObjEvent32 *)dYoshiModel_gap_0x38F4_sub_0x54,
	(AObjEvent32 *)dYoshiModel_gap_0x38F4_sub_0xE0,
	(AObjEvent32 *)dYoshiModel_gap_0x38F4_sub_0x16C,
	(AObjEvent32 *)dYoshiModel_gap_0x38F4_sub_0x1A4,
	(AObjEvent32 *)dYoshiModel_gap_0x38F4_sub_0x1DC,
};

/* gap sub-block @ 0x3FF0 (was gap+0x6FC, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x6FC[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x6FC.data.inc.c>
};

/* gap sub-block @ 0x3FF4 (was gap+0x700, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x700[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x700.data.inc.c>
};

/* gap sub-block @ 0x3FF8 (was gap+0x704, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x704[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x704.data.inc.c>
};

/* gap sub-block @ 0x3FFC (was gap+0x708, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x708[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x708.data.inc.c>
};

/* gap sub-block @ 0x4000 (was gap+0x70C, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x70C[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x70C.data.inc.c>
};

/* gap sub-block @ 0x4004 (was gap+0x710, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x710[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x710.data.inc.c>
};

/* gap sub-block @ 0x4008 (was gap+0x714, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x714[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x714.data.inc.c>
};

/* gap sub-block @ 0x400C (was gap+0x718, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x718[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x718.data.inc.c>
};

/* gap sub-block @ 0x4010 (was gap+0x71C, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x71C[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x71C.data.inc.c>
};

/* gap sub-block @ 0x4014 (was gap+0x720, 8 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x720[8] = {
	#include <YoshiModel/gap_0x38F4_sub_0x720.data.inc.c>
};

/* gap sub-block @ 0x401C (was gap+0x728, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x728[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x728.data.inc.c>
};

/* gap sub-block @ 0x4020 (was gap+0x72C, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x72C[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x72C.data.inc.c>
};

/* gap sub-block @ 0x4024 (was gap+0x730, 8 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x730[8] = {
	#include <YoshiModel/gap_0x38F4_sub_0x730.data.inc.c>
};

/* gap sub-block @ 0x402C (was gap+0x738, 4 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x738[4] = {
	#include <YoshiModel/gap_0x38F4_sub_0x738.data.inc.c>
};

/* gap sub-block @ 0x4030 (was gap+0x73C, 112 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x73C[28] = {
	NULL,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x13FC,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1408,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1410,
	NULL,
	NULL,
	NULL,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1428,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1430,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1438,
	NULL,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1440,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1448,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1450,
	NULL,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1458,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1460,
	NULL,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1468,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1470,
	NULL,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x147C,
	NULL,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1484,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x148C,
	NULL,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1498,
	NULL,
};

/* gap sub-block @ 0x40A0 (was gap+0x7AC, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x7AC[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x7AC.data.inc.c>
};

/* gap sub-block @ 0x40D8 (was gap+0x7E4, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x7E4[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x7E4.data.inc.c>
};

/* gap sub-block @ 0x4110 (was gap+0x81C, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x81C[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x81C.data.inc.c>
};

/* gap sub-block @ 0x4148 (was gap+0x854, 56 bytes) */
u8 dYoshiModel_gap_0x38F4_sub_0x854[56] = {
	#include <YoshiModel/gap_0x38F4_sub_0x854.data.inc.c>
};

/* u32 pointer array @ 0x4180 (6 entries) */
u32 dYoshiModel_gap_0x38F4_sub_0x88C[6] = {
	0x1061253C,
	0x1062250A,
	0x10632514,
	0x1064251E,
	0x10652528,
	0x10662532,
};

/* u32 pointer array @ 0x4198 (6 entries) */
u32 dYoshiModel_gap_0x38F4_sub_0x8A4[6] = {
	0x10672752,
	0x10682716,
	0x10692720,
	0x106A272A,
	0x106B2734,
	0x106D273E,
};

/* MObjSub @ 0x41B0 */
MObjSub dYoshiModel_gap_0x38F4_sub_0x8BC[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dYoshiModel_gap_0x38F4_sub_0x7AC,
		0x006A, 0x0009, 0x0010, 0x0010,
		0,
		0.5364000201225281f, 0.010400000028312206f,
		0.30000001192092896f, 0.4000000059604645f,
		0.5364000201225281f, 0.30000001192092896f,
		(void**)dYoshiModel_gap_0x38F4_sub_0x7E4,
		0x0005,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.5364000201225281f, 0.010400000028312206f,
		0.5364000201225281f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4228 */
MObjSub dYoshiModel_gap_0x38F4_sub_0x934[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dYoshiModel_gap_0x38F4_sub_0x81C,
		0x006A, 0x0009, 0x0010, 0x0010,
		0,
		0.5404009819030762f, 0.010400000028312206f,
		0.30000001192092896f, 0.4000000059604645f,
		0.5404009819030762f, 0.30000001192092896f,
		(void**)dYoshiModel_gap_0x38F4_sub_0x854,
		0x0005,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.5404009819030762f, 0.010400000028312206f,
		0.5404009819030762f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x42A0 */
MObjSub dYoshiModel_gap_0x38F4_sub_0x9AC[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4318 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xA24[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4390 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xA9C[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0140, 0x0007, 0x0008, 0x0008,
		0,
		0.7692000269889832f, 0.038600001484155655f,
		0.10000000149011612f, 0.15000000596046448f,
		0.7692000269889832f, 0.10000000149011612f,
		(void**)dYoshiModel_gap_0x38F4_sub_0x88C,
		0x0004,
		0x02, 0x00,
		0x0008,
		0x0008, 0x0008, 0x0008,
		0.7692000269889832f, 0.038600001484155655f,
		0.7692000269889832f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4408 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xB14[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4480 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xB8C[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x44F8 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xC04[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4570 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xC7C[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x45E8 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xCF4[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4660 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xD6C[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x46D8 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xDE4[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4750 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xE5C[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x47C8 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xED4[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4840 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xF4C[1] = {
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
		0x3000,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0x00, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x66, 0x00, 0xFF, 0x00 } },
		{ { 0x26, 0x00, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x48B8 */
MObjSub dYoshiModel_gap_0x38F4_sub_0xFC4[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4930 */
MObjSub dYoshiModel_gap_0x38F4_sub_0x103C[1] = {
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
		0x3000,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0x00, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x66, 0x00, 0xFF, 0x00 } },
		{ { 0x26, 0x00, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x49A8 */
MObjSub dYoshiModel_gap_0x38F4_sub_0x10B4[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4A20 */
MObjSub dYoshiModel_gap_0x38F4_sub_0x112C[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4A98 */
MObjSub dYoshiModel_gap_0x38F4_sub_0x11A4[1] = {
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
		0x3000,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0x00, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x66, 0x00, 0xFF, 0x00 } },
		{ { 0x26, 0x00, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4B10 */
MObjSub dYoshiModel_gap_0x38F4_sub_0x121C[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4B88 */
MObjSub dYoshiModel_gap_0x38F4_sub_0x1294[1] = {
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
		0x3000,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x00, 0x00, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0x66, 0x00, 0xFF, 0x00 } },
		{ { 0x26, 0x00, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4C00 */
MObjSub dYoshiModel_gap_0x38F4_sub_0x130C[1] = {
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
		{ { 0xFF, 0x29, 0x63, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4C78 */
MObjSub dYoshiModel_gap_0x38F4_sub_0x1384[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0037, 0x0006, 0x0010, 0x0008,
		0,
		0.32630598545074463f, -0.23539100587368011f,
		0.6929879784584045f, 0.5747820138931274f,
		0.32630598545074463f, 0.6929879784584045f,
		(void**)dYoshiModel_gap_0x38F4_sub_0x8A4,
		0x0004,
		0x02, 0x00,
		0x0008,
		0x0008, 0x0010, 0x0008,
		0.32630598545074463f, -0.23539100587368011f,
		0.32630598545074463f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x4CF0 (was gap+0x13FC, 12 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x13FC[3] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x130C,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1384,
	NULL,
};

/* gap sub-block @ 0x4CFC (was gap+0x1408, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1408[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xC7C,
	NULL,
};

/* gap sub-block @ 0x4D04 (was gap+0x1410, 24 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1410[6] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x8BC,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x934,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x9AC,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xA24,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xA9C,
	NULL,
};

/* gap sub-block @ 0x4D1C (was gap+0x1428, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1428[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xC04,
	NULL,
};

/* gap sub-block @ 0x4D24 (was gap+0x1430, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1430[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xB14,
	NULL,
};

/* gap sub-block @ 0x4D2C (was gap+0x1438, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1438[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xB8C,
	NULL,
};

/* gap sub-block @ 0x4D34 (was gap+0x1440, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1440[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xDE4,
	NULL,
};

/* gap sub-block @ 0x4D3C (was gap+0x1448, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1448[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xCF4,
	NULL,
};

/* gap sub-block @ 0x4D44 (was gap+0x1450, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1450[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xD6C,
	NULL,
};

/* gap sub-block @ 0x4D4C (was gap+0x1458, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1458[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xE5C,
	NULL,
};

/* gap sub-block @ 0x4D54 (was gap+0x1460, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1460[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xED4,
	NULL,
};

/* gap sub-block @ 0x4D5C (was gap+0x1468, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1468[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x10B4,
	NULL,
};

/* gap sub-block @ 0x4D64 (was gap+0x1470, 12 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1470[3] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xFC4,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x103C,
	NULL,
};

/* gap sub-block @ 0x4D70 (was gap+0x147C, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x147C[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0xF4C,
	NULL,
};

/* gap sub-block @ 0x4D78 (was gap+0x1484, 8 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1484[2] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x112C,
	NULL,
};

/* gap sub-block @ 0x4D80 (was gap+0x148C, 12 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x148C[3] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x121C,
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x1294,
	NULL,
};

/* gap sub-block @ 0x4D8C (was gap+0x1498, 12 bytes) */
MObjSub *dYoshiModel_gap_0x38F4_sub_0x1498[3] = {
	(MObjSub *)dYoshiModel_gap_0x38F4_sub_0x11A4,
	NULL,
	NULL,
};

/* Vtx: Vtx_0x4D98_Vtx @ 0x4D98 (6 vertices) */
Vtx dYoshiModel_Vtx_0x4D98_Vtx[6] = {
	#include <YoshiModel/Vtx_0x4D98.vtx.inc.c>
};

/* Vtx: Vtx_0x4DF8_Vtx @ 0x4DF8 (8 vertices) */
Vtx dYoshiModel_Vtx_0x4DF8_Vtx[8] = {
	#include <YoshiModel/Vtx_0x4DF8.vtx.inc.c>
};

/* Vtx: Vtx_0x4E78 @ 0x4E78 (1 vertices) */
Vtx dYoshiModel_Vtx_0x4E78_Vtx[1] = {
	#include <YoshiModel/Vtx_0x4E78.vtx.inc.c>
};

/* Vtx: Vtx_0x4E88_Vtx @ 0x4E88 (6 vertices) */
Vtx dYoshiModel_Vtx_0x4E88_Vtx[6] = {
	#include <YoshiModel/Vtx_0x4E88.vtx.inc.c>
};

/* Vtx: Vtx_0x4EE8 @ 0x4EE8 (3 vertices) */
Vtx dYoshiModel_Vtx_0x4EE8_Vtx[3] = {
	#include <YoshiModel/Vtx_0x4EE8.vtx.inc.c>
};

/* Vtx: Vtx_0x4F18 @ 0x4F18 (5 vertices) */
Vtx dYoshiModel_Vtx_0x4F18_Vtx[5] = {
	#include <YoshiModel/Vtx_0x4F18.vtx.inc.c>
};

/* Vtx: Vtx_0x4F68 @ 0x4F68 (9 vertices) */
Vtx dYoshiModel_Vtx_0x4F68_Vtx[9] = {
	#include <YoshiModel/Vtx_0x4F68.vtx.inc.c>
};

/* Vtx: Vtx_0x4FF8 @ 0x4FF8 (20 vertices) */
Vtx dYoshiModel_Vtx_0x4FF8_Vtx[20] = {
	#include <YoshiModel/Vtx_0x4FF8.vtx.inc.c>
};

/* Vtx: Vtx_0x5138 @ 0x5138 (6 vertices) */
Vtx dYoshiModel_Vtx_0x5138_Vtx[6] = {
	#include <YoshiModel/Vtx_0x5138.vtx.inc.c>
};

/* Vtx: Vtx_0x5198 @ 0x5198 (6 vertices) */
Vtx dYoshiModel_Vtx_0x5198_Vtx[6] = {
	#include <YoshiModel/Vtx_0x5198.vtx.inc.c>
};

/* Vtx: Vtx_0x51F8 @ 0x51F8 (3 vertices) */
Vtx dYoshiModel_Vtx_0x51F8_Vtx[3] = {
	#include <YoshiModel/Vtx_0x51F8.vtx.inc.c>
};

/* Vtx: Vtx_0x5228_Vtx @ 0x5228 (12 vertices) */
Vtx dYoshiModel_Vtx_0x5228_Vtx[12] = {
	#include <YoshiModel/Vtx_0x5228.vtx.inc.c>
};

/* Vtx: Vtx_0x52E8 @ 0x52E8 (5 vertices) */
Vtx dYoshiModel_Vtx_0x52E8_Vtx[5] = {
	#include <YoshiModel/Vtx_0x52E8.vtx.inc.c>
};

/* Vtx: Vtx_0x5338 @ 0x5338 (4 vertices) */
Vtx dYoshiModel_Vtx_0x5338_Vtx[4] = {
	#include <YoshiModel/Vtx_0x5338.vtx.inc.c>
};

/* Vtx: Vtx_0x5378 @ 0x5378 (5 vertices) */
Vtx dYoshiModel_Vtx_0x5378_Vtx[5] = {
	#include <YoshiModel/Vtx_0x5378.vtx.inc.c>
};

/* Vtx: Vtx_0x53C8 @ 0x53C8 (5 vertices) */
Vtx dYoshiModel_Vtx_0x53C8_Vtx[5] = {
	#include <YoshiModel/Vtx_0x53C8.vtx.inc.c>
};

/* Vtx: Vtx_0x5418 @ 0x5418 (4 vertices) */
Vtx dYoshiModel_Vtx_0x5418_Vtx[4] = {
	#include <YoshiModel/Vtx_0x5418.vtx.inc.c>
};

/* Vtx: Vtx_0x5458 @ 0x5458 (5 vertices) */
Vtx dYoshiModel_Vtx_0x5458_Vtx[5] = {
	#include <YoshiModel/Vtx_0x5458.vtx.inc.c>
};

/* Vtx: Vtx_0x54A8 @ 0x54A8 (3 vertices) */
Vtx dYoshiModel_Vtx_0x54A8_Vtx[3] = {
	#include <YoshiModel/Vtx_0x54A8.vtx.inc.c>
};

/* Vtx: Vtx_0x54D8 @ 0x54D8 (2 vertices) */
Vtx dYoshiModel_Vtx_0x54D8_Vtx[2] = {
	#include <YoshiModel/Vtx_0x54D8.vtx.inc.c>
};

/* Vtx: Vtx_0x54F8 @ 0x54F8 (1 vertices) */
Vtx dYoshiModel_Vtx_0x54F8_Vtx[1] = {
	#include <YoshiModel/Vtx_0x54F8.vtx.inc.c>
};

/* Vtx: Vtx_0x5508 @ 0x5508 (10 vertices) */
Vtx dYoshiModel_Vtx_0x5508_Vtx[10] = {
	#include <YoshiModel/Vtx_0x5508.vtx.inc.c>
};

/* Vtx: Vtx_0x55A8 @ 0x55A8 (12 vertices) */
Vtx dYoshiModel_Vtx_0x55A8_Vtx[12] = {
	#include <YoshiModel/Vtx_0x55A8.vtx.inc.c>
};

/* Vtx: Vtx_0x5668 @ 0x5668 (8 vertices) */
Vtx dYoshiModel_Vtx_0x5668_Vtx[8] = {
	#include <YoshiModel/Vtx_0x5668.vtx.inc.c>
};

/* Vtx: Vtx_0x56E8 @ 0x56E8 (14 vertices) */
Vtx dYoshiModel_Vtx_0x56E8_Vtx[14] = {
	#include <YoshiModel/Vtx_0x56E8.vtx.inc.c>
};

/* Vtx: Vtx_0x57C8 @ 0x57C8 (10 vertices) */
Vtx dYoshiModel_Vtx_0x57C8_Vtx[10] = {
	#include <YoshiModel/Vtx_0x57C8.vtx.inc.c>
};

/* Vtx: Vtx_0x5868 @ 0x5868 (12 vertices) */
Vtx dYoshiModel_Vtx_0x5868_Vtx[12] = {
	#include <YoshiModel/Vtx_0x5868.vtx.inc.c>
};

/* Vtx: Vtx_0x5928 @ 0x5928 (8 vertices) */
Vtx dYoshiModel_Vtx_0x5928_Vtx[8] = {
	#include <YoshiModel/Vtx_0x5928.vtx.inc.c>
};

/* Vtx: Vtx_0x59A8 @ 0x59A8 (14 vertices) */
Vtx dYoshiModel_Vtx_0x59A8_Vtx[14] = {
	#include <YoshiModel/Vtx_0x59A8.vtx.inc.c>
};

/* DisplayList: Joint_0x5A88 @ 0x5A88 (320 bytes, 40 cmds) */
Gfx dYoshiModel_Joint_0x5A88_DisplayList[40] = {
	#include <YoshiModel/Joint_0x5A88.dl.inc.c>
};

/* Gfx DL: Joint_0x5A88_post @ 0x5BC8 (38 cmds) */
Gfx dYoshiModel_Joint_0x5A88_post[38] = {
	#include <YoshiModel/Joint_0x5A88_post.dl.inc.c>
};

/* DisplayList: Joint_0x5CF8 @ 0x5CF8 (744 bytes, 93 cmds) */
Gfx dYoshiModel_Joint_0x5CF8_DisplayList[93] = {
	#include <YoshiModel/Joint_0x5CF8.dl.inc.c>
};

/* DisplayList: Joint_0x5FE0 @ 0x5FE0 (200 bytes, 25 cmds) */
Gfx dYoshiModel_Joint_0x5FE0_DisplayList[25] = {
	#include <YoshiModel/Joint_0x5FE0.dl.inc.c>
};

/* DisplayList: Joint_0x60A8 @ 0x60A8 (104 bytes, 13 cmds) */
Gfx dYoshiModel_Joint_0x60A8_DisplayList[13] = {
	#include <YoshiModel/Joint_0x60A8.dl.inc.c>
};

/* DisplayList: Joint_0x6110 @ 0x6110 (96 bytes, 12 cmds) */
Gfx dYoshiModel_Joint_0x6110_DisplayList[12] = {
	#include <YoshiModel/Joint_0x6110.dl.inc.c>
};

/* DisplayList: Joint_0x6170 @ 0x6170 (104 bytes, 13 cmds) */
Gfx dYoshiModel_Joint_0x6170_DisplayList[13] = {
	#include <YoshiModel/Joint_0x6170.dl.inc.c>
};

/* DisplayList: Joint_0x61D8 @ 0x61D8 (104 bytes, 13 cmds) */
Gfx dYoshiModel_Joint_0x61D8_DisplayList[13] = {
	#include <YoshiModel/Joint_0x61D8.dl.inc.c>
};

/* DisplayList: Joint_0x6240 @ 0x6240 (96 bytes, 12 cmds) */
Gfx dYoshiModel_Joint_0x6240_DisplayList[12] = {
	#include <YoshiModel/Joint_0x6240.dl.inc.c>
};

/* DisplayList: Joint_0x62A0 @ 0x62A0 (104 bytes, 13 cmds) */
Gfx dYoshiModel_Joint_0x62A0_DisplayList[13] = {
	#include <YoshiModel/Joint_0x62A0.dl.inc.c>
};

/* Gfx DL: Joint_0x62A0_post @ 0x6308 (23 cmds) */
Gfx dYoshiModel_Joint_0x62A0_post[23] = {
	#include <YoshiModel/Joint_0x62A0_post.dl.inc.c>
};

/* DisplayList: Joint_0x63C0 @ 0x63C0 (160 bytes, 20 cmds) */
Gfx dYoshiModel_Joint_0x63C0_DisplayList[20] = {
	#include <YoshiModel/Joint_0x63C0.dl.inc.c>
};

/* DisplayList: Joint_0x6460 @ 0x6460 (128 bytes, 16 cmds) */
Gfx dYoshiModel_Joint_0x6460_DisplayList[16] = {
	#include <YoshiModel/Joint_0x6460.dl.inc.c>
};

/* DisplayList: Joint_0x64E0 @ 0x64E0 (200 bytes, 25 cmds) */
Gfx dYoshiModel_Joint_0x64E0_DisplayList[25] = {
	#include <YoshiModel/Joint_0x64E0.dl.inc.c>
};

/* DisplayList: Joint_0x65A8 @ 0x65A8 (72 bytes, 9 cmds) */
Gfx dYoshiModel_Joint_0x65A8_DisplayList[9] = {
	#include <YoshiModel/Joint_0x65A8.dl.inc.c>
};

/* DisplayList: Joint_0x65F0 @ 0x65F0 (128 bytes, 16 cmds) */
Gfx dYoshiModel_Joint_0x65F0_DisplayList[16] = {
	#include <YoshiModel/Joint_0x65F0.dl.inc.c>
};

/* DisplayList: Joint_0x6670 @ 0x6670 (200 bytes, 25 cmds) */
Gfx dYoshiModel_Joint_0x6670_DisplayList[25] = {
	#include <YoshiModel/Joint_0x6670.dl.inc.c>
};

/* DisplayList: Joint_0x6738 @ 0x6738 (72 bytes, 9 cmds) */
Gfx dYoshiModel_Joint_0x6738_DisplayList[9] = {
	#include <YoshiModel/Joint_0x6738.dl.inc.c>
};

/* Gfx DL: Joint_0x6738_post @ 0x6780 (19 cmds) */
Gfx dYoshiModel_Joint_0x6738_post[19] = {
	#include <YoshiModel/Joint_0x6738_post.dl.inc.c>
};

/* Gfx DL: Joint_0x6738_post_post @ 0x6818 (20 cmds) */
Gfx dYoshiModel_Joint_0x6738_post_post[20] = {
	#include <YoshiModel/Joint_0x6738_post_post.dl.inc.c>
};

/* DObj.dls pre/post-matrix DL pairs @ 0x68B8 (18 pairs, 144 bytes).
 * Each 2-slot { dls[0], dls[1] } is the target of one DObjDesc.dl in
 * dYoshiModel_JointTree_0x6948 below; dls[0] (when non-NULL) draws
 * before gcPrepDObjMatrix, dls[1] after. See ftDisplayMainDrawDefault case 1. */
Gfx *dYoshiModel_Joint_0x6738_post_post_post[36] = {
	NULL,                                       dYoshiModel_Joint_0x5A88_DisplayList,
	dYoshiModel_Joint_0x6738_post_post,         dYoshiModel_Joint_0x5A88_post,
	NULL,                                       dYoshiModel_Joint_0x5CF8_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x5FE0_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x60A8_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x6110_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x6170_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x61D8_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x6240_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x62A0_DisplayList,
	dYoshiModel_Joint_0x6738_post,              dYoshiModel_Joint_0x62A0_post,
	NULL,                                       dYoshiModel_Joint_0x63C0_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x6460_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x64E0_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x65A8_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x65F0_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x6670_DisplayList,
	NULL,                                       dYoshiModel_Joint_0x6738_DisplayList,
};

/* DObjDesc: JointTree_0x6948 @ 0x6948 (30 entries) */
DObjDesc dYoshiModel_JointTree_0x6948[] = {
	{ 0, (void*)0x00000000, { 0.0f, 168.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dYoshiModel_Joint_0x6738_post_post_post, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)&dYoshiModel_Joint_0x6738_post_post_post[2], { 0.0f, 0.0f, 43.20003128051758f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)&dYoshiModel_Joint_0x6738_post_post_post[4], { 0.0f, 150.00001525878906f, 82.79998016357422f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)&dYoshiModel_Joint_0x6738_post_post_post[6], { 0.0f, 11.999988555908203f, 30.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 0.0f, 43.961997985839844f, 18.00501823425293f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 60.0f, 12.00000286102295f, 52.79997253417969f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)&dYoshiModel_Joint_0x6738_post_post_post[8], { 0.0f, 0.0f, 0.0f }, { -3.1415929794311523f, 3.1415929794311523f, 2.643043041229248f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)&dYoshiModel_Joint_0x6738_post_post_post[10], { 43.199974060058594f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.7163710594177246f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)&dYoshiModel_Joint_0x6738_post_post_post[12], { 43.199989318847656f, 0.0f, 1.1000000085914508e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -60.0f, 12.00000286102295f, 52.79997253417969f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)&dYoshiModel_Joint_0x6738_post_post_post[14], { 0.0f, 0.0f, 0.0f }, { -3.1415929794311523f, 3.1415929794311523f, 2.643043041229248f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)&dYoshiModel_Joint_0x6738_post_post_post[16], { 43.199981689453125f, -1.4000000192027073e-05f, 0.0f }, { 0.0f, 0.0f, -1.7163710594177246f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)&dYoshiModel_Joint_0x6738_post_post_post[18], { 43.199974060058594f, 0.0f, 1.1000000085914508e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 0.0f, 39.17825698852539f, 7.000000096013537e-06f }, { -2.0943949222564697f, 3.1415929794311523f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)&dYoshiModel_Joint_0x6738_post_post_post[20], { 0.0f, 54.00000762939453f, -60.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)&dYoshiModel_Joint_0x6738_post_post_post[22], { 0.0f, 12.00000286102295f, -65.99999237060547f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 60.0f, -24.0000057220459f, 24.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)&dYoshiModel_Joint_0x6738_post_post_post[24], { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.3960860073566437f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)&dYoshiModel_Joint_0x6738_post_post_post[26], { 55.20000457763672f, -1.4000000192027073e-05f, 0.0f }, { 0.0f, 0.0f, 0.9765089750289917f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 82.60124206542969f, -1.9999999949504854e-06f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)&dYoshiModel_Joint_0x6738_post_post_post[28], { 0.0f, -1.9999999949504854e-06f, 0.0f }, { 3.1415929794311523f, 0.0f, -0.5891109704971313f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -60.0f, -24.0000057220459f, 24.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)&dYoshiModel_Joint_0x6738_post_post_post[30], { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.3960860073566437f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)&dYoshiModel_Joint_0x6738_post_post_post[32], { 55.20000457763672f, -1.4000000192027073e-05f, 0.0f }, { 0.0f, 0.0f, 0.9765089750289917f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 82.60124206542969f, -1.9999999949504854e-06f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)&dYoshiModel_Joint_0x6738_post_post_post[34], { 0.0f, -1.9999999949504854e-06f, 0.0f }, { 3.1415929794311523f, 0.0f, -0.5891119837760925f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -168.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 2.4834325794767167e-22f }, { 2.4999766965987566e-22f, 2.5661513980384885e-22f, 0.0f }, { 0.0f, 0.0f, 2.5826962724669974e-22f } },
};

/* Raw data from file offset 0x6E70 to 0x9518 (9896 bytes) */
/* gap sub-block @ 0x6E70 (was gap+0x0, 80 bytes) */
u8 dYoshiModel_gap_0x6E70[80] = {
	#include <YoshiModel/gap_0x6E70.data.inc.c>
};

/* gap sub-block @ 0x6EC0 (was gap+0x50, 140 bytes) */
u32 dYoshiModel_gap_0x6E70_sub_0x50[35] = {
	aobjEvent32SetValAfter(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x41400000,  /* 12.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x41500000,  /* 13.0f */
	aobjEvent32Wait(46),
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41000000,  /* 8.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41100000,  /* 9.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41200000,  /* 10.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x41300000,  /* 11.0f */
	aobjEvent32Wait(43),
	aobjEvent32End(),
};

/* gap sub-block @ 0x6F4C (was gap+0xDC, 140 bytes) */
u32 dYoshiModel_gap_0x6E70_sub_0xDC[35] = {
	aobjEvent32SetValAfter(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x41400000,  /* 12.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x41500000,  /* 13.0f */
	aobjEvent32Wait(46),
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41000000,  /* 8.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41100000,  /* 9.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41200000,  /* 10.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x41300000,  /* 11.0f */
	aobjEvent32Wait(43),
	aobjEvent32End(),
};

/* gap sub-block @ 0x6FD8 (was gap+0x168, 56 bytes) */
u32 dYoshiModel_gap_0x6E70_sub_0x168[14] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x40FF15FF,  /* 7.971435070037842f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF2963FF,  /* -2.2515874069109466e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x00F4FFFF,  /* 2.2499695157409383e-38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFFF00FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF84C6FF,  /* nanf */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x3910DEFF,  /* 0.00013815982674714178f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x7010 (was gap+0x1A0, 56 bytes) */
u32 dYoshiModel_gap_0x6E70_sub_0x1A0[14] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x40FF15FF,  /* 7.971435070037842f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF2963FF,  /* -2.2515874069109466e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x00F4FFFF,  /* 2.2499695157409383e-38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFFF00FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF84C6FF,  /* nanf */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x3910DEFF,  /* 0.00013815982674714178f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x7048 (was gap+0x1D8, 56 bytes) */
u32 dYoshiModel_gap_0x6E70_sub_0x1D8[14] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x7080 (was gap+0x210, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x210[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x210.data.inc.c>
};

/* gap sub-block @ 0x70B8 (was gap+0x248, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x248[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x248.data.inc.c>
};

/* gap sub-block @ 0x70F0 (was gap+0x280, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x280[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x280.data.inc.c>
};

/* gap sub-block @ 0x7128 (was gap+0x2B8, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x2B8[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x2B8.data.inc.c>
};

/* gap sub-block @ 0x7160 (was gap+0x2F0, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x2F0[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x2F0.data.inc.c>
};

/* gap sub-block @ 0x7198 (was gap+0x328, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x328[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x328.data.inc.c>
};

/* gap sub-block @ 0x71D0 (was gap+0x360, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x360[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x360.data.inc.c>
};

/* gap sub-block @ 0x7208 (was gap+0x398, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x398[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x398.data.inc.c>
};

/* gap sub-block @ 0x7240 (was gap+0x3D0, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x3D0[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x3D0.data.inc.c>
};

/* gap sub-block @ 0x7278 (was gap+0x408, 80 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x408[80] = {
	#include <YoshiModel/gap_0x6E70_sub_0x408.data.inc.c>
};

/* gap sub-block @ 0x72C8 (was gap+0x458, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x458[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x458.data.inc.c>
};

/* gap sub-block @ 0x7300 (was gap+0x490, 80 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x490[80] = {
	#include <YoshiModel/gap_0x6E70_sub_0x490.data.inc.c>
};

/* gap sub-block @ 0x7350 (was gap+0x4E0, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x4E0[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x4E0.data.inc.c>
};

/* gap sub-block @ 0x7388 (was gap+0x518, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x518[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x518.data.inc.c>
};

/* gap sub-block @ 0x73C0 (was gap+0x550, 80 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x550[80] = {
	#include <YoshiModel/gap_0x6E70_sub_0x550.data.inc.c>
};

/* gap sub-block @ 0x7410 (was gap+0x5A0, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x5A0[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x5A0.data.inc.c>
};

/* gap sub-block @ 0x7448 (was gap+0x5D8, 80 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x5D8[80] = {
	#include <YoshiModel/gap_0x6E70_sub_0x5D8.data.inc.c>
};

/* gap sub-block @ 0x7498 (was gap+0x628, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x628[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x628.data.inc.c>
};

/* gap sub-block @ 0x74D0 (was gap+0x660, 56 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x660[56] = {
	#include <YoshiModel/gap_0x6E70_sub_0x660.data.inc.c>
};

/* gap sub-block @ 0x7508 (was gap+0x698, 8 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x698[8] = {
	#include <YoshiModel/gap_0x6E70_sub_0x698.data.inc.c>
};

/* gap sub-block @ 0x7510 (was gap+0x6A0, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6A0[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6A0.data.inc.c>
};

/* gap sub-block @ 0x7514 (was gap+0x6A4, 20 bytes) */
AObjEvent32 *dYoshiModel_gap_0x6E70_sub_0x6A4[5] = {
	(AObjEvent32 *)dYoshiModel_gap_0x6E70_sub_0x50,
	(AObjEvent32 *)dYoshiModel_gap_0x6E70_sub_0xDC,
	(AObjEvent32 *)dYoshiModel_gap_0x6E70_sub_0x168,
	(AObjEvent32 *)dYoshiModel_gap_0x6E70_sub_0x1A0,
	(AObjEvent32 *)dYoshiModel_gap_0x6E70_sub_0x1D8,
};

/* gap sub-block @ 0x7528 (was gap+0x6B8, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6B8[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6B8.data.inc.c>
};

/* gap sub-block @ 0x752C (was gap+0x6BC, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6BC[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6BC.data.inc.c>
};

/* gap sub-block @ 0x7530 (was gap+0x6C0, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6C0[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6C0.data.inc.c>
};

/* gap sub-block @ 0x7534 (was gap+0x6C4, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6C4[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6C4.data.inc.c>
};

/* gap sub-block @ 0x7538 (was gap+0x6C8, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6C8[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6C8.data.inc.c>
};

/* gap sub-block @ 0x753C (was gap+0x6CC, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6CC[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6CC.data.inc.c>
};

/* gap sub-block @ 0x7540 (was gap+0x6D0, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6D0[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6D0.data.inc.c>
};

/* gap sub-block @ 0x7544 (was gap+0x6D4, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6D4[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6D4.data.inc.c>
};

/* gap sub-block @ 0x7548 (was gap+0x6D8, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6D8[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6D8.data.inc.c>
};

/* gap sub-block @ 0x754C (was gap+0x6DC, 8 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6DC[8] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6DC.data.inc.c>
};

/* gap sub-block @ 0x7554 (was gap+0x6E4, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6E4[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6E4.data.inc.c>
};

/* gap sub-block @ 0x7558 (was gap+0x6E8, 4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6E8[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6E8.data.inc.c>
};

/* gap sub-block @ 0x755C (was gap+0x6EC, 8 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6EC[8] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6EC.data.inc.c>
};

/* gap sub-block @ 0x7564 (was gap+0x6F4, 16 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x6F4[16] = {
	#include <YoshiModel/gap_0x6E70_sub_0x6F4.data.inc.c>
};

/* u32 pointer array @ 0x7574 (6 entries) */
u32 dYoshiModel_gap_0x6E70_sub_0x704[6] = {
	0x1D5E26EA,
	0x1D5F2558,
	0x1D602562,
	0x1D61256C,
	0x1D622576,
	0x1D632580,
};

/* u32 pointer array @ 0x758C (6 entries) */
u32 dYoshiModel_gap_0x6E70_sub_0x71C[6] = {
	0x1D6426EA,
	0x1D652558,
	0x1D662562,
	0x1D67256C,
	0x1D682576,
	0x1D692580,
};

/* u32 pointer array @ 0x75A4 (7 entries) */
u32 dYoshiModel_gap_0x6E70_sub_0x734[7] = {
	0x1D6A253C,
	0x1D6B250A,
	0x1D6C2514,
	0x1D6D251E,
	0x1D6E2528,
	0x1D992532,
	0x00000000,
};

/* MObjSub @ 0x75C0 */
MObjSub dYoshiModel_gap_0x6E70_sub_0x750[1] = {
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
		{ { 0x39, 0x10, 0xDE, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x7638 */
MObjSub dYoshiModel_gap_0x6E70_sub_0x7C8[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x006A, 0x0009, 0x0010, 0x0010,
		0,
		0.5404009819030762f, 0.0f,
		0.30000001192092896f, 0.4000000059604645f,
		0.5404009819030762f, 0.30000001192092896f,
		(void**)dYoshiModel_gap_0x6E70_sub_0x704,
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.5404009819030762f, 0.0f,
		0.5404009819030762f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x76B0 */
MObjSub dYoshiModel_gap_0x6E70_sub_0x840[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x006A, 0x0009, 0x0010, 0x0010,
		0,
		0.5364000201225281f, 0.0f,
		0.30000001192092896f, 0.4000000059604645f,
		0.5364000201225281f, 0.30000001192092896f,
		(void**)dYoshiModel_gap_0x6E70_sub_0x71C,
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.5364000201225281f, 0.0f,
		0.5364000201225281f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFD, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x7728 */
MObjSub dYoshiModel_gap_0x6E70_sub_0x8B8[1] = {
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
		{ { 0x39, 0x10, 0xDE, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x77A0 */
MObjSub dYoshiModel_gap_0x6E70_sub_0x930[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0140, 0x0007, 0x0008, 0x0008,
		0,
		0.7675999999046326f, 0.0714000016450882f,
		0.10000000149011612f, 0.15000000596046448f,
		0.7675999999046326f, 0.10000000149011612f,
		(void**)dYoshiModel_gap_0x6E70_sub_0x734,
		0x0004,
		0x02, 0x00,
		0x0008,
		0x0008, 0x0008, 0x0008,
		0.7675999999046326f, 0.0714000016450882f,
		0.7675999999046326f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x7818 (was gap+0x9A8, 24 bytes) */
MObjSub *dYoshiModel_gap_0x6E70_sub_0x9A8[6] = {
	(MObjSub *)dYoshiModel_gap_0x6E70_sub_0x750,
	(MObjSub *)dYoshiModel_gap_0x6E70_sub_0x7C8,
	(MObjSub *)dYoshiModel_gap_0x6E70_sub_0x840,
	(MObjSub *)dYoshiModel_gap_0x6E70_sub_0x8B8,
	(MObjSub *)dYoshiModel_gap_0x6E70_sub_0x930,
	NULL,
};

/* gap sub-block @ 0x7830 (was gap+0x9C0, 144 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x9C0[9] = {
	#include <YoshiModel/gap_0x6E70_sub_0x9C0.vtx.inc.c>
};

/* gap sub-block @ 0x78C0 (was gap+0xA50, 304 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0xA50[19] = {
	#include <YoshiModel/gap_0x6E70_sub_0xA50.vtx.inc.c>
};

/* gap sub-block @ 0x79F0 (was gap+0xB80, 96 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0xB80[6] = {
	#include <YoshiModel/gap_0x6E70_sub_0xB80.vtx.inc.c>
};

/* gap sub-block @ 0x7A50 (was gap+0xBE0, 96 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0xBE0[6] = {
	#include <YoshiModel/gap_0x6E70_sub_0xBE0.vtx.inc.c>
};

/* Vtx: gap_0x6E70_sub_0xC40 @ 0x7AB0 (32 vertices) */
Vtx dYoshiModel_gap_0x6E70_sub_0xC40[32] = {
	#include <YoshiModel/gap_0x6E70_sub_0xC40.vtx.inc.c>
};

/* gap sub-block @ 0x7CB0 (was gap+0xE40, 32 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0xE40[2] = {
	#include <YoshiModel/gap_0x6E70_sub_0xE40.vtx.inc.c>
};

/* gap sub-block @ 0x7CD0 (was gap+0xE60, 48 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0xE60[3] = {
	#include <YoshiModel/gap_0x6E70_sub_0xE60.vtx.inc.c>
};

/* gap sub-block @ 0x7D00 (was gap+0xE90, 16 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0xE90[1] = {
	#include <YoshiModel/gap_0x6E70_sub_0xE90.vtx.inc.c>
};

/* Gfx DL: gap_0x6E70_sub_0xEA0 @ 0x7D10 (128 cmds) */
Gfx dYoshiModel_gap_0x6E70_sub_0xEA0[128] = {
	#include <YoshiModel/gap_0x6E70_sub_0xEA0.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0x8110 (4 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0xEA0_post[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0xEA0_post.data.inc.c>
};

/* gap sub-block @ 0x8114 (was gap+0x12A4, 56 bytes) */
u32 dYoshiModel_gap_0x6E70_sub_0x12A4[14] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x40FF15FF,  /* 7.971435070037842f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF2963FF,  /* -2.2515874069109466e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x00F4FFFF,  /* 2.2499695157409383e-38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFFF00FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF84C6FF,  /* nanf */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x3910DEFF,  /* 0.00013815982674714178f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x814C (was gap+0x12DC, 56 bytes) */
u32 dYoshiModel_gap_0x6E70_sub_0x12DC[14] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x8184 (was gap+0x1314, 56 bytes) */
u32 dYoshiModel_gap_0x6E70_sub_0x1314[14] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x81BC (was gap+0x134C, 56 bytes) */
u32 dYoshiModel_gap_0x6E70_sub_0x134C[14] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x40FF15FF,  /* 7.971435070037842f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF2963FF,  /* -2.2515874069109466e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x00F4FFFF,  /* 2.2499695157409383e-38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFFF00FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFF84C6FF,  /* nanf */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x3910DEFF,  /* 0.00013815982674714178f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x81F4 (was gap+0x1384, 56 bytes) */
u32 dYoshiModel_gap_0x6E70_sub_0x1384[14] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

/* gap sub-block @ 0x822C (was gap+0x13BC, 20 bytes) */
AObjEvent32 *dYoshiModel_gap_0x6E70_sub_0x13BC[5] = {
	(AObjEvent32 *)dYoshiModel_gap_0x6E70_sub_0x12A4,
	(AObjEvent32 *)dYoshiModel_gap_0x6E70_sub_0x12DC,
	(AObjEvent32 *)dYoshiModel_gap_0x6E70_sub_0x1314,
	(AObjEvent32 *)dYoshiModel_gap_0x6E70_sub_0x134C,
	(AObjEvent32 *)dYoshiModel_gap_0x6E70_sub_0x1384,
};

/* gap sub-block @ 0x8240 (was gap+0x13D0, 192 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x13D0[12] = {
	#include <YoshiModel/gap_0x6E70_sub_0x13D0.vtx.inc.c>
};

/* gap sub-block @ 0x8300 (was gap+0x1490, 272 bytes) */
Gfx dYoshiModel_DL_0x8300[34] = {
	#include <YoshiModel/DL_0x8300.dl.inc.c>
};

/* gap sub-block @ 0x8410 (was gap+0x15A0, 80 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x15A0[5] = {
	#include <YoshiModel/gap_0x6E70_sub_0x15A0.vtx.inc.c>
};

/* gap sub-block @ 0x8460 (was gap+0x15F0, 48 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x15F0[3] = {
	#include <YoshiModel/gap_0x6E70_sub_0x15F0.vtx.inc.c>
};

/* Gfx DL: gap_0x6E70_sub_0x1620 @ 0x8490 (31 cmds) */
Gfx dYoshiModel_gap_0x6E70_sub_0x1620[31] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1620.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x8590 (was gap+0x1720, 96 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x1720[6] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1720.vtx.inc.c>
};

/* gap sub-block @ 0x85F0 (was gap+0x1780, 240 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x1780[15] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1780.vtx.inc.c>
};

/* gap sub-block @ 0x86E0 (was gap+0x1870, 400 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x1870[25] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1870.vtx.inc.c>
};

/* gap sub-block @ 0x8870 (was gap+0x1A00, 64 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x1A00[4] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1A00.vtx.inc.c>
};

/* Gfx DL: gap_0x6E70_sub_0x1A40 @ 0x88B0 (61 cmds) */
Gfx dYoshiModel_gap_0x6E70_sub_0x1A40[61] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1A40.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x8AA0 (was gap+0x1C30, 160 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x1C30[10] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1C30.vtx.inc.c>
};

/* Gfx DL: gap_0x6E70_sub_0x1CD0 @ 0x8B40 (13 cmds) */
Gfx dYoshiModel_gap_0x6E70_sub_0x1CD0[13] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1CD0.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x8BB0 (was gap+0x1D40, 160 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x1D40[10] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1D40.vtx.inc.c>
};

/* Gfx DL: gap_0x6E70_sub_0x1DE0 @ 0x8C50 (13 cmds) */
Gfx dYoshiModel_gap_0x6E70_sub_0x1DE0[13] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1DE0.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x8CC0 (was gap+0x1E50, 80 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x1E50[5] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1E50.vtx.inc.c>
};

/* gap sub-block @ 0x8D10 (was gap+0x1EA0, 96 bytes) */
Gfx dYoshiModel_DL_0x8D10[12] = {
	#include <YoshiModel/DL_0x8D10.dl.inc.c>
};

/* gap sub-block @ 0x8D70 (was gap+0x1F00, 80 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x1F00[5] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1F00.vtx.inc.c>
};

/* gap sub-block @ 0x8DC0 (was gap+0x1F50, 96 bytes) */
Gfx dYoshiModel_DL_0x8DC0[12] = {
	#include <YoshiModel/DL_0x8DC0.dl.inc.c>
};

/* gap sub-block @ 0x8E20 (was gap+0x1FB0, 160 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x1FB0[10] = {
	#include <YoshiModel/gap_0x6E70_sub_0x1FB0.vtx.inc.c>
};

/* Gfx DL: gap_0x6E70_sub_0x2050 @ 0x8EC0 (13 cmds) */
Gfx dYoshiModel_gap_0x6E70_sub_0x2050[13] = {
	#include <YoshiModel/gap_0x6E70_sub_0x2050.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x8F30 (was gap+0x20C0, 160 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x20C0[10] = {
	#include <YoshiModel/gap_0x6E70_sub_0x20C0.vtx.inc.c>
};

/* Gfx DL: gap_0x6E70_sub_0x2160 @ 0x8FD0 (13 cmds) */
Gfx dYoshiModel_gap_0x6E70_sub_0x2160[13] = {
	#include <YoshiModel/gap_0x6E70_sub_0x2160.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x9040 (was gap+0x21D0, 80 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x21D0[5] = {
	#include <YoshiModel/gap_0x6E70_sub_0x21D0.vtx.inc.c>
};

/* gap sub-block @ 0x9090 (was gap+0x2220, 96 bytes) */
Gfx dYoshiModel_DL_0x9090[12] = {
	#include <YoshiModel/DL_0x9090.dl.inc.c>
};

/* gap sub-block @ 0x90F0 (was gap+0x2280, 176 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x2280[176] = {
	#include <YoshiModel/gap_0x6E70_sub_0x2280.data.inc.c>
};

/* gap sub-block @ 0x91A0 (was gap+0x2330, 128 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x2330[8] = {
	#include <YoshiModel/gap_0x6E70_sub_0x2330.vtx.inc.c>
};

/* gap sub-block @ 0x9220 (was gap+0x23B0, 224 bytes) */
Gfx dYoshiModel_DL_0x9220[28] = {
	#include <YoshiModel/DL_0x9220.dl.inc.c>
};

/* gap sub-block @ 0x9300 (was gap+0x2490, 80 bytes) */
Vtx dYoshiModel_gap_0x6E70_sub_0x2490[5] = {
	#include <YoshiModel/gap_0x6E70_sub_0x2490.vtx.inc.c>
};

/* Gfx DL: gap_0x6E70_sub_0x24E0 @ 0x9350 (26 cmds) */
Gfx dYoshiModel_gap_0x6E70_sub_0x24E0[26] = {
	#include <YoshiModel/gap_0x6E70_sub_0x24E0.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x9428 (was gap+0x25B8, 40 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x25B8[40] = {
	#include <YoshiModel/gap_0x6E70_sub_0x25B8.data.inc.c>
};

/* gap sub-block @ 0x9450 (was gap+0x25E0, 40 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x25E0[40] = {
	#include <YoshiModel/gap_0x6E70_sub_0x25E0.data.inc.c>
};

/* gap sub-block @ 0x9478 (was gap+0x2608, 40 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x2608[40] = {
	#include <YoshiModel/gap_0x6E70_sub_0x2608.data.inc.c>
};

/* gap sub-block @ 0x94A0 (was gap+0x2630, 40 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x2630[40] = {
	#include <YoshiModel/gap_0x6E70_sub_0x2630.data.inc.c>
};

/* gap sub-block @ 0x94C8 (was gap+0x2658, 40 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x2658[40] = {
	#include <YoshiModel/gap_0x6E70_sub_0x2658.data.inc.c>
};

/* gap sub-block @ 0x94F0 (was gap+0x2680, 40 bytes) */
u8 dYoshiModel_gap_0x6E70_sub_0x2680[40] = {
	#include <YoshiModel/gap_0x6E70_sub_0x2680.data.inc.c>
};

/* Texture data @ 0x9518 (2136 bytes) */
/* @tex fmt=CI4 dim=139x97 */
u8 dYoshiModel_Tex_0x9518[2136] = {
	#include <YoshiModel/Tex_0x9518.tex.inc.c>
};

/* Texture data @ 0x9D70 (272 bytes) */
/* @tex fmt=CI4 dim=32x27 */
u8 dYoshiModel_Tex_0x9D70[272] = {
	#include <YoshiModel/Tex_0x9D70.tex.inc.c>
};

/* Texture data @ 0x9E80 (72 bytes) */
/* @tex fmt=CI4 dim=38x13 */
u8 dYoshiModel_Tex_0x9E80[72] = {
	#include <YoshiModel/Tex_0x9E80.tex.inc.c>
};

/* Palette: Lut_0x9EC8 @ 0x9EC8 (16 colors RGBA5551) */
u16 dYoshiModel_Lut_0x9EC8_palette[16] = {
	#include <YoshiModel/Lut_0x9EC8.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x9EF0 (2416 bytes) */
/* @tex fmt=CI4 dim=32x16 lut=dYoshiModel_Lut_0x9EC8_palette */
u8 dYoshiModel_Tex_0x9EF0[2416] = {
	#include <YoshiModel/Tex_0x9EF0.tex.inc.c>
};

/* Gfx DL: gap_0xA860 @ 0xA860 (29 cmds) */
Gfx dYoshiModel_gap_0xA860[29] = {
	#include <YoshiModel/gap_0xA860.dl.inc.c>
};

/* Raw tail after DL @ 0xA948 (16 bytes) */
u8 dYoshiModel_gap_0xA860_post[16] = {
	#include <YoshiModel/gap_0xA860_post.data.inc.c>
};

/* Texture data for sprite Stock */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Stock (8(16)x10 ci4) */
u8 dYoshiModel_Stock_tex[88] = {
    #include <YoshiModel/Stock.ci4.inc.c>
};

/* Palette: @ 0xA9B0 (16 colors RGBA5551) */
u16 dYoshiModel_palette_0xA9B0[16] = {
	#include <YoshiModel/palette_0xA9B0.palette.inc.c>
};

/* Raw data from file offset 0xA9D0 to 0xAA98 (200 bytes) */
/* gap sub-block @ 0xA9D0 (was gap+0x0, 8 bytes) */
u8 dYoshiModel_gap_0xA9D0[8] = {
	#include <YoshiModel/gap_0xA9D0.data.inc.c>
};

/* gap sub-block @ 0xA9D8 (was gap+0x8, 40 bytes) */
u8 dYoshiModel_gap_0xA9D0_sub_0x8[40] = {
	#include <YoshiModel/gap_0xA9D0_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0xAA00 (was gap+0x30, 40 bytes) */
u8 dYoshiModel_gap_0xA9D0_sub_0x30[40] = {
	#include <YoshiModel/gap_0xA9D0_sub_0x30.data.inc.c>
};

/* gap sub-block @ 0xAA28 (was gap+0x58, 40 bytes) */
u8 dYoshiModel_gap_0xA9D0_sub_0x58[40] = {
	#include <YoshiModel/gap_0xA9D0_sub_0x58.data.inc.c>
};

/* gap sub-block @ 0xAA50 (was gap+0x80, 40 bytes) */
u8 dYoshiModel_gap_0xA9D0_sub_0x80[40] = {
	#include <YoshiModel/gap_0xA9D0_sub_0x80.data.inc.c>
};

/* gap sub-block @ 0xAA78 (was gap+0xA8, 32 bytes) */
u8 dYoshiModel_gap_0xA9D0_sub_0xA8[32] = {
	#include <YoshiModel/gap_0xA9D0_sub_0xA8.data.inc.c>
};

/* Sprite: Stock */

/* Sprite: Stock (8x10 ci4) */

Bitmap dYoshiModel_Stock_bitmaps[] = {
	{ 8, 16, 0, 0, dYoshiModel_Stock_tex, 10, 0 },
};

Sprite dYoshiModel_Stock = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dYoshiModel_palette_0xA9B0,
	0, 1,
	1, 36,
	10, 10,
	2, 0,
	(Bitmap*)dYoshiModel_Stock_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: FTEmblem */

Gfx dYoshiModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (22(32)x25 i4) */
u8 dYoshiModel_FTEmblem_tex[400] = {
    #include <YoshiModel/FTEmblem.i4.inc.c>
};

Bitmap dYoshiModel_FTEmblem_bitmaps[] = {
	{ 22, 32, 0, 0, dYoshiModel_FTEmblem_tex, 25, 0 },
};

/* Sprite: FTEmblem (22x25 i4) */
Sprite dYoshiModel_FTEmblem = {
	0, 0,
	22, 25,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	25, 25,
	4, 0,
	(Bitmap*)dYoshiModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);
