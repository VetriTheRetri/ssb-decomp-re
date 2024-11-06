#include "common.h"

#include <sys/thread3.h>
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
#define TWO_PI 6.2831853f
#define OSC_STATE_COUNT 44

typedef struct {
    u8 fxType;
    u8* heapBase;
    s32 heapSize;
    u16 outputRate;
    u8 maxPVoices;
    u8 maxVVoices;
    u8 maxUpdates;
    u8 maxEvents;
    u8 numSounds;
    u8 maxVoices[2];
    s8 unk_11;
    s8 unk_12;
    u8 unk_13;
    s32 bank1Start;
    s32 bank1End;
    u8* table1Start;
    s32 bank2Start;
    s32 bank2End;
    u8* table2Start;
    s32 romSbkStart;
} AuSettings;

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

typedef struct oscData_s {
    struct oscData_s* next;
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
} oscData;

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

typedef struct N_ALVoice_s {
    ALLink node;
    struct N_PVoice_s* pvoice;
    ALWaveTable* table;
    void* clientPrivate;
    s16 state;
    s16 priority;
    s16 fxBus;
    s16 unityPitch;
} N_ALVoice;

typedef struct {
    N_ALVoice voice;
    ALSound* sound; /* sound referenced here */
    s16 priority;
    f32 pitch; /* current playback pitch                    */
    s32 state; /* play state for this sound                 */
    s16 vol;   /* volume - combined with volume from bank   */
    ALPan pan; /* pan - 0 = left, 127 = right               */
    u8 fxMix;  /* wet/dry mix - 0 = dry, 127 = wet          */
} N_ALSoundState;


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

// s32* auCustomFXParamsTable[2] = { auCustomFXParams1, auCustomFXParams2 };

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

extern s32 auSettingsUpdated;// = 0;
extern s32 nextDMA; // = 0;
extern s32 auSoundQuality;// = 1;
extern s32 auCurrentFxType;// = 0;
extern s32 auRestarting;// = 0;
// s32 auFrameCounter = 1;
// s16 auSampleCount[] = { 0, 0, 0, 0 };
// u8 auGlobalSoundVolume = 127;
// u8 auGlobalSoundReverbAmt = 0;
// u32 D_800423E0 = 0x7F00;

// u8 auHeapBuffer[0x4B000];
// u32 D_80096250;
extern ALHeap auHeap;
// void* auHeapBase;
// s32 auHeapSize;
extern SCClient auClient;
extern OSMesgQueue auGameTickQueue;
extern OSMesgQueue auSPTaskMessageQueue;
extern OSMesgQueue auDMAMessageQueue;
extern OSMesg auGameTickMessages[1];
extern OSMesg auSPTaskMessages[1];
extern OSMesg auDMAMessages[50];
extern OSIoMesg audDMAIOMesgBuf[MAX_BUFFERS];
// ALGlobals auGlobals;
// s32 auFrequency;
extern s16* auDataBuffers[3];
// Acmd* auCmdListPtr;
extern Acmd* auCmdListBuffers[2];
// SYTaskAudio* auTask;
extern SYTaskAudio* auScTasks[2];
extern ALBank* D_8009D958_96D58;
// s32* auPlayingSound;
// s32* auStartingSound;
// s8* auSndpSoundId; // returned by alSndpAllocate
// u8* auSoundPriority;
// u8* auSoundIdleCounter;
// f32* auSoundPitch;
// u16* auSoundVolume;
// u8* auSoundPan;
// u8* auSoundReverbAmt;
// ALInstrument* auSFXPlayer;
// ALSndPlayer* auSoundPlayer;
extern ALBank* auSeqBank;
extern ALSeqFile* auSeqFile;
extern ALCSPlayer* auBGMPlayers[2];
// ALCSeq* auBGMSequences[2];
extern u8 auGlobalSongPriority;
extern u8* auBGMSeqData[2];
// u8* auBGMPlayerStatus;
// s32* auBGMSongId;
extern s32 auBGMVolTimer[2];
extern f32 auBGMVolume[2];
extern f32 auSongVolRate[2];
extern AuSettings auCurrentSettings;
// OSTime D_80096968;
extern oscData* freeOscStateList;

// AuSettings auPublicSettings = {
//     auHeapBuffer,
//     sizeof(auHeapBuffer),
//     32000,
//     0x16,
//     0x18,
//     0x40,
//     0x40,
//     10,
//     { 16, 16 },
//     0,
//     50,
//     100,
//     (s32) 0xdeadbeef,
//     (s32) 0xdeadbeef,
//     0xdeadbeef,
//     (s32) 0xdeadbeef,
//     (s32) 0xdeadbeef,
//     0xdeadbeef,
//     (s32) 0xdeadbeef,
//     AL_FX_CUSTOM
// };

static void _bnkfPatchBank(ALBank* bank, s32 offset, s32 table);
static void _bnkfPatchInst(ALInstrument* i, s32 offset, s32 table);
static void _bnkfPatchSound(ALSound* s, s32 offset, s32 table);
static void _bnkfPatchWaveTable(ALWaveTable* w, s32 offset, s32 table);


// 0x8001E5C0
void alHeapInit(ALHeap* hp, u8* base, s32 len) {
    s32 extraAlign = (AL_CACHE_ALIGN + 1) - ((s32) base & AL_CACHE_ALIGN);

    if (extraAlign != AL_CACHE_ALIGN + 1)
        hp->base = base + extraAlign;
    else
        hp->base = base;

    hp->len = len;
    hp->cur = hp->base;
    hp->count = 0;
}

// 0x8001E5F4
void* alHeapDBAlloc(u8* file, s32 line, ALHeap* hp, s32 num, s32 size) {
    s32 bytes;
    u8* ptr = 0;

    bytes = (num * size + AL_CACHE_ALIGN) & ~AL_CACHE_ALIGN;

    if ((hp->cur + bytes) <= (hp->base + hp->len)) {
        ptr = hp->cur;
        hp->cur += bytes;
    }

    return ptr;
}

// 0x8001E648
void alSeqFileNew(ALSeqFile* file, u8* base) {
    s32 offset = (s32) base;
    s32 i;

    /*
     * patch the file so that offsets are pointers
     */
    for (i = 0; i < file->seqCount; i++) {
        file->seqArray[i].offset = (u8*) ((u8*) file->seqArray[i].offset + offset);
    }
}

// 0x8001E688
void alBnkfNew(ALBankFile* file, u8* table) {
    s32 offset = (s32) file;
    s32 woffset = (s32) table;

    s32 i;

    /*
     * patch the file so that offsets are pointers
     */
    for (i = 0; i < file->bankCount; i++) {
        file->bankArray[i] = (ALBank*) ((u8*) file->bankArray[i] + offset);
        if (file->bankArray[i])
            _bnkfPatchBank(file->bankArray[i], offset, woffset);
    }
}

// 0x8001E708
void _bnkfPatchBank(ALBank* bank, s32 offset, s32 table) {
    s32 i;

    if (bank->flags)
        return;

    bank->flags = 1;

    if (bank->percussion) {
        bank->percussion = (ALInstrument*) ((u8*) bank->percussion + offset);
        _bnkfPatchInst(bank->percussion, offset, table);
    }

    for (i = 0; i < bank->instCount; i++) {
        bank->instArray[i] = (ALInstrument*) ((u8*) bank->instArray[i] + offset);
        if (bank->instArray[i])
            _bnkfPatchInst(bank->instArray[i], offset, table);
    }
}

// 0x8001E7C0
void _bnkfPatchInst(ALInstrument* inst, s32 offset, s32 table) {
    s32 i;

    if (inst->flags)
        return;

    inst->flags = 1;

    for (i = 0; i < inst->soundCount; i++) {
        inst->soundArray[i] = (ALSound*) ((u8*) inst->soundArray[i] + offset);
        _bnkfPatchSound(inst->soundArray[i], offset, table);
    }
}

// 0x8001E858
void _bnkfPatchSound(ALSound* s, s32 offset, s32 table) {
    if (s->flags)
        return;

    s->flags = 1;

    s->envelope = (ALEnvelope*) ((u8*) s->envelope + offset);
    s->keyMap = (ALKeyMap*) ((u8*) s->keyMap + offset);

    s->wavetable = (ALWaveTable*) ((u8*) s->wavetable + offset);
    _bnkfPatchWaveTable(s->wavetable, offset, table);
}

// 0x8001E8B0
void _bnkfPatchWaveTable(ALWaveTable* w, s32 offset, s32 table) {
    if (w->flags)
        return;

    w->flags = 1;

    w->base += table;

    if (w->type == AL_ADPCM_WAVE) {
        w->waveInfo.adpcmWave.book = (ALADPCMBook*) ((u8*) w->waveInfo.adpcmWave.book + offset);
        if (w->waveInfo.adpcmWave.loop)
            w->waveInfo.adpcmWave.loop = (ALADPCMloop*) ((u8*) w->waveInfo.adpcmWave.loop + offset);
    } else if (w->type == AL_RAW16_WAVE) {
        if (w->waveInfo.rawWave.loop)
            w->waveInfo.rawWave.loop = (ALRawLoop*) ((u8*) w->waveInfo.rawWave.loop + offset);
    }
}

// 0x8001E91C
void auRomRead(u32 romAddr, void* vramAddr, u32 size) {
    OSIoMesg DmaIoMessage;

    osInvalDCache((void*) vramAddr, (s32) size);

    DmaIoMessage.hdr.pri = OS_MESG_PRI_NORMAL;
    DmaIoMessage.hdr.retQueue = &auDMAMessageQueue;
    DmaIoMessage.dramAddr = vramAddr;
    DmaIoMessage.devAddr = romAddr;
    DmaIoMessage.size = size;

    osEPiStartDma(gRomPiHandle, &DmaIoMessage, OS_READ);
    osRecvMesg(&auDMAMessageQueue, NULL, OS_MESG_BLOCK);
}

// 0x8001E99C
s32 auDMA(s32 addr, s32 len, void* state) {
    void* freeBuffer;
    AMDMAState* dState = state;
    s32 delta = 0;
    u32 bStartAddr;
    u32 bEndAddr;
    AMDMABuffer* dBuff = &dState->buffers[dState->currentBuffer];
    OSMesg dummyMesg;

    /*
     * Is it in the last buffer
     */

    bStartAddr = (u32) dBuff->addr;
    bEndAddr = (u32) bStartAddr + dBuff->len;

    if ((addr >= bStartAddr) && (addr + len <= bEndAddr)) {
        freeBuffer = dBuff->ptr + addr - dBuff->addr;
    } else {
        if (++dState->currentBuffer >= dState->nBuffers) {
            dState->currentBuffer = 0;
        }
        dBuff = &dState->buffers[dState->currentBuffer];
        freeBuffer = dBuff->ptr;
        delta = addr & 0x1;
        addr -= delta;

        dBuff->addr = addr;
        dBuff->len = dBuff->size;

        audDMAIOMesgBuf[nextDMA].hdr.pri = OS_MESG_PRI_HIGH;
        audDMAIOMesgBuf[nextDMA].hdr.retQueue = &auDMAMessageQueue;
        audDMAIOMesgBuf[nextDMA].dramAddr = freeBuffer;
        audDMAIOMesgBuf[nextDMA].devAddr = (u32) addr;
        audDMAIOMesgBuf[nextDMA].size = dBuff->size;

        osEPiStartDma(gRomPiHandle, &audDMAIOMesgBuf[nextDMA++], OS_READ);
    }
    return (int) osVirtualToPhysical(freeBuffer) + delta;
}

// 0x8001EAC8
ALDMAproc auDMANew(AMDMAState** state) {
    int i;
    AMDMAState* dState;

    dState = (AMDMAState*) alHeapAlloc(&auHeap, 1, sizeof(AMDMAState));
    dState->currentBuffer = 0;
    dState->nBuffers = NUM_DMA_BUFFERS;
    for (i = 0; i < NUM_DMA_BUFFERS; i++) {
        dState->buffers[i].ptr = alHeapAlloc(&auHeap, 1, MAX_BUFFER_LENGTH);
        dState->buffers[i].addr = 0;
        dState->buffers[i].len = 0;
        dState->buffers[i].size = MAX_BUFFER_LENGTH;
    }
    *state = (AMDMAState*) dState;
    return auDMA;
}

// 0x8001EB98
f32 _depth2Cents(u8 depth) {
    f32 x = 1.03099303;
    f32 cents = 1.0;

    while (depth) {
        if (depth & 1)
            cents *= x;
        x *= x;
        depth >>= 1;
    }

    return (cents);
}


// 0x8001EBE4
ALMicroTime initOsc(void** oscState, f32* initVal, u8 oscType, u8 oscRate, u8 oscDepth, u8 oscDelay) {
    oscData* statePtr;
    ALMicroTime deltaTime = 0;

    if (freeOscStateList) /* yes there are oscStates available */
    {
        statePtr = freeOscStateList;
        freeOscStateList = freeOscStateList->next;
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
                statePtr->data.vsin.depthcents = _depth2Cents(oscDepth);
                statePtr->curCount = 0;
                statePtr->maxCount = 259 - oscRate; /* gives values 4-259 */
                *initVal = 1.0f;                    /* start at unity pitch */
                break;

            case VIBRATO_SQR: {
                s32 cents;
                statePtr->maxCount = 256 - oscRate; /* values from 1-256 */
                statePtr->curCount = statePtr->maxCount;
                statePtr->stateFlags = OSC_HIGH;
                cents = _depth2Cents(oscDepth);
                statePtr->data.vsqr.loRatio = alCents2Ratio(-cents);
                statePtr->data.vsqr.hiRatio = alCents2Ratio(cents);
                *initVal = statePtr->data.vsqr.hiRatio;
            } break;

            case VIBRATO_DSC_SAW: {
                s32 cents;
                statePtr->maxCount = 256 - oscRate; /* values from 1-256 */
                statePtr->curCount = statePtr->maxCount;
                cents = _depth2Cents(oscDepth);
                statePtr->data.vdsaw.hicents = cents;
                statePtr->data.vdsaw.centsrange = 2 * cents;
                *initVal = alCents2Ratio(statePtr->data.vdsaw.hicents);
            } break;

            case VIBRATO_ASC_SAW: {
                s32 cents;
                statePtr->maxCount = 256 - oscRate; /* values from 1-256 */
                statePtr->curCount = statePtr->maxCount;
                cents = _depth2Cents(oscDepth);
                statePtr->data.vasaw.locents = -cents;
                statePtr->data.vasaw.centsrange = 2 * cents;
                *initVal = alCents2Ratio(statePtr->data.vasaw.locents);
            } break;
        }
    }
    return (deltaTime); /* if there are no oscStates, return zero, but if
                           oscState was available, return delay in usecs */
}

// 0x8001EEB8
ALMicroTime updateOsc(void* oscState, f32* updateVal) {
    f32 tmpFlt;
    oscData* statePtr = (oscData*) oscState;
    ALMicroTime deltaTime = AL_USEC_PER_FRAME; /* in this example callback every */
                                               /* frame, but could be at any interval */

    switch (statePtr->type) /* perform update calculations */
    {
        case TREMELO_SIN:
            statePtr->curCount++;
            if (statePtr->curCount >= statePtr->maxCount)
                statePtr->curCount = 0;
            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt = sinf(tmpFlt * TWO_PI);
            tmpFlt = tmpFlt * (f32) statePtr->data.tsin.halfdepth;
            *updateVal = (f32) statePtr->data.tsin.baseVol + tmpFlt;
            break;

        case TREMELO_SQR:
            if (statePtr->stateFlags == OSC_HIGH) {
                *updateVal = (f32) statePtr->data.tsqr.loVal;
                statePtr->stateFlags = OSC_LOW;
            } else {
                *updateVal = (f32) statePtr->data.tsqr.hiVal;
                statePtr->stateFlags = OSC_HIGH;
            }
            deltaTime *= statePtr->maxCount;
            break;

        case TREMELO_DSC_SAW:
            statePtr->curCount++;
            if (statePtr->curCount > statePtr->maxCount)
                statePtr->curCount = 0;

            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt *= (f32) statePtr->data.tsaw.depth;
            *updateVal = (f32) statePtr->data.tsaw.baseVol - tmpFlt;
            break;

        case TREMELO_ASC_SAW:
            statePtr->curCount++;
            if (statePtr->curCount > statePtr->maxCount)
                statePtr->curCount = 0;
            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt *= (f32) statePtr->data.tsaw.depth;
            *updateVal = (f32) statePtr->data.tsaw.baseVol + tmpFlt;
            break;

        case VIBRATO_SIN:
            /* calculate a sin value (from -1 to 1) and multiply it by depthcents.
               Then convert cents to ratio. */

            statePtr->curCount++;
            if (statePtr->curCount >= statePtr->maxCount)
                statePtr->curCount = 0;
            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt = sinf(tmpFlt * TWO_PI) * statePtr->data.vsin.depthcents;
            *updateVal = alCents2Ratio((s32) tmpFlt);
            break;

        case VIBRATO_SQR:
            if (statePtr->stateFlags == OSC_HIGH) {
                statePtr->stateFlags = OSC_LOW;
                *updateVal = statePtr->data.vsqr.loRatio;
            } else {
                statePtr->stateFlags = OSC_HIGH;
                *updateVal = statePtr->data.vsqr.hiRatio;
            }
            deltaTime *= statePtr->maxCount;
            break;

        case VIBRATO_DSC_SAW:
            statePtr->curCount++;
            if (statePtr->curCount > statePtr->maxCount)
                statePtr->curCount = 0;
            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt *= (f32) statePtr->data.vdsaw.centsrange;
            tmpFlt = (f32) statePtr->data.vdsaw.hicents - tmpFlt;
            *updateVal = alCents2Ratio((s32) tmpFlt);
            break;

        case VIBRATO_ASC_SAW:
            statePtr->curCount++;
            if (statePtr->curCount > statePtr->maxCount)
                statePtr->curCount = 0;
            tmpFlt = (f32) statePtr->curCount / (f32) statePtr->maxCount;
            tmpFlt *= (f32) statePtr->data.vasaw.centsrange;
            tmpFlt += (f32) statePtr->data.vasaw.locents;
            *updateVal = alCents2Ratio((s32) tmpFlt);
            break;
    }

    return (deltaTime);
}


// 0x8001F42C
void stopOsc(void* oscState) {
    ((oscData*) oscState)->next = freeOscStateList;
    freeOscStateList = (oscData*) oscState;
}


// 0x8001F444
void auInit(void) {
    scAddClient(&auClient, &auGameTickQueue, auGameTickMessages, 1);
    osCreateMesgQueue(&auDMAMessageQueue, auDMAMessages, 50);
    osCreateMesgQueue(&auSPTaskMessageQueue, auSPTaskMessages, 1);
    osSendMesg(&auSPTaskMessageQueue, (OSMesg) NULL, OS_MESG_BLOCK);
}


#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/auLoadAssets.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/auCreatePlayers.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/auThreadMain.s")


// 0x80020A18
void auSetHighSoundQuality(void) {
    auSoundQuality = 1;
}

// 0x80020A28
void auSetLowSoundQuality(void) {
    auSoundQuality = 0;
}

// 0x80020A34
void auSetSoundQuality(s32 quality) {
    auSoundQuality = quality;
}

// 0x80020A40
void auSetReverbType(s32 fxType) {
    if (fxType != auCurrentFxType) {
        auRestarting++;
        auCurrentSettings.fxType = fxType;
    }
}

// 0x80020A74
void auStopBGM(void) {
    s32 i;

    for (i = 0; i < 1; i++) {
        auStopSong(i);
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/auPlaySong.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/auStopSong.s")


// 0x80020B38
void auSetBGMVolume(s32 playerID, u32 vol) {
    if (vol > 0x7800) {
        vol = 0x7800;
    }

    alCSPSetVol(auBGMPlayers[playerID], vol);
    auBGMVolume[playerID] = vol;
    auBGMVolTimer[playerID] = 0;
}

// 0x80020BC0
void auSetBGMVolumeSmooth(s32 playerID, u32 vol, u32 time) {
    if (vol > 0x7800) {
        vol = 0x7800;
    }

    if (time != 0) {
        auBGMVolTimer[playerID] = time;
        auSongVolRate[playerID] = (vol - auBGMVolume[playerID]) / time;
    } else {
        auSetBGMVolume(playerID, vol);
    }
}

// 0x80020C5C
void auSetBGMReverb(s32 playerID, u32 reverb) {
    s32 i;

    if (reverb > 127) {
        reverb = 127;
    }

    for (i = 0; i < 16; i++) {
        alCSPSetChlFXMix(auBGMPlayers[playerID], i, reverb);
    }
}

// 0x80020CD4
void auSetBGMPriority(s32 playerID, u8 priority) {
    s32 i;

    if (priority > 127) {
        priority = 127;
    }
    auGlobalSongPriority = priority;

    for (i = 0; i < 16; i++) {
        alCSPSetChlPriority(auBGMPlayers[playerID], i, priority);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/auIsBGMPlaying.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/func_80020D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/func_80020E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/func_80020E28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/func_80020E64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/func_80020EA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/func_80020EF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/func_80020F4C.s")

// 0x80020FA0
void func_80020FA0_21BA0(s32 arg0, s32 arg1) {}

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/func_80020FAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/func_80020FFC.s")

// 0x8002102C
void func_8002102C(void) {
    auSettingsUpdated = TRUE;
}

// 0x8002103C
s32 func_8002103C(void) {
    return auSettingsUpdated;
}

// 0x80021048
s32 func_80021048(void) {
    return auRestarting;
}

// 0x80021054
s32 func_80021054(void) {
    return auRestarting | auSettingsUpdated;
}

#pragma GLOBAL_ASM("asm/nonmatchings/sys/hal_audio/func_8002106C.s")
