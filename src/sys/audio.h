#ifndef SYS_HAL_AUDIO_H
#define SYS_HAL_AUDIO_H

#include <PR/ultratypes.h>
#include <PR/libaudio.h>
#include <n_audio/n_libaudio.h>

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

extern void auThreadMain(void *arg);
extern s32 syAudioGetRestarting(void);
extern void syAudioSetSettingsUpdated(void);
extern s32 syAudioGetSettingsUpdated(void);
extern void func_80020A40(s32);

#endif /* SYS_HAL_AUDIO_H */
