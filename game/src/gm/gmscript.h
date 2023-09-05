#ifndef _GMSCRIPT_H_
#define _GMSCRIPT_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <ft/fttypes.h>

#define ftMotionEventAdvance(event, type)                                       \
((event)->p_script = (void*) ((uintptr_t)(event)->p_script + (sizeof(type))))   \

#define ftMotionEventCast(event, type)                                          \
((type*) (event)->p_script)                                                     \

// WARNING: Only advances 4 bytes at a time
#define ftMotionEventCastAdvance(event, type)                                   \
((type*) (event)->p_script++)                                                   \

#define caColorEventAdvance(event, type)                                        \
((event) = (void*) ((uintptr_t)event + sizeof(type)))                             

#define caColorEventCast(event, type)                                           \
((type*) (event))                                                               \

// WARNING: Only advances 4 bytes at a time
#define caColorEventCastAdvance(event, type)                                    \
((type*) (event)++)                                                             \

#define gmRumbleEventAdvance(event, type)                                       \
((event) = (void*) ((uintptr_t)(event) + (sizeof(type))))   \

#define gmRumbleEventCast(event, type)                                          \
((type*) (event))                                                               \

// WARNING: Only advances 2 bytes at a time
#define gmRumbleEventCastAdvance(event, type)                                   \
((type*) (event)++)                                                             \

typedef enum ftMotionEventKind
{
    ftMotionEvent_Kind_End,
    ftMotionEvent_Kind_SyncWait,
    ftMotionEvent_Kind_AsyncWait,
    ftMotionEvent_Kind_Hit,
    ftMotionEvent_Kind_HitScaleOffset,
    ftMotionEvent_Kind_ClearHitIndex,
    ftMotionEvent_Kind_ClearHitAll,
    ftMotionEvent_Kind_SetHitOffset,
    ftMotionEvent_Kind_SetHitDamage,
    ftMotionEvent_Kind_SetHitSize,
    ftMotionEvent_Kind_SetHitSoundLevel,
    ftMotionEvent_Kind_RefreshHitIndex,
    ftMotionEvent_Kind_SetFighterThrow,
    ftMotionEvent_Kind_SubroutineThrown,
    ftMotionEvent_Kind_PlaySFX,
    ftMotionEvent_Kind_PlayLoopSFXStoreInfo,
    ftMotionEvent_Kind_StopLoopSFX,
    ftMotionEvent_Kind_PlayVoiceStoreInfo,
    ftMotionEvent_Kind_PlayLoopVoiceStoreInfo,
    ftMotionEvent_Kind_PlaySFXStoreInfo,
    ftMotionEvent_Kind_PlaySmashVoice,
    ftMotionEvent_Kind_SetFlag0,
    ftMotionEvent_Kind_SetFlag1,
    ftMotionEvent_Kind_SetFlag2,
    ftMotionEvent_Kind_SetFlag3,
    ftMotionEvent_Kind_SetAirJumpAdd,
    ftMotionEvent_Kind_SetAirJumpMax,
    ftMotionEvent_Kind_SetHitStatusPartAll,
    ftMotionEvent_Kind_SetHitStatusPart,
    ftMotionEvent_Kind_SetHitStatusAll,
    ftMotionEvent_Kind_ResetHurtAll,
    ftMotionEvent_Kind_SetHurtPart,
    ftMotionEvent_Kind_LoopBegin,
    ftMotionEvent_Kind_LoopEnd,
    ftMotionEvent_Kind_Subroutine,
    ftMotionEvent_Kind_Return,
    ftMotionEvent_Kind_Goto,
    ftMotionEvent_Kind_ScriptPause,
    ftMotionEvent_Kind_Effect,
    ftMotionEvent_Kind_EffectScaleOffset, // ???
    ftMotionEvent_Kind_SetModelPart,
    ftMotionEvent_Kind_ResetModelPartAll,
    ftMotionEvent_Kind_HideModelPartAll,
    ftMotionEvent_Kind_SetTexturePart,
    ftMotionEvent_Kind_SetColAnim,
    ftMotionEvent_Kind_ResetColAnim,
    ftMotionEvent_Kind_SetParallelScript, // What
    ftMotionEvent_Kind_SlopeContour,
    ftMotionEvent_Kind_HideItem,
    ftMotionEvent_Kind_MakeRumble,
    ftMotionEvent_Kind_StopRumble,
    ftMotionEvent_Kind_AfterImage // Sword Trail

} ftMotionEventKind;

typedef enum caColorEventKind
{
    caColorEvent_Kind_End,
    caColorEvent_Kind_Wait,
    caColorEvent_Kind_Goto,
    caColorEvent_Kind_LoopBegin,
    caColorEvent_Kind_LoopEnd,
    caColorEvent_Kind_Subroutine,
    caColorEvent_Kind_Return,
    caColorEvent_Kind_SetParallelScript,
    caColorEvent_Kind_ToggleColorOff,
    caColorEvent_Kind_SetColor1,
    caColorEvent_Kind_BlendColor1,
    caColorEvent_Kind_SetColor2,
    caColorEvent_Kind_BlendColor2,
    caColorEvent_Kind_Effect,
    caColorEvent_Kind_EffectScaleOffset, // ???
    caColorEvent_Kind_SetLight,
    caColorEvent_Kind_ToggleLightOff,
    caColorEvent_Kind_PlaySFX,
    caColorEvent_Kind_SetUnk

} caColorEventKind;

typedef enum gmRumbleEventKind
{
    gmRumbleEvent_Kind_SetScript,
    gmRumbleEvent_Kind_StartRumble,
    gmRumbleEvent_Kind_StopRumble,
    gmRumbleEvent_Kind_LoopBegin,
    gmRumbleEvent_Kind_LoopEnd

} gmRumbleEventKind;

typedef struct ftScriptPointer
{
    void *p_goto[1];
    s32 script_index[4];

} ftScriptPointer;

typedef struct ftMotionEvent
{
    f32 frame_timer;
    u32 *p_script;
    s32 script_index;
    void *p_goto[1];
    s32 loop_count[4];

} ftMotionEvent;

typedef struct ftMotionEventDefault // Event with no arguments
{
    u32 opcode : 6;

} ftMotionEventDefault;

typedef struct ftMotionEventDouble // Event with no arguments
{
    u32 opcode : 6;
    u32 filler1 : 26;
    u32 filler2 : 32;
    
} ftMotionEventDouble;

typedef struct ftMotionEventWait
{
    u32 opcode : 6;
    u32 frames : 26;

} ftMotionEventWait;

typedef struct ftMotionEventMakeHit1
{
    u32 opcode : 6;
    u32 hit_id : 3;
    u32 group_id : 3;
    s32 joint_index : 7;
    u32 damage : 8;
    u32 rebound : 1;
    u32 element : 4;

} ftMotionEventMakeHit1;

typedef struct ftMotionEventMakeHit2
{
    u32 size : 16;
    s32 off_x : 16;

} ftMotionEventMakeHit2;

typedef struct ftMotionEventMakeHit3
{
    s32 off_y : 16;
    s32 off_z : 16;

} ftMotionEventMakeHit3;

typedef struct ftMotionEventMakeHit4
{
    s32 angle : 10;
    u32 knockback_scale : 10;
    u32 knockback_weight : 10;
    u32 is_hit_ground_air : 2;

} ftMotionEventMakeHit4;

typedef struct ftMotionEventMakeHit5
{
    s32 shield_damage : 8;
    u32 sfx_level : 3;
    u32 sfx_kind : 4;
    u32 knockback_base : 10;

} ftMotionEventMakeHit5;

typedef struct ftMotionEventMakeHit
{
    ftMotionEventMakeHit1 s1;
    ftMotionEventMakeHit2 s2;
    ftMotionEventMakeHit3 s3;
    ftMotionEventMakeHit4 s4;
    ftMotionEventMakeHit5 s5;

} ftMotionEventMakeHit;

typedef struct ftMotionEventSetHitOffset1
{
    u32 opcode : 6;
    u32 hit_id : 3;
    s32 off_x : 16;

} ftMotionEventSetHitOffset1;

typedef struct ftMotionEventSetHitOffset2
{
    s32 off_y : 16;
    s32 off_z : 16;

} ftMotionEventSetHitOffset2;

typedef struct ftMotionEventSetHitOffset
{
    ftMotionEventSetHitOffset1 s1;
    ftMotionEventSetHitOffset2 s2;

} ftMotionEventSetHitOffset;

typedef struct ftMotionEventSetHitDamage
{
    u32 opcode : 6;
    u32 hit_id : 3;
    u32 damage : 8;

} ftMotionEventSetHitDamage;

typedef struct ftMotionEventSetHitSize
{
    u32 opcode : 6;
    u32 hit_id : 3;
    u32 size : 16;

} ftMotionEventSetHitSize;

typedef struct ftMotionEventSetHitSound
{
    u32 opcode : 6;
    u32 hit_id : 3;
    u32 sfx_level : 3;

} ftMotionEventSetHitSound;

typedef struct ftMotionEventRefreshHitIndex
{
    u32 opcode : 6;
    u32 hit_id : 26;

} ftMotionEventRefreshHitIndex;

typedef struct ftMotionEventClearHitIndex
{
    u32 opcode : 6;
    u32 hit_id : 26;

} ftMotionEventClearHitIndex;

typedef struct ftMotionEventClearHitAll
{
    u32 opcode : 6;

} ftMotionEventClearHitAll;

typedef struct ftMotionEventSetFighterThrow1
{
    u32 opcode : 6;

} ftMotionEventSetFighterThrow1;

typedef struct ftMotionEventSetFighterThrow2
{
    ftThrowHitDesc *fighter_throw;

} ftMotionEventSetFighterThrow2;

typedef struct ftMotionEventSetFighterThrow
{
    ftMotionEventSetFighterThrow1 s1;
    ftMotionEventSetFighterThrow2 s2;

} ftMotionEventSetFighterThrow;

typedef struct ftMotionEventPlaySFX
{
    u32 opcode : 6;
    u32 sfx_id : 26;

} ftMotionEventPlaySFX;

typedef struct ftMotionEventMakeGFX1
{
    u32 opcode : 6;
    s32 joint_index : 7;
    u32 gfx_id : 9;
    u32 flag : 10;

} ftMotionEventMakeGFX1;

typedef struct ftMotionEventMakeGFX2
{
    s32 off_x : 16;
    s32 off_y : 16;

} ftMotionEventMakeGFX2;

typedef struct ftMotionEventMakeGFX3
{
    s32 off_z : 16;
    s32 rng_x : 16;

} ftMotionEventMakeGFX3;

typedef struct ftMotionEventMakeGFX4
{
    s32 rng_y : 16;
    s32 rng_z : 16;

} ftMotionEventMakeGFX4;

typedef struct ftMotionEventMakeGFX
{
    ftMotionEventMakeGFX1 s1;
    ftMotionEventMakeGFX2 s2;
    ftMotionEventMakeGFX3 s3;
    ftMotionEventMakeGFX4 s4;

} ftMotionEventMakeGFX;

typedef struct ftMotionEventSetHitStatusAll
{
    u32 opcode : 6;
    u32 hitstatus : 26;

} ftMotionEventSetHitStatusAll;

typedef struct ftMotionEventSetHitStatusPart
{
    u32 opcode : 6;
    s32 joint_index : 7;
    u32 hitstatus : 19;

} ftMotionEventSetHitStatusPart;

typedef struct ftMotionEventSetHurtPart1
{
    u32 opcode : 6;
    s32 joint_index : 7;

} ftMotionEventSetHurtPart1;

typedef struct ftMotionEventSetHurtPart2
{
    s32 off_x : 16;
    s32 off_y : 16;

} ftMotionEventSetHurtPart2;

typedef struct ftMotionEventSetHurtPart3
{
    s32 off_z : 16;
    s32 size_x : 16;

} ftMotionEventSetHurtPart3;

typedef struct ftMotionEventSetHurtPart4
{
    s32 size_y : 16;
    s32 size_z : 16;

} ftMotionEventSetHurtPart4;

typedef struct ftMotionEventSetHurtPart
{
    ftMotionEventSetHurtPart1 s1;
    ftMotionEventSetHurtPart2 s2;
    ftMotionEventSetHurtPart3 s3;
    ftMotionEventSetHurtPart4 s4;

} ftMotionEventSetHurtPart;

typedef struct ftMotionEventLoopBegin
{
    u32 opcode : 6;
    u32 loop_count : 26;

} ftMotionEventLoopBegin;

typedef struct ftMotionEventSubroutine1
{
    u32 opcode : 6;

} ftMotionEventSubroutine1;

typedef struct ftMotionEventSubroutine2
{
    void *p_goto;

} ftMotionEventSubroutine2;

typedef struct ftMotionEventSubroutine
{
    ftMotionEventSubroutine1 s1;
    ftMotionEventSubroutine2 s2;

} ftMotionEventSubroutine;

typedef struct ftMotionEventSubroutineThrown1
{
    u32 opcode : 6;

} ftMotionEventSubroutineThrown1;

typedef struct ftMotionEventSubroutineThrown2
{
    void *p_subroutine;

} ftMotionEventSubroutineThrown2;

typedef struct ftMotionEventDamage
{
    void *p_script[2][Ft_Kind_EnumMax];

} ftMotionEventDamage;

typedef struct ftMotionEventSubroutineThrown
{
    ftMotionEventSubroutineThrown1 s1;
    ftMotionEventSubroutineThrown2 s2;

} ftMotionEventSubroutineThrown;

typedef struct ftMotionEventReturn
{
    u32 opcode : 6;

} ftMotionEventReturn;

typedef struct ftMotionEventGoto1
{
    u32 opcode : 6;

} ftMotionEventGoto1;

typedef struct ftMotionEventGoto2
{
    void *p_goto;

} ftMotionEventGoto2;

typedef struct ftMotionEventGoto
{
    ftMotionEventGoto1 s1;
    ftMotionEventGoto2 s2;

} ftMotionEventGoto;

typedef struct ftMotionEventParallel1
{
    u32 opcode : 6;

} ftMotionEventParallel1;

typedef struct ftMotionEventParallel2
{
    void *p_goto;

} ftMotionEventParallel2;

typedef struct ftMotionEventParallel
{
    ftMotionEventParallel1 s1;
    ftMotionEventParallel2 s2;

} ftMotionEventParallel;

typedef struct ftMotionEventSetModelPart
{
    u32 opcode : 6;
    s32 joint_index : 7;
    s32 mode : 19;

} ftMotionEventSetModelPart;

typedef struct ftMotionEventSetTexturePart
{
    u32 opcode : 6;
    u32 obj_index : 6;
    u32 frame : 20;

} ftMotionEventSetTexturePart;

typedef struct ftMotionEventSetColAnim
{
    u32 opcode : 6;
    u32 colanim_id : 8;
    u32 duration : 18;

} ftMotionEventSetColAnim;

typedef struct ftMotionEventSetFlag
{
    u32 opcode : 6;
    u32 flag : 26;

} ftMotionEventSetFlag;

typedef struct ftMotionEventSlopeContour
{
    u32 opcode : 6;
    u32 filler : 23;
    u32 mode : 3;

} ftMotionEventSlopeContour;

typedef struct ftMotionEventShowItem
{
    u32 opcode : 6;
    u32 flag : 26;

} ftMotionEventShowItem;

typedef struct ftMotionEventAfterImage
{
    u32 opcode : 6;
    u32 is_itemswing : 8;
    s32 render_state : 18;

} ftMotionEventAfterImage;

typedef struct ftMotionEventMakeRumble
{
    u32 opcode : 6;
    u32 duration : 13;
    u32 rumble_id : 13;

} ftMotionEventMakeRumble;

typedef struct ftMotionEventStopRumble
{
    u32 opcode : 6;
    u32 rumble_id : 26;

} ftMotionEventStopRumble;

typedef struct caColorEventDefault
{
    u32 opcode : 6;
    u32 value1 : 26;

} caColorEventDefault;

typedef struct caColorEventGoto1
{
    u32 opocode : 6;

} caColorEventGoto1;

typedef struct caColorEventGoto2
{
    void *p_goto;

} caColorEventGoto2;

typedef struct caColorEventGoto
{
    caColorEventGoto1 s1;
    caColorEventGoto2 s2;

} caColorEventGoto;

typedef struct caColorEventLoopBegin
{
    u32 opcode : 6;
    u32 loop_count : 26;

} caColorEventLoopBegin;

typedef struct caColorEventSubroutine1
{
    u32 opcode : 6;

} caColorEventSubroutine1;

typedef struct caColorEventSubroutine2
{
    void *p_subroutine;

} caColorEventSubroutine2;

typedef struct caColorEventSubroutine
{
    caColorEventSubroutine1 s1;
    caColorEventSubroutine2 s2;

} caColorEventSubroutine;

typedef struct caColorEventParallel1
{
    u32 opcode : 6;

} caColorEventParallel1;

typedef struct caColorEventParallel2
{
    void *p_script;

} caColorEventParallel2;

typedef struct caColorEventParallel
{
    caColorEventParallel1 s1;
    caColorEventParallel2 s2;

} caColorEventParallel;

typedef struct caColorEventSetRGBA1
{
    u32 opcode : 6;

} caColorEventSetRGBA1;

typedef struct caColorEventSetRGBA2
{
    u32 r : 8;
    u32 g : 8;
    u32 b : 8;
    u32 a : 8;

} caColorEventSetRGBA2;

typedef struct caColorEventBlendRGBA1
{
    u32 opcode : 6;
    u32 blend_frames : 26;

} caColorEventBlendRGBA1;

typedef struct caColorEventBlendRGBA2
{
    u32 r : 8;
    u32 g : 8;
    u32 b : 8;
    u32 a : 8;

} caColorEventBlendRGBA2;

typedef struct caColorEventBlendRGBA
{
    caColorEventBlendRGBA1 s1;
    caColorEventBlendRGBA2 s2;

} caColorEventBlendRGBA;

typedef struct caColorEventCreateGFX1
{
    u32 opcode : 6;
    s32 joint_index : 7;
    u32 gfx_id : 9;
    u32 flag : 10;

} caColorEventCreateGFX1;

typedef struct caColorEventCreateGFX2
{
    s32 off_x : 16;
    s32 off_y : 16;

} caColorEventCreateGFX2;

typedef struct caColorEventCreateGFX3
{
    s32 off_z : 16;
    s32 rng_x : 16;

} caColorEventCreateGFX3;

typedef struct caColorEventCreateGFX4
{
    s32 rng_y : 16;
    s32 rng_z : 16;

} caColorEventCreateGFX4;

typedef struct caColorEventCreateGFX
{
    caColorEventCreateGFX1 s1;
    caColorEventCreateGFX2 s2;
    caColorEventCreateGFX3 s3;
    caColorEventCreateGFX4 s4;

} caColorEventCreateGFX;

typedef struct caColorEventSetLight
{
    u32 opcode : 6;
    s32 light1 : 13;
    s32 light2 : 13;

} caColorEventSetLight;

typedef struct caColorEventPlaySFX
{
    u32 opcode : 6;
    u32 sfx_id : 26;

} caColorEventPlaySFX;

typedef struct gmRumbleEventDefault
{
    u16 opcode : 3;
    u16 param : 13;

} gmRumbleEventDefault;

typedef struct gmRumbleEvent
{
    u8 index;
    u8 is_rumble_active;
    u16 rumble_status;
    u16 loop_count;
    s32 unk_rumble_0x8;
    void *p_goto;
    gmRumbleEventDefault *p_script;

} gmRumbleEvent;

#endif