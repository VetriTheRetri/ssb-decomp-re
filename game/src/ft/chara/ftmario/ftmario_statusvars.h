#ifndef _FTMARIO_STATUSVARS_H_
#define _FTMARIO_STATUSVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

typedef struct ftMario_FighterVars
{
    bool32 is_expend_tornado;

} ftMario_FighterVars;

typedef struct ftMario_SpecialHi_StatusVars
{
    bool32 is_air_bool;

} ftMario_SpecialHi_StatusVars;

typedef struct ftMario_SpecialLw_StatusVars
{
    f32 friction; // Ground drift of Mario Tornado
    s32 dust_gfx_int;  // Interval between dust GFX kicked up during Mario Tornado

} ftMario_SpecialLw_StatusVars;

typedef union ftMario_StatusVars
{
    ftMario_SpecialHi_StatusVars specialhi;
    ftMario_SpecialLw_StatusVars speciallw;

} ftMario_StatusVars;

#endif