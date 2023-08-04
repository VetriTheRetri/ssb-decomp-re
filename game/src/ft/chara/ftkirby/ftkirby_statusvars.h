#ifndef _FTKIRBY_STATUSVARS_H_
#define _FTKIRBY_STATUSVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

#define FTKIRBY_JUMPAERIAL_VEL_MUL 0.8F

typedef struct ftKirby_FighterVars
{
    s32 copy_id;
    s32 copysamus_charge_level;
    s32 copysamus_charge_recoil;
    s32 copydonkey_charge_level;
    s32 copycaptain_falcon_punch_unk;
    s32 copypurin_unk;
    bool32 is_ignore_losecopy;
    GObj *copylink_boomerang_gobj;

} ftKirby_FighterVars;

typedef struct ftKirby_SpecialN_StatusVars
{
    s16 copy_id;
    s16 release_lag;
    Vec3f dist;

} ftKirby_SpecialN_StatusVars;

typedef struct ftKirby_SpecialLw_StatusVars
{
    s16 duration;
    s16 unk_0x2;
    s16 colanim_id;

} ftKirby_SpecialLw_StatusVars;

typedef struct ftKirby_CopyDonkey_SpecialN_StatusVars
{
    bool32 is_release;
    s32 charge_level;
    bool32 is_charging;
    bool32 is_cancel;

} ftKirby_CopyDonkey_SpecialN_StatusVars;

typedef struct ftKirby_CopySamus_SpecialN_StatusVars
{
    bool32 is_release;
    s32 charge_int;
    GObj *charge_gobj;

} ftKirby_CopySamus_SpecialN_StatusVars;

typedef struct ftKirby_CopyLink_SpecialN_StatusVars
{
    bool32 is_smash;

} ftKirby_CopyLink_SpecialN_StatusVars;

typedef union ftKirby_StatusVars
{
    ftKirby_SpecialN_StatusVars specialn;
    ftKirby_SpecialLw_StatusVars speciallw;
    ftKirby_CopyDonkey_SpecialN_StatusVars copydonkey_specialn;
    ftKirby_CopySamus_SpecialN_StatusVars copysamus_specialn;
    ftKirby_CopyLink_SpecialN_StatusVars copylink_specialn;

} ftKirby_StatusVars;

#endif