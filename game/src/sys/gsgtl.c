#include "sys/gtl.h"

#include "sys/crash.h"
#include "sys/main.h"
#include "sys/ml.h"
#include "sys/obj.h"
#include "sys/rdp_reset.h"
#include "sys/system_00.h"
#include "sys/system_03_1.h"
#include "sys/system_04.h"
#include "sys/thread3.h"
#include "sys/thread6.h"

#include <macros.h>
#include <ssb_types.h>
#include <stddef.h>

#include <PR/mbi.h>
#include <PR/ucode.h>
#include <PR/ultratypes.h>

// structures
struct gsUcode {
    /* 0x00 */ u64 *text;
    /* 0x04 */ u64 *data;
};

struct FnBundle {
    /* 0x00 */ u16 unk00;
    /* 0x04 */ void (*fn04)(void);
    /* 0x08 */ void (*fn08)(struct FnBundle *);
    /* 0x0C */ void (*fn0C)(void);
    /* 0x10 */ void (*fn10)(struct FnBundle *);
}; // size == 0x14 (D_800465F8)

// data
s32 D_8003B6E0 = 0;
u32 D_8003B6E4 = 0;

union WeirdBytewise D_8003B6E8 = {0};

// match Nintendo's name to make the text and data symbols
#define NewUcodeInfo(ucode) \
    { (u64 *)ucode##TextStart, (u64 *)ucode##DataStart }
#define NullUcodeInfo \
    { NULL, NULL }
#define EndUncodeInfoArray NullUcodeInfo

// Ten total ucodes + a terminator?
struct gsUcode D_8003B6EC[11] = {
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

OSMesg D_80045490[4];
OSMesgQueue D_800454A0;
u16 D_800454B8;
u16 D_800454BA;
u32 D_800454BC;
OSMesg D_800454C0[1];
OSMesgQueue D_800454C8;
struct MqListNode D_800454E0;
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
struct SCTaskGfxEnd *D_80046560[2];
struct SCTaskType4 *D_80046568[2];
// is the collection of four `gsDLBuffer`s something worthy of a typedef?
struct gsDLBuffer D_80046570[2][4];
Gfx *gDisplayListHead[4];
Gfx *D_800465C0[4];

// from smash remix: Writing 1 to this word will load the screen at current_screen (gSceneData).
u32 D_800465D0;
s32 D_800465D4;
mlBumpAllocRegion gGraphicsHeap;  // D_800465D8
mlBumpAllocRegion gGeneralHeap; // D_800465E8
struct FnBundle D_800465F8;
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
// offset into sMtxTaskHeaps and sDObjTasks; has to be unsigned
u32 gGtlTaskId;
s32 D_80046634;
s32 D_80046638[2];

// 0x80046640
s32 sGSGTLNumTasks;
mlBumpAllocRegion sMtxTaskHeaps[2];
void (*D_80046668)(void *); // takes function bundle struct?
SCTaskCallback D_8004666C;  // function pointer?

// 0x800048D0
void func_800048D0(SCTaskGfxCallback arg0) 
{
    if (arg0 != NULL)
    {
        D_8004666C = (void*)arg0;
    } 
    else D_8004666C = (void*)unref_80000A34;
}

// 0x800048F8
void func_800048F8(Gfx **dl) 
{
    D_800454E8 = &dl[0]->words.w1;
    gSPSegment(dl[0]++, G_MWO_SEGMENT_F, 0x00000000);
}

// 0x80004928
void unref_80004928(u32 arg0) 
{
    D_80046620 = arg0;
}

// 0x80004934
void unref_80004934(u16 arg0, u16 arg1) 
{
    D_80046624 = arg0;
    D_80046626 = arg1;
}

void gsInitGeneralHeap(void *start, u32 size) 
{
    mlInitBumpAlloc(&gGeneralHeap, 0x10000, start, size);
}

// alloc_with_alignment
void* gsMemoryAlloc(u32 size, u32 alignment)
{
    return mlSetBumpAlloc(&gGeneralHeap, size, alignment);
}

// reset gGraphicsHeap allocator
void gsResetGraphicsHeapAlloc(void) 
{
    gGraphicsHeap.id    = sMtxTaskHeaps[gGtlTaskId].id;
    gGraphicsHeap.start = sMtxTaskHeaps[gGtlTaskId].start;
    gGraphicsHeap.end   = sMtxTaskHeaps[gGtlTaskId].end;
    gGraphicsHeap.ptr   = sMtxTaskHeaps[gGtlTaskId].ptr;

    mlResetBumpAlloc(&gGraphicsHeap);
}

void func_80004A0C(struct gsDLBuffer (*src)[4]) 
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_80046570); i++)
    {
        D_80046570[i][0] = src[i][0];
        D_80046570[i][1] = src[i][1];
        D_80046570[i][2] = src[i][2];
        D_80046570[i][3] = src[i][3];
    }
}

// 0x80004AB0
void func_80004AB0(void)
{
    s32 i;

    for (i = 0; i < (ARRAY_COUNT(gDisplayListHead) + ARRAY_COUNT(D_800465C0) + ARRAY_COUNT(D_80046570[0])) / 3; i++)
    {
        gDisplayListHead[i] = D_800465C0[i] = D_80046570[gGtlTaskId][i].start;
    }
    for (i = 0; i < (ARRAY_COUNT(gDisplayListHead) + ARRAY_COUNT(D_800465C0) + ARRAY_COUNT(D_80046570[0])) / 3; i++)
    {
        if (D_80046570[gGtlTaskId][i].length != 0) 
        {
            D_8004662C = gDisplayListHead[i];
            dpResetSettings(&gDisplayListHead[i]);
            gSPEndDisplayList(gDisplayListHead[i]++);
            D_800465C0[i] = gDisplayListHead[i];
            break;
        }
    }
    D_80046628 = 0;
}

void gsCheckGtlBufferLengths(void) 
{
    s32 i;

    for (i = 0; i < (ARRAY_COUNT(gDisplayListHead) + ARRAY_COUNT(D_800465C0) + ARRAY_COUNT(D_80046570[0])) / 3; i++)
    {
        if (D_80046570[gGtlTaskId][i].length + (uintptr_t)D_80046570[gGtlTaskId][i].start < (uintptr_t)gDisplayListHead[i])
        {
            gsFatalPrintF("gtl : gsDLBuffer over flow !  kind = %d  vol = %d byte\n", i, (uintptr_t)gDisplayListHead[i] - (uintptr_t)D_80046570[gGtlTaskId][i].start);
            while (TRUE); // {}
        }
    }

    if ((uintptr_t)gGraphicsHeap.end < (uintptr_t)gGraphicsHeap.ptr)
    {
        gsFatalPrintF("gtl : DynamicBuffer over flow !  %d byte\n", (uintptr_t)gGraphicsHeap.ptr - (uintptr_t)gGraphicsHeap.start);
        while (TRUE); // {}
    }
}

// 0x80004C5C
void func_80004C5C(void *arg0, u32 buffer_size) 
{
    struct SCTaskType8 t;

    t.info.unk00 = 8;
    t.info.unk04 = 50;
    t.unk24      = arg0;
    t.unk28      = buffer_size;
    func_80000970(&t.info);

    if ((uintptr_t)&D_80044FC0 & 7) 
    {
        gsFatalPrintF("bad addr sc_rdp_output_len = %x\n", &D_80044FC0);
        while (TRUE); // {}
    }
}

// 0x80004CB4
void func_80004CB4(s32 arg0, void *arg1, u32 buffer_size) 
{
    D_8003B6E0 = arg0;
    D_80046618 = arg1;
    D_8004661C = buffer_size;

    if (arg0 == 2 || arg0 == 1) 
    {
        if (buffer_size == 0)
        {
            gsFatalPrintF("gtl : Buffer size for RDP is zero !!\n");
            while (TRUE); // {}
        }
    }

    if (arg0 == 1)
    {
        func_80004C5C(arg1, buffer_size);
    }
}

// 0x80004D2C
DObj* func_80004D2C(void) 
{
    DObj *temp;

    if (sDObjTasks[gGtlTaskId] == NULL)
    {
        gsFatalPrintF("gtl : not defined SCTaskGfx\n");
        while (TRUE); // { ; }
    }

    if (D_80046550[gGtlTaskId] == D_80046558[gGtlTaskId]) 
    {
        gsFatalPrintF("gtl : couldn\'t get SCTaskGfx\n");
        while (TRUE); // { ; }
    }

    temp = D_80046550[gGtlTaskId]++;

    return temp;
}

// 0x80004DB4
void func_80004DB4(DObj *arg0, s32 arg1, struct SCTaskGfxEnd *arg2, struct SCTaskType4 *arg3)
{
    s32 i;

    for (i = 0; i < sGSGTLNumTasks; i++)
    {
        sDObjTasks[i] = (DObj*) ((uintptr_t)arg0 + (arg1 * sizeof(DObj)) * i);
        D_80046550[i] = (DObj*) ((uintptr_t)arg0 + (arg1 * sizeof(DObj)) * i);
        D_80046558[i] = (DObj*) ((uintptr_t)arg0 + (arg1 * sizeof(DObj)) * (i + 1));

        D_80046560[i] = (struct SCTaskGfxEnd*) ((uintptr_t)arg2 + (i * sizeof(struct SCTaskGfxEnd)));
        D_80046568[i] = (struct SCTaskType4*)  ((uintptr_t)arg3 + (i * sizeof(struct SCTaskType4)));
    }
}

// func_80004E90
void gsScheduleGfxEnd(struct SCTaskGfxEnd *mesg, void *arg1, s32 arg2, OSMesgQueue *mq) 
{
    mesg->info.unk00 = 6;
    mesg->info.unk04 = 100;
    mesg->info.func  = NULL;
    mesg->info.unk20 = mq;
    mesg->info.unk1C = arg2;
    mesg->unk24      = arg1;
    mesg->unk28      = gGtlTaskId;

    osSendMesg(&gScheduleTaskQueue, (OSMesg)mesg, OS_MESG_NOBLOCK);
}

// 0x80004EFC
void func_80004EFC(void) 
{
    struct SCTaskGfxEnd *mesg = D_80046560[gGtlTaskId];

    if (mesg == NULL) 
    {
        gsFatalPrintF("gtl : not defined SCTaskGfxEnd\n");
        while (TRUE); // { ; }
    }

    gsScheduleGfxEnd(mesg, (void*)-1, gGtlTaskId, &D_80045500);
    D_80046550[gGtlTaskId] = sDObjTasks[gGtlTaskId];
}

void func_80004F78(void) 
{
    OSMesg recv;
    struct SCTaskGfxEnd *mesg = D_80046560[gGtlTaskId];

    if (mesg == NULL)
    {
        gsFatalPrintF("gtl : not defined SCTaskGfxEnd\n");
        while (TRUE); // { ; }
    }

    gsScheduleGfxEnd(mesg, NULL, gGtlTaskId, &D_80045520);
    osRecvMesg(&D_80045520, &recv, OS_MESG_BLOCK);
    D_80046550[gGtlTaskId] = sDObjTasks[gGtlTaskId];
    gsResetGraphicsHeapAlloc();
    func_80004AB0();
}

void func_80005018
(
    struct SCTaskGfx *t,
    s32 *arg1,
    u32 ucode_id,
    s32 arg3,
    u64 *arg4,
    u64 *arg5,
    u32 arg6
) 
{
    struct gsUcode *ucode;
    // ...why?
    s32 two = 2;

    t->info.unk00 = 1;
    t->info.unk04 = 50;

    if (D_800454E8 != NULL) 
    {
        t->info.func = D_8004666C;
        t->unk68     = (void*)D_800454E8;
        D_800454E8   = NULL;
    }
    else
    {
        t->info.func = NULL;
        t->unk68     = NULL;
    }
    t->unk6C = arg1;
    t->unk70 = D_800465D4;

    if (arg1 != 0) 
    {
        t->info.unk20 = &D_80045500;
        t->info.unk1C = arg3;
    }
    else t->info.unk20 = NULL;
    
    t->info.unk18 = two;
    t->unk80      = gGtlTaskId;
    t->unk7C      = 0;

    t->task.t.type            = M_GFXTASK;
    t->task.t.flags           = OS_TASK_LOADABLE;
    t->task.t.ucode_boot      = gRspBootCode;
    t->task.t.ucode_boot_size = sizeof(gRspBootCode);

    ucode = &D_8003B6EC[ucode_id];

    if (ucode->text == NULL) 
    {
        gsFatalPrintF("gtl : ucode isn\'t included  kind = %d\n", ucode_id);
        while (TRUE); // { ; }
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
    osSendMesg(&gScheduleTaskQueue, (OSMesg)t, OS_MESG_NOBLOCK);
}

u32 gsGetUcodeId(void) 
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
    else ucode_id = gsGetUcodeId();

    switch (ucode_id) 
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9: 
            func_80005018((void*)func_80004D2C(), 0, ucode_id, gGtlTaskId, arg1, NULL, 0); 
            break;

        case 0:
        case 2:
        case 4:
        case 6:
        case 8:
            func_80005018((void*)func_80004D2C(), 0, ucode_id, gGtlTaskId, arg1, D_80046618, D_8004661C);
            break;
    }
}

void gsGTLAppendGfxUcodeLoad(Gfx **dl, u32 ucode_id) 
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

// 0x800053CC
void func_800053CC(void)
{
    s32 a0;
    s32 diffs;
    s32 i;
    s32 dlIdx;
    Gfx *cmdPtr;

    // calculate bitset of differences
    // bit 1 -> 0
    // 2 -> 1
    // 4 -> 2
    // 8 -> 3
    diffs = 0;

    for (i = 0; i < (ARRAY_COUNT(gDisplayListHead) + ARRAY_COUNT(D_800465C0)) / 2; i++)
    {
        diffs >>= 1;

        if (gDisplayListHead[i] != D_800465C0[i])
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
                gsGTLAppendGfxUcodeLoad(&gDisplayListHead[0], gsGetUcodeId());
                gSPBranchList(gDisplayListHead[0]++, D_800465C0[2]);
            } 
            else if (diffs & 2) 
            {
                if (D_80046628 != 0) 
                { 
                    gsGTLAppendGfxUcodeLoad(&gDisplayListHead[0], D_80046624);
                }
                gSPBranchList(gDisplayListHead[0]++, D_800465C0[1]);
            } 
            else if (diffs & 8) 
            {
                gsGTLAppendGfxUcodeLoad(&gDisplayListHead[0], gsGetUcodeId());
                gSPBranchList(gDisplayListHead[0]++, D_800465C0[3]);
            } 
            else
            {
                gDPFullSync(gDisplayListHead[0]++);
                gSPEndDisplayList(gDisplayListHead[0]++);
            }
        }
        if (diffs & 4)
        {
            if (diffs & 2)
            {
                gsGTLAppendGfxUcodeLoad(&gDisplayListHead[2], D_80046624);
                gSPBranchList(gDisplayListHead[2]++, D_800465C0[1]);
            }
            else if (diffs & 8)
            {
                gSPBranchList(gDisplayListHead[2]++, D_800465C0[3]);
            }
            else
            {
                gDPFullSync(gDisplayListHead[2]++);
                gSPEndDisplayList(gDisplayListHead[2]++);
            }
        }
        if (diffs & 2) 
        {
            if (diffs & 8) 
            {
                gsGTLAppendGfxUcodeLoad(&gDisplayListHead[0], gsGetUcodeId());
                gSPBranchList(gDisplayListHead[1]++, D_800465C0[3]);
            } 
            else 
            {
                gDPFullSync(gDisplayListHead[1]++);
                gSPEndDisplayList(gDisplayListHead[1]++);
            }
        }
        if (diffs & 8) 
        {
            gDPFullSync(gDisplayListHead[3]++);
            gSPEndDisplayList(gDisplayListHead[3]++);
        }
        if (diffs & 1)
        {
            dlIdx = 0;
            a0    = 0;
        } 
        else if (diffs & 4)
        {
            dlIdx = 2;
            a0    = 1;
        } 
        else if (diffs & 2)
        {
            dlIdx = 1;
            a0    = 0;
        }
        else
        {
            dlIdx = 3;
            a0    = 1;
        }
        cmdPtr = gDisplayListHead[dlIdx];
        gSPDisplayList(gDisplayListHead[dlIdx]++, D_8004662C);
        gSPBranchList(gDisplayListHead[dlIdx]++, D_800465C0[dlIdx]);
        func_80005240(a0, (u64*)cmdPtr);

        D_800465C0[0] = gDisplayListHead[0];
        D_800465C0[2] = gDisplayListHead[2];
        D_800465C0[1] = gDisplayListHead[1];
        D_800465C0[3] = gDisplayListHead[3];
    }
    gsCheckGtlBufferLengths();
}

// 0x800057C8
void func_800057C8(void) 
{
    s32 i;
    s32 diffs;

    gsCheckGtlBufferLengths();

    diffs = 0;

    for (i = 0; i < (ARRAY_COUNT(gDisplayListHead) + ARRAY_COUNT(D_800465C0)) / 2; i++)
    {
        diffs >>= 1;

        if (gDisplayListHead[i] != D_800465C0[i]) 
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
                gsGTLAppendGfxUcodeLoad(&gDisplayListHead[0], gsGetUcodeId());
                gSPBranchList(gDisplayListHead[0]++, D_800465C0[2]);
            } 
            else if (diffs & 2)
            {
                if (D_80046628 != 0)
                { 
                    gsGTLAppendGfxUcodeLoad(&gDisplayListHead[0], D_80046624);
                }
                gSPBranchList(gDisplayListHead[0]++, D_800465C0[1]);
            }
            else if (diffs & 8)
            {
                gsGTLAppendGfxUcodeLoad(&gDisplayListHead[0], gsGetUcodeId());
                gSPBranchList(gDisplayListHead[0]++, D_800465C0[3]);
            }
        }
        if (diffs & 4) 
        {
            if (diffs & 2) 
            {
                gsGTLAppendGfxUcodeLoad(&gDisplayListHead[2], D_80046624);
                gSPBranchList(gDisplayListHead[2]++, D_800465C0[1]);
            } 
            else if (diffs & 8) 
            {
                gSPBranchList(gDisplayListHead[2]++, D_800465C0[3]);
            } 
            else 
            {
                gsGTLAppendGfxUcodeLoad(&gDisplayListHead[2], D_80046624);
                gSPBranchList(gDisplayListHead[2]++, gDisplayListHead[0]);
            }
            D_800465C0[2] = gDisplayListHead[2];
        }
        if (diffs & 2)
        {
            if (diffs & 8)
            {
                gsGTLAppendGfxUcodeLoad(&gDisplayListHead[0], gsGetUcodeId());
                gSPBranchList(gDisplayListHead[1]++, D_800465C0[3]);
            } 
            else
            {
                if (D_80046628 != 0)
                {
                    gsGTLAppendGfxUcodeLoad(&gDisplayListHead[1], D_80046624); 
                }
                gSPBranchList(gDisplayListHead[1]++, gDisplayListHead[0]);
            }
            D_800465C0[1] = gDisplayListHead[1];
        }
        if (diffs & 8)
        {
            gsGTLAppendGfxUcodeLoad(&gDisplayListHead[3], D_80046624);
            gSPBranchList(gDisplayListHead[3]++, gDisplayListHead[0]);
            D_800465C0[3] = gDisplayListHead[3];
        }
    }
    D_80046628 = 0;
    gsCheckGtlBufferLengths();
}

// 0x80005AE4
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
        for (i = 0; i < sGSGTLNumTasks; i++) 
        {
            if (D_80046638[i] == 0)
            {
                gGtlTaskId    = i;
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

void func_80005BFC(void)
{
    struct SCTaskInfo info;
    OSMesg msgs[1];
    OSMesgQueue mq;

    info.unk00 = 7;
    info.unk04 = 50;
    osCreateMesgQueue(&mq, msgs, ARRAY_COUNT(msgs));
    info.func  = func_80000B54;
    info.unk1C = 1;
    info.unk20 = &mq;

    osSendMesg(&gScheduleTaskQueue, (OSMesg)&info, OS_MESG_NOBLOCK);
    osRecvMesg(&mq, NULL, OS_MESG_BLOCK);
}

// 0x80005C74
void func_80005C74(void)
{
    D_800465D0 = 1;
}

// 0x80005C84
void unref_80005C84(s32 arg0) 
{
    D_800465D0 = 2;
    D_800465D4 = arg0;
}

// 0x80005C9C
s32 func_80005C9C(void) 
{
    struct SCTaskInfo info;

    switch (D_800465D0) 
    {
    case 1:
        return 1;

    case 2:
        if (D_80044FA4 != 0)
        {
            info.unk00 = 11;
            info.unk04 = 100;
            func_80000970((void *)&info);
            return 1;
        }
        else return 0; // return 0;

    default:
        return 0;
    }
}

// 0x80005D10
void func_80005D10(void)
{
    if (D_800454BC == 1) 
    {
        D_800454BC = 2;

        while (osRecvMesg(&D_800454C8, NULL, OS_MESG_NOBLOCK) != -1)
        {
            continue;
        } // { ; }

        osRecvMesg(&D_800454C8, NULL, OS_MESG_BLOCK);
        D_800454BC = 0;
    }
}

void func_80005DA0(struct FnBundle *arg0)
{
    s32 i;

    D_800454BC = 0;

    while (osRecvMesg(&D_80045500, NULL, OS_MESG_NOBLOCK) != -1)
    {
        continue;
    }// { ; }
    while (osRecvMesg(&D_80045520, NULL, OS_MESG_NOBLOCK) != -1)
    {
        continue;
    }// { ; }
    while (osRecvMesg(&D_800454A0, NULL, OS_MESG_NOBLOCK) != -1);
    {
        continue;
    }// { ; }
    D_800465D0 = 0;
    D_800465D4 = -1;
    gGtlTaskId = 1;
    D_80044FA4 = 0;

    for (i = 0; i < ARRAY_COUNT(D_80046638); i++) 
    { 
        D_80046638[i] = 0;
    }
    if (arg0->unk00 & 1) 
    {
        while (TRUE) 
        {
            func_80005D10();
            gsVerifyStackProbes();
            for (i = 0; i < D_800454B8; i++) 
            { 
                osRecvMesg(&D_800454A0, NULL, OS_MESG_BLOCK);
            }
            while (osRecvMesg(&D_800454A0, NULL, OS_MESG_NOBLOCK) != -1)
            {
                continue;
            }// { ; }
            D_8004660C = osGetCount();
            arg0->fn08(arg0);
            D_8003B6E4++; // += 1
            D_80046610 = (osGetCount() - D_8004660C) / 2971; // what is this constant?
            if (func_80005C9C())
            { 
                break; 
            }
            if (D_8003B6E4 % D_800454BA == 0) 
            {
                func_80005AE4(0);
                D_8004660C = osGetCount();
                arg0->fn10(arg0);
                D_8003B6E8.word++; // += 1
                D_80046614 = (osGetCount() - D_8004660C) / 2971;

                if (func_80005C9C()) 
                {
                    break; 
                }
            }
        }
        // unconditional loop back
    }
    else while (TRUE)
    {
        func_80005D10();
        gsVerifyStackProbes();

        for (i = 0; i < D_800454B8; i++)
        {
            osRecvMesg(&D_800454A0, NULL, OS_MESG_BLOCK);
        }
        while (osRecvMesg(&D_800454A0, NULL, OS_MESG_NOBLOCK) != -1)
        {
            continue;
        }// { ; }
        D_8004660C = osGetCount();
        arg0->fn08(arg0);
        D_8003B6E4++; // += 1
        D_80046610 = (osGetCount() - D_8004660C) / 2971;

        if (func_80005C9C())
        {
            break;
        }
        if ((D_8003B6E4 % D_800454BA == 0) && (func_80005AE4(1) != 0))
        {
            D_8004660C = osGetCount();
            arg0->fn10(arg0);
            D_8003B6E8.word++; // += 1
            D_80046614 = (osGetCount() - D_8004660C) / 2971;

            if (func_80005C9C() != 0)
            {
                break;
            }
        }
    }
    func_80005BFC();
    while (osRecvMesg(&D_80045500, NULL, OS_MESG_NOBLOCK) != -1)
    {
        continue;
    }// { ; }
    while (osRecvMesg(&D_80045520, NULL, OS_MESG_NOBLOCK) != -1)
    {
        continue;
    }// { ; }
    while (osRecvMesg(&D_800454A0, NULL, OS_MESG_NOBLOCK) != -1)
    {
        continue;
    }// { ; }
    dpSetScissorFunction(NULL);
    D_800454BC = 2;
}

void func_800062B4(struct FnBundle *self) 
{
    D_80046668(self);
    self->fn04();
}

void func_800062EC(struct FnBundle *self) 
{
    gsResetGraphicsHeapAlloc();
    func_80004AB0();
    self->fn0C();
    func_800053CC();
    func_80006F5C(D_80046568[gGtlTaskId]);
    func_80004EFC();
}

void func_80006350(struct FnBundle *self)
{
    D_80046668(self);
    self->fn04();

    if (func_80005C9C())
    { 
        func_8000B7B4(); 
    }
}

void func_800063A0(struct FnBundle *self)
{
    gsResetGraphicsHeapAlloc();
    func_80004AB0();

    self->fn0C();

    func_800053CC();
    func_80006F5C(D_80046568[gGtlTaskId]);
    func_80004EFC();

    if (func_80005C9C() != 0) 
    {
        func_8000B7B4(); 
    }
}

struct Temp8000641C 
{
    /* 0x00 */ u8 pad00[0x2c];
    /* 0x2C */ void (*fn2C)(struct Temp8000641C *);
}; // size >= 0x2C

void unref_8000641C(struct Temp8000641C *arg0) 
{
    s32 idx;
    struct SCTaskGfxEnd *task;

    func_80005AE4(0);
    gsResetGraphicsHeapAlloc();
    func_80004AB0();
    arg0->fn2C(arg0);
    func_800053CC();

    task = D_80046560[gGtlTaskId];

    if (task == NULL)
    {
        gsFatalPrintF("gtl : not defined SCTaskGfxEnd\n");
        while (TRUE); // { ; }
    }
    gsScheduleGfxEnd(task, NULL, gGtlTaskId, &D_80045500);
    D_80046550[gGtlTaskId] = sDObjTasks[gGtlTaskId];

    do 
    {
        osRecvMesg(&D_80045500, (OSMesg*)&idx, OS_MESG_BLOCK);
        D_80046638[idx] = 0;
    } 
    while (D_80046638[gGtlTaskId] != 0);

    D_8003B6E8.word++; // += 1
}

void func_80006548(gsBufferSetup *arg0, void (*arg1)(void)) 
{
    s32 i;
    gsDLBuffer sp44[2][4];

    sGSGTLNumTasks   = arg0->num_tasks;
    D_800465F8.unk00 = arg0->unk00;
    D_800465F8.fn04  = arg0->fn04;
    D_800465F8.fn0C  = arg0->fn08;

    func_80004DB4
    (
        gsMemoryAlloc(arg0->unk14 * sizeof(DObj) * sGSGTLNumTasks, 8),
        arg0->unk14,
        gsMemoryAlloc(sizeof(struct SCTaskGfxEnd) * sGSGTLNumTasks, 8),
        gsMemoryAlloc(sizeof(struct SCTaskType4) * sGSGTLNumTasks, 8)
    );
    for (i = 0; i < sGSGTLNumTasks; i++) 
    {
        sp44[i][0].start  = gsMemoryAlloc(arg0->unk1C, 0x8);
        sp44[i][0].length = arg0->unk1C;
        sp44[i][1].start  = gsMemoryAlloc(arg0->unk20, 0x8);
        sp44[i][1].length = arg0->unk20;
        sp44[i][2].start  = gsMemoryAlloc(arg0->unk24, 0x8);
        sp44[i][2].length = arg0->unk24;
        sp44[i][3].start  = gsMemoryAlloc(arg0->unk28, 0x8);
        sp44[i][3].length = arg0->unk28;
    }
    func_80004A0C(sp44);

    for (i = 0; i < sGSGTLNumTasks; i++) 
    {
        mlInitBumpAlloc(&gGraphicsHeap, 0x10002, gsMemoryAlloc(arg0->unk2C, 8), arg0->unk2C);
        sMtxTaskHeaps[i].id    = gGraphicsHeap.id;
        sMtxTaskHeaps[i].start = gGraphicsHeap.start;
        sMtxTaskHeaps[i].end   = gGraphicsHeap.end;
        sMtxTaskHeaps[i].ptr   = gGraphicsHeap.ptr;
    }
    arg0->unk30 = 2;

    if (arg0->unk34 == 0) 
    { 
        arg0->unk34 = 0x1000;
    }
    func_80004CB4(arg0->unk30, gsMemoryAlloc(arg0->unk34, 16), arg0->unk34);
    dpSetScissorFunction(arg0->fn38);
    D_80046668 = arg0->fn3C;
    enable_auto_contread((uintptr_t)schedule_contread != (uintptr_t)D_80046668 ? TRUE : FALSE);

    D_8003B6E4 = D_8003B6E8.word = 0;

    if (arg1 != NULL) 
    {
        arg1(); 
    }
    // L800067B4
    func_80005DA0(&D_800465F8);
}

void unref_800067E4(gsBufferSetup *arg)
{
    gsInitGeneralHeap(arg->arena_start, arg->arena_size);
    D_800465F8.fn08 = func_800062B4;
    D_800465F8.fn10 = func_800062EC;
    func_80006548(arg, NULL);
}

// 0x8000683C
void gsGTLSceneInit(gsGTLSetupDesc *gtl_desc)
{
    OMSetup omsetup;

    gsInitGeneralHeap(gtl_desc->setup.arena_start, gtl_desc->setup.arena_size);

    omsetup.gobjthreads        = gsMemoryAlloc(sizeof(GObjThread) * gtl_desc->num_gobjthreads, 0x8);
    omsetup.num_gobjthreads    = gtl_desc->num_gobjthreads;
    omsetup.omthreadstack_size = gtl_desc->omthreadstack_size;

    if (gtl_desc->omthreadstack_size != 0)
    {
        omsetup.omthreadstacks = gsMemoryAlloc((gtl_desc->omthreadstack_size + offsetof(OMThreadStackNode, stack)) * gtl_desc->num_omthreadstacks, 0x8);
    }
    else omsetup.omthreadstacks = NULL;
    
    omsetup.num_omthreadstacks = gtl_desc->num_omthreadstacks;
    omsetup.unk_omsetup_0x14   = gtl_desc->unk4C;

    omsetup.gobjprocs     = gsMemoryAlloc(sizeof(GObjProcess) * gtl_desc->num_gobjprocs, 0x4);
    omsetup.num_gobjprocs = gtl_desc->num_gobjprocs;

    omsetup.gobjs     = gsMemoryAlloc(gtl_desc->gobj_size * gtl_desc->num_gobjs, 0x8);
    omsetup.num_gobjs = gtl_desc->num_gobjs;
    omsetup.gobj_size = gtl_desc->gobj_size;

    omsetup.ommtxes     = gsMemoryAlloc(sizeof(OMMtx) * gtl_desc->num_ommtxes, 0x8);
    omsetup.num_ommtxes = gtl_desc->num_ommtxes;

    func_80010734(gtl_desc->unk60);
    omsetup.proc_cleanup = gtl_desc->proc_cleanup;

    omsetup.aobjs    = gsMemoryAlloc(sizeof(AObj) * gtl_desc->num_aobjs, 0x4);
    omsetup.numAObjs = gtl_desc->num_aobjs;

    omsetup.mobjs     = gsMemoryAlloc(sizeof(MObj) * gtl_desc->num_mobjs, 0x4);
    omsetup.num_mobjs = gtl_desc->num_mobjs;

    omsetup.dobjs     = gsMemoryAlloc(gtl_desc->dobj_size * gtl_desc->num_dobjs, 0x8);
    omsetup.num_dobjs = gtl_desc->num_dobjs;
    omsetup.dobj_size = gtl_desc->dobj_size;

    omsetup.sobjs     = gsMemoryAlloc(gtl_desc->sobj_size * gtl_desc->num_sobjs, 0x8);
    omsetup.num_sobjs = gtl_desc->num_sobjs;
    omsetup.sobj_size = gtl_desc->sobj_size;

    omsetup.cameras     = gsMemoryAlloc(gtl_desc->camera_size * gtl_desc->num_cameras, 0x8);
    omsetup.num_cameras = gtl_desc->num_cameras;
    omsetup.camera_size = gtl_desc->camera_size;

    omsetupObjectManager(&omsetup);

    D_800465F8.fn08 = func_80006350;
    D_800465F8.fn10 = func_800063A0;

    func_80006548(&gtl_desc->setup, gtl_desc->proc_init);
}

void unref_80006A8C(u16 arg0, u16 arg1) 
{
    D_800454B8 = arg0;
    D_800454BA = arg1;
}

void unref_80006AA8(void) 
{
    if (D_800454BC != 2) 
    {
        D_800454BC = 1;
    }
}

s32 unref_80006AD0(void) 
{
    if (D_800454BC == 2) 
    { 
        return 1; 
    }
    return 0;
}

void unref_80006AF8(void) 
{
    osSendMesg(&D_800454C8, NULL, OS_MESG_NOBLOCK);
}

void unref_80006B24(s32 arg0) 
{
    if ((arg0 == 1) || (arg0 == 2))
    { 
        sGSGTLNumTasks = arg0; 
    }
}

s32 unref_80006B44(s32 arg0)
{
    if ((arg0 == 1) || (arg0 == 2)) 
    {
        if ((&D_80046634)[arg0] == 0) 
        {
            return 1; 
        }
    }
    return 0;
}

void func_80006B80(void)
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
            D_80046570[i][j].start  = NULL;
            D_80046570[i][j].length = 0;
        }
    }
    D_800454E8 = NULL;
    func_800048D0(NULL);

    func_800009D8(&D_800454E0, &D_800454A0, D_80045490, ARRAY_COUNT(D_80045490));
    osCreateMesgQueue(&D_80045500, D_800454F0, ARRAY_COUNT(D_800454F0));
    osCreateMesgQueue(&D_80045520, D_80045518, ARRAY_COUNT(D_80045518));
    D_800454B8 = D_800454BA = 1;
    osCreateMesgQueue(&D_800454C8, D_800454C0, ARRAY_COUNT(D_800454C0));
    D_800454BC = 2;
}
