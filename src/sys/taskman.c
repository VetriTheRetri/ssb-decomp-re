#include "common.h"
#include <sys/taskman.h>

#include <sys/error.h>
#include <sys/main.h>
#include <sys/malloc.h>
#include <sys/obj.h>
#include <sys/rdp.h>
#include <sys/video.h>
#include <sys/thread3.h>
#include <sys/thread6.h>

#include <macros.h>
#include <ssb_types.h>
#include <stddef.h>

#include <PR/mbi.h>
#include <PR/ucode.h>
#include <PR/ultratypes.h>

typedef enum syTaskmanStatus
{
	nSYTaskmanStatusDefault,
	nSYTaskmanStatusLoadScene,
	nSYTaskmanStatusUnk2

} syTaskmanStatus;

// externs
extern void syTaskmanCheckBufferLengths();

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
u32 sSYTaskmanUpdateCount = 0;

// 0x8003B6E8
u32 dSYTaskmanFrameDrawCount = 0;

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
s32 sSYTaskmanPad0x80045480[4];

// 0x80045490
OSMesg sSYTaskmanGameTicMesgs[4];

// 0x800454A0
OSMesgQueue sSYTaskmanGameTicMesgQueue;

// 0x800454B8
u16 sSYTaskmanUpdateInterval;

// 0x800454BA
u16 sSYTaskmanFrameDrawInterval;

// 0x800454BC
u32 D_800454BC;

// 0x800454C0
OSMesg D_800454C0[1];

// 0x800454C8
OSMesgQueue D_800454C8;

// 0x800454E0
SCClient sSYTaskmanClient;

// 0x800454E8
unsigned int *sSYTaskmanSegmentFBase; // pointer to Gfx.w1 (segment base addr?)

// 0x800454F0
OSMesg D_800454F0[3];

// 0x80045500
OSMesgQueue D_80045500; // sctask end? or for all tasks?

// 0x800045518
OSMesg sSYTaskmanResetMesgs[1];

// 0x80045520
OSMesgQueue sSYTaskmanResetMesgQueue;

// 0x80045538
u64 sSYTaskmanDramStack[SP_DRAM_STACK_SIZE64 + 1];

// 0x80045940
u64 sSYTaskmanYieldData[OS_YIELD_DATA_SIZE / sizeof(u64) + 1];

// 0x80046548
SCTaskGfx *sSYTaskmanGfxBuffersStart[2];

// 0x80046550
SCTaskGfx *sSYTaskmanGfxBuffersCurrent[2];

// 0x80046558
SCTaskGfx *sSYTaskmanGfxBuffersEnd[2];

// 0x80046560
SCTaskGfxEnd *sSYTaskmanGfxEndBuffers[2];

// 0x80046568
SCTaskVi *sSYTaskmanViBuffers[2];

// 0x80046570
syTaskmanDLBuffer sSYTaskmanDLBuffers[2][4];

// 0x800465B0
Gfx *gSYTaskmanDLHeads[4];

// 0x800465C0
Gfx *sSYTaskmanDLBranches[4];

// 0x800465D0 - Writing 1 to this will load the screen at scene_current (gSceneData).
s32 sSYTaskmanStatus;

// 0x800465D4
s32 D_800465D4;

// 0x800465D8
syMallocRegion gSYTaskmanGraphicsHeap;

// 0x800465E8
syMallocRegion gSYTaskmanGeneralHeap;

// 0x800465F8
FnBundle D_800465F8;

// 0x8004660C
u32 sSYTaskmanTimeStart;

// 0x80046610
u32 sSYTaskmanUpdateDeltaTime;

// 0x80046614
u32 sSYTaskmanFrameDeltaTime;

// 0x80046618
void *sSYTaskmanRdpOutputBuffer; // u64 *?

// 0x8004661C
size_t sSYTaskmanRdpOutputBufferSize;   // size of sSYTaskmanRdpOutputBuffer

// 0x80046620
sb32 sSYTaskmanIsNoNearClipping;

// 0x80046624
u16 D_80046624;

// 0x80046626
u16 D_80046626; // ucode idx?

// 0x80046628
u16 D_80046628;

// 0x8004662C
Gfx *sSYTaskmanRdpResetDL;

// 0x80046630 - offset into sSYTaskmanDefaultGraphicsHeap and sSYTaskmanGfxBuffersStart
s32 gSYTaskmanTaskID;

// 0x80046634
s32 D_80046634;

// 0x80046638
s32 D_80046638[2];

// 0x80046640
s32 sSYTaskmanCount;

// 0x80046644
UNUSED s32 unref80046644;

// 0x80046648
syMallocRegion sSYTaskmanDefaultGraphicsHeap[2];

// 0x80046668
void (*D_80046668)(void *); // takes function bundle struct?

// 0x8004666C
SCTaskCallback D_8004666C;  // function pointer?

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800048D0
void func_800048D0(SCTaskGfxCallback arg0)
{
	if (arg0 != NULL)
	{
		D_8004666C = (void*)arg0;
	}
	else D_8004666C = (void*)scCheckGfxTaskDefault;
}

// 0x800048F8
void func_800048F8(Gfx **dl)
{
	sSYTaskmanSegmentFBase = &dl[0]->words.w1;
	gSPSegment(dl[0]++, G_MWO_SEGMENT_F, 0x00000000);
}

// 0x80004928
void unref_80004928(sb32 arg0)
{
	sSYTaskmanIsNoNearClipping = arg0;
}

// 0x80004934
void unref_80004934(u16 arg0, u16 arg1)
{
	D_80046624 = arg0;
	D_80046626 = arg1;
}

// 0x80004950
void syTaskmanInitGeneralHeap(void *start, u32 size)
{
	syMallocInit(&gSYTaskmanGeneralHeap, 0x10000, start, size);
}

// 0x80004980
void* syTaskmanMalloc(size_t size, u32 alignment) // alloc_with_alignment
{
	return syMallocSet(&gSYTaskmanGeneralHeap, size, alignment);
}

// 0x800049B0
void syTaskmanResetGraphicsHeap(void) // reset gSYTaskmanGraphicsHeap allocator
{
	gSYTaskmanGraphicsHeap.id    = sSYTaskmanDefaultGraphicsHeap[gSYTaskmanTaskID].id;
	gSYTaskmanGraphicsHeap.start = sSYTaskmanDefaultGraphicsHeap[gSYTaskmanTaskID].start;
	gSYTaskmanGraphicsHeap.end   = sSYTaskmanDefaultGraphicsHeap[gSYTaskmanTaskID].end;
	gSYTaskmanGraphicsHeap.ptr   = sSYTaskmanDefaultGraphicsHeap[gSYTaskmanTaskID].ptr;

	syMallocReset(&gSYTaskmanGraphicsHeap);
}

// 0x80004A0C
void syTaskmanSetDLBuffer(syTaskmanDLBuffer (*src)[4])
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sSYTaskmanDLBuffers); i++)
	{
		sSYTaskmanDLBuffers[i][0] = src[i][0];
		sSYTaskmanDLBuffers[i][1] = src[i][1];
		sSYTaskmanDLBuffers[i][2] = src[i][2];
		sSYTaskmanDLBuffers[i][3] = src[i][3];
	}
}

// 0x80004AB0
void func_80004AB0()
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(gSYTaskmanDLHeads) + ARRAY_COUNT(sSYTaskmanDLBranches) + ARRAY_COUNT(sSYTaskmanDLBuffers[0])) / 3; i++)
	{
		gSYTaskmanDLHeads[i] = sSYTaskmanDLBranches[i] = sSYTaskmanDLBuffers[gSYTaskmanTaskID][i].start;
	}
	for (i = 0; i < (ARRAY_COUNT(gSYTaskmanDLHeads) + ARRAY_COUNT(sSYTaskmanDLBranches) + ARRAY_COUNT(sSYTaskmanDLBuffers[0])) / 3; i++)
	{
		if (sSYTaskmanDLBuffers[gSYTaskmanTaskID][i].length != 0)
		{
			sSYTaskmanRdpResetDL = gSYTaskmanDLHeads[i];
			syRdpResetSettings(&gSYTaskmanDLHeads[i]);
			gSPEndDisplayList(gSYTaskmanDLHeads[i]++);
			sSYTaskmanDLBranches[i] = gSYTaskmanDLHeads[i];
			break;
		}
	}
	D_80046628 = 0;
}

// 0x80004B9C
void syTaskmanCheckBufferLengths(void)
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(gSYTaskmanDLHeads) + ARRAY_COUNT(sSYTaskmanDLBranches) + ARRAY_COUNT(sSYTaskmanDLBuffers[0])) / 3; i++)
	{
		if (sSYTaskmanDLBuffers[gSYTaskmanTaskID][i].length + (uintptr_t)sSYTaskmanDLBuffers[gSYTaskmanTaskID][i].start < (uintptr_t)gSYTaskmanDLHeads[i])
		{
			syErrorPrintf("gtl : DLBuffer over flow !  kind = %d  vol = %d byte\n", i, (uintptr_t)gSYTaskmanDLHeads[i] - (uintptr_t)sSYTaskmanDLBuffers[gSYTaskmanTaskID][i].start);
			while (TRUE);
		}
	}

	if ((uintptr_t)gSYTaskmanGraphicsHeap.end < (uintptr_t)gSYTaskmanGraphicsHeap.ptr)
	{
		syErrorPrintf("gtl : DynamicBuffer over flow !  %d byte\n", (uintptr_t)gSYTaskmanGraphicsHeap.ptr - (uintptr_t)gSYTaskmanGraphicsHeap.start);
		while (TRUE);
	}
}

// 0x80004C5C
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

// 0x80004CB4
void func_80004CB4(s32 arg0, void *arg1, u32 buffer_size)
{
	D_8003B6E0 = arg0;
	sSYTaskmanRdpOutputBuffer = arg1;
	sSYTaskmanRdpOutputBufferSize = buffer_size;

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

// 0x80004D2C
SCTaskGfx* func_80004D2C(void)
{
	SCTaskGfx *temp;

	if (sSYTaskmanGfxBuffersStart[gSYTaskmanTaskID] == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfx\n");
		while (TRUE);
	}

	if (sSYTaskmanGfxBuffersCurrent[gSYTaskmanTaskID] == sSYTaskmanGfxBuffersEnd[gSYTaskmanTaskID])
	{
		syErrorPrintf("gtl : couldn\'t get SCTaskGfx\n");
		while (TRUE);
	}

	temp = sSYTaskmanGfxBuffersCurrent[gSYTaskmanTaskID]++;

	return temp;
}

// 0x80004DB4
void func_80004DB4(SCTaskGfx *gfx, s32 gfx_num, SCTaskGfxEnd *gfxend, SCTaskVi *vi)
{
	s32 i;

	for (i = 0; i < sSYTaskmanCount; i++)
	{
		sSYTaskmanGfxBuffersStart[i] = (SCTaskGfx*) ((uintptr_t)gfx + (gfx_num * sizeof(SCTaskGfx)) * i);
		sSYTaskmanGfxBuffersCurrent[i] = (SCTaskGfx*) ((uintptr_t)gfx + (gfx_num * sizeof(SCTaskGfx)) * i);
		sSYTaskmanGfxBuffersEnd[i] = (SCTaskGfx*) ((uintptr_t)gfx + (gfx_num * sizeof(SCTaskGfx)) * (i + 1));

		sSYTaskmanGfxEndBuffers[i] = (SCTaskGfxEnd*) ((uintptr_t)gfxend + (i * sizeof(SCTaskGfxEnd)));
		sSYTaskmanViBuffers[i] = (SCTaskVi*) ((uintptr_t)vi + (i * sizeof(SCTaskVi)));
	}
}

// 0x80004E90
void syTaskmanScheduleGfxEnd(SCTaskGfxEnd *mesg, void *framebuffer, u32 retVal, OSMesgQueue *mq)
{
	mesg->info.type 	= nSYScheduleTaskGfxEnd;
	mesg->info.priority = 100;
	mesg->info.fnCheck  = NULL;
	mesg->info.mq       = mq;
	mesg->info.retVal   = retVal;
	mesg->fb            = framebuffer;
	mesg->task_id       = gSYTaskmanTaskID;

	osSendMesg(&scTaskQueue, (OSMesg)mesg, OS_MESG_NOBLOCK);
}

// 0x80004EFC
void func_80004EFC()
{
	SCTaskGfxEnd *mesg = sSYTaskmanGfxEndBuffers[gSYTaskmanTaskID];

	if (mesg == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE);
	}

	syTaskmanScheduleGfxEnd(mesg, (void*)-1, gSYTaskmanTaskID, &D_80045500);
	sSYTaskmanGfxBuffersCurrent[gSYTaskmanTaskID] = sSYTaskmanGfxBuffersStart[gSYTaskmanTaskID];
}

// 0x80004F78
void func_80004F78(void)
{
	OSMesg recv;
	SCTaskGfxEnd *mesg = sSYTaskmanGfxEndBuffers[gSYTaskmanTaskID];

	if (mesg == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE);
	}
	syTaskmanScheduleGfxEnd(mesg, NULL, gSYTaskmanTaskID, &sSYTaskmanResetMesgQueue);
	osRecvMesg(&sSYTaskmanResetMesgQueue, &recv, OS_MESG_BLOCK);
	sSYTaskmanGfxBuffersCurrent[gSYTaskmanTaskID] = sSYTaskmanGfxBuffersStart[gSYTaskmanTaskID];
	syTaskmanResetGraphicsHeap();
	func_80004AB0();
}

// 0x80005018
void func_80005018(SCTaskGfx *t, s32 *arg1, u32 ucode_id, s32 arg3, u64 *arg4, u64 *arg5, u32 arg6)
{
	gsUcode *ucode;
	// ...why?
	s32 two = 2;

	t->info.type = nSYScheduleTaskGfx;
	t->info.priority = 50;

	if (sSYTaskmanSegmentFBase != NULL)
	{
		t->info.fnCheck = D_8004666C;
		t->unk68     = (void*)sSYTaskmanSegmentFBase;
		sSYTaskmanSegmentFBase   = NULL;
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
	t->task_id     = gSYTaskmanTaskID;
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
	t->task.t.dram_stack      = OS_DCACHE_ROUNDUP_ADDR(&sSYTaskmanDramStack);
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
	t->task.t.yield_data_ptr  = OS_DCACHE_ROUNDUP_ADDR(&sSYTaskmanYieldData);
	t->task.t.yield_data_size = OS_YIELD_DATA_SIZE;
	osWritebackDCacheAll();
	osSendMesg(&scTaskQueue, (OSMesg)t, OS_MESG_NOBLOCK);
}

// 0x800051E4
s32 syTaskmanGetUcodeID()
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

// 0x80005240
void func_80005240(s32 arg0, u64 *arg1)
{
	s32 ucode_id;

	if (arg0 == 0)
	{
		ucode_id = D_80046624;

		if (sSYTaskmanIsNoNearClipping == TRUE)
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
	else ucode_id = syTaskmanGetUcodeID();

	switch (ucode_id)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			func_80005018((void*)func_80004D2C(), 0, ucode_id, gSYTaskmanTaskID, arg1, NULL, 0);
			break;

		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
			func_80005018((void*)func_80004D2C(), 0, ucode_id, gSYTaskmanTaskID, arg1, sSYTaskmanRdpOutputBuffer, sSYTaskmanRdpOutputBufferSize);
			break;
	}
}

// 0x80005344
void syTaskmanAppendGfxUcodeLoad(Gfx **dl, u32 ucode_id)
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
		gSPDisplayList(dl[0]++, sSYTaskmanRdpResetDL);
		break;
	}
}

// 0x800053CC
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

	for (i = 0; i < (ARRAY_COUNT(gSYTaskmanDLHeads) + ARRAY_COUNT(sSYTaskmanDLBranches)) / 2; i++)
	{
		diffs >>= 1;

		if (gSYTaskmanDLHeads[i] != sSYTaskmanDLBranches[i])
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
				syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[0], syTaskmanGetUcodeID());
				gSPBranchList(gSYTaskmanDLHeads[0]++, sSYTaskmanDLBranches[2]);
			}
			else if (diffs & 0x2)
			{
				if (D_80046628 != 0)
				{
					syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[0], D_80046624);
				}
				gSPBranchList(gSYTaskmanDLHeads[0]++, sSYTaskmanDLBranches[1]);
			}
			else if (diffs & 0x8)
			{
				syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[0], syTaskmanGetUcodeID());
				gSPBranchList(gSYTaskmanDLHeads[0]++, sSYTaskmanDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYTaskmanDLHeads[0]++);
				gSPEndDisplayList(gSYTaskmanDLHeads[0]++);
			}
		}
		if (diffs & 0x4)
		{
			if (diffs & 0x2)
			{
				syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[2], D_80046624);
				gSPBranchList(gSYTaskmanDLHeads[2]++, sSYTaskmanDLBranches[1]);
			}
			else if (diffs & 0x8)
			{
				gSPBranchList(gSYTaskmanDLHeads[2]++, sSYTaskmanDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYTaskmanDLHeads[2]++);
				gSPEndDisplayList(gSYTaskmanDLHeads[2]++);
			}
		}
		if (diffs & 0x2)
		{
			if (diffs & 0x8)
			{
				syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[0], syTaskmanGetUcodeID());
				gSPBranchList(gSYTaskmanDLHeads[1]++, sSYTaskmanDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYTaskmanDLHeads[1]++);
				gSPEndDisplayList(gSYTaskmanDLHeads[1]++);
			}
		}
		if (diffs & 0x8)
		{
			gDPFullSync(gSYTaskmanDLHeads[3]++);
			gSPEndDisplayList(gSYTaskmanDLHeads[3]++);
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
		cmdPtr = gSYTaskmanDLHeads[dl_id];
		gSPDisplayList(gSYTaskmanDLHeads[dl_id]++, sSYTaskmanRdpResetDL);
		gSPBranchList(gSYTaskmanDLHeads[dl_id]++, sSYTaskmanDLBranches[dl_id]);
		func_80005240(a0, (u64*)cmdPtr);

		sSYTaskmanDLBranches[0] = gSYTaskmanDLHeads[0];
		sSYTaskmanDLBranches[2] = gSYTaskmanDLHeads[2];
		sSYTaskmanDLBranches[1] = gSYTaskmanDLHeads[1];
		sSYTaskmanDLBranches[3] = gSYTaskmanDLHeads[3];
	}
	syTaskmanCheckBufferLengths();
}

// 0x800057C8
void syTaskmanUpdateDLBuffers(void)
{
	s32 i;
	s32 diffs;

	syTaskmanCheckBufferLengths();

	diffs = 0;

	for (i = 0; i < (ARRAY_COUNT(gSYTaskmanDLHeads) + ARRAY_COUNT(sSYTaskmanDLBranches)) / 2; i++)
	{
		diffs >>= 1;

		if (gSYTaskmanDLHeads[i] != sSYTaskmanDLBranches[i])
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
				syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[0], syTaskmanGetUcodeID());
				gSPBranchList(gSYTaskmanDLHeads[0]++, sSYTaskmanDLBranches[2]);
			}
			else if (diffs & 2)
			{
				if (D_80046628 != 0)
				{
					syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[0], D_80046624);
				}
				gSPBranchList(gSYTaskmanDLHeads[0]++, sSYTaskmanDLBranches[1]);
			}
			else if (diffs & 8)
			{
				syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[0], syTaskmanGetUcodeID());
				gSPBranchList(gSYTaskmanDLHeads[0]++, sSYTaskmanDLBranches[3]);
			}
		}
		if (diffs & 4)
		{
			if (diffs & 2)
			{
				syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[2], D_80046624);
				gSPBranchList(gSYTaskmanDLHeads[2]++, sSYTaskmanDLBranches[1]);
			}
			else if (diffs & 8)
			{
				gSPBranchList(gSYTaskmanDLHeads[2]++, sSYTaskmanDLBranches[3]);
			}
			else
			{
				syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[2], D_80046624);
				gSPBranchList(gSYTaskmanDLHeads[2]++, gSYTaskmanDLHeads[0]);
			}
			sSYTaskmanDLBranches[2] = gSYTaskmanDLHeads[2];
		}
		if (diffs & 2)
		{
			if (diffs & 8)
			{
				syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[0], syTaskmanGetUcodeID());
				gSPBranchList(gSYTaskmanDLHeads[1]++, sSYTaskmanDLBranches[3]);
			}
			else
			{
				if (D_80046628 != 0)
				{
					syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[1], D_80046624);
				}
				gSPBranchList(gSYTaskmanDLHeads[1]++, gSYTaskmanDLHeads[0]);
			}
			sSYTaskmanDLBranches[1] = gSYTaskmanDLHeads[1];
		}
		if (diffs & 8)
		{
			syTaskmanAppendGfxUcodeLoad(&gSYTaskmanDLHeads[3], D_80046624);
			gSPBranchList(gSYTaskmanDLHeads[3]++, gSYTaskmanDLHeads[0]);
			sSYTaskmanDLBranches[3] = gSYTaskmanDLHeads[3];
		}
	}
	D_80046628 = 0;
	syTaskmanCheckBufferLengths();
}

// 0x80005AE4
u32 syTaskmanSwitchContext(s32 arg0)
{
	s32 msg;
	s32 i;

	while (osRecvMesg(&D_80045500, (OSMesg*)&msg, OS_MESG_NOBLOCK) != -1)
	{
		D_80046638[msg] = 0;
	}
	do
	{
		for (i = 0; i < sSYTaskmanCount; i++)
		{
			if (D_80046638[i] == 0)
			{
				gSYTaskmanTaskID = i;
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

// 0x80005BFC
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

// 0x80005C74
void syTaskmanSetLoadScene(void)
{
	sSYTaskmanStatus = nSYTaskmanStatusLoadScene;
}

// 0x80005C84
void unref_80005C84(s32 arg0)
{
	sSYTaskmanStatus = nSYTaskmanStatusUnk2;
	D_800465D4 = arg0;
}

// 0x80005C9C
sb32 syTaskmanCheckBreakLoop(void)
{
	SCTaskInfo info;

	switch (sSYTaskmanStatus)
	{
	case nSYTaskmanStatusLoadScene:
		return TRUE;

	case nSYTaskmanStatusUnk2:
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

// 0x80005D10
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

// 0x80005DA0
void func_80005DA0(FnBundle *arg0)
{
	s32 i;
	D_800454BC = 0;

	while (osRecvMesg(&D_80045500, NULL, OS_MESG_NOBLOCK) != -1)
	{
		continue;
	}
	while (osRecvMesg(&sSYTaskmanResetMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
	{
		continue;
	}
	while (osRecvMesg(&sSYTaskmanGameTicMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
	{
		continue;
	}
	sSYTaskmanStatus = nSYTaskmanStatusDefault;
	D_800465D4 = -1;
	gSYTaskmanTaskID = 1;
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

			for (i = 0; i < sSYTaskmanUpdateInterval; i++)
			{
				osRecvMesg(&sSYTaskmanGameTicMesgQueue, NULL, OS_MESG_BLOCK);
			}
			while (osRecvMesg(&sSYTaskmanGameTicMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
			{
				continue;
			}
			sSYTaskmanTimeStart = osGetCount();

			arg0->func_update(arg0);

			sSYTaskmanUpdateCount++; // += 1

			sSYTaskmanUpdateDeltaTime = (osGetCount() - sSYTaskmanTimeStart) / 2971; // what is this constant?

			if (syTaskmanCheckBreakLoop() != FALSE)
			{
				break;
			}
			if (sSYTaskmanUpdateCount % sSYTaskmanFrameDrawInterval == 0)
			{
				syTaskmanSwitchContext(0);
				sSYTaskmanTimeStart = osGetCount();

				arg0->func_draw(arg0);

				dSYTaskmanFrameDrawCount++; // += 1
				sSYTaskmanFrameDeltaTime = (osGetCount() - sSYTaskmanTimeStart) / 2971;

				if (syTaskmanCheckBreakLoop() != FALSE)
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

			for (i = 0; i < sSYTaskmanUpdateInterval; i++)
			{
				osRecvMesg(&sSYTaskmanGameTicMesgQueue, NULL, OS_MESG_BLOCK);
			}
			while (osRecvMesg(&sSYTaskmanGameTicMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
			{
				continue;
			}
			sSYTaskmanTimeStart = osGetCount();

			arg0->func_update(arg0);

			sSYTaskmanUpdateCount++;

			sSYTaskmanUpdateDeltaTime = (osGetCount() - sSYTaskmanTimeStart) / 2971;

			if (syTaskmanCheckBreakLoop() != FALSE)
			{
				break;
			}
			if ((sSYTaskmanUpdateCount % sSYTaskmanFrameDrawInterval == 0) && (syTaskmanSwitchContext(1) != FALSE))
			{
				sSYTaskmanTimeStart = osGetCount();

				arg0->func_draw(arg0);

				dSYTaskmanFrameDrawCount++;
				sSYTaskmanFrameDeltaTime = (osGetCount() - sSYTaskmanTimeStart) / 2971;

				if (syTaskmanCheckBreakLoop() != FALSE)
				{
					break;
				}
			}
		}
	}
	func_80005BFC();
	while (osRecvMesg(&D_80045500, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	while (osRecvMesg(&sSYTaskmanResetMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	while (osRecvMesg(&sSYTaskmanGameTicMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	syRdpSetFuncLights(NULL);
	D_800454BC = 2;
}

// 0x800062B4
void func_800062B4(FnBundle *self)
{
	D_80046668(self);
	self->fn04();
}

// 0x800062EC
void func_800062EC(FnBundle *self)
{
	syTaskmanResetGraphicsHeap();
	func_80004AB0();
	self->fn0C();
	func_800053CC();
	syVideoApplySettingsNoBlock(sSYTaskmanViBuffers[gSYTaskmanTaskID]);
	func_80004EFC();
}

// 0x80006350
void func_80006350(FnBundle *self)
{
	D_80046668(self);
	self->fn04();

	if (syTaskmanCheckBreakLoop() != FALSE)
	{
		gcEjectAll();
	}
}

// 0x800063A0
void func_800063A0(FnBundle *self)
{
	syTaskmanResetGraphicsHeap();
	func_80004AB0();

	self->fn0C();

	func_800053CC();
	syVideoApplySettingsNoBlock(sSYTaskmanViBuffers[gSYTaskmanTaskID]);
	func_80004EFC();

	if (syTaskmanCheckBreakLoop() != FALSE)
	{
		gcEjectAll();
	}
}

// 0x8000641C
void unref_8000641C(GObj *gobj)
{
	s32 idx;
	SCTaskGfxEnd *task;

	syTaskmanSwitchContext(0);
	syTaskmanResetGraphicsHeap();
	func_80004AB0();
	gobj->func_display(gobj);
	func_800053CC();

	task = sSYTaskmanGfxEndBuffers[gSYTaskmanTaskID];

	if (task == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE);
	}
	syTaskmanScheduleGfxEnd(task, NULL, gSYTaskmanTaskID, &D_80045500);
	sSYTaskmanGfxBuffersCurrent[gSYTaskmanTaskID] = sSYTaskmanGfxBuffersStart[gSYTaskmanTaskID];

	do
	{
		osRecvMesg(&D_80045500, (OSMesg*)&idx, OS_MESG_BLOCK);
		D_80046638[idx] = 0;
	}
	while (D_80046638[gSYTaskmanTaskID] != 0);

	dSYTaskmanFrameDrawCount++; // += 1
}

// 0x80006548
void func_80006548(syTaskmanBufferSetup *arg0, void (*arg1)())
{
	s32 i;
	syTaskmanDLBuffer sp44[2][4];

	sSYTaskmanCount = arg0->contexts_num;
	D_800465F8.unk00 = arg0->unk00;
	D_800465F8.fn04  = arg0->func_update;
	D_800465F8.fn0C  = arg0->func_draw;

	func_80004DB4
	(
		syTaskmanMalloc(arg0->unk14 * sizeof(DObj) * sSYTaskmanCount, 0x8),
		arg0->unk14,
		syTaskmanMalloc(sizeof(SCTaskGfxEnd) * sSYTaskmanCount, 0x8),
		syTaskmanMalloc(sizeof(SCTaskVi) * sSYTaskmanCount, 0x8)
	);
	for (i = 0; i < sSYTaskmanCount; i++)
	{
		sp44[i][0].start  = syTaskmanMalloc(arg0->dl_buffer0_size, 0x8);
		sp44[i][0].length = arg0->dl_buffer0_size;
		sp44[i][1].start  = syTaskmanMalloc(arg0->dl_buffer1_size, 0x8);
		sp44[i][1].length = arg0->dl_buffer1_size;
		sp44[i][2].start  = syTaskmanMalloc(arg0->dl_buffer2_size, 0x8);
		sp44[i][2].length = arg0->dl_buffer2_size;
		sp44[i][3].start  = syTaskmanMalloc(arg0->dl_buffer3_size, 0x8);
		sp44[i][3].length = arg0->dl_buffer3_size;
	}
	syTaskmanSetDLBuffer(sp44);

	for (i = 0; i < sSYTaskmanCount; i++)
	{
		syMallocInit(&gSYTaskmanGraphicsHeap, 0x10002, syTaskmanMalloc(arg0->graphics_arena_size, 0x8), arg0->graphics_arena_size);
		sSYTaskmanDefaultGraphicsHeap[i].id    = gSYTaskmanGraphicsHeap.id;
		sSYTaskmanDefaultGraphicsHeap[i].start = gSYTaskmanGraphicsHeap.start;
		sSYTaskmanDefaultGraphicsHeap[i].end   = gSYTaskmanGraphicsHeap.end;
		sSYTaskmanDefaultGraphicsHeap[i].ptr   = gSYTaskmanGraphicsHeap.ptr;
	}
	arg0->unk30 = 2;

	if (arg0->rdp_output_buffer_size == 0)
	{
		arg0->rdp_output_buffer_size = 0x1000;
	}
	func_80004CB4(arg0->unk30, syTaskmanMalloc(arg0->rdp_output_buffer_size, 0x10), arg0->rdp_output_buffer_size);
	syRdpSetFuncLights(arg0->func_lights);
	D_80046668 = arg0->func_controller;
	enable_auto_contread((uintptr_t)schedule_contread != (uintptr_t)D_80046668 ? TRUE : FALSE);

	sSYTaskmanUpdateCount = dSYTaskmanFrameDrawCount = 0;

	if (arg1 != NULL)
		arg1();

	// L800067B4
	func_80005DA0(&D_800465F8);
}

// 0x800067E4
void unref_800067E4(syTaskmanBufferSetup *arg)
{
	syTaskmanInitGeneralHeap(arg->arena_start, arg->arena_size);
	D_800465F8.func_update = func_800062B4;
	D_800465F8.func_draw = func_800062EC;
	func_80006548(arg, NULL);
}

// 0x8000683C
void syTaskmanInit(syTaskmanSetup *ts)
{
	OMSetup omsetup;

	syTaskmanInitGeneralHeap(ts->buffer_setup.arena_start, ts->buffer_setup.arena_size);

	omsetup.gobjthreads      = syTaskmanMalloc(sizeof(GObjThread) * ts->gobjthreads_num, 0x8);
	omsetup.gobjthreads_num  = ts->gobjthreads_num;
	omsetup.threadstack_size = ts->threadstack_size;

	if (ts->threadstack_size != 0)
	{
		omsetup.threadstacks = syTaskmanMalloc((ts->threadstack_size + offsetof(OMThreadStackNode, stack)) * ts->threadstacks_num, 0x8);
	}
	else omsetup.threadstacks = NULL;
	
	omsetup.num_stacks = ts->threadstacks_num;
	omsetup.unk_omsetup_0x14 = ts->unk4C;

	omsetup.gobjprocs     = syTaskmanMalloc(sizeof(GObjProcess) * ts->gobjprocs_num, 0x4);
	omsetup.gobjprocs_num = ts->gobjprocs_num;

	omsetup.gobjs     = syTaskmanMalloc(ts->gobj_size * ts->gobjs_num, 0x8);
	omsetup.gobjs_num = ts->gobjs_num;
	omsetup.gobj_size = ts->gobj_size;

	omsetup.ommtxes     = syTaskmanMalloc(sizeof(OMMtx) * ts->ommtxs_num, 0x8);
	omsetup.ommtxs_num = ts->ommtxs_num;

	gcSetMatrixProcess(ts->unk60);
	omsetup.proc_eject = ts->proc_eject;

	omsetup.aobjs     = syTaskmanMalloc(sizeof(AObj) * ts->aobjs_num, 0x4);
	omsetup.aobjs_num = ts->aobjs_num;

	omsetup.mobjs     = syTaskmanMalloc(sizeof(MObj) * ts->mobjs_num, 0x4);
	omsetup.mobjs_num = ts->mobjs_num;

	omsetup.dobjs     = syTaskmanMalloc(ts->dobj_size * ts->dobjs_num, 0x8);
	omsetup.dobjs_num = ts->dobjs_num;
	omsetup.dobj_size = ts->dobj_size;

	omsetup.sobjs     = syTaskmanMalloc(ts->sobj_size * ts->sobjs_num, 0x8);
	omsetup.sobjs_num = ts->sobjs_num;
	omsetup.sobj_size = ts->sobj_size;

	omsetup.cameras     = syTaskmanMalloc(ts->camera_size * ts->cameras_num, 0x8);
	omsetup.cameras_num = ts->cameras_num;
	omsetup.camera_size = ts->camera_size;

	gcSetupObjectManager(&omsetup);

	D_800465F8.func_update = func_80006350;
	D_800465F8.func_draw = func_800063A0;

	func_80006548(&ts->buffer_setup, ts->func_start);
}

// 0x80006A8C
void syTaskmanSetLogicIntervals(u16 update, u16 framedraw)
{
	sSYTaskmanUpdateInterval = update;
	sSYTaskmanFrameDrawInterval = framedraw;
}

// 0x80006AA8
void unref_80006AA8()
{
	if (D_800454BC != 2)
		D_800454BC = 1;
}

// 0x80006AD0
s32 unref_80006AD0()
{
	if (D_800454BC == 2)
		return 1;
	else
		return 0;
}

// 0x80006AF8
void unref_80006AF8()
{
	osSendMesg(&D_800454C8, NULL, OS_MESG_NOBLOCK);
}

// 0x80006B24
void unref_80006B24(s32 arg0)
{
	if ((arg0 == 1) || (arg0 == 2))
		sSYTaskmanCount = arg0;
}

// 0x80006B44
s32 unref_80006B44(s32 arg0)
{
	if ((arg0 == 1) || (arg0 == 2))
	{
		if ((&D_80046634)[arg0] == 0)
			return 1;
	}
	return 0;
}

// 0x80006B80
void func_80006B80()
{
	s32 i;
	s32 j;

	for (i = 0; i < 2; i++)
	{
		sSYTaskmanGfxBuffersEnd[i] = NULL;
		sSYTaskmanGfxBuffersCurrent[i] = NULL;
		sSYTaskmanGfxBuffersStart[i] = NULL;
		sSYTaskmanGfxEndBuffers[i] = NULL;
	}
	sSYTaskmanIsNoNearClipping = FALSE;
	D_80046624 = D_80046626 = 0;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sSYTaskmanDLBuffers[i][j].start  = NULL;
			sSYTaskmanDLBuffers[i][j].length = 0;
		}
	}
	sSYTaskmanSegmentFBase = NULL;
	func_800048D0(NULL);

	scAddClient(&sSYTaskmanClient, &sSYTaskmanGameTicMesgQueue, sSYTaskmanGameTicMesgs, ARRAY_COUNT(sSYTaskmanGameTicMesgs));
	osCreateMesgQueue(&D_80045500, D_800454F0, ARRAY_COUNT(D_800454F0));
	osCreateMesgQueue(&sSYTaskmanResetMesgQueue, sSYTaskmanResetMesgs, ARRAY_COUNT(sSYTaskmanResetMesgs));
	sSYTaskmanUpdateInterval = sSYTaskmanFrameDrawInterval = 1;
	osCreateMesgQueue(&D_800454C8, D_800454C0, ARRAY_COUNT(D_800454C0));
	D_800454BC = 2;
}