/* relocData file 316: FoxSpecial4 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"


/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Vtx dFoxSpecial4_JointVerts_Vtx[];
/* Vtx: JointVerts @ 0x0 (4 vertices) — absorbs old gap_0x0030 and the 8 bytes
 * the extractor had at the head of ReflectorDL. */
Vtx dFoxSpecial4_JointVerts_Vtx[4] = {
	#include <FoxSpecial4/JointVerts.vtx.inc.c>
};

/* DisplayList: ReflectorDL @ 0x40 (72 bytes) — real DL starts here (after the
 * 4 Vtx), 9 commands ending at 0x88. */
Gfx dFoxSpecial4_ReflectorDL_DisplayList[9] = {
	#include <FoxSpecial4/ReflectorDL.dl.inc.c>
};

/* @ 0x88: 8 bytes of trailing zero pad. */
