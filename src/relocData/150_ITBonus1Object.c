/* relocData file 150: ITBonus1Object — Break-the-Targets target asset.
 *
 * Loaded once per Bonus1 (Break the Targets) stage by sc1pbonusstage.c
 * (see `sc1PBonusStageBonus1LoadFile`); the per-stage Bonus1<Fighter>Map
 * files reference its DL via extern chain entries patched at load time.
 *
 * Layout:
 *   0x0000-0x0007  PAD(8)
 *   0x0008-0x1007  4 KB header / image data pool — score curves at the
 *                  start (9-tuple + 16-tuple of (u8, u8, u16) records),
 *                  followed by RGBA32 pixel data starting around 0x130
 *                  (the orange target sign). Exact field decomposition
 *                  TBD; held as a single u8 block for now.
 *   0x1008-0x1047  Vtx[4] — quad geometry for the target sign (173×173
 *                  centred, full UV)
 *   0x1048-0x10E7  Gfx[20] — DL that loads the texture/palette and draws
 *                  the quad. Four intern-chain pointers inside this DL
 *                  resolve back to the data pool, the Vtx array, and the
 *                  trailing dobj block.
 *   0x10E8-0x10F7  DObjDLLink[2] — selects the DL (list 1), `{4,NULL}` term.
 *   0x10F8-0x117B  DObjDesc[3] joint tree — `{0,NULL,…}`, `{1,&dobj,…}`,
 *                  `{18,NULL,…}` terminator.
 *   0x117C-0x117F  PAD(4).
 */

#include "relocdata_types.h"

PAD(8);

/* @ 0x0008, 4096 bytes — score curves + RGBA32 image data */
u8 dITBonus1Object_data[0x1000] = {
	#include <ITBonus1Object/data.tex.inc.c>
};

/* @ 0x1008, 64 bytes — Vtx[4] quad geometry */
Vtx dITBonus1Object_Vtx[4] = {
	#include <ITBonus1Object/Vtx.vtx.inc.c>
};

/* @ 0x1048, 160 bytes — Gfx[20] display list */
Gfx dITBonus1Object_DL[20] = {
	#include <ITBonus1Object/DL.dl.inc.c>
};

/* @ 0x10E8, 16 bytes — DObjDLLink selector (DL list 1) */
DObjDLLink dITBonus1Object_dobj[2] = {
	{ 1, dITBonus1Object_DL },
	{ 4, NULL },
};

/* @ 0x10F8, 132 bytes — DObjDesc joint tree */
DObjDesc dITBonus1Object_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dITBonus1Object_dobj, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x117C, 4 bytes (raw gap) */
PAD(4);
