#include "common.h"

#include <sys/audio.h>
#include <sys/scheduler.h>
#include <sys/dma.h>

#define AL_CACHE_ALIGN  15

#define NUM_DMA_BUFFERS 4
#define MAX_BUFFERS 50
#define MAX_BUFFER_LENGTH 1024
#define AUDIO_EXTRA_SAMPLES 80

#define TREMELO_SIN 1
#define TREMELO_SQR 2
#define TREMELO_DSC_SAW 3
#define TREMELO_ASC_SAW 4
#define VIBRATO_SIN 128
#define VIBRATO_SQR 129
#define VIBRATO_DSC_SAW 130
#define VIBRATO_ASC_SAW 131
#define OSC_HIGH 0
#define OSC_LOW 1
#define OSC_STATE_COUNT 32

typedef struct SYAudioPackage
{
    s32 count;
    uintptr_t data[1];

} SYAudioPackage;

typedef struct
{
    u8 *heap_base;
    size_t heap_size;
    u16 output_rate;
    u8 pvoices_num_max;
    u8 vvoices_num_max;
    u8 updates_num_max;
    u8 events_num_max;
    u8 sounds_num_max;
    u8 voices_num_max[2];
    u8 unk11;
    u8 unk12;
    u8 unk13;
    uintptr_t bank1_start;
    uintptr_t bank1_end;
    u8 *table1_start;
    uintptr_t bank2_start;
    uintptr_t bank2_end;
    u8 *table2_start;
    uintptr_t sbk_start;
    u8 fx_type;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    u16 unk34;
    u16 unk36;
    s32 unk38;
    uintptr_t *fgm_ucode_data;
    uintptr_t *fgm_table_data;
    uintptr_t *unk44;
    u16 fgm_ucode_count;
    u16 fgm_table_count;
    u16 unk4C;
    uintptr_t unk50, unk54, fgm_table_start, fgm_table_end, fgm_ucode_start, fgm_ucode_end;

} SYAudioSettings;

typedef struct {
    u8 rate;
    u8 depth;
    u8 oscCount;
} defData;

typedef struct {
    u8 halfdepth;
    u8 baseVol;
} tremSinData;

typedef struct {
    u8 curVal;
    u8 hiVal;
    u8 loVal;
} tremSqrData;

typedef struct {
    u8 baseVol;
    u8 depth;
} tremSawData;

typedef struct {
    f32 depthcents;
} vibSinData;

typedef struct {
    f32 loRatio;
    f32 hiRatio;
} vibSqrData;

typedef struct {
    s32 hicents;
    s32 centsrange;
} vibDSawData;

typedef struct {
    s32 locents;
    s32 centsrange;
} vibASawData;

typedef struct SYAudioOsc_s {
    struct SYAudioOsc_s* next;
    u8 type;
    u8 stateFlags;
    u16 maxCount;
    u16 curCount;
    union {
        defData def;
        tremSinData tsin;
        tremSqrData tsqr;
        tremSawData tsaw;
        vibSinData vsin;
        vibSqrData vsqr;
        vibDSawData vdsaw;
        vibASawData vasaw;
    } data;
} SYAudioOsc;

typedef struct {
    u32 addr;
    u32 len;
    u32 size;
    char* ptr;
} AMDMABuffer;

typedef struct {
    u32 nBuffers;
    u32 currentBuffer;
    AMDMABuffer buffers[NUM_DMA_BUFFERS];
} AMDMAState;

typedef struct N_ALUnk80026204
{
    u16 unk_80026204_0x0;
    u16 unk_80026204_0x2;
    u16 unk_80026204_0x4;
    u16 unk_80026204_0x6;
    u16 fgm_ucode_count;
    u16 fgm_table_count;
    u16 unk_80026204_0xC;
    void *unk_80026204_0x10;
    void *fgm_ucode_data;
    void *fgm_table_data;
    s32 unk_80026204_0x1C;
    ALHeap *heap;
    u8 unk_80026204_0x24;
    u16 unk_80026204_0x26;
    u16 unk_80026204_0x28;
    u16 unk_80026204_0x2A;
    u16 unk_80026204_0x2C;
    u16 unk_80026204_0x2E;
    u16 unk_80026204_0x30;

} N_ALUnk80026204;

// s32 auCustomFXParams1[] = {
//     8,
//     0x28a0,
//     0,
//     0x100,
//     9830,
//     -9830,
//     0,
//     0,
//     0,
//     0,
//     0x100,
//     0x180,
//     9830,
//     -9830,
//     11140,
//     0,
//     0,
//     0x5000,
//     0x520,
//     0x1000,
//     16384,
//     -16384,
//     4587,
//     0,
//     0,
//     0,
//     0x5a0,
//     0xce0,
//     8192,
//     -8192,
//     0,
//     0,
//     0,
//     0,
//     0x1440,
//     0x2340,
//     16384,
//     -16384,
//     4587,
//     0,
//     0,
//     0x6000,
//     0x14c0,
//     0x1dc0,
//     8192,
//     -8192,
//     0,
//     0,
//     0,
//     0,
//     0x1dc0,
//     0x2180,
//     8192,
//     -8192,
//     0,
//     0,
//     0,
//     0,
//     0,
//     0x2560,
//     18000,
//     0,
//     0,
//     0,
//     0,
//     0x7000,
// };

// s32 auCustomFXParams2[] = { 14, 0x4b00, 0, 0x280, 9830, -9830, 0, 0, 0, 0, 0x3c0, 0x500, 3276, -3276, 8191, 0,
//                             0, 0, 0x780, 0xa00, 3276, -3276, 5631, 0, 0, 0, 0xa00, 0xdc0, 3276, -3276, 4351, 0,
//                             0, 0, 0xc80, 0x12c0, 3276, -3276, 4351, 0, 0, 0, 0xf00, 0x1900, 3276, -3276, 4095, 0,
//                             0, 0, 0x1680, 0x1e00, 3276, -3276, 4095, 0, 0, 0, 0x1f40, 0x2580, 3276, -3276, 2559, 0,
//                             0, 0, 0x2580, 0x2bc0, 3276, -3276, 2559, 0, 0, 0, 0x2bc0, 0x3200, 3276, -3276, 1535, 0,
//                             0, 0, 0x3200, 0x3840, 3276, -3276, 1535, 0, 0, 0, 0x3840, 0x3e80, 3276, -3276, 255, 0,
//                             0, 0, 0x3e80, 0x44c0, 3276, -3276, 255, 0, 0, 0, 0, 0x2580, 5000, 0, 0, 0,
//                             0, 0x5000 };

extern s32 *auCustomFXParamsTable[2]; // = { auCustomFXParams1, auCustomFXParams2 };

// u8 auSoundPriorities[400] = { 50, 50, 50, 50, 50, 50, 50, 50, 30, 30, 50, 50, 50, 50, 90, 90, 50, 50, 50, 50,
//                               90, 90, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 100, 100, 100, 100, 100, 100, 100, 100,
//                               100, 100, 100, 100, 100, 100, 100, 100, 80, 80, 100, 100, 100, 100, 100, 100, 100, 100, 100, 80,
//                               100, 100, 100, 100, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
//                               40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
//                               40, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
//                               50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50 };

extern sb32 dSYAudioIsSettingsUpdated;// = 0;
extern s32 dSYAudioNextDma; // = 0;
extern sb32 dSYAudioSoundQuality;// = 1;
extern s32 dSYAudioCurrentFxType;// = 0;
extern s32 dSYAudioIsRestarting;// = 0;
// s32 auFrameCounter = 1;
// s16 auSampleCount[] = { 0, 0, 0, 0 };
// u8 auGlobalSoundVolume = 127;
// u8 auGlobalSoundReverbAmt = 0;
// u32 D_800423E0 = 0x7F00;

extern u8 sSYAudioHeapBuffer[0x4B000];
extern u32 D_80096250;
extern ALHeap sSYAudioALHeap;
extern void *sSYAudioALHeapBase;
extern s32 sSYAudioALHeapSize;
extern SCClient sSYAudioClient;
extern OSMesgQueue sSYAudioTicMesgQueue;
extern OSMesgQueue sSYAudioSPTaskMesgQueue;
extern OSMesgQueue sSYAudioDmaMesgQueue;
extern OSMesg sSYAudioTicMesgs[1];
extern OSMesg sSYAudioSPTaskMesgs[1];
extern OSMesg sSYAudioDmaMesgs[50];
extern OSIoMesg audDMAIOMesgBuf[MAX_BUFFERS];
extern N_ALGlobals sSYAudioALGlobals;
extern s32 sSYAudioFrequency;
extern s32 D_8009D920_96D20;
extern s16 *sSYAudioDataBuffers[3];
extern Acmd *sSYAudioAcmdList;
extern Acmd *sSYAudioAcmdListBuffers[2];
extern SYTaskAudio *sSYAudioTask;
extern SYTaskAudio *sSYAudioSchedulerTasks[2];
extern ALBank *sSYAudioSequenceALBank1;
extern void **sSYAudioPlayingSound; // 0x8009D954?
extern s32 *sSYAudioStartingSound;
extern s8 *sSYAudioSndpSoundID; // returned by alSndpAllocate
extern u8 *sSYAudioSoundPriority;
extern u8 *sSYAudioSoundIdleCounter;
extern f32 *sSYAudioSoundPitch;
extern u16 *sSYAudioSoundVolume;
extern u8 *sSYAudioSoundPan;
extern u8 *sSYAudioSoundReverbAmt;
extern ALInstrument *sSYAudioALInstrument;
extern ALSndPlayer *sSYAudioALSndPlayer;

// 0x8003CB1C
extern s32 dSYAudioIsSettingsUpdated;

// 0x80044D48
extern s32 sSYMainThreadingQueue;

// 0x8009D958
extern ALBank *sSYAudioSequenceALBank2;

// 0x8009D95C
extern ALSeqFile *sSYAudioALSeqFile;

// 0x8009D960
extern ALCSPlayer *gSYAudioALCSPlayers[1];

// 0x8009D964
extern ALCSeq *sSYAudioALCSeqs[1];

// 0x8009D968
extern u8 gSYAudioGlobalSongPriority;

// 0x8009D96C
extern u8 *sSYAudioSongSequenceDatas[1];

// 0x8009D970
extern u8 *sSYAudioCSPlayerStatuses;

// 0x8009D974
extern s32 *sSYAudioSongIDs;

// 0x8009D978
extern s32 sSYAudioSongVolumeTimers[1];

// 0x8009D97C
extern f32 sSYAudioSongVolumes[1];

// 0x8009D980
extern f32 sSYAudioSongVolumeRates[1];

// 0x8009D988
extern SYAudioSettings sSYAudioCurrentSettings;

// 0x8009D9BB
extern u8 D_8009D9BB_96DBB;

// 0x8009D9F0
extern OSTime sSYAudioOSTime;

// 0x8009D9F8
extern SYAudioOsc *sSYAudioOscStatesAllocFree;

// HAL did some dumb $h17 and now we have 3 of these just to make one function match, hypers
extern SYAudioSettings dSYAudioPublicSettings =
{
    sSYAudioHeapBuffer,
    sizeof(sSYAudioHeapBuffer),
    30720,
    0x16,
    0x18,
    0x40,
    0x40,
    10,
    { 16, 16 },
    0,
    50,
    100,
    0xDEADBEEF,
    0xDEADBEEF,
    0xDEADBEEF,
    0xDEADBEEF,
    0xDEADBEEF,
    0xDEADBEEF,
    0xDEADBEEF,
    AL_FX_CUSTOM

}, dSYAudioPublicSettings2, dSYAudioPublicSettings3;

static void syAudioBnkfPatchBank(ALBank *bank, uintptr_t offset, uintptr_t table);
static void syAudioBnkfPatchInst(ALInstrument *i, uintptr_t offset, uintptr_t table);
static void syAudioBnkfPatchSound(ALSound *s, uintptr_t offset, uintptr_t table);
static void syAudioBnkfPatchWaveTable(ALWaveTable *w, uintptr_t offset, uintptr_t table);

extern void func_80026104_26D04(s32, u8);
extern void func_80026094_26C94(s32, u8);

void syAudioStopSong(s32 arg0);

// 0x8001E5C0
void alHeapInit(ALHeap *hp, u8 *base, s32 len)
{
    s32 extraAlign = (AL_CACHE_ALIGN + 1) - ((intptr_t) base & AL_CACHE_ALIGN);

    if (extraAlign != AL_CACHE_ALIGN + 1)
    {
        hp->base = base + extraAlign;
    }
    else hp->base = base;

    hp->len = len;
    hp->cur = hp->base;
    hp->count = 0;
}

// 0x8001E5F4
void* alHeapDBAlloc(u8 *file, s32 line, ALHeap *hp, s32 num, s32 size)
{
    size_t bytes = (num * size + AL_CACHE_ALIGN) & ~AL_CACHE_ALIGN;
    u8 *ptr = NULL;

    if ((hp->cur + bytes) <= (hp->base + hp->len))
    {
        ptr = hp->cur;
        hp->cur += bytes;
    }
    return ptr;
}

// 0x8001E648
void alSeqFileNew(ALSeqFile *file, u8 *base)
{
    uintptr_t base_ptr = (uintptr_t) base;
    s32 i;

    /*
     * patch the file so that offsets are pointers
     */
    for (i = 0; i < file->seqCount; i++)
    {
        file->seqArray[i].offset = (u8*) ((u8*) file->seqArray[i].offset + base_ptr);
    }
}

// 0x8001E688
void alBnkfNew(ALBankFile *file, u8 *table)
{
    uintptr_t file_base = (uintptr_t) file;
    uintptr_t table_base = (uintptr_t) table;
    s32 i;

    /*
     * patch the file so that offsets are pointers
     */
    for (i = 0; i < file->bankCount; i++)
    {
        file->bankArray[i] = (ALBank*) ((u8*) file->bankArray[i] + file_base);

        if (file->bankArray[i] != NULL)
        {
            syAudioBnkfPatchBank(file->bankArray[i], file_base, table_base);
        }
    }
}

// 0x8001E708
void syAudioBnkfPatchBank(ALBank *bank, uintptr_t offset, uintptr_t table)
{
    s32 i;

    if (bank->flags)
    {
        return;
    }
    bank->flags = 1;

    if (bank->percussion != NULL)
    {
        bank->percussion = (ALInstrument*) ((u8*) bank->percussion + offset);
        syAudioBnkfPatchInst(bank->percussion, offset, table);
    }
    for (i = 0; i < bank->instCount; i++)
    {
        bank->instArray[i] = (ALInstrument*) ((u8*) bank->instArray[i] + offset);

        if (bank->instArray[i] != NULL)
        {
            syAudioBnkfPatchInst(bank->instArray[i], offset, table);
        }
    }
}

// 0x8001E7C0
void syAudioBnkfPatchInst(ALInstrument *inst, uintptr_t offset, uintptr_t table)
{
    s32 i;

    if (inst->flags)
    {
        return;
    }
    inst->flags = 1;

    for (i = 0; i < inst->soundCount; i++)
    {
        inst->soundArray[i] = (ALSound*) ((u8*) inst->soundArray[i] + offset);
        syAudioBnkfPatchSound(inst->soundArray[i], offset, table);
    }
}

// 0x8001E858
void syAudioBnkfPatchSound(ALSound *s, uintptr_t offset, uintptr_t table)
{
    if (s->flags)
    {
        return;
    }
    s->flags = 1;

    s->envelope = (ALEnvelope*) ((u8*) s->envelope + offset);
    s->keyMap = (ALKeyMap*) ((u8*) s->keyMap + offset);

    s->wavetable = (ALWaveTable*) ((u8*) s->wavetable + offset);
    syAudioBnkfPatchWaveTable(s->wavetable, offset, table);
}

// 0x8001E8B0
void syAudioBnkfPatchWaveTable(ALWaveTable *w, uintptr_t offset, uintptr_t table)
{
    if (w->flags)
    {
        return;
    }
    w->flags = 1;

    w->base += table;

    if (w->type == AL_ADPCM_WAVE)
    {
        w->waveInfo.adpcmWave.book = (ALADPCMBook*) ((u8*) w->waveInfo.adpcmWave.book + offset);

        if (w->waveInfo.adpcmWave.loop != NULL)
        {
            w->waveInfo.adpcmWave.loop = (ALADPCMloop*) ((u8*) w->waveInfo.adpcmWave.loop + offset);
        }

    }
    else if (w->type == AL_RAW16_WAVE)
    {
        if (w->waveInfo.rawWave.loop != NULL)
        {
            w->waveInfo.rawWave.loop = (ALRawLoop*) ((u8*) w->waveInfo.rawWave.loop + offset);
        }
    }
}

// 0x8001E91C
void syAudioReadRom(uintptr_t rom, void *vram, size_t size)
{
    OSIoMesg dmaIoMesg;

    osInvalDCache(vram, (s32) size);

    dmaIoMesg.hdr.pri = OS_MESG_PRI_NORMAL;
    dmaIoMesg.hdr.retQueue = &sSYAudioDmaMesgQueue;
    dmaIoMesg.dramAddr = vram;
    dmaIoMesg.devAddr = rom;
    dmaIoMesg.size = size;

    osEPiStartDma(gSYDmaRomPiHandle, &dmaIoMesg, OS_READ);
    osRecvMesg(&sSYAudioDmaMesgQueue, NULL, OS_MESG_BLOCK);
}

// 0x8001E99C
s32 syAudioDma(s32 addr, s32 len, void *state)
{
    void *freeBuffer;
    AMDMAState *dState = state;
    s32 delta = 0;
    u32 bStartAddr;
    u32 bEndAddr;
    AMDMABuffer *dBuff = &dState->buffers[dState->currentBuffer];
    OSMesg dummyMesg;

    /*
     * Is it in the last buffer
     */
    bStartAddr = (u32) dBuff->addr;
    bEndAddr = (u32) bStartAddr + dBuff->len;

    if ((addr >= bStartAddr) && (addr + len <= bEndAddr))
    {
        freeBuffer = dBuff->ptr + addr - dBuff->addr;
    }
    else
    {
        if (++dState->currentBuffer >= dState->nBuffers)
        {
            dState->currentBuffer = 0;
        }
        dBuff = &dState->buffers[dState->currentBuffer];
        freeBuffer = dBuff->ptr;
        delta = addr & 0x1;
        addr -= delta;

        dBuff->addr = addr;
        dBuff->len = dBuff->size;

        audDMAIOMesgBuf[dSYAudioNextDma].hdr.pri = OS_MESG_PRI_HIGH;
        audDMAIOMesgBuf[dSYAudioNextDma].hdr.retQueue = &sSYAudioDmaMesgQueue;
        audDMAIOMesgBuf[dSYAudioNextDma].dramAddr = freeBuffer;
        audDMAIOMesgBuf[dSYAudioNextDma].devAddr = (u32) addr;
        audDMAIOMesgBuf[dSYAudioNextDma].size = dBuff->size;

        osEPiStartDma(gSYDmaRomPiHandle, &audDMAIOMesgBuf[dSYAudioNextDma++], OS_READ);
    }
    return (s32) osVirtualToPhysical(freeBuffer) + delta;
}

// 0x8001EAC8
ALDMAproc syAudioDmaNew(AMDMAState **state)
{
    s32 i;
    AMDMAState* dState;

    dState = (AMDMAState*) alHeapAlloc(&sSYAudioALHeap, 1, sizeof(AMDMAState));
    dState->currentBuffer = 0;
    dState->nBuffers = NUM_DMA_BUFFERS;

    for (i = 0; i < NUM_DMA_BUFFERS; i++)
    {
        dState->buffers[i].ptr = alHeapAlloc(&sSYAudioALHeap, 1, MAX_BUFFER_LENGTH);
        dState->buffers[i].addr = 0;
        dState->buffers[i].len = 0;
        dState->buffers[i].size = MAX_BUFFER_LENGTH;
    }
    *state = (AMDMAState*) dState;

    return syAudioDma;
}

// 0x8001EB98
f32 syAudioDepth2Cents(u8 depth)
{
    f32 x = 1.03099303F;
    f32 cents = 1.0F;

    while (depth)
    {
        if (depth & 1)
        {
            cents *= x;
        }
        x *= x;
        depth >>= 1;
    }
    return cents;
}

// 0x8001EBE4
ALMicroTime initOsc(void **oscState, f32 *initVal, u8 oscType, u8 oscRate, u8 oscDepth, u8 oscDelay)
{
    SYAudioOsc *statePtr;
    ALMicroTime deltaTime = 0;

    if (sSYAudioOscStatesAllocFree != NULL) /* yes there are oscStates available */
    {
        statePtr = sSYAudioOscStatesAllocFree;
        sSYAudioOscStatesAllocFree = sSYAudioOscStatesAllocFree->next;
        statePtr->type = oscType;
        *oscState = statePtr;

        /*
         * Convert delay into usec's, In this example, multiply by
         * 0x4000, but could easily use another conversion method.
         */
        deltaTime = oscDelay * 0x4000;

        switch (oscType) /* set the initVal */
        {
            case TREMELO_SIN:
                statePtr->curCount = 0;
                statePtr->maxCount = 259 - oscRate; /* gives values 4-259 */
                statePtr->data.tsin.halfdepth = oscDepth >> 1;
                statePtr->data.tsin.baseVol = AL_VOL_FULL - statePtr->data.tsin.halfdepth;
                *initVal = (f32) statePtr->data.tsin.baseVol;
                break;

            case TREMELO_SQR:
                statePtr->maxCount = 256 - oscRate; /* values from 1-256 */
                statePtr->curCount = statePtr->maxCount;
                statePtr->stateFlags = OSC_HIGH;
                statePtr->data.tsqr.loVal = AL_VOL_FULL - oscDepth;
                statePtr->data.tsqr.hiVal = AL_VOL_FULL;
                statePtr->data.tsqr.curVal = AL_VOL_FULL;
                *initVal = (f32) AL_VOL_FULL;
                break;

            case TREMELO_DSC_SAW:
                statePtr->maxCount = 256 - oscRate;
                statePtr->curCount = 0;
                statePtr->data.tsaw.depth = oscDepth;
                statePtr->data.tsaw.baseVol = AL_VOL_FULL;
                *initVal = (f32) statePtr->data.tsaw.baseVol;
                break;

            case TREMELO_ASC_SAW:
                statePtr->maxCount = 256 - oscRate;
                statePtr->curCount = 0;
                statePtr->data.tsaw.depth = oscDepth;
                statePtr->data.tsaw.baseVol = AL_VOL_FULL - oscDepth;
                *initVal = (f32) statePtr->data.tsaw.baseVol;
                break;

            case VIBRATO_SIN:
                statePtr->data.vsin.depthcents = syAudioDepth2Cents(oscDepth);
                statePtr->curCount = 0;
                statePtr->maxCount = 259 - oscRate; /* gives values 4-259 */
                *initVal = 1.0f;                    /* start at unity pitch */
                break;

            case VIBRATO_SQR:
            {
                s32 cents;
                statePtr->maxCount = 256 - oscRate; /* values from 1-256 */
                statePtr->curCount = statePtr->maxCount;
                statePtr->stateFlags = OSC_HIGH;
                cents = syAudioDepth2Cents(oscDepth);
                statePtr->data.vsqr.loRatio = alCents2Ratio(-cents);
                statePtr->data.vsqr.hiRatio = alCents2Ratio(cents);
                *initVal = statePtr->data.vsqr.hiRatio;
            }
            break;

            case VIBRATO_DSC_SAW:
            {
                s32 cents;
                statePtr->maxCount = 256 - oscRate; /* values from 1-256 */
                statePtr->curCount = statePtr->maxCount;
                cents = syAudioDepth2Cents(oscDepth);
                statePtr->data.vdsaw.hicents = cents;
                statePtr->data.vdsaw.centsrange = 2 * cents;
                *initVal = alCents2Ratio(statePtr->data.vdsaw.hicents);
            }
            break;

            case VIBRATO_ASC_SAW:
            {
                s32 cents;
                statePtr->maxCount = 256 - oscRate; /* values from 1-256 */
                statePtr->curCount = statePtr->maxCount;
                cents = syAudioDepth2Cents(oscDepth);
                statePtr->data.vasaw.locents = -cents;
                statePtr->data.vasaw.centsrange = 2 * cents;
                *initVal = alCents2Ratio(statePtr->data.vasaw.locents);
            }
            break;
        }
    }
    return deltaTime; /* if there are no oscStates, return zero, but if oscState was available, return delay in usecs */
}

// 0x8001EEB8
ALMicroTime updateOsc(void *oscState, f32 *updateVal)
{
    f32 tmpFlt;
    SYAudioOsc *statePtr = (SYAudioOsc*) oscState;
    ALMicroTime deltaTime = AL_USEC_PER_FRAME; /* in this example callback every */
                                               /* frame, but could be at any interval */

    switch (statePtr->type) /* perform update calculations */
    {
        case TREMELO_SIN:
            statePtr->curCount++;

            if (statePtr->curCount >= statePtr->maxCount)
            {
                statePtr->curCount = 0;
            }
            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt = sinf(tmpFlt * F_CST_DTOR32(360.0F));
            tmpFlt = tmpFlt * (f32) statePtr->data.tsin.halfdepth;
            *updateVal = (f32) statePtr->data.tsin.baseVol + tmpFlt;
            break;

        case TREMELO_SQR:
            if (statePtr->stateFlags == OSC_HIGH)
            {
                *updateVal = (f32) statePtr->data.tsqr.loVal;
                statePtr->stateFlags = OSC_LOW;
            }
            else
            {
                *updateVal = (f32) statePtr->data.tsqr.hiVal;
                statePtr->stateFlags = OSC_HIGH;
            }
            deltaTime *= statePtr->maxCount;
            break;

        case TREMELO_DSC_SAW:
            statePtr->curCount++;

            if (statePtr->curCount > statePtr->maxCount)
            {
                statePtr->curCount = 0;
            }
            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt *= (f32) statePtr->data.tsaw.depth;
            *updateVal = (f32) statePtr->data.tsaw.baseVol - tmpFlt;
            break;

        case TREMELO_ASC_SAW:
            statePtr->curCount++;

            if (statePtr->curCount > statePtr->maxCount)
            {
                statePtr->curCount = 0;
            }
            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt *= (f32) statePtr->data.tsaw.depth;
            *updateVal = (f32) statePtr->data.tsaw.baseVol + tmpFlt;
            break;

        case VIBRATO_SIN:
            /* calculate a sin value (from -1 to 1) and multiply it by depthcents.
               Then convert cents to ratio. */
            statePtr->curCount++;

            if (statePtr->curCount >= statePtr->maxCount)
            {
                statePtr->curCount = 0;
            }
            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt = sinf(tmpFlt * F_CST_DTOR32(360.0F)) * statePtr->data.vsin.depthcents;
            *updateVal = alCents2Ratio((s32) tmpFlt);
            break;

        case VIBRATO_SQR:
            if (statePtr->stateFlags == OSC_HIGH)
            {
                statePtr->stateFlags = OSC_LOW;
                *updateVal = statePtr->data.vsqr.loRatio;
            }
            else
            {
                statePtr->stateFlags = OSC_HIGH;
                *updateVal = statePtr->data.vsqr.hiRatio;
            }
            deltaTime *= statePtr->maxCount;
            break;

        case VIBRATO_DSC_SAW:
            statePtr->curCount++;

            if (statePtr->curCount > statePtr->maxCount)
            {
                statePtr->curCount = 0;
            }
            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt *= (f32) statePtr->data.vdsaw.centsrange;
            tmpFlt = (f32) statePtr->data.vdsaw.hicents - tmpFlt;
            *updateVal = alCents2Ratio((s32) tmpFlt);
            break;

        case VIBRATO_ASC_SAW:
            statePtr->curCount++;

            if (statePtr->curCount > statePtr->maxCount)
            {
                statePtr->curCount = 0;
            }
            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt *= (f32) statePtr->data.vasaw.centsrange;
            tmpFlt += (f32) statePtr->data.vasaw.locents;
            *updateVal = alCents2Ratio((s32) tmpFlt);
            break;
    }
    return deltaTime;
}


// 0x8001F42C
void stopOsc(void *oscState)
{
    ((SYAudioOsc*)oscState)->next = sSYAudioOscStatesAllocFree;
    sSYAudioOscStatesAllocFree = (SYAudioOsc*) oscState;
}

// 0x8001F444
void syAudioInit(void)
{
    scAddClient(&sSYAudioClient, &sSYAudioTicMesgQueue, sSYAudioTicMesgs, 1);
    osCreateMesgQueue(&sSYAudioDmaMesgQueue, sSYAudioDmaMesgs, 50);
    osCreateMesgQueue(&sSYAudioSPTaskMesgQueue, sSYAudioSPTaskMesgs, 1);
    osSendMesg(&sSYAudioSPTaskMesgQueue, (OSMesg)NULL, OS_MESG_BLOCK);
}

void syAudioLoadAssets(void)
{
    s32 unused;
    ALBankFile *bnkf;
    s32 i;
    s32 len;
    SYAudioPackage *pkgf3;
    SYAudioPackage *pkgf2;
    SYAudioPackage *pkgf1;

    bzero(sSYAudioCurrentSettings.heap_base, sSYAudioCurrentSettings.heap_size);
    alHeapInit(&sSYAudioALHeap, sSYAudioCurrentSettings.heap_base, sSYAudioCurrentSettings.heap_size);

    // load sfx bank
    if (sSYAudioCurrentSettings.bank2_start >= 0x80000000)
    {
        sSYAudioSequenceALBank2 = (ALBank*) sSYAudioCurrentSettings.bank2_start;
    }
    else
    {
        len = sSYAudioCurrentSettings.bank2_end - sSYAudioCurrentSettings.bank2_start;
        bnkf = alHeapAlloc(&sSYAudioALHeap, 1, len);
        syAudioReadRom(sSYAudioCurrentSettings.bank2_start, bnkf, len);
        alBnkfNew(bnkf, sSYAudioCurrentSettings.table2_start);
        sSYAudioSequenceALBank2 = bnkf->bankArray[0];
    }
    if (sSYAudioCurrentSettings.bank1_start >= 0x80000000)
    {
        sSYAudioSequenceALBank1 = (ALBank*) sSYAudioCurrentSettings.bank1_start;
    }
    else
    {
        len = sSYAudioCurrentSettings.bank1_end - sSYAudioCurrentSettings.bank1_start;
        bnkf = alHeapAlloc(&sSYAudioALHeap, 1, len);
        syAudioReadRom(sSYAudioCurrentSettings.bank1_start, bnkf, len);
        alBnkfNew(bnkf, sSYAudioCurrentSettings.table1_start);
        sSYAudioSequenceALBank1 = bnkf->bankArray[0];
    }
    // load sequnces
    if (sSYAudioCurrentSettings.sbk_start >= 0x80000000)
    {
        sSYAudioALSeqFile = (ALSeqFile*) sSYAudioCurrentSettings.sbk_start;
    }
    else
    {
        sSYAudioALSeqFile = alHeapAlloc(&sSYAudioALHeap, 1, 4);
        syAudioReadRom(sSYAudioCurrentSettings.sbk_start, sSYAudioALSeqFile, 4);
         
        len = sSYAudioALSeqFile->seqCount * sizeof(ALSeqData) + 4;
        sSYAudioALSeqFile = alHeapAlloc(&sSYAudioALHeap, 1, sSYAudioALSeqFile->seqCount * sizeof(ALSeqData) + 4);
        syAudioReadRom(sSYAudioCurrentSettings.sbk_start, sSYAudioALSeqFile, len); 
        alSeqFileNew(sSYAudioALSeqFile, (u8*) sSYAudioCurrentSettings.sbk_start);
    }
    // get maximal seq length
    for (i = 0, len = 0; i < sSYAudioALSeqFile->seqCount; i++)
    {
        sSYAudioALSeqFile->seqArray[i].len += (sSYAudioALSeqFile->seqArray[i].len & 1);
        
        if (len < sSYAudioALSeqFile->seqArray[i].len)
        {
            len = sSYAudioALSeqFile->seqArray[i].len;
        }
    }
    for (i = 0; i < ARRAY_COUNT(sSYAudioSongSequenceDatas); i++)
    {
        sSYAudioSongSequenceDatas[i] = alHeapAlloc(&sSYAudioALHeap, 1, len);
    }
    sSYAudioAcmdListBuffers[0] = alHeapAlloc(&sSYAudioALHeap, 1, 0x8000);
    sSYAudioAcmdListBuffers[1] = alHeapAlloc(&sSYAudioALHeap, 1, 0x8000);

    sSYAudioSchedulerTasks[0] = alHeapAlloc(&sSYAudioALHeap, 1, sizeof(SYTaskAudio));
    sSYAudioSchedulerTasks[1] = alHeapAlloc(&sSYAudioALHeap, 1, sizeof(SYTaskAudio));

    sSYAudioDataBuffers[0] = alHeapAlloc(&sSYAudioALHeap, 1, 0xE60);
    sSYAudioDataBuffers[1] = alHeapAlloc(&sSYAudioALHeap, 1, 0xE60);
    sSYAudioDataBuffers[2] = alHeapAlloc(&sSYAudioALHeap, 1, 0xE60);

    if (sSYAudioCurrentSettings.unk50 < 0x80000000)
    {
        len = sSYAudioCurrentSettings.unk54 - sSYAudioCurrentSettings.unk50;
        pkgf3 = alHeapAlloc(&sSYAudioALHeap, 1, len);
        syAudioReadRom(sSYAudioCurrentSettings.unk50, pkgf3, len);
        
        dSYAudioPublicSettings.unk4C = sSYAudioCurrentSettings.unk4C = pkgf3->count;
        dSYAudioPublicSettings.unk44 = sSYAudioCurrentSettings.unk44 = pkgf3->data;
    }
    if (sSYAudioCurrentSettings.fgm_table_start < 0x80000000)
    {
        len = sSYAudioCurrentSettings.fgm_table_end - sSYAudioCurrentSettings.fgm_table_start;
        pkgf2 = alHeapAlloc(&sSYAudioALHeap, 1, len);
        syAudioReadRom(sSYAudioCurrentSettings.fgm_table_start, pkgf2, len);
        
        // Have to use the symbol of dSYAudioPublicSettings2 (same address as dSYAudioPublicSettings) for this to match...
        dSYAudioPublicSettings2.fgm_table_count = sSYAudioCurrentSettings.fgm_table_count = pkgf2->count;
        dSYAudioPublicSettings.fgm_table_data = sSYAudioCurrentSettings.fgm_table_data = pkgf2->data;

        for (i = 0; i < sSYAudioCurrentSettings.fgm_table_count; i++)
        {
            sSYAudioCurrentSettings.fgm_table_data[i] += (uintptr_t)pkgf2;
        }
    }
    if (sSYAudioCurrentSettings.fgm_ucode_start < 0x80000000)
    {
        len = sSYAudioCurrentSettings.fgm_ucode_end - sSYAudioCurrentSettings.fgm_ucode_start;
        pkgf1 = alHeapAlloc(&sSYAudioALHeap, 1, len);
        syAudioReadRom(sSYAudioCurrentSettings.fgm_ucode_start, pkgf1, len);
        
        // ...and dSYAudioPublicSettings3 for this. Why!?
        dSYAudioPublicSettings3.fgm_ucode_count = sSYAudioCurrentSettings.fgm_ucode_count = pkgf1->count;
        dSYAudioPublicSettings3.fgm_ucode_data = sSYAudioCurrentSettings.fgm_ucode_data = pkgf1->data;

        for (i = 0; i < sSYAudioCurrentSettings.fgm_ucode_count; i++)
        {
            sSYAudioCurrentSettings.fgm_ucode_data[i] += (uintptr_t)pkgf1;
        }
    }
}

void syAudioMakeSongPlayers(void)
{
    ALSynConfig synConfig;
    ALSeqpConfig seqpConfig;
    N_ALUnk80026204 sp94;
    s32 i, j;
    s32 unused;

    sSYAudioALHeapBase = sSYAudioALHeap.cur;
    sSYAudioALHeapSize = sSYAudioALHeap.count;
    
    synConfig.maxVVoices = sSYAudioCurrentSettings.vvoices_num_max;
    synConfig.maxPVoices = sSYAudioCurrentSettings.pvoices_num_max;
    synConfig.maxUpdates = sSYAudioCurrentSettings.updates_num_max;
    synConfig.dmaproc = syAudioDmaNew;
    synConfig.outputRate = osAiSetFrequency(sSYAudioCurrentSettings.output_rate);
    synConfig.heap = &sSYAudioALHeap;

    dSYAudioCurrentFxType = sSYAudioCurrentSettings.fx_type;

    if (dSYAudioCurrentFxType < AL_FX_CUSTOM)
    {
        synConfig.fxType = dSYAudioCurrentFxType;
    }
    else
    {
        synConfig.fxType = AL_FX_CUSTOM;
        synConfig.params = auCustomFXParamsTable[dSYAudioCurrentFxType];
    }
    n_alInit(&sSYAudioALGlobals, &synConfig);
    
    sSYAudioFrequency = (synConfig.outputRate / 60.0F);
    sSYAudioFrequency = ((sSYAudioFrequency / 184) * 184) + 184;
    D_8009D920_96D20 = sSYAudioFrequency - 184;
    
    sp94.unk_80026204_0x0 = sSYAudioCurrentSettings.unk31;
    sp94.unk_80026204_0x2 = sSYAudioCurrentSettings.unk32;
    sp94.unk_80026204_0x4 = sSYAudioCurrentSettings.unk33;
    
    if (sSYAudioCurrentSettings.unk34 != 0)
    {
        sp94.unk_80026204_0x6 = sSYAudioCurrentSettings.unk34;
        sp94.unk_80026204_0x10 = sSYAudioCurrentSettings.unk38;
    }
    else
    {
        sp94.unk_80026204_0x6 = sSYAudioSequenceALBank1->instArray[0]->soundCount;
        sp94.unk_80026204_0x10 = sSYAudioSequenceALBank1->instArray[0]->soundArray;
    }
    sp94.fgm_ucode_data = sSYAudioCurrentSettings.fgm_ucode_data;
    sp94.fgm_table_data = sSYAudioCurrentSettings.fgm_table_data;
    sp94.unk_80026204_0x1C = sSYAudioCurrentSettings.unk44;
    sp94.fgm_ucode_count = sSYAudioCurrentSettings.fgm_ucode_count;
    sp94.fgm_table_count = sSYAudioCurrentSettings.fgm_table_count;
    sp94.unk_80026204_0xC = sSYAudioCurrentSettings.unk4C;
    sp94.heap = &sSYAudioALHeap;
    sp94.unk_80026204_0x24 = sSYAudioCurrentSettings.unk12;
    sp94.unk_80026204_0x26 = 10;
    sp94.unk_80026204_0x28 = 20;
    sp94.unk_80026204_0x2A = 30;
    sp94.unk_80026204_0x2C = 40;
    sp94.unk_80026204_0x2E = 50;
    sp94.unk_80026204_0x30 = 60;
    
    func_80026204_26E04(&sp94);

    sSYAudioPlayingSound = alHeapAlloc(&sSYAudioALHeap, 1, sSYAudioCurrentSettings.unk33 * sizeof(*sSYAudioPlayingSound));
    
    for (i = 0; i < sSYAudioCurrentSettings.unk33; i++)
    {
        sSYAudioPlayingSound[i] = NULL;
    }
    sSYAudioCSPlayerStatuses = alHeapAlloc(&sSYAudioALHeap, 1, sizeof(*sSYAudioCSPlayerStatuses));
    sSYAudioSongIDs = alHeapAlloc(&sSYAudioALHeap, 1, sizeof(*sSYAudioSongIDs));
    gSYAudioGlobalSongPriority = sSYAudioCurrentSettings.unk13;
    
    sSYAudioOscStatesAllocFree = alHeapAlloc(&sSYAudioALHeap, sizeof(*sSYAudioOscStatesAllocFree), OSC_STATE_COUNT);

    for (j = 0; j < OSC_STATE_COUNT - 1; j++)
    {
        sSYAudioOscStatesAllocFree[j].next = &sSYAudioOscStatesAllocFree[j + 1];
    }
    sSYAudioOscStatesAllocFree[j].next = NULL;
    
    for (i = 0; i < 1; i++)
    {
        seqpConfig.maxVoices = sSYAudioCurrentSettings.voices_num_max[i];
        seqpConfig.maxEvents = sSYAudioCurrentSettings.events_num_max;
        seqpConfig.maxChannels = 16;
        seqpConfig.heap = &sSYAudioALHeap;
        seqpConfig.initOsc = initOsc;
        seqpConfig.updateOsc = updateOsc;
        seqpConfig.stopOsc = stopOsc;

        gSYAudioALCSPlayers[i] = alHeapAlloc(&sSYAudioALHeap, 1, sizeof(*gSYAudioALCSPlayers[i]));
        func_8002C3D0_2CFD0(gSYAudioALCSPlayers[i], &seqpConfig);
        alCSPSetBank(gSYAudioALCSPlayers[i], sSYAudioSequenceALBank2);
        sSYAudioALCSeqs[i] = alHeapAlloc(&sSYAudioALHeap, 1, sizeof(ALCSeq));
        
        sSYAudioCSPlayerStatuses[i] = 0;
        sSYAudioSongIDs[i] = -1;
        sSYAudioSongVolumeTimers[i] = 0;
        sSYAudioSongVolumes[i] = 30720.0F;
        sSYAudioSongVolumeRates[i] = 0.0F;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/sys/audio/auThreadMain.s")

// 0x80020A18
void syAudioSetStereo(void)
{
    dSYAudioSoundQuality = 1;
}

// 0x80020A28
void syAudioSetMono(void)
{
    dSYAudioSoundQuality = 0;
}

// 0x80020A34
void syAudioSetQuality(s32 quality)
{
    // 0 = mono, 1 = stereo
    dSYAudioSoundQuality = quality;
}

// 0x80020A40
void syAudioSetReverbType(s32 fx_type)
{
    if (fx_type != dSYAudioCurrentFxType)
    {
        dSYAudioIsRestarting++;
        sSYAudioCurrentSettings.fx_type = fx_type;
    }
}

// 0x80020A74
void syAudioStopSongAll(void)
{
    s32 i;

    for (i = 0; i < 1; i++)
    {
        syAudioStopSong(i);
    }
}

// 0x80020AB4
u32 syAudioPlaySong(s32 arg0, u32 arg1)
{
    if (arg1 < sSYAudioALSeqFile->seqCount)
    {
        sSYAudioCSPlayerStatuses[arg0] = 1;
        sSYAudioSongIDs[arg0] = arg1;
        return arg1;
    }
    return ~0U;
}

// 0x80020B08
void syAudioStopSong(s32 arg0)
{
    sSYAudioCSPlayerStatuses[arg0] = 1;
    sSYAudioSongIDs[arg0] = -1;
}

// 0x80020B38
void syAudioSetSongVolumeID(s32 sngplayer, u32 vol)
{
    if (vol > 30720)
    {
        vol = 30720;
    }
    alCSPSetVol(gSYAudioALCSPlayers[sngplayer], vol);
    sSYAudioSongVolumes[sngplayer] = vol;
    sSYAudioSongVolumeTimers[sngplayer] = 0;
}

// 0x80020BC0
void syAudioSetSongVolumeSmoothID(s32 sngplayer, u32 vol, u32 time)
{
    if (vol > 30720)
    {
        vol = 30720;
    }
    if (time != 0)
    {
        sSYAudioSongVolumeTimers[sngplayer] = time;
        sSYAudioSongVolumeRates[sngplayer] = (vol - sSYAudioSongVolumes[sngplayer]) / time;
    }
    else syAudioSetSongVolumeID(sngplayer, vol);
}

// 0x80020C5C
void syAudioSetSongReverb(s32 sngplayer, u32 reverb)
{
    s32 i;

    if (reverb > 127)
    {
        reverb = 127;
    }
    for (i = 0; i < 16; i++)
    {
        alCSPSetChlFXMix(gSYAudioALCSPlayers[sngplayer], i, reverb);
    }
}

// 0x80020CD4
void syAudioSetSongPriority(s32 sngplayer, u8 priority)
{
    s32 i;

    if (priority > 127)
    {
        priority = 127;
    }
    gSYAudioGlobalSongPriority = priority;

    for (i = 0; i < 16; i++)
    {
        alCSPSetChlPriority(gSYAudioALCSPlayers[sngplayer], i, priority);
    }
}

// 0x80020D58
s32 auIsBGMPlaying(s32 sngplayer)
{
    if (gSYAudioALCSPlayers[sngplayer]->state == AL_STOPPED)
    {
        return FALSE;
    }
    else return TRUE;
}

// https://decomp.me/scratch/jwM9v
#pragma GLOBAL_ASM("asm/nonmatchings/sys/audio/func_80020D88.s")

s32 func_80020E10(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    return -1;
}

void func_80020E28()
{
    s32 var_v0;
    func_800266A0_272A0();
    for (var_v0 = 0; var_v0 < D_8009D9BB_96DBB; var_v0++);
}

void func_80020E64(u32 arg0)
{
    s32 var_a0;

    if (arg0 >= 0x7801U)
        var_a0 = 0x7F;
    else
        var_a0 = (arg0 >> 8) & 0xFF;

    func_80026070_26C70(var_a0, arg0);
}

void func_80020EA0(s32 arg0, u32 arg1)
{
    void* sound;
    u32 var_a2;

    var_a2 = arg1;
    if (arg1 >= 0x8000U)
        var_a2 = 0x7FFF;

    sound = sSYAudioPlayingSound[arg0];

    if (sound != 0)
        func_80026174_26D74(sound, (var_a2 >> 8) & 0xFF, var_a2, arg0);
}

void func_80020EF8(s32 arg0, s32 arg1)
{
    void* sound;
    u8 var_a2;

    var_a2 = arg1;
    if (var_a2 >= 0x80)
        var_a2 = 0x7F;

    sound = sSYAudioPlayingSound[arg0];
    if (sound != NULL)
        func_80026104_26D04(sound, var_a2);
}

void func_80020F4C(s32 arg0, s32 arg1)
{
    void* sound;
    u8 var_a2;

    var_a2 = arg1;
    if (var_a2 >= 0x80)
        var_a2 = 0x7F;

    sound = sSYAudioPlayingSound[arg0];
    if (sound != NULL)
        func_80026094_26C94(sound, var_a2);
}

// 0x80020FA0
void func_80020FA0_21BA0(s32 arg0, s32 arg1) { }

// 0x80020FAC
void func_80020FAC(s32 arg0)
{
    if (sSYAudioPlayingSound[arg0] != 0)
    {
        func_80026738_27338(sSYAudioPlayingSound[arg0]);
        sSYAudioPlayingSound[arg0] = 0;
    }
}

// 0x80020FFC
void func_80020FFC(s32 arg0, u8 arg1)
{
    void* sound = sSYAudioPlayingSound[arg0];
    if (sound != NULL)
        ((u8*)sound)[0x1f] = arg1;
}

// 0x8002102C
void syAudioSetSettingsUpdated(void)
{
    dSYAudioIsSettingsUpdated = TRUE;
}

// 0x8002103C
sb32 syAudioGetSettingsUpdated(void)
{
    return dSYAudioIsSettingsUpdated;
}

// 0x80021048
sb32 syAudioGetRestarting(void)
{
    return dSYAudioIsRestarting;
}

// 0x80021054 - Returns (dSYAudioIsRestarting | dSYAudioIsSettingsUpdated)
sb32 syAudioGetStatus(void)
{
    return dSYAudioIsRestarting | dSYAudioIsSettingsUpdated;
}

void func_8002106C(void)
{
    osRecvMesg(&sSYMainThreadingQueue, 0, 0);
    dSYAudioIsSettingsUpdated = 1;
    osRecvMesg(&sSYMainThreadingQueue, 0, 1);
}