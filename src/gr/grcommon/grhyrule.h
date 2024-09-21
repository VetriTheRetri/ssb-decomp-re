#ifndef _GRHYRULE_H_
#define _GRHYRULE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>
#include <ef/efdef.h>

extern intptr_t lGRHyruleParticleBankGenLo;            // 0x00B1F960
extern intptr_t lGRHyruleParticleBankGenHi;            // 0x00B1FC80
extern intptr_t lGRHyruleParticleBankTextureLo;           // 0x00B1FC80
extern intptr_t lGRHyruleParticleBankTextureHi;           // 0x00B22980

extern lbParticle* grHyruleTwisterMakeEffect(Vec3f *pos, s32 effect_id);
extern GObj* grHyruleMakeTwister(Vec3f *pos);
extern void grHyruleTwisterUpdateSleep(void);
extern void grHyruleTwisterUpdateWait(void);
extern void grHyruleTwisterUpdateSummon(void);
extern sb32 grHyruleTwisterDecLifetimeCheckStop(void);
extern s32 grHyruleTwisterGetLR(void);
extern void grHyruleTwisterUpdateMove(void);
extern void grHyruleTwisterUpdateTurn(void);
extern void grHyruleTwisterUpdateStop(void);
extern void grHyruleTwisterUpdateSubside(void);
extern void grHyruleTwisterProcUpdate(GObj *ground_gobj);
extern void grHyruleTwisterInitVars(void);
extern GObj* grHyruleMakeGround(void);
extern sb32 grHyruleTwisterCheckGetDamageKind(GObj *ground_gobj, GObj *fighter_gobj, s32 *kind);
extern sb32 grHyruleTwisterCheckGetPosition(Vec3f *pos);

#endif
