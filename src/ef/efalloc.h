#ifndef _EFALLOC_H_
#define _EFALLOC_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern void efAllocInitParticleBank(void);
extern void func_ovl2_801158D8(u32 lshift);
extern void func_ovl2_80115910(void);
extern void func_ovl2_80115944(u32 lshift);
extern void func_ovl2_80115980(void);
extern s32 efAllocGetParticleBankID(uintptr_t textures_lo);
extern s32 efAllocGetAddParticleBankID(uintptr_t textures_lo, uintptr_t textures_hi, uintptr_t scripts_lo, uintptr_t scripts_hi);

#endif
