#ifndef _GRVARS_H_
#define _GRVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

#define GRPUPUPU_WHISPY_WAIT_DURATION_BASE 960
#define GRPUPUPU_WHISPY_WAIT_DURATION_RANDOM 1140
#define GRPUPUPU_WHISPY_WIND_DURATION_BASE 240
#define GRPUPUPU_WHISPY_WIND_DURATION_RANDOM 80
#define GRPUPUPU_WHISPY_WIND_RUMBLE_WAIT 18

typedef struct grPupupuEffect
{
    Vec3f pos;
    f32 rotate;

} grPupupuEffect;

typedef enum grPupupuWhispyWindStatus
{
    grPupupu_WhispyWind_Default,
    grPupupu_WhispyWind_Wait,
    grPupupu_WhispyWind_Turn,
    grPupupu_WhispyWind_Open,
    grPupupu_WhispyWind_Blow,
    grPupupu_WhispyWind_Stop

} grPupupuWhispyWindStatus;

typedef enum grPupupuWhispyEyesStatus
{
    grPupupu_WhispyEyes_Turn,

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
    u16 whispy_wind_wait;
    u16 whispy_wind_duration;
    u16 whispy_blink_wait;
    u8 whispy_status;
    u8 unk_pupupu_0x7;
    u8 dust_stop_wait;
    u8 rumble_wait;
    s8 lr_players;
    u8 flowers_back_status;
    u8 flowers_front_status;
    u8 whispy_eyes_status;
    u8 whispy_mouth_status;

} grCommon_GroundVars_Pupupu;

#endif