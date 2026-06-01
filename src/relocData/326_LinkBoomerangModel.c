/* relocData file 326: LinkBoomerangModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"


/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u16 dLinkBoomerangModel_Lut3_0x0008[];
extern u8 dLinkBoomerangModel_Tex_0x0018[];
extern Vtx dLinkBoomerangModel_Vtx_0x0058_Vtx[];
PAD(8);

/* Raw data from file offset 0x0008 to 0x0018 (16 bytes) */
u16 dLinkBoomerangModel_Lut3_0x0008[8] = {
	#include <LinkBoomerangModel/Lut3_0x0008.palette.inc.c>
};

/* Texture data @ 0x0018 (64 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dLinkBoomerangModel_Lut3_0x0008 */
u8 dLinkBoomerangModel_Tex_0x0018[64] = {
	#include <LinkBoomerangModel/Tex_0x0018.tex.inc.c>
};

/* Vtx: Vtx_0x0058 @ 0x58 (10 vertices) */
Vtx dLinkBoomerangModel_Vtx_0x0058_Vtx[10] = {
	#include <LinkBoomerangModel/Vtx_0x0058.vtx.inc.c>
};

/* DisplayList: Joint_0x00F8 @ 0xF8 (216 bytes, 27 cmds) */
Gfx dLinkBoomerangModel_Joint_0x00F8_DisplayList[27] = {
	#include <LinkBoomerangModel/Joint_0x00F8.dl.inc.c>
};
