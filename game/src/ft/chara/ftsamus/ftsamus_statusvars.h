#ifndef _FTSAMUS_STATUSVARS_H_
#define _FTSAMUS_STATUSVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

typedef struct ftSamus_FighterVars
{
    s32 charge_level;
    s32 charge_recoil;

} ftSamus_FighterVars;

typedef struct ftSamus_SpecialN_StatusVars
{
    bool32 is_release;
    s32 charge_int;
    GObj *charge_gobj;

} ftSamus_SpecialN_StatusVars;

typedef struct ftSamus_SpecialLw_StatusVars
{
    bool32 unused;

} ftSamus_SpecialLw_StatusVars;

typedef union ftSamus_StatusVars
{
    ftSamus_SpecialN_StatusVars specialn;
    ftSamus_SpecialLw_StatusVars speciallw;

} ftSamus_StatusVars;

#endif