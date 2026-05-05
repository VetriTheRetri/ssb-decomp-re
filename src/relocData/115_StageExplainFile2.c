/* relocData file 115: StageExplainFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0108 (264 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 64 bytes) */
Vtx dStageExplainFile2_gap_0x0000[4] = {
	#include <StageExplainFile2/gap_0x0000.vtx.inc.c>
};

/* gap sub-block @ 0x0040 (was gap+0x40, 200 bytes) */
Gfx dStageExplainFile2_DL_0x0040[25] = {
	#include <StageExplainFile2/DL_0x0040.dl.inc.c>
};

/* DObjDesc: Layer0DObj @ 0x108 (3 entries) */
DObjDesc dStageExplainFile2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageExplainFile2_gap_0x0000 + 0x40), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x018C to 0x0720 (1428 bytes) */
PAD(4);

/* Vtx: gap_0x018C_sub_0x4 @ 0x190 (8 vertices) */
Vtx dStageExplainFile2_gap_0x018C_sub_0x4[8] = {
	#include <StageExplainFile2/gap_0x018C_sub_0x4.vtx.inc.c>
};

/* gap sub-block @ 0x0210 (was gap+0x84, 192 bytes) */
Vtx dStageExplainFile2_gap_0x018C_sub_0x84[12] = {
	#include <StageExplainFile2/gap_0x018C_sub_0x84.vtx.inc.c>
};

/* gap sub-block @ 0x02D0 (was gap+0x144, 128 bytes) */
Vtx dStageExplainFile2_gap_0x018C_sub_0x144[8] = {
	#include <StageExplainFile2/gap_0x018C_sub_0x144.vtx.inc.c>
};

/* Vtx: gap_0x018C_sub_0x1C4 @ 0x350 (8 vertices) */
Vtx dStageExplainFile2_gap_0x018C_sub_0x1C4[8] = {
	#include <StageExplainFile2/gap_0x018C_sub_0x1C4.vtx.inc.c>
};

/* gap sub-block @ 0x03D0 (was gap+0x244, 48 bytes) */
Vtx dStageExplainFile2_gap_0x018C_sub_0x244[3] = {
	#include <StageExplainFile2/gap_0x018C_sub_0x244.vtx.inc.c>
};

/* Merged Gfx DL @ 0x274 — 5 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dStageExplainFile2_gap_0x018C_sub_0x274[100] = {
	#include <StageExplainFile2/gap_0x018C_sub_0x274.dl.inc.c>
};

/* DObjDesc: Layer1DObj @ 0x720 (3 entries) */
DObjDesc dStageExplainFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageExplainFile2_gap_0x018C_sub_0x274, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x07A4 to 0x0854 (176 bytes) */
/* gap sub-block @ 0x07A4 (was gap+0x0, 80 bytes) */
u8 dStageExplainFile2_gap_0x07A4[80] = {
	#include <StageExplainFile2/gap_0x07A4.data.inc.c>
};

/* MPVertexArray (18 IDs) @ 0x07F4 — vertex_id table (MPGeometryData.vertex_id) */
u16 dStageExplainFile2_gap_0x07A4_sub_0x50[18] = {
	 10,  11,  12,   5,   6,   0,   1,   1,   2,   3,   4,   5,   6,   7,   8,   9,
	  0,   0,
};

/* MPVertexLinks[5] @ 0x0818 — line vertex pairs (MPGeometryData.vertex_links) */
MPVertexLinks dStageExplainFile2_gap_0x07A4_sub_0x74[5] = {
	{   0, 3 }, {   3, 2 }, {   5, 2 }, {   7, 5 }, {  12, 5 },
};

/* MPLineInfo[1] @ 0x082C — yakumono line groups (MPGeometryData.line_info) */
MPLineInfo dStageExplainFile2_gap_0x07A4_sub_0x88[1] = {
	{ 1, { {  0,   2}, {  2,   1}, {  3,   1}, {  4,   1} } },
};

/* MPMapObjData[3] @ 0x0840 — map objects (MPGeometryData.mapobjs); 2 bytes pad to align next decl */
MPMapObjData dStageExplainFile2_gap_0x07A4_sub_0x9C[3] = {
	{   0, {   660,     0 } },
	{   1, {  1440,     0 } },
	{  32, {  1050,  1020 } },
};

/* MPGeometryData @ 0x0854 (28 bytes) */
MPGeometryData dStageExplainFile2_MPGeometryData_0x0854 = {
	1,
	(MPVertexPosContainer*)dStageExplainFile2_gap_0x07A4,
	(MPVertexArray*)dStageExplainFile2_gap_0x07A4_sub_0x50,
	dStageExplainFile2_gap_0x07A4_sub_0x74,
	dStageExplainFile2_gap_0x07A4_sub_0x88,
	3,
	(MPMapObjContainer*)dStageExplainFile2_gap_0x07A4_sub_0x9C,
};

/* Trailing data after MPGeometryData @ 0x0870 (328 bytes) — embedded
 * DObjDLLink/DL/texture mix; referenced by Layer2DObj+0x30 at +0x70. */
u8 dStageExplainFile2_MPGeometryData_0x0854_trailing[328] = {
	#include <StageExplainFile2/MPGeometryData_0x0854_trailing.data.inc.c>
};

/* DObjDesc: Layer2DObj @ 0x9B8 (3 entries) */
DObjDesc dStageExplainFile2_Layer2DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageExplainFile2_MPGeometryData_0x0854_trailing + 0x70), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x0A3C to 0x0DD0 (916 bytes) */
PAD(4);

/* gap sub-block @ 0x0A40 (was gap+0x4, 256 bytes) */
Vtx dStageExplainFile2_gap_0x0A3C_sub_0x4[16] = {
	#include <StageExplainFile2/gap_0x0A3C_sub_0x4.vtx.inc.c>
};

/* gap sub-block @ 0x0B40 (was gap+0x104, 224 bytes) */
Vtx dStageExplainFile2_gap_0x0A3C_sub_0x104[14] = {
	#include <StageExplainFile2/gap_0x0A3C_sub_0x104.vtx.inc.c>
};

/* gap sub-block @ 0x0C20 (was gap+0x1E4, 432 bytes) */
Gfx dStageExplainFile2_DL_0x0C20[54] = {
	#include <StageExplainFile2/DL_0x0C20.dl.inc.c>
};

/* DObjDesc: Layer3DObj @ 0xDD0 (3 entries) */
DObjDesc dStageExplainFile2_Layer3DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageExplainFile2_DL_0x0C20, { 0.0f, 0.0f, -49.396202087402344f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

