/* relocData file 315: FoxUnknown — Fox costume-accessory DL asset.
 *
 * Layout:
 *   0x000-0x007  PAD(8)
 *   0x008-0x027  16-color RGBA5551 palette
 *   0x028-0x02F  PAD(8)
 *   0x030-0x12F  256 bytes of CI4 texture pixels (32×16)
 *   0x130-0x3EF  Vtx[44] — 704 bytes of vertex data
 *   0x3F0-0x51F  Gfx[38] — display list that loads the palette/tex
 *                  and draws the vertex geometry. Referenced by
 *                  both FoxMain and KirbyMain at offset 0x3F0.
 *
 * Four intern-chain pointers live inside the DL; they resolve to the
 * palette, texture, and Vtx data earlier in the file (see .reloc).
 */

#include "relocdata_types.h"


/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u8 dFoxUnknown_Tex[];
extern Vtx dFoxUnknown_Vtx[];
extern u16 dFoxUnknown_palette[];
PAD(8);

/* @ 0x0008, 32 bytes — 16-color RGBA5551 palette */
u16 dFoxUnknown_palette[16] = {
	#include <FoxUnknown/palette.palette.inc.c>
};

PAD(8);

/* @ 0x0030, 256 bytes — CI4 texture (32×16) */
u8 dFoxUnknown_Tex[0x100] = {
	#include <FoxUnknown/Tex.tex.inc.c>
};

/* @ 0x0130, 704 bytes — 44 Vtx */
Vtx dFoxUnknown_Vtx[44] = {
	#include <FoxUnknown/Vtx.vtx.inc.c>
};

/* @ 0x03F0, 304 bytes — 38 Gfx commands (display list) */
Gfx dFoxUnknown_DL[38] = {
	#include <FoxUnknown/DL.dl.inc.c>
};
