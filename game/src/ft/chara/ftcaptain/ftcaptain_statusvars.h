#ifndef _FTCAPTAIN_STATUSVARS_H_
#define _FTCAPTAIN_STATUSVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

typedef struct ftCaptain_FighterVars
{
    s32 falcon_punch_unk;

} ftCaptain_FighterVars;

typedef struct ftCaptain_SpecialHi_StatusVars
{
    u16 unk_0x0;
    Vec3f vel;

} ftCaptain_SpecialHi_StatusVars;

typedef struct ftCaptain_SpecialLw_StatusVars
{
    u16 scale_apply_timer;
    f32 vel_scale;

} ftCaptain_SpecialLw_StatusVars;

typedef union ftCaptain_StatusVars
{
    ftCaptain_SpecialHi_StatusVars specialhi;
    ftCaptain_SpecialLw_StatusVars speciallw;

} ftCaptain_StatusVars;

#endif