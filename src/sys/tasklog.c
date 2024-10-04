#include "common.h"
#include <sys/tasklog.h>

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

typedef enum syTasklogStatus
{
	nSYTasklogStatusDefault,
	nSYTasklogStatusLoadScene,
	nSYTasklogStatusUnk2

} syTasklogStatus;

// externs
extern void syTasklogCheckBufferLengths();

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
	/* 0x08 */ void (*func_update)(struct FnBundle *);
	/* 0x0C */ void (*fn0C)();
	/* 0x10 */ void (*func_draw)(struct FnBundle *);

} FnBundle; // size == 0x14 (D_800465F8)

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8003B6E0
s32 D_8003B6E0 = 0;

// 0x8003B6E4
u32 sSYTasklogUpdateCount = 0;

// 0x8003B6E8
u32 dSYTasklogFrameDrawCount = 0;

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

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80045480
s32 sSYTasklogPad0x80045480[4];

// 0x80045490
OSMesg sSYTasklogGameTicMesgs[4];

// 0x800454A0
OSMesgQueue sSYTasklogGameTicMesgQueue;

// 0x800454B8
u16 sSYTasklogUpdateInterval;

// 0x800454BA
u16 sSYTasklogFrameDrawInterval;

// 0x800454BC
u32 D_800454BC;

// 0x800454C0
OSMesg D_800454C0[1];

// 0x800454C8
OSMesgQueue D_800454C8;

// 0x800454E0
SCClient sSYTasklogClient;

// 0x800454E8
unsigned int *sSYTasklogSegmentFBase; // pointer to Gfx.w1 (segment base addr?)

// 0x800454F0
OSMesg D_800454F0[3];

// 0x80045500
OSMesgQueue D_80045500; // sctask end? or for all tasks?

// 0x800045518
OSMesg sSYTasklogResetMesgs[1];

// 0x80045520
OSMesgQueue sSYTasklogResetMesgQueue;

// 0x80045538
u64 sSYTasklogDramStack[SP_DRAM_STACK_SIZE64 + 1];

// 0x80045940
u64 sSYTasklogYieldData[OS_YIELD_DATA_SIZE / sizeof(u64) + 1];

// 0x80046548
SCTaskGfx *sSYTasklogGfxBuffersStart[2];

// 0x80046550
SCTaskGfx *sSYTasklogGfxBuffersCurrent[2];

// 0x80046558
SCTaskGfx *sSYTasklogGfxBuffersEnd[2];

// 0x80046560
SCTaskGfxEnd *sSYTasklogGfxEndBuffers[2];

// 0x80046568
SCTaskVi *sSYTasklogViBuffers[2];

// 0x80046570
syTasklogDLBuffer sSYTasklogDLBuffers[2][4];

// 0x800465B0
Gfx *gSYTasklogDLHeads[4];

// 0x800465C0
Gfx *sSYTasklogDLBranches[4];

// 0x800465D0 - Writing 1 to this will load the screen at scene_current (gSceneData).
s32 sSYTasklogStatus;

// 0x800465D4
s32 D_800465D4;

// 0x800465D8
syMallocRegion gSYTasklogGraphicsHeap;

// 0x800465E8
syMallocRegion gSYTasklogGeneralHeap;

// 0x800465F8
FnBundle D_800465F8;

// 0x8004660C
u32 sSYTasklogTimeStart;

// 0x80046610
u32 sSYTasklogUpdateDeltaTime;

// 0x80046614
u32 sSYTasklogFrameDeltaTime;

// 0x80046618
void *sSYTasklogRdpOutputBuffer; // u64 *?

// 0x8004661C
size_t sSYTasklogRdpOutputBufferSize;   // size of sSYTasklogRdpOutputBuffer

// 0x80046620
sb32 sSYTasklogIsNoNearClipping;

// 0x80046624
u16 D_80046624;

// 0x80046626
u16 D_80046626; // ucode idx?

// 0x80046628
u16 D_80046628;

// 0x8004662C
Gfx *sSYTasklogRdpResetDL;

// 0x80046630 - offset into sSYTasklogDefaultGraphicsHeap and sSYTasklogGfxBuffersStart
s32 gSYTasklogTaskID;

// 0x80046634
s32 D_80046634;

// 0x80046638
s32 D_80046638[2];

// 0x80046640
s32 sSYTasklogCount;

// 0x80046644
UNUSED s32 unref80046644;

// 0x80046648
syMallocRegion sSYTasklogDefaultGraphicsHeap[2];

// 0x80046668
void (*D_80046668)(void *); // takes function bundle struct?

// 0x8004666C
SCTaskCallback D_8004666C;  // function pointer?

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 800048D0
void func_800048D0(SCTaskGfxCallback arg0)
{
	if (arg0 != NULL)
	{
		D_8004666C = (void*)arg0;
	}
	else D_8004666C = (void*)scCheckGfxTaskDefault;
}

// 800048F8
void func_800048F8(Gfx **dl)
{
	sSYTasklogSegmentFBase = &dl[0]->words.w1;
	gSPSegment(dl[0]++, G_MWO_SEGMENT_F, 0x00000000);
}

// 80004928
void unref_80004928(sb32 arg0)
{
	sSYTasklogIsNoNearClipping = arg0;
}

// 80004934
void unref_80004934(u16 arg0, u16 arg1)
{
	D_80046624 = arg0;
	D_80046626 = arg1;
}

// 80004950
void syTasklogInitGeneralHeap(void *start, u32 size)
{
	syMallocInit(&gSYTasklogGeneralHeap, 0x10000, start, size);
}

// 80004980
void* syTasklogMalloc(size_t size, u32 alignment) // alloc_with_alignment
{
	return syMallocSet(&gSYTasklogGeneralHeap, size, alignment);
}

// 800049B0
void syTasklogResetGraphicsHeap(void) // reset gSYTasklogGraphicsHeap allocator
{
	gSYTasklogGraphicsHeap.id    = sSYTasklogDefaultGraphicsHeap[gSYTasklogTaskID].id;
	gSYTasklogGraphicsHeap.start = sSYTasklogDefaultGraphicsHeap[gSYTasklogTaskID].start;
	gSYTasklogGraphicsHeap.end   = sSYTasklogDefaultGraphicsHeap[gSYTasklogTaskID].end;
	gSYTasklogGraphicsHeap.ptr   = sSYTasklogDefaultGraphicsHeap[gSYTasklogTaskID].ptr;

	syMallocReset(&gSYTasklogGraphicsHeap);
}

// 80004A0C
void syTasklogSetDLBuffer(syTasklogDLBuffer (*src)[4])
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sSYTasklogDLBuffers); i++)
	{
		sSYTasklogDLBuffers[i][0] = src[i][0];
		sSYTasklogDLBuffers[i][1] = src[i][1];
		sSYTasklogDLBuffers[i][2] = src[i][2];
		sSYTasklogDLBuffers[i][3] = src[i][3];
	}
}

// 80004AB0
void func_80004AB0()
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(gSYTasklogDLHeads) + ARRAY_COUNT(sSYTasklogDLBranches) + ARRAY_COUNT(sSYTasklogDLBuffers[0])) / 3; i++)
	{
		gSYTasklogDLHeads[i] = sSYTasklogDLBranches[i] = sSYTasklogDLBuffers[gSYTasklogTaskID][i].start;
	}
	for (i = 0; i < (ARRAY_COUNT(gSYTasklogDLHeads) + ARRAY_COUNT(sSYTasklogDLBranches) + ARRAY_COUNT(sSYTasklogDLBuffers[0])) / 3; i++)
	{
		if (sSYTasklogDLBuffers[gSYTasklogTaskID][i].length != 0)
		{
			sSYTasklogRdpResetDL = gSYTasklogDLHeads[i];
			dpResetSettings(&gSYTasklogDLHeads[i]);
			gSPEndDisplayList(gSYTasklogDLHeads[i]++);
			sSYTasklogDLBranches[i] = gSYTasklogDLHeads[i];
			break;
		}
	}
	D_80046628 = 0;
}

// 80004B9C
void syTasklogCheckBufferLengths(void)
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(gSYTasklogDLHeads) + ARRAY_COUNT(sSYTasklogDLBranches) + ARRAY_COUNT(sSYTasklogDLBuffers[0])) / 3; i++)
	{
		if (sSYTasklogDLBuffers[gSYTasklogTaskID][i].length + (uintptr_t)sSYTasklogDLBuffers[gSYTasklogTaskID][i].start < (uintptr_t)gSYTasklogDLHeads[i])
		{
			syErrorPrintf("gtl : DLBuffer over flow !  kind = %d  vol = %d byte\n", i, (uintptr_t)gSYTasklogDLHeads[i] - (uintptr_t)sSYTasklogDLBuffers[gSYTasklogTaskID][i].start);
			while (TRUE);
		}
	}

	if ((uintptr_t)gSYTasklogGraphicsHeap.end < (uintptr_t)gSYTasklogGraphicsHeap.ptr)
	{
		syErrorPrintf("gtl : DynamicBuffer over flow !  %d byte\n", (uintptr_t)gSYTasklogGraphicsHeap.ptr - (uintptr_t)gSYTasklogGraphicsHeap.start);
		while (TRUE);
	}
}

// 80004C5C
void func_80004C5C(void *arg0, u32 buffer_size)
{
	SCTaskRDPBuffer t;

	t.info.type     = nSYScheduleTaskRdpBuffer;
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
	sSYTasklogRdpOutputBuffer = arg1;
	sSYTasklogRdpOutputBufferSize = buffer_size;

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
SCTaskGfx* func_80004D2C(void)
{
	SCTaskGfx *temp;

	if (sSYTasklogGfxBuffersStart[gSYTasklogTaskID] == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfx\n");
		while (TRUE);
	}

	if (sSYTasklogGfxBuffersCurrent[gSYTasklogTaskID] == sSYTasklogGfxBuffersEnd[gSYTasklogTaskID])
	{
		syErrorPrintf("gtl : couldn\'t get SCTaskGfx\n");
		while (TRUE);
	}

	temp = sSYTasklogGfxBuffersCurrent[gSYTasklogTaskID]++;

	return temp;
}

// 80004DB4
void func_80004DB4(SCTaskGfx *arg0, s32 arg1, SCTaskGfxEnd *arg2, SCTaskVi *arg3)
{
	s32 i;

	for (i = 0; i < sSYTasklogCount; i++)
	{
		sSYTasklogGfxBuffersStart[i] = (SCTaskGfx*) ((uintptr_t)arg0 + (arg1 * sizeof(SCTaskGfx)) * i);
		sSYTasklogGfxBuffersCurrent[i] = (SCTaskGfx*) ((uintptr_t)arg0 + (arg1 * sizeof(SCTaskGfx)) * i);
		sSYTasklogGfxBuffersEnd[i] = (SCTaskGfx*) ((uintptr_t)arg0 + (arg1 * sizeof(SCTaskGfx)) * (i + 1));

		sSYTasklogGfxEndBuffers[i] = (SCTaskGfxEnd*) ((uintptr_t)arg2 + (i * sizeof(SCTaskGfxEnd)));
		sSYTasklogViBuffers[i] = (SCTaskVi*) ((uintptr_t)arg3 + (i * sizeof(SCTaskVi)));
	}
}

// 80004E90
void syTasklogScheduleGfxEnd(SCTaskGfxEnd *mesg, void *framebuffer, u32 retVal, OSMesgQueue *mq)
{
	mesg->info.type 	= nSYScheduleTaskGfxEnd;
	mesg->info.priority = 100;
	mesg->info.fnCheck  = NULL;
	mesg->info.mq       = mq;
	mesg->info.retVal   = retVal;
	mesg->fb            = framebuffer;
	mesg->task_id       = gSYTasklogTaskID;

	osSendMesg(&scTaskQueue, (OSMesg)mesg, OS_MESG_NOBLOCK);
}

// 80004EFC
void func_80004EFC()
{
	SCTaskGfxEnd *mesg = sSYTasklogGfxEndBuffers[gSYTasklogTaskID];

	if (mesg == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE);
	}

	syTasklogScheduleGfxEnd(mesg, (void*)-1, gSYTasklogTaskID, &D_80045500);
	sSYTasklogGfxBuffersCurrent[gSYTasklogTaskID] = sSYTasklogGfxBuffersStart[gSYTasklogTaskID];
}

// 80004F78
void func_80004F78()
{
	OSMesg recv;
	SCTaskGfxEnd *mesg = sSYTasklogGfxEndBuffers[gSYTasklogTaskID];

	if (mesg == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE);
	}

	syTasklogScheduleGfxEnd(mesg, NULL, gSYTasklogTaskID, &sSYTasklogResetMesgQueue);
	osRecvMesg(&sSYTasklogResetMesgQueue, &recv, OS_MESG_BLOCK);
	sSYTasklogGfxBuffersCurrent[gSYTasklogTaskID] = sSYTasklogGfxBuffersStart[gSYTasklogTaskID];
	syTasklogResetGraphicsHeap();
	func_80004AB0();
}

// 80005018
void func_80005018(SCTaskGfx *t, s32 *arg1, u32 ucode_id, s32 arg3, u64 *arg4, u64 *arg5, u32 arg6)
{
	gsUcode *ucode;
	// ...why?
	s32 two = 2;

	t->info.type = nSYScheduleTaskGfx;
	t->info.priority = 50;

	if (sSYTasklogSegmentFBase != NULL)
	{
		t->info.fnCheck = D_8004666C;
		t->unk68     = (void*)sSYTasklogSegmentFBase;
		sSYTasklogSegmentFBase   = NULL;
	}
	else
	{
		t->info.fnCheck = NULL;
		t->unk68     = NULL;
	}
	t->fb = arg1;
	t->framebuffer_id = D_800465D4;

	if (arg1 != 0)
	{
		t->info.mq = &D_80045500;
		t->info.retVal = arg3;
	}
	else
		t->info.mq = NULL;

	t->info.unk18 = two;
	t->task_id     = gSYTasklogTaskID;
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
	t->task.t.dram_stack      = OS_DCACHE_ROUNDUP_ADDR(&sSYTasklogDramStack);
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
	t->task.t.yield_data_ptr  = OS_DCACHE_ROUNDUP_ADDR(&sSYTasklogYieldData);
	t->task.t.yield_data_size = OS_YIELD_DATA_SIZE;
	osWritebackDCacheAll();
	osSendMesg(&scTaskQueue, (OSMesg)t, OS_MESG_NOBLOCK);
}

// 800051E4
s32 syTasklogGetUcodeID()
{
	s32 o = (D_80046628 != 0) ? D_80046626 : D_80046624;

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
	s32 ucode_id;

	if (arg0 == 0)
	{
		ucode_id = D_80046624;

		if (sSYTasklogIsNoNearClipping == TRUE)
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
	else ucode_id = syTasklogGetUcodeID();

	switch (ucode_id)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			func_80005018((void*)func_80004D2C(), 0, ucode_id, gSYTasklogTaskID, arg1, NULL, 0);
			break;

		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
			func_80005018((void*)func_80004D2C(), 0, ucode_id, gSYTasklogTaskID, arg1, sSYTasklogRdpOutputBuffer, sSYTasklogRdpOutputBufferSize);
			break;
	}
}

// 80005344
void syTasklogAppendGfxUcodeLoad(Gfx **dl, u32 ucode_id)
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
		gSPDisplayList(dl[0]++, sSYTasklogRdpResetDL);
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

	for (i = 0; i < (ARRAY_COUNT(gSYTasklogDLHeads) + ARRAY_COUNT(sSYTasklogDLBranches)) / 2; i++)
	{
		diffs >>= 1;

		if (gSYTasklogDLHeads[i] != sSYTasklogDLBranches[i])
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
				syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[0], syTasklogGetUcodeID());
				gSPBranchList(gSYTasklogDLHeads[0]++, sSYTasklogDLBranches[2]);
			}
			else if (diffs & 0x2)
			{
				if (D_80046628 != 0)
				{
					syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[0], D_80046624);
				}
				gSPBranchList(gSYTasklogDLHeads[0]++, sSYTasklogDLBranches[1]);
			}
			else if (diffs & 0x8)
			{
				syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[0], syTasklogGetUcodeID());
				gSPBranchList(gSYTasklogDLHeads[0]++, sSYTasklogDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYTasklogDLHeads[0]++);
				gSPEndDisplayList(gSYTasklogDLHeads[0]++);
			}
		}
		if (diffs & 0x4)
		{
			if (diffs & 0x2)
			{
				syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[2], D_80046624);
				gSPBranchList(gSYTasklogDLHeads[2]++, sSYTasklogDLBranches[1]);
			}
			else if (diffs & 0x8)
			{
				gSPBranchList(gSYTasklogDLHeads[2]++, sSYTasklogDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYTasklogDLHeads[2]++);
				gSPEndDisplayList(gSYTasklogDLHeads[2]++);
			}
		}
		if (diffs & 0x2)
		{
			if (diffs & 0x8)
			{
				syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[0], syTasklogGetUcodeID());
				gSPBranchList(gSYTasklogDLHeads[1]++, sSYTasklogDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYTasklogDLHeads[1]++);
				gSPEndDisplayList(gSYTasklogDLHeads[1]++);
			}
		}
		if (diffs & 0x8)
		{
			gDPFullSync(gSYTasklogDLHeads[3]++);
			gSPEndDisplayList(gSYTasklogDLHeads[3]++);
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
		cmdPtr = gSYTasklogDLHeads[dl_id];
		gSPDisplayList(gSYTasklogDLHeads[dl_id]++, sSYTasklogRdpResetDL);
		gSPBranchList(gSYTasklogDLHeads[dl_id]++, sSYTasklogDLBranches[dl_id]);
		func_80005240(a0, (u64*)cmdPtr);

		sSYTasklogDLBranches[0] = gSYTasklogDLHeads[0];
		sSYTasklogDLBranches[2] = gSYTasklogDLHeads[2];
		sSYTasklogDLBranches[1] = gSYTasklogDLHeads[1];
		sSYTasklogDLBranches[3] = gSYTasklogDLHeads[3];
	}
	syTasklogCheckBufferLengths();
}

// 800057C8
void func_800057C8()
{
	s32 i;
	s32 diffs;

	syTasklogCheckBufferLengths();

	diffs = 0;

	for (i = 0; i < (ARRAY_COUNT(gSYTasklogDLHeads) + ARRAY_COUNT(sSYTasklogDLBranches)) / 2; i++)
	{
		diffs >>= 1;

		if (gSYTasklogDLHeads[i] != sSYTasklogDLBranches[i])
		{
			diffs |= 8;
		}
	}
	if (diffs != 0)
	{
		if (diffs & 1)
		{
			if (diffs & 4)
			{
				syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[0], syTasklogGetUcodeID());
				gSPBranchList(gSYTasklogDLHeads[0]++, sSYTasklogDLBranches[2]);
			}
			else if (diffs & 2)
			{
				if (D_80046628 != 0)
					syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[0], D_80046624);
				gSPBranchList(gSYTasklogDLHeads[0]++, sSYTasklogDLBranches[1]);
			}
			else if (diffs & 8)
			{
				syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[0], syTasklogGetUcodeID());
				gSPBranchList(gSYTasklogDLHeads[0]++, sSYTasklogDLBranches[3]);
			}
		}
		if (diffs & 4)
		{
			if (diffs & 2)
			{
				syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[2], D_80046624);
				gSPBranchList(gSYTasklogDLHeads[2]++, sSYTasklogDLBranches[1]);
			}
			else if (diffs & 8)
			{
				gSPBranchList(gSYTasklogDLHeads[2]++, sSYTasklogDLBranches[3]);
			}
			else
			{
				syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[2], D_80046624);
				gSPBranchList(gSYTasklogDLHeads[2]++, gSYTasklogDLHeads[0]);
			}
			sSYTasklogDLBranches[2] = gSYTasklogDLHeads[2];
		}
		if (diffs & 2)
		{
			if (diffs & 8)
			{
				syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[0], syTasklogGetUcodeID());
				gSPBranchList(gSYTasklogDLHeads[1]++, sSYTasklogDLBranches[3]);
			}
			else
			{
				if (D_80046628 != 0)
					syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[1], D_80046624);
				gSPBranchList(gSYTasklogDLHeads[1]++, gSYTasklogDLHeads[0]);
			}
			sSYTasklogDLBranches[1] = gSYTasklogDLHeads[1];
		}
		if (diffs & 8)
		{
			syTasklogAppendGfxUcodeLoad(&gSYTasklogDLHeads[3], D_80046624);
			gSPBranchList(gSYTasklogDLHeads[3]++, gSYTasklogDLHeads[0]);
			sSYTasklogDLBranches[3] = gSYTasklogDLHeads[3];
		}
	}
	D_80046628 = 0;
	syTasklogCheckBufferLengths();
}

// 80005AE4
u32 syTasklogSwitchContext(s32 arg0)
{
	s32 msg;
	s32 i;

	while (osRecvMesg(&D_80045500, (OSMesg*)&msg, OS_MESG_NOBLOCK) != -1)
	{
		D_80046638[msg] = 0;
	}
	do
	{
		for (i = 0; i < sSYTasklogCount; i++)
		{
			if (D_80046638[i] == 0)
			{
				gSYTasklogTaskID = i;
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

	info.type = nSYScheduleTaskNoOp;
	info.priority = 50;
	osCreateMesgQueue(&mq, msgs, ARRAY_COUNT(msgs));
	info.fnCheck  = func_80000B54;
	info.retVal = 1;
	info.mq = &mq;

	osSendMesg(&scTaskQueue, (OSMesg)&info, OS_MESG_NOBLOCK);
	osRecvMesg(&mq, NULL, OS_MESG_BLOCK);
}

// 80005C74
void syTasklogSetLoadScene(void)
{
	sSYTasklogStatus = nSYTasklogStatusLoadScene;
}

// 80005C84
void unref_80005C84(s32 arg0)
{
	sSYTasklogStatus = nSYTasklogStatusUnk2;
	D_800465D4 = arg0;
}

// 80005C9C
sb32 syTasklogCheckBreakLoop(void)
{
	SCTaskInfo info;

	switch (sSYTasklogStatus)
	{
	case nSYTasklogStatusLoadScene:
		return TRUE;

	case nSYTasklogStatusUnk2:
		if (D_80044FA4_407B4 != 0)
		{
			info.type = SC_TASK_TYPE_11;
			info.priority = 100;
			func_80000970(&info);

			return TRUE;
		}
		else return FALSE; // return 0;

	default:
		return FALSE;
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
	{
		continue;
	}
	while (osRecvMesg(&sSYTasklogResetMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
	{
		continue;
	}
	while (osRecvMesg(&sSYTasklogGameTicMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
	{
		continue;
	}
	sSYTasklogStatus = nSYTasklogStatusDefault;
	D_800465D4 = -1;
	gSYTasklogTaskID = 1;
	D_80044FA4_407B4 = 0;

	for (i = 0; i < ARRAY_COUNT(D_80046638); i++)
	{
		D_80046638[i] = 0;
	}
	if (arg0->unk00 & 1)
	{
		while (TRUE)
		{
			func_80005D10();
			syMainVerifyStackProbes();

			for (i = 0; i < sSYTasklogUpdateInterval; i++)
			{
				osRecvMesg(&sSYTasklogGameTicMesgQueue, NULL, OS_MESG_BLOCK);
			}
			while (osRecvMesg(&sSYTasklogGameTicMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
			{
				continue;
			}
			sSYTasklogTimeStart = osGetCount();

			arg0->func_update(arg0);

			sSYTasklogUpdateCount++; // += 1

			sSYTasklogUpdateDeltaTime = (osGetCount() - sSYTasklogTimeStart) / 2971; // what is this constant?

			if (syTasklogCheckBreakLoop() != FALSE)
			{
				break;
			}
			if (sSYTasklogUpdateCount % sSYTasklogFrameDrawInterval == 0)
			{
				syTasklogSwitchContext(0);
				sSYTasklogTimeStart = osGetCount();

				arg0->func_draw(arg0);

				dSYTasklogFrameDrawCount++; // += 1
				sSYTasklogFrameDeltaTime = (osGetCount() - sSYTasklogTimeStart) / 2971;

				if (syTasklogCheckBreakLoop() != FALSE)
				{
					break;
				}
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

			for (i = 0; i < sSYTasklogUpdateInterval; i++)
			{
				osRecvMesg(&sSYTasklogGameTicMesgQueue, NULL, OS_MESG_BLOCK);
			}
			while (osRecvMesg(&sSYTasklogGameTicMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
			{
				continue;
			}
			sSYTasklogTimeStart = osGetCount();

			arg0->func_update(arg0);

			sSYTasklogUpdateCount++;

			sSYTasklogUpdateDeltaTime = (osGetCount() - sSYTasklogTimeStart) / 2971;

			if (syTasklogCheckBreakLoop() != FALSE)
			{
				break;
			}
			if ((sSYTasklogUpdateCount % sSYTasklogFrameDrawInterval == 0) && (syTasklogSwitchContext(1) != FALSE))
			{
				sSYTasklogTimeStart = osGetCount();

				arg0->func_draw(arg0);

				dSYTasklogFrameDrawCount++;
				sSYTasklogFrameDeltaTime = (osGetCount() - sSYTasklogTimeStart) / 2971;

				if (syTasklogCheckBreakLoop() != FALSE)
				{
					break;
				}
			}
		}
	}
	func_80005BFC();
	while (osRecvMesg(&D_80045500, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	while (osRecvMesg(&sSYTasklogResetMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	while (osRecvMesg(&sSYTasklogGameTicMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
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
	syTasklogResetGraphicsHeap();
	func_80004AB0();
	self->fn0C();
	func_800053CC();
	func_80006F5C(sSYTasklogViBuffers[gSYTasklogTaskID]);
	func_80004EFC();
}

// 80006350
void func_80006350(FnBundle *self)
{
	D_80046668(self);
	self->fn04();

	if (syTasklogCheckBreakLoop() != FALSE)
	{
		gcEjectAll();
	}
}

// 800063A0
void func_800063A0(FnBundle *self)
{
	syTasklogResetGraphicsHeap();
	func_80004AB0();

	self->fn0C();

	func_800053CC();
	func_80006F5C(sSYTasklogViBuffers[gSYTasklogTaskID]);
	func_80004EFC();

	if (syTasklogCheckBreakLoop() != FALSE)
	{
		gcEjectAll();
	}
}

// 8000641C
void unref_8000641C(GObj *gobj)
{
	s32 idx;
	SCTaskGfxEnd *task;

	syTasklogSwitchContext(0);
	syTasklogResetGraphicsHeap();
	func_80004AB0();
	gobj->proc_display(gobj);
	func_800053CC();

	task = sSYTasklogGfxEndBuffers[gSYTasklogTaskID];

	if (task == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE);
	}
	syTasklogScheduleGfxEnd(task, NULL, gSYTasklogTaskID, &D_80045500);
	sSYTasklogGfxBuffersCurrent[gSYTasklogTaskID] = sSYTasklogGfxBuffersStart[gSYTasklogTaskID];

	do
	{
		osRecvMesg(&D_80045500, (OSMesg*)&idx, OS_MESG_BLOCK);
		D_80046638[idx] = 0;
	}
	while (D_80046638[gSYTasklogTaskID] != 0);

	dSYTasklogFrameDrawCount++; // += 1
}

// 80006548
void func_80006548(syTasklogBufferSetup *arg0, void (*arg1)())
{
	s32 i;
	syTasklogDLBuffer sp44[2][4];

	sSYTasklogCount = arg0->contexts_num;
	D_800465F8.unk00 = arg0->unk00;
	D_800465F8.fn04  = arg0->func_update;
	D_800465F8.fn0C  = arg0->func_draw;

	func_80004DB4
	(
		syTasklogMalloc(arg0->unk14 * sizeof(DObj) * sSYTasklogCount, 0x8),
		arg0->unk14,
		syTasklogMalloc(sizeof(SCTaskGfxEnd) * sSYTasklogCount, 0x8),
		syTasklogMalloc(sizeof(SCTaskVi) * sSYTasklogCount, 0x8)
	);
	for (i = 0; i < sSYTasklogCount; i++)
	{
		sp44[i][0].start  = syTasklogMalloc(arg0->dl_buffer0_size, 0x8);
		sp44[i][0].length = arg0->dl_buffer0_size;
		sp44[i][1].start  = syTasklogMalloc(arg0->dl_buffer1_size, 0x8);
		sp44[i][1].length = arg0->dl_buffer1_size;
		sp44[i][2].start  = syTasklogMalloc(arg0->dl_buffer2_size, 0x8);
		sp44[i][2].length = arg0->dl_buffer2_size;
		sp44[i][3].start  = syTasklogMalloc(arg0->dl_buffer3_size, 0x8);
		sp44[i][3].length = arg0->dl_buffer3_size;
	}
	syTasklogSetDLBuffer(sp44);

	for (i = 0; i < sSYTasklogCount; i++)
	{
		syMallocInit(&gSYTasklogGraphicsHeap, 0x10002, syTasklogMalloc(arg0->graphics_arena_size, 0x8), arg0->graphics_arena_size);
		sSYTasklogDefaultGraphicsHeap[i].id    = gSYTasklogGraphicsHeap.id;
		sSYTasklogDefaultGraphicsHeap[i].start = gSYTasklogGraphicsHeap.start;
		sSYTasklogDefaultGraphicsHeap[i].end   = gSYTasklogGraphicsHeap.end;
		sSYTasklogDefaultGraphicsHeap[i].ptr   = gSYTasklogGraphicsHeap.ptr;
	}
	arg0->unk30 = 2;

	if (arg0->rdp_output_buffer_size == 0)
	{
		arg0->rdp_output_buffer_size = 0x1000;
	}
	func_80004CB4(arg0->unk30, syTasklogMalloc(arg0->rdp_output_buffer_size, 0x10), arg0->rdp_output_buffer_size);
	dpSetScissorFunction(arg0->func_lights);
	D_80046668 = arg0->func_controller;
	enable_auto_contread((uintptr_t)schedule_contread != (uintptr_t)D_80046668 ? TRUE : FALSE);

	sSYTasklogUpdateCount = dSYTasklogFrameDrawCount = 0;

	if (arg1 != NULL)
		arg1();

	// L800067B4
	func_80005DA0(&D_800465F8);
}

// 800067E4
void unref_800067E4(syTasklogBufferSetup *arg)
{
	syTasklogInitGeneralHeap(arg->arena_start, arg->arena_size);
	D_800465F8.func_update = func_800062B4;
	D_800465F8.func_draw = func_800062EC;
	func_80006548(arg, NULL);
}

// 8000683C
void syTasklogInit(syTasklogSetup *ts)
{
	OMSetup omsetup;

	syTasklogInitGeneralHeap(ts->buffer_setup.arena_start, ts->buffer_setup.arena_size);

	omsetup.gobjthreads      = syTasklogMalloc(sizeof(GObjThread) * ts->gobjthreads_num, 0x8);
	omsetup.gobjthreads_num  = ts->gobjthreads_num;
	omsetup.threadstack_size = ts->threadstack_size;

	if (ts->threadstack_size != 0)
	{
		omsetup.threadstacks = syTasklogMalloc((ts->threadstack_size + offsetof(OMThreadStackNode, stack)) * ts->threadstacks_num, 0x8);
	}
	else omsetup.threadstacks = NULL;
	
	omsetup.num_stacks = ts->threadstacks_num;
	omsetup.unk_omsetup_0x14 = ts->unk4C;

	omsetup.gobjprocs     = syTasklogMalloc(sizeof(GObjProcess) * ts->gobjprocs_num, 0x4);
	omsetup.gobjprocs_num = ts->gobjprocs_num;

	omsetup.gobjs     = syTasklogMalloc(ts->gobj_size * ts->gobjs_num, 0x8);
	omsetup.gobjs_num = ts->gobjs_num;
	omsetup.gobj_size = ts->gobj_size;

	omsetup.ommtxes     = syTasklogMalloc(sizeof(OMMtx) * ts->ommtxs_num, 0x8);
	omsetup.ommtxs_num = ts->ommtxs_num;

	gcSetMatrixProcess(ts->unk60);
	omsetup.proc_eject = ts->proc_eject;

	omsetup.aobjs     = syTasklogMalloc(sizeof(AObj) * ts->aobjs_num, 0x4);
	omsetup.aobjs_num = ts->aobjs_num;

	omsetup.mobjs     = syTasklogMalloc(sizeof(MObj) * ts->mobjs_num, 0x4);
	omsetup.mobjs_num = ts->mobjs_num;

	omsetup.dobjs     = syTasklogMalloc(ts->dobj_size * ts->dobjs_num, 0x8);
	omsetup.dobjs_num = ts->dobjs_num;
	omsetup.dobj_size = ts->dobj_size;

	omsetup.sobjs     = syTasklogMalloc(ts->sobj_size * ts->sobjs_num, 0x8);
	omsetup.sobjs_num = ts->sobjs_num;
	omsetup.sobj_size = ts->sobj_size;

	omsetup.cameras     = syTasklogMalloc(ts->camera_size * ts->cameras_num, 0x8);
	omsetup.cameras_num = ts->cameras_num;
	omsetup.camera_size = ts->camera_size;

	gcSetupObjectManager(&omsetup);

	D_800465F8.func_update = func_80006350;
	D_800465F8.func_draw = func_800063A0;

	func_80006548(&ts->buffer_setup, ts->func_start);
}

// 80006A8C
void syTasklogSetLogicIntervals(u16 update, u16 framedraw)
{
	sSYTasklogUpdateInterval = update;
	sSYTasklogFrameDrawInterval = framedraw;
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
		sSYTasklogCount = arg0;
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
		sSYTasklogGfxBuffersEnd[i] = NULL;
		sSYTasklogGfxBuffersCurrent[i] = NULL;
		sSYTasklogGfxBuffersStart[i] = NULL;
		sSYTasklogGfxEndBuffers[i] = NULL;
	}
	sSYTasklogIsNoNearClipping = FALSE;
	D_80046624 = D_80046626 = 0;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sSYTasklogDLBuffers[i][j].start  = NULL;
			sSYTasklogDLBuffers[i][j].length = 0;
		}
	}
	sSYTasklogSegmentFBase = NULL;
	func_800048D0(NULL);

	scAddClient(&sSYTasklogClient, &sSYTasklogGameTicMesgQueue, sSYTasklogGameTicMesgs, ARRAY_COUNT(sSYTasklogGameTicMesgs));
	osCreateMesgQueue(&D_80045500, D_800454F0, ARRAY_COUNT(D_800454F0));
	osCreateMesgQueue(&sSYTasklogResetMesgQueue, sSYTasklogResetMesgs, ARRAY_COUNT(sSYTasklogResetMesgs));
	sSYTasklogUpdateInterval = sSYTasklogFrameDrawInterval = 1;
	osCreateMesgQueue(&D_800454C8, D_800454C0, ARRAY_COUNT(D_800454C0));
	D_800454BC = 2;
}