#include <sys/obj.h>

// #include <sys/om.h>
#include <sys/objtypes.h>
#include <sys/crash.h>
#include <sys/gtl.h>
#include <sys/obj_renderer.h>
#include <sys/rdp_reset.h>
#include <sys/system_03_1.h>
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

GObjThread* sOMObjThreadHead;
u32 sOMObjThreadsActive;
u32 sOMThreadStacksActive;
u32 sOMThreadStackSize;
u32 sUnkUnusedSetup;
OMThreadStackList* sOMThreadStackHead;

void (*sOMObjProcessCallback)(GObjProcess*);
GObjProcess* sOMObjProcessHead;
GObjProcess* sOMObjProcessQueue[6];
u32 sOMObjProcessesActive;

// GObj *gOMObjCommonLinks[OM_COMMON_MAX_LINKS];
GObj* sOMObjCommonLinks[OM_COMMON_MAX_LINKS];
GObj* sOMObjCommonHead;
// GObj *gOMObjCommonDLLinks[OM_COMMON_MAX_DL_LINKS];
GObj* sOMObjCommonDLLinks[OM_COMMON_MAX_DL_LINKS];
s32 sOMObjCommonsActive;
u16 sOMObjCommonSize;
s16 sOMObjCommonNumMax;

OMMtx* sOMMtxHead;
u32 sOMMtxActive;

void (*sDObjDataCleanup)(DObjDynamicStore*);

AObj* sAObjHead;
u32 sAObjsActive;

MObj* sMObjHead;
u32 sMObjsActive;

DObj* sDObjHead;
u32 sDObjsActive;
u16 sDObjSize;

SObj* sSObjHead;
u32 sSObjsActive;
u16 sSObjSize;

Camera* sCameraHead;
u32 sCamerasActive;
u16 sCameraSize;

// GObj *D_80046A54;
GObj* gOMObjCurrentRendering; // Is this exclusively a camera GObj?
// GObj *D_80046A5C;

GObjProcess* D_80046A60;
u32 D_80046A64;
OSMesg sOMMesg[1];
OSMesgQueue gOMMesgQueue;

// u8 D_80046A88[1280];
// OMGfxLink D_80046A88[64];
u8 D_80046F88[24];

// DATA

OSId sProcessThreadID = 10000000;

s32 D_8003B874 = 0;

// 8003B878
OMPersp dOMPerspDefault = { NULL, 0, 30.0F, 4.0F / 3.0F, 100.0F, 12800.0F, 1.0F };

// 8003B984
OMOrtho dOMOrthoDefault = { NULL, -160.0F, 160.0F, -120.0F, 120.0F, 100.0F, 12800.0F, 1.0F };

// 8003B8B4
CameraVec dCameraVecDefault = { NULL, { 0.0F, 0.0F, 1500.0F }, { 0.0F, 0.0F, 0.0F }, { 0.0F, 1.0F, 0.0F } };

// 8003B8DC
OMTranslate dOMTranslateDefault = { NULL, { 0.0F, 0.0F, 0.0F } };

// 8003B8EC
OMRotate dOMRotateDefaultAXYZ = { NULL, 0.0F, { 0.0F, 0.0F, 1.0F } };

// 8003B900
OMRotate dOMRotateDefaultRPY = { NULL, 0.0F, { 0.0F, 0.0F, 0.0F } };

// 8003B914
OMScale dOMScaleDefault = { NULL, { 1.0F, 1.0F, 1.0F } };

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

GObjThread* omGetGObjThread(void)
{
	GObjThread* gobjthread;

	if (sOMObjThreadHead == NULL)
	{
		sOMObjThreadHead = hlMemoryAlloc(sizeof(GObjThread), 0x8);
		sOMObjThreadHead->next = NULL;
	}

	if (sOMObjThreadHead == NULL)
	{
		gsFatalPrintF("om : couldn't get GObjThread\n");
		while (TRUE)
			;
	}

	gobjthread = sOMObjThreadHead;
	sOMObjThreadHead = sOMObjThreadHead->next;
	sOMObjThreadsActive++;

	return gobjthread;
}

void omSetGObjThreadPrevAlloc(GObjThread* gobjthread)
{
	gobjthread->next = sOMObjThreadHead;
	sOMObjThreadHead = gobjthread;
	sOMObjThreadsActive--;
}

OMThreadStackNode* omGetStackOfSize(u32 size)
{
	OMThreadStackList* curr;
	OMThreadStackList* prev;
	OMThreadStackNode* ret;

	curr = sOMThreadStackHead;
	prev = NULL;

	while (curr != NULL)
	{
		if (curr->size == size)
			break;
		prev = curr;
		curr = curr->next;
	}

	if (curr == NULL)
	{
		curr = hlMemoryAlloc(sizeof(OMThreadStackList), 0x4);
		curr->next = NULL;
		curr->stack = NULL;
		curr->size = size;

		if (prev != NULL)
			prev->next = curr;
		else
			sOMThreadStackHead = curr;
	}

	if (curr->stack != NULL)
	{
		ret = curr->stack;
		curr->stack = curr->stack->next;
	}
	else
	{
		ret = hlMemoryAlloc(size + offsetof(OMThreadStackNode, stack), 0x8);
		ret->stack_size = size;
	}

	ret->next = NULL;
	sOMThreadStacksActive++;
	return ret;
}

OMThreadStackNode* omGetDefaultStack(void) { return omGetStackOfSize(sOMThreadStackSize); }

void omEjectStackNode(OMThreadStackNode* node)
{
	OMThreadStackList* parent = sOMThreadStackHead;

	while (parent != NULL)
	{
		if (parent->size == node->stack_size)
			break;
		parent = parent->next;
	}
	if (parent == NULL)
	{
		gsFatalPrintF("om : Illegal GObjThreadStack Link\n");
		while (TRUE)
			;
	}

	node->next = parent->stack;
	parent->stack = node;
	sOMThreadStacksActive--;
}

GObjProcess* omGetGObjProcess(void)
{
	GObjProcess* gobjproc;

	if (sOMObjProcessHead == NULL)
	{
		sOMObjProcessHead = hlMemoryAlloc(sizeof(GObjProcess), 4);
		sOMObjProcessHead->unk_gobjproc_0x0 = NULL;
	}

	if (sOMObjProcessHead == NULL)
	{
		gsFatalPrintF("om : couldn't get GObjProcess\n");
		while (TRUE)
			;
	}

	gobjproc = sOMObjProcessHead;
	sOMObjProcessHead = sOMObjProcessHead->unk_gobjproc_0x0;
	sOMObjProcessesActive++;

	return gobjproc;
}

// 80007680
void omLinkGObjProcess(GObjProcess* gobjproc)
{
	GObj* parent_gobj = gobjproc->parent_gobj;
	s32 link_id = gobjproc->parent_gobj->link_id;
	GObj* prev_gobj = gobjproc->parent_gobj;

	while (TRUE)
	{
		while (prev_gobj != NULL)
		{
			GObjProcess* prev_gobjproc = prev_gobj->gobjproc_next;

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
			prev_gobj = sOMObjCommonLinks[--link_id];
		else
		{
			gobjproc->unk_gobjproc_0x8 = sOMObjProcessQueue[gobjproc->priority];
			sOMObjProcessQueue[gobjproc->priority] = gobjproc;
			gobjproc->unk_gobjproc_0xC = NULL;
			break;
		}
	}
loop_exit:
	if (gobjproc->unk_gobjproc_0x8 != NULL)
		gobjproc->unk_gobjproc_0x8->unk_gobjproc_0xC = gobjproc;
	if (parent_gobj->gobjproc_next != NULL)
		parent_gobj->gobjproc_next->unk_gobjproc_0x0 = gobjproc;
	else
		parent_gobj->gobjproc_prev = gobjproc;

	gobjproc->unk_gobjproc_0x4 = parent_gobj->gobjproc_next;
	gobjproc->unk_gobjproc_0x0 = NULL;
	parent_gobj->gobjproc_next = gobjproc;
}

// 80007758
void omSetGObjProcessPrevAlloc(GObjProcess* gobjproc)
{
	gobjproc->unk_gobjproc_0x0 = sOMObjProcessHead;
	sOMObjProcessHead = gobjproc;
	sOMObjProcessesActive--;
}

// 80007784
void func_80007784(GObjProcess* gobjproc)
{
	if (gobjproc->unk_gobjproc_0xC != NULL)
	{
		gobjproc->unk_gobjproc_0xC->unk_gobjproc_0x8 = gobjproc->unk_gobjproc_0x8;
	}
	else
		sOMObjProcessQueue[gobjproc->priority] = gobjproc->unk_gobjproc_0x8;

	if (gobjproc->unk_gobjproc_0x8 != NULL)
	{
		gobjproc->unk_gobjproc_0x8->unk_gobjproc_0xC = gobjproc->unk_gobjproc_0xC;
	}
}

// 800077D0
void func_800077D0(GObjProcess* gobjproc)
{
	GObj* gobj = gobjproc->parent_gobj;

	func_80007784(gobjproc);

	if (gobjproc->unk_gobjproc_0x4 != NULL)
	{
		gobjproc->unk_gobjproc_0x4->unk_gobjproc_0x0 = gobjproc->unk_gobjproc_0x0;
	}
	else
		gobj->gobjproc_prev = gobjproc->unk_gobjproc_0x0;

	if (gobjproc->unk_gobjproc_0x0 != NULL)
	{
		gobjproc->unk_gobjproc_0x0->unk_gobjproc_0x4 = gobjproc->unk_gobjproc_0x4;
	}
	else
		gobj->gobjproc_next = gobjproc->unk_gobjproc_0x4;
}

// 80007840
GObjProcess* unref_80007840(void) { return D_80046A60; }

// 8000784C
u64* unref_8000784C(GObjProcess* gobjproc)
{
	if (gobjproc == NULL)
	{
		gobjproc = D_80046A60;
	}
	if ((gobjproc != NULL) && (gobjproc->kind == 0))
	{
		return gobjproc->gobjthread->osstack;
	}
	else
		return NULL;
}

// 800007884
u32 unref_80007884(GObjProcess* gobjproc)
{
	if (gobjproc == NULL)
	{
		gobjproc = D_80046A60;
	}

	if ((gobjproc != NULL) && (gobjproc->kind == 0))
	{
		return gobjproc->gobjthread->stack_size;
	}
	else
		return 0;
}

// 800078BC
void unref_800078BC(void (*proc)(GObjProcess*)) { sOMObjProcessCallback = proc; }

// 800078C8
s32 omGetGObjActiveCount(void)
{
	GObj* gobj = sOMObjCommonHead;
	s32 i = 0;

	while (gobj != NULL)
	{
		i++;
		gobj = gobj->link_next;
	}

	return i + sOMObjCommonsActive;
}

// 800078FC
GObj* omGetGObjSetNextAlloc(void)
{
	GObj* gobj;

	if ((sOMObjCommonNumMax == -1) || (sOMObjCommonsActive < sOMObjCommonNumMax))
	{
		gobj = sOMObjCommonHead;

		if (gobj == NULL)
		{
			sOMObjCommonHead = hlMemoryAlloc(sOMObjCommonSize, 0x8);
			sOMObjCommonHead->link_next = NULL;
			gobj = sOMObjCommonHead;
		}
	}
	else
		return NULL;

	if (gobj == NULL)
	{
		return NULL;
	}

	sOMObjCommonHead = gobj->link_next;
	sOMObjCommonsActive++;

	return gobj;
}

// 800079A8
void omSetGObjPrevAlloc(GObj* gobj)
{
	gobj->link_next = sOMObjCommonHead;
	sOMObjCommonHead = gobj;
	sOMObjCommonsActive--;
}

// 800079D4
void omAppendGObjToLinkedList(GObj* this_gobj, GObj* link_gobj)
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
	else
		sOMObjCommonLinks[this_gobj->link_id] = this_gobj;
}

// 80007A3C
void omLinkGObjTail(GObj* this_gobj)
{
	GObj* current_gobj = sOMObjCommonLinks[this_gobj->link_id];
	while (current_gobj != NULL && current_gobj->link_order < this_gobj->link_order)
		current_gobj = current_gobj->link_prev;
	omAppendGObjToLinkedList(this_gobj, current_gobj);
}

// 80007AA8
void omLinkGObjHead(GObj* this_gobj)
{
	GObj* current_gobj = gOMObjCommonLinks[this_gobj->link_id];
	GObj* found_gobj;

	while (current_gobj != NULL && this_gobj->link_order < current_gobj->link_order)
	{
		current_gobj = current_gobj->link_next;
	}
	if (current_gobj != NULL)
	{
		found_gobj = current_gobj->link_prev;
	}
	else
		found_gobj = sOMObjCommonLinks[this_gobj->link_id];

	omAppendGObjToLinkedList(this_gobj, found_gobj);
}

// 80007B30
void omRemoveGObjFromLinkedList(GObj* this_gobj)
{
	if (this_gobj->link_prev != NULL)
	{
		this_gobj->link_prev->link_next = this_gobj->link_next;
	}
	else
		gOMObjCommonLinks[this_gobj->link_id] = this_gobj->link_next;

	if (this_gobj->link_next != NULL)
	{
		this_gobj->link_next->link_prev = this_gobj->link_prev;
	}
	else
		sOMObjCommonLinks[this_gobj->link_id] = this_gobj->link_prev;
}

// 80007B98
void omAppendGObjToDLLinkedList(GObj* this_gobj, GObj* dl_link_gobj)
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
	else
		sOMObjCommonDLLinks[this_gobj->dl_link_id] = this_gobj;
}

// 80007C00
void omDLLinkGObjTail(GObj* this_gobj)
{
	GObj* current_gobj = sOMObjCommonDLLinks[this_gobj->dl_link_id];

	while (current_gobj != NULL && current_gobj->dl_link_order < this_gobj->dl_link_order)
	{
		current_gobj = current_gobj->dl_link_prev;
	}
	omAppendGObjToDLLinkedList(this_gobj, current_gobj);
}

// 80007C6C
void omDLLinkGObjHead(GObj* this_gobj)
{
	GObj* current_gobj = gOMObjCommonDLLinks[this_gobj->dl_link_id];
	GObj* found_gobj;

	while (current_gobj != NULL && this_gobj->dl_link_order < current_gobj->dl_link_order)
	{
		current_gobj = current_gobj->dl_link_next;
	}
	if (current_gobj != NULL)
	{
		found_gobj = current_gobj->dl_link_prev;
	}
	else
		found_gobj = sOMObjCommonDLLinks[this_gobj->dl_link_id];

	omAppendGObjToDLLinkedList(this_gobj, found_gobj);
}

// 80007CF4
void omRemoveGObjFromDLLinkedList(GObj* this_gobj)
{
	if (this_gobj->dl_link_prev != NULL)
	{
		this_gobj->dl_link_prev->dl_link_next = this_gobj->dl_link_next;
	}
	else
		gOMObjCommonDLLinks[this_gobj->dl_link_id] = this_gobj->dl_link_next;

	if (this_gobj->dl_link_next != NULL)
	{
		this_gobj->dl_link_next->dl_link_prev = this_gobj->dl_link_prev;
	}
	else
		sOMObjCommonDLLinks[this_gobj->dl_link_id] = this_gobj->dl_link_prev;
}

OMMtx* omGetOMMtxSetNextAlloc(void)
{
	OMMtx* ommtx;

	if (sOMMtxHead == NULL)
	{
		sOMMtxHead = hlMemoryAlloc(sizeof(OMMtx), 0x8);

		sOMMtxHead->next = NULL;
	}

	if (sOMMtxHead == NULL)
	{
		gsFatalPrintF("om : couldn't get OMMtx\n");
		while (TRUE)
			;
	}

	ommtx = sOMMtxHead;
	sOMMtxHead = sOMMtxHead->next;
	sOMMtxActive++;

	return ommtx;
}

// 80007DD8
void omSetOMMtxPrevAlloc(OMMtx* ommtx)
{
	ommtx->next = sOMMtxHead;
	sOMMtxHead = ommtx;
	sOMMtxActive--;
}

// 80007E04
AObj* omGetAObjSetNextAlloc(void)
{
	AObj* aobj;

	if (sAObjHead == NULL)
	{
		sAObjHead = hlMemoryAlloc(sizeof(AObj), 0x4);

		sAObjHead->next = NULL;
	}

	if (sAObjHead == NULL)
	{
		gsFatalPrintF("om : couldn't get AObj\n");
		while (TRUE)
			;
	}
	aobj = sAObjHead;
	sAObjHead = sAObjHead->next;
	sAObjsActive++;

	return aobj;
}

void omAppendAObjToDObj(DObj* dobj, AObj* aobj)
{
	aobj->next = dobj->aobj;
	dobj->aobj = aobj;
}

// 80007E90
void omAppendAObjToMObj(MObj* mobj, AObj* aobj)
{
	aobj->next = mobj->aobj;
	mobj->aobj = aobj;
}

// 80007EA0
void omAppendAObjToCamera(Camera* cam, AObj* aobj)
{
	aobj->next = cam->aobj;
	cam->aobj = aobj;
}

void omSetAObjPrevAlloc(AObj* aobj)
{
	aobj->next = sAObjHead;
	sAObjsActive--;
	sAObjHead = aobj;
}

MObj* omGetMObjSetNextAlloc(void)
{
	MObj* mobj;

	if (sMObjHead == NULL)
	{
		sMObjHead = hlMemoryAlloc(sizeof(MObj), 0x4);

		sMObjHead->next = NULL;
	}

	if (sMObjHead == NULL)
	{
		gsFatalPrintF("om : couldn't get MObj\n");
		while (TRUE)
			;
	}

	mobj = sMObjHead;
	sMObjHead = sMObjHead->next;
	sMObjsActive++;

	return mobj;
}

void omSetMObjPrevAlloc(MObj* mobj)
{
	mobj->next = sMObjHead;
	sMObjsActive--;
	sMObjHead = mobj;
}

DObj* omGetDObjSetNextAlloc(void)
{
	DObj* dobj;

	if (sDObjHead == NULL)
	{
		sDObjHead = hlMemoryAlloc(sDObjSize, 0x8);

		sDObjHead->alloc_free = NULL;
	}

	if (sDObjHead == NULL)
	{
		gsFatalPrintF("om : couldn't get DObj\n");
		while (TRUE)
			;
	}

	dobj = sDObjHead;
	sDObjHead = sDObjHead->alloc_free;
	sDObjsActive++;

	return dobj;
}

void omSetDObjPrevAlloc(DObj* dobj)
{
	dobj->alloc_free = sDObjHead;
	sDObjsActive--;
	sDObjHead = dobj;
}

SObj* omGetSObjSetNextAlloc(void)
{
	SObj* sobj;

	if (sSObjHead == NULL)
	{
		sSObjHead = hlMemoryAlloc(sSObjSize, 0x8);

		sSObjHead->alloc_free = NULL;
	}

	if (sSObjHead == NULL)
	{
		gsFatalPrintF("om : couldn't get SObj\n");
		while (TRUE)
			;
	}

	sobj = sSObjHead;
	sSObjHead = sSObjHead->alloc_free;
	sSObjsActive++;

	return sobj;
}

void omSetSObjPrevAlloc(SObj* sobj)
{
	sobj->alloc_free = sSObjHead;
	sSObjsActive--;
	sSObjHead = sobj;
}

Camera* omGetCameraSetNextAlloc(void)
{
	Camera* cam;

	if (sCameraHead == NULL)
	{
		sCameraHead = hlMemoryAlloc(sCameraSize, 0x8);
		sCameraHead->next = NULL;
	}

	if (sCameraHead == NULL)
	{
		gsFatalPrintF("om : couldn't get Camera\n");
		while (TRUE)
			;
	}

	cam = sCameraHead;
	sCameraHead = sCameraHead->next;
	sCamerasActive++;

	return cam;
}

void omSetCameraPrevAlloc(Camera* cam)
{
	cam->next = sCameraHead;
	sCamerasActive--;
	sCameraHead = cam;
}

GObjProcess* omAddGObjCommonProc(GObj* gobj, void (*proc)(GObj*), u8 kind, u32 priority)
{
	OMThreadStackNode* stack_node;
	GObjThread* gobjthread;
	GObjProcess* gobjproc;

	if (gobj == NULL)
	{
		gobj = D_80046A54;
	}
	gobjproc = omGetGObjProcess();

	if (priority >= 6)
	{
		gsFatalPrintF("om : GObjProcess's priority is bad value\n");
		while (TRUE)
			;
	}
	gobjproc->priority = priority;
	gobjproc->kind = kind;
	gobjproc->unk_gobjproc_0x15 = 0;
	gobjproc->parent_gobj = gobj;
	gobjproc->proc_common = proc;

	switch (kind)
	{
	case GObjProcess_Kind_OSThread: {
		gobjthread = omGetGObjThread();
		gobjproc->gobjthread = gobjthread;

		stack_node = omGetDefaultStack();
		gobjthread->osstack = stack_node->stack;
		gobjthread->stack_size = sOMThreadStackSize;

		osCreateThread(&gobjthread->osthread, sProcessThreadID++, proc, gobj,
					   &gobjthread->osstack[sOMThreadStackSize / sizeof(u64)], 51);

		gobjthread->osstack[7] = 0xFEDCBA98;

		if (sProcessThreadID >= 20000000)
		{
			sProcessThreadID = 10000000;
		}
		break;
	}
	case GObjProcess_Kind_Proc: {
		gobjproc->proc_thread = proc;
		break;
	}
	default: {
		gsFatalPrintF("om : GObjProcess's kind is bad value\n");
		while (TRUE)
			;
	}
	}
	omLinkGObjProcess(gobjproc);

	return gobjproc;
}

// 80008304
GObjProcess* unref_80008304(GObj* gobj, void (*proc)(GObj*), u32 pri, s32 thread_id, u32 stack_size)
{
	GObjProcess* gobjproc;	// s0
	GObjThread* gobjthread; // v1 / sp28
	OMThreadStackNode* stacknode;
	OSId tid;

	if (gobj == NULL)
	{
		gobj = D_80046A54;
	}

	gobjproc = omGetGObjProcess();

	if (pri >= 6)
	{
		gsFatalPrintF("om : GObjProcess's priority is bad value\n");
		while (TRUE)
			;
	}

	gobjproc->priority = pri;
	gobjproc->unk_gobjproc_0x15 = 0;
	gobjproc->parent_gobj = gobj;
	gobjproc->proc_common = proc;

	gobjproc->gobjthread = gobjthread = omGetGObjThread();
	gobjproc->kind = GObjProcess_Kind_OSThread;

	stacknode = stack_size == 0 ? omGetDefaultStack() : omGetStackOfSize(stack_size);
	gobjthread->osstack = stacknode->stack;
	gobjthread->stack_size = stack_size == 0 ? sOMThreadStackSize : stack_size;
	tid = thread_id != -1 ? thread_id : sProcessThreadID++;

	osCreateThread(&gobjthread->osthread, tid, proc, gobj, &gobjthread->osstack[gobjthread->stack_size / sizeof(u64)],
				   51);

	gobjthread->osstack[7] = 0xFEDCBA98;

	if (sProcessThreadID >= 20000000)
	{
		sProcessThreadID = 10000000;
	}
	omLinkGObjProcess(gobjproc);
	return gobjproc;
}

// 8000848C
void func_8000848C(GObjProcess* gobjproc)
{
	OMThreadStackNode* tnode;

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
		tnode = (OMThreadStackNode*)((uintptr_t)(gobjproc->gobjthread->osstack) - offsetof(OMThreadStackNode, stack));
		omEjectStackNode(tnode);
		omSetGObjThreadPrevAlloc(gobjproc->gobjthread);
		break;

	case GObjProcess_Kind_Proc: break;
	}

	func_800077D0(gobjproc);
	omSetGObjProcessPrevAlloc(gobjproc);
}

// 8000855C
OMMtx* omAddOMMtxForDObjVar(DObj* dobj, u8 kind, u8 arg2, s32 ommtx_id)
{
	uintptr_t csr;
	OMTranslate* translate;
	OMRotate* rotate;
	OMScale* scale;
	OMMtx* ommtx;
	s32 i;

	if (dobj->ommtx_len == ARRAY_COUNT(dobj->ommtx))
	{
		gsFatalPrintF("om : couldn\'t add OMMtx for DObj\n");
		while (TRUE)
			;
	}
	if (dobj->dynstore != NULL)
	{
		csr = (uintptr_t)dobj->dynstore->data;

		for (i = 0; i < ARRAY_COUNT(dobj->dynstore->kinds); i++)
		{
			switch (dobj->dynstore->kinds[i])
			{
			case DObjVec_Kind_None: break;

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
		translate->ommtx = ommtx;
		break;

	case OMMtx_Transform_VecRotR:
		*rotate = dOMRotateDefaultAXYZ;
		rotate->ommtx = ommtx;
		break;

	case OMMtx_Transform_VecRotRpyR:
		*rotate = dOMRotateDefaultRPY;
		rotate->ommtx = ommtx;
		break;

	case OMMtx_Transform_VecSca:
		*scale = dOMScaleDefault;
		scale->ommtx = ommtx;
		break;

	case OMMtx_Transform_VecTraRotR:
		*translate = dOMTranslateDefault;
		*rotate = dOMRotateDefaultAXYZ;

		translate->ommtx = rotate->ommtx = ommtx;
		break;

	case OMMtx_Transform_VecTraRotRSca:
		*translate = dOMTranslateDefault;
		*rotate = dOMRotateDefaultAXYZ;
		*scale = dOMScaleDefault;

		translate->ommtx = rotate->ommtx = scale->ommtx = ommtx;
		break;

	case OMMtx_Transform_VecTraRotRpyR:
		*translate = dOMTranslateDefault;
		*rotate = dOMRotateDefaultRPY;

		translate->ommtx = rotate->ommtx = ommtx;
		break;

	case OMMtx_Transform_VecTraRotRpyRSca:
		*translate = dOMTranslateDefault;
		*rotate = dOMRotateDefaultRPY;
		*scale = dOMScaleDefault;

		translate->ommtx = rotate->ommtx = scale->ommtx = ommtx;
		break;

	case 1:
	case 17: break;
	}
	ommtx->unk05 = arg2;

	return ommtx;
}