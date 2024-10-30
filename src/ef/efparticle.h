#ifndef _EFALLOC_H_
#define _EFALLOC_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern void efParticleInitAll(void);
extern void efParticleHeadSetSkipID(u32 id);
extern void efParticleHeadSetSkipAll(void);
extern void efParticleHeadClearSkipID(u32 id);
extern void efParticleHeadClearSkipAll(void);
extern s32 efParticleGetBankID(uintptr_t textures_lo);
extern s32 efParticleGetLoadBankID(uintptr_t textures_lo, uintptr_t textures_hi, uintptr_t scripts_lo, uintptr_t scripts_hi);

#endif
