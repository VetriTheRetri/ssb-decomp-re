#ifndef _FTPUBLICITY_H_
#define _FTPUBLICITY_H_

#include "fttypes.h"

extern sb32 ftPublicityTryStartCall(GObj *gobj, f32 knockback, s32 player_number);
extern void ftPublicityTryInterruptCall(void);
extern void ftPublicityPlayCommon(u16 new_sfx);
extern void ftPublicityCommonStop(void);
extern void ftPublicityDecideCall(GObj *gobj, s32 player_num, f32 knockback);
extern void ftPublicityDecideCommon(GObj *fighter_gobj, s32 player_number, f32 knockback, sb32 is_force_curr_knockback);
extern void ftPublicityCommonCheck(GObj *fighter_gobj, f32 knockback, sb32 is_force_curr_knockback);
extern void ftPublicityPlayCliffReact(GObj *fighter_gobj, f32 knockback);
extern void ftPublicityTryPlayFallSpecialReact(GObj *fighter_gobj);
extern void ftPublicityDefeatedAddID(u16 sfx_id);
extern void ftPublicityProcUpdate(GObj *public_gobj);
extern void ftPublicityMakeActor(void);

#endif
