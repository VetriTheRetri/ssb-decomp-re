#ifndef _GMSCRIPT_H_
#define _GMSCRIPT_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <ft/fttypes.h>

#define ftScriptEventAdvance(event, type)                                       \
((event)->p_script = (void*) ((uintptr_t)(event)->p_script + (sizeof(type))))   \

#define ftScriptEventCast(event, type)                                          \
((type*) (event)->p_script)                                                     \

// WARNING: Only advances 4 bytes at a time
#define ftScriptEventCastAdvance(event, type)                                   \
((type*) (event)->p_script++)                                                   \

#define caColorEventAdvance(event, type)                                        \
((event) = (void*) ((uintptr_t)event + sizeof(type)))                             

#define caColorEventCast(event, type)                                           \
((type*) (event))                                                               \

// WARNING: Only advances 4 bytes at a time
#define caColorEventCastAdvance(event, type)                                    \
((type*) (event)++)                                                             \

typedef enum ftScriptEventKind
{
    ftScriptEvent_Kind_End,
    ftScriptEvent_Kind_SyncWait,
    ftScriptEvent_Kind_AsyncWait,
    ftScriptEvent_Kind_Hit,
    ftScriptEvent_Kind_HitScaleOffset,
    ftScriptEvent_Kind_ClearHitIndex,
    ftScriptEvent_Kind_ClearHitAll,
    ftScriptEvent_Kind_SetHitOffset,
    ftScriptEvent_Kind_SetHitDamage,
    ftScriptEvent_Kind_SetHitSize,
    ftScriptEvent_Kind_SetHitSoundLevel,
    ftScriptEvent_Kind_RefreshHitIndex,
    ftScriptEvent_Kind_SetFighterThrow,
    ftScriptEvent_Kind_SubroutineThrown,
    ftScriptEvent_Kind_PlaySFX,
    ftScriptEvent_Kind_PlayLoopSFXStoreInfo,
    ftScriptEvent_Kind_StopLoopSFX,
    ftScriptEvent_Kind_PlayVoiceStoreInfo,
    ftScriptEvent_Kind_PlayLoopVoiceStoreInfo,
    ftScriptEvent_Kind_PlaySFXStoreInfo,
    ftScriptEvent_Kind_PlaySmashVoice,
    ftScriptEvent_Kind_SetFlag0,
    ftScriptEvent_Kind_SetFlag1,
    ftScriptEvent_Kind_SetFlag2,
    ftScriptEvent_Kind_SetFlag3,
    ftScriptEvent_Kind_SetAirJumpAdd,
    ftScriptEvent_Kind_SetAirJumpMax,
    ftScriptEvent_Kind_SetHitStatusPartAll,
    ftScriptEvent_Kind_SetHitStatusPart,
    ftScriptEvent_Kind_SetHitStatusAll,
    ftScriptEvent_Kind_ResetHurtAll,
    ftScriptEvent_Kind_SetHurtPart,
    ftScriptEvent_Kind_LoopBegin,
    ftScriptEvent_Kind_LoopEnd,
    ftScriptEvent_Kind_Subroutine,
    ftScriptEvent_Kind_Return,
    ftScriptEvent_Kind_Goto,
    ftScriptEvent_Kind_ScriptPause,
    ftScriptEvent_Kind_Effect,
    ftScriptEvent_Kind_EffectScaleOffset, // ???
    ftScriptEvent_Kind_SetModelPart,
    ftScriptEvent_Kind_ResetModelPartAll,
    ftScriptEvent_Kind_HideModelPartAll,
    ftScriptEvent_Kind_SetTexturePart,
    ftScriptEvent_Kind_SetColAnim,
    ftScriptEvent_Kind_ResetColAnim,
    ftScriptEvent_Kind_SetParallelScript, // What
    ftScriptEvent_Kind_SlopeContour,
    ftScriptEvent_Kind_HideItem,
    ftScriptEvent_Kind_MakeRumble,
    ftScriptEvent_Kind_StopRumble,
    ftScriptEvent_Kind_AfterImage // Sword Trail

} ftScriptEventKind;

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

typedef struct ftScriptPointer
{
    void *p_goto[1];
    s32 script_index[4];

} ftScriptPointer;

typedef struct ftScriptEvent
{
    f32 frame_timer;
    u32 *p_script;
    s32 script_index;
    void *p_goto[1];
    s32 loop_count[4];

} ftScriptEvent;

typedef struct ftScriptEventDefault // Event with no arguments
{
    u32 opcode : 6;

} ftScriptEventDefault;

typedef struct ftScriptEventDouble // Event with no arguments
{
    u32 opcode : 6;
    u32 filler1 : 26;
    u32 filler2 : 32;
    
} ftScriptEventDouble;

typedef struct ftScriptEventWait
{
    u32 opcode : 6;
    u32 frames : 26;

} ftScriptEventWait;

typedef struct ftScriptEventMakeHit1
{
    u32 opcode : 6;
    u32 hit_id : 3;
    u32 group_id : 3;
    s32 joint_index : 7;
    u32 damage : 8;
    u32 rebound : 1;
    u32 element : 4;

} ftScriptEventMakeHit1;

typedef struct ftScriptEventMakeHit2
{
    u32 size : 16;
    s32 off_x : 16;

} ftScriptEventMakeHit2;

typedef struct ftScriptEventMakeHit3
{
    s32 off_y : 16;
    s32 off_z : 16;

} ftScriptEventMakeHit3;

typedef struct ftScriptEventMakeHit4
{
    s32 angle : 10;
    u32 knockback_scale : 10;
    u32 knockback_weight : 10;
    u32 is_hit_ground_air : 2;

} ftScriptEventMakeHit4;

typedef struct ftScriptEventMakeHit5
{
    s32 shield_damage : 8;
    u32 sfx_level : 3;
    u32 sfx_kind : 4;
    u32 knockback_base : 10;

} ftScriptEventMakeHit5;

typedef struct ftScriptEventMakeHit
{
    ftScriptEventMakeHit1 s1;
    ftScriptEventMakeHit2 s2;
    ftScriptEventMakeHit3 s3;
    ftScriptEventMakeHit4 s4;
    ftScriptEventMakeHit5 s5;

} ftScriptEventMakeHit;

typedef struct ftScriptEventSetHitOffset1
{
    u32 opcode : 6;
    u32 hit_id : 3;
    s32 off_x : 16;

} ftScriptEventSetHitOffset1;

typedef struct ftScriptEventSetHitOffset2
{
    s32 off_y : 16;
    s32 off_z : 16;

} ftScriptEventSetHitOffset2;

typedef struct ftScriptEventSetHitOffset
{
    ftScriptEventSetHitOffset1 s1;
    ftScriptEventSetHitOffset2 s2;

} ftScriptEventSetHitOffset;

typedef struct ftScriptEventSetHitDamage
{
    u32 opcode : 6;
    u32 hit_id : 3;
    u32 damage : 8;

} ftScriptEventSetHitDamage;

typedef struct ftScriptEventSetHitSize
{
    u32 opcode : 6;
    u32 hit_id : 3;
    u32 size : 16;

} ftScriptEventSetHitSize;

typedef struct ftScriptEventSetHitSound
{
    u32 opcode : 6;
    u32 hit_id : 3;
    u32 sfx_level : 3;

} ftScriptEventSetHitSound;

typedef struct ftScriptEventRefreshHitIndex
{
    u32 opcode : 6;
    u32 hit_id : 26;

} ftScriptEventRefreshHitIndex;

typedef struct ftScriptEventClearHitIndex
{
    u32 opcode : 6;
    u32 hit_id : 26;

} ftScriptEventClearHitIndex;

typedef struct ftScriptEventClearHitAll
{
    u32 opcode : 6;

} ftScriptEventClearHitAll;

typedef struct ftScriptEventSetFighterThrow1
{
    u32 opcode : 6;

} ftScriptEventSetFighterThrow1;

typedef struct ftScriptEventSetFighterThrow2
{
    ftThrowHitDesc *fighter_throw;

} ftScriptEventSetFighterThrow2;

typedef struct ftScriptEventSetFighterThrow
{
    ftScriptEventSetFighterThrow1 s1;
    ftScriptEventSetFighterThrow2 s2;

} ftScriptEventSetFighterThrow;

typedef struct ftScriptEventPlaySFX
{
    u32 opcode : 6;
    u32 sfx_id : 26;

} ftScriptEventPlaySFX;

typedef struct ftScriptEventMakeGFX1
{
    u32 opcode : 6;
    s32 joint_index : 7;
    u32 gfx_id : 9;
    u32 flag : 10;

} ftScriptEventMakeGFX1;

typedef struct ftScriptEventMakeGFX2
{
    s32 off_x : 16;
    s32 off_y : 16;

} ftScriptEventMakeGFX2;

typedef struct ftScriptEventMakeGFX3
{
    s32 off_z : 16;
    s32 rng_x : 16;

} ftScriptEventMakeGFX3;

typedef struct ftScriptEventMakeGFX4
{
    s32 rng_y : 16;
    s32 rng_z : 16;

} ftScriptEventMakeGFX4;

typedef struct ftScriptEventMakeGFX
{
    ftScriptEventMakeGFX1 s1;
    ftScriptEventMakeGFX2 s2;
    ftScriptEventMakeGFX3 s3;
    ftScriptEventMakeGFX4 s4;

} ftScriptEventMakeGFX;

typedef struct ftScriptEventSetHitStatusAll
{
    u32 opcode : 6;
    u32 hitstatus : 26;

} ftScriptEventSetHitStatusAll;

typedef struct ftScriptEventSetHitStatusPart
{
    u32 opcode : 6;
    s32 joint_index : 7;
    u32 hitstatus : 19;

} ftScriptEventSetHitStatusPart;

typedef struct ftScriptEventSetHurtPart1
{
    u32 opcode : 6;
    s32 joint_index : 7;

} ftScriptEventSetHurtPart1;

typedef struct ftScriptEventSetHurtPart2
{
    s32 off_x : 16;
    s32 off_y : 16;

} ftScriptEventSetHurtPart2;

typedef struct ftScriptEventSetHurtPart3
{
    s32 off_z : 16;
    s32 size_x : 16;

} ftScriptEventSetHurtPart3;

typedef struct ftScriptEventSetHurtPart4
{
    s32 size_y : 16;
    s32 size_z : 16;

} ftScriptEventSetHurtPart4;

typedef struct ftScriptEventSetHurtPart
{
    ftScriptEventSetHurtPart1 s1;
    ftScriptEventSetHurtPart2 s2;
    ftScriptEventSetHurtPart3 s3;
    ftScriptEventSetHurtPart4 s4;

} ftScriptEventSetHurtPart;

typedef struct ftScriptEventLoopBegin
{
    u32 opcode : 6;
    u32 loop_count : 26;

} ftScriptEventLoopBegin;

typedef struct ftScriptEventSubroutine1
{
    u32 opcode : 6;

} ftScriptEventSubroutine1;

typedef struct ftScriptEventSubroutine2
{
    void *p_goto;

} ftScriptEventSubroutine2;

typedef struct ftScriptEventSubroutine
{
    ftScriptEventSubroutine1 s1;
    ftScriptEventSubroutine2 s2;

} ftScriptEventSubroutine;

typedef struct ftScriptEventSubroutineThrown1
{
    u32 opcode : 6;

} ftScriptEventSubroutineThrown1;

typedef struct ftScriptEventSubroutineThrown2
{
    void *p_subroutine;

} ftScriptEventSubroutineThrown2;

typedef struct ftScriptEventDamage
{
    void *p_script[2][Ft_Kind_EnumMax];

} ftScriptEventDamage;

typedef struct ftScriptEventSubroutineThrown
{
    ftScriptEventSubroutineThrown1 s1;
    ftScriptEventSubroutineThrown2 s2;

} ftScriptEventSubroutineThrown;

typedef struct ftScriptEventReturn
{
    u32 opcode : 6;

} ftScriptEventReturn;

typedef struct ftScriptEventGoto1
{
    u32 opcode : 6;

} ftScriptEventGoto1;

typedef struct ftScriptEventGoto2
{
    void *p_goto;

} ftScriptEventGoto2;

typedef struct ftScriptEventGoto
{
    ftScriptEventGoto1 s1;
    ftScriptEventGoto2 s2;

} ftScriptEventGoto;

typedef struct ftScriptEventParallel1
{
    u32 opcode : 6;

} ftScriptEventParallel1;

typedef struct ftScriptEventParallel2
{
    void *p_goto;

} ftScriptEventParallel2;

typedef struct ftScriptEventParallel
{
    ftScriptEventParallel1 s1;
    ftScriptEventParallel2 s2;

} ftScriptEventParallel;

typedef struct ftScriptEventSetModelPart
{
    u32 opcode : 6;
    s32 joint_index : 7;
    s32 mode : 19;

} ftScriptEventSetModelPart;

typedef struct ftScriptEventSetTexturePart
{
    u32 opcode : 6;
    u32 obj_index : 6;
    u32 frame : 20;

} ftScriptEventSetTexturePart;

typedef struct ftScriptEventSetColAnim
{
    u32 opcode : 6;
    u32 colanim_id : 8;
    u32 duration : 18;

} ftScriptEventSetColAnim;

typedef struct ftScriptEventSetFlag
{
    u32 opcode : 6;
    u32 flag : 26;

} ftScriptEventSetFlag;

typedef struct ftScriptEventSlopeContour
{
    u32 opcode : 6;
    u32 filler : 23;
    u32 mode : 3;

} ftScriptEventSlopeContour;

typedef struct ftScriptEventShowItem
{
    u32 opcode : 6;
    u32 flag : 26;

} ftScriptEventShowItem;

typedef struct ftScriptEventAfterImage
{
    u32 opcode : 6;
    u32 is_itemswing : 8;
    s32 render_state : 18;

} ftScriptEventAfterImage;

typedef struct ftScriptEventMakeRumble
{
    u32 opcode : 6;
    u32 duration : 13;
    u32 rumble_id : 13;

} ftScriptEventMakeRumble;

typedef struct ftScriptEventStopRumble
{
    u32 opcode : 6;
    u32 rumble_id : 26;

} ftScriptEventStopRumble;

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

#endif