#include "sys/om.h"

#include "sys/crash.h"
#include "sys/gtl.h"
#include "sys/obj_renderer.h"
#include "sys/rdp_reset.h"
#include "sys/system_03_1.h"

#include <sys/obj.h>

#include <macros.h>
#include <ssb_types.h>
#include <stddef.h>

#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>

// TODOs:
// permutter on alloc_om_ etc functions

// structs
/// List that connects lists of stack nodes of `size` bytes
struct OMThreadStackList {
    /* 0x00 */ struct OMThreadStackList *next;
    /* 0x04 */ struct OMThreadStackNode *stack;
    /* 0x08 */ u32 size;
}; // size == 0x0C

// data

OSId sProcessThreadID = 10000000;

s32 D_8003B874 = 0;

struct Mtx6Float D_8003B878 = {NULL, {0.0, 30.0, 4.0 / 3.0, 100.0, 12800.0, 1.0}};

struct Mtx7Float D_8003B894 = {NULL, {-160.0, 160.0, -120.0, 120.0, 100.0, 12800.0, 1.0}};

struct Mtx3x3Float D_8003B8B4 = {NULL, {{0.0, 0.0, 1500.0}, {0.0, 0.0, 0.0}, {0.0, 1.0, 0.0}}};

union Mtx3fi D_8003B8DC = {{NULL, {0.0, 0.0, 0.0}}};

struct Mtx4Float D_8003B8EC = {NULL, {0.0, 0.0, 0.0, 1.0}};

struct Mtx4Float D_8003B900 = {NULL, {0.0, 0.0, 0.0, 0.0}};

struct Mtx3Float D_8003B914 = {NULL, {1.0, 1.0, 1.0}};

// bss

struct GObjThread *sObjThreadHead;
u32 sObjThreadsActive;
u32 sThreadStacksActive;
u32 sThreadStackSize;
u32 sUnkUnusedSetup;
struct OMThreadStackList *sThreadStackHead;
void (*sOMObjProcessCallback)(struct GObjProcess *);
struct GObjProcess *sOMObjProcessHead;
struct GObjProcess *sObjProcessQueue[6];
u32 sOMObjProcessesActive;
struct GObjCommon *gOMObjCommonLinks[OM_COMMON_MAX_LINKS];
struct GObjCommon *sOMObjCommonLinks[OM_COMMON_MAX_LINKS];
GObj *sOMObjCommonHead;
struct GObjCommon *gOMObjCommonDLLinks[OM_COMMON_MAX_DL_LINKS];
struct GObjCommon *sOMObjCommonDLLinks[OM_COMMON_MAX_DL_LINKS];
s32 sOMObjCommonsActive;
u16 sObjCommonSize;
s16 sMaxNumObjCommon;
struct OMMtx *sOMMtxHead;
u32 sOMMtxActive;
void (*sDObjDataCleanup)(struct DObjDynamicStore *);
struct AObj *sAObjHead;
u32 sAObjsActive;
struct MObj *sMObjHead;
u32 sMObjsActive;

DObj *sDObjHead;
u32 sDObjsActive;
u16 sDObjSize;

SObj *sSObjHead;
u32 sSObjsActive;
u16 sSObjSize;

struct Camera *sCameraHead;
u32 sCamerasActive;
u16 sCameraSize;
struct GObjCommon *D_80046A54;
struct GObjCommon *D_80046A58;
struct GObjCommon *D_80046A5C;
struct GObjProcess *D_80046A60;
u32 D_80046A64;
OSMesg sOMMsg[1];
OSMesgQueue gOMMq;
// u8 D_80046A88[1280];
struct Unk80046A88 D_80046A88[64];
u8 D_80046F88[24];

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

GObjThread* omGetGObjThread(void)
{
    GObjThread *gobjthread;

    if (sObjThreadHead == NULL) 
    {
        sObjThreadHead = hlMemoryAlloc(sizeof(GObjThread), 0x8);

        sObjThreadHead->next = NULL;
    }

    if (sObjThreadHead == NULL) 
    {
        gsFatalPrintF("om : couldn't get GObjThread\n");
        while (TRUE); // { }
    }

    gobjthread = sObjThreadHead;
    sObjThreadHead = sObjThreadHead->next;
    sObjThreadsActive++;

    return gobjthread;
}

void omSetGObjThreadPrevAlloc(GObjThread *gobjthread) 
{
    gobjthread->next        = sObjThreadHead;
    sObjThreadHead = gobjthread;
    sObjThreadsActive--;
}

OMThreadStackNode* omGetStackOfSize(u32 size)
{
    OMThreadStackList *curr;
    OMThreadStackList *prev;
    OMThreadStackNode *ret;

    curr = sThreadStackHead;
    prev = NULL;

    while (curr != NULL) 
    {
        if (curr->size == size)
        {
            break;
        }
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL) 
    {
        curr        = hlMemoryAlloc(sizeof(OMThreadStackList), 4);
        curr->next  = NULL;
        curr->stack = NULL;
        curr->size  = size;

        if (prev != NULL) 
        {
            prev->next = curr;
        } 
        else sThreadStackHead = curr;
    }

    if (curr->stack != NULL) 
    {
        ret = curr->stack;

        curr->stack = curr->stack->next;
    } 
    else
    {
        ret = hlMemoryAlloc(size + offsetof(struct OMThreadStackNode, stack), 8);

        ret->stackSize = size;
    }

    ret->next = NULL;
    sThreadStacksActive++;
    return ret;
}

OMThreadStackNode* omGetDefaultStack(void)
{
    return omGetStackOfSize(sThreadStackSize);
}

void omEjectStackNode(struct OMThreadStackNode *node) 
{
    OMThreadStackList *parent = sThreadStackHead;

    while (parent != NULL) 
    {
        if (parent->size == node->stackSize) 
        { 
            break; 
        }
        parent = parent->next;
    }
    if (parent == NULL) 
    {
        gsFatalPrintF("om : Illegal GObjThreadStack Link\n");
        while (TRUE); // { }
    }

    node->next    = parent->stack;
    parent->stack = node;
    sThreadStacksActive--;
}

GObjProcess* omGetGObjProcess(void)
{
    GObjProcess *gobjproc;

    if (sOMObjProcessHead == NULL) 
    {
        sOMObjProcessHead = hlMemoryAlloc(sizeof(struct GObjProcess), 4);

        sOMObjProcessHead->unk00 = NULL;
    }

    if (sOMObjProcessHead == NULL) 
    {
        gsFatalPrintF("om : couldn't get GObjProcess\n");
        while (TRUE) { }
    }

    gobjproc          = sOMObjProcessHead;
    sOMObjProcessHead = sOMObjProcessHead->unk00;
    sOMObjProcessesActive++;

    return gobjproc;
}

// 0x80007680
void omLinkGObjProcess(GObjProcess *gobjproc)
{
    GObj *parent_gobj = gobjproc->parent_gobj;
    s32 link_id = gobjproc->parent_gobj->link_id;
    GObj *prev_gobj = gobjproc->parent_gobj;

    while (TRUE)
    {
        while (prev_gobj != NULL)
        {
            GObjProcess *prev_gobjproc = prev_gobj->gobjproc_prev;

            while (prev_gobjproc != NULL)
            {
                if (prev_gobjproc->priority == gobjproc->priority)
                {
                    gobjproc->unk_gobjproc_0x8 = prev_gobjproc->unk_gobjproc_0x8;
                    prev_gobjproc->unk_gobjproc_0x8 = gobjproc;
                    gobjproc->unk_gobjproc_0xC = prev_gobjproc;

                    goto loop_exit;
                }
                prev_gobjproc = prev_gobjproc->unk_gobjproc_0x4;
            }
            prev_gobj = prev_gobj->link_prev;
        }
        if (link_id != 0)
        {
            prev_gobj = sOMObjCommonLinks[--link_id];
        }
        else
        {
            gobjproc->unk_gobjproc_0x8 = sObjProcessQueue[gobjproc->priority];
            sObjProcessQueue[gobjproc->priority] = gobjproc;
            gobjproc->unk_gobjproc_0xC = NULL;
            break;
        }
    }
loop_exit:
    if (gobjproc->unk_gobjproc_0x8 != NULL)
    {
        gobjproc->unk_gobjproc_0x8->unk_gobjproc_0xC = gobjproc;
    }
    if (parent_gobj->gobjproc_prev != NULL)
    {
        parent_gobj->gobjproc_prev->unk_gobjproc_0x0 = gobjproc;
    }
    else parent_gobj->gobjproc_next = gobjproc;

    gobjproc->unk_gobjproc_0x4 = parent_gobj->gobjproc_prev;
    gobjproc->unk_gobjproc_0x0 = NULL;
    parent_gobj->gobjproc_prev = gobjproc;
}

// 0x80007758
void omSetGObjProcessPrevAlloc(GObjProcess *gobjproc)
{
    gobjproc->unk_gobjproc_0x0 = sOMObjProcessHead;
    sOMObjProcessHead = gobjproc;
    sOMObjProcessesActive--;
}

// 0x80007784
void func_80007784(GObjProcess *gobjproc) 
{
    if (gobjproc->unk_gobjproc_0xC != NULL) 
    {
        gobjproc->unk_gobjproc_0xC->unk_gobjproc_0x8 = gobjproc->unk_gobjproc_0x8;
    } 
    else sObjProcessQueue[gobjproc->priority] = gobjproc->unk_gobjproc_0x8;

    if (gobjproc->unk_gobjproc_0x8 != NULL)
    { 
        gobjproc->unk_gobjproc_0x8->unk_gobjproc_0xC = gobjproc->unk_gobjproc_0xC;
    }
}

// 0x800077D0
void func_800077D0(GObjProcess *gobjproc)
{
    GObj *gobj = gobjproc->parent_gobj;

    func_80007784(gobjproc);

    if (gobjproc->unk_gobjproc_0x4 != NULL) 
    {
        gobjproc->unk_gobjproc_0x4->unk_gobjproc_0x0 = gobjproc->unk_gobjproc_0x0;
    }
    else gobj->gobjproc_next = gobjproc->unk_gobjproc_0x0;
    
    if (gobjproc->unk_gobjproc_0x0 != NULL) 
    {
        gobjproc->unk_gobjproc_0x0->unk_gobjproc_0x4 = gobjproc->unk_gobjproc_0x4;
    }
    else gobj->gobjproc_prev = gobjproc->unk_gobjproc_0x4;
}

// 0x80007840
GObjProcess* unref_80007840(void) 
{
    return D_80046A60;
}

// 0x8000784C
u64* unref_8000784C(GObjProcess *gobjproc) 
{
    if (gobjproc == NULL) 
    {
        gobjproc = D_80046A60;
    }
    if ((gobjproc != NULL) && (gobjproc->kind == 0))
    { 
        return gobjproc->gobjthread->os_stack;
    }
    else return NULL;
}

// 0x800007884
u32 unref_80007884(GObjProcess *gobjproc) 
{
    if (gobjproc == NULL) 
    { 
        gobjproc = D_80046A60; 
    }

    if ((gobjproc != NULL) && (gobjproc->kind == 0)) 
    {
        return gobjproc->gobjthread->stack_size;
    }
    else return 0;
}

// 0x800078BC
void unref_800078BC(void (*proc)(GObjProcess*))
{
    sOMObjProcessCallback = proc;
}

// 0x800078C8
s32 omGetGObjActiveCount(void)
{
    GObj *gobj = sOMObjCommonHead;
    s32 i                   = 0;

    while (gobj != NULL)
    {
        i++;
        gobj = gobj->link_next;
    }

    return i + sOMObjCommonsActive;
}

// 0x800078FC
GObj* omGetGObjSetNextAlloc(void) 
{
    GObj *gobj;

    if (sMaxNumObjCommon == -1 || sOMObjCommonsActive < sMaxNumObjCommon)
    {
        gobj = sOMObjCommonHead;

        if (gobj == NULL) 
        {
            sOMObjCommonHead = hlMemoryAlloc(sObjCommonSize, 0x8);
            sOMObjCommonHead->link_next = NULL;
            gobj = sOMObjCommonHead;
        }
    }
    else return NULL;

    if (gobj == NULL) 
    {
        return NULL;
    }

    sOMObjCommonHead = gobj->link_next;
    sOMObjCommonsActive++;

    return gobj;
}

// 0x800079A8
void omSetGObjPrevAlloc(GObj *gobj) 
{
    gobj->link_next = sOMObjCommonHead;
    sOMObjCommonHead = gobj;
    sOMObjCommonsActive--;
}

// 0x800079D4
void omAppendGObjToLinkedList(GObj *this_gobj, GObj *link_gobj)
{
    this_gobj->link_prev = link_gobj;

    if (link_gobj != NULL) 
    {
        this_gobj->link_next = link_gobj->link_next;
        link_gobj->link_next = this_gobj;
    } 
    else 
    {
        this_gobj->link_next = gOMObjCommonLinks[this_gobj->link_id];
        gOMObjCommonLinks[this_gobj->link_id] = this_gobj;
    }
    if (this_gobj->link_next != NULL) 
    {
        this_gobj->link_next->link_prev = this_gobj;
    } 
    else sOMObjCommonLinks[this_gobj->link_id] = this_gobj;
}

// 0x80007A3C
void omLinkGObjPrevOrder(GObj *this_gobj)
{
    GObj *current_gobj = sOMObjCommonLinks[this_gobj->link_id];

    while (current_gobj != NULL && current_gobj->link_order < this_gobj->link_order)
    {
        current_gobj = current_gobj->link_prev;
    }
    omAppendGObjToLinkedList(this_gobj, current_gobj);
}

// 0x80007AA8
void omLinkGObjNextOrder(GObj *this_gobj)
{
    GObj *current_gobj = gOMObjCommonLinks[this_gobj->link_id];
    GObj *found_gobj;

    while (current_gobj != NULL && this_gobj->link_order < current_gobj->link_order)
    {
        current_gobj = current_gobj->link_next;
    }
    if (current_gobj != NULL)
    {
        found_gobj = current_gobj->link_prev;
    } 
    else found_gobj = sOMObjCommonLinks[this_gobj->link_id];
   
    omAppendGObjToLinkedList(this_gobj, found_gobj);
}

// 0x80007B30
void omRemoveGObjFromLinkedList(GObj *this_gobj)
{
    if (this_gobj->link_prev != NULL) 
    {
        this_gobj->link_prev->link_next = this_gobj->link_next;
    }
    else gOMObjCommonLinks[this_gobj->link_id] = this_gobj->link_next;
    
    if (this_gobj->link_next != NULL)
    {
        this_gobj->link_next->link_prev = this_gobj->link_prev;
    } 
    else sOMObjCommonLinks[this_gobj->link_id] = this_gobj->link_prev;
}

// 0x80007B98
void omAppendGObjToDLLinkedList(GObj *this_gobj, GObj *dl_link_gobj)
{
    this_gobj->dl_link_prev = dl_link_gobj;

    if (dl_link_gobj != NULL)
    {
        this_gobj->dl_link_next = dl_link_gobj->dl_link_next;
        dl_link_gobj->dl_link_next = this_gobj;
    } 
    else 
    {
        this_gobj->dl_link_next = gOMObjCommonDLLinks[this_gobj->dl_link_id];
        gOMObjCommonDLLinks[this_gobj->dl_link_id] = this_gobj;
    }

    if (this_gobj->dl_link_next != NULL)
    {
        this_gobj->dl_link_next->dl_link_prev = this_gobj;
    } 
    else sOMObjCommonDLLinks[this_gobj->dl_link_id] = this_gobj;
}

// 0x80007C00
void omDLLinkGObjPrevOrder(GObj *this_gobj) 
{
    GObj *current_gobj = sOMObjCommonDLLinks[this_gobj->dl_link_id];

    while (current_gobj != NULL && current_gobj->dl_link_order < this_gobj->dl_link_order)
    { 
        current_gobj = current_gobj->dl_link_prev;
    }
    omAppendGObjToDLLinkedList(this_gobj, current_gobj);
}

// 0x80007C6C
void omDLLinkGObjNextOrder(GObj *this_gobj) 
{
    GObj *current_gobj = gOMObjCommonDLLinks[this_gobj->dl_link_id];
    GObj *found_gobj;

    while (current_gobj != NULL && this_gobj->dl_link_order < current_gobj->dl_link_order)
    { 
        current_gobj = current_gobj->dl_link_next;
    }
    if (current_gobj != NULL) 
    {
        found_gobj = current_gobj->dl_link_prev;
    }
    else found_gobj = sOMObjCommonDLLinks[this_gobj->dl_link_id];

    omAppendGObjToDLLinkedList(this_gobj, found_gobj);
}

// 0x80007CF4
void omRemoveGObjFromDLLinkedList(GObj *this_gobj)
{
    if (this_gobj->dl_link_prev != NULL) 
    {
        this_gobj->dl_link_prev->dl_link_next = this_gobj->dl_link_next;
    }
    else gOMObjCommonDLLinks[this_gobj->dl_link_id] = this_gobj->unk20;

    if (this_gobj->dl_link_next != NULL)
    {
        this_gobj->dl_link_next->dl_link_prev = this_gobj->dl_link_prev;
    }
    else sOMObjCommonDLLinks[this_gobj->dl_link_id] = this_gobj->dl_link_prev;
}

OMMtx* omGetOMMtxSetNextAlloc(void)
{
    OMMtx *ommtx;

    if (sOMMtxHead == NULL)
    {
        sOMMtxHead = hlMemoryAlloc(sizeof(OMMtx), 0x8);

        sOMMtxHead->next = NULL;
    }

    if (sOMMtxHead == NULL)
    {
        gsFatalPrintF("om : couldn't get OMMtx\n");
        while (TRUE); // {}
    }

    ommtx = sOMMtxHead;
    sOMMtxHead = sOMMtxHead->next;
    sOMMtxActive++;

    return ommtx;
}

// 0x80007DD8
void omSetOMMtxPrevAlloc(OMMtx *ommtx) 
{
    ommtx->next = sOMMtxHead;
    sOMMtxHead  = ommtx;
    sOMMtxActive--;
}

// 0x80007E04
AObj* omGetAObjSetNextAlloc(void) 
{
    AObj *aobj;

    if (sAObjHead == NULL) 
    {
        sAObjHead = hlMemoryAlloc(sizeof(AObj), 0x4);

        sAObjHead->next = NULL;
    }

    if (sAObjHead == NULL)
    {
        gsFatalPrintF("om : couldn't get AObj\n");
        while (TRUE); // {}
    }
    aobj = sAObjHead;
    sAObjHead = sAObjHead->next;
    sAObjsActive++;

    return aobj;
}

void omAppendAObjToDObj(DObj *dobj, AObj *aobj) 
{
    aobj->next  = dobj->aobj;
    dobj->aobj = aobj;
}

// 0x80007E90
void omAppendAObjToMObj(MObj *mobj, AObj *aobj)
{
    aobj->next  = mobj->aobj;
    mobj->aobj = aobj;
}

// 0x80007EA0
void omAppendAObjToCamera(Camera *cam, AObj *aobj)
{
    aobj->next = cam->aobj;
    cam->aobj = aobj;
}

void omSetAObjPrevAlloc(struct AObj *a) 
{
    a->next = sAObjHead;
    sAObjsActive--;
    sAObjHead = a;
}

MObj* omGetMObjSetNextAlloc(void) 
{
    MObj *mobj;

    if (sMObjHead == NULL)
    {
        sMObjHead = hlMemoryAlloc(sizeof(MObj), 0x4);

        sMObjHead->next = NULL;
    }

    if (sMObjHead == NULL) 
    {
        gsFatalPrintF("om : couldn't get MObj\n");
        while (TRUE); // {}
    }

    mobj = sMObjHead;
    sMObjHead = sMObjHead->next;
    sMObjsActive++;

    return mobj;
}

void omSetMObjPrevAlloc(MObj *mobj)
{
    mobj->mobj_next = sMObjHead;
    sMObjsActive--;
    sMObjHead = mobj;
}

DObj* omGetDObjSetNextAlloc(void)
{
    DObj *dobj;

    if (sDObjHead == NULL) 
    {
        sDObjHead = hlMemoryAlloc(sDObjSize, 0x8);

        sDObjHead->alloc_free = NULL;
    }

    if (sDObjHead == NULL)
    {
        gsFatalPrintF("om : couldn't get DObj\n");
        while (TRUE); // {}
    }

    dobj = sDObjHead;
    sDObjHead = sDObjHead->alloc_free;
    sDObjsActive++;

    return dobj;
}

void omSetDObjPrevAlloc(DObj *dobj) 
{
    dobj->alloc_free = sDObjHead;
    sDObjsActive--;
    sDObjHead = dobj;
}

SObj* omGetSObjSetNextAlloc(void) 
{
    SObj *sobj;

    if (sSObjHead == NULL) 
    {
        sSObjHead = hlMemoryAlloc(sSObjSize, 0x8);

        sSObjHead->alloc_free = NULL;
    }

    if (sSObjHead == NULL)
    {
        gsFatalPrintF("om : couldn't get SObj\n");
        while (TRUE); // {}
    }

    sobj = sSObjHead;
    sSObjHead = sSObjHead->alloc_free;
    sSObjsActive++;

    return sobj;
}

void omSetSObjPrevAlloc(SObj *sobj)
{
    sobj->alloc_free = sSObjHead;
    sSObjsActive--;
    sSObjHead = sobj;
}

Camera* omGetCameraSetNextAlloc(void)
{
    Camera *cam;

    if (sCameraHead == NULL) 
    {
        sCameraHead       = hlMemoryAlloc(sCameraSize, 0x8);
        sCameraHead->next = NULL;
    }

    if (sCameraHead == NULL) 
    {
        gsFatalPrintF("om : couldn't get Camera\n");
        while (TRUE); // {}
    }

    cam = sCameraHead;
    sCameraHead = sCameraHead->next;
    sCamerasActive++;

    return cam;
}

void omSetCameraPrevAlloc(Camera *cam) 
{
    cam->next = sCameraHead;
    sCamerasActive--;
    sCameraHead = cam;
}

GObjProcess* omAddGObjCommonProc(GObj *gobj, void (*proc)(GObj*), u8 kind, u32 priority)
{
    OMThreadStackNode *stack_node;
    GObjThread *gobjthread;
    GObjProcess *gobjproc;

    if (gobj == NULL)
    {
        gobj = D_80046A54;
    }
    gobjproc = omGetGObjProcess();

    if (priority >= 6)
    {
        gsFatalPrintF("om : GObjProcess's priority is bad value\n");
        while (TRUE); // {}
    }
    gobjproc->priority = priority;
    gobjproc->kind = kind;
    gobjproc->unk_gobjproc_0x15 = 0;
    gobjproc->parent_gobj = gobj;
    gobjproc->proc_common = proc;

    switch (kind)
    {
        case GObjProcess_Kind_OSThread:
        {
            gobjthread             = omGetGObjThread();
            gobjproc->gobjthread   = gobjthread;

            stack_node             = omGetDefaultStack();
            gobjthread->os_stack   = stack_node->stack;
            gobjthread->stack_size = sThreadStackSize;

            osCreateThread
            (
                &gobjthread->os_thread,
                sProcessThreadID++,
                proc,
                gobj,
                &thread->osStack[sThreadStackSize / 8],
                51
            );

            gobjthread->os_stack[7] = 0xFEDCBA98;

            if (sProcessThreadID >= 20000000) 
            {
                sProcessThreadID = 10000000;
            }
            break;
        }
        case GObjProcess_Kind_Proc:
        {
            gobjproc->proc_thread = proc;
            break;
        }
        default:
        {
            gsFatalPrintF("om : GObjProcess's kind is bad value\n");
            while (TRUE); // {}
        }
    }
    omLinkGObjProcess(gobjproc);

    return gobjproc;
}

struct GObjProcess *unref_80008304(
    struct GObjCommon *ctx,
    void (*entry)(void *),
    u32 pri,
    s32 threadId,
    u32 stackSize) {
    struct GObjProcess *process; // s0
    struct GObjThread *thread;   // v1 / sp28
    struct OMThreadStackNode *stackNode;
    OSId tid;

    if (ctx == NULL) { ctx = D_80046A54; }

    process = omGetGObjProcess();

    if (pri >= 6) {
        gsFatalPrintF("om : GObjProcess's priority is bad value\n");
        while (TRUE) { }
    }

    process->unk10 = pri;
    process->unk15 = 0;
    process->unk18 = ctx;
    process->unk20 = entry;

    process->unk1C.thread = thread = omGetGObjThread();
    process->unk14                 = 0;

    stackNode         = stackSize == 0 ? omGetDefaultStack() : omGetStackOfSize(stackSize);
    thread->osStack   = stackNode->stack;
    thread->stackSize = stackSize == 0 ? sThreadStackSize : stackSize;
    tid               = threadId != -1 ? threadId : sProcessThreadID++;

    osCreateThread(&thread->osThread, tid, entry, ctx, &thread->osStack[thread->stackSize / 8], 51);
    thread->osStack[7] = 0xFEDCBA98;
    if (sProcessThreadID >= 20000000) { sProcessThreadID = 10000000; }

    omLinkGObjProcess(process);
    return process;
}

void func_8000848C(struct GObjProcess *arg0) {
    struct OMThreadStackNode *tnode;

    if (arg0 == NULL || arg0 == D_80046A60) {
        D_80046A64 = 1;
        if (D_80046A60->unk14 == 0) { gsStopCurrentProcess(1); }
        return;
    }

    if (sOMObjProcessCallback != NULL) { sOMObjProcessCallback(arg0); }

    switch (arg0->unk14) {
        case 0:
        {
            osDestroyThread(&arg0->unk1C.thread->osThread);
            // cast from stack pointer back to stack node
            tnode =
                (void
                     *)((uintptr_t)(arg0->unk1C.thread->osStack) - offsetof(struct OMThreadStackNode, stack));
            omEjectStackNode(tnode);
            omSetGObjThreadPrevAlloc(arg0->unk1C.thread);
            break;
        }
        case 1:
        {
            // required empty case
        }
    }

    func_800077D0(arg0);
    omSetGObjProcessPrevAlloc(arg0);
}

struct OMMtx *func_8000855C(struct DObj *arg0, u8 arg1, u8 arg2, s32 arg3);
#ifdef NON_MATCHING
// nonmatching: closer than it has any right to be, but the "wtf" loop is still way off
struct OMMtx *func_8000855C(struct DObj *arg0, u8 arg1, u8 arg2, s32 arg3) {
    uintptr_t csr;        // v1
    union Mtx3fi *t2;     // sp28
    struct Mtx4Float *t1; // sp24
    struct Mtx3Float *t4; // sp20
    s32 i;                // a0
    struct OMMtx *mtx;    // v0

    if (arg0->unk56 == 5) {
        gsFatalPrintF("om : couldn\'t add OMMtx for DObj\n");
        while (TRUE) { }
    }
    // L8000859C
    if (arg0->unk4C != NULL) {
        csr = (uintptr_t)arg0->unk4C->data;
        for (i = 0; i < 3; i++) {
            // L800085C8
            switch (arg0->unk4C->kinds[i]) {
                case 0: break;
                case 1:
                    t2 = (void *)csr;
                    csr += sizeof(union Mtx3fi);
                    break;
                case 2:
                    t1 = (void *)csr;
                    csr += sizeof(struct Mtx4Float);
                    break;
                case 3:
                    t4 = (void *)csr;
                    csr += sizeof(struct Mtx3Float);
                    break;
            }
            // L80008618
        }
    }
    // L8000862C
    if (arg3 < arg0->unk56) {
        for (i = arg3; i < arg0->unk56; i++) {
            // wtf
            ((u32 *)arg0)[arg0->unk56 - i + 0x5C] = ((u32 *)arg0)[arg0->unk56 - i + 0x54];
        }
    }
    // L8000866C
    arg0->unk56 += 1;

    mtx = omGetOMMtxSetNextAlloc();

    arg0->unk58[arg3] = mtx;
    mtx->unk04        = arg1;

    switch (arg1) {
        case 18:
        case 34:
        case 36:
        case 38:
        case 40:
        case 55:
        {
            // L800086D0
            arg0->unk18       = D_8003B8DC;
            arg0->unk18.f.mtx = mtx;
            break;
        }
        case 19:
        case 23:
        {
            // L80008700
            arg0->unk28     = D_8003B8EC;
            arg0->unk28.mtx = mtx;
            break;
        }
        case 20:
        case 24:
        {
            // L80008738
            arg0->unk18       = D_8003B8DC;
            arg0->unk28       = D_8003B8EC;
            arg0->unk18.f.mtx = mtx;
            arg0->unk28.mtx   = mtx;
            break;
        }
        case 21:
        case 26:
        case 29:
        {
            // L8000879C
            arg0->unk28     = D_8003B900;
            arg0->unk28.mtx = mtx;
            break;
        }
        case 22:
        case 27:
        case 30:
        case 51:
        case 52:
        {
            // L800087D4
            arg0->unk18       = D_8003B8DC;
            arg0->unk28       = D_8003B900;
            arg0->unk18.f.mtx = mtx;
            arg0->unk28.mtx   = mtx;
            break;
        }
        case 25:
        {
            // L80008838
            arg0->unk18       = D_8003B8DC;
            arg0->unk28       = D_8003B8EC;
            arg0->unk3C       = D_8003B914;
            arg0->unk18.f.mtx = mtx;
            arg0->unk28.mtx   = mtx;
            arg0->unk3C.mtx   = mtx;
            break;
        }
        case 28:
        case 31:
        case 54:
        {
            // L800088C8
            arg0->unk18       = D_8003B8DC;
            arg0->unk28       = D_8003B900;
            arg0->unk3C       = D_8003B914;
            arg0->unk18.f.mtx = mtx;
            arg0->unk28.mtx   = mtx;
            arg0->unk3C.mtx   = mtx;
            break;
        }
        case 32:
        case 43:
        case 44:
        case 47:
        case 48:
        case 49:
        case 50:
        case 53:
        {
            // L80008958
            arg0->unk3C     = D_8003B914;
            arg0->unk3C.mtx = mtx;
            break;
        }
        case 45:
        case 46:
        {
            // L80008988
            arg0->unk28     = D_8003B8EC;
            arg0->unk3C     = D_8003B914;
            arg0->unk28.mtx = mtx;
            arg0->unk3C.mtx = mtx;
            break;
        }
        case 56:
        {
            // L800089EC
            *t2       = D_8003B8DC;
            t2->f.mtx = mtx;
            break;
        }
        case 57:
        {
            // L80008A1C
            *t1     = D_8003B8EC;
            t1->mtx = mtx;
            break;
        }
        case 58:
        {
            // L80008A54
            *t1       = D_8003B900;
            (t1)->mtx = mtx;
            break;
        }
        case 59:
        {
            // L80008A8C
            *t4     = D_8003B914;
            t4->mtx = mtx;
            break;
        }
        case 60:
        {
            // L80008ABC
            *t2       = D_8003B8DC;
            *t1       = D_8003B8EC;
            t2->f.mtx = mtx;
            t1->mtx   = mtx;
            break;
        }
        case 61:
        {
            // L80008B20
            *t2       = D_8003B8DC;
            *t1       = D_8003B8EC;
            *t4       = D_8003B914;
            t2->f.mtx = mtx;
            t1->mtx   = mtx;
            t4->mtx   = mtx;
            break;
        }
        case 62:
        {
            // L80008BB0
            *t2       = D_8003B8DC;
            *t1       = D_8003B900;
            t2->f.mtx = mtx;
            t1->mtx   = mtx;
            break;
        }
        case 63:
        {
            // L80008C14
            *t2       = D_8003B8DC;
            *t1       = D_8003B900;
            *t4       = D_8003B914;
            t2->f.mtx = mtx;
            t1->mtx   = mtx;
            t4->mtx   = mtx;
            break;
        }
        case 1:
        case 17:
        {
            // empty branch?
            // could be for any and all cases between 1 and 17
        }
    }
    // L80008CA0
    mtx->unk05 = arg2;
    return mtx;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/om/func_8000855C.s")
#endif

void* func_80008CC0(struct DObj *arg0, u8 arg1, u8 arg2) { // This actually returns func_8000855C, see https://decomp.me/scratch/nIQ4X
    return func_8000855C(arg0, arg1, arg2, arg0->unk56);
}

struct OMMtx *func_80008CF0(struct Camera *arg0, u8 arg1, u8 arg2) {
    struct OMMtx *mtx; // v0

    if (arg0->unk60 == 2) {
        gsFatalPrintF("om : couldn't add OMMtx for Camera\n");
        while (TRUE) { }
    }
    // L80008D2C
    mtx = omGetOMMtxSetNextAlloc();

    arg0->unk64[arg0->unk60] = mtx;
    arg0->unk60++;
    mtx->unk04 = arg1;

    switch (arg1) {
        case 3:
        case 4:
        {
            // jtgt_80008D84
            arg0->unk18.f6     = D_8003B878;
            arg0->unk18.f6.mtx = mtx;
            break;
        }
        case 5:
        {
            // jtgt_80008DCC
            arg0->unk18.f7     = D_8003B894;
            arg0->unk18.f7.mtx = mtx;
            break;
        }
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        {
            // jtgt_80008E1C
            arg0->unk38     = D_8003B8B4;
            arg0->unk38.mtx = mtx;
            break;
        }
        case 1:
        case 2:
        {
            // empty
        }
    }

    mtx->unk05 = arg2;
    return mtx;
}

struct AObj *omDObjMakeAObj(struct DObj *dobj, u8 index) {
    struct AObj *aobj = omGetAObjSetNextAlloc();

    aobj->unk04 = index;
    aobj->unk05 = 0;
    aobj->unk20 = NULL;
    aobj->unk1C = 0.0;
    aobj->unk18 = 0.0;
    aobj->unk14 = 0.0;
    aobj->unk10 = 0.0;
    aobj->unk0C = 0.0;
    aobj->unk08 = 1.0;

    omAppendAObjToDObj(dobj, aobj);

    return aobj;
}

void func_80008EE4(struct DObj *arg0) {
    struct AObj *curr;
    struct AObj *origNext;

    curr = arg0->unk6C;
    while (curr != NULL) {
        origNext = curr->next;
        omSetAObjPrevAlloc(curr);
        curr = origNext;
    }
    arg0->unk6C = NULL;
    arg0->unk74 = FLOAT_NEG_MAX;
}

struct AObj *create_aobj_for_mobj(struct MObj *mobj, u8 index) {
    struct AObj *aobj = omGetAObjSetNextAlloc();

    aobj->unk04 = index;
    aobj->unk05 = 0;
    aobj->unk20 = NULL;
    aobj->unk1C = 0.0;
    aobj->unk18 = 0.0;
    aobj->unk14 = 0.0;
    aobj->unk10 = 0.0;
    aobj->unk0C = 0.0;
    aobj->unk08 = 1.0;

    omAppendAObjToMObj(mobj, aobj);

    return aobj;
}

// free struct AObj list at unk90
void func_80008FB0(struct MObj *mobj) {
    struct AObj *curr;
    struct AObj *origNext;

    curr = mobj->unk90;
    while (curr != NULL) {
        origNext = curr->next;
        omSetAObjPrevAlloc(curr);
        curr = origNext;
    }
    mobj->unk90 = NULL;
    mobj->unk98 = FLOAT_NEG_MAX;
}

// might be another type? SObj; matches `omAppendAObjToCamera`
struct AObj *func_80009010(struct DObj *obj, u8 index) {
    struct AObj *aobj = omGetAObjSetNextAlloc();

    aobj->unk04 = index;
    aobj->unk05 = 0;
    aobj->unk20 = NULL;
    aobj->unk1C = 0.0;
    aobj->unk18 = 0.0;
    aobj->unk14 = 0.0;
    aobj->unk10 = 0.0;
    aobj->unk0C = 0.0;
    aobj->unk08 = 1.0;

    omAppendAObjToCamera(obj, aobj);

    return aobj;
}

// could be dobj, but maybe it's another type; probably matches `omAppendAObjToCamera`
void unref_8000907C(struct DObj *dobj) {
    struct AObj *curr;
    struct AObj *origNext;

    curr = dobj->unk6C;
    while (curr != NULL) {
        origNext = curr->next;
        omSetAObjPrevAlloc(curr);
        curr = origNext;
    }
    dobj->unk6C = NULL;
    dobj->unk74 = FLOAT_NEG_MAX;
}

#ifdef NON_MATCHING
// nonmatching: regalloc and ordering for the final set of initialization statements
struct MObj *omAddDObjMObjSub(struct DObj *arg0, struct MObjSub *arg1) {
    struct MObj *mobj; // a1, v0?

    mobj = omGetMObjSetNextAlloc();

    if (arg0->unk80 != NULL) {
        struct MObj *curr  = arg0->unk80->next;
        struct MObj *prior = arg0->unk80;
        while (curr != NULL) {
            prior = curr;
            curr  = curr->next;
        }
        prior->next = mobj;
    } else {
        // L80009138
        arg0->unk80 = mobj;
    }

    mobj->next  = NULL;
    mobj->unk84 = (f32)arg1->unk54 / 255.0f;
    mobj->unk08 = *arg1;

    mobj->unk08.unk24 = arg1->unk14;
    mobj->unk08.unk28 = arg1->unk1C;
    mobj->unk80       = 0;
    mobj->unk82       = 0;
    mobj->unk88       = 0.0f;
    mobj->unk90       = NULL;
    mobj->unk94       = NULL;
    mobj->unk98       = FLOAT_NEG_MAX;
    mobj->unk9C       = 1.0f;
    mobj->unkA0       = 0.0f;

    return mobj;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/om/omAddDObjMObjSub.s")
#endif

void func_800091F4(struct DObj *obj) {
    struct MObj *currM;
    struct MObj *nextM;
    struct AObj *currA;
    struct AObj *nextA;

    currM = obj->unk80;
    while (currM != NULL) {
        currA = currM->unk90;
        while (currA != NULL) {
            nextA = currA->next;
            omSetAObjPrevAlloc(currA);
            currA = nextA;
        }
        nextM = currM->next;
        omSetMObjPrevAlloc(currM);
        currM = nextM;
    }
    obj->unk80 = NULL;
}

void func_8000926C(struct DObj *arg0);
#ifdef NON_MATCHING
// nonmatching: cannot get the 1 constant to be not constant...
void func_8000926C(struct DObj *arg0) {
    s32 i = 1;

    arg0->unk4C = 0;
    arg0->unk54 = 0;
    arg0->unk55 = 0;
    arg0->unk56 = 0;

    arg0->unk58[0] = NULL;
    for (; i < 5; i++) { arg0->unk58[i] = NULL; }
    arg0->unk6C = NULL;
    arg0->unk70 = NULL;
    arg0->unk74 = FLOAT_NEG_MAX;
    arg0->unk78 = 1.0;
    arg0->unk7C = 0.0;
    arg0->unk80 = 0;
    arg0->unk84 = 0;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/om/func_8000926C.s")
#endif

struct DObj *func_800092D0(struct GObjCommon *arg0, void *arg1) {
    struct DObj *newObj;
    struct DObj *curr;

    if (arg0 == NULL) { arg0 = D_80046A54; }

    newObj = omGetDObjSetNextAlloc();
    if (arg0->unk74 != NULL) {
        curr = arg0->unk74;

        while (curr->unk8 != NULL) { curr = curr->unk8; }

        curr->unk8   = newObj;
        newObj->unkC = curr;
    } else {
        arg0->unk0F  = 1;
        arg0->unk74  = newObj;
        newObj->unkC = NULL;
    }

    newObj->unk4  = arg0;
    newObj->unk14 = (void *)1;
    newObj->unk8  = NULL;
    newObj->unk10 = NULL;
    newObj->unk50 = arg1;

    func_8000926C(newObj);

    return newObj;
}

struct DObj *func_80009380(struct DObj *arg0, void *arg1) {
    struct DObj *newObj;

    newObj = omGetDObjSetNextAlloc();
    if (arg0->unk8 != NULL) { arg0->unk8->unkC = newObj; }
    newObj->unkC  = arg0;
    newObj->unk8  = arg0->unk8;
    arg0->unk8    = newObj;
    newObj->unk4  = arg0->unk4;
    newObj->unk14 = arg0->unk14;

    newObj->unk10 = NULL;
    newObj->unk50 = arg1;
    func_8000926C(newObj);

    return newObj;
}

struct DObj *func_800093F4(struct DObj *arg0, void *arg1) {
    struct DObj *newObj;
    struct DObj *curr;

    newObj = omGetDObjSetNextAlloc();
    if (arg0->unk10 != NULL) {
        curr = arg0->unk10;

        while (curr->unk8 != NULL) { curr = curr->unk8; }

        curr->unk8   = newObj;
        newObj->unkC = curr;
    } else {
        arg0->unk10  = newObj;
        newObj->unkC = NULL;
    }

    newObj->unk4  = arg0->unk4;
    newObj->unk14 = arg0;
    newObj->unk10 = NULL;
    newObj->unk8  = NULL;
    newObj->unk50 = arg1;

    func_8000926C(newObj);

    return newObj;
}

// drop_dobj, cleanup_dobj, omSetDObjPrevAlloc?
void func_8000948C(struct DObj *arg0) {
    s32 i;
    struct AObj *currA;
    struct AObj *nextA;
    struct MObj *currM;
    struct MObj *nextM;

    while (arg0->unk10 != NULL) { func_8000948C(arg0->unk10); }

    if ((uintptr_t)arg0->unk14 == 1) {
        if (arg0 == arg0->unk4->unk74) {
            arg0->unk4->unk74 = arg0->unk8;
            if (arg0->unk4->unk74 == NULL) { arg0->unk4->unk0F = 0; }
        }
    } else if (arg0 == arg0->unk14->unk10) {
        arg0->unk14->unk10 = arg0->unk8;
    }

    if (arg0->unkC != NULL) { arg0->unkC->unk8 = arg0->unk8; }

    if (arg0->unk8 != NULL) { arg0->unk8->unkC = arg0->unkC; }

    for (i = 0; i < ARRAY_COUNT(arg0->unk58); i++) {
        if (arg0->unk58[i] != NULL) { omSetOMMtxPrevAlloc(arg0->unk58[i]); }
    }

    if (arg0->unk4C != NULL && sDObjDataCleanup != NULL) { sDObjDataCleanup(arg0->unk4C); }

    currA = arg0->unk6C;
    while (currA != NULL) {
        nextA = currA->next;
        omSetAObjPrevAlloc(currA);
        currA = nextA;
    }

    // why not just call func_800091F4?
    currM = arg0->unk80;
    while (currM != NULL) {
        currA = currM->unk90;
        while (currA != NULL) {
            nextA = currA->next;
            omSetAObjPrevAlloc(currA);
            currA = nextA;
        }
        nextM = currM->next;
        omSetMObjPrevAlloc(currM);
        currM = nextM;
    }

    omSetDObjPrevAlloc(arg0);
}

struct SObj *func_80009614(struct GObjCommon *arg0, Sprite *sprite) {
    struct SObj *newObj;

    if (arg0 == NULL) { arg0 = D_80046A54; }

    newObj = omGetSObjSetNextAlloc();

    if (arg0->unk74 != NULL) {
        struct SObj *tail = arg0->unk74;

        while (tail->unk08 != NULL) { tail = tail->unk08; }

        tail->unk08   = newObj;
        newObj->unk0C = tail;
    } else {
        // L80009684
        arg0->unk0F   = 2;
        arg0->unk74   = newObj;
        newObj->unk0C = NULL;
    }
    // L80009690
    newObj->unk04 = arg0;
    newObj->unk08 = NULL;

    if (sprite != NULL) { newObj->sp = *sprite; }
    // L800096D4
    newObj->unk54 = 0;
    return newObj;
}

void func_800096EC(struct SObj *obj) {
    if (obj == obj->unk04->unk74) {
        obj->unk04->unk74 = (void *)obj->unk08;
        if (obj->unk04->unk74 == NULL) { obj->unk04->unk0F = 0; }
    }

    if (obj->unk0C != NULL) { obj->unk0C->unk08 = obj->unk08; }

    if (obj->unk08 != NULL) { obj->unk08->unk0C = obj->unk0C; }

    omSetSObjPrevAlloc(obj);
}

struct Camera *func_80009760(struct GObjCommon *arg0) {
    s32 i;
    struct Camera *newCam;

    if (arg0 == NULL) { arg0 = D_80046A54; }
    arg0->unk0F = 3;

    newCam        = omGetCameraSetNextAlloc();
    arg0->unk74   = newCam;
    newCam->unk04 = arg0;
    setup_viewport(&newCam->unk08);
    newCam->unk60 = 0;
    // clang-format off
    // needs to be on separate lines
    for (i = 0; i < ARRAY_COUNT(newCam->unk64); i++) { 
        newCam->unk64[i] = NULL; 
    }
    // clang-format on
    newCam->unk80 = 0;
    newCam->unk84 = 0;
    newCam->unk88 = NULL;
    newCam->unk8C = 0;
    newCam->unk6C = NULL;
    newCam->unk70 = 0;
    newCam->unk74 = FLOAT_NEG_MAX;
    newCam->unk78 = 1.0;
    newCam->unk7C = 0.0;

    return newCam;
}

// drop_om_camera, cleanup_om_camera
void func_80009810(struct Camera *cam) {
    struct GObjCommon *ctx;
    s32 i;
    struct AObj *curr;
    struct AObj *next;

    ctx        = cam->unk04;
    ctx->unk0F = 0;
    ctx->unk74 = NULL;

    for (i = 0; i < ARRAY_COUNT(cam->unk64); i++) {
        if (cam->unk64[i] != NULL) { omSetOMMtxPrevAlloc(cam->unk64[i]); }
    }

    curr = cam->unk6C;
    while (curr != NULL) {
        next = curr->next;
        omSetAObjPrevAlloc(curr);
        curr = next;
    }

    omSetCameraPrevAlloc(cam);
}

struct GObjCommon *om_g_add_common(u32 id, void (*arg1)(struct GObjCommon *), u8 link, u32 arg3) {
    struct GObjCommon *com;

    if (link >= OM_COMMON_MAX_LINKS) {
        gsFatalPrintF("omGAddCommon() : link num over : link = %d : id = %d\n", link, id);
        while (TRUE) { }
    }

    com = omGetGObjSetNextAlloc();
    if (com == NULL) { return NULL; }

    com->unk00 = id;
    com->unk0C = link;
    com->unk10 = arg3;
    com->unk14 = arg1;
    com->unk18 = NULL;
    com->unk1C = NULL;
    com->unk70 = 0;
    com->unk7C = 0;

    com->unk0F = 0;
    com->unk74 = NULL;

    com->unk0D = 65;
    com->unk78 = 0.0f;
    com->unk80 = NULL;
    com->unk84 = NULL;

    return com;
}

// from 64remix: render.create_object
struct GObjCommon *omMakeGObjCommon(u32 id, void (*arg1)(struct GObjCommon *), u8 link, u32 arg3) {
    struct GObjCommon *com = om_g_add_common(id, arg1, link, arg3);

    if (com == NULL) { return NULL; }

    omLinkGObjPrevOrder(com);

    return com;
}

struct GObjCommon *func_800099A8(u32 id, void (*arg1)(struct GObjCommon *), u8 link, u32 arg3) {
    struct GObjCommon *com = om_g_add_common(id, arg1, link, arg3);

    if (com == NULL) { return NULL; }

    omLinkGObjNextOrder(com);

    return com;
}

struct GObjCommon *
unref_800099E8(u32 id, void (*arg1)(struct GObjCommon *), struct GObjCommon *arg2) {
    struct GObjCommon *com = om_g_add_common(id, arg1, arg2->unk0C, arg2->unk10);

    if (com == NULL) { return NULL; }

    omAppendGObjToLinkedList(com, arg2);

    return com;
}

struct GObjCommon *
unref_80009A34(u32 id, void (*arg1)(struct GObjCommon *), struct GObjCommon *arg2) {
    struct GObjCommon *com = om_g_add_common(id, arg1, arg2->unk0C, arg2->unk10);

    if (com == NULL) { return NULL; }

    omAppendGObjToLinkedList(com, arg2->unk08);

    return com;
}

void omEjectGObjCommon(struct GObjCommon *arg0) {
    if (arg0 == NULL || arg0 == D_80046A54) {
        D_80046A64 = 2;
        return;
    }

    func_8000B39C(arg0);
    switch (arg0->unk0F) {
        case 1: func_8000B70C(arg0); break;
        case 2: func_8000B760(arg0); break;
        case 3: func_80009810(arg0->unk74); break;
    }

    if (arg0->unk0D != 65) { omRemoveGObjFromDLLinkedList(arg0); }
    omRemoveGObjFromLinkedList(arg0);
    omSetGObjPrevAlloc(arg0);
}

void om_g_move_common(
    s32 arg0,
    struct GObjCommon *arg1,
    u8 link,
    u32 arg3,
    struct GObjCommon *arg4) {
    struct GObjProcess *csr;
    struct GObjProcess *orig;
    struct GObjProcess *next;

    if (link >= OM_COMMON_MAX_LINKS) {
        gsFatalPrintF("omGMoveCommon() : link num over : link = %d : id = %d\n", link, arg1->unk00);

        while (TRUE) { }
    }

    if (arg1 == NULL) { arg1 = D_80046A54; }

    orig        = arg1->unk18;
    arg1->unk18 = NULL;
    arg1->unk1C = NULL;

    csr = orig;
    while (csr != NULL) {
        func_80007784(csr);
        csr = csr->unk00;
    }
    omRemoveGObjFromLinkedList(arg1);
    arg1->unk0C = link;
    arg1->unk10 = arg3;

    switch (arg0) {
        case 0: omLinkGObjPrevOrder(arg1); break;
        case 1: omLinkGObjNextOrder(arg1); break;
        case 2: omAppendGObjToLinkedList(arg1, arg4); break;
        case 3: omAppendGObjToLinkedList(arg1, arg4->unk08); break;
    }

    csr = orig;
    while (csr != NULL) {
        next = csr->unk00;
        omLinkGObjProcess(csr);
        csr = next;
    }
}

void func_80009C90(struct GObjCommon *arg0, u8 link, u32 arg2) {
    om_g_move_common(0, arg0, link, arg2, NULL);
}

void func_80009CC8(struct GObjCommon *arg0, u8 link, u32 arg2) {
    om_g_move_common(1, arg0, link, arg2, NULL);
}

void unref_80009D00(struct GObjCommon *arg0, struct GObjCommon *arg1) {
    om_g_move_common(2, arg0, arg1->unk0C, arg1->unk10, arg1);
}

void unref_80009D3C(struct GObjCommon *arg0, struct GObjCommon *arg1) {
    om_g_move_common(3, arg0, arg1->unk0C, arg1->unk10, arg1);
}

void om_g_link_obj_dl_common(
    struct GObjCommon *arg0,
    void (*arg1)(struct GObjCommon *),
    u8 dlLink,
    s32 arg3,
    s32 arg4) {
    if (dlLink >= OM_COMMON_MAX_DL_LINKS - 1) {
        gsFatalPrintF(
            "omGLinkObjDLCommon() : dl_link num over : dl_link = %d : id = %d\n",
            dlLink,
            arg0->unk00);
        while (TRUE) { }
    }

    arg0->unk0D = dlLink;
    arg0->unk28 = arg3;
    arg0->unk2C = arg1;
    arg0->unk38 = arg4;
    arg0->unk0E = D_8003B6E8.word - 1;
}

void omAddGObjRenderProc(
    struct GObjCommon *arg0,
    void (*arg1)(struct GObjCommon *),
    u8 dlLink,
    u32 arg3,
    s32 arg4) {
    if (arg0 == NULL) { arg0 = D_80046A54; }
    om_g_link_obj_dl_common(arg0, arg1, dlLink, arg3, arg4);
    omDLLinkGObjPrevOrder(arg0);
}

void unref_80009E38(
    struct GObjCommon *arg0,
    void (*arg1)(struct GObjCommon *),
    u8 dlLink,
    s32 arg3,
    s32 arg4) {
    if (arg0 == NULL) { arg0 = D_80046A54; }
    om_g_link_obj_dl_common(arg0, arg1, dlLink, arg3, arg4);
    omDLLinkGObjNextOrder(arg0);
}

void unref_80009E7C(
    struct GObjCommon *arg0,
    void (*arg1)(struct GObjCommon *),
    s32 arg2,
    struct GObjCommon *arg3) {
    if (arg0 == NULL) { arg0 = D_80046A54; }
    om_g_link_obj_dl_common(arg0, arg1, arg3->unk0D, arg3->unk28, arg2);
    omAppendGObjToDLLinkedList(arg0, arg3);
}

void unref_80009ED0(
    struct GObjCommon *arg0,
    void (*arg1)(struct GObjCommon *),
    s32 arg2,
    struct GObjCommon *arg3) {
    if (arg0 == NULL) { arg0 = D_80046A54; }
    om_g_link_obj_dl_common(arg0, arg1, arg3->unk0D, arg3->unk28, arg2);
    omAppendGObjToDLLinkedList(arg0, arg3->unk08);
}

void func_80009F28(
    struct GObjCommon *arg0,
    void (*arg1)(struct GObjCommon *),
    u32 arg2,
    s64 arg3,
    s32 arg4) {
    arg0->unk0D = 64;
    arg0->unk28 = arg2;
    arg0->unk2C = arg1;
    arg0->unk30 = arg3;
    arg0->unk38 = arg4;
    arg0->unk40 = 0;
    arg0->unk0E = D_8003B6E8.word - 1;
}

void func_80009F74(
    struct GObjCommon *arg0,
    void (*arg1)(struct GObjCommon *),
    u32 arg2,
    s64 arg3,
    s32 arg4) {
    if (arg0 == NULL) { arg0 = D_80046A54; }
    func_80009F28(arg0, arg1, arg2, arg3, arg4);
    omDLLinkGObjPrevOrder(arg0);
}

void unref_80009FC0(
    struct GObjCommon *arg0,
    void (*arg1)(struct GObjCommon *),
    u32 arg2,
    s64 arg3,
    s32 arg4) {
    if (arg0 == NULL) { arg0 = D_80046A54; }
    func_80009F28(arg0, arg1, arg2, arg3, arg4);
    omDLLinkGObjNextOrder(arg0);
}

void unref_8000A00C(
    struct GObjCommon *arg0,
    void (*arg1)(struct GObjCommon *),
    s64 arg2,
    s32 arg3,
    struct GObjCommon *arg4) {
    if (arg0 == NULL) { arg0 = D_80046A54; }
    func_80009F28(arg0, arg1, arg4->unk28, arg2, arg3);
    omAppendGObjToDLLinkedList(arg0, arg4);
}

void unref_8000A06C(
    struct GObjCommon *arg0,
    void (*arg1)(struct GObjCommon *),
    s64 arg2,
    s32 arg3,
    struct GObjCommon *arg4) {
    if (arg0 == NULL) { arg0 = D_80046A54; }
    func_80009F28(arg0, arg1, arg4->unk28, arg2, arg3);
    omAppendGObjToDLLinkedList(arg0, arg4->unk08);
}

void om_g_move_obj_dl(struct GObjCommon *arg0, u8 dlLink, u32 arg2) {
    if (dlLink >= OM_COMMON_MAX_DL_LINKS - 1) {
        gsFatalPrintF(
            "omGMoveObjDL() : dl_link num over : dl_link = %d : id = %d\n", dlLink, arg0->unk00);
        while (TRUE) { }
    }

    omRemoveGObjFromDLLinkedList(arg0);
    arg0->unk0D = dlLink;
    arg0->unk28 = arg2;
    omDLLinkGObjPrevOrder(arg0);
}

void om_g_move_obj_dl_head(struct GObjCommon *arg0, u8 dlLink, u32 arg2) {
    if (dlLink >= OM_COMMON_MAX_DL_LINKS - 1) {
        gsFatalPrintF(
            "omGMoveObjDLHead() : dl_link num over : dl_link = %d : id = %d\n",
            dlLink,
            arg0->unk00);
        while (TRUE) { }
    }
    omRemoveGObjFromDLLinkedList(arg0);
    arg0->unk0D = dlLink;
    arg0->unk28 = arg2;
    omDLLinkGObjNextOrder(arg0);
}

void unref_8000A1C8(struct GObjCommon *arg0, struct GObjCommon *arg1) {
    omRemoveGObjFromDLLinkedList(arg0);
    arg0->unk0D = arg1->unk0D;
    arg0->unk28 = arg1->unk28;
    omAppendGObjToDLLinkedList(arg0, arg1);
}

void unref_8000A208(struct GObjCommon *arg0, struct GObjCommon *arg1) {
    omRemoveGObjFromDLLinkedList(arg0);
    arg0->unk0D = arg1->unk0D;
    arg0->unk28 = arg1->unk28;
    omAppendGObjToDLLinkedList(arg0, arg1->unk24);
}

void func_8000A24C(struct GObjCommon *arg0, u32 arg1) {
    omRemoveGObjFromDLLinkedList(arg0);
    arg0->unk28 = arg1;
    omDLLinkGObjPrevOrder(arg0);
}

void unref_8000A280(struct GObjCommon *arg0, u32 arg1) {
    omRemoveGObjFromDLLinkedList(arg0);
    arg0->unk28 = arg1;
    omDLLinkGObjNextOrder(arg0);
}

void func_8000A2B4(struct GObjCommon *arg0, struct GObjCommon *arg1) {
    omRemoveGObjFromDLLinkedList(arg0);
    arg0->unk28 = arg1->unk28;
    omAppendGObjToDLLinkedList(arg0, arg1);
}

void unref_8000A2EC(struct GObjCommon *arg0, struct GObjCommon *arg1) {
    omRemoveGObjFromDLLinkedList(arg0);
    arg0->unk28 = arg1->unk28;
    omAppendGObjToDLLinkedList(arg0, arg1->unk08);
}

void set_max_obj_commons(s32 n) {
    sMaxNumObjCommon = n;
}

s16 get_max_obj_commons(void) {
    return sMaxNumObjCommon;
}

void func_8000A340(void) {
    s32 i;
    s32 v1;
    struct GObjCommon *s0;

    D_80046A58 = NULL;
    D_80046A5C = NULL;

    // clang-format off
    for (i = 0, v1 = D_8003B6E8.word - 1; i < ARRAY_COUNT(D_80046A88); i++) { 
        D_80046A88[i].unk00 = v1; 
    }
    // clang-format on

    s0 = gOMObjCommonDLLinks[OM_COMMON_MAX_DL_LINKS - 1];
    while (s0 != NULL) {
        if (!(s0->unk7C & 1)) {
            D_8003B874 = 3;
            D_80046A58 = s0;
            s0->unk2C(s0);
            D_8003B874 = 0;
        }
        s0 = s0->unk20;
    }
}

struct GObjCommon *func_8000A40C(struct GObjCommon *arg0) {
    struct GObjCommon *ret;

    D_8003B874 = 1;
    D_80046A54 = arg0;
    arg0->unk14(arg0);
    ret        = arg0->unk04;
    D_80046A54 = NULL;
    D_8003B874 = 0;

    switch (D_80046A64) {
        case 0: break;
        case 2:
            D_80046A64 = 0;
            omEjectGObjCommon(arg0);
            break;
        default: D_80046A64 = 0; break;
    }

    return ret;
}

struct GObjProcess *func_8000A49C(struct GObjProcess *proc) {
    struct GObjProcess *ret;

    D_8003B874 = 2;
    D_80046A54 = proc->unk18;
    D_80046A60 = proc;

    switch (proc->unk14) {
        case 0:
        {
            osStartThread(&proc->unk1C.thread->osThread);
            osRecvMesg(&gOMMq, NULL, OS_MESG_BLOCK);
            break;
        }
        case 1:
        {
            proc->unk1C.cb(proc->unk18);
            break;
        }
    }

    ret = proc->unk08;

    D_80046A54 = NULL;
    D_80046A60 = NULL;
    D_8003B874 = 0;

    switch (D_80046A64) {
        case 2:
        {
            D_80046A64 = 0;
            while (ret != NULL && ret->unk18 == proc->unk18) { ret = ret->unk08; }

            omEjectGObjCommon(proc->unk18);
            break;
        }
        case 1:
        {
            D_80046A64 = 0;
            func_8000848C(proc);
            break;
        }
        case 0: break;
        default: D_80046A64 = 0; break;
    }

    return ret;
}

void func_8000A5E4(void) {
    s32 i;
    struct GObjCommon *comm;
    struct GObjProcess *proc;

    D_80046A64 = 0;
    D_80046A54 = NULL;
    D_80046A60 = NULL;

    for (i = 0; i < OM_COMMON_MAX_LINKS; i++) {
        comm = gOMObjCommonLinks[i];
        while (comm != NULL) {
            if (!(comm->unk7C & 0x40) && comm->unk14 != NULL) {
                comm = func_8000A40C(comm);
            } else {
                comm = comm->unk04;
            }
        }
    }

    for (i = ARRAY_COUNT(sObjProcessQueue) - 1; i >= 0; i--) {
        proc = sObjProcessQueue[i];
        while (proc != NULL) {
            if (proc->unk15 == 0) {
                proc = func_8000A49C(proc);
            } else {
                proc = proc->unk08;
            }
        }
    }
}

void set_up_object_manager(struct OMSetup *setup) {
    s32 i;

    sThreadStackSize = setup->threadStackSize;
    sUnkUnusedSetup  = setup->unk14;

    if (setup->numThreads != 0) {
        struct GObjThread *csr;
        sObjThreadHead = csr = setup->threads;

        for (i = 0; i < setup->numThreads - 1; i++) {
            struct GObjThread *next = csr + 1;

            csr->next = next;
            csr       = next;
        }
        csr->next = NULL;
    } else {
        sObjThreadHead = NULL;
    }

    if (setup->numStacks != 0 && setup->threadStackSize != NULL) 
    {
        struct OMThreadStackNode *csr;

        sThreadStackHead        = hlMemoryAlloc(sizeof(struct OMThreadStackList), 4);
        sThreadStackHead->next  = NULL;
        sThreadStackHead->size  = sThreadStackSize;
        sThreadStackHead->stack = csr = setup->stacks;

        for (i = 0; (u32)i < setup->numStacks - 1; i++) {
            csr->next =
                (void
                     *)((uintptr_t)csr + sThreadStackSize + offsetof(struct OMThreadStackNode, stack));
            csr->stackSize = sThreadStackSize;
            csr =
                (void
                     *)((uintptr_t)csr + sThreadStackSize + offsetof(struct OMThreadStackNode, stack));
        }

        csr->stackSize = sThreadStackSize;
        csr->next      = NULL;
    } else {
        sThreadStackHead = NULL;
    }

    if (setup->numProcesses != 0) {
        struct GObjProcess *csr;
        sOMObjProcessHead = csr = setup->processes;

        for (i = 0; i < setup->numProcesses - 1; i++) {
            struct GObjProcess *next = csr + 1;

            csr->unk00 = next;
            csr        = next;
        }

        csr->unk00 = NULL;
    } else {
        sOMObjProcessHead = NULL;
    }

    for (i = 0; i < ARRAY_COUNT(sObjProcessQueue); i++) { sObjProcessQueue[i] = NULL; }

    if (setup->numCommons != 0) {
        struct GObjCommon *csr;
        sOMObjCommonHead = csr = setup->commons;

        // todo: is this the purest form?
        for (i = 0; i < setup->numCommons - 1; i++) {
            csr->unk04 = (void *)((uintptr_t)csr + setup->commonSize);
            csr        = csr->unk04;
        }
        csr->unk04 = NULL;

    } else {
        sOMObjCommonHead = NULL;
    }

    sObjCommonSize   = setup->commonSize;
    sMaxNumObjCommon = -1;
    sDObjDataCleanup = setup->cleanupFn;

    if (setup->numMatrices != 0) {
        struct OMMtx *csr;

        sOMMtxHead = csr = setup->matrices;

        for (i = 0; i < setup->numMatrices - 1; i++) {
            struct OMMtx *next = csr + 1;

            csr->next = next;
            csr       = next;
        }
        csr->next = NULL;
    } else {
        sOMMtxHead = NULL;
    }

    if (setup->numAObjs != 0) {
        struct AObj *csr;

        sAObjHead = csr = setup->aobjs;

        for (i = 0; i < setup->numAObjs - 1; i++) {
            struct AObj *next = csr + 1;

            csr->next = next;
            csr       = next;
        }
        csr->next = NULL;
    } else {
        sAObjHead = NULL;
    }

    if (setup->numMObjs != 0) {
        struct MObj *csr;

        sMObjHead = csr = setup->mobjs;

        for (i = 0; i < setup->numMObjs - 1; i++) {
            struct MObj *next = csr + 1;

            csr->next = next;
            csr       = next;
        }
        csr->next = NULL;

    } else {
        sMObjHead = NULL;
    }

    if (setup->numDObjs != 0) {
        struct DObj *csr;
        sDObjHead = csr = setup->dobjs;

        for (i = 0; i < setup->numDObjs - 1; i++) {
            csr->unk0 = (void *)((uintptr_t)csr + setup->dobjSize);
            csr       = csr->unk0;
        }

        csr->unk0 = NULL;
    } else {
        sDObjHead = NULL;
    }
    sDObjSize = setup->dobjSize;

    if (setup->numSObjs != 0) {
        struct SObj *csr;
        sSObjHead = csr = setup->sobjs;

        for (i = 0; i < setup->numSObjs - 1; i++) {
            csr->next = (void *)((uintptr_t)csr + setup->sobjSize);
            csr       = csr->next;
        }

        csr->next = NULL;
    } else {
        sSObjHead = NULL;
    }
    sSObjSize = setup->sobjSize;

    if (setup->numCameras != 0) {
        struct Camera *csr;
        sCameraHead = csr = setup->cameras;

        for (i = 0; i < setup->numCameras - 1; i++) {
            csr->next = (void *)((uintptr_t)csr + setup->cameraSize);
            csr       = csr->next;
        }

        csr->next = NULL;
    } else {
        sCameraHead = NULL;
    }
    // L8000ABA0
    sCameraSize = setup->cameraSize;

    for (i = 0; i < OM_COMMON_MAX_LINKS; i++) {
        sOMObjCommonLinks[i] = NULL;
        gOMObjCommonLinks[i]      = NULL;
    }

    for (i = 0; i < OM_COMMON_MAX_DL_LINKS; i++) {
        sOMObjCommonDLLinks[i] = NULL;
        gOMObjCommonDLLinks[i]   = NULL;
    }

    func_80014430();
    osCreateMesgQueue(&gOMMq, sOMMsg, ARRAY_COUNT(sOMMsg));

    sThreadStacksActive = sObjThreadsActive = sOMObjProcessesActive = sOMObjCommonsActive =
        sOMMtxActive = sAObjsActive = sDObjsActive = sSObjsActive = sCamerasActive = 0;

    sOMObjProcessCallback = NULL;
    func_80017830(0);
    D_8003B874 = 0;
}
