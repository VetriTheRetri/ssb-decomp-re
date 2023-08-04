#include "sys/system_03_1.h"

#include "sys/crash.h"
#include "sys/obj_renderer.h"
#include "sys/om.h"
#include "sys/system_03.h"

#include <macros.h>

#include <PR/os.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>

// `param` is the same type as the second argument to `cb`
void func_8000AEF0(s32 idx, void (*cb)(struct GObjCommon *, s32), s32 param) {
    struct GObjCommon *curr;
    struct GObjCommon *next;

    curr = gOMObjCommonLinks[idx];
    while (curr != NULL) {
        next = curr->unk04;
        cb(curr, param);
        curr = next;
    }
}

void func_8000AF58(void (*cb)(struct GObjCommon *, s32), s32 param) {
    struct GObjCommon *curr;
    struct GObjCommon *next;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gOMObjCommonLinks); i++) {
        curr = gOMObjCommonLinks[i];
        while (curr != NULL) {
            next = curr->unk04;
            cb(curr, param);
            curr = next;
        }
    }
}

// param might be off? or maybe it's `void *`?
struct GObjCommon *func_8000AFE4(
    s32 idx,
    struct GObjCommon *(*cb)(struct GObjCommon *, void *),
    void *param,
    s32 getFirst) {
    struct GObjCommon *curr;
    struct GObjCommon *next;
    struct GObjCommon *ret = NULL;

    curr = gOMObjCommonLinks[idx];
    while (curr != NULL) {
        struct GObjCommon *temp;

        next = curr->unk04;
        temp = cb(curr, param);

        if (temp) {
            ret = temp;
            if (getFirst == 1) { return ret; }
        }
        curr = next;
    }

    return ret;
}

struct GObjCommon *
func_8000B08C(struct GObjCommon *(*cb)(struct GObjCommon *, void *), u32 id, s32 getFirst) {
    struct GObjCommon *curr;
    struct GObjCommon *next;
    s32 i;
    struct GObjCommon *ret = NULL;

    for (i = 0; i < ARRAY_COUNT(gOMObjCommonLinks); i++) {
        curr = gOMObjCommonLinks[i];
        while (curr != NULL) {
            struct GObjCommon *temp;

            next = curr->unk04;
            temp = cb(curr, (void *)id);
            if (temp != NULL) {
                ret = temp;
                if (getFirst == TRUE) { return ret; }
            }
            curr = next;
        }
    }

    return ret;
}

struct GObjCommon *filter_is_id(struct GObjCommon *obj, void *id) {
    return obj->unk00 == (u32)id ? obj : NULL;
}

struct GObjCommon *get_id_from_gobj_idx(s32 idx, u32 id) {
    return func_8000AFE4(idx, filter_is_id, (void *)id, TRUE);
}

struct GObjCommon *find_gobj_with_id(u32 id) {
    return func_8000B08C(filter_is_id, id, TRUE);
}

void func_8000B1C4(UNUSED u32 arg0) {
    func_8000ADB0(NULL);
}

void stop_current_process(s32 timesToStop) {
    // todo: main.h STACK_PROBE_MAGIC
    if (D_80046A60->unk1C.thread->osStack[7] != 0xFEDCBA98) {
        fatal_printf("gobjthread stack over  gobjid = %d\n", D_80046A60->unk18->unk00);
    }

    while (timesToStop) {
        osSendMesg(&gOMMq, (OSMesg)1, OS_MESG_NOBLOCK);
        osStopThread(NULL);
        timesToStop--;
    }
}

void func_8000B284(struct GObjCommon *obj) {
    struct GObjProcess *proc;

    if (obj == NULL) { obj = D_80046A54; }

    proc = obj->unk18;
    while (proc != NULL) {
        proc->unk15 = 1;
        proc        = proc->unk00;
    }
}

void func_8000B2B8(struct GObjCommon *obj) {
    struct GObjProcess *proc;

    if (obj == NULL) { obj = D_80046A54; }

    proc = obj->unk18;
    while (proc != NULL) {
        proc->unk15 = 0;
        proc        = proc->unk00;
    }
}

void func_8000B2EC(struct GObjProcess *proc) {
    if (proc == NULL) { proc = D_80046A60; }

    proc->unk15 = 1;
}

void unref_8000B304(struct GObjProcess *proc) {
    if (proc == NULL) { proc = D_80046A60; }

    proc->unk15 = 0;
}

void unref_8000B31C(struct GObjCommon *obj, void *arg1) {
    struct GObjProcess *proc;

    if (obj == NULL) { obj = D_80046A54; }

    proc = obj->unk18;
    while (proc != NULL) {
        if (proc->unk20 == arg1) { proc->unk15 = 1; }
        proc = proc->unk00;
    }
}

void unref_8000B35C(struct GObjCommon *obj, void *arg1) {
    struct GObjProcess *proc;

    if (obj == NULL) { obj = D_80046A54; }

    proc = obj->unk18;
    while (proc != NULL) {
        if (proc->unk20 == arg1) { proc->unk15 = 0; }
        proc = proc->unk00;
    }
}

void func_8000B39C(struct GObjCommon *obj) {
    struct GObjProcess *curr, *next;

    if (obj == NULL) { obj = D_80046A54; }

    curr = obj->unk18;
    while (curr != NULL) {
        next = curr->unk00;
        func_8000848C(curr);
        curr = next;
    }
}

void func_8000B3EC(struct DObj *dobj) {
    func_80008CC0(dobj, 18, 0);
    func_80008CC0(dobj, 21, 0);
    func_80008CC0(dobj, 32, 0);
}

void func_8000B434(struct DObj *dobj) {
    func_80008CC0(dobj, 18, 0);
    func_80008CC0(dobj, 26, 0);
    func_80008CC0(dobj, 32, 0);
}

void func_8000B47C(struct OMCamera *cam) {
    func_80008CF0(cam, 3, 0);
    func_80008CF0(cam, 6, 0);
}

void unref_8000B4B4(struct GObjCommon *obj) {
    struct DObj *curr;

    curr = obj->unk74;
    while (curr != NULL) {
        func_800091F4(curr);
        curr = func_8000BAA0(curr);
    }
}

struct DObj *func_8000B4F8(struct GObjCommon *obj, void *arg1) {
    struct DObj *ret;

    ret = func_800092D0(obj, arg1);
    func_8000B3EC(ret);

    return ret;
}

struct DObj *unref_8000B528(struct DObj *dobj, void *arg1) {
    struct DObj *ret;

    ret = func_80009380(dobj, arg1);
    func_8000B3EC(ret);

    return ret;
}

struct DObj *func_8000B558(struct DObj *dobj, void *arg1) {
    struct DObj *ret;

    ret = func_800093F4(dobj, arg1);
    func_8000B3EC(ret);

    return ret;
}

struct DObj *unref_8000B588(struct GObjCommon *obj, void *arg1) {
    struct DObj *ret;

    ret = func_800092D0(obj, arg1);
    func_8000B434(ret);

    return ret;
}

struct DObj *unref_8000B5B8(struct DObj *dobj, void *arg1) {
    struct DObj *ret;

    ret = func_80009380(dobj, arg1);
    func_8000B434(ret);

    return ret;
}

struct DObj *unref_8000B5E8(struct DObj *dobj, void *arg1) {
    struct DObj *ret;

    ret = func_800093F4(dobj, arg1);
    func_8000B434(ret);

    return ret;
}

struct MaybeDObjChain {
    s32 unk00;
    void *unk04; // some DObj field 0x50 pointer
    struct Vec3i v;
}; // size == 0x14

void unref_8000B618(struct GObjCommon *arg0, struct MaybeDObjChain *arg1, struct DObj **arg2) {
    s32 i;
    struct DObj *dobj;
    struct DObj *store[18];

    // clang-format off
    for (i = 0; i < ARRAY_COUNT(store); i++) { 
        store[i] = NULL; 
    }
    // clang-format on

    while (arg1->unk00 != 18) {
        if (arg1->unk00 != 0) {
            dobj               = func_8000B558(store[arg1->unk00 - 1], arg1->unk04);
            store[arg1->unk00] = dobj;
        } else {
            dobj     = func_8000B4F8(arg0, arg1->unk04);
            store[0] = dobj;
        }
        dobj->unk18.i.v = arg1->v;

        if (arg2 != NULL) {
            *arg2 = dobj;
            arg2++;
        }
        arg1++;
    }
}

void func_8000B70C(struct GObjCommon *obj) {
    if (obj == NULL) { obj = D_80046A54; }

    while (obj->unk74 != NULL) { func_8000948C(obj->unk74); }
}

void func_8000B760(struct GObjCommon *obj) {
    if (obj == NULL) { obj = D_80046A54; }

    while (obj->unk74 != NULL) { func_800096EC(obj->unk74); }
}

// something like cleanup_linked_gobjs?
void func_8000B7B4(void) {
    struct GObjCommon *curr, *next;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gOMObjCommonLinks); i++) {
        curr = gOMObjCommonLinks[i];
        while (curr != NULL) {
            next = curr->unk04;
            omEjectGObjCommon(curr);
            curr = next;
        }
    }
}

struct GObjCommon *func_8000B824(
    u32 arg0,
    void (*arg1)(struct GObjCommon *),
    s32 arg2,
    u32 arg3,
    void (*arg4)(struct GObjCommon *),
    u8 arg5,
    s32 arg6,
    s32 arg7,
    void *arg8,
    s32 arg9,
    u8 argA,
    void *argB,
    u32 argC) {
    struct GObjCommon *gobj;
    struct DObj *dobj;

    gobj = omMakeGObjCommon(arg0, arg1, arg2, arg3);

    if (gobj == NULL) { return NULL; }

    func_80009DF4(gobj, arg4, arg5, arg6, arg7);
    dobj = func_800092D0(gobj, arg8);
    if (arg9 != 0) { func_8000B3EC(dobj); }
    if (argB != 0) { omAddGObjCommonProc(gobj, argB, argA, argC); }

    return gobj;
}

struct GObjCommon *func_8000B8BC(
    u32 arg0,
    void (*arg1)(struct GObjCommon *),
    s32 arg2,
    u32 arg3,
    void (*arg4)(struct GObjCommon *),
    u8 arg5,
    s32 arg6,
    s32 arg7,
    Sprite *arg8,
    u8 arg9,
    void *argA,
    u32 argB) {
    struct GObjCommon *gobj;

    gobj = omMakeGObjCommon(arg0, arg1, arg2, arg3);
    if (gobj == 0) { return NULL; }
    func_80009DF4(gobj, arg4, arg5, arg6, arg7);
    func_80009614(gobj, arg8);
    if (argA != 0) { omAddGObjCommonProc(gobj, argA, arg9, argB); }

    return gobj;
}

struct GObjCommon *func_8000B93C(
    u32 id,
    void (*arg1)(struct GObjCommon *),
    s32 link,
    u32 arg3,
    void (*arg4)(struct GObjCommon *),
    u32 arg5,
    s64 arg7,
    s32 arg8,
    s32 arg9,
    s32 arg10,
    void *arg11,
    u32 arg12,
    s32 arg13) {
    struct GObjCommon *gobj;
    struct OMCamera *cam;

    gobj = omMakeGObjCommon(id, arg1, link, arg3);
    if (gobj == NULL) { return NULL; }
    func_80009F74(gobj, arg4, arg5, arg7, arg8);
    cam = func_80009760(gobj);
    if (arg9 != 0) { func_8000B47C(cam); }
    if (arg11 != 0) { omAddGObjCommonProc(gobj, arg11, arg10, arg12); }
    if (arg13 != 0) {
        cam->unk80 = 7;
        cam->unk84 = 0xFF;
    }
    return gobj;
}

struct GObjCommon *func_8000B9FC(s32 link, u32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct GObjCommon *gobj;
    struct OMCamera *cam;

    gobj = func_8000B93C(
        0xFFFFFFFF, (void *)func_8000B1C4, link, arg1, func_80017DBC, arg2, 0, 0, 0, 0, 0, 0, 0);
    if (gobj == NULL) { return NULL; }

    cam        = gobj->unk74;
    cam->unk80 = arg3;
    cam->unk84 = arg4;

    return gobj;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

#ifdef NON_MATCHING
// nonmatching: regalloc (can't get the immediate v0 return)
//              and cannot get the final return statement to not be removed
struct DObj *func_8000BAA0(struct DObj *arg0) {
    if (arg0->unk10) { return arg0->unk10; }

    if (arg0->unk8) { return arg0->unk8; }

    while (TRUE) {
        if ((uintptr_t)arg0->unk14 == 1) { return NULL; }
        if (((struct DObj *)arg0->unk14)->unk8) { return ((struct DObj *)arg0->unk14)->unk8; }

        arg0 = arg0->unk14;
    };

    return arg0;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_03_1/func_8000BAA0.s")
#endif

#pragma GCC diagnostic pop

void gOMObj_SetAnimPlaybackRate(struct GObjCommon *arg0, f32 arg1) {
    struct DObj *dobj = arg0->unk74;

    while (dobj != NULL) {
        dobj->unk78 = arg1;
        dobj        = func_8000BAA0(dobj);
    }
}

void func_8000BB4C(struct GObjCommon *arg0, f32 arg1) {
    struct MObj *mobj;
    struct DObj *dobj = arg0->unk74;

    while (dobj != NULL) {
        dobj->unk78 = arg1;

        mobj = dobj->unk80;
        while (mobj != NULL) {
            mobj->unk9C = arg1;
            mobj        = mobj->next;
        }

        dobj = func_8000BAA0(dobj);
    }
}
