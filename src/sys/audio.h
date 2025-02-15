#ifndef _SYAUDIO_H_
#define _SYAUDIO_H_

#include <PR/ultratypes.h>
#include <PR/libaudio.h>
#include <n_audio/n_libaudio.h>

typedef struct {
    u32 addr;
    u32 len;
    u32 size;
    char* ptr;
} AMDMABuffer;

typedef struct {
    u32 nBuffers;
    u32 currentBuffer;
    AMDMABuffer buffers[4];
} AMDMAState;

typedef struct SYAudioPackage
{
    s32 count;
    uintptr_t data[1];

} SYAudioPackage;

typedef struct SYAudioSettings
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
    u8 priority;
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
    u8 sndplayers_num;
    u16 unk34;
    u16 unk36;
    s32 unk38;
    uintptr_t *fgm_ucode_data;
    uintptr_t *fgm_table_data;
    uintptr_t *unk44;
    u16 fgm_ucode_count;
    u16 fgm_table_count;
    u16 unk4C;
    uintptr_t unk50;
    uintptr_t unk54;
    uintptr_t fgm_table_start;
    uintptr_t fgm_table_end;
    uintptr_t fgm_ucode_start;
    uintptr_t fgm_ucode_end;

} SYAudioSettings;

extern SYAudioSettings dSYAudioPublicSettings;
extern u8 gSYAudioHeapBuffer[0x56000];
extern u32 gSYAudioThreadTimeDelta;
extern ALCSPlayer *gSYAudioALCSPlayers[/* */];

extern void alHeapInit(ALHeap *hp, u8 *base, s32 len);
extern void* alHeapDBAlloc(u8 *file, s32 line, ALHeap *hp, s32 num, s32 size);
extern void alSeqFileNew(ALSeqFile *file, u8 *base);
extern void alBnkfNew(ALBankFile *file, u8 *table);
extern void syAudioBnkfPatchBank(ALBank *bank, uintptr_t offset, uintptr_t table);
extern void syAudioBnkfPatchInst(ALInstrument *inst, uintptr_t offset, uintptr_t table);
extern void syAudioBnkfPatchSound(ALSound *s, uintptr_t offset, uintptr_t table);
extern void syAudioBnkfPatchWaveTable(ALWaveTable *w, uintptr_t offset, uintptr_t table);
extern void syAudioReadRom(uintptr_t rom, void *vram, size_t size);
extern s32 syAudioDma(s32 addr, s32 len, void *state);
extern ALDMAproc syAudioDmaNew(AMDMAState **state);
extern f32 syAudioDepth2Cents(u8 depth);
extern ALMicroTime syAudioInitOsc(void **oscState, f32 *initVal, u8 oscType, u8 oscRate, u8 oscDepth, u8 oscDelay);
extern ALMicroTime syAudioUpdateOsc(void *oscState, f32 *updateVal);
extern void syAudioStopOsc(void *oscState);
extern void syAudioInit(void);
extern void syAudioLoadAssets(void);
extern void syAudioMakeBGMPlayers(void);
extern void syAudioThreadMain(void *arg);
extern void syAudioSetStereo(void);
extern void syAudioSetMono(void);
extern void syAudioSetQuality(s32 quality);
extern void syAudioSetReverbType(s32 fx_type);
extern void syAudioStopBGMAll(void);
extern s32 syAudioPlayBGM(s32 sngplayer, u32 bgm);
extern void syAudioStopBGM(s32 sngplayer);
extern void syAudioSetBGMVolume(s32 sngplayer, u32 vol);
extern void syAudioSetBGMVolumeFade(s32 sngplayer, u32 vol, u32 time);
extern void syAudioSetBGMReverb(s32 sngplayer, u32 reverb);
extern void syAudioSetBGMPriority(s32 sngplayer, u8 priority);
extern s32 syAudioCheckBGMPlaying(s32 sngplayer);
extern s32 syAudioPlayFGM(u32 fgm);
extern s32 func_80020E10(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80020E28(void);
extern void func_80020E64(u32 volume);
extern void func_80020EA0(s32 sndplayer, u32 arg1);
extern void func_80020EF8(s32 sndplayer, s32 arg1);
extern void func_80020F4C(s32 sndplayer, s32 arg1);
extern void syAudioStopFGM(s32 sndplayer);
extern void func_80020FFC(s32 sndplayer, u8 arg1);
extern void syAudioSetSettingsUpdated(void);
extern s32 syAudioGetSettingsUpdated(void);
extern s32 syAudioGetRestarting(void);
extern sb32 syAudioGetStatus(void);
extern void syAudioUpdateMesgQueue(void);

#endif
