#include <sys/obj.h>

#include <sys/objtypes.h>
#include <sys/om.h>
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

// GObjProcess *D_80046A60;
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
		ret->stackSize = size;
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
		if (parent->size == node->stackSize)
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
		sOMObjProcessHead->gobjproc_next = NULL;
	}

	if (sOMObjProcessHead == NULL)
	{
		gsFatalPrintF("om : couldn't get GObjProcess\n");
		while (TRUE)
			;
	}

	gobjproc = sOMObjProcessHead;
	sOMObjProcessHead = sOMObjProcessHead->gobjproc_next;
	sOMObjProcessesActive++;

	return gobjproc;
}

// 80007680
void omLinkGObjProcess(GObjProcess* gobjproc)
{
	GObj* parent_gobj = gobjproc->parent_gobj;
	s32 link_id = gobjproc->parent_gobj->group;
	GObj* prev_gobj = gobjproc->parent_gobj;

	while (TRUE)
	{
		while (prev_gobj != NULL)
		{
			GObjProcess* prev_gobjproc = prev_gobj->gobjproc_prev;

			while (prev_gobjproc != NULL)
			{
				if (prev_gobjproc->priority == gobjproc->priority)
				{
					gobjproc->unk_gobjproc_0x8 = prev_gobjproc->unk_gobjproc_0x8;
					prev_gobjproc->unk_gobjproc_0x8 = gobjproc;
					gobjproc->unk_gobjproc_0xC = prev_gobjproc;

					goto loop_exit;
				}
				prev_gobjproc = prev_gobjproc->gobjproc_prev;
			}
			prev_gobj = prev_gobj->group_gobj_prev;
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
	if (parent_gobj->gobjproc_prev != NULL)
		parent_gobj->gobjproc_prev->gobjproc_next = gobjproc;
	else
		parent_gobj->gobjproc_next = gobjproc;

	gobjproc->gobjproc_prev = parent_gobj->gobjproc_prev;
	gobjproc->gobjproc_next = NULL;
	parent_gobj->gobjproc_prev = gobjproc;
}