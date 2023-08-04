#ifndef _FTFOX_STATUSVARS_H_
#define _FTFOX_STATUSVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

typedef struct ftFox_SpecialHi_StatusVars
{
    s32 launch_delay;
    s32 gravity_delay;
    f32 angle;
    s32 anim_frames;
    s32 decelerate_wait;
    s32 coll_timer_unk;

} ftFox_SpecialHi_StatusVars;

typedef struct ftFox_SpecialLw_StartusVars
{
    s32 release_lag;
    s32 turn_frames;
    bool32 is_release;
    GObj *effect_gobj;
    s32 gravity_delay;

} ftFox_SpecialLw_StatusVars;

typedef union ftFox_StatusVars
{
    ftFox_SpecialHi_StatusVars specialhi;
    ftFox_SpecialLw_StatusVars speciallw;

} ftFox_StatusVars;

#endif