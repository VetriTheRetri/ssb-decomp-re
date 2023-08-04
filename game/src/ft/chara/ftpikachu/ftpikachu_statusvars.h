#ifndef _FTPIKACHU_STATUSVARS_H_
#define _FTPIKACHU_STATUSVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

typedef struct ftPikachu_FighterVars
{
    bool32 is_thunder_destroy;

} ftPikachu_FighterVars;

typedef struct ftPikachu_SpecialHi_StatusVars
{
    s32 anim_frames;
    bool32 is_subsequent_zip;
    u32 unk_0x8;
    Vec2i stick_range;
    s32 pass_timer;
    f32 vel_x_bak;
    f32 vel_y_bak;
    f32 vel_ground_bak;

} ftPikachu_SpecialHi_StatusVars;

typedef struct ftPikachu_SpecialLw_StatusVars
{
    GObj *thunder_gobj;

} ftPikachu_SpecialLw_StatusVars;

typedef union ftPikachu_StatusVars
{
    ftPikachu_SpecialHi_StatusVars specialhi;
    ftPikachu_SpecialLw_StatusVars speciallw;

} ftPikachu_StatusVars;

#endif