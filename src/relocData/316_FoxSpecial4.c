/* relocData file 316: FoxSpecial4 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Vtx: JointVerts @ 0x0 (3 vertices) */
Vtx dFoxSpecial4_JointVerts_Vtx[3] = {
	#include <FoxSpecial4/JointVerts.vtx.inc.c>
};

/* Raw data from file offset 0x0030 to 0x0038 (8 bytes) */
u8 dFoxSpecial4_gap_0x0030[8] = {
	#include <FoxSpecial4/gap_0x0030.data.inc.c>
};

/* DisplayList: ReflectorDL @ 0x38 (80 bytes) */
Gfx dFoxSpecial4_ReflectorDL_DisplayList[10] = {
	#include <FoxSpecial4/ReflectorDL.dl.inc.c>
};

/* Raw data from file offset 0x0088 to 0x0090 (8 bytes) */
u8 dFoxSpecial4_ReflectorDL_post[8] = {
	#include <FoxSpecial4/ReflectorDL_post.data.inc.c>
};

