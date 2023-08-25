#ifndef _IFTYPES_H_
#define _IFTYPES_H_

#include <ssb_types.h>
#include <macros.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

#include "ifdef.h"

struct ifCharacter
{
    Vec2f pos;
    Vec2f vel;
    u8 image_id; // e.g. the % display is set to 0x0A
    u8 is_allow_movement;
};

struct ifPlayerDamage
{
    s32 damage;
    s32 pos_adjust_wait; // Wait this many frames before snapping numbers back to original position?
    s32 flash_reset_wait; // Frames until damage display's white flash is reset; tied to pos_adjust_wait?
    f32 scale;
    ifCharacter chars[4];
    GObj *fighter_gobj;   // Fighter whom this HUD is assigned to
    u8 color_id;    // ??? This changes the damage HUD's color to white if set to 4
    u8 is_update_anim;
    u8 char_display_count;
    u8 shatter_anim_frame;
    u8 dead_stopupdate_wait; // This counts down if the player loses their last stock?
    u8 is_display_interface;
};

#endif
