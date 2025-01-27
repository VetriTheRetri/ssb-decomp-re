#ifndef SYS_HAL_AUDIO_H
#define SYS_HAL_AUDIO_H

#include <PR/ultratypes.h>
#include <PR/libaudio.h>
#include <n_audio/n_libaudio.h>

extern s8 D_8003CB6D;
extern u32 D_8009D2D0;
extern ALCSPlayer *gSYAudioALCSPlayers[/* */];

extern void auThreadMain(void *arg);
extern s32 syAudioGetRestarting(void);
extern void syAudioSetSettingsUpdated(void);
extern s32 syAudioGetSettingsUpdated(void);
extern void func_80020A40(s32);

#endif /* SYS_HAL_AUDIO_H */
