#include <sys/obj.h>

#include <sys/objtypes.h>
#include <sys/error.h>
#include <sys/taskman.h>
#include <sys/objdraw.h>
#include <sys/rdp.h>
#include <stddef.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

GObjThread* sGCThreadHead;
u32 sGCThreadsActive;
u32 sOMThreadStacksActive;
u32 sOMThreadStackSize;
u32 sUnkUnusedSetup;
GCThreadStackList* sOMThreadStackHead;

void (*sGCProcessCallback)(GObjProcess*);
GObjProcess* sGCProcessHead;
GObjProcess* sGCProcessQueue[6];
u32 sGCProcessesActive;

GObj* gGCCommonLinks[OM_COMMON_MAX_LINKS];
s32 D_80046774_40794; // used by system_03_1
GObj* sGCCommonLinks[OM_COMMON_MAX_LINKS];
GObj* sGCCommonHead;
GObj* gGCCommonDLLinks[OM_COMMON_MAX_DL_LINKS];
GObj* sGCCommonDLLinks[OM_COMMON_MAX_DL_LINKS];
s32 sGCCommonsActive;
u16 sGCCommonSize;
s16 sGCCommonNumMax;

XObj* sXObjHead;
u32 sXObjActive;

void (*sOMDObjProcEject)(DObjDynamicStore*);

AObj* sOMAObjHead;
u32 sOMAObjsActive;

MObj* sOMMObjHead;
u32 sOMMObjsActive;

DObj* sOMDObjHead;
u32 sOMDObjsActive;
u16 sOMDObjSize;

SObj* sOMSObjHead;
u32 sOMSObjsActive;
u16 sOMSObjSize;

Camera* sOMCameraHead;
u32 sOMCamerasActive;
u16 sOMCameraSize;

GObj* gGCCurrentCommon;
GObj* gGCCurrentCamera; // Is this exclusively a camera GObj?
GObj* gGCCurrentDisplay;

GObjProcess* gGCCurrentProcess;
u32 D_80046A64;
OSMesg sOMMesg[1];
OSMesgQueue gOMMesgQueue;

GCGfxLink D_80046A88[64];
u8 D_80046F88[24];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

OSId sGCProcessThreadID = 10000000;
s32 D_8003B874_3C474 = 0;

// 0x8003B878
GCPersp dGCPerspDefault = { NULL, 0, 30.0F, 4.0F / 3.0F, 100.0F, 12800.0F, 1.0F };

// 0x8003B984
GCOrtho dGCOrthoDefault = { NULL, -160.0F, 160.0F, -120.0F, 120.0F, 100.0F, 12800.0F, 1.0F };

// 0x8003B8B4
CameraVec dOMCameraVecDefault = { NULL, { 0.0F, 0.0F, 1500.0F }, { 0.0F, 0.0F, 0.0F }, { 0.0F, 1.0F, 0.0F } };

// 0x8003B8DC
GCTranslate dGCTranslateDefault = { NULL, { 0.0F, 0.0F, 0.0F } };

// 0x8003B8EC
GCRotate dGCRotateDefaultAXYZ = { NULL, 0.0F, { 0.0F, 0.0F, 1.0F } };

// 0x8003B900
GCRotate dGCRotateDefaultRPY = { NULL, 0.0F, { 0.0F, 0.0F, 0.0F } };

// 0x8003B914
GCScale dGCScaleDefault = { NULL, { 1.0F, 1.0F, 1.0F } };

// 0x800073E0
GObjThread* gcGetGObjThread()
{
	GObjThread* gobjthread;

	if (sGCThreadHead == NULL)
	{
		sGCThreadHead = syTaskmanMalloc(sizeof(GObjThread), 0x8);
		sGCThreadHead->next = NULL;
	}

	if (sGCThreadHead == NULL)
	{
		syErrorPrintf("om : couldn't get GObjThread\n");
		while (TRUE);
	}

	gobjthread = sGCThreadHead;
	sGCThreadHead = sGCThreadHead->next;
	sGCThreadsActive++;

	return gobjthread;
}

// 0x8000745C
void gcSetGObjThreadPrevAlloc(GObjThread* gobjthread)
{
	gobjthread->next = sGCThreadHead;
	sGCThreadHead = gobjthread;
	sGCThreadsActive--;
}

// 0x80007488
GCThreadStackNode* gcGetStackOfSize(size_t size)
{
	GCThreadStackList* curr;
	GCThreadStackList* prev;
	GCThreadStackNode* ret;

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
		curr = syTaskmanMalloc(sizeof(GCThreadStackList), 0x4);
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
		ret = syTaskmanMalloc(size + offsetof(GCThreadStackNode, stack), 0x8);
		ret->stack_size = size;
	}

	ret->next = NULL;
	sOMThreadStacksActive++;
	return ret;
}

// 0x80007564
GCThreadStackNode* gcGetDefaultStack() { return gcGetStackOfSize(sOMThreadStackSize); }

// 0x80007588
void gcEjectStackNode(GCThreadStackNode* node)
{
	GCThreadStackList* parent = sOMThreadStackHead;

	while (parent != NULL)
	{
		if (parent->size == node->stack_size)
			break;
		parent = parent->next;
	}
	if (parent == NULL)
	{
		syErrorPrintf("om : Illegal GObjThreadStack Link\n");
		while (TRUE);
	}

	node->next = parent->stack;
	parent->stack = node;
	sOMThreadStacksActive--;
}

// 0x80007604
GObjProcess* gcGetGObjProcess()
{
	GObjProcess* gobjproc;

	if (sGCProcessHead == NULL)
	{
		sGCProcessHead = syTaskmanMalloc(sizeof(GObjProcess), 4);
		sGCProcessHead->link_next = NULL;
	}

	if (sGCProcessHead == NULL)
	{
		syErrorPrintf("om : couldn't get GObjProcess\n");
		while (TRUE);
	}

	gobjproc = sGCProcessHead;
	sGCProcessHead = sGCProcessHead->link_next;
	sGCProcessesActive++;

	return gobjproc;
}

// 0x80007680
void gcLinkGObjProcess(GObjProcess* gobjproc)
{
	GObj* parent_gobj = gobjproc->parent_gobj;
	s32 link_id = gobjproc->parent_gobj->link_id;
	GObj* prev_gobj = gobjproc->parent_gobj;

	while (TRUE)
	{
		while (prev_gobj != NULL)
		{
			GObjProcess* prev_gobjproc = prev_gobj->gobjproc_tail;

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
			prev_gobj = sGCCommonLinks[--link_id];
		else
		{
			gobjproc->priority_next = sGCProcessQueue[gobjproc->priority];
			sGCProcessQueue[gobjproc->priority] = gobjproc;
			gobjproc->priority_prev = NULL;
			break;
		}
	}
loop_exit:
	if (gobjproc->priority_next != NULL)
		gobjproc->priority_next->priority_prev = gobjproc;
	if (parent_gobj->gobjproc_tail != NULL)
		parent_gobj->gobjproc_tail->link_next = gobjproc;
	else
		parent_gobj->gobjproc_head = gobjproc;

	gobjproc->link_prev = parent_gobj->gobjproc_tail;
	gobjproc->link_next = NULL;
	parent_gobj->gobjproc_tail = gobjproc;
}

// 0x80007758
void gcSetGObjProcessPrevAlloc(GObjProcess* gobjproc)
{
	gobjproc->link_next = sGCProcessHead;
	sGCProcessHead = gobjproc;
	sGCProcessesActive--;
}

// 0x80007784
void func_80007784(GObjProcess* gobjproc)
{
	if (gobjproc->priority_prev != NULL)
		gobjproc->priority_prev->priority_next = gobjproc->priority_next;
	else
		sGCProcessQueue[gobjproc->priority] = gobjproc->priority_next;

	if (gobjproc->priority_next != NULL)
		gobjproc->priority_next->priority_prev = gobjproc->priority_prev;
}

// 0x800077D0
void func_800077D0(GObjProcess* gobjproc)
{
	GObj* gobj = gobjproc->parent_gobj;

	func_80007784(gobjproc);

	if (gobjproc->link_prev != NULL)
		gobjproc->link_prev->link_next = gobjproc->link_next;
	else
		gobj->gobjproc_head = gobjproc->link_next;

	if (gobjproc->link_next != NULL)
		gobjproc->link_next->link_prev = gobjproc->link_prev;
	else
		gobj->gobjproc_tail = gobjproc->link_prev;
}

// 0x80007840
GObjProcess* unref_80007840() { return gGCCurrentProcess; }

// 0x8000784C
u64* unref_8000784C(GObjProcess* gobjproc)
{
	if (gobjproc == NULL)
		gobjproc = gGCCurrentProcess;
	if ((gobjproc != NULL) && (gobjproc->kind == 0))
		return gobjproc->gobjthread->stack;
	else
		return NULL;
}

// 0x800007884
u32 unref_80007884(GObjProcess* gobjproc)
{
	if (gobjproc == NULL)
		gobjproc = gGCCurrentProcess;

	if ((gobjproc != NULL) && (gobjproc->kind == 0))
		return gobjproc->gobjthread->stack_size;
	else
		return 0;
}

// 0x800078BC
void unref_800078BC(void (*proc)(GObjProcess*)) { sGCProcessCallback = proc; }

// 0x800078C8
s32 gcGetGObjActiveCount()
{
	GObj* gobj = sGCCommonHead;
	s32 i = 0;

	while (gobj != NULL)
	{
		i++;
		gobj = gobj->link_next;
	}

	return i + sGCCommonsActive;
}

// 0x800078FC
GObj* gcGetGObjSetNextAlloc()
{
	GObj* gobj;

	if ((sGCCommonNumMax == -1) || (sGCCommonsActive < sGCCommonNumMax))
	{
		gobj = sGCCommonHead;

		if (gobj == NULL)
		{
			sGCCommonHead = syTaskmanMalloc(sGCCommonSize, 0x8);
			sGCCommonHead->link_next = NULL;
			gobj = sGCCommonHead;
		}
	}
	else
		return NULL;

	if (gobj == NULL)
		return NULL;

	sGCCommonHead = gobj->link_next;
	sGCCommonsActive++;

	return gobj;
}

// 0x800079A8
void gcSetGObjPrevAlloc(GObj* gobj)
{
	gobj->link_next = sGCCommonHead;
	sGCCommonHead = gobj;
	sGCCommonsActive--;
}

// 0x800079D4
void gcLinkGObjAfter(GObj* this_gobj, GObj* link_gobj)
{
	this_gobj->link_prev = link_gobj;

	if (link_gobj != NULL)
	{
		this_gobj->link_next = link_gobj->link_next;
		link_gobj->link_next = this_gobj;
	}
	else
	{
		this_gobj->link_next = gGCCommonLinks[this_gobj->link_id];
		gGCCommonLinks[this_gobj->link_id] = this_gobj;
	}
	if (this_gobj->link_next != NULL)
		this_gobj->link_next->link_prev = this_gobj;
	else
		sGCCommonLinks[this_gobj->link_id] = this_gobj;
}

// 0x80007A3C
void gcLinkGObjSPAfter(GObj* this_gobj)
{
	GObj* current_gobj = sGCCommonLinks[this_gobj->link_id];
	while (current_gobj != NULL && current_gobj->link_order < this_gobj->link_order)
		current_gobj = current_gobj->link_prev;
	gcLinkGObjAfter(this_gobj, current_gobj);
}

// 0x80007AA8
void gcLinkGObjSPBefore(GObj* this_gobj)
{
	GObj* current_gobj = gGCCommonLinks[this_gobj->link_id];
	GObj* found_gobj;

	while (current_gobj != NULL && this_gobj->link_order < current_gobj->link_order)
		current_gobj = current_gobj->link_next;
	if (current_gobj != NULL)
		found_gobj = current_gobj->link_prev;
	else
		found_gobj = sGCCommonLinks[this_gobj->link_id];

	gcLinkGObjAfter(this_gobj, found_gobj);
}

// 0x80007B30
void gcRemoveGObjFrgcLinkedList(GObj* this_gobj)
{
	if (this_gobj->link_prev != NULL)
		this_gobj->link_prev->link_next = this_gobj->link_next;
	else
		gGCCommonLinks[this_gobj->link_id] = this_gobj->link_next;

	if (this_gobj->link_next != NULL)
		this_gobj->link_next->link_prev = this_gobj->link_prev;
	else
		sGCCommonLinks[this_gobj->link_id] = this_gobj->link_prev;
}

// 0x80007B98
void gcAppendGObjToDLLinkedList(GObj* this_gobj, GObj* dl_link_gobj)
{
	this_gobj->dl_link_prev = dl_link_gobj;

	if (dl_link_gobj != NULL)
	{
		this_gobj->dl_link_next = dl_link_gobj->dl_link_next;
		dl_link_gobj->dl_link_next = this_gobj;
	}
	else
	{
		this_gobj->dl_link_next = gGCCommonDLLinks[this_gobj->dl_link_id];
		gGCCommonDLLinks[this_gobj->dl_link_id] = this_gobj;
	}

	if (this_gobj->dl_link_next != NULL)
		this_gobj->dl_link_next->dl_link_prev = this_gobj;
	else
		sGCCommonDLLinks[this_gobj->dl_link_id] = this_gobj;
}

// 0x80007C00
void gcDLLinkGObjTail(GObj* this_gobj)
{
	GObj* current_gobj = sGCCommonDLLinks[this_gobj->dl_link_id];

	while (current_gobj != NULL && current_gobj->dl_link_order < this_gobj->dl_link_order)
		current_gobj = current_gobj->dl_link_prev;
	gcAppendGObjToDLLinkedList(this_gobj, current_gobj);
}

// 0x80007C6C
void gcDLLinkGObjHead(GObj* this_gobj)
{
	GObj* current_gobj = gGCCommonDLLinks[this_gobj->dl_link_id];
	GObj* found_gobj;

	while (current_gobj != NULL && this_gobj->dl_link_order < current_gobj->dl_link_order)
		current_gobj = current_gobj->dl_link_next;
	if (current_gobj != NULL)
		found_gobj = current_gobj->dl_link_prev;
	else
		found_gobj = sGCCommonDLLinks[this_gobj->dl_link_id];

	gcAppendGObjToDLLinkedList(this_gobj, found_gobj);
}

// 0x80007CF4
void gcRemoveGObjFrgcDLLinkedList(GObj* this_gobj)
{
	if (this_gobj->dl_link_prev != NULL)
		this_gobj->dl_link_prev->dl_link_next = this_gobj->dl_link_next;
	else
		gGCCommonDLLinks[this_gobj->dl_link_id] = this_gobj->dl_link_next;

	if (this_gobj->dl_link_next != NULL)
		this_gobj->dl_link_next->dl_link_prev = this_gobj->dl_link_prev;
	else
		sGCCommonDLLinks[this_gobj->dl_link_id] = this_gobj->dl_link_prev;
}

// 0x80007D5C
XObj* gcGetXObjSetNextAlloc()
{
	XObj* xobj;

	if (sXObjHead == NULL)
	{
		sXObjHead = syTaskmanMalloc(sizeof(XObj), 0x8);
		sXObjHead->next = NULL;
	}

	if (sXObjHead == NULL)
	{
		syErrorPrintf("om : couldn't get OMMtx\n");
		while (TRUE);
	}

	xobj = sXObjHead;
	sXObjHead = sXObjHead->next;
	sXObjActive++;

	return xobj;
}

// 0x80007DD8
void gcSetXObjPrevAlloc(XObj* xobj)
{
	xobj->next = sXObjHead;
	sXObjHead = xobj;
	sXObjActive--;
}

// 0x80007E04
AObj* gcGetAObjSetNextAlloc()
{
	AObj* aobj;

	if (sOMAObjHead == NULL)
	{
		sOMAObjHead = syTaskmanMalloc(sizeof(AObj), 0x4);

		sOMAObjHead->next = NULL;
	}

	if (sOMAObjHead == NULL)
	{
		syErrorPrintf("om : couldn't get AObj\n");
		while (TRUE);
	}
	aobj = sOMAObjHead;
	sOMAObjHead = sOMAObjHead->next;
	sOMAObjsActive++;

	return aobj;
}

// 0x80007E80
void gcAppendAObjToDObj(DObj* dobj, AObj* aobj)
{
	aobj->next = dobj->aobj;
	dobj->aobj = aobj;
}

// 0x80007E90
void gcAppendAObjToMObj(MObj* mobj, AObj* aobj)
{
	aobj->next = mobj->aobj;
	mobj->aobj = aobj;
}

// 0x80007EA0
void gcAppendAObjToCamera(Camera* cam, AObj* aobj)
{
	aobj->next = cam->aobj;
	cam->aobj = aobj;
}

// 0x80007EB0
void gcSetAObjPrevAlloc(AObj* aobj)
{
	aobj->next = sOMAObjHead;
	sOMAObjsActive--;
	sOMAObjHead = aobj;
}

// 0x80007EDC
MObj* gcGetMObjSetNextAlloc()
{
	MObj* mobj;

	if (sOMMObjHead == NULL)
	{
		sOMMObjHead = syTaskmanMalloc(sizeof(MObj), 0x4);
		sOMMObjHead->next = NULL;
	}

	if (sOMMObjHead == NULL)
	{
		syErrorPrintf("om : couldn't get MObj\n");
		while (TRUE);
	}

	mobj = sOMMObjHead;
	sOMMObjHead = sOMMObjHead->next;
	sOMMObjsActive++;

	return mobj;
}

// 0x80007F58
void gcSetMObjPrevAlloc(MObj* mobj)
{
	mobj->next = sOMMObjHead;
	sOMMObjsActive--;
	sOMMObjHead = mobj;
}

// 0x80007F84
DObj* gcGetDObjSetNextAlloc()
{
	DObj* dobj;

	if (sOMDObjHead == NULL)
	{
		sOMDObjHead = syTaskmanMalloc(sOMDObjSize, 0x8);

		sOMDObjHead->alloc_free = NULL;
	}

	if (sOMDObjHead == NULL)
	{
		syErrorPrintf("om : couldn't get DObj\n");
		while (TRUE);
	}

	dobj = sOMDObjHead;
	sOMDObjHead = sOMDObjHead->alloc_free;
	sOMDObjsActive++;

	return dobj;
}

// 0x80008004
void gcSetDObjPrevAlloc(DObj* dobj)
{
	dobj->alloc_free = sOMDObjHead;
	sOMDObjsActive--;
	sOMDObjHead = dobj;
}

// 0x80008030
SObj* gcGetSObjSetNextAlloc()
{
	SObj* sobj;

	if (sOMSObjHead == NULL)
	{
		sOMSObjHead = syTaskmanMalloc(sOMSObjSize, 0x8);
		sOMSObjHead->alloc_free = NULL;
	}

	if (sOMSObjHead == NULL)
	{
		syErrorPrintf("om : couldn't get SObj\n");
		while (TRUE);
	}

	sobj = sOMSObjHead;
	sOMSObjHead = sOMSObjHead->alloc_free;
	sOMSObjsActive++;

	return sobj;
}

// 0x800080B0
void gcSetSObjPrevAlloc(SObj* sobj)
{
	sobj->alloc_free = sOMSObjHead;
	sOMSObjsActive--;
	sOMSObjHead = sobj;
}

// 0x800080DC
Camera* gcGetCameraSetNextAlloc()
{
	Camera* cam;

	if (sOMCameraHead == NULL)
	{
		sOMCameraHead = syTaskmanMalloc(sOMCameraSize, 0x8);
		sOMCameraHead->next = NULL;
	}

	if (sOMCameraHead == NULL)
	{
		syErrorPrintf("om : couldn't get Camera\n");
		while (TRUE);
	}

	cam = sOMCameraHead;
	sOMCameraHead = sOMCameraHead->next;
	sOMCamerasActive++;

	return cam;
}

// 0x8000815C
void gcSetCameraPrevAlloc(Camera* cam)
{
	cam->next = sOMCameraHead;
	sOMCamerasActive--;
	sOMCameraHead = cam;
}

// 0x80008188
GObjProcess* gcAddGObjProcess(GObj* gobj, void (*proc)(GObj*), u8 kind, u32 priority)
{
	GCThreadStackNode* stack_node;
	GObjThread* gobjthread;
	GObjProcess* gobjproc;

	if (gobj == NULL)
		gobj = gGCCurrentCommon;
	gobjproc = gcGetGObjProcess();

	if (priority >= 6)
	{
		syErrorPrintf("om : GObjProcess's priority is bad value\n");
		while (TRUE);
	}
	gobjproc->priority = priority;
	gobjproc->kind = kind;
	gobjproc->is_paused = 0;
	gobjproc->parent_gobj = gobj;
	gobjproc->proc_common = proc;

	switch (kind)
	{
	case nGCProcessKindThread:
		gobjthread = gcGetGObjThread();
		gobjproc->gobjthread = gobjthread;

		stack_node = gcGetDefaultStack();
		gobjthread->stack = stack_node->stack;
		gobjthread->stack_size = sOMThreadStackSize;

		osCreateThread
		(
			&gobjthread->thread,
			sGCProcessThreadID++,
			(void (*)(void*))
			proc,
			gobj,
			&gobjthread->stack[sOMThreadStackSize / sizeof(u64)],
			51
		);
		gobjthread->stack[7] = 0xFEDCBA98;

		if (sGCProcessThreadID >= 20000000)
		{
			sGCProcessThreadID = 10000000;
		}
		break;

	case nGCProcessKindProc:
		gobjproc->proc_thread = proc;
		break;
	
	default:
		syErrorPrintf("om : GObjProcess's kind is bad value\n");
		while (TRUE);
	}
	gcLinkGObjProcess(gobjproc);

	return gobjproc;
}

// 0x80008304
GObjProcess* unref_80008304(GObj* gobj, void (*proc)(GObj*), u32 pri, s32 thread_id, u32 stack_size)
{
	GObjProcess* gobjproc;	// s0
	GObjThread* gobjthread; // v1 / sp28
	GCThreadStackNode* stacknode;
	OSId tid;

	if (gobj == NULL)
		gobj = gGCCurrentCommon;

	gobjproc = gcGetGObjProcess();

	if (pri >= 6)
	{
		syErrorPrintf("om : GObjProcess's priority is bad value\n");
		while (TRUE);
	}

	gobjproc->priority = pri;
	gobjproc->is_paused = 0;
	gobjproc->parent_gobj = gobj;
	gobjproc->proc_common = proc;

	gobjproc->gobjthread = gobjthread = gcGetGObjThread();
	gobjproc->kind = nGCProcessKindThread;

	stacknode = stack_size == 0 ? gcGetDefaultStack() : gcGetStackOfSize(stack_size);
	gobjthread->stack = stacknode->stack;
	gobjthread->stack_size = stack_size == 0 ? sOMThreadStackSize : stack_size;
	tid = (thread_id != -1) ? thread_id : sGCProcessThreadID++;

	osCreateThread
	(
		&gobjthread->thread,
		tid,
		(void (*)(void*))proc,
		gobj,
		&gobjthread->stack[gobjthread->stack_size / sizeof(u64)],
		51
	);
	gobjthread->stack[7] = 0xFEDCBA98;

	if (sGCProcessThreadID >= 20000000)
		sGCProcessThreadID = 10000000;

	gcLinkGObjProcess(gobjproc);
	return gobjproc;
}

// 0x8000848C
void gcEndGObjProcess(GObjProcess* gobjproc)
{
	GCThreadStackNode* tnode;

	if ((gobjproc == NULL) || (gobjproc == gGCCurrentProcess))
	{
		D_80046A64 = 1;

		if (gGCCurrentProcess->kind == nGCProcessKindThread)
			gcStopCurrentGObjThread(1);
		return;
	}

	if (sGCProcessCallback != NULL)
		sGCProcessCallback(gobjproc);

	switch (gobjproc->kind)
	{
	case nGCProcessKindThread:
		osDestroyThread(&gobjproc->gobjthread->thread);
		// cast from stack pointer back to stack node
		tnode = (GCThreadStackNode*)((uintptr_t)(gobjproc->gobjthread->stack) - offsetof(GCThreadStackNode, stack));
		gcEjectStackNode(tnode);
		gcSetGObjThreadPrevAlloc(gobjproc->gobjthread);
		break;

	case nGCProcessKindProc: break;
	}

	func_800077D0(gobjproc);
	gcSetGObjProcessPrevAlloc(gobjproc);
}

// 0x8000855C
XObj* gcAddXObjForDObjVar(DObj* dobj, u8 kind, u8 arg2, s32 xobj_id)
{
	uintptr_t csr;
	GCTranslate* translate;
	GCRotate* rotate;
	GCScale* scale;
	XObj* xobj;
	s32 i;

	if (dobj->xobjs_num == ARRAY_COUNT(dobj->xobj))
	{
		syErrorPrintf("om : couldn\'t add OMMtx for DObj\n");
		while (TRUE);
	}
	if (dobj->dynstore != NULL)
	{
		csr = (uintptr_t)dobj->dynstore->data;

		for (i = 0; i < ARRAY_COUNT(dobj->dynstore->kinds); i++)
		{
			switch (dobj->dynstore->kinds[i])
			{
			case nGCDrawVecKindNone: break;

			case nGCDrawVecKindTranslate:
				translate = (GCTranslate*)csr;
				csr += sizeof(GCTranslate);
				break;

			case nGCDrawVecKindRotate:
				rotate = (GCRotate*)csr;
				csr += sizeof(GCRotate);
				break;

			case nGCDrawVecKindScale:
				scale = (GCScale*)csr;
				csr += sizeof(GCScale);
				break;
			}
		}
	}
	for (i = dobj->xobjs_num; i > xobj_id; i--)
		dobj->xobj[i] = dobj->xobj[i - 1];
	dobj->xobjs_num++;

	dobj->xobj[xobj_id] = xobj = gcGetXObjSetNextAlloc();
	xobj->kind = kind;

	switch (kind)
	{
	case nGCTransformTra:
	case 34:
	case 36:
	case 38:
	case 40:
	case 55:
		dobj->translate = dGCTranslateDefault;
		dobj->translate.xobj = xobj;
		break;

	case nGCTransformRotD:
	case nGCTransformRotR:
		dobj->rotate = dGCRotateDefaultAXYZ;
		dobj->rotate.xobj = xobj;
		break;

	case nGCTransformTraRotD:
	case nGCTransformTraRotR:
		dobj->translate = dGCTranslateDefault;
		dobj->rotate = dGCRotateDefaultAXYZ;
		dobj->translate.xobj = xobj;
		dobj->rotate.xobj = xobj;
		break;

	case nGCTransformRotRpyD:
	case nGCTransformRotRpyR:
	case nGCTransformRotPyrR:
		dobj->rotate = dGCRotateDefaultRPY;
		dobj->rotate.xobj = xobj;
		break;

	case nGCTransformTraRotRpyD:
	case nGCTransformTraRotRpyR:
	case nGCTransformTraRotPyrR:
	case 51:
	case 52:
		dobj->translate = dGCTranslateDefault;
		dobj->rotate = dGCRotateDefaultRPY;
		dobj->translate.xobj = xobj;
		dobj->rotate.xobj = xobj;
		break;

	case nGCTransformTraRotRSca:
		dobj->translate = dGCTranslateDefault;
		dobj->rotate = dGCRotateDefaultAXYZ;
		dobj->scale = dGCScaleDefault;
		dobj->translate.xobj = xobj;
		dobj->rotate.xobj = xobj;
		dobj->scale.xobj = xobj;
		break;

	case nGCTransformTraRotRpyRSca:
	case nGCTransformTraRotPyrRSca:
	case 54:
		dobj->translate = dGCTranslateDefault;
		dobj->rotate = dGCRotateDefaultRPY;
		dobj->scale = dGCScaleDefault;
		dobj->translate.xobj = xobj;
		dobj->rotate.xobj = xobj;
		dobj->scale.xobj = xobj;
		break;

	case nGCTransformSca:
	case 43:
	case 44:
	case 47:
	case 48:
	case 49:
	case 50:
	case 53:
		dobj->scale = dGCScaleDefault;
		dobj->scale.xobj = xobj;
		break;

	case 45:
	case 46:
		dobj->rotate = dGCRotateDefaultAXYZ;
		dobj->scale = dGCScaleDefault;
		dobj->rotate.xobj = xobj;
		dobj->scale.xobj = xobj;
		break;

	case nGCTransformVecTra:
		*translate = dGCTranslateDefault;
		translate->xobj = xobj;
		break;

	case nGCTransformVecRotR:
		*rotate = dGCRotateDefaultAXYZ;
		rotate->xobj = xobj;
		break;

	case nGCTransformVecRotRpyR:
		*rotate = dGCRotateDefaultRPY;
		rotate->xobj = xobj;
		break;

	case nGCTransformVecSca:
		*scale = dGCScaleDefault;
		scale->xobj = xobj;
		break;

	case nGCTransformVecTraRotR:
		*translate = dGCTranslateDefault;
		*rotate = dGCRotateDefaultAXYZ;

		translate->xobj = rotate->xobj = xobj;
		break;

	case nGCTransformVecTraRotRSca:
		*translate = dGCTranslateDefault;
		*rotate = dGCRotateDefaultAXYZ;
		*scale = dGCScaleDefault;

		translate->xobj = rotate->xobj = scale->xobj = xobj;
		break;

	case nGCTransformVecTraRotRpyR:
		*translate = dGCTranslateDefault;
		*rotate = dGCRotateDefaultRPY;

		translate->xobj = rotate->xobj = xobj;
		break;

	case nGCTransformVecTraRotRpyRSca:
		*translate = dGCTranslateDefault;
		*rotate = dGCRotateDefaultRPY;
		*scale = dGCScaleDefault;

		translate->xobj = rotate->xobj = scale->xobj = xobj;
		break;

	case 1:
	case 17: break;
	}
	xobj->unk05 = arg2;

	return xobj;
}

// 0x80008CC0
// This actually returns gcAddXObjForDObjVar, see https://decomp.me/scratch/nIQ4X
XObj* gcAddXObjForDObjFixed(DObj* dobj, u8 kind, u8 arg2)
{
	return gcAddXObjForDObjVar(dobj, kind, arg2, dobj->xobjs_num);
}

// 0x80008CF0
XObj* gcAddXObjForCamera(Camera* cam, u8 kind, u8 arg2)
{
	XObj* xobj;

	if (cam->xobjs_num == ARRAY_COUNT(cam->xobj))
	{
		syErrorPrintf("om : couldn't add OMMtx for Camera\n");
		while (TRUE);
	}
	xobj = gcGetXObjSetNextAlloc();

	cam->xobj[cam->xobjs_num] = xobj;
	cam->xobjs_num++;

	xobj->kind = kind;

	switch (kind)
	{
	case nGCTransformPerspFastF:
	case nGCTransformPerspF:
		cam->projection.persp = dGCPerspDefault;
		cam->projection.persp.xobj = xobj;
		break;

	case nGCTransformOrtho:
		cam->projection.ortho = dGCOrthoDefault;
		cam->projection.ortho.xobj = xobj;
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
		cam->vec = dOMCameraVecDefault;
		cam->vec.xobj = xobj;
		break;

	case 1:
	case 2: break;
	}
	xobj->unk05 = arg2;

	return xobj;
}

// 0x80008E78
AObj* gcAddAObjForDObj(DObj* dobj, u8 track)
{
	AObj* aobj = gcGetAObjSetNextAlloc();

	aobj->track = track;
	aobj->kind = nGCAnimKindNone;
	aobj->interpolate = NULL;
	aobj->rate_target = 0.0F;
	aobj->rate_base = 0.0F;
	aobj->value_target = 0.0F;
	aobj->value_base = 0.0F;
	aobj->length = 0.0F;
	aobj->length_invert = 1.0F;

	gcAppendAObjToDObj(dobj, aobj);

	return aobj;
}

// 0x80008EE4
void gcRemoveAObjFromDObj(DObj* dobj)
{
	AObj* current_aobj;
	AObj* next_aobj;

	current_aobj = dobj->aobj;

	while (current_aobj != NULL)
	{
		next_aobj = current_aobj->next;
		gcSetAObjPrevAlloc(current_aobj);
		current_aobj = next_aobj;
	}
	dobj->aobj = NULL;
	dobj->anim_wait = AOBJ_ANIM_NULL;
}

// 0x80008F44
AObj* gcAddAObjForMObj(MObj* mobj, u8 track)
{
	AObj* aobj = gcGetAObjSetNextAlloc();

	aobj->track = track;
	aobj->kind = nGCAnimKindNone;
	aobj->interpolate = NULL;
	aobj->rate_target = 0.0F;
	aobj->rate_base = 0.0F;
	aobj->value_target = 0.0F;
	aobj->value_base = 0.0F;
	aobj->length = 0.0F;
	aobj->length_invert = 1.0F;

	gcAppendAObjToMObj(mobj, aobj);

	return aobj;
}

// 0x80008FB0
// free struct AObj list at unk90
void gcRemoveAObjFromMObj(MObj* mobj)
{
	AObj* current_aobj;
	AObj* next_aobj;

	current_aobj = mobj->aobj;

	while (current_aobj != NULL)
	{
		next_aobj = current_aobj->next;
		gcSetAObjPrevAlloc(current_aobj);
		current_aobj = next_aobj;
	}
	mobj->aobj = NULL;
	mobj->anim_wait = AOBJ_ANIM_NULL;
}

// 0x80009010
AObj* gcAddAObjForCamera(Camera* cam, u8 track)
{
	AObj* aobj = gcGetAObjSetNextAlloc();

	aobj->track = track;
	aobj->kind = nGCAnimKindNone;
	aobj->interpolate = NULL;
	aobj->rate_target = 0.0F;
	aobj->rate_base = 0.0F;
	aobj->value_target = 0.0F;
	aobj->value_base = 0.0F;
	aobj->length = 0.0F;
	aobj->length_invert = 1.0F;

	gcAppendAObjToCamera(cam, aobj);

	return aobj;
}

// 0x8000907C
void gcRemoveAObjFromCamera(Camera* cam)
{
	AObj* current_aobj;
	AObj* next_aobj;

	current_aobj = cam->aobj;

	while (current_aobj != NULL)
	{
		next_aobj = current_aobj->next;
		gcSetAObjPrevAlloc(current_aobj);
		current_aobj = next_aobj;
	}
	cam->aobj = NULL;
	cam->anim_wait = AOBJ_ANIM_NULL;
}

// 0x800090DC
MObj* gcAddMObjForDObj(DObj* dobj, MObjSub* mobjsub)
{
	MObj* mobj = gcGetMObjSetNextAlloc();

	if (dobj->mobj != NULL)
	{
		MObj* current_mobj = dobj->mobj->next;
		MObj* prior_mobj = dobj->mobj;

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
	mobj->texture_id_current = 0;
	mobj->texture_id_next = 0;
	mobj->palette_id = 0;
	mobj->aobj = NULL;
	mobj->matanim_joint.event32 = NULL;
	mobj->anim_wait = AOBJ_ANIM_NULL;
	mobj->anim_speed = 1.0F;
	mobj->anim_frame = 0.0F;

	return mobj;
}

// 0x800091F4
void gcRemoveMObjAll(DObj* dobj)
{
	MObj* current_mobj;
	MObj* next_mobj;
	AObj* current_aobj;
	AObj* next_aobj;

	current_mobj = dobj->mobj;

	while (current_mobj != NULL)
	{
		current_aobj = current_mobj->aobj;

		while (current_aobj != NULL)
		{
			next_aobj = current_aobj->next;
			gcSetAObjPrevAlloc(current_aobj);
			current_aobj = next_aobj;
		}
		next_mobj = current_mobj->next;
		gcSetMObjPrevAlloc(current_mobj);
		current_mobj = next_mobj;
	}
	dobj->mobj = NULL;
}

// 0x8000926C
void gcInitDObj(DObj* dobj)
{
	s32 i;

	dobj->dynstore = NULL;
	dobj->flags = 0;
	dobj->is_anim_root = 0;
	dobj->xobjs_num = 0;

	for (i = 0; i < ARRAY_COUNT(dobj->xobj); i++)
		dobj->xobj[i] = NULL;

	dobj->aobj = NULL;
	dobj->anim_joint.event32 = NULL;
	dobj->anim_wait = AOBJ_ANIM_NULL;
	dobj->anim_speed = 1.0F;
	dobj->anim_frame = 0.0F;
	dobj->mobj = NULL;
	dobj->user_data.p = NULL;
}

// 0x800092D0
DObj* gcAddDObjForGObj(GObj* gobj, void* dvar)
{
	DObj* new_dobj;
	DObj* current_dobj;

	if (gobj == NULL)
		gobj = gGCCurrentCommon;

	new_dobj = gcGetDObjSetNextAlloc();

	if (gobj->obj != NULL)
	{
		current_dobj = DObjGetStruct(gobj);

		while (current_dobj->sib_next != NULL)
			current_dobj = current_dobj->sib_next;

		current_dobj->sib_next = new_dobj;
		new_dobj->sib_prev = current_dobj;
	}
	else
	{
		gobj->obj_kind = nGCCommonAppendDObj;
		gobj->obj = new_dobj;
		new_dobj->sib_prev = NULL;
	}

	new_dobj->parent_gobj = gobj;
	new_dobj->parent = DOBJ_PARENT_NULL;
	new_dobj->sib_next = NULL;
	new_dobj->child = NULL;
	new_dobj->display_ptr = dvar;

	gcInitDObj(new_dobj);

	return new_dobj;
}

// 0x80009380
DObj* gcAddSiblingForDObj(DObj* dobj, void* dvar)
{
	DObj* new_dobj = gcGetDObjSetNextAlloc();

	if (dobj->sib_next != NULL)
		dobj->sib_next->sib_prev = new_dobj;

	new_dobj->sib_prev = dobj;
	new_dobj->sib_next = dobj->sib_next;
	dobj->sib_next = new_dobj;
	new_dobj->parent_gobj = dobj->parent_gobj;
	new_dobj->parent = dobj->parent;

	new_dobj->child = NULL;
	new_dobj->display_ptr = dvar;

	gcInitDObj(new_dobj);

	return new_dobj;
}

// 0x800093F4
DObj* gcAddChildForDObj(DObj* dobj, void* dvar)
{
	DObj* new_dobj = gcGetDObjSetNextAlloc();
	DObj* current_dobj;

	if (dobj->child != NULL)
	{
		current_dobj = dobj->child;

		while (current_dobj->sib_next != NULL)
			current_dobj = current_dobj->sib_next;

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
	new_dobj->sib_next = NULL;
	new_dobj->display_ptr = dvar;

	gcInitDObj(new_dobj);

	return new_dobj;
}

// 0x8000948C
// drop_dobj, cleanup_dobj, gcSetDObjPrevAlloc?
void gcEjectDObj(DObj* dobj)
{
	s32 i;
	AObj* current_aobj;
	AObj* next_aobj;
	MObj* current_mobj;
	MObj* next_mobj;

	while (dobj->child != NULL)
		gcEjectDObj(dobj->child);

	if (dobj->parent == (DObj*)1)
	{
		if (dobj == DObjGetStruct(dobj->parent_gobj))
		{
			dobj->parent_gobj->obj = dobj->sib_next;
			if (DObjGetStruct(dobj->parent_gobj) == NULL)
				dobj->parent_gobj->obj_kind = nGCCommonAppendNone;
		}
	}
	else if (dobj == dobj->parent->child)
		dobj->parent->child = dobj->sib_next;

	if (dobj->sib_prev != NULL)
		dobj->sib_prev->sib_next = dobj->sib_next;

	if (dobj->sib_next != NULL)
		dobj->sib_next->sib_prev = dobj->sib_prev;

	for (i = 0; i < ARRAY_COUNT(dobj->xobj); i++)
	{
		if (dobj->xobj[i] != NULL)
			gcSetXObjPrevAlloc(dobj->xobj[i]);
	}
	if ((dobj->dynstore != NULL) && (sOMDObjProcEject != NULL))
		sOMDObjProcEject(dobj->dynstore);
	current_aobj = dobj->aobj;

	while (current_aobj != NULL)
	{
		next_aobj = current_aobj->next;
		gcSetAObjPrevAlloc(current_aobj);
		current_aobj = next_aobj;
	}

	current_mobj = dobj->mobj;

	while (current_mobj != NULL)
	{
		current_aobj = current_mobj->aobj;

		while (current_aobj != NULL)
		{
			next_aobj = current_aobj->next;
			gcSetAObjPrevAlloc(current_aobj);
			current_aobj = next_aobj;
		}
		next_mobj = current_mobj->next;
		gcSetMObjPrevAlloc(current_mobj);
		current_mobj = next_mobj;
	}

	gcSetDObjPrevAlloc(dobj);
}

// 0x80009614
SObj* gcAddSObjForGObj(GObj* gobj, Sprite* sprite)
{
	SObj* new_sobj;

	if (gobj == NULL)
		gobj = gGCCurrentCommon;
	new_sobj = gcGetSObjSetNextAlloc();

	if (SObjGetStruct(gobj) != NULL)
	{
		SObj* tail_sobj = SObjGetStruct(gobj);

		while (tail_sobj->next != NULL)
			tail_sobj = tail_sobj->next;

		tail_sobj->next = new_sobj;
		new_sobj->prev = tail_sobj;
	}
	else
	{
		gobj->obj_kind = nGCCommonAppendSObj;
		gobj->obj = new_sobj;
		new_sobj->prev = NULL;
	}
	new_sobj->parent_gobj = gobj;
	new_sobj->next = NULL;

	if (sprite != NULL)
		new_sobj->sprite = *sprite;
	new_sobj->user_data.p = NULL;

	return new_sobj;
}

// 0x800096EC
void gcEjectSObj(SObj* sobj)
{
	if (sobj == SObjGetStruct(sobj->parent_gobj))
	{
		sobj->parent_gobj->obj = sobj->next;
		if (SObjGetStruct(sobj->parent_gobj) == NULL)
			sobj->parent_gobj->obj_kind = nGCCommonAppendNone;
	}
	if (sobj->prev != NULL)
		sobj->prev->next = sobj->next;
	if (sobj->next != NULL)
		sobj->next->prev = sobj->prev;
	gcSetSObjPrevAlloc(sobj);
}

Camera* gcAddCameraForGObj(GObj* gobj)
{
	s32 i;
	Camera* new_cam;

	if (gobj == NULL)
	{
		gobj = gGCCurrentCommon;
	}
	gobj->obj_kind = nGCCommonAppendCamera;

	new_cam = gcGetCameraSetNextAlloc();
	gobj->obj = new_cam;
	new_cam->parent_gobj = gobj;

	syRdpSetDefaultViewport(&new_cam->viewport);

	new_cam->xobjs_num = 0;

	for (i = 0; i < ARRAY_COUNT(new_cam->xobj); i++)
	{
		new_cam->xobj[i] = NULL;
	}
	new_cam->flags = 0;
	new_cam->color = GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00);
	new_cam->func_camera = NULL;
	new_cam->unk_camera_0x8C = 0;

	new_cam->aobj = NULL;
	new_cam->camanim_joint.event32 = NULL;

	new_cam->anim_wait = AOBJ_ANIM_NULL;
	new_cam->anim_speed = 1.0F;
	new_cam->anim_frame = 0.0F;

	return new_cam;
}

// 0x80009810
void gcEjectCamera(Camera* cam)
{
	GObj* gobj;
	s32 i;
	AObj* current_aobj;
	AObj* next_aobj;

	gobj = cam->parent_gobj;
	gobj->obj_kind = nGCCommonAppendNone;
	gobj->obj = NULL;

	for (i = 0; i < ARRAY_COUNT(cam->xobj); i++)
	{
		if (cam->xobj[i] != NULL)
			gcSetXObjPrevAlloc(cam->xobj[i]);
	}
	current_aobj = cam->aobj;

	while (current_aobj != NULL)
	{
		next_aobj = current_aobj->next;
		gcSetAObjPrevAlloc(current_aobj);
		current_aobj = next_aobj;
	}
	gcSetCameraPrevAlloc(cam);
}

// 0x800098A4
GObj* gcInitGObjCommon(u32 id, void (*func_run)(GObj*), u8 link, u32 order)
{
	GObj* new_gobj;

	if (link >= ARRAY_COUNT(gGCCommonLinks))
	{
		syErrorPrintf("omGAddCommon() : link num over : link = %d : id = %d\n", link, id);
		while (TRUE);
	}

	new_gobj = gcGetGObjSetNextAlloc();

	if (new_gobj == NULL)
		return NULL;

	new_gobj->gobj_id = id;
	new_gobj->link_id = link;
	new_gobj->link_order = order;
	new_gobj->func_run = func_run;
	new_gobj->gobjproc_head = NULL;
	new_gobj->gobjproc_tail = NULL;
	new_gobj->gobjlinks_num = 0;
	new_gobj->flags = GOBJ_FLAG_NONE;

	new_gobj->obj_kind = nGCCommonAppendNone;
	new_gobj->obj = NULL;

	new_gobj->dl_link_id = ARRAY_COUNT(gGCCommonDLLinks);
	new_gobj->anim_frame = 0.0F;
	new_gobj->proc_anim = NULL;
	new_gobj->user_data.p = NULL;

	return new_gobj;
}

// 0x80009968
// from 64remix: render.create_object
GObj* gcMakeGObjSPAfter(u32 id, void (*func_run)(GObj*), u8 link, u32 order)
{
	GObj* new_gobj = gcInitGObjCommon(id, func_run, link, order);

	if (new_gobj == NULL)
		return NULL;

	gcLinkGObjSPAfter(new_gobj);
	return new_gobj;
}

// 0x800099A8
GObj* gcMakeGObjSPBefore(u32 id, void (*func_run)(GObj*), u8 link, u32 order)
{
	GObj* new_gobj = gcInitGObjCommon(id, func_run, link, order);

	if (new_gobj == NULL)
		return NULL;

	gcLinkGObjSPBefore(new_gobj);
	return new_gobj;
}

// 0x800099E8
GObj* gcMakeGObjAfter(u32 id, void (*func_run)(GObj*), GObj* link_gobj)
{
	GObj* new_gobj = gcInitGObjCommon(id, func_run, link_gobj->link_id, link_gobj->link_order);

	if (new_gobj == NULL)
		return NULL;

	gcLinkGObjAfter(new_gobj, link_gobj);
	return new_gobj;
}

// 0x80009A34
GObj* gcMakeGObjBefore(u32 id, void (*func_run)(GObj*), GObj* link_gobj)
{
	GObj* new_gobj = gcInitGObjCommon(id, func_run, link_gobj->link_id, link_gobj->link_order);

	if (new_gobj == NULL)
		return NULL;

	gcLinkGObjAfter(new_gobj, link_gobj->link_prev);
	return new_gobj;
}

// 0x80009A84
void gcEjectGObj(GObj* gobj)
{
	if ((gobj == NULL) || (gobj == gGCCurrentCommon))
	{
		D_80046A64 = 2;
		return;
	}

	gcEndProcessAll(gobj);

	switch (gobj->obj_kind)
	{
	case nGCCommonAppendDObj: gcRemoveDObjAll(gobj); break;

	case nGCCommonAppendSObj: gcRemoveSObjAll(gobj); break;

	case nGCCommonAppendCamera: gcEjectCamera(CameraGetStruct(gobj)); break;
	}

	if (gobj->dl_link_id != ARRAY_COUNT(gGCCommonDLLinks))
		gcRemoveGObjFrgcDLLinkedList(gobj);

	gcRemoveGObjFrgcLinkedList(gobj);
	gcSetGObjPrevAlloc(gobj);
}

// 0x80009B48
void gcMoveGObjCommon(s32 sw, GObj* this_gobj, u8 link, u32 order, GObj* other_gobj)
{
	GObjProcess* current_gobjproc;
	GObjProcess* orig_gobjproc;
	GObjProcess* next_gobjproc;

	if (link >= ARRAY_COUNT(gGCCommonLinks))
	{
		syErrorPrintf("omGMoveCommon() : link num over : link = %d : id = %d\n", link, this_gobj->gobj_id);

		while (TRUE);
	}

	if (this_gobj == NULL)
		this_gobj = gGCCurrentCommon;

	orig_gobjproc = this_gobj->gobjproc_head;

	this_gobj->gobjproc_head = NULL;
	this_gobj->gobjproc_tail = NULL;

	current_gobjproc = orig_gobjproc;

	while (current_gobjproc != NULL)
	{
		func_80007784(current_gobjproc);
		current_gobjproc = current_gobjproc->link_next;
	}
	gcRemoveGObjFrgcLinkedList(this_gobj);

	this_gobj->link_id = link;
	this_gobj->link_order = order;

	switch (sw)
	{
	case 0: gcLinkGObjSPAfter(this_gobj); break;

	case 1: gcLinkGObjSPBefore(this_gobj); break;

	case 2: gcLinkGObjAfter(this_gobj, other_gobj); break;

	case 3: gcLinkGObjAfter(this_gobj, other_gobj->link_prev); break;
	}

	current_gobjproc = orig_gobjproc;

	while (current_gobjproc != NULL)
	{
		next_gobjproc = current_gobjproc->link_next;
		gcLinkGObjProcess(current_gobjproc);
		current_gobjproc = next_gobjproc;
	}
}

// 0x80009C90
void func_80009C90(GObj* gobj, u8 link, u32 order) { gcMoveGObjCommon(0, gobj, link, order, NULL); }

// 0x80009CC8
void func_80009CC8(GObj* gobj, u8 link, u32 order) { gcMoveGObjCommon(1, gobj, link, order, NULL); }

// 0x80009D00
void unref_80009D00(GObj* this_gobj, GObj* other_gobj)
{
	gcMoveGObjCommon(2, this_gobj, other_gobj->link_id, other_gobj->link_order, other_gobj);
}

// 0x80009D3C
void unref_80009D3C(GObj* this_gobj, GObj* other_gobj)
{
	gcMoveGObjCommon(3, this_gobj, other_gobj->link_id, other_gobj->link_order, other_gobj);
}

// 0x80009D78
void gcLinkGObjDLCommon(GObj* gobj, void (*func_display)(GObj*), u8 dl_link, u32 dl_order, u32 cam_tag)
{
	if (dl_link >= ARRAY_COUNT(gGCCommonDLLinks) - 1)
	{
		syErrorPrintf("omGLinkObjDLCommon() : dl_link num over : dl_link = %d : id = %d\n", dl_link, gobj->gobj_id);
		while (TRUE);
	}

	gobj->dl_link_id = dl_link;
	gobj->dl_link_order = dl_order;
	gobj->func_display = func_display;
	gobj->cam_tag = cam_tag;
	gobj->frame_draw_last = dSYTaskmanFrameDrawCount - 1;
}

// 0x80009DF4
void gcAddGObjDisplay(GObj *gobj, void (*func_display)(GObj*), u8 dl_link, u32 order, u32 cam_tag)
{
	if (gobj == NULL)
	{
		gobj = gGCCurrentCommon;
	}
	gcLinkGObjDLCommon(gobj, func_display, dl_link, order, cam_tag);
	gcDLLinkGObjTail(gobj);
}

// 0x80009E38
void unref_80009E38(GObj* gobj, void (*func_display)(GObj*), u8 dl_link, u32 order, u32 cam_tag)
{
	if (gobj == NULL)
		gobj = gGCCurrentCommon;

	gcLinkGObjDLCommon(gobj, func_display, dl_link, order, cam_tag);
	gcDLLinkGObjHead(gobj);
}

// 0x80009E7C
void unref_80009E7C(GObj* this_gobj, void (*func_display)(GObj*), s32 arg2, GObj* other_gobj)
{
	if (this_gobj == NULL)
		this_gobj = gGCCurrentCommon;

	gcLinkGObjDLCommon(this_gobj, func_display, other_gobj->dl_link_id, other_gobj->dl_link_order, arg2);
	gcAppendGObjToDLLinkedList(this_gobj, other_gobj);
}

// 0x80009ED0
void unref_80009ED0(GObj* this_gobj, void (*func_display)(GObj*), s32 arg2, GObj* other_gobj)
{
	if (this_gobj == NULL)
		this_gobj = gGCCurrentCommon;

	gcLinkGObjDLCommon(this_gobj, func_display, other_gobj->dl_link_id, other_gobj->dl_link_order, arg2);
	gcAppendGObjToDLLinkedList(this_gobj, other_gobj->link_prev);
}

// 0x80009F28
void func_80009F28(GObj* gobj, void (*func_display)(GObj*), u32 order, u64 arg3, u32 cam_tag)
{
	gobj->dl_link_id = ARRAY_COUNT(gGCCommonDLLinks) - 1;
	gobj->dl_link_order = order;
	gobj->func_display = func_display;
	gobj->cam_mask = arg3;
	gobj->cam_tag = cam_tag;
	gobj->unk_gobj_0x40 = 0;
	gobj->frame_draw_last = dSYTaskmanFrameDrawCount - 1;
}

// 0x80009F74
void func_80009F74(GObj *gobj, void (*func_display)(GObj*), u32 order, u64 arg3, u32 cam_tag)
{
	if (gobj == NULL)
	{
		gobj = gGCCurrentCommon;
	}
	func_80009F28(gobj, func_display, order, arg3, cam_tag);
	gcDLLinkGObjTail(gobj);
}

// 0x80009FC0
void unref_80009FC0(GObj* gobj, void (*func_display)(GObj*), u32 order, u64 arg3, u32 cam_tag)
{
	if (gobj == NULL)
		gobj = gGCCurrentCommon;

	func_80009F28(gobj, func_display, order, arg3, cam_tag);
	gcDLLinkGObjHead(gobj);
}

// 0x8000A00C
void unref_8000A00C(GObj* this_gobj, void (*func_display)(GObj*), u64 arg2, s32 arg3, GObj* other_gobj)
{
	if (this_gobj == NULL)
		this_gobj = gGCCurrentCommon;
	func_80009F28(this_gobj, func_display, other_gobj->dl_link_order, arg2, arg3);
	gcAppendGObjToDLLinkedList(this_gobj, other_gobj);
}

// 0x8000A06C
void unref_8000A06C(GObj* this_gobj, void (*func_display)(GObj*), u64 arg2, s32 arg3, GObj* other_gobj)
{
	if (this_gobj == NULL)
		this_gobj = gGCCurrentCommon;
	func_80009F28(this_gobj, func_display, other_gobj->dl_link_order, arg2, arg3);
	gcAppendGObjToDLLinkedList(this_gobj, other_gobj->link_prev);
}

// 0x8000A0D0
void gcMoveGObjDL(GObj* gobj, u8 dl_link, u32 order)
{
	if (dl_link >= ARRAY_COUNT(gGCCommonDLLinks) - 1)
	{
		syErrorPrintf("omGMoveObjDL() : dl_link num over : dl_link = %d : id = %d\n", dl_link, gobj->gobj_id);
		while (TRUE);
	}
	gcRemoveGObjFrgcDLLinkedList(gobj);

	gobj->dl_link_id = dl_link;
	gobj->dl_link_order = order;

	gcDLLinkGObjTail(gobj);
}

// 0x8000A14C
void gcMoveGObjDLHead(GObj* gobj, u8 dl_link, u32 order)
{
	if (dl_link >= ARRAY_COUNT(gGCCommonDLLinks) - 1)
	{
		syErrorPrintf("omGMoveObjDLHead() : dl_link num over : dl_link = %d : id = %d\n", dl_link, gobj->gobj_id);
		while (TRUE);
	}
	gcRemoveGObjFrgcDLLinkedList(gobj);
	gobj->dl_link_id = dl_link;
	gobj->dl_link_order = order;
	gcDLLinkGObjHead(gobj);
}

// 0x8000A1C8
void unref_8000A1C8(GObj* this_gobj, GObj* other_gobj)
{
	gcRemoveGObjFrgcDLLinkedList(this_gobj);
	this_gobj->dl_link_id = other_gobj->dl_link_id;
	this_gobj->dl_link_order = other_gobj->dl_link_order;
	gcAppendGObjToDLLinkedList(this_gobj, other_gobj);
}

// 0x8000A208
void unref_8000A208(GObj* this_gobj, GObj* other_gobj)
{
	gcRemoveGObjFrgcDLLinkedList(this_gobj);
	this_gobj->dl_link_id = other_gobj->dl_link_id;
	this_gobj->dl_link_order = other_gobj->dl_link_order;
	gcAppendGObjToDLLinkedList(this_gobj, other_gobj->dl_link_prev);
}

// 0x8000A24C
void func_8000A24C(GObj* gobj, u32 order)
{
	gcRemoveGObjFrgcDLLinkedList(gobj);
	gobj->dl_link_order = order;
	gcDLLinkGObjTail(gobj);
}

// 0x8000A280
void unref_8000A280(GObj* gobj, u32 order)
{
	gcRemoveGObjFrgcDLLinkedList(gobj);
	gobj->dl_link_order = order;
	gcDLLinkGObjHead(gobj);
}

// 0x8000A2B4
void func_8000A2B4(GObj* this_gobj, GObj* other_gobj)
{
	gcRemoveGObjFrgcDLLinkedList(this_gobj);
	this_gobj->dl_link_order = other_gobj->dl_link_order;
	gcAppendGObjToDLLinkedList(this_gobj, other_gobj);
}

// 0x8000A2EC
void unref_8000A2EC(GObj* this_gobj, GObj* other_gobj)
{
	gcRemoveGObjFrgcDLLinkedList(this_gobj);
	this_gobj->dl_link_order = other_gobj->dl_link_order;
	gcAppendGObjToDLLinkedList(this_gobj, other_gobj->link_prev);
}

// 0x8000A328
void gcSetMaxNumGObj(s32 num) { sGCCommonNumMax = num; }

// 0x8000A334
s16 gcGetMaxNumGObj() { return sGCCommonNumMax; }

// 0x8000A340
void func_8000A340()
{
	s32 i;
	s32 v1;
	GObj* gobj;

	gGCCurrentCamera = NULL;
	gGCCurrentDisplay = NULL;

	for (i = 0, v1 = dSYTaskmanFrameDrawCount - 1; i < ARRAY_COUNT(D_80046A88); i++)
		D_80046A88[i].id = v1;

	gobj = gGCCommonDLLinks[ARRAY_COUNT(gGCCommonDLLinks) - 1];

	while (gobj != NULL)
	{
		if (!(gobj->flags & GOBJ_FLAG_HIDDEN))
		{
			D_8003B874_3C474 = 3;
			gGCCurrentCamera = gobj;
			gobj->func_display(gobj);
			D_8003B874_3C474 = 0;
		}
		gobj = gobj->dl_link_next;
	}
}

// 0x8000A40C
GObj* func_8000A40C(GObj* gobj)
{
	GObj* return_gobj;

	D_8003B874_3C474 = 1;
	gGCCurrentCommon = gobj;

	gobj->func_run(gobj);

	return_gobj = gobj->link_next;

	gGCCurrentCommon = NULL;
	D_8003B874_3C474 = 0;

	switch (D_80046A64)
	{
	case 0: break;

	case 2:
		D_80046A64 = 0;
		gcEjectGObj(gobj);
		break;

	default: D_80046A64 = 0; break;
	}
	return return_gobj;
}

// 0x8000A49C
GObjProcess* func_8000A49C(GObjProcess* gobjproc)
{
	GObjProcess* return_gobjproc;

	D_8003B874_3C474 = 2;
	gGCCurrentCommon = gobjproc->parent_gobj;
	gGCCurrentProcess = gobjproc;

	switch (gobjproc->kind)
	{
	case nGCProcessKindThread:
		osStartThread(&gobjproc->gobjthread->thread);
		osRecvMesg(&gOMMesgQueue, NULL, OS_MESG_BLOCK);
		break;

	case nGCProcessKindProc: gobjproc->proc_thread(gobjproc->parent_gobj); break;
	}

	return_gobjproc = gobjproc->priority_next;

	gGCCurrentCommon = NULL;
	gGCCurrentProcess = NULL;
	D_8003B874_3C474 = 0;

	switch (D_80046A64)
	{
	case 2:
		D_80046A64 = 0;

		while ((return_gobjproc != NULL) && (return_gobjproc->parent_gobj == gobjproc->parent_gobj))
			return_gobjproc = return_gobjproc->priority_next;

		gcEjectGObj(gobjproc->parent_gobj);
		break;

	case 1:
		D_80046A64 = 0;
		gcEndGObjProcess(gobjproc);
		break;

	case 0: break;

	default: D_80046A64 = 0; break;
	}
	return return_gobjproc;
}

// 0x8000A5E4
void func_8000A5E4()
{
	s32 i;
	GObj* gobj;
	GObjProcess* gobjproc;

	D_80046A64 = 0;
	gGCCurrentCommon = NULL;
	gGCCurrentProcess = NULL;

	for (i = 0; i < ARRAY_COUNT(gGCCommonLinks); i++)
	{
		gobj = gGCCommonLinks[i];

		while (gobj != NULL)
		{
			if (!(gobj->flags & GOBJ_FLAG_NOEJECT) && (gobj->func_run != NULL))
				gobj = func_8000A40C(gobj);
			else
				gobj = gobj->link_next;
		}
	}
	for (i = ARRAY_COUNT(sGCProcessQueue) - 1; i >= 0; i--)
	{
		gobjproc = sGCProcessQueue[i];

		while (gobjproc != NULL)
		{
			if (gobjproc->is_paused == 0)
				gobjproc = func_8000A49C(gobjproc);
			else
				gobjproc = gobjproc->priority_next;
		}
	}
}

// 0x8000A6E0
void gcSetupObjectManager(GCSetup* setup)
{
	s32 i;

	sOMThreadStackSize = setup->threadstack_size;
	sUnkUnusedSetup = setup->unk_omsetup_0x14;

	if (setup->gobjthreads_num != 0)
	{
		GObjThread* current_gobjthread;
		sGCThreadHead = current_gobjthread = setup->gobjthreads;

		for (i = 0; i < setup->gobjthreads_num - 1; i++)
		{
			GObjThread* next_gobjthread = current_gobjthread + 1;

			current_gobjthread->next = next_gobjthread;
			current_gobjthread = next_gobjthread;
		}
		current_gobjthread->next = NULL;
	}
	else
		sGCThreadHead = NULL;

	if ((setup->num_stacks != 0) && (setup->threadstack_size != 0))
	{
		GCThreadStackNode* current_stack;

		sOMThreadStackHead = syTaskmanMalloc(sizeof(GCThreadStackList), 0x4);
		sOMThreadStackHead->next = NULL;
		sOMThreadStackHead->size = sOMThreadStackSize;
		sOMThreadStackHead->stack = current_stack = setup->threadstacks;

		for (i = 0; i < setup->num_stacks - 1; i++)
		{
			current_stack->next = (GCThreadStackNode*)((uintptr_t)current_stack + sOMThreadStackSize
													   + offsetof(GCThreadStackNode, stack));
			current_stack->stack_size = sOMThreadStackSize;
			current_stack = (GCThreadStackNode*)((uintptr_t)current_stack + sOMThreadStackSize
												 + offsetof(GCThreadStackNode, stack));
		}

		current_stack->stack_size = sOMThreadStackSize;
		current_stack->next = NULL;
	}
	else
		sOMThreadStackHead = NULL;

	if (setup->gobjprocs_num != 0)
	{
		GObjProcess* current_gobjproc;
		sGCProcessHead = current_gobjproc = setup->gobjprocs;

		for (i = 0; i < setup->gobjprocs_num - 1; i++)
		{
			GObjProcess* next_gobjproc = current_gobjproc + 1;

			current_gobjproc->link_next = next_gobjproc;
			current_gobjproc = next_gobjproc;
		}
		current_gobjproc->link_next = NULL;
	}
	else
		sGCProcessHead = NULL;

	for (i = 0; i < ARRAY_COUNT(sGCProcessQueue); i++)
		sGCProcessQueue[i] = NULL;

	if (setup->gobjs_num != 0)
	{
		GObj* current_gobj;
		sGCCommonHead = current_gobj = setup->gobjs;

		for (i = 0; i < setup->gobjs_num - 1; i++)
		{
			current_gobj->link_next = (GObj*)((uintptr_t)current_gobj + setup->gobj_size);
			current_gobj = current_gobj->link_next;
		}
		current_gobj->link_next = NULL;
	}
	else
		sGCCommonHead = NULL;

	sGCCommonSize = setup->gobj_size;
	sGCCommonNumMax = -1;
	sOMDObjProcEject = setup->proc_eject;

	if (setup->xobjs_num != 0)
	{
		XObj* current_xobj;
		sXObjHead = current_xobj = setup->xobjs;

		for (i = 0; i < setup->xobjs_num - 1; i++)
		{
			XObj* next_xobj = current_xobj + 1;
			current_xobj->next = next_xobj;
			current_xobj = next_xobj;
		}
		current_xobj->next = NULL;
	}
	else
		sXObjHead = NULL;

	if (setup->aobjs_num != 0)
	{
		AObj* current_aobj;
		sOMAObjHead = current_aobj = setup->aobjs;

		for (i = 0; i < setup->aobjs_num - 1; i++)
		{
			AObj* next_aobj = current_aobj + 1;
			current_aobj->next = next_aobj;
			current_aobj = next_aobj;
		}
		current_aobj->next = NULL;
	}
	else
		sOMAObjHead = NULL;

	if (setup->mobjs_num != 0)
	{
		MObj* current_mobj;
		sOMMObjHead = current_mobj = setup->mobjs;

		for (i = 0; i < setup->mobjs_num - 1; i++)
		{
			MObj* mobj_next = current_mobj + 1;
			current_mobj->next = mobj_next;
			current_mobj = mobj_next;
		}
		current_mobj->next = NULL;
	}
	else
		sOMMObjHead = NULL;

	if (setup->dobjs_num != 0)
	{
		DObj* current_dobj;
		sOMDObjHead = current_dobj = setup->dobjs;

		for (i = 0; i < setup->dobjs_num - 1; i++)
		{
			current_dobj->alloc_free = (DObj*)((uintptr_t)current_dobj + setup->dobj_size);
			current_dobj = current_dobj->alloc_free;
		}
		current_dobj->alloc_free = NULL;
	}
	else
		sOMDObjHead = NULL;

	sOMDObjSize = setup->dobj_size;

	if (setup->sobjs_num != 0)
	{
		SObj* current_sobj;
		sOMSObjHead = current_sobj = setup->sobjs;

		for (i = 0; i < setup->sobjs_num - 1; i++)
		{
			current_sobj->alloc_free = (SObj*)((uintptr_t)current_sobj + setup->sobj_size);
			current_sobj = current_sobj->alloc_free;
		}
		current_sobj->alloc_free = NULL;
	}
	else
		sOMSObjHead = NULL;

	sOMSObjSize = setup->sobj_size;

	if (setup->cameras_num != 0)
	{
		Camera* current_cam;
		sOMCameraHead = current_cam = setup->cameras;

		for (i = 0; i < setup->cameras_num - 1; i++)
		{
			current_cam->next = (Camera*)((uintptr_t)current_cam + setup->camera_size);
			current_cam = current_cam->next;
		}
		current_cam->next = NULL;
	}
	else
		sOMCameraHead = NULL;

	sOMCameraSize = setup->camera_size;

	for (i = 0; i < (ARRAY_COUNT(sGCCommonLinks) + ARRAY_COUNT(gGCCommonLinks)) / 2; i++)
		gGCCommonLinks[i] = sGCCommonLinks[i] = NULL;

	for (i = 0; i < (ARRAY_COUNT(sGCCommonDLLinks) + ARRAY_COUNT(gGCCommonDLLinks)) / 2; i++)
		gGCCommonDLLinks[i] = sGCCommonDLLinks[i] = NULL;

	func_80014430();
	osCreateMesgQueue(&gOMMesgQueue, sOMMesg, ARRAY_COUNT(sOMMesg));

	sOMThreadStacksActive = sGCThreadsActive = sGCProcessesActive = sGCCommonsActive = sXObjActive
		= sOMAObjsActive = sOMDObjsActive = sOMSObjsActive = sOMCamerasActive = 0;

	sGCProcessCallback = NULL;

	gcSetCameraMatrixMode(0);

	D_8003B874_3C474 = 0;
}
