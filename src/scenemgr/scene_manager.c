#include "common.h"
#include "scenemgr/scene_manager.h"

#include <ovl0/halsprite.h>
#include <ovl0/ovl0.h>
#include "ovl2/ovl2.h"
#include "scenemgr/entries.h"
#include <sys/crash.h>
#include <sys/dma.h>
#include <sys/gtl.h>
#include <sys/hal_audio.h>
#include <sys/objdraw.h>
#include <sys/system_00.h>
#include <sys/system_03_1.h>
#include <sys/system_04.h>
#include <sys/thread6.h>

#include <macros.h>

#include <PR/mbi.h>
#include <PR/ultratypes.h>


#pragma GLOBAL_ASM("asm/nonmatchings/scenemgr/scene_manager/start_scene_manager.s")

// set up gtl and om systems
void func_800A2698(struct gsGTLSetupDesc *arg) {
    gsGTLSceneInit(arg);
}

void func_800A26B8(void) {
    func_8000A340();
}

void func_800A26D8(struct GObjCommon *arg0);
#pragma GLOBAL_ASM("asm/nonmatchings/scenemgr/scene_manager/func_800A26D8.s")

struct GObjCommon *func_800A2B18(s32 link, u32 arg1, s32 arg2) {
    if (find_gobj_with_id(0xEFFFFFFF) != NULL) { return NULL; }

    return func_8000B93C(0xEFFFFFFF, NULL, link, arg1, func_800A26D8, arg2, 0, 0, 0, 0, 0, 0, 0);
}

// set_up_debug_objs ? something like that
void unref_800A2BA8(s32 link, u32 arg1, s32 arg2) {
    struct GObjCommon *com;

    com = find_gobj_with_id(0xFFFFFFFE);
    if (com != NULL) {
        omEjectGObj(com);
    } else {
        func_80022368(link, arg1, arg2);
    }

    com = find_gobj_with_id(0xEFFFFFFF);
    if (com != NULL) {
        omEjectGObj(com);
    } else {
        func_800A2B18(link, arg1, arg2);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/scenemgr/scene_manager/crash_inspect_gobj.s")

#pragma GLOBAL_ASM("asm/nonmatchings/scenemgr/scene_manager/smProcPrintGObjStatus.s")

#pragma GLOBAL_ASM("asm/nonmatchings/scenemgr/scene_manager/smRunPrintGObjStatus.s")
