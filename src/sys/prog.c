#include "common.h"
#include <sys/prog.h>

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
extern void syProgCheckBufferLengths();

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

s32 dSYProgFrameDrawCount = 0;

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

// 0x80045490
OSMesg sSYProgGameTicMesgs[4];

// 0x800454A0
OSMesgQueue sSYProgGameTicMesgQueues;

// 0x800454B8
u16 sSYProgUpdateInterval;

// 0x800454BA
u16 sSYProgFrameDrawInterval;

// 0x800454BC
u32 D_800454BC;

// 0x800454C0
OSMesg D_800454C0[1];

// 0x800454C8
OSMesgQueue D_800454C8;

// 0x800454E0
SCClient sSYProgClient;

// 0x800454E8
unsigned int *sSYProgSegmentFBase; // pointer to Gfx.w1 (segment base addr?)

// 0x800454F0
OSMesg D_800454F0[3];

// 0x80045500
OSMesgQueue D_80045500; // sctask end? or for all tasks?

// 0x800045518
OSMesg sSYProgResetMesgs[1];

// 0x80045520
OSMesgQueue sSYProgResetMesgQueue;

// 0x80045538
u64 sSYProgDramStack[SP_DRAM_STACK_SIZE64 + 1];

// 0x80045940
u64 sSYProgYieldData[OS_YIELD_DATA_SIZE / sizeof(u64) + 1];

// 0x80046548
SCTaskGfx *sSYProgGfxBufferStart[2];

// 0x80046550
SCTaskGfx *sSYProgGfxBufferCurrent[2];

// 0x80046558
SCTaskGfx *sSYProgGfxBufferEnd[2];

// 0x80046560
SCTaskGfxEnd *D_80046560[2];

SCTaskVi *D_80046568[2];
// is the collection of four `DLBuffer`s something worthy of a typedef?
syProgDLBuffer sSYProgDLBuffers[2][4];

// 0x800465B0
Gfx *gSYProgDLHeads[4];

// 0x800465C0
Gfx *sSYProgDLBranches[4];

// from smash remix: Writing 1 to this word will load the screen at current_screen (gSceneData).
u32 sSYProgStatus;

s32 D_800465D4;

// 0x800465D8
syMallocRegion gSYProgGraphicsHeap;

// 0x800465E8
syMallocRegion gSYProgGeneralHeap;

FnBundle D_800465F8;
u32 sSYProgTimeStart;
u32 D_80046610;
u32 sSYProgFrameDeltaTime;
void *D_80046618; // u64 *?
u32 D_8004661C;   // size of D_80046618
u32 D_80046620;
u16 D_80046624;
u16 D_80046626; // ucode idx?
u16 D_80046628;
Gfx *D_8004662C;
// offset into sSYProgDefaultGraphicsHeap and sSYProgGfxBufferStart; has to be unsigned
s32 gSYProgID;
s32 D_80046634;
s32 D_80046638[2];
s32 sSYProgCount;
UNUSED s32 unref80046644;
syMallocRegion sSYProgDefaultGraphicsHeap[2];
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
	sSYProgSegmentFBase = &dl[0]->words.w1;
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
void syProgInitGeneralHeap(void *start, u32 size)
{
	syMallocInit(&gSYProgGeneralHeap, 0x10000, start, size);
}

// 80004980
void* syProgMalloc(u32 size, u32 alignment) // alloc_with_alignment
{
	return syMallocSet(&gSYProgGeneralHeap, size, alignment);
}

// 800049B0
void syProgResetGraphicsHeap(void) // reset gSYProgGraphicsHeap allocator
{
	gSYProgGraphicsHeap.id    = sSYProgDefaultGraphicsHeap[gSYProgID].id;
	gSYProgGraphicsHeap.start = sSYProgDefaultGraphicsHeap[gSYProgID].start;
	gSYProgGraphicsHeap.end   = sSYProgDefaultGraphicsHeap[gSYProgID].end;
	gSYProgGraphicsHeap.ptr   = sSYProgDefaultGraphicsHeap[gSYProgID].ptr;

	syMallocReset(&gSYProgGraphicsHeap);
}

// 80004A0C
void syProgSetDLBuffer(syProgDLBuffer (*src)[4])
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sSYProgDLBuffers); i++)
	{
		sSYProgDLBuffers[i][0] = src[i][0];
		sSYProgDLBuffers[i][1] = src[i][1];
		sSYProgDLBuffers[i][2] = src[i][2];
		sSYProgDLBuffers[i][3] = src[i][3];
	}
}

// 80004AB0
void func_80004AB0()
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(gSYProgDLHeads) + ARRAY_COUNT(sSYProgDLBranches) + ARRAY_COUNT(sSYProgDLBuffers[0])) / 3; i++)
	{
		gSYProgDLHeads[i] = sSYProgDLBranches[i] = sSYProgDLBuffers[gSYProgID][i].start;
	}
	for (i = 0; i < (ARRAY_COUNT(gSYProgDLHeads) + ARRAY_COUNT(sSYProgDLBranches) + ARRAY_COUNT(sSYProgDLBuffers[0])) / 3; i++)
	{
		if (sSYProgDLBuffers[gSYProgID][i].length != 0)
		{
			D_8004662C = gSYProgDLHeads[i];
			dpResetSettings(&gSYProgDLHeads[i]);
			gSPEndDisplayList(gSYProgDLHeads[i]++);
			sSYProgDLBranches[i] = gSYProgDLHeads[i];
			break;
		}
	}
	D_80046628 = 0;
}

// 80004B9C
void syProgCheckBufferLengths(void)
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(gSYProgDLHeads) + ARRAY_COUNT(sSYProgDLBranches) + ARRAY_COUNT(sSYProgDLBuffers[0])) / 3; i++)
	{
		if (sSYProgDLBuffers[gSYProgID][i].length + (uintptr_t)sSYProgDLBuffers[gSYProgID][i].start < (uintptr_t)gSYProgDLHeads[i])
		{
			syErrorPrintf("gtl : DLBuffer over flow !  kind = %d  vol = %d byte\n", i, (uintptr_t)gSYProgDLHeads[i] - (uintptr_t)sSYProgDLBuffers[gSYProgID][i].start);
			while (TRUE);
		}
	}

	if ((uintptr_t)gSYProgGraphicsHeap.end < (uintptr_t)gSYProgGraphicsHeap.ptr)
	{
		syErrorPrintf("gtl : DynamicBuffer over flow !  %d byte\n", (uintptr_t)gSYProgGraphicsHeap.ptr - (uintptr_t)gSYProgGraphicsHeap.start);
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
SCTaskGfx* func_80004D2C(void)
{
	SCTaskGfx *temp;

	if (sSYProgGfxBufferStart[gSYProgID] == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfx\n");
		while (TRUE);
	}

	if (sSYProgGfxBufferCurrent[gSYProgID] == sSYProgGfxBufferEnd[gSYProgID])
	{
		syErrorPrintf("gtl : couldn\'t get SCTaskGfx\n");
		while (TRUE);
	}

	temp = sSYProgGfxBufferCurrent[gSYProgID]++;

	return temp;
}

// 80004DB4
void func_80004DB4(SCTaskGfx *arg0, s32 arg1, SCTaskGfxEnd *arg2, SCTaskVi *arg3)
{
	s32 i;

	for (i = 0; i < sSYProgCount; i++)
	{
		sSYProgGfxBufferStart[i] = (SCTaskGfx*) ((uintptr_t)arg0 + (arg1 * sizeof(SCTaskGfx)) * i);
		sSYProgGfxBufferCurrent[i] = (SCTaskGfx*) ((uintptr_t)arg0 + (arg1 * sizeof(SCTaskGfx)) * i);
		sSYProgGfxBufferEnd[i] = (SCTaskGfx*) ((uintptr_t)arg0 + (arg1 * sizeof(SCTaskGfx)) * (i + 1));

		D_80046560[i] = (SCTaskGfxEnd*) ((uintptr_t)arg2 + (i * sizeof(SCTaskGfxEnd)));
		D_80046568[i] = (SCTaskVi*) ((uintptr_t)arg3 + (i * sizeof(SCTaskVi)));
	}
}

// 80004E90
void syProgScheduleGfxEnd(SCTaskGfxEnd *mesg, void *framebuffer, u32 retVal, OSMesgQueue *mq)
{
	mesg->info.type 	= SC_TASK_TYPE_GFX_END;
	mesg->info.priority = 100;
	mesg->info.fnCheck  = NULL;
	mesg->info.mq       = mq;
	mesg->info.retVal   = retVal;
	mesg->fb            = framebuffer;
	mesg->task_id        = gSYProgID;

	osSendMesg(&scTaskQueue, (OSMesg)mesg, OS_MESG_NOBLOCK);
}

// 80004EFC
void func_80004EFC()
{
	SCTaskGfxEnd *mesg = D_80046560[gSYProgID];

	if (mesg == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE);
	}

	syProgScheduleGfxEnd(mesg, (void*)-1, gSYProgID, &D_80045500);
	sSYProgGfxBufferCurrent[gSYProgID] = sSYProgGfxBufferStart[gSYProgID];
}

// 80004F78
void func_80004F78()
{
	OSMesg recv;
	SCTaskGfxEnd *mesg = D_80046560[gSYProgID];

	if (mesg == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE);
	}

	syProgScheduleGfxEnd(mesg, NULL, gSYProgID, &sSYProgResetMesgQueue);
	osRecvMesg(&sSYProgResetMesgQueue, &recv, OS_MESG_BLOCK);
	sSYProgGfxBufferCurrent[gSYProgID] = sSYProgGfxBufferStart[gSYProgID];
	syProgResetGraphicsHeap();
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

	if (sSYProgSegmentFBase != NULL)
	{
		t->info.fnCheck = D_8004666C;
		t->unk68     = (void*)sSYProgSegmentFBase;
		sSYProgSegmentFBase   = NULL;
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
	t->task_id     = gSYProgID;
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
	t->task.t.dram_stack      = OS_DCACHE_ROUNDUP_ADDR(&sSYProgDramStack);
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
	t->task.t.yield_data_ptr  = OS_DCACHE_ROUNDUP_ADDR(&sSYProgYieldData);
	t->task.t.yield_data_size = OS_YIELD_DATA_SIZE;
	osWritebackDCacheAll();
	osSendMesg(&scTaskQueue, (OSMesg)t, OS_MESG_NOBLOCK);
}

// 800051E4
u32 syProgGetUcodeID()
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
	else ucode_id = syProgGetUcodeID();

	switch (ucode_id)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			func_80005018((void*)func_80004D2C(), 0, ucode_id, gSYProgID, arg1, NULL, 0);
			break;

		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
			func_80005018((void*)func_80004D2C(), 0, ucode_id, gSYProgID, arg1, D_80046618, D_8004661C);
			break;
	}
}

// 80005344
void syProgAppendGfxUcodeLoad(Gfx **dl, u32 ucode_id)
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

	for (i = 0; i < (ARRAY_COUNT(gSYProgDLHeads) + ARRAY_COUNT(sSYProgDLBranches)) / 2; i++)
	{
		diffs >>= 1;

		if (gSYProgDLHeads[i] != sSYProgDLBranches[i])
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
				syProgAppendGfxUcodeLoad(&gSYProgDLHeads[0], syProgGetUcodeID());
				gSPBranchList(gSYProgDLHeads[0]++, sSYProgDLBranches[2]);
			}
			else if (diffs & 0x2)
			{
				if (D_80046628 != 0)
				{
					syProgAppendGfxUcodeLoad(&gSYProgDLHeads[0], D_80046624);
				}
				gSPBranchList(gSYProgDLHeads[0]++, sSYProgDLBranches[1]);
			}
			else if (diffs & 0x8)
			{
				syProgAppendGfxUcodeLoad(&gSYProgDLHeads[0], syProgGetUcodeID());
				gSPBranchList(gSYProgDLHeads[0]++, sSYProgDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYProgDLHeads[0]++);
				gSPEndDisplayList(gSYProgDLHeads[0]++);
			}
		}
		if (diffs & 0x4)
		{
			if (diffs & 0x2)
			{
				syProgAppendGfxUcodeLoad(&gSYProgDLHeads[2], D_80046624);
				gSPBranchList(gSYProgDLHeads[2]++, sSYProgDLBranches[1]);
			}
			else if (diffs & 0x8)
			{
				gSPBranchList(gSYProgDLHeads[2]++, sSYProgDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYProgDLHeads[2]++);
				gSPEndDisplayList(gSYProgDLHeads[2]++);
			}
		}
		if (diffs & 0x2)
		{
			if (diffs & 0x8)
			{
				syProgAppendGfxUcodeLoad(&gSYProgDLHeads[0], syProgGetUcodeID());
				gSPBranchList(gSYProgDLHeads[1]++, sSYProgDLBranches[3]);
			}
			else
			{
				gDPFullSync(gSYProgDLHeads[1]++);
				gSPEndDisplayList(gSYProgDLHeads[1]++);
			}
		}
		if (diffs & 0x8)
		{
			gDPFullSync(gSYProgDLHeads[3]++);
			gSPEndDisplayList(gSYProgDLHeads[3]++);
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
		cmdPtr = gSYProgDLHeads[dl_id];
		gSPDisplayList(gSYProgDLHeads[dl_id]++, D_8004662C);
		gSPBranchList(gSYProgDLHeads[dl_id]++, sSYProgDLBranches[dl_id]);
		func_80005240(a0, (u64*)cmdPtr);

		sSYProgDLBranches[0] = gSYProgDLHeads[0];
		sSYProgDLBranches[2] = gSYProgDLHeads[2];
		sSYProgDLBranches[1] = gSYProgDLHeads[1];
		sSYProgDLBranches[3] = gSYProgDLHeads[3];
	}
	syProgCheckBufferLengths();
}

// 800057C8
void func_800057C8()
{
	s32 i;
	s32 diffs;

	syProgCheckBufferLengths();

	diffs = 0;

	for (i = 0; i < (ARRAY_COUNT(gSYProgDLHeads) + ARRAY_COUNT(sSYProgDLBranches)) / 2; i++)
	{
		diffs >>= 1;

		if (gSYProgDLHeads[i] != sSYProgDLBranches[i])
			diffs |= 8;
	}
	if (diffs != 0)
	{
		if (diffs & 1)
		{
			if (diffs & 4)
			{
				syProgAppendGfxUcodeLoad(&gSYProgDLHeads[0], syProgGetUcodeID());
				gSPBranchList(gSYProgDLHeads[0]++, sSYProgDLBranches[2]);
			}
			else if (diffs & 2)
			{
				if (D_80046628 != 0)
					syProgAppendGfxUcodeLoad(&gSYProgDLHeads[0], D_80046624);
				gSPBranchList(gSYProgDLHeads[0]++, sSYProgDLBranches[1]);
			}
			else if (diffs & 8)
			{
				syProgAppendGfxUcodeLoad(&gSYProgDLHeads[0], syProgGetUcodeID());
				gSPBranchList(gSYProgDLHeads[0]++, sSYProgDLBranches[3]);
			}
		}
		if (diffs & 4)
		{
			if (diffs & 2)
			{
				syProgAppendGfxUcodeLoad(&gSYProgDLHeads[2], D_80046624);
				gSPBranchList(gSYProgDLHeads[2]++, sSYProgDLBranches[1]);
			}
			else if (diffs & 8)
			{
				gSPBranchList(gSYProgDLHeads[2]++, sSYProgDLBranches[3]);
			}
			else
			{
				syProgAppendGfxUcodeLoad(&gSYProgDLHeads[2], D_80046624);
				gSPBranchList(gSYProgDLHeads[2]++, gSYProgDLHeads[0]);
			}
			sSYProgDLBranches[2] = gSYProgDLHeads[2];
		}
		if (diffs & 2)
		{
			if (diffs & 8)
			{
				syProgAppendGfxUcodeLoad(&gSYProgDLHeads[0], syProgGetUcodeID());
				gSPBranchList(gSYProgDLHeads[1]++, sSYProgDLBranches[3]);
			}
			else
			{
				if (D_80046628 != 0)
					syProgAppendGfxUcodeLoad(&gSYProgDLHeads[1], D_80046624);
				gSPBranchList(gSYProgDLHeads[1]++, gSYProgDLHeads[0]);
			}
			sSYProgDLBranches[1] = gSYProgDLHeads[1];
		}
		if (diffs & 8)
		{
			syProgAppendGfxUcodeLoad(&gSYProgDLHeads[3], D_80046624);
			gSPBranchList(gSYProgDLHeads[3]++, gSYProgDLHeads[0]);
			sSYProgDLBranches[3] = gSYProgDLHeads[3];
		}
	}
	D_80046628 = 0;
	syProgCheckBufferLengths();
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
		for (i = 0; i < sSYProgCount; i++)
		{
			if (D_80046638[i] == 0)
			{
				gSYProgID     = i;
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
void syProgSetLoadScene(void)
{
	sSYProgStatus = 1;
}

// 80005C84
void unref_80005C84(s32 arg0)
{
	sSYProgStatus = 2;
	D_800465D4 = arg0;
}

// 80005C9C
s32 func_80005C9C()
{
	SCTaskInfo info;

	switch (sSYProgStatus)
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
	{
		continue;
	}
	while (osRecvMesg(&sSYProgResetMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
	{
		continue;
	}
	while (osRecvMesg(&sSYProgGameTicMesgQueues, NULL, OS_MESG_NOBLOCK) != -1)
	{
		continue;
	}
	sSYProgStatus = 0;
	D_800465D4 = -1;
	gSYProgID = 1;
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

			for (i = 0; i < sSYProgUpdateInterval; i++)
			{
				osRecvMesg(&sSYProgGameTicMesgQueues, NULL, OS_MESG_BLOCK);
			}
			while (osRecvMesg(&sSYProgGameTicMesgQueues, NULL, OS_MESG_NOBLOCK) != -1)
			{
				continue;
			}
			sSYProgTimeStart = osGetCount();
			arg0->fn08(arg0);
			D_8003B6E4++; // += 1
			D_80046610 = (osGetCount() - sSYProgTimeStart) / 2971; // what is this constant?
			if (func_80005C9C())
			{
				break;
			}
			if (D_8003B6E4 % sSYProgFrameDrawInterval == 0)
			{
				func_80005AE4(0);
				sSYProgTimeStart = osGetCount();
				arg0->fn10(arg0);
				dSYProgFrameDrawCount++; // += 1
				sSYProgFrameDeltaTime = (osGetCount() - sSYProgTimeStart) / 2971;

				if (func_80005C9C())
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

			for (i = 0; i < sSYProgUpdateInterval; i++)
			{
				osRecvMesg(&sSYProgGameTicMesgQueues, NULL, OS_MESG_BLOCK);
			}
			while (osRecvMesg(&sSYProgGameTicMesgQueues, NULL, OS_MESG_NOBLOCK) != -1)
			{
				continue;
			}
			sSYProgTimeStart = osGetCount();
			arg0->fn08(arg0);
			D_8003B6E4++; // += 1
			D_80046610 = (osGetCount() - sSYProgTimeStart) / 2971;

			if (func_80005C9C())
			{
				break;
			}
			if ((D_8003B6E4 % sSYProgFrameDrawInterval == 0) && (func_80005AE4(1) != 0))
			{
				sSYProgTimeStart = osGetCount();
				arg0->fn10(arg0);
				dSYProgFrameDrawCount++; // += 1
				sSYProgFrameDeltaTime = (osGetCount() - sSYProgTimeStart) / 2971;

				if (func_80005C9C() != 0)
					break;
			}
		}
	}
	func_80005BFC();
	while (osRecvMesg(&D_80045500, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	while (osRecvMesg(&sSYProgResetMesgQueue, NULL, OS_MESG_NOBLOCK) != -1)
		continue;
	while (osRecvMesg(&sSYProgGameTicMesgQueues, NULL, OS_MESG_NOBLOCK) != -1)
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
	syProgResetGraphicsHeap();
	func_80004AB0();
	self->fn0C();
	func_800053CC();
	func_80006F5C(D_80046568[gSYProgID]);
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
	syProgResetGraphicsHeap();
	func_80004AB0();

	self->fn0C();

	func_800053CC();
	func_80006F5C(D_80046568[gSYProgID]);
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
	syProgResetGraphicsHeap();
	func_80004AB0();
	arg0->fn2C(arg0);
	func_800053CC();

	task = D_80046560[gSYProgID];

	if (task == NULL)
	{
		syErrorPrintf("gtl : not defined SCTaskGfxEnd\n");
		while (TRUE);
	}
	syProgScheduleGfxEnd(task, NULL, gSYProgID, &D_80045500);
	sSYProgGfxBufferCurrent[gSYProgID] = sSYProgGfxBufferStart[gSYProgID];

	do
	{
		osRecvMesg(&D_80045500, (OSMesg*)&idx, OS_MESG_BLOCK);
		D_80046638[idx] = 0;
	}
	while (D_80046638[gSYProgID] != 0);

	dSYProgFrameDrawCount++; // += 1
}

// 80006548
void func_80006548(syProgBufferSetup *arg0, void (*arg1)())
{
	s32 i;
	syProgDLBuffer sp44[2][4];

	sSYProgCount = arg0->tasks_num;
	D_800465F8.unk00 = arg0->unk00;
	D_800465F8.fn04  = arg0->fn04;
	D_800465F8.fn0C  = arg0->fn08;

	func_80004DB4
	(
		syProgMalloc(arg0->unk14 * sizeof(DObj) * sSYProgCount, 0x8),
		arg0->unk14,
		syProgMalloc(sizeof(SCTaskGfxEnd) * sSYProgCount, 0x8),
		syProgMalloc(sizeof(SCTaskVi) * sSYProgCount, 0x8)
	);
	for (i = 0; i < sSYProgCount; i++)
	{
		sp44[i][0].start  = syProgMalloc(arg0->unk1C, 0x8);
		sp44[i][0].length = arg0->unk1C;
		sp44[i][1].start  = syProgMalloc(arg0->unk20, 0x8);
		sp44[i][1].length = arg0->unk20;
		sp44[i][2].start  = syProgMalloc(arg0->unk24, 0x8);
		sp44[i][2].length = arg0->unk24;
		sp44[i][3].start  = syProgMalloc(arg0->unk28, 0x8);
		sp44[i][3].length = arg0->unk28;
	}
	syProgSetDLBuffer(sp44);

	for (i = 0; i < sSYProgCount; i++)
	{
		syMallocInit(&gSYProgGraphicsHeap, 0x10002, syProgMalloc(arg0->unk2C, 8), arg0->unk2C);
		sSYProgDefaultGraphicsHeap[i].id    = gSYProgGraphicsHeap.id;
		sSYProgDefaultGraphicsHeap[i].start = gSYProgGraphicsHeap.start;
		sSYProgDefaultGraphicsHeap[i].end   = gSYProgGraphicsHeap.end;
		sSYProgDefaultGraphicsHeap[i].ptr   = gSYProgGraphicsHeap.ptr;
	}
	arg0->unk30 = 2;

	if (arg0->unk34 == 0)
		arg0->unk34 = 0x1000;

	func_80004CB4(arg0->unk30, syProgMalloc(arg0->unk34, 16), arg0->unk34);
	dpSetScissorFunction(arg0->proc_lights);
	D_80046668 = arg0->proc_controller;
	enable_auto_contread((uintptr_t)schedule_contread != (uintptr_t)D_80046668 ? TRUE : FALSE);

	D_8003B6E4 = dSYProgFrameDrawCount = 0;

	if (arg1 != NULL)
		arg1();

	// L800067B4
	func_80005DA0(&D_800465F8);
}

// 800067E4
void unref_800067E4(syProgBufferSetup *arg)
{
	syProgInitGeneralHeap(arg->arena_start, arg->arena_size);
	D_800465F8.fn08 = func_800062B4;
	D_800465F8.fn10 = func_800062EC;
	func_80006548(arg, NULL);
}

// 8000683C
void syProgInit(syProgSetup *ts)
{
	OMSetup omsetup;

	syProgInitGeneralHeap(ts->setup.arena_start, ts->setup.arena_size);

	omsetup.gobjthreads      = syProgMalloc(sizeof(GObjThread) * ts->gobjthreads_num, 0x8);
	omsetup.gobjthreads_num  = ts->gobjthreads_num;
	omsetup.threadstack_size = ts->threadstack_size;

	if (ts->threadstack_size != 0)
	{
		omsetup.threadstacks = syProgMalloc((ts->threadstack_size + offsetof(OMThreadStackNode, stack)) * ts->threadstacks_num, 0x8);
	}
	else omsetup.threadstacks = NULL;
	
	omsetup.num_stacks = ts->threadstacks_num;
	omsetup.unk_omsetup_0x14   = ts->unk4C;

	omsetup.gobjprocs     = syProgMalloc(sizeof(GObjProcess) * ts->gobjprocs_num, 0x4);
	omsetup.gobjprocs_num = ts->gobjprocs_num;

	omsetup.gobjs     = syProgMalloc(ts->gobj_size * ts->gobjs_num, 0x8);
	omsetup.gobjs_num = ts->gobjs_num;
	omsetup.gobj_size = ts->gobj_size;

	omsetup.ommtxes     = syProgMalloc(sizeof(OMMtx) * ts->num_ommtxes, 0x8);
	omsetup.num_ommtxes = ts->num_ommtxes;

	gcSetMatrixProcess(ts->unk60);
	omsetup.proc_eject = ts->proc_eject;

	omsetup.aobjs     = syProgMalloc(sizeof(AObj) * ts->aobjs_num, 0x4);
	omsetup.aobjs_num = ts->aobjs_num;

	omsetup.mobjs     = syProgMalloc(sizeof(MObj) * ts->mobjs_num, 0x4);
	omsetup.mobjs_num = ts->mobjs_num;

	omsetup.dobjs     = syProgMalloc(ts->dobj_size * ts->dobjs_num, 0x8);
	omsetup.dobjs_num = ts->dobjs_num;
	omsetup.dobj_size = ts->dobj_size;

	omsetup.sobjs     = syProgMalloc(ts->sobj_size * ts->sobjs_num, 0x8);
	omsetup.sobjs_num = ts->sobjs_num;
	omsetup.sobj_size = ts->sobj_size;

	omsetup.cameras     = syProgMalloc(ts->camera_size * ts->cameras_num, 0x8);
	omsetup.cameras_num = ts->cameras_num;
	omsetup.camera_size = ts->camera_size;

	gcSetupObjectManager(&omsetup);

	D_800465F8.fn08 = func_80006350;
	D_800465F8.fn10 = func_800063A0;

	func_80006548(&ts->setup, ts->proc_start);
}

// 80006A8C
void unref_80006A8C(u16 arg0, u16 arg1)
{
	sSYProgUpdateInterval = arg0;
	sSYProgFrameDrawInterval = arg1;
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
		sSYProgCount = arg0;
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
		sSYProgGfxBufferEnd[i] = NULL;
		sSYProgGfxBufferCurrent[i] = NULL;
		sSYProgGfxBufferStart[i] = NULL;
		D_80046560[i] = NULL;
	}
	D_80046620 = 0;
	D_80046624 = D_80046626 = 0;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sSYProgDLBuffers[i][j].start  = NULL;
			sSYProgDLBuffers[i][j].length = 0;
		}
	}
	sSYProgSegmentFBase = NULL;
	func_800048D0(NULL);

	scAddClient(&sSYProgClient, &sSYProgGameTicMesgQueues, sSYProgGameTicMesgs, ARRAY_COUNT(sSYProgGameTicMesgs));
	osCreateMesgQueue(&D_80045500, D_800454F0, ARRAY_COUNT(D_800454F0));
	osCreateMesgQueue(&sSYProgResetMesgQueue, sSYProgResetMesgs, ARRAY_COUNT(sSYProgResetMesgs));
	sSYProgUpdateInterval = sSYProgFrameDrawInterval = 1;
	osCreateMesgQueue(&D_800454C8, D_800454C0, ARRAY_COUNT(D_800454C0));
	D_800454BC = 2;
}