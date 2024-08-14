#ifndef _FTPUBLICITY_H_
#define _FTPUBLICITY_H_

#include "fttypes.h"

extern sb32 ftPublicityChantTryStart(GObj *gobj, f32 knockback, s32 player_number);
extern void ftPublicityChantTryInterrupt(void);
extern void ftPublicityCommonPlay(u16 new_sfx);
extern void ftPublicityCommonStop(void);
extern void ftPublicityChantDecide(GObj *gobj, s32 player_num, f32 knockback);
extern void ftPublicityCommonDecide(GObj *fighter_gobj, s32 player_number, f32 knockback, sb32 is_force_current_knockback);
extern void ftPublicityCommonCheck(GObj *fighter_gobj, f32 knockback, sb32 is_force_current_knockback);
extern void ftPublicityKnockbackDecide(GObj *fighter_gobj, f32 knockback);
extern void ftPublicityDownDecide(GObj *fighter_gobj);
extern void ftPublicityDefeatedAddID(u16 sfx_id);
extern void ftPublicityProcUpdate(GObj *public_gobj);
extern void ftPublicityMakeActor(void);

#endif
