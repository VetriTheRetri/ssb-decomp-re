#ifndef _FTYOSHI_STATUSVARS_H_
#define _FTYOSHI_STATUSVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

#define FTYOSHI_JUMPAERIAL_KNOCKBACK_RESIST 140.0F

typedef struct ftYoshi_SpecialN_StatusVars
{
    u32 unk_0x0;
    u16 unk_0x4;

} ftYoshi_SpecialN_StatusVars;

typedef struct ftYoshi_SpecialHi_StatusVars
{
    GObj *egg_gobj;
    s16 throw_force;

} ftYoshi_SpecialHi_StatusVars;

typedef union ftYoshi_StatusVars
{
    ftYoshi_SpecialN_StatusVars specialn;
    ftYoshi_SpecialHi_StatusVars specialhi;

} ftYoshi_StatusVars;

#endif