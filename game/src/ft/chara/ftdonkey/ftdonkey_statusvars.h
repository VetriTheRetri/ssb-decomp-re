#ifndef _FTDONKEY_STATUSVARS_H_
#define _FTDONKEY_STATUSVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

typedef struct ftDonkey_FighterVars
{
    s32 charge_level;

} ftDonkey_FighterVars;

typedef struct ftDonkey_SpecialN_StatusVars
{
    bool32 is_release;
    s32 charge_level;
    bool32 is_charging;
    bool32 is_cancel;

} ftDonkey_SpecialN_StatusVars;

typedef struct ftDonkey_SpecialHi_StatusVars
{
    s32 unk_0x0;

} ftDonkey_SpecialHi_StatusVars;

typedef struct ftDonkey_SpecialLw_StatusVars
{
    bool32 is_loop;

} ftDonkey_SpecialLw_StatusVars;

typedef union ftDonkey_StatusVars
{
    ftDonkey_SpecialN_StatusVars specialn;
    ftDonkey_SpecialHi_StatusVars specialhi;
    ftDonkey_SpecialLw_StatusVars speciallw;

} ftDonkey_StatusVars;

#endif
