#ifndef _GRVARS_H_
#define _GRVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

#include <ef/efdef.h>

#define GRPUPUPU_WHISPY_BLINK_WAIT_BASE 30
#define GRPUPUPU_WHISPY_BLINK_WAIT_RANDOM 270
#define GRPUPUPU_WHISPY_WAIT_DURATION_BASE 960
#define GRPUPUPU_WHISPY_WAIT_DURATION_RANDOM 1140
#define GRPUPUPU_WHISPY_WIND_DURATION_BASE 240
#define GRPUPUPU_WHISPY_WIND_DURATION_RANDOM 80
#define GRPUPUPU_WHISPY_WIND_RUMBLE_WAIT 18
#define GRPUPUPU_WHISPY_POS_X (-525.0F)
#define GRPUPUPU_WHISPY_WIND_VEL_BASE 6.0F
#define GRPUPUPU_WHISPY_WIND_DIST_DECAY 0.0006F
#define GRPUPUPU_WHISPY_WINDBOX_TOP 1000.0F
#define GRPUPUPU_WHISPY_WINDBOX_BOTTOM (-10.0F)
#define GRPUPUPU_WHISPY_WINDBOX_EDGELEFT (-2325.0F)
#define GRPUPUPU_WHISPY_WINDBOX_EDGERIGHT 2275.0F

typedef struct grPupupuEffect
{
    Vec3f pos;
    f32 rotate;

} grPupupuEffect;

typedef enum grPupupuWhispyWindStatus
{
    grPupupu_WhispyWind_Sleep,
    grPupupu_WhispyWind_Wait,
    grPupupu_WhispyWind_Turn,
    grPupupu_WhispyWind_Open,
    grPupupu_WhispyWind_Blow,
    grPupupu_WhispyWind_Stop

} grPupupuWhispyWindStatus;

typedef enum grPupupuWhispyEyesStatus
{
    grPupupu_WhispyEyes_Turn,
    grPupupu_WhispyEyes_Blink

} grPupupuWhispyEyesStatus;

typedef enum grPupupuWhispyMouthStatus
{
    grPupupu_WhispyMouth_Stretch,
    grPupupu_WhispyMouth_Turn,
    grPupupu_WhispyMouth_Open,
    grPupupu_WhispyMouth_Close

} grPupupuWhispyMouthStatus;

typedef enum grPupupuFlowerStatus
{
    grPupupu_Flower_Default,
    grPupupu_Flower_WindStart,
    grPupupu_Flower_WindLoopStart,
    grPupupu_Flower_WindLoop,
    grPupupu_Flower_WindLoopEnd,
    grPupupu_Flower_WindStop

} grPupupuFlowerStatus;

typedef struct grCommon_GroundVars_Pupupu
{
    void *map_head;
    GObj *map_gobj[4];
    s32 effect_bank_index;
    efTransform *leaves_eftrans;
    efTransform *dust_eftrans;
    u16 whispy_wind_wait;
    u16 whispy_wind_duration;
    s16 whispy_blink_wait;
    u8 whispy_status;
    u8 flowers_back_wait;
    u8 flowers_front_wait;
    u8 rumble_wait;
    s8 lr_players;
    u8 flowers_back_status;
    u8 flowers_front_status;
    s8 whispy_eyes_status;
    s8 whispy_mouth_status;
    s8 whispy_mouth_texture;
    s8 whispy_eyes_texture;

} grCommon_GroundVars_Pupupu;

typedef struct grCommon_GroundVars_Sector
{
    void *map_head;
    GObj *map_gobj;
    DObj *unk_sector_0x8;
    DObj *unk_sector_0xC;
    u8 filler_0x10[0x24 - 0x10];
    DObj *unk_sector_0x24;
    DObj *unk_sector_0x28;
    DObj *unk_sector_0x2C;
    DObj *unk_sector_0x30;
    DObj *unk_sector_dobj;
    u8 filler_0x20[0x3C - 0x38];
    void *unk_sector_0x3C;
    f32 arwing_target_x;
    u16 arwing_appear_timer;
    u16 arwing_state_timer;
    u8 arwing_status;
    u8 unk_sector_0x49;
    u8 arwing_type_cycle;
    u8 arwing_laser_ammo;
    s8 unk_sector_0x4C;
    s8 unk_sector_0x4D;
    u16 unk_sector_0x4E;
    u16 arwing_laser_timer;
    u8 unk_sector_0x52;
    s8 arwing_pilot_current; // Line IDs?
    u8 arwing_pilot_prev;
    u8 arwing_laser_count; // Laser shot count? e.g. if set to 2, the arwing will fire 2 lasers at once (though this is hardcoded to fire two shots in the weapon make function)
    u8 unk_sector_0x56;
    u8 unk_sector_0x57;
    u8 is_arwing_line_active;
    u8 unk_sector_0x59;

} grCommon_GroundVars_Sector;

#endif