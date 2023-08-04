#ifndef _FTLINK_STATUSVARS_H_
#define _FTLINK_STATUSVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

typedef struct ftLink_FighterVars
{
    GObj *boomerang_gobj;

} ftLink_FighterVars;

typedef struct ftLink_SpecialN_StatusVars
{
    bool32 is_smash;

} ftLink_SpecialN_StatusVars;

typedef struct ftLink_SpecialHi_StatusVars
{
    GObj *spin_attack_gobj;

} ftLink_SpecialHi_StatusVars;

typedef union ftLink_StatusVars
{
    ftLink_SpecialN_StatusVars specialn;
    ftLink_SpecialHi_StatusVars specialhi;

} ftLink_StatusVars;

#endif