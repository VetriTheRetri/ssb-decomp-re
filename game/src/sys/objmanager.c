#include "obj.h"

#include "sys/crash.h"
#include "sys/gtl.h"
#include "sys/obj_renderer.h"
#include "sys/rdp_reset.h"
#include "sys/system_03_1.h"
#include <stddef.h>

/* These should no longer be required as they're included in objtypes.h
#include <macros.h>
#include <ssb_types.h>
#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>
*/

// STATIC

GObjThread *sOMObjThreadHead;
u32 sOMObjThreadsActive;
u32 sOMThreadStacksActive;
u32 sOMThreadStackSize;
u32 sUnkUnusedSetup;
OMThreadStackList *sOMThreadStackHead;

void (*sOMObjProcessCallback)(GObjProcess*);
GObjProcess *sOMObjProcessHead;
GObjProcess *sOMObjProcessQueue[6];
u32 sOMObjProcessesActive;

GObj *gOMObjCommonLinks[OM_COMMON_MAX_LINKS];
GObj *sOMObjCommonLinks[OM_COMMON_MAX_LINKS];
GObj *sOMObjCommonHead;
GObj *gOMObjCommonDLLinks[OM_COMMON_MAX_DL_LINKS];
GObj *sOMObjCommonDLLinks[OM_COMMON_MAX_DL_LINKS];
s32 sOMObjCommonsActive;
u16 sOMObjCommonSize;
s16 sOMObjCommonNumMax;

OMMtx *sOMMtxHead;
u32 sOMMtxsActive;

void (*sOMDObjDataProcEject)(DObjDynamicStore*);

AObj *sOMAObjHead;
u32 sOMAObjsActive;

MObj *sOMMObjHead;
u32 sMObjsActive;

DObj *sOMDObjHead;
u32 sOMDObjsActive;
u16 sOMDObjSize;

SObj *sOMSObjHead;
u32 sOMSObjsActive;
u16 sOMSObjSize;

Camera *sOMCameraHead;
u32 sOMCamerasActive;
u16 sOMCameraSize;

GObj *D_80046A54;
GObj *gOMObjCurrentRendering;   // Is this exclusively a camera GObj?
GObj *D_80046A5C;

GObjProcess *D_80046A60;
u32 D_80046A64;
OSMesg sOMMesg[1];
OSMesgQueue gOMMesgQueue;

// u8 D_80046A88[1280];
OMGfxLink D_80046A88[64];
u8 D_80046F88[24];

// DATA

OSId sProcessThreadID = 10000000;

s32 D_8003B874 = 0;

// 0x8003B878
OMPersp dOMPerspDefault = { NULL, 0, 30.0F, 4.0F / 3.0F, 100.0F, 12800.0F, 1.0F };

// 0x8003B984
OMOrtho dOMOrthoDefault = { NULL, -160.0F, 160.0F, -120.0F, 120.0F, 100.0F, 12800.0F, 1.0F };

// 0x8003B8B4
CameraVec dCameraVecDefault = { NULL, { 0.0F, 0.0F, 1500.0F }, { 0.0F, 0.0F, 0.0F }, { 0.0F, 1.0F, 0.0F } };

// 0x8003B8DC
OMTranslate dOMTranslateDefault = { NULL, { 0.0F, 0.0F, 0.0F } };

// 0x8003B8EC
OMRotate dOMRotateDefaultAXYZ = { NULL, 0.0F, { 0.0F, 0.0F, 1.0F } };

// 0x8003B900
OMRotate dOMRotateDefaultRPY = { NULL, 0.0F, { 0.0F, 0.0F, 0.0F } };

// 0x8003B914
OMScale dOMScaleDefault = { NULL, { 1.0F, 1.0F, 1.0F } };

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

GObjThread* omGetGObjThread(void)
{
    GObjThread *gobjthread;

    if (sOMObjThreadHead == NULL) 
    {
        sOMObjThreadHead = gsMemoryAlloc(sizeof(GObjThread), 0x8);

        sOMObjThreadHead->next = NULL;
    }

    if (sOMObjThreadHead == NULL) 
    {
        gsFatalPrintF("om : couldn't get GObjThread\n");
        while (TRUE); // { }
    }

    gobjthread = sOMObjThreadHead;
    sOMObjThreadHead = sOMObjThreadHead->next;
    sOMObjThreadsActive++;

    return gobjthread;
}

void omSetGObjThreadPrevAlloc(GObjThread *gobjthread) 
{
    gobjthread->next = sOMObjThreadHead;
    sOMObjThreadHead = gobjthread;
    sOMObjThreadsActive--;
}

OMThreadStackNode* omGetStackOfSize(u32 size)
{
    OMThreadStackList *curr;
    OMThreadStackList *prev;
    OMThreadStackNode *ret;

    curr = sOMThreadStackHead;
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
        curr        = gsMemoryAlloc(sizeof(OMThreadStackList), 0x4);
        curr->next  = NULL;
        curr->stack = NULL;
        curr->size  = size;

        if (prev != NULL) 
        {
            prev->next = curr;
        } 
        else sOMThreadStackHead = curr;
    }

    if (curr->stack != NULL) 
    {
        ret = curr->stack;

        curr->stack = curr->stack->next;
    } 
    else
    {
        ret = gsMemoryAlloc(size + offsetof(OMThreadStackNode, stack), 0x8);

        ret->stackSize = size;
    }

    ret->next = NULL;
    sOMThreadStacksActive++;
    return ret;
}

OMThreadStackNode* omGetDefaultStack(void)
{
    return omGetStackOfSize(sOMThreadStackSize);
}

void omEjectStackNode(OMThreadStackNode *node)
{
    OMThreadStackList *parent = sOMThreadStackHead;

    while (parent != NULL) 
    {
        if (parent->size == node->stack_size)
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
    sOMThreadStacksActive--;
}

GObjProcess* omGetGObjProcess(void)
{
    GObjProcess *gobjproc;

    if (sOMObjProcessHead == NULL) 
    {
        sOMObjProcessHead = gsMemoryAlloc(sizeof(struct GObjProcess), 4);

        sOMObjProcessHead->unk00 = NULL;
    }

    if (sOMObjProcessHead == NULL) 
    {
        gsFatalPrintF("om : couldn't get GObjProcess\n");
        while (TRUE); // {}
    }

    gobjproc          = sOMObjProcessHead;
    sOMObjProcessHead = sOMObjProcessHead->link_next;
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
            GObjProcess *prev_gobjproc = prev_gobj->gobjproc_tail;

            while (prev_gobjproc != NULL)
            {
                if (prev_gobjproc->priority == gobjproc->priority)
                {
                    gobjproc->priority_next = prev_gobjproc->priority_next;
                    prev_gobjproc->priority_next = gobjproc;
                    gobjproc->priority_prev = prev_gobjproc;

                    goto loop_exit;
                }
                prev_gobjproc = prev_gobjproc->link_prev;
            }
            prev_gobj = prev_gobj->link_prev;
        }
        if (link_id != 0)
        {
            prev_gobj = sOMObjCommonLinks[--link_id];
        }
        else
        {
            gobjproc->priority_next = sOMObjProcessQueue[gobjproc->priority];
            sOMObjProcessQueue[gobjproc->priority] = gobjproc;
            gobjproc->priority_prev = NULL;
            break;
        }
    }
loop_exit:
    if (gobjproc->priority_next != NULL)
    {
        gobjproc->priority_next->priority_prev = gobjproc;
    }
    if (parent_gobj->gobjproc_tail != NULL)
    {
        parent_gobj->gobjproc_tail->link_next = gobjproc;
    }
    else parent_gobj->gobjproc_head = gobjproc;

    gobjproc->link_prev = parent_gobj->gobjproc_tail;
    gobjproc->link_next = NULL;
    parent_gobj->gobjproc_tail = gobjproc;
}

// 0x80007758
void omSetGObjProcessPrevAlloc(GObjProcess *gobjproc)
{
    gobjproc->link_next = sOMObjProcessHead;
    sOMObjProcessHead = gobjproc;
    sOMObjProcessesActive--;
}

// 0x80007784
void func_80007784(GObjProcess *gobjproc) 
{
    if (gobjproc->priority_prev != NULL) 
    {
        gobjproc->priority_prev->priority_next = gobjproc->priority_next;
    } 
    else sOMObjProcessQueue[gobjproc->priority] = gobjproc->priority_next;

    if (gobjproc->priority_next != NULL)
    { 
        gobjproc->priority_next->priority_prev = gobjproc->priority_prev;
    }
}

// 0x800077D0
void func_800077D0(GObjProcess *gobjproc)
{
    GObj *gobj = gobjproc->parent_gobj;

    func_80007784(gobjproc);

    if (gobjproc->link_prev != NULL) 
    {
        gobjproc->link_prev->link_next = gobjproc->link_next;
    }
    else gobj->gobjproc_head = gobjproc->link_next;
    
    if (gobjproc->link_next != NULL) 
    {
        gobjproc->link_next->link_prev = gobjproc->link_prev;
    }
    else gobj->gobjproc_tail = gobjproc->link_prev;
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
        return gobjproc->gobjthread->osstack;
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
    s32 i = 0;

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

    if ((sOMObjCommonNumMax == -1) || (sOMObjCommonsActive < sOMObjCommonNumMax))
    {
        gobj = sOMObjCommonHead;

        if (gobj == NULL) 
        {
            sOMObjCommonHead = gsMemoryAlloc(sOMObjCommonSize, 0x8);
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
void omLinkGObjAfter(GObj *this_gobj, GObj *link_gobj)
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
void omLinkGObjSPAfter(GObj *this_gobj)
{
    GObj *current_gobj = sOMObjCommonLinks[this_gobj->link_id];

    while (current_gobj != NULL && current_gobj->link_order < this_gobj->link_order)
    {
        current_gobj = current_gobj->link_prev;
    }
    omLinkGObjAfter(this_gobj, current_gobj);
}

// 0x80007AA8
void omLinkGObjSPBefore(GObj *this_gobj)
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
   
    omLinkGObjAfter(this_gobj, found_gobj);
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
void omDLLinkGObjTail(GObj *this_gobj) 
{
    GObj *current_gobj = sOMObjCommonDLLinks[this_gobj->dl_link_id];

    while (current_gobj != NULL && current_gobj->dl_link_order < this_gobj->dl_link_order)
    { 
        current_gobj = current_gobj->dl_link_prev;
    }
    omAppendGObjToDLLinkedList(this_gobj, current_gobj);
}

// 0x80007C6C
void omDLLinkGObjHead(GObj *this_gobj) 
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
        sOMMtxHead = gsMemoryAlloc(sizeof(OMMtx), 0x8);

        sOMMtxHead->next = NULL;
    }

    if (sOMMtxHead == NULL)
    {
        gsFatalPrintF("om : couldn't get OMMtx\n");
        while (TRUE); // {}
    }

    ommtx = sOMMtxHead;
    sOMMtxHead = sOMMtxHead->next;
    sOMMtxsActive++;

    return ommtx;
}

// 0x80007DD8
void omSetOMMtxPrevAlloc(OMMtx *ommtx) 
{
    ommtx->next = sOMMtxHead;
    sOMMtxHead  = ommtx;
    sOMMtxsActive--;
}

// 0x80007E04
AObj* omGetAObjSetNextAlloc(void) 
{
    AObj *aobj;

    if (sOMAObjHead == NULL) 
    {
        sOMAObjHead = gsMemoryAlloc(sizeof(AObj), 0x4);

        sOMAObjHead->next = NULL;
    }

    if (sOMAObjHead == NULL)
    {
        gsFatalPrintF("om : couldn't get AObj\n");
        while (TRUE); // {}
    }
    aobj = sOMAObjHead;
    sOMAObjHead = sOMAObjHead->next;
    sOMAObjsActive++;

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

void omSetAObjPrevAlloc(AObj *aobj) 
{
    aobj->next = sOMAObjHead;
    sOMAObjsActive--;
    sOMAObjHead = aobj;
}

MObj* omGetMObjSetNextAlloc(void) 
{
    MObj *mobj;

    if (sOMMObjHead == NULL)
    {
        sOMMObjHead = gsMemoryAlloc(sizeof(MObj), 0x4);

        sOMMObjHead->next = NULL;
    }

    if (sOMMObjHead == NULL) 
    {
        gsFatalPrintF("om : couldn't get MObj\n");
        while (TRUE); // {}
    }

    mobj = sOMMObjHead;
    sOMMObjHead = sOMMObjHead->next;
    sMObjsActive++;

    return mobj;
}

void omSetMObjPrevAlloc(MObj *mobj)
{
    mobj->next = sOMMObjHead;
    sMObjsActive--;
    sOMMObjHead = mobj;
}

DObj* omGetDObjSetNextAlloc(void)
{
    DObj *dobj;

    if (sOMDObjHead == NULL) 
    {
        sOMDObjHead = gsMemoryAlloc(sOMDObjSize, 0x8);

        sOMDObjHead->alloc_free = NULL;
    }

    if (sOMDObjHead == NULL)
    {
        gsFatalPrintF("om : couldn't get DObj\n");
        while (TRUE); // {}
    }

    dobj = sOMDObjHead;
    sOMDObjHead = sOMDObjHead->alloc_free;
    sOMDObjsActive++;

    return dobj;
}

void omSetDObjPrevAlloc(DObj *dobj) 
{
    dobj->alloc_free = sOMDObjHead;
    sOMDObjsActive--;
    sOMDObjHead = dobj;
}

SObj* omGetSObjSetNextAlloc(void) 
{
    SObj *sobj;

    if (sOMSObjHead == NULL) 
    {
        sOMSObjHead = gsMemoryAlloc(sOMSObjSize, 0x8);

        sOMSObjHead->alloc_free = NULL;
    }

    if (sOMSObjHead == NULL)
    {
        gsFatalPrintF("om : couldn't get SObj\n");
        while (TRUE); // {}
    }

    sobj = sOMSObjHead;
    sOMSObjHead = sOMSObjHead->alloc_free;
    sOMSObjsActive++;

    return sobj;
}

void omSetSObjPrevAlloc(SObj *sobj)
{
    sobj->alloc_free = sOMSObjHead;
    sOMSObjsActive--;
    sOMSObjHead = sobj;
}

Camera* omGetCameraSetNextAlloc(void)
{
    Camera *cam;

    if (sOMCameraHead == NULL) 
    {
        sOMCameraHead       = gsMemoryAlloc(sOMCameraSize, 0x8);
        sOMCameraHead->next = NULL;
    }

    if (sOMCameraHead == NULL) 
    {
        gsFatalPrintF("om : couldn't get Camera\n");
        while (TRUE); // {}
    }

    cam = sOMCameraHead;
    sOMCameraHead = sOMCameraHead->next;
    sOMCamerasActive++;

    return cam;
}

void omSetCameraPrevAlloc(Camera *cam) 
{
    cam->next = sOMCameraHead;
    sOMCamerasActive--;
    sOMCameraHead = cam;
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
    gobjproc->is_paused = FALSE;
    gobjproc->parent_gobj = gobj;
    gobjproc->proc_unused = proc;

    switch (kind)
    {
        case GObjProcess_Kind_OSThread:
        {
            gobjthread             = omGetGObjThread();
            gobjproc->gobjthread   = gobjthread;

            stack_node             = omGetDefaultStack();
            gobjthread->osstack    = stack_node->stack;
            gobjthread->stack_size = sOMThreadStackSize;

            osCreateThread
            (
                &gobjthread->osthread,
                sProcessThreadID++,
                proc,
                gobj,
                &thread->osStack[sOMThreadStackSize / sizeof(u64)],
                51
            );

            gobjthread->osstack[7] = 0xFEDCBA98;

            if (sProcessThreadID >= 20000000) 
            {
                sProcessThreadID = 10000000;
            }
            break;
        }
        case GObjProcess_Kind_Proc:
        {
            gobjproc->proc_common = proc;
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

// 0x80008304
GObjProcess* unref_80008304(GObj *gobj, void (*proc)(GObj*), u32 priority, s32 thread_id, u32 stack_size)
{
    GObjProcess *gobjproc; // s0
    GObjThread *gobjthread;   // v1 / sp28
    OMThreadStackNode *stacknode;
    OSId tid;

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
    gobjproc->is_paused = FALSE;
    gobjproc->parent_gobj = gobj;
    gobjproc->proc_unused = proc;

    gobjproc->gobjthread = gobjthread = omGetGObjThread();
    gobjproc->kind                    = GObjProcess_Kind_OSThread;

    stacknode              = stack_size == 0 ? omGetDefaultStack() : omGetStackOfSize(stack_size);
    gobjthread->osstack    = stacknode->stack;
    gobjthread->stack_size = stack_size == 0 ? sOMThreadStackSize : stack_size;
    tid                    = thread_id != -1 ? thread_id : sProcessThreadID++;

    osCreateThread(&gobjthread->osthread, tid, proc, gobj, &gobjthread->osstack[gobjthread->stack_size / sizeof(u64)], 51);

    gobjthread->osstack[7] = 0xFEDCBA98;

    if (sProcessThreadID >= 20000000) 
    {
        sProcessThreadID = 10000000; 
    }
    omLinkGObjProcess(gobjproc);
    return gobjproc;
}

// 0x8000848C
void func_8000848C(GObjProcess *gobjproc)
{
    OMThreadStackNode *tnode;

    if ((gobjproc == NULL) || (gobjproc == D_80046A60))
    {
        D_80046A64 = 1;

        if (D_80046A60->kind == GObjProcess_Kind_OSThread)
        {
            gsStopCurrentProcess(1); 
        }
        return;
    }

    if (sOMObjProcessCallback != NULL)
    {
        sOMObjProcessCallback(gobjproc); 
    }

    switch (gobjproc->kind)
    {
    case GObjProcess_Kind_OSThread:
        osDestroyThread(&gobjproc->gobjthread->osthread);
        // cast from stack pointer back to stack node
        tnode = (OMThreadStackNode*) ((uintptr_t)(gobjproc->gobjthread->osstack) - offsetof(OMThreadStackNode, stack));
        omEjectStackNode(tnode);
        omSetGObjThreadPrevAlloc(gobjproc->gobjthread);
        break;

    case GObjProcess_Kind_Proc:
        break;
    }

    func_800077D0(gobjproc);
    omSetGObjProcessPrevAlloc(gobjproc);
}

// 0x8000855C
OMMtx* omAddOMMtxForDObjVar(DObj *dobj, u8 kind, u8 arg2, s32 ommtx_id)
{
    uintptr_t csr;
    OMTranslate *translate;
    OMRotate *rotate;
    OMScale *scale;
    OMMtx *ommtx;
    s32 i;

    if (dobj->ommtx_len == ARRAY_COUNT(dobj->ommtx))
    {
        gsFatalPrintF("om : couldn\'t add OMMtx for DObj\n");
        while (TRUE);
    }
    if (dobj->dynstore != NULL)
    {
        csr = (uintptr_t)dobj->dynstore->data;

        for (i = 0; i < ARRAY_COUNT(dobj->dynstore->kinds); i++)
        {
            switch (dobj->dynstore->kinds[i])
            {
            case DObjVec_Kind_None:
                break;

            case DObjVec_Kind_Translate:
                translate = (OMTranslate*)csr;
                csr += sizeof(OMTranslate);
                break;

            case DObjVec_Kind_Rotate:
                rotate = (OMRotate*)csr;
                csr += sizeof(OMRotate);
                break;

            case DObjVec_Kind_Scale:
                scale = (OMScale*)csr;
                csr += sizeof(OMScale);
                break;
            }
        }
    }
    for (i = dobj->ommtx_len; i > ommtx_id; i--)
    {
        dobj->ommtx[i] = dobj->ommtx[i - 1];
    }
    dobj->ommtx_len++;

    dobj->ommtx[ommtx_id] = ommtx = omGetOMMtxSetNextAlloc();
    ommtx->kind = kind;

    switch (kind)
    {
    case OMMtx_Transform_Tra:
    case 34:
    case 36:
    case 38:
    case 40:
    case 55:
        dobj->translate = dOMTranslateDefault;
        dobj->translate.ommtx = ommtx;
        break;

    case OMMtx_Transform_RotD:
    case OMMtx_Transform_RotR:
        dobj->rotate = dOMRotateDefaultAXYZ;
        dobj->rotate.ommtx = ommtx;
        break;

    case OMMtx_Transform_TraRotD:
    case OMMtx_Transform_TraRotR:
        dobj->translate = dOMTranslateDefault;
        dobj->rotate = dOMRotateDefaultAXYZ;
        dobj->translate.ommtx = ommtx;
        dobj->rotate.ommtx = ommtx;
        break;

    case OMMtx_Transform_RotRpyD:
    case OMMtx_Transform_RotRpyR:
    case OMMtx_Transform_RotPyrR:
        dobj->rotate = dOMRotateDefaultRPY;
        dobj->rotate.ommtx = ommtx;
        break;

    case OMMtx_Transform_TraRotRpyD:
    case OMMtx_Transform_TraRotRpyR:
    case OMMtx_Transform_TraRotPyrR:
    case 51:
    case 52:
        dobj->translate = dOMTranslateDefault;
        dobj->rotate = dOMRotateDefaultRPY;
        dobj->translate.ommtx = ommtx;
        dobj->rotate.ommtx = ommtx;
        break;

    case OMMtx_Transform_TraRotRSca:
        dobj->translate = dOMTranslateDefault;
        dobj->rotate = dOMRotateDefaultAXYZ;
        dobj->scale = dOMScaleDefault;
        dobj->translate.ommtx = ommtx;
        dobj->rotate.ommtx = ommtx;
        dobj->scale.ommtx = ommtx;
        break;

    case OMMtx_Transform_TraRotRpyRSca:
    case OMMtx_Transform_TraRotPyrRSca:
    case 54:
        dobj->translate = dOMTranslateDefault;
        dobj->rotate = dOMRotateDefaultRPY;
        dobj->scale = dOMScaleDefault;
        dobj->translate.ommtx = ommtx;
        dobj->rotate.ommtx = ommtx;
        dobj->scale.ommtx = ommtx;
        break;

    case OMMtx_Transform_Sca:
    case 43:
    case 44:
    case 47:
    case 48:
    case 49:
    case 50:
    case 53:
        dobj->scale = dOMScaleDefault;
        dobj->scale.ommtx = ommtx;
        break;

    case 45:
    case 46:
        dobj->rotate = dOMRotateDefaultAXYZ;
        dobj->scale = dOMScaleDefault;
        dobj->rotate.ommtx = ommtx;
        dobj->scale.ommtx = ommtx;
        break;

    case OMMtx_Transform_VecTra:
        *translate = dOMTranslateDefault;
        translate->mtx = ommtx;
        break;

    case OMMtx_Transform_VecRotR:
        *rotate = dOMRotateDefaultAXYZ;
        rotate->mtx = ommtx;
        break;

    case OMMtx_Transform_VecRotRpyR:
        *rotate = dOMRotateDefaultRPY;
        rotate->mtx = ommtx;
        break;

    case OMMtx_Transform_VecSca:
        *scale = dOMScaleDefault;
        scale->mtx = ommtx;
        break;

    case OMMtx_Transform_VecTraRotR:
        *translate = dOMTranslateDefault;
        *rotate = dOMRotateDefaultAXYZ;

        translate->mtx = rotate->mtx = ommtx;
        break;

    case OMMtx_Transform_VecTraRotRSca:
        *translate = dOMTranslateDefault;
        *rotate = dOMRotateDefaultAXYZ;
        *scale = dOMScaleDefault;

        translate->mtx = rotate->mtx = scale->mtx = ommtx;
        break;

    case OMMtx_Transform_VecTraRotRpyR:
        *translate = dOMTranslateDefault;
        *rotate = dOMRotateDefaultRPY;

        translate->mtx = rotate->mtx = ommtx;
        break;

    case OMMtx_Transform_VecTraRotRpyRSca:
        *translate = dOMTranslateDefault;
        *rotate = dOMRotateDefaultRPY;
        *scale = dOMScaleDefault;

        translate->mtx = rotate->mtx = scale->mtx = ommtx;
        break;

    case 1:
    case 17:
        break;
    }
    ommtx->unk05 = arg2;

    return ommtx;
}

// This actually returns omAddOMMtxForDObjVar, see https://decomp.me/scratch/nIQ4X
OMMtx* omAddOMMtxForDObjFixed(DObj *dobj, u8 kind, u8 arg2)
{ 
    return omAddOMMtxForDObjVar(dobj, kind, arg2, dobj->ommtx_len);
}

// 0x80008CF0
OMMtx* omAddOMMtxForCamera(Camera *cam, u8 kind, u8 arg2)
{
    OMMtx *ommtx;

    if (cam->ommtx_len == ARRAY_COUNT(cam->ommtx)) 
    {
        gsFatalPrintF("om : couldn't add OMMtx for Camera\n");
        while (TRUE); // {}
    }
    ommtx = omGetOMMtxSetNextAlloc();

    cam->ommtx[cam->ommtx_len] = ommtx;
    cam->ommtx_len++;

    ommtx->kind = kind;

    switch (kind)
    {
    case OMMtx_Transform_PerspFastF:
    case OMMtx_Transform_PerspF:
        cam->projection.persp = dOMPerspDefault;
        cam->projection.persp.ommtx = ommtx;
        break;

    case OMMtx_Transform_Ortho:
        cam->projection.ortho = dOMOrthoDefault;
        cam->projection.ortho.ommtx = ommtx;
        break;

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
        cam->vec = dCameraVecDefault;
        cam->vec.ommtx = ommtx;
        break;

    case 1:
    case 2:
        break;
    }
    ommtx->unk05 = arg2;

    return ommtx;
}

AObj* omAddAObjForDObj(DObj *dobj, u8 index)
{
    AObj *aobj = omGetAObjSetNextAlloc();

    aobj->param = index;
    aobj->kind = 0;
    aobj->interpolate = NULL;
    aobj->rate_target = 0.0F;
    aobj->rate_base = 0.0F;
    aobj->value_target = 0.0F;
    aobj->value_base = 0.0F;
    aobj->length = 0.0F;
    aobj->length_invert = 1.0F;

    omAppendAObjToDObj(dobj, aobj);

    return aobj;
}

// 0x80008EE4
void omRemoveAObjFromDObj(DObj *dobj)
{
    AObj *current_aobj;
    AObj *next_aobj;

    current_aobj = dobj->aobj;

    while (current_aobj != NULL)
    {
        next_aobj = current_aobj->next;
        omSetAObjPrevAlloc(current_aobj);
        current_aobj = next_aobj;
    }
    dobj->aobj = NULL;
    dobj->dobj_f0 = AOBJ_FRAME_NULL;
}

AObj* omAddAObjForMObj(MObj *mobj, u8 index) 
{
    AObj *aobj = omGetAObjSetNextAlloc();

    aobj->param = index;
    aobj->kind = 0;
    aobj->interpolate = NULL;
    aobj->rate_target = 0.0F;
    aobj->rate_base = 0.0F;
    aobj->value_target = 0.0F;
    aobj->value_base = 0.0F;
    aobj->length = 0.0F;
    aobj->length_invert = 1.0F;

    omAppendAObjToMObj(mobj, aobj);

    return aobj;
}

// free struct AObj list at unk90
void omRemoveAObjFromMObj(MObj *mobj)
{
    AObj *current_aobj;
    AObj *next_aobj;

    current_aobj = mobj->aobj;

    while (current_aobj != NULL)
    {
        next_aobj = current_aobj->next;
        omSetAObjPrevAlloc(current_aobj);
        current_aobj = next_aobj;
    }
    mobj->aobj = NULL;
    mobj->mobj_f0 = AOBJ_FRAME_NULL;
}

// 0x80009010
AObj* omAddAObjForCamera(Camera *cam, u8 index)
{
    AObj *aobj = omGetAObjSetNextAlloc();

    aobj->param = index;
    aobj->kind = 0;
    aobj->interpolate = NULL;
    aobj->rate_target = 0.0F;
    aobj->rate_base = 0.0F;
    aobj->value_target = 0.0F;
    aobj->value_base = 0.0F;
    aobj->length = 0.0F;
    aobj->length_invert = 1.0F;

    omAppendAObjToCamera(cam, aobj);

    return aobj;
}

// 0x8000907C
void omRemoveAObjFromCamera(Camera *cam) 
{
    AObj *current_aobj;
    AObj *next_aobj;

    current_aobj = cam->aobj;

    while (current_aobj != NULL)
    {
        next_aobj = current_aobj->next;
        omSetAObjPrevAlloc(current_aobj);
        current_aobj = next_aobj;
    }
    cam->aobj = NULL;
    cam->cam_f0 = AOBJ_FRAME_NULL;
}

// 0x800090DC
MObj* omAddMObjForDObj(DObj *dobj, MObjSub *mobjsub)
{
    MObj *mobj = omGetMObjSetNextAlloc();

    if (dobj->mobj != NULL)
    {
        MObj *current_mobj = dobj->mobj->next;
        MObj *prior_mobj = dobj->mobj;

        while (current_mobj != NULL)
        {
            prior_mobj = current_mobj;
            current_mobj = current_mobj->next;
        }
        prior_mobj->next = mobj;
    }
    else dobj->mobj = mobj;

    mobj->next = NULL;
    mobj->lfrac = mobjsub->prim_l / 255.0F;
    mobj->sub = *mobjsub;

    mobj->sub.unk24 = mobjsub->unk14;
    mobj->sub.unk28 = mobjsub->unk1C;
    mobj->current_image_id = 0;
    mobj->next_image_id = 0;
    mobj->image_frame = 0;
    mobj->aobj = NULL;
    mobj->actor.p = NULL;
    mobj->mobj_f0 = AOBJ_FRAME_NULL;
    mobj->mobj_f1 = 1.0F;
    mobj->mobj_f2 = 0.0F;

    return mobj;
}

// 0x800091F4
void omRemoveMObjFromDObj(DObj *dobj)
{
    MObj *current_mobj;
    MObj *next_mobj;
    AObj *current_aobj;
    AObj *next_aobj;

    current_mobj = dobj->mobj;

    while (current_mobj != NULL) 
    {
        current_aobj = current_mobj->aobj;

        while (current_aobj != NULL)
        {
            next_aobj = current_aobj->next;
            omSetAObjPrevAlloc(current_aobj);
            current_aobj = next_aobj;
        }
        next_mobj = current_mobj->next;
        omSetMObjPrevAlloc(current_mobj);
        current_mobj = next_mobj;
    }
    dobj->mobj = NULL;
}

// 0x8000926C
void omInitDObj(DObj *dobj)
{
    s32 i;

    dobj->dynstore = NULL;
    dobj->flags = 0;
    dobj->unk_dobj_0x55 = 0;
    dobj->ommtx_len = 0;

    for (i = 0; i < ARRAY_COUNT(dobj->ommtx); i++)
    {
        dobj->ommtx[i] = NULL;
    }
    dobj->aobj = NULL;
    dobj->actor.p = NULL;
    dobj->dobj_f0 = AOBJ_FRAME_NULL;
    dobj->dobj_f1 = 1.0F;
    dobj->dobj_f2 = 0.0F;
    dobj->mobj = NULL;
    dobj->user_data.p = NULL;
}

// 0x800092D0
DObj* omAddDObjForGObj(GObj *gobj, void *dvar)
{
    DObj *new_dobj;
    DObj *current_dobj;

    if (gobj == NULL)
    { 
        gobj = D_80046A54;
    }
    new_dobj = omGetDObjSetNextAlloc();

    if (gobj->obj != NULL)
    {
        current_dobj = DObjGetStruct(gobj);

        while (current_dobj->sib_next != NULL)
        {
            current_dobj = current_dobj->sib_next;
        }
        current_dobj->sib_next = new_dobj;
        new_dobj->sib_prev = current_dobj;
    } 
    else
    {
        gobj->obj_kind  = GObj_ObjKind_DObj;
        gobj->obj = new_dobj;
        new_dobj->sib_prev = NULL;
    }

    new_dobj->parent_gobj  = gobj;
    new_dobj->parent = DOBJ_PARENT_NULL;
    new_dobj->sib_next  = NULL;
    new_dobj->child = NULL;
    new_dobj->display_ptr = dvar;

    omInitDObj(new_dobj);

    return new_dobj;
}

// 0x80009380
DObj* omAddSiblingForDObj(DObj *dobj, void *dvar)
{
    DObj *new_dobj = omGetDObjSetNextAlloc();

    if (dobj->sib_next != NULL)
    { 
        dobj->sib_next->sib_prev = new_dobj;
    }
    new_dobj->sib_prev    = dobj;
    new_dobj->sib_next    = dobj->sib_next;
    dobj->sib_next        = new_dobj;
    new_dobj->parent_gobj = dobj->parent_gobj;
    new_dobj->parent      = dobj->parent;

    new_dobj->child = NULL;
    new_dobj->display_ptr = dvar;

    omInitDObj(new_dobj);

    return new_dobj;
}

// 0x800093F4
DObj* omAddChildForDObj(DObj *dobj, void *dvar)
{
    DObj *new_dobj = omGetDObjSetNextAlloc();
    DObj *current_dobj;

    if (dobj->child != NULL)
    {
        current_dobj = dobj->child;

        while (current_dobj->sib_next != NULL) 
        { 
            current_dobj = current_dobj->sib_next;
        }

        current_dobj->sib_next = new_dobj;
        new_dobj->sib_prev = current_dobj;
    }
    else 
    {
        dobj->child = new_dobj;
        new_dobj->sib_prev = NULL;
    }

    new_dobj->parent_gobj = dobj->parent_gobj;
    new_dobj->parent = dobj;
    new_dobj->child = NULL;
    new_dobj->sib_next  = NULL;
    new_dobj->display_ptr = dvar;

    omInitDObj(new_dobj);

    return new_dobj;
}

// drop_dobj, cleanup_dobj, omSetDObjPrevAlloc?
void omEjectDObj(DObj *dobj)
{
    s32 i;
    AObj *current_aobj;
    AObj *next_aobj;
    MObj *current_mobj;
    MObj *next_mobj;

    while (dobj->child != NULL)
    { 
        omEjectDObj(dobj->child);
    }
    if (dobj->parent == DOBJ_PARENT_NULL)
    {
        if (dobj == DObjGetStruct(dobj->parent_gobj)) 
        {
            dobj->parent_gobj->obj = dobj->sib_next;

            if (DObjGetStruct(dobj->parent_gobj) == NULL)
            { 
                dobj->parent_gobj->obj_kind = GObj_ObjKind_None;
            }
        }
    } 
    else if (dobj == dobj->parent->child)
    {
        dobj->parent->child = dobj->sib_next;
    }

    if (dobj->sib_prev != NULL) 
    {
        dobj->sib_prev->sib_next = dobj->sib_next;
    }

    if (dobj->sib_next != NULL) 
    { 
        dobj->sib_next->sib_prev = dobj->sib_prev;
    }

    for (i = 0; i < ARRAY_COUNT(dobj->ommtx); i++) 
    {
        if (dobj->ommtx[i] != NULL)
        { 
            omSetOMMtxPrevAlloc(dobj->ommtx[i]); 
        }
    }
    if ((dobj->dynstore != NULL) && (sOMDObjDataProcEject != NULL))
    {
        sOMDObjDataProcEject(dobj->dynstore);
    }
    current_aobj = dobj->aobj;

    while (current_aobj != NULL) 
    {
        next_aobj = current_aobj->next;
        omSetAObjPrevAlloc(current_aobj);
        current_aobj = next_aobj;
    }

    current_mobj = dobj->mobj;

    while (current_mobj != NULL) 
    {
        current_aobj = current_mobj->aobj;

        while (current_aobj != NULL) 
        {
            next_aobj = current_aobj->next;
            omSetAObjPrevAlloc(current_aobj);
            current_aobj = next_aobj;
        }
        next_mobj = current_mobj->next;
        omSetMObjPrevAlloc(current_mobj);
        current_mobj = next_mobj;
    }

    omSetDObjPrevAlloc(dobj);
}

// 0x80009614
SObj* omAddSObjForGObj(GObj *gobj, Sprite *sprite)
{
    SObj *new_sobj;

    if (gobj == NULL)
    { 
        gobj = D_80046A54;
    }
    new_sobj = omGetSObjSetNextAlloc();

    if (SObjGetStruct(gobj) != NULL)
    {
        SObj *tail_sobj = SObjGetStruct(gobj);

        while (tail_sobj->next != NULL) 
        { 
            tail_sobj = tail_sobj->next; 
        }
        tail_sobj->next = new_sobj;
        new_sobj->prev = tail_sobj;
    } 
    else
    {
        gobj->obj_kind = GObj_ObjKind_SObj;
        gobj->obj = new_sobj;
        new_sobj->prev = NULL;
    }
    new_sobj->parent_gobj = gobj;
    new_sobj->next = NULL;

    if (sprite != NULL)
    {
        new_sobj->sprite = *sprite; 
    }
    new_sobj->user_data.p = NULL;

    return new_sobj;
}

// 0x800096EC
void omEjectSObj(SObj *sobj) 
{
    if (sobj == SObjGetStruct(sobj->parent_gobj))
    {
        sobj->parent_gobj->obj = sobj->next;

        if (SObjGetStruct(sobj->parent_gobj) == NULL)
        { 
            sobj->parent_gobj->obj_kind = GObj_ObjKind_None;
        }
    }
    if (sobj->prev != NULL)
    {
        sobj->prev->next = sobj->next;
    }
    if (sobj->next != NULL)
    { 
        sobj->next->prev = sobj->prev;
    }
    omSetSObjPrevAlloc(sobj);
}

// 0x80009760
Camera* omAddCameraForGObj(GObj *gobj)
{
    s32 i;
    Camera *new_cam;

    if (gobj == NULL)
    {
        gobj = D_80046A54;
    }
    gobj->obj_kind = GObj_ObjKind_Camera;

    new_cam = omGetCameraSetNextAlloc();
    gobj->obj = new_cam;
    new_cam->parent_gobj = gobj;

    dpSetViewport(&new_cam->viewport);

    new_cam->ommtx_len = 0;

    for (i = 0; i < ARRAY_COUNT(new_cam->ommtx); i++)
    { 
        new_cam->ommtx[i] = NULL;
    }
    new_cam->flags = 0;
    new_cam->color = GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00);
    new_cam->proc_camera = NULL;
    new_cam->unk_camera_0x8C = 0;

    new_cam->aobj = NULL;
    new_cam->actor.p = NULL;

    new_cam->cam_f0 = AOBJ_FRAME_NULL;
    new_cam->cam_f1 = 1.0F;
    new_cam->cam_f2 = 0.0F;

    return new_cam;
}

// 0x80009810
void omEjectCamera(Camera *cam) 
{
    GObj *gobj;
    s32 i;
    AObj *current_aobj;
    AObj *next_aobj;

    gobj = cam->parent_gobj;
    gobj->obj_kind = GObj_ObjKind_None;
    gobj->obj = NULL;

    for (i = 0; i < ARRAY_COUNT(cam->ommtx); i++) 
    {
        if (cam->ommtx[i] != NULL)
        {
            omSetOMMtxPrevAlloc(cam->ommtx[i]);
        }
    }
    current_aobj = cam->aobj;

    while (current_aobj != NULL)
    {
        next_aobj = current_aobj->next;
        omSetAObjPrevAlloc(current_aobj);
        current_aobj = next_aobj;
    }
    omSetCameraPrevAlloc(cam);
}

GObj* omInitGObjCommon(u32 id, void (*proc_run)(GObj*), u8 link, u32 order)
{
    GObj *new_gobj;

    if (link >= ARRAY_COUNT(gOMObjCommonLinks)) 
    {
        gsFatalPrintF("omGAddCommon() : link num over : link = %d : id = %d\n", link, id);
        while (TRUE) { }
    }

    new_gobj = omGetGObjSetNextAlloc();

    if (new_gobj == NULL)
    { 
        return NULL;
    }

    new_gobj->gobj_id = id;
    new_gobj->link_id = link;
    new_gobj->link_order = order;
    new_gobj->proc_run = proc_run;
    new_gobj->gobjproc_head = NULL;
    new_gobj->gobjproc_tail = NULL;
    new_gobj->gobjlink_len = 0;
    new_gobj->flags = GOBJ_FLAG_NONE;

    new_gobj->obj_kind = GObj_ObjKind_None;
    new_gobj->obj = NULL;

    new_gobj->dl_link_id = ARRAY_COUNT(gOMObjCommonDLLinks);
    new_gobj->anim_frame = 0.0F;
    new_gobj->dobjproc = NULL;
    new_gobj->user_data.p = NULL;

    return new_gobj;
}

// from 64remix: render.create_object
GObj* omMakeGObjSPAfter(u32 id, void (*proc_run)(GObj*), u8 link, u32 order)
{
    GObj *new_gobj = omInitGObjCommon(id, proc_run, link, order);

    if (new_gobj == NULL)
    {
        return NULL; 
    }
    omLinkGObjSPAfter(new_gobj);

    return new_gobj;
}

// 0x800099A8
GObj* omMakeGObjSPBefore(u32 id, void (*proc_run)(GObj*), u8 link, u32 order)
{
    GObj *new_gobj = omInitGObjCommon(id, proc_run, link, order);

    if (new_gobj == NULL)
    {
        return NULL;
    }
    omLinkGObjSPBefore(new_gobj);

    return new_gobj;
}

// 0x800099E8
GObj* omMakeGObjAfter(u32 id, void (*proc_run)(GObj*), GObj *link_gobj) 
{
    GObj *new_gobj = omInitGObjCommon(id, proc_run, link_gobj->link_id, link_gobj->link_order);

    if (new_gobj == NULL)
    {
        return NULL; 
    }
    omLinkGObjAfter(new_gobj, link_gobj);

    return new_gobj;
}

// 0x80009A34
GObj* omMakeGObjBefore(u32 id, void (*proc_run)(GObj *), GObj *link_gobj)
{
    GObj *new_gobj = omInitGObjCommon(id, proc_run, link_gobj->link_id, link_gobj->link_order);

    if (new_gobj == NULL)
    {
        return NULL;
    }
    omLinkGObjAfter(new_gobj, link_gobj->link_prev);

    return new_gobj;
}

void omEjectGObj(GObj *gobj)
{
    if ((gobj == NULL) || (gobj == D_80046A54))
    {
        D_80046A64 = 2;
        return;
    }

    func_8000B39C(gobj);

    switch (gobj->obj_kind)
    {
    case GObj_ObjKind_DObj:
        func_8000B70C(gobj); 
        break;

    case GObj_ObjKind_SObj:
        func_8000B760(gobj); 
        break;

    case GObj_ObjKind_Camera:
        omEjectCamera(CameraGetStruct(gobj));
        break;
    }

    if (gobj->dl_link_id != ARRAY_COUNT(gOMObjCommonDLLinks))
    { 
        omRemoveGObjFromDLLinkedList(gobj); 
    }
    omRemoveGObjFromLinkedList(gobj);
    omSetGObjPrevAlloc(gobj);
}

void omMoveGObjCommon(s32 sw, GObj *this_gobj, u8 link, u32 order, GObj *other_gobj)
{
    GObjProcess *current_gobjproc;
    GObjProcess *orig_gobjproc;
    GObjProcess *next_gobjproc;

    if (link >= ARRAY_COUNT(gOMObjCommonLinks))
    {
        gsFatalPrintF("omGMoveCommon() : link num over : link = %d : id = %d\n", link, this_gobj->gobj_id);

        while (TRUE); // {}
    }

    if (this_gobj == NULL) 
    {
        this_gobj = D_80046A54; 
    }

    orig_gobjproc = this_gobj->gobjproc_head;

    this_gobj->gobjproc_head = NULL;
    this_gobj->gobjproc_tail = NULL;

    current_gobjproc = orig_gobjproc;

    while (current_gobjproc != NULL)
    {
        func_80007784(current_gobjproc);
        current_gobjproc = current_gobjproc->link_next;
    }
    omRemoveGObjFromLinkedList(this_gobj);

    this_gobj->link_id = link;
    this_gobj->link_order = order;

    switch (sw)
    {
    case 0:
        omLinkGObjSPAfter(this_gobj);
        break;

    case 1:
        omLinkGObjSPBefore(this_gobj);
        break;

    case 2:
        omLinkGObjAfter(this_gobj, other_gobj);
        break;

    case 3:
        omLinkGObjAfter(this_gobj, other_gobj->link_prev);
        break;
    }

    current_gobjproc = orig_gobjproc;

    while (current_gobjproc != NULL)
    {
        next_gobjproc = current_gobjproc->link_next;
        omLinkGObjProcess(current_gobjproc);
        current_gobjproc = next_gobjproc;
    }
}

// 0x80009C90
void func_80009C90(GObj *gobj, u8 link, u32 order)
{
    omMoveGObjCommon(0, gobj, link, order, NULL);
}

// 0x80009CC8
void func_80009CC8(GObj *gobj, u8 link, u32 order)
{
    omMoveGObjCommon(1, gobj, link, order, NULL);
}

// 0x80009D00
void unref_80009D00(GObj *this_gobj, GObj *other_gobj) 
{
    omMoveGObjCommon(2, this_gobj, other_gobj->link_id, other_gobj->link_order, other_gobj);
}

// 0x80009D3C
void unref_80009D3C(GObj *this_gobj, GObj *other_gobj) 
{
    omMoveGObjCommon(3, this_gobj, other_gobj->link_id, other_gobj->link_order, other_gobj);
}

void omLinkGObjDLCommon(GObj *gobj, void (*proc_render)(GObj*), u8 dl_link, u32 dl_order, s32 arg4) 
{
    if (dl_link >= ARRAY_COUNT(gOMObjCommonDLLinks) - 1)
    {
        gsFatalPrintF("omGLinkObjDLCommon() : dl_link num over : dl_link = %d : id = %d\n", dl_link, gobj->gobj_id);
        while (TRUE); // {}
    }

    gobj->dl_link_id = dl_link;
    gobj->dl_link_order = dl_order;
    gobj->proc_render = proc_render;
    gobj->ftparts_gobj_0x38 = arg4;
    gobj->fd_last = D_8003B6E8.word - 1;
}

void omAddGObjRenderProc(GObj *gobj, void (*proc_render)(GObj*), u8 dl_link, u32 order, s32 arg4) 
{
    if (gobj == NULL)
    { 
        gobj = D_80046A54;
    }
    omLinkGObjDLCommon(gobj, proc_render, dl_link, order, arg4);
    omDLLinkGObjTail(gobj);
}

void unref_80009E38(GObj *gobj, void (*proc_render)(GObj*), u8 dl_link, u32 order, s32 arg4)
{
    if (gobj == NULL)
    { 
        gobj = D_80046A54;
    }
    omLinkGObjDLCommon(gobj, proc_render, dl_link, order, arg4);
    omDLLinkGObjHead(gobj);
}

void unref_80009E7C(GObj *this_gobj, void (*proc_render)(GObj*), s32 arg2, GObj *other_gobj) 
{
    if (this_gobj == NULL)
    { 
        this_gobj = D_80046A54;
    }
    omLinkGObjDLCommon(this_gobj, proc_render, other_gobj->dl_link_id, other_gobj->dl_link_order, arg2);
    omAppendGObjToDLLinkedList(this_gobj, other_gobj);
}

void unref_80009ED0(GObj *this_gobj, void (*proc_render)(GObj*), s32 arg2, GObj *other_gobj)
{
    if (this_gobj == NULL)
    {
        this_gobj = D_80046A54;
    }
    omLinkGObjDLCommon(this_gobj, proc_render, other_gobj->dl_link_id, other_gobj->dl_link_order, arg2);
    omAppendGObjToDLLinkedList(this_gobj, other_gobj->link_prev);
}

// 0x80009F28
void func_80009F28(GObj *gobj, void (*proc_render)(GObj*), u32 order, u64 arg3, s32 arg4) 
{
    gobj->dl_link_id = ARRAY_COUNT(gOMObjCommonDLLinks) - 1;
    gobj->dl_link_order = order;
    gobj->proc_render = proc_render;
    gobj->ftparts_gobj_0x30 = arg3;
    gobj->ftparts_gobj_0x38 = arg4;
    gobj->ftparts_gobj_0x40 = 0;
    gobj->fd_last = D_8003B6E8.word - 1;
}

// 0x80009F74
void func_80009F74(GObj *gobj, void (*proc_render)(GObj*), u32 order, u64 arg3, s32 arg4) 
{
    if (gobj == NULL)
    { 
        gobj = D_80046A54;
    }
    func_80009F28(gobj, proc_render, order, arg3, arg4);
    omDLLinkGObjTail(gobj);
}

// 0x80009FC0
void unref_80009FC0(GObj *gobj, void (*proc_render)(GObj *), u32 order, u64 arg3, s32 arg4)
{
    if (gobj == NULL)
    {
        gobj = D_80046A54;
    }
    func_80009F28(gobj, proc_render, order, arg3, arg4);
    omDLLinkGObjHead(gobj);
}

// 0x8000A00C
void unref_8000A00C(GObj *this_gobj, void (*proc_render)(GObj*), u64 arg2, s32 arg3, GObj *other_gobj) 
{
    if (this_gobj == NULL) 
    {
        this_gobj = D_80046A54;
    }
    func_80009F28(this_gobj, proc_render, other_gobj->dl_link_order, arg2, arg3);
    omAppendGObjToDLLinkedList(this_gobj, other_gobj);
}

// 0x8000A06C
void unref_8000A06C(GObj *this_gobj, void (*proc_render)(GObj*), u64 arg2, s32 arg3, GObj *other_gobj)
{
    if (this_gobj == NULL)
    {
        this_gobj = D_80046A54;
    }
    func_80009F28(this_gobj, proc_render, other_gobj->dl_link_order, arg2, arg3);
    omAppendGObjToDLLinkedList(this_gobj, other_gobj->link_prev);
}

// 0x8000A0D0
void omMoveGObjDL(GObj *gobj, u8 dl_link, u32 order)
{
    if (dl_link >= ARRAY_COUNT(gOMObjCommonDLLinks) - 1) 
    {
        gsFatalPrintF("omGMoveObjDL() : dl_link num over : dl_link = %d : id = %d\n", dl_link, gobj->gobj_id);
        while (TRUE); // {}
    }
    omRemoveGObjFromDLLinkedList(gobj);

    gobj->dl_link_id = dl_link;
    gobj->dl_link_order = order;

    omDLLinkGObjTail(gobj);
}

void omMoveGObjDLHead(GObj *gobj, u8 dl_link, u32 order)
{
    if (dl_link >= ARRAY_COUNT(gOMObjCommonDLLinks) - 1)
    {
        gsFatalPrintF("omGMoveObjDLHead() : dl_link num over : dl_link = %d : id = %d\n", dl_link, gobj->gobj_id);
        while (TRUE); // {}
    }
    omRemoveGObjFromDLLinkedList(gobj);

    gobj->dl_link_id = dl_link;
    gobj->dl_link_order = order;

    omDLLinkGObjHead(gobj);
}

// 0x8000A1C8
void unref_8000A1C8(GObj *this_gobj, GObj *other_gobj) 
{
    omRemoveGObjFromDLLinkedList(this_gobj);

    this_gobj->dl_link_id = other_gobj->dl_link_id;
    this_gobj->dl_link_order = other_gobj->dl_link_order;

    omAppendGObjToDLLinkedList(this_gobj, other_gobj);
}

// 0x8000A208
void unref_8000A208(GObj *this_gobj, GObj *other_gobj) 
{
    omRemoveGObjFromDLLinkedList(this_gobj);

    this_gobj->dl_link_id = other_gobj->dl_link_id;
    this_gobj->dl_link_order = other_gobj->dl_link_order;

    omAppendGObjToDLLinkedList(this_gobj, other_gobj->dl_link_prev);
}

// 0x8000A24C
void func_8000A24C(GObj *gobj, u32 order) 
{
    omRemoveGObjFromDLLinkedList(gobj);

    gobj->dl_link_order = order;

    omDLLinkGObjTail(gobj);
}

// 0x8000A280
void unref_8000A280(GObj *gobj, u32 order)
{
    omRemoveGObjFromDLLinkedList(gobj);

    gobj->dl_link_order = order;

    omDLLinkGObjHead(gobj);
}

// 0x8000A2B4
void func_8000A2B4(GObj *this_gobj, GObj *other_gobj) 
{
    omRemoveGObjFromDLLinkedList(this_gobj);

    this_gobj->dl_link_order = other_gobj->dl_link_order;

    omAppendGObjToDLLinkedList(this_gobj, other_gobj);
}

// 0x8000A2EC
void unref_8000A2EC(GObj *this_gobj, GObj *other_gobj)
{
    omRemoveGObjFromDLLinkedList(this_gobj);

    this_gobj->dl_link_order = other_gobj->dl_link_order;

    omAppendGObjToDLLinkedList(this_gobj, other_gobj->link_prev);
}

// 0x8000A328
void omSetMaxNumGObj(s32 num)
{
    sOMObjCommonNumMax = num;
}

// 0x8000A334
s16 omGetMaxNumGObj(void)
{
    return sOMObjCommonNumMax;
}

// 0x8000A340
void func_8000A340(void) 
{
    s32 i;
    s32 v1;
    GObj *gobj;

    gOMObjCurrentRendering = NULL;
    D_80046A5C = NULL;

    for (i = 0, v1 = D_8003B6E8.word - 1; i < ARRAY_COUNT(D_80046A88); i++)
    { 
        D_80046A88[i].id = v1;
    }
    gobj = gOMObjCommonDLLinks[ARRAY_COUNT(gOMObjCommonDLLinks) - 1];

    while (gobj != NULL)
    {
        if (!(gobj->flags & GOBJ_FLAG_NORENDER))
        {
            D_8003B874 = 3;
            gOMObjCurrentRendering = gobj;
            gobj->proc_render(gobj);
            D_8003B874 = 0;
        }
        gobj = gobj->dl_link_next;
    }
}

// 0x8000A40C
GObj* omRunGObjCommon(GObj *gobj)
{
    GObj *return_gobj;

    D_8003B874 = 1;
    D_80046A54 = gobj;

    gobj->proc_run(gobj);

    return_gobj = gobj->link_next;

    D_80046A54 = NULL;
    D_8003B874 = 0;

    switch (D_80046A64)
    {
    case 0:
        break;

    case 2:
        D_80046A64 = 0;
        omEjectGObj(gobj);
        break;

    default:
        D_80046A64 = 0;
        break;
    }
    return return_gobj;
}

// 0x8000A49C
GObjProcess* omRunGObjProcess(GObjProcess *gobjproc) 
{
    GObjProcess *return_gobjproc;

    D_8003B874 = 2;
    D_80046A54 = gobjproc->parent_gobj;
    D_80046A60 = gobjproc;

    switch (gobjproc->kind)
    {
    case GObjProcess_Kind_OSThread:
        osStartThread(&gobjproc->gobjthread->osthread);
        osRecvMesg(&gOMMesgQueue, NULL, OS_MESG_BLOCK);
        break;

    case GObjProcess_Kind_Proc:
        gobjproc->proc_common(gobjproc->parent_gobj);
        break;
    }

    return_gobjproc = gobjproc->priority_next;

    D_80046A54 = NULL;
    D_80046A60 = NULL;
    D_8003B874 = 0;

    switch (D_80046A64)
    {
    case 2:
        D_80046A64 = 0;

        while ((return_gobjproc != NULL) && (return_gobjproc->parent_gobj == gobjproc->parent_gobj))
        {
            return_gobjproc = return_gobjproc->priority_next;
        }
        omEjectGObj(gobjproc->parent_gobj);
        break;

    case 1:
        D_80046A64 = 0;
        func_8000848C(gobjproc);
        break;

    case 0:
        break;

    default:
        D_80046A64 = 0;
        break;
    }
    return return_gobjproc;
}

// 0x8000A5E4
void func_8000A5E4(void)
{
    s32 i;
    GObj *gobj;
    GObjProcess *gobjproc;

    D_80046A64 = 0;
    D_80046A54 = NULL;
    D_80046A60 = NULL;

    for (i = 0; i < ARRAY_COUNT(gOMObjCommonLinks); i++)
    {
        gobj = gOMObjCommonLinks[i];

        while (gobj != NULL)
        {
            if (!(gobj->flags & GOBJ_FLAG_NOEJECT) && (gobj->proc_run != NULL))
            {
                gobj = omRunGObjCommon(gobj);
            } 
            else gobj = gobj->link_next;
        }
    }
    for (i = ARRAY_COUNT(sOMObjProcessQueue) - 1; i >= 0; i--)
    {
        gobjproc = sOMObjProcessQueue[i];

        while (gobjproc != NULL)
        {
            if (gobjproc->is_paused == FALSE)
            {
                gobjproc = omRunGObjProcess(gobjproc);
            } 
            else gobjproc = gobjproc->priority_next;
        }
    }
}

void omSetupObjectManager(OMSetup *setup)
{
    s32 i;

    sOMThreadStackSize = setup->omthreadstack_size;
    sUnkUnusedSetup  = setup->unk_omsetup_0x14;

    if (setup->num_gobjthreads != 0)
    {
        GObjThread *current_gobjthread;

        sOMObjThreadHead = current_gobjthread = setup->gobjthreads;

        for (i = 0; i < setup->num_gobjthreads - 1; i++) 
        {
            GObjThread *next_gobjthread = current_gobjthread + 1;

            current_gobjthread->next = next_gobjthread;
            current_gobjthread = next_gobjthread;
        }
        current_gobjthread->next = NULL;
    }
    else sOMObjThreadHead = NULL;

    if ((setup->num_omthreadstacks != 0) && (setup->threadStackSize != NULL))
    {
        OMThreadStackNode *current_stack;

        sOMThreadStackHead        = gsMemoryAlloc(sizeof(OMThreadStackList), 0x4);
        sOMThreadStackHead->next  = NULL;
        sOMThreadStackHead->size  = sOMThreadStackSize;
        sOMThreadStackHead->stack = csr = setup->omthreadstacks;

        for (i = 0; i < setup->num_omthreadstacks - 1; i++)
        {
            current_stack->next = (OMThreadStackNode*) ((uintptr_t)current_stack + sOMThreadStackSize + offsetof(OMThreadStackNode, stack));
            current_stack->stack_size = sOMThreadStackSize;
            current_stack = (OMThreadStackNode*) ((uintptr_t)current_stack + sOMThreadStackSize + offsetof(OMThreadStackNode, stack));
        }

        current_stack->stack_size = sOMThreadStackSize;
        current_stack->next       = NULL;
    }
    else sOMThreadStackHead = NULL;

    if (setup->num_gobjprocs != 0) 
    {
        GObjProcess *current_gobjproc;

        sOMObjProcessHead = current_gobjproc = setup->gobjprocs;

        for (i = 0; i < setup->num_gobjprocs - 1; i++)
        {
            GObjProcess *next_gobjproc = current_gobjproc + 1;

            current_gobjproc->link_next = next_gobjproc;
            current_gobjproc = next_gobjproc;
        }
        current_gobjproc->link_next = NULL;
    }
    else sOMObjProcessHead = NULL;
    
    for (i = 0; i < ARRAY_COUNT(sOMObjProcessQueue); i++) 
    {
        sOMObjProcessQueue[i] = NULL;
    }
    if (setup->num_gobjs != 0)
    {
        GObj *current_gobj;

        sOMObjCommonHead = current_gobj = setup->gobjs;

        for (i = 0; i < setup->num_gobjs - 1; i++)
        {
            current_gobj->link_next = (GObj*) ((uintptr_t)current_gobj + setup->gobj_size);
            current_gobj = current_gobj->link_next;
        }
        current_gobj->link_next = NULL;
    } 
    else sOMObjCommonHead = NULL;
    
    sOMObjCommonSize     = setup->gobj_size;
    sOMObjCommonNumMax   = -1;
    sOMDObjDataProcEject = setup->proc_eject;

    if (setup->num_ommtxes != 0)
    {
        OMMtx *current_ommtx;

        sOMMtxHead = current_ommtx = setup->ommtxes;

        for (i = 0; i < setup->num_ommtxes - 1; i++) 
        {
            OMMtx *next_ommtx = current_ommtx + 1;

            current_ommtx->next = next_ommtx;
            current_ommtx = next_ommtx;
        }
        current_ommtx->next = NULL;
    } 
    else sOMMtxHead = NULL;

    if (setup->num_aobjs != 0)
    {
        AObj *current_aobj;

        sOMAObjHead = current_aobj = setup->aobjs;

        for (i = 0; i < setup->num_aobjs - 1; i++)
        {
            AObj *next_aobj = current_aobj + 1;

            current_aobj->next = next_aobj;
            current_aobj = next_aobj;
        }
        current_aobj->next = NULL;
    }
    else sOMAObjHead = NULL;
    
    if (setup->num_mobjs != 0)
    {
        MObj *current_mobj;

        sOMMObjHead = current_mobj = setup->mobjs;

        for (i = 0; i < setup->num_mobjs - 1; i++)
        {
            MObj *mobj_next = current_mobj + 1;

            current_mobj->next = mobj_next;
            current_mobj = mobj_next;
        }
        current_mobj->next = NULL;
    } 
    else sOMMObjHead = NULL;

    if (setup->num_dobjs != 0)
    {
        DObj *current_dobj;

        sOMDObjHead = current_dobj = setup->dobjs;

        for (i = 0; i < setup->num_dobjs - 1; i++)
        {
            current_dobj->alloc_free = (DObj*) ((uintptr_t)current_dobj + setup->dobj_size);
            current_dobj = current_dobj->alloc_free;
        }
        current_dobj->alloc_free = NULL;
    }
    else sOMDObjHead = NULL;
    
    sOMDObjSize = setup->dobj_size;

    if (setup->num_sobjs != 0)
    {
        SObj *current_sobj;

        sOMSObjHead = current_sobj = setup->sobjs;

        for (i = 0; i < setup->num_sobjs - 1; i++)
        {
            current_sobj->alloc_free = (SObj*) ((uintptr_t)current_sobj + setup->sobj_size);
            current_sobj = current_sobj->alloc_free;
        }
        current_sobj->alloc_free = NULL;
    } 
    else sOMSObjHead = NULL;
    
    sOMSObjSize = setup->sobj_size;

    if (setup->num_cameras != 0)
    {
        Camera *current_cam;

        sOMCameraHead = current_cam = setup->cameras;

        for (i = 0; i < setup->num_cameras - 1; i++)
        {
            current_cam->next = (Camera*) ((uintptr_t)current_cam + setup->camera_size);
            current_cam = current_cam->next;
        }
        current_cam->next = NULL;
    }
    else sOMCameraHead = NULL;
   
    sOMCameraSize = setup->camera_size;

    for (i = 0; i < (ARRAY_COUNT(sOMObjCommonLinks) + ARRAY_COUNT(gOMObjCommonLinks)) / 2; i++)
    {
        sOMObjCommonLinks[i] = NULL;
        gOMObjCommonLinks[i] = NULL;
    }

    for (i = 0; i < (ARRAY_COUNT(sOMObjCommonDLLinks) + ARRAY_COUNT(gOMObjCommonDLLinks)) / 2; i++)
    {
        sOMObjCommonDLLinks[i] = NULL;
        gOMObjCommonDLLinks[i] = NULL;
    }

    func_80014430();
    osCreateMesgQueue(&gOMMesgQueue, sOMMesg, ARRAY_COUNT(sOMMesg));

    sOMThreadStacksActive =
    sOMObjThreadsActive = 
    sOMObjProcessesActive = 
    sOMObjCommonsActive = 
    sOMMtxsActive = 
    sOMAObjsActive = 
    sOMDObjsActive =
    sOMSObjsActive =
    sOMCamerasActive = 0;

    sOMObjProcessCallback = NULL;

    func_80017830(0);

    D_8003B874 = 0;
}
