/* relocData file 325: LinkSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dLinkSpecial3_Lut_0x0008_palette[16] = {
	#include <LinkSpecial3/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0030 to 0x0150 (288 bytes) */
u8 dLinkSpecial3_Tex_0x0030[288] = {
	#include <LinkSpecial3/Tex_0x0030.tex.inc.c>
};

/* Vtx: Vtx_0x0150 @ 0x150 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x0150_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x0150.vtx.inc.c>
};

/* Vtx: Vtx_0x0180 @ 0x180 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x0180_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x0180.vtx.inc.c>
};

/* Vtx: Vtx_0x01B0 @ 0x1B0 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x01B0_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x01B0.vtx.inc.c>
};

/* Vtx: Vtx_0x01E0 @ 0x1E0 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x01E0_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x01E0.vtx.inc.c>
};

/* Vtx: Vtx_0x0210 @ 0x210 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x0210_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x0210.vtx.inc.c>
};

/* Vtx: Vtx_0x0240 @ 0x240 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x0240_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x0240.vtx.inc.c>
};

/* Vtx: Vtx_0x0270 @ 0x270 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x0270_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x0270.vtx.inc.c>
};

/* Vtx: Vtx_0x02A0 @ 0x2A0 (14 vertices) */
Vtx dLinkSpecial3_Vtx_0x02A0_Vtx[14] = {
	#include <LinkSpecial3/Vtx_0x02A0.vtx.inc.c>
};

/* DisplayList: BoomerangDL @ 0x380 (216 bytes) */
Gfx dLinkSpecial3_BoomerangDL_DisplayList[27] = {
	#include <LinkSpecial3/BoomerangDL.dl.inc.c>
};

/* BoomerangDL_post split into its constituent display lists, DObjDesc
 * array, and trailing structure. The original 664-byte u8 blob held:
 *   - 4 Gfx DLs (the last lacks gsSPEndDisplayList — runtime falls
 *     through into the DObjDesc-area data, but nothing actually calls it
 *     since no chain pointer targets +0x138);
 *   - a DObjDesc[4] block at +0x1B8;
 *   - a 48-byte trailing structure with two chain pointers (purpose TBD). */

/* DL @ 0x458 (2 cmds) — single subDL call + gsSPEndDisplayList.
 * Targets `Vtx_0x02A0_Vtx + 0xA8` via gsSPVertex (chain at +0x4). */
Gfx dLinkSpecial3_BoomerangDL_post_DL_0x458[2] = {
	#include <LinkSpecial3/BoomerangDL_post_DL_0x458.dl.inc.c>
};

/* DL @ 0x468 (35 cmds) — main boomerang surface DL with multiple
 * gsSPVertex calls and texture binds. */
Gfx dLinkSpecial3_BoomerangDL_post_DL_0x468[35] = {
	#include <LinkSpecial3/BoomerangDL_post_DL_0x468.dl.inc.c>
};

/* DL @ 0x580 (2 cmds) — wrapper that gsSPDisplayList()s into DL_0x468. */
Gfx dLinkSpecial3_BoomerangDL_post_DL_0x580[2] = {
	#include <LinkSpecial3/BoomerangDL_post_DL_0x580.dl.inc.c>
};

/* DL @ 0x590 (16 cmds) — material/state setup DL with NO
 * gsSPEndDisplayList terminator. Nothing references this address from
 * the .reloc, so it's likely a fragment kept for engine reuse rather
 * than executed via the normal DL chain. */
Gfx dLinkSpecial3_BoomerangDL_post_DL_0x590[16] = {
	#include <LinkSpecial3/BoomerangDL_post_DL_0x590.dl.inc.c>
};

/* DObjDesc @ 0x610 (4 entries) — DObj scene graph for the boomerang.
 * Entry [1] points at DL_0x458, entry [2] points at DL_0x580. */
DObjDesc dLinkSpecial3_BoomerangDL_post_DObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 37.5f, -15.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dLinkSpecial3_BoomerangDL_post_DL_0x458, { 0.0f, -30.0f, -15.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dLinkSpecial3_BoomerangDL_post_DL_0x580, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Trailing 48-byte structure @ 0x6C0 — two chain pointers (at +0x4 and
 * +0x20) both target +0xC of this block. Purpose TBD (likely some
 * boomerang attachment metadata; possibly a small MObj-related struct). */
u8 dLinkSpecial3_BoomerangDL_post_tail[48] = {
	#include <LinkSpecial3/BoomerangDL_post_tail.data.inc.c>
};
