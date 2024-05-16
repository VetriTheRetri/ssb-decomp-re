#include "obj.h"

#include "sys/gtl.h"
#include "sys/hal_gu.h"
#include "sys/system_00.h"
#include "sys/system_04.h"

#include <config.h>

/* These should no longer be required as they're included in obj.h
#include <macros.h>
#include <ssb_types.h>
#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>
*/

// gbi Mtx * ? pointer to some sort of matrix
Mtx *D_80046FA0;
f32 gSpriteLayerScale; // Sprite scale / depth? Appears to overlap objects in its own DLLink, so maybe depth?
Mtx44f D_80046FA8;
Mtx44f D_80046FE8;
Mtx44f D_80047028;
Mtx44f D_80047068;
s32 D_800470A8;
struct MtxProcTemp *D_800470AC;
Gfx *D_800470B0;

Gfx *D_800470B8[4];
Gfx D_800470C8[60];

s32 D_800472A8;
// the first pointer in the set of four doesn't seem to be used too much
Gfx *D_800472B0[4];
Gfx *D_800472C0;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

/* in F3DEX2 2.04H, there is a unique DList command for recalculating
    the MVP matrix in the coprocessor
*/
#define gSPMvpRecalc(pkt) gImmp21(pkt, G_SPECIAL_1, 0, 1, 0)
#define gsSPMvpRecalc()   gsImmp21(G_SPECIAL_1, 0, 1, 0)

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80010D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80012D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80013D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80013E68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80013E8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80013EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80013ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80013EF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80014038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80014068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_800143FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80014430.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_8001445C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/odRenderDObjTreeDLLinksForGObj.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80014798.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_800147E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_8001490C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80014A84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80014C38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80014CD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80014FFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80015358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_800154F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80015520.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80015860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80015890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80015A58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80015C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80015F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_800162C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80016338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_8001663C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80016AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80016EDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80017830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_8001783C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80017868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80017978.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80017AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80017B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80017CC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80017D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80017DBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80017DE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80017E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80017E34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_80017E5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80017EC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/unref_8001810C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/func_80018300.s")
