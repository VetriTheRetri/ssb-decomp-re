#ifndef _FTNESS_STATUSVARS_H_
#define _FTNESS_STATUSVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <wp/weaponvars.h>

#define FTNESS_PKTHUNDER_TRAIL_POS_COUNT ((WPPKTHUNDER_TRAIL_COUNT * 2) + ((WPPKTHUNDER_TRAIL_COUNT * 2) / WPPKTHUNDER_TRAIL_COUNT))

typedef struct ftNess_FighterVars
{
    bool32 is_thunder_destroy;      // Bool to check if PK Thunder exists
    s32 pkthunder_trail_id;
    s16 pkthunder_trail_x[FTNESS_PKTHUNDER_TRAIL_POS_COUNT];
    s16 pkthunder_trail_y[FTNESS_PKTHUNDER_TRAIL_POS_COUNT];

} ftNess_FighterVars;

typedef struct ftNess_SpecialHi_StatusVars
{
    s32 pkjibaku_delay;            // Frames before PK Thunder Blast can be initiated (PK Thunder will go through Ness while this timer is greater than 0)
    s32 pkthunder_end_delay;       // Frames before PK Thunder transitions to its ending animation after the projectile despawns 
    s32 pkthunder_gravity_delay;   // Frames before Ness is affected by gravity while performing PK Thunder
    GObj *pkthunder_gobj;          // Pointer to the PK Thunder object
    s32 pkjibaku_anim_length;      // Number of frames PK Thunder Blast will loop
    f32 pkjibaku_angle;            // Angle of PK Thunder Blast (converted to 2D velocity vector with sin(vel) and cos(vel))
    Vec3f pkthunder_pos;           // Might be PK Thunder's collision detection when checking if Ness is hitting himself with it?

} ftNess_SpecialHi_StatusVars;

typedef struct ftNess_SpecialLw_StatusVars
{
    s32 release_lag;                // Frames PSI Magnet automatically stays in the hold animation after initiating the move
    bool32 is_release;              // Bool to check if PSI Magnet should be dropped (alas the B button is no longer being held)
    s32 gravity_delay;              // Frames before Ness is affected by gravity after initiating PSI Magnet

} ftNess_SpecialLw_StatusVars;

typedef union ftNess_StatusVars
{
    ftNess_SpecialHi_StatusVars specialhi;
    ftNess_SpecialLw_StatusVars speciallw;

} ftNess_StatusVars;

#endif