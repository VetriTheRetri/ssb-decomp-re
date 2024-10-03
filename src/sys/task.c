#include "common.h"
#include <sys/task.h>

#include <sys/error.h>
#include <sys/main.h>
#include <sys/malloc.h>
#include <sys/obj.h>
#include <sys/rdp_reset.h>
#include <sys/system_00.h>
#include <sys/thread3.h>
#include <sys/thread6.h>

#include <macros.h>
#include <ssb_types.h>
#include <stddef.h>

#include <PR/mbi.h>
#include <PR/ucode.h>
#include <PR/ultratypes.h>

// externs
extern void syTaskCheckBufferLengths();

// structures
typedef struct gsUcode
{
	/* 0x00 */ u64 *text;
	/* 0x04 */ u64 *data;

} gsUcode;

typedef struct FnBundle
{
	/* 0x00 */ u16 unk00;
	/* 0x04 */ void (*fn04)();
	/* 0x08 */ void (*fn08)(struct FnBundle *);
	/* 0x0C */ void (*fn0C)();
	/* 0x10 */ void (*fn10)(struct FnBundle *);

} FnBundle; // size == 0x14 (D_800465F8)

typedef struct Temp8000641C
{
	/* 0x00 */ u8 pad00[0x2c];
	/* 0x2C */ void (*fn2C)(struct Temp8000641C *);

} Temp8000641C; // size >= 0x2C

// data
s32 D_8003B6E0 = 0;
u32 D_8003B6E4 = 0;

s32 dSYGtlFrameDrawCount = 0;

// match Nintendo's name to make the text and data symbols
#define NewUcodeInfo(ucode) \
	{ (u64*)ucode##TextStart, (u64*)ucode##DataStart }
#define NullUcodeInfo \
	{ NULL, NULL }
#define EndUncodeInfoArray NullUcodeInfo

// Ten total ucodes + a terminator?
gsUcode D_8003B6EC[/* */] =
{
	NewUcodeInfo(gspF3DEX2_fifo),
	NullUcodeInfo,
	NullUcodeInfo,
	NullUcodeInfo,
	NullUcodeInfo,
	NullUcodeInfo,
	NullUcodeInfo,
	NullUcodeInfo,
	NullUcodeInfo,
	NullUcodeInfo,
	EndUncodeInfoArray,
};

// bss

UNUSED u8 unref80045480[0x10];
OSMesg D_80045490[4];
OSMesgQueue D_800454A0;
u16 D_800454B8;
u16 D_800454BA;
u32 D_800454BC;
OSMesg D_800454C0[1];
OSMesgQueue D_800454C8;
SCClient D_800454E0;
unsigned int *D_800454E8; // pointer to Gfx.w1 (segment base addr?)
OSMesg D_800454F0[3];
OSMesgQueue D_80045500; // sctask end? or for all tasks?
OSMesg D_80045518[1];
OSMesgQueue D_80045520;
u64 D_80045538[SP_DRAM_STACK_SIZE64 + 1];
u64 D_80045940[OS_YIELD_DATA_SIZE / sizeof(u64) + 1];

DObj *sDObjTasks[2];
DObj *D_80046550[2];
DObj *D_80046558[2];
SCTaskGfxEnd *D_80046560[2];
SCTaskVi *D_80046568[2];
// is the collection of four `DLBuffer`s something worthy of a typedef?
syTaskDLBuffer sSYTaskDLBuffers[2][4];

// 0x800465B0
Gfx *gSYTaskDLHeads[4];

// 0x800465C0
Gfx *sSYTaskDLBranches[4];

// from smash remix: Writing 1 to this word will load the screen at current_screen (gSceneData).
u32 sSYTaskSceneStatus;
s32 D_800465D4;

// 0x800465D8
syMallocRegion gSYTaskGraphicsHeap;

// 0x800465E8
syMallocRegion gSYTaskGeneralHeap;

FnBundle D_800465F8;
u32 D_8004660C;
u32 D_80046610;
u32 D_80046614;
void *D_80046618; // u64 *?
u32 D_8004661C;   // size of D_80046618
u32 D_80046620;
u16 D_80046624;
u16 D_80046626; // ucode idx?
u16 D_80046628;
Gfx *D_8004662C;
// offset into sSYTaskDefaultGraphicsHeap and sDObjTasks; has to be unsigned
s32 gSYTaskID;
s32 D_80046634;
s32 D_80046638[2];
s32 sSYTaskCount;
UNUSED s32 unref80046644;
syMallocRegion sSYTaskDefaultGraphicsHeap[2];
void (*D_80046668)(void *); // takes function bundle struct?
SCTaskCallback D_8004666C;  // function pointer?

// 800048D0
void func_800048D0(SCTaskGfxCallback arg0)
{
	if (arg0 != NULL)
		D_8004666C = (void*)arg0;
	else
		D_8004666C = (void*)scCheckGfxTaskDefault;
}

// 800048F8
void func_800048F8(Gfx **dl)
{
	D_800454E8 = &dl[0]->words.w1;
	gSPSegment(dl[0]++, G_MWO_SEGMENT_F, 0x00000000);
}

// 80004928
void unref_80004928(u32 arg0)
{
	D_80046620 = arg0;
}

// 80004934
void unref_80004934(u16 arg0, u16 arg1)
{
	D_80046624 = arg0;
	D_80046626 = arg1;
}

// 80004950
void syTaskInitGeneralHeap(void *start, u32 size)
{
	syMallocInit(&gSYTaskGeneralHeap, 0x10000, start, size);
}

// 80004980
void* syTaskMalloc(u32 size, u32 alignment) // alloc_with_alignment
{
	return syMallocSet(&gSYTaskGeneralHeap, size, alignment);
}

// 800049B0
void syTaskResetGraphicsHeap(void) // reset gSYTaskGraphicsHeap allocator
{
	gSYTaskGraphicsHeap.id    = sSYTaskDefaultGraphicsHeap[gSYTaskID].id;
	gSYTaskGraphicsHeap.start = sSYTaskDefaultGraphicsHeap[gSYTaskID].start;
	gSYTaskGraphicsHeap.end   = sSYTaskDefaultGraphicsHeap[gSYTaskID].end;
	gSYTaskGraphicsHeap.ptr   = sSYTaskDefaultGraphicsHeap[gSYTaskID].ptr;

	syMallocReset(&gSYTaskGraphicsHeap);
}

// 80004A0C
void syTaskSetDLBuffer(syTaskDLBuffer (*src)[4])
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sSYTaskDLBuffers); i++)
	{
		sSYTaskDLBuffers[i][0] = src[i][0];
		sSYTaskDLBuffers[i][1] = src[i][1];
		sSYTaskDLBuffers[i][2] = src[i][2];
		sSYTaskDLBuffers[i][3] = src[i][3];
	}
}

// 80004AB0
void func_80004AB0()
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(gSYTaskDLHeads) + ARRAY_COUNT(sSYTaskDLBranches) + ARRAY_COUNT(sSYTaskDLBuffers[0])) / 3; i++)
	{
		gSYTaskDLHeads[i] = sSYTaskDLBranches[i] = sSYTaskDLBuffers[gSYTaskID][i].start;
	}
	for (i = 0; i < (ARRAY_COUNT(gSYTaskDLHeads) + ARRAY_COUNT(sSYTaskDLBranches) + ARRAY_COUNT(sSYTaskDLBuffers[0])) / 3; i++)
	{
		if (sSYTaskDLBuffers[gSYTaskID][i].length != 0)
		{
			D_8004662C = gSYTaskDLHeads[i];
			dpResetSettings(&gSYTaskDLHeads[i]);
			gSPEndDisplayList(gSYTaskDLHeads[i]++);
			sSYTaskDLBranches[i] = gSYTaskDLHeads[i];
			break;
		}
	}
	D_80046628 = 0;
}

// 80004B9C
void syTaskCheckBufferLengths(void)
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(gSYTaskDLHeads) + ARRAY_COUNT(sSYTaskDLBranches) + ARRAY_COUNT(sSYTaskDLBuffers[0])) / 3; i++)
	{
		if (sSYTaskDLBuffers[gSYTaskID][i].length + (uintptr_t)sSYTaskDLBuffers[gSYTaskID][i].start < (uintptr_t)gSYTaskDLHeads[i])
		{
			syErrorPrintf("gtl : DLBuffer over flow !  kind = %d  vol = %d byte\n", i, (uintptr_t)gSYTaskDLHeads[i] - (uintptr_t)sSYTaskDLBuffers[gSYTaskID][i].start);
			while (TRUE);
		}
	}

	if ((uintptr_t)gSYTaskGraphicsHeap.end < (uintptr_t)gSYTaskGraphicsHeap.ptr)
	{
		syErrorPrintf("gtl : DynamicBuffer over flow !  %d byte\n", (uintptr_t)gSYTaskGraphicsHeap.ptr - (uintptr_t)gSYTaskGraphicsHeap.start);
		while (TRUE);
	}
}

// 80004C5C
void func_80004C5C(void *arg0, u32 buffer_size)
{
	SCTaskRDPBuffer t;

	t.info.type     = SC_TASK_TYPE_RDP_BUFFER;
	t.info.priority = 50;
	t.buffer        = arg0;
	t.size          = buffer_size;
	func_80000970(&t.info);

	if ((uintptr_t)&scUnknownU64 & 7)
	{
		syErrorPrintf("bad addr sc_rdp_output_len = %x\n", &scUnknownU64);
		while (TRUE);
	}
}

// 80004CB4
void func_80004CB4(s32 arg0, void *arg1, u32 buffer_size)
{
	D_8003B6E0 = arg0;
	D_80046618 = arg1;
	D_8004661C = buffer_size;

	if (arg0 == 2 || arg0 == 1)
	{
		if (buffer_size == 0)
		{
			syErrorPrintf("gtl : Buffer size for RDP is zero !!\n");
			while (TRUE);
		}
	}

	if (arg0 == 1)
	{
		func_80004C5C(arg1, buffer_size);
	}
}

// 80004D2C
DObj* func_80004D2C(void)
{
	DObj *temp;

	if (sDObjTasks[gSYTaskID] == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfx\n");
		while (TRUE);
	}

	if (D_80046550[gSYTaskID] == D_80046558[gSYTaskID])
	{
		syErrorPrintf("gtl : couldn\'t get SCTaskGfx\n");
		while (TRUE);
	}

	temp = D_80046550[gSYTaskID]++;

	return temp;
}

// 80004DB4
void func_80004DB4(DObj *arg0, s32 arg1, SCTaskGfxEnd *arg2, SCTaskVi *arg3)
{
	s32 i;

	for (i = 0; i < sSYTaskCount; i++)
	{
		sDObjTasks[i] = (DObj*) ((uintptr_t)arg0 + (arg1 * sizeof(DObj)) * i);
		D_80046550[i] = (DObj*) ((uintptr_t)arg0 + (arg1 * sizeof(DObj)) * i);
		D_80046558[i] = (DObj*) ((uintptr_t)arg0 + (arg1 * sizeof(DObj)) * (i + 1));

		D_80046560[i] = (SCTaskGfxEnd*) ((uintptr_t)arg2 + (i * sizeof(SCTaskGfxEnd)));
		D_80046568[i] = (SCTaskVi*) ((uintptr_t)arg3 + (i * sizeof(SCTaskVi)));
	}
}

// 80004E90
void syTaskScheduleGfxEnd(SCTaskGfxEnd *mesg, void *framebuffer, u32 retVal, OSMesgQueue *mq)
{
	mesg->info.type 	= SC_TASK_TYPE_GFX_END;
	mesg->info.priority = 100;
	mesg->info.fnCheck  = NULL;
	mesg->info.mq       = mq;
	mesg->info.retVal   = retVal;
	mesg->fb            = framebuffer;
	mesg->taskId        = gSYTaskID;

	osSendMesg(&scTaskQueue, (OSMesg)mesg, OS_MESG_NOBLOCK);
}

// 80004EFC
void func_80004EFC()
{
	SCTaskGfxEnd *mesg = D_80046560[gSYTaskID];

	if (mesg == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE);
	}

	syTaskScheduleGfxEnd(mesg, (void*)-1, gSYTaskID, &D_80045500);
	D_80046550[gSYTaskID] = sDObjTasks[gSYTaskID];
}

// 80004F78
void func_80004F78()
{
	OSMesg recv;
	SCTaskGfxEnd *mesg = D_80046560[gSYTaskID];

	if (mesg == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE);
	}

	syTaskScheduleGfxEnd(mesg, NULL, gSYTaskID, &D_80045520);
	osRecvMesg(&D_80045520, &recv, OS_MESG_BLOCK);
	D_80046550[gSYTaskID] = sDObjTasks[gSYTaskID];
	syTaskResetGraphicsHeap();
	func_80004AB0();
}

// 80005018
void func_80005018(SCTaskGfx *t, s32 *arg1, u32 ucode_id, s32 arg3, u64 *arg4, u64 *arg5, u32 arg6)
{
	gsUcode *ucode;
	// ...why?
	s32 two = 2;

	t->info.type = SC_TASK_TYPE_GFX;
	t->info.priority = 50;

	if (D_800454E8 != NULL)
	{
		t->info.fnCheck = D_8004666C;
		t->unk68     = (void*)D_800454E8;
		D_800454E8   = NULL;
	}
	else
	{
		t->info.fnCheck = NULL;
		t->unk68     = NULL;
	}
	t->fb = arg1;
	t->fbIdx = D_800465D4;

	if (arg1 != 0)
	{
		t->info.mq = &D_80045500;
		t->info.retVal = arg3;
	}
	else
		t->info.mq = NULL;

	t->info.unk18 = two;
	t->taskId     = gSYTaskID;
	t->unk7C      = 0;

	t->task.t.type            = M_GFXTASK;
	t->task.t.flags           = OS_TASK_LOADABLE;
	t->task.t.ucode_boot      = gSYMainRspBootCode;
	t->task.t.ucode_boot_size = sizeof(gSYMainRspBootCode);

	ucode = &D_8003B6EC[ucode_id];

	if (ucode->text == NULL)
	{
		syErrorPrintf("gtl : ucode isn\'t included  kind = %d\n", ucode_id);
		while (TRUE);
	}
	t->task.t.ucode           = ucode->text;
	t->task.t.ucode_data      = ucode->data;
	t->task.t.ucode_size      = SP_UCODE_SIZE;
	t->task.t.ucode_data_size = SP_UCODE_DATA_SIZE;
	t->task.t.dram_stack      = OS_DCACHE_ROUNDUP_ADDR(&D_80045538);
	t->task.t.dram_stack_size = SP_DRAM_STACK_SIZE8;

	switch (ucode_id)
	{
	case 0:
	case 2:
	case 4:
	case 6:
	case 8:
		// FIFO microcodes..?
		t->task.t.output_buff = arg5;
		t->task.t.output_buff_size = (u64 *)((uintptr_t)arg5 + arg6);
		t->unk74 = two;
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
		t->task.t.output_buff = NULL;
		t->task.t.output_buff_size = NULL;
		t->unk74 = 0;
		break;
	}
	t->task.t.data_ptr        = arg4;
	t->task.t.data_size       = 0;
	t->task.t.yield_data_ptr  = OS_DCACHE_ROUNDUP_ADDR(&D_80045940);
	t->task.t.yield_data_size = OS_YIELD_DATA_SIZE;
	osWritebackDCacheAll();
	osSendMesg(&scTaskQueue, (OSMesg)t, OS_MESG_NOBLOCK);
}

// 800051E4
u32 syTaskGetUcodeID()
{
	u32 o = (D_80046628 != 0) ? D_80046626 : D_80046624;

	switch (o)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
		o = 9;
		break;

	default: o = 8;
		break;
	}
	return o;
}

// 80005240
void func_80005240(s32 arg0, u64 *arg1)
{
	u32 ucode_id;

	if (arg0 == 0)
	{
		ucode_id = D_80046624;
		if (D_80046620 == 1)
		{
			switch (ucode_id)
			{
			case 0:
				ucode_id = 2;
				break;
			case 1:
				ucode_id = 3;
				break;
			}
		}
	}
	else ucode_id = syTaskGetUcodeID();

	switch (ucode_id)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			func_80005018((void*)func_80004D2C(), 0, ucode_id, gSYTaskID, arg1, NULL, 0);
			break;

		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
			func_80005018((void*)func_80004D2C(), 0, ucode_id, gSYTaskID, arg1, D_80046618, D_8004661C);
			break;
	}
}

// 80005344
void syTaskAppendGfxUcodeLoad(Gfx **dl, u32 ucode_id)
{
	switch (ucode_id)
	{
	case 0:
		gSPLoadUcodeL(dl[0]++, gspF3DEX2_fifo);
		// intentional fall-thru
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	default:
		gSPDisplayList(dl[0]++, D_8004662C);
		break;
	}
}

// 800053CC
void func_800053CC()
{
	s32 a0;
	s32 diffs;
	s32 i;
	s32 dl_id;
	Gfx *cmdPtr;

	// calculate bitset of differences
	// bit 1 -> 0
	// 2 -> 1
	// 4 -> 2
	// 8 -> 3
	diffs = 0;

	for (i = 0; i < (ARRAY_COUNT(gSYTaskDLHeads) + ARRAY_COUNT(sSYTaskDLBranches)) / 2; i++)
	{
		diffs >>= 1;

		if (gSYTaskDLHeads[i] != sSYTaskDLBranches[i])
		{
			diffs |= 0x8;
		}
	}

	if (diffs != 0)
	{
		if (diffs & 0x1)
		{
			if (diffs & 0x4)
			{
				syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[0], syTaskGetUcodeID());
				gSPBranchList(gSYTaskDLHeads[0]++, sSYTaskDLBranches[2]);
			}
			else if (diffs & 0x2)
			{
				if (D_80046628 != 0)
				{
					syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[0], D_80046624);
				}
				gSPBranchList(gSYTaskDLHeads[0]++, sSYTaskDLBranches[1]);
			}
			else if (diffs & 0x8)
			{
				syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[0], syTaskGetUcodeID());
				gSPBranchList(gSYTaskDLHeads[0]++, sSYTaskDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYTaskDLHeads[0]++);
				gSPEndDisplayList(gSYTaskDLHeads[0]++);
			}
		}
		if (diffs & 0x4)
		{
			if (diffs & 0x2)
			{
				syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[2], D_80046624);
				gSPBranchList(gSYTaskDLHeads[2]++, sSYTaskDLBranches[1]);
			}
			else if (diffs & 0x8)
			{
				gSPBranchList(gSYTaskDLHeads[2]++, sSYTaskDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYTaskDLHeads[2]++);
				gSPEndDisplayList(gSYTaskDLHeads[2]++);
			}
		}
		if (diffs & 0x2)
		{
			if (diffs & 0x8)
			{
				syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[0], syTaskGetUcodeID());
				gSPBranchList(gSYTaskDLHeads[1]++, sSYTaskDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYTaskDLHeads[1]++);
				gSPEndDisplayList(gSYTaskDLHeads[1]++);
			}
		}
		if (diffs & 0x8)
		{
			gDPFullSync(gSYTaskDLHeads[3]++);
			gSPEndDisplayList(gSYTaskDLHeads[3]++);
		}
		if (diffs & 0x1)
		{
			dl_id = 0;
			a0    = 0;
		}
		else if (diffs & 0x4)
		{
			dl_id = 2;
			a0    = 1;
		}
		else if (diffs & 0x2)
		{
			dl_id = 1;
			a0    = 0;
		}
		else
		{
			dl_id = 3;
			a0    = 1;
		}
		cmdPtr = gSYTaskDLHeads[dl_id];
		gSPDisplayList(gSYTaskDLHeads[dl_id]++, D_8004662C);
		gSPBranchList(gSYTaskDLHeads[dl_id]++, sSYTaskDLBranches[dl_id]);
		func_80005240(a0, (u64*)cmdPtr);

		sSYTaskDLBranches[0] = gSYTaskDLHeads[0];
		sSYTaskDLBranches[2] = gSYTaskDLHeads[2];
		sSYTaskDLBranches[1] = gSYTaskDLHeads[1];
		sSYTaskDLBranches[3] = gSYTaskDLHeads[3];
	}
	syTaskCheckBufferLengths();
}

// 800057C8
void func_800057C8()
{
	s32 i;
	s32 diffs;

	syTaskCheckBufferLengths();

	diffs = 0;

	for (i = 0; i < (ARRAY_COUNT(gSYTaskDLHeads) + ARRAY_COUNT(sSYTaskDLBranches)) / 2; i++)
	{
		diffs >>= 1;

		if (gSYTaskDLHeads[i] != sSYTaskDLBranches[i])
			diffs |= 8;
	}
	if (diffs != 0)
	{
		if (diffs & 1)
		{
			if (diffs & 4)
			{
				syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[0], syTaskGetUcodeID());
				gSPBranchList(gSYTaskDLHeads[0]++, sSYTaskDLBranches[2]);
			}
			else if (diffs & 2)
			{
				if (D_80046628 != 0)
					syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[0], D_80046624);
				gSPBranchList(gSYTaskDLHeads[0]++, sSYTaskDLBranches[1]);
			}
			else if (diffs & 8)
			{
				syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[0], syTaskGetUcodeID());
				gSPBranchList(gSYTaskDLHeads[0]++, sSYTaskDLBranches[3]);
			}
		}
		if (diffs & 4)
		{
			if (diffs & 2)
			{
				syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[2], D_80046624);
				gSPBranchList(gSYTaskDLHeads[2]++, sSYTaskDLBranches[1]);
			}
			else if (diffs & 8)
			{
				gSPBranchList(gSYTaskDLHeads[2]++, sSYTaskDLBranches[3]);
			}
			else
			{
				syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[2], D_80046624);
				gSPBranchList(gSYTaskDLHeads[2]++, gSYTaskDLHeads[0]);
			}
			sSYTaskDLBranches[2] = gSYTaskDLHeads[2];
		}
		if (diffs & 2)
		{
			if (diffs & 8)
			{
				syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[0], syTaskGetUcodeID());
				gSPBranchList(gSYTaskDLHeads[1]++, sSYTaskDLBranches[3]);
			}
			else
			{
				if (D_80046628 != 0)
					syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[1], D_80046624);
				gSPBranchList(gSYTaskDLHeads[1]++, gSYTaskDLHeads[0]);
			}
			sSYTaskDLBranches[1] = gSYTaskDLHeads[1];
		}
		if (diffs & 8)
		{
			syTaskAppendGfxUcodeLoad(&gSYTaskDLHeads[3], D_80046624);
			gSPBranchList(gSYTaskDLHeads[3]++, gSYTaskDLHeads[0]);
			sSYTaskDLBranches[3] = gSYTaskDLHeads[3];
		}
	}
	D_80046628 = 0;
	syTaskCheckBufferLengths();
}

// 80005AE4
u32 func_80005AE4(s32 arg0)
{
	s32 msg;
	s32 i;

	while (osRecvMesg(&D_80045500, (OSMesg*)&msg, OS_MESG_NOBLOCK) != -1)
	{
		D_80046638[msg] = 0;
	}
	do
	{
		for (i = 0; i < sSYTaskCount; i++)
		{
			if (D_80046638[i] == 0)
			{
				gSYTaskID     = i;
				D_80046638[i] = 1;
				return 1;
			}
		}
		if (arg0 == 0)
		{
			osRecvMesg(&D_80045500, (OSMesg*)&msg, OS_MESG_BLOCK);
			D_80046638[msg] = 0;
		}
	}
	while (arg0 == 0);

	return 0;
}

// 80005BFC
void func_80005BFC()
{
	SCTaskInfo info;
	OSMesg msgs[1];
	OSMesgQueue mq;

	info.type = SC_TASK_TYPE_NOP;
	info.priority = 50;
	osCreateMesgQueue(&mq, msgs, ARRAY_COUNT(msgs));
	info.fnCheck  = func_80000B54;
	info.retVal = 1;
	info.mq = &mq;

	osSendMesg(&scTaskQueue, (OSMesg)&info, OS_MESG_NOBLOCK);
	osRecvMesg(&mq, NULL, OS_MESG_BLOCK);
}

// 80005C74
void syTaskSetLoadScene(void)
{
	sSYTaskSceneStatus = 1;
}

// 80005C84
void unref_80005C84(s32 arg0)
{
	sSYTaskSceneStatus = 2;
	D_800465D4 = arg0;
}

// 80005C9C
s32 func_80005C9C()
{
	SCTaskInfo info;

	switch (sSYTaskSceneStatus)
	{
	case 1:
		return 1;

	case 2:
		if (D_80044FA4_407B4 != 0)
		{
			info.type = SC_TASK_TYPE_11;
			info.priority = 100;
			func_80000970((void *)&info);
			return 1;
		}
		else
			return 0; // return 0;

	default:
		return 0;
	}
}

// 80005D10
void func_80005D10()
{
	if (D_800454BC == 1)
	{
		D_800454BC = 2;

		while (osRecvMesg(&D_800454C8, NULL, OS_MESG_NOBLOCK) != -1)
			continue;

		osRecvMesg(&D_800454C8, NULL, OS_MESG_BLOCK);
		D_800454BC = 0;
	}
}

// 80005DA0
void func_80005DA0(FnBundle *arg0)
{
	s32 i;
	D_800454BC = 0;

	while (osRecvMesg(&D_80045500, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	while (osRecvMesg(&D_80045520, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	while (osRecvMesg(&D_800454A0, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	sSYTaskSceneStatus = 0;
	D_800465D4 = -1;
	gSYTaskID = 1;
	D_80044FA4_407B4 = 0;

	for (i = 0; i < ARRAY_COUNT(D_80046638); i++)
		D_80046638[i] = 0;

	if (arg0->unk00 & 1)
	{
		while (TRUE)
		{
			func_80005D10();
			syMainVerifyStackProbes();
			for (i = 0; i < D_800454B8; i++)
				osRecvMesg(&D_800454A0, NULL, OS_MESG_BLOCK);
			while (osRecvMesg(&D_800454A0, NULL, OS_MESG_NOBLOCK) != -1)
				continue;
			D_8004660C = osGetCount();
			arg0->fn08(arg0);
			D_8003B6E4++; // += 1
			D_80046610 = (osGetCount() - D_8004660C) / 2971; // what is this constant?
			if (func_80005C9C())
				break;
			if (D_8003B6E4 % D_800454BA == 0)
			{
				func_80005AE4(0);
				D_8004660C = osGetCount();
				arg0->fn10(arg0);
				dSYGtlFrameDrawCount++; // += 1
				D_80046614 = (osGetCount() - D_8004660C) / 2971;

				if (func_80005C9C())
					break;
			}
		}
		// unconditional loop back
	}
	else
	{
		while (TRUE)
		{
			func_80005D10();
			syMainVerifyStackProbes();

			for (i = 0; i < D_800454B8; i++)
				osRecvMesg(&D_800454A0, NULL, OS_MESG_BLOCK);
			while (osRecvMesg(&D_800454A0, NULL, OS_MESG_NOBLOCK) != -1)
				continue;

			D_8004660C = osGetCount();
			arg0->fn08(arg0);
			D_8003B6E4++; // += 1
			D_80046610 = (osGetCount() - D_8004660C) / 2971;

			if (func_80005C9C())
				break;
			if ((D_8003B6E4 % D_800454BA == 0) && (func_80005AE4(1) != 0))
			{
				D_8004660C = osGetCount();
				arg0->fn10(arg0);
				dSYGtlFrameDrawCount++; // += 1
				D_80046614 = (osGetCount() - D_8004660C) / 2971;

				if (func_80005C9C() != 0)
					break;
			}
		}
	}
	func_80005BFC();
	while (osRecvMesg(&D_80045500, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	while (osRecvMesg(&D_80045520, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	while (osRecvMesg(&D_800454A0, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	dpSetScissorFunction(NULL);
	D_800454BC = 2;
}

// 800062B4
void func_800062B4(FnBundle *self)
{
	D_80046668(self);
	self->fn04();
}

// 800062EC
void func_800062EC(FnBundle *self)
{
	syTaskResetGraphicsHeap();
	func_80004AB0();
	self->fn0C();
	func_800053CC();
	func_80006F5C(D_80046568[gSYTaskID]);
	func_80004EFC();
}

// 80006350
void func_80006350(FnBundle *self)
{
	D_80046668(self);
	self->fn04();

	if (func_80005C9C())
		gcEjectAll();
}

// 800063A0
void func_800063A0(FnBundle *self)
{
	syTaskResetGraphicsHeap();
	func_80004AB0();

	self->fn0C();

	func_800053CC();
	func_80006F5C(D_80046568[gSYTaskID]);
	func_80004EFC();

	if (func_80005C9C() != 0)
		gcEjectAll();
}

// 8000641C
void unref_8000641C(Temp8000641C *arg0)
{
	s32 idx;
	SCTaskGfxEnd *task;

	func_80005AE4(0);
	syTaskResetGraphicsHeap();
	func_80004AB0();
	arg0->fn2C(arg0);
	func_800053CC();

	task = D_80046560[gSYTaskID];

	if (task == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE); // { ; }
	}
	syTaskScheduleGfxEnd(task, NULL, gSYTaskID, &D_80045500);
	D_80046550[gSYTaskID] = sDObjTasks[gSYTaskID];

	do
	{
		osRecvMesg(&D_80045500, (OSMesg*)&idx, OS_MESG_BLOCK);
		D_80046638[idx] = 0;
	}
	while (D_80046638[gSYTaskID] != 0);

	dSYGtlFrameDrawCount++; // += 1
}

// 80006548
void func_80006548(syTaskBufferSetup *arg0, void (*arg1)())
{
	s32 i;
	syTaskDLBuffer sp44[2][4];

	sSYTaskCount   = arg0->tasks_num;
	D_800465F8.unk00 = arg0->unk00;
	D_800465F8.fn04  = arg0->fn04;
	D_800465F8.fn0C  = arg0->fn08;

	func_80004DB4
	(
		syTaskMalloc(arg0->unk14 * sizeof(DObj) * sSYTaskCount, 8),
		arg0->unk14,
		syTaskMalloc(sizeof(SCTaskGfxEnd) * sSYTaskCount, 8),
		syTaskMalloc(sizeof(SCTaskVi) * sSYTaskCount, 8)
	);
	for (i = 0; i < sSYTaskCount; i++)
	{
		sp44[i][0].start  = syTaskMalloc(arg0->unk1C, 0x8);
		sp44[i][0].length = arg0->unk1C;
		sp44[i][1].start  = syTaskMalloc(arg0->unk20, 0x8);
		sp44[i][1].length = arg0->unk20;
		sp44[i][2].start  = syTaskMalloc(arg0->unk24, 0x8);
		sp44[i][2].length = arg0->unk24;
		sp44[i][3].start  = syTaskMalloc(arg0->unk28, 0x8);
		sp44[i][3].length = arg0->unk28;
	}
	syTaskSetDLBuffer(sp44);

	for (i = 0; i < sSYTaskCount; i++)
	{
		syMallocInit(&gSYTaskGraphicsHeap, 0x10002, syTaskMalloc(arg0->unk2C, 8), arg0->unk2C);
		sSYTaskDefaultGraphicsHeap[i].id    = gSYTaskGraphicsHeap.id;
		sSYTaskDefaultGraphicsHeap[i].start = gSYTaskGraphicsHeap.start;
		sSYTaskDefaultGraphicsHeap[i].end   = gSYTaskGraphicsHeap.end;
		sSYTaskDefaultGraphicsHeap[i].ptr   = gSYTaskGraphicsHeap.ptr;
	}
	arg0->unk30 = 2;

	if (arg0->unk34 == 0)
		arg0->unk34 = 0x1000;

	func_80004CB4(arg0->unk30, syTaskMalloc(arg0->unk34, 16), arg0->unk34);
	dpSetScissorFunction(arg0->proc_lights);
	D_80046668 = arg0->proc_controller;
	enable_auto_contread((uintptr_t)schedule_contread != (uintptr_t)D_80046668 ? TRUE : FALSE);

	D_8003B6E4 = dSYGtlFrameDrawCount = 0;

	if (arg1 != NULL)
		arg1();

	// L800067B4
	func_80005DA0(&D_800465F8);
}

// 800067E4
void unref_800067E4(syTaskBufferSetup *arg)
{
	syTaskInitGeneralHeap(arg->arena_start, arg->arena_size);
	D_800465F8.fn08 = func_800062B4;
	D_800465F8.fn10 = func_800062EC;
	func_80006548(arg, NULL);
}

// 8000683C
void gsGTLSceneInit(syTaskSetup *gtl_desc)
{
	OMSetup omsetup;

	syTaskInitGeneralHeap(gtl_desc->setup.arena_start, gtl_desc->setup.arena_size);

	omsetup.gobjthreads        = syTaskMalloc(sizeof(GObjThread) * gtl_desc->gobjthreads_num, 0x8);
	omsetup.gobjthreads_num    = gtl_desc->gobjthreads_num;
	omsetup.thread_stack_size = gtl_desc->threadstack_size;

	if (gtl_desc->threadstack_size != 0)
		omsetup.threadstacks = syTaskMalloc((gtl_desc->threadstack_size + offsetof(OMThreadStackNode, stack)) * gtl_desc->threadstacks_num, 0x8);
	else
		omsetup.threadstacks = NULL;
	
	omsetup.num_stacks = gtl_desc->threadstacks_num;
	omsetup.unk_omsetup_0x14   = gtl_desc->unk4C;

	omsetup.gobjprocs     = syTaskMalloc(sizeof(GObjProcess) * gtl_desc->gobjprocs_num, 0x4);
	omsetup.gobjprocs_num = gtl_desc->gobjprocs_num;

	omsetup.gobjs     = syTaskMalloc(gtl_desc->gobj_size * gtl_desc->gobjs_num, 0x8);
	omsetup.gobjs_num = gtl_desc->gobjs_num;
	omsetup.gobj_size = gtl_desc->gobj_size;

	omsetup.ommtxes     = syTaskMalloc(sizeof(OMMtx) * gtl_desc->num_ommtxes, 0x8);
	omsetup.num_ommtxes = gtl_desc->num_ommtxes;

	gcSetMatrixProcess(gtl_desc->unk60);
	omsetup.proc_eject = gtl_desc->proc_eject;

	omsetup.aobjs    = syTaskMalloc(sizeof(AObj) * gtl_desc->aobjs_num, 0x4);
	omsetup.aobjs_num = gtl_desc->aobjs_num;

	omsetup.mobjs     = syTaskMalloc(sizeof(MObj) * gtl_desc->mobjs_num, 0x4);
	omsetup.mobjs_num = gtl_desc->mobjs_num;

	omsetup.dobjs     = syTaskMalloc(gtl_desc->dobj_size * gtl_desc->dobjs_num, 0x8);
	omsetup.dobjs_num = gtl_desc->dobjs_num;
	omsetup.dobj_size = gtl_desc->dobj_size;

	omsetup.sobjs     = syTaskMalloc(gtl_desc->sobj_size * gtl_desc->sobjs_num, 0x8);
	omsetup.sobjs_num = gtl_desc->sobjs_num;
	omsetup.sobj_size = gtl_desc->sobj_size;

	omsetup.cameras     = syTaskMalloc(gtl_desc->camera_size * gtl_desc->cameras_num, 0x8);
	omsetup.cameras_num = gtl_desc->cameras_num;
	omsetup.camera_size = gtl_desc->camera_size;

	gcSetupObjectManager(&omsetup);

	D_800465F8.fn08 = func_80006350;
	D_800465F8.fn10 = func_800063A0;

	func_80006548(&gtl_desc->setup, gtl_desc->proc_start);
}

// 80006A8C
void unref_80006A8C(u16 arg0, u16 arg1)
{
	D_800454B8 = arg0;
	D_800454BA = arg1;
}

// 80006AA8
void unref_80006AA8()
{
	if (D_800454BC != 2)
		D_800454BC = 1;
}

// 80006AD0
s32 unref_80006AD0()
{
	if (D_800454BC == 2)
		return 1;
	else
		return 0;
}

// 80006AF8
void unref_80006AF8()
{
	osSendMesg(&D_800454C8, NULL, OS_MESG_NOBLOCK);
}

// 80006B24
void unref_80006B24(s32 arg0)
{
	if ((arg0 == 1) || (arg0 == 2))
		sSYTaskCount = arg0;
}

// 80006B44
s32 unref_80006B44(s32 arg0)
{
	if ((arg0 == 1) || (arg0 == 2))
	{
		if ((&D_80046634)[arg0] == 0)
			return 1;
	}
	return 0;
}

// 80006B80
void func_80006B80()
{
	s32 i;
	s32 j;

	for (i = 0; i < 2; i++)
	{
		D_80046558[i] = NULL;
		D_80046550[i] = NULL;
		sDObjTasks[i] = NULL;
		D_80046560[i] = NULL;
	}
	D_80046620 = 0;
	D_80046624 = D_80046626 = 0;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sSYTaskDLBuffers[i][j].start  = NULL;
			sSYTaskDLBuffers[i][j].length = 0;
		}
	}
	D_800454E8 = NULL;
	func_800048D0(NULL);

	scAddClient(&D_800454E0, &D_800454A0, D_80045490, ARRAY_COUNT(D_80045490));
	osCreateMesgQueue(&D_80045500, D_800454F0, ARRAY_COUNT(D_800454F0));
	osCreateMesgQueue(&D_80045520, D_80045518, ARRAY_COUNT(D_80045518));
	D_800454B8 = D_800454BA = 1;
	osCreateMesgQueue(&D_800454C8, D_800454C0, ARRAY_COUNT(D_800454C0));
	D_800454BC = 2;
}