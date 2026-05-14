/* relocData file 72: MVOpeningClashFighters — opening "clash" sequence assets.
 *
 * The previous typing labelled every block as `u32 ...[N]` with a comment
 * claiming AObjEvent32 streams. The actual structure (recovered from the
 * intern-chain reloc layout + decoded DL opcodes in block 0x0F98):
 *   - 0x0008    RGBA16 32x32 texture
 *   - 0x0808    Vtx[32] (loaded as base vertex bank by first gsSPVertex)
 *   - 0x0A08..0x0F78  thirteen Vtx[N] arrays (size = N*16 bytes)
 *   - 0x0F98    Gfx DL[131] (gsDPPipeSync..gsSPEndDisplayList) referencing
 *               every Tex/Vtx block above
 *   - 0x13B0    DObjDesc[3] (root + id=1 entry pointing back to the DL + id=18
 *               terminator). This is what consumes the DL.
 *   - 0x1440    CamAnimJoint (legitimate AObjEvent32 script)
 *
 * Note: neither the DL nor the DObjDesc is externally referenced — only
 * CamAnimJoint is exported in reloc_data.us.h. The Tex/Vtx/DL/DObjDesc
 * appear to be orphan dev-leftover data in the file. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

PAD(8);

/* RGBA16 texture @ 0x0008 (32x32, 2048 bytes) */
/* @tex fmt=RGBA16 dim=32x32 */
u8 dMVOpeningClashFighters_Tex_0x0008[2048] = {
	#include <MVOpeningClashFighters/Tex_0x0008.tex.inc.c>
};

/* Vtx @ 0x0808 (32 vertices) */
Vtx dMVOpeningClashFighters_Vtx_0x0808_Vtx[32] = {
	#include <MVOpeningClashFighters/Vtx_0x0808.vtx.inc.c>
};

/* Vtx @ 0x0A08 (1 vertex) */
Vtx dMVOpeningClashFighters_Vtx_0x0A08_Vtx[1] = {
	#include <MVOpeningClashFighters/Vtx_0x0A08.vtx.inc.c>
};

/* Vtx @ 0x0A18 (20 vertices) */
Vtx dMVOpeningClashFighters_Vtx_0x0A18_Vtx[20] = {
	#include <MVOpeningClashFighters/Vtx_0x0A18.vtx.inc.c>
};

/* Vtx @ 0x0B58 (10 vertices) */
Vtx dMVOpeningClashFighters_Vtx_0x0B58_Vtx[10] = {
	#include <MVOpeningClashFighters/Vtx_0x0B58.vtx.inc.c>
};

/* Vtx @ 0x0BF8 (1 vertex) */
Vtx dMVOpeningClashFighters_Vtx_0x0BF8_Vtx[1] = {
	#include <MVOpeningClashFighters/Vtx_0x0BF8.vtx.inc.c>
};

/* Vtx @ 0x0C08 (8 vertices) */
Vtx dMVOpeningClashFighters_Vtx_0x0C08_Vtx[8] = {
	#include <MVOpeningClashFighters/Vtx_0x0C08.vtx.inc.c>
};

/* Vtx @ 0x0C88 (1 vertex) */
Vtx dMVOpeningClashFighters_Vtx_0x0C88_Vtx[1] = {
	#include <MVOpeningClashFighters/Vtx_0x0C88.vtx.inc.c>
};

/* Vtx @ 0x0C98 (16 vertices) */
Vtx dMVOpeningClashFighters_Vtx_0x0C98_Vtx[16] = {
	#include <MVOpeningClashFighters/Vtx_0x0C98.vtx.inc.c>
};

/* Vtx @ 0x0D98 (5 vertices) */
Vtx dMVOpeningClashFighters_Vtx_0x0D98_Vtx[5] = {
	#include <MVOpeningClashFighters/Vtx_0x0D98.vtx.inc.c>
};

/* Vtx @ 0x0DE8 (9 vertices) */
Vtx dMVOpeningClashFighters_Vtx_0x0DE8_Vtx[9] = {
	#include <MVOpeningClashFighters/Vtx_0x0DE8.vtx.inc.c>
};

/* Vtx @ 0x0E78 (8 vertices) */
Vtx dMVOpeningClashFighters_Vtx_0x0E78_Vtx[8] = {
	#include <MVOpeningClashFighters/Vtx_0x0E78.vtx.inc.c>
};

/* Vtx @ 0x0EF8 (4 vertices) */
Vtx dMVOpeningClashFighters_Vtx_0x0EF8_Vtx[4] = {
	#include <MVOpeningClashFighters/Vtx_0x0EF8.vtx.inc.c>
};

/* Vtx @ 0x0F38 (4 vertices) */
Vtx dMVOpeningClashFighters_Vtx_0x0F38_Vtx[4] = {
	#include <MVOpeningClashFighters/Vtx_0x0F38.vtx.inc.c>
};

/* Vtx @ 0x0F78 (2 vertices) */
Vtx dMVOpeningClashFighters_Vtx_0x0F78_Vtx[2] = {
	#include <MVOpeningClashFighters/Vtx_0x0F78.vtx.inc.c>
};

/* Display list @ 0x0F98 (131 cmds, terminates with gsSPEndDisplayList) */
Gfx dMVOpeningClashFighters_DL_0x0F98[131] = {
	#include <MVOpeningClashFighters/DL_0x0F98.dl.inc.c>
};

/* DObjDesc array @ 0x13B0 (3 entries: root id=0 with scale 0.2, id=1 referencing
 * the DL above, id=18 terminator). The single chain pointer at DObjDesc[1].dl
 * is what the .reloc previously labelled "DL_0x0F98+0x448 → DL_0x0F98 (self)". */
DObjDesc dMVOpeningClashFighters_DObjDesc_0x13B0[3] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.2f, 0.2f, 0.2f } },
	{ 1, (void*)dMVOpeningClashFighters_DL_0x0F98, { 0.0f, -3000.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* CamAnimJoint @ 0x1440 (64 bytes) */
u32 dMVOpeningClashFighters_CamAnimJoint[15] = {
	aobjEvent32SetValAfter(0x266, 0),
	    0x43520000,  /* 210.0f */
	    0x00000000,  /* 0.0f */
	    0x43520000,  /* 210.0f */
	    0x00000000,  /* 0.0f */
	    0x41838232,  /* 16.43857192993164f */
	aobjEvent32SetVal0Rate(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 0),
	    0xC5672ED2,  /* -3698.92626953125f */
	aobjEvent32SetVal0Rate(0x010, 170),
	    0x44D1A001,  /* 1677.0001220703125f */
	aobjEvent32SetValBlock(0x001, 170),
	    0xC525C869,  /* -2652.525634765625f */
	aobjEvent32End(),
};
