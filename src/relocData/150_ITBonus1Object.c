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
 *   0x10E8-0x117F  DObjDesc-shaped 152-byte block — the file's "object"
 *                  struct (id + dl pointer + transform), referenced from
 *                  inside the DL. Held as a u8 block until the exact
 *                  field layout is verified against the engine.
 */

#include "relocdata_types.h"

PAD(8);

/* @ 0x0008, 4096 bytes — score curves + RGBA32 image data */
u8 dITBonus1Object_data[0x1000] = {
	#include <ITBonus1Object/data.data.inc.c>
};

/* @ 0x1008, 64 bytes — Vtx[4] quad geometry */
Vtx dITBonus1Object_Vtx[4] = {
	#include <ITBonus1Object/Vtx.vtx.inc.c>
};

/* @ 0x1048, 160 bytes — Gfx[20] display list */
Gfx dITBonus1Object_DL[20] = {
	#include <ITBonus1Object/DL.dl.inc.c>
};

/* @ 0x10E8, 152 bytes — DObjDesc-shaped block (typing TBD) */
u8 dITBonus1Object_dobj[0x98] = {
	#include <ITBonus1Object/dobj.data.inc.c>
};
