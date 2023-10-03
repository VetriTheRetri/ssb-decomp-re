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
    ftMotionEvent_Kind_MakeHit,
    ftMotionEvent_Kind_MakeHitScaleOffset,
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
    caColorEvent_Kind_SetSkeletonID

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
    ub32 rebound : 1;
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

typedef struct caColorEventSetRGBA
{
    caColorEventSetRGBA1 s1;
    caColorEventSetRGBA2 s2;

} caColorEventSetRGBA;

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

typedef union caColorEventAll
{
    caColorEventDefault     ca_default;
    caColorEventGoto1       ca_goto1;
    caColorEventGoto2       ca_goto2;
    caColorEventLoopBegin   ca_loopstart;
    caColorEventSubroutine1 ca_sub1;
    caColorEventSubroutine2 ca_sub2;
    caColorEventParallel1   ca_par1;
    caColorEventParallel2   ca_par2;
    caColorEventSetRGBA1    ca_rgba1;
    caColorEventSetRGBA2    ca_rgba2;
    caColorEventBlendRGBA1  ca_blend1;
    caColorEventBlendRGBA2  ca_blend2;
    caColorEventCreateGFX1  ca_gfx1;
    caColorEventCreateGFX2  ca_gfx2;
    caColorEventCreateGFX3  ca_gfx3;
    caColorEventCreateGFX4  ca_gfx4;
    caColorEventSetLight    ca_light;
    caColorEventPlaySFX     ca_sfx;

} caColorEventAll;

// Bleh. Don't know how HAL pulled it off, but ColAnim scripts are baked into .data,
// and with their wildly different structures, it's impossible to initialize them into an array of color command datatypes... at least in IDO.
// As such, we must either initialize the commands as raw u32, or pray that the compiler does not optimize out the initialized, sequential data as seen below.

// Bitfield macros to set up color commands
#define caColorEventBitField(n)                 (1 << (n))
#define caColorEventBitMask(len)                (caColorEventBitField(len) - 1)
#define caColorEventFieldMask(start, len)       (caColorEventBitMask(len) << (start))
#define caColorEventFieldPrep(x, start, len)    ( ((x) & caColorEventBitMask(len)) << (start) )
#define caColorEventFieldSet(x, start, len)     ( 0 & ~caColorEventFieldMask(start, len) | caColorEventFieldPrep(x, start, len) ) // I'm too dumb to do it without the 0

static u32 test = (caColorEventFieldSet(90, 13, 13) | caColorEventFieldSet(15, 26, 6)); // It works :) Thanks! (https://www.coranac.com/documents/working-with-bits-and-bitfields/)

// Now watch me make dollar store display list commands like a clown
#define caColorCommandEndS1()                           caColorEventFieldSet(caColorEvent_Kind_End, 26, 6)

#define caColorCommandWaitS1(frames)                    (caColorEventFieldSet(caColorEvent_Kind_Wait, 26, 6) | caColorEventFieldSet(frames, 0, 26))

#define caColorCommandGotoS1()                          caColorEventFieldSet(caColorEvent_Kind_Goto, 26, 6)
#define caColorCommandGotoS2(addr)                      ((uintptr_t)addr)

#define caColorCommandLoopBeginS1(count)                (caColorEventFieldSet(caColorEvent_Kind_LoopBegin, 26, 6) | caColorEventFieldSet(count, 0, 26))
#define caColorCommandLoopEndS1()                       caColorEventFieldSet(caColorEvent_Kind_LoopEnd, 26, 6)

#define caColorCommandSubroutineS1()                    caColorEventFieldSet(caColorEvent_Kind_Subroutine, 26, 6)
#define caColorCommandSubroutineS2(addr)                ((uintptr_t)addr)

#define caColorCommandReturnS1()                        caColorEventFieldSet(caColorEvent_Kind_Return, 26, 6)

#define caColorCommandParallelS1()                      caColorEventFieldSet(caColorEvent_Kind_SetParallelScript, 26, 6)
#define caColorCommandParallelS2(addr)                  ((uintptr_t)addr)

#define caColorCommandToggleColorOffS1()                caColorEventFieldSet(caColorEvent_Kind_ToggleColorOff, 26, 6)

#define caColorCommandSetColor1S1()                     caColorEventFieldSet(caColorEvent_Kind_SetColor1, 26, 6)
#define caColorCommandSetColor1S2(r, g, b, a)           (caColorEventFieldSet(r, 24, 8) | caColorEventFieldSet(g, 16, 8) | caColorEventFieldSet(b, 8, 8) | caColorEventFieldSet(a, 0, 8))

#define caColorCommandBlendColor1S1(frames)             (caColorEventFieldSet(caColorEvent_Kind_BlendColor1, 26, 6) | caColorEventFieldSet(frames, 0, 26))
#define caColorCommandBlendColor1S2(r, g, b, a)         (caColorEventFieldSet(r, 24, 8) | caColorEventFieldSet(g, 16, 8) | caColorEventFieldSet(b, 8, 8) | caColorEventFieldSet(a, 0, 8))

#define caColorCommandSetColor2S1()                     caColorEventFieldSet(caColorEvent_Kind_SetColor2, 26, 6)
#define caColorCommandSetColor2S2(r, g, b, a)           (caColorEventFieldSet(r, 24, 8) | caColorEventFieldSet(g, 16, 8) | caColorEventFieldSet(b, 8, 8) | caColorEventFieldSet(a, 0, 8))

#define caColorCommandBlendColor2S1(frames)             (caColorEventFieldSet(caColorEvent_Kind_BlendColor1, 26, 6) | caColorEventFieldSet(frames, 0, 26))
#define caColorCommandBlendColor2S2(r, g, b, a)         (caColorEventFieldSet(r, 24, 8) | caColorEventFieldSet(g, 16, 8) | caColorEventFieldSet(b, 8, 8) | caColorEventFieldSet(a, 0, 8))

#define caColorCommandEffectS1(joint, gfx_id, flag)     (caColorEventFieldSet(caColorEvent_Kind_Effect, 26, 6) | caColorEventFieldSet(joint, 19, 7) | caColorEventFieldSet(gfx_id, 10, 9) | caColorEventFieldSet(flag, 0, 10))
#define caColorCommandEffectS2(off_x, off_y)            (caColorEventFieldSet(off_x, 16, 16) | caColorEventFieldSet(off_y, 0, 16))
#define caColorCommandEffectS3(off_z, rng_x)            (caColorEventFieldSet(off_z, 16, 16) | caColorEventFieldSet(rng_x, 0, 16))
#define caColorCommandEffectS4(rng_y, rng_z)            (caColorEventFieldSet(rng_y, 16, 16) | caColorEventFieldSet(rng_z, 0, 16))

#define caColorCommandEffectScaleS1(joint,gfx_id,flag)  (caColorEventFieldSet(caColorEvent_Kind_EffectScaleOffset, 26, 6) | caColorEventFieldSet(joint, 19, 7) | caColorEventFieldSet(gfx_id, 10, 9) | caColorEventFieldSet(flag, 0, 10))
#define caColorCommandEffectScaleS2(off_x, off_y)       (caColorEventFieldSet(off_x, 16, 16) | caColorEventFieldSet(off_y, 0, 16))
#define caColorCommandEffectScaleS3(off_z, rng_x)       (caColorEventFieldSet(off_z, 16, 16) | caColorEventFieldSet(rng_x, 0, 16))
#define caColorCommandEffectSScale4(rng_y, rng_z)       (caColorEventFieldSet(rng_y, 16, 16) | caColorEventFieldSet(rng_z, 0, 16))

#define caColorCommandSetLightS1(angle1, angle2)        (caColorEventFieldSet(caColorEvent_Kind_SetLight, 26, 6) | caColorEventFieldSet(angle1, 13, 13) | caColorEventFieldSet(angle2, 0, 13))

#define caColorCommandToggleLightOff()                  caColorEventFieldSet(caColorEvent_Kind_ToggleLightOff, 26, 6)

#define caColorCommandPlaySFX(sfx_id)                   (caColorEventFieldSet(caColorEvent_Kind_PlaySFX, 26, 6) | caColorEventFieldSet(sfx_id, 0, 26))

#define caColorCommandSetSkeletonID(skeleton_id)        (caColorEventFieldSet(caColorEvent_Kind_SetSkeletonID, 26, 6) | caColorEventFieldSet(skeleton_id, 0, 26))

// ColAnim Script 0 is NULL

// 0x8012CA90 - ColAnim Script 1
caColorEventSetRGBA     caColorEvents_Col1_Ev0 = { caColorEvent_Kind_SetColor1, 0xFF, 0xFF, 0xFF, 0x30 };
caColorEventDefault     caColorEvents_Col1_Ev1 = { caColorEvent_Kind_Wait, 65535 };
caColorEventGoto        caColorEvents_Col1_Ev2 = { caColorEvent_Kind_Goto, &caColorEvents_Col1_Ev0 };

// 0x8012CAA4 - ColAnim Script 2
caColorEventDefault     caColorEvents_Col2_Ev0 = { caColorEvent_Kind_ToggleColorOff };
caColorEventDefault     caColorEvents_Col2_Ev1 = { caColorEvent_Kind_End };

// 0x8012CAAC - ColAnim Script 3
caColorEventSetRGBA     caColorEvents_Col3_Ev0 = { caColorEvent_Kind_SetColor1, 0xFF, 0xFF, 0xFF, 0x82 };
caColorEventBlendRGBA   caColorEvents_Col3_Ev1 = { caColorEvent_Kind_BlendColor1, 3, 0xFF, 0xFF, 0xFF, 0x32 };
caColorEventDefault     caColorEvents_Col3_Ev2 = { caColorEvent_Kind_Wait, 3 };
caColorEventDefault     caColorEvents_Col3_Ev3 = { caColorEvent_Kind_ToggleColorOff };
caColorEventDefault     caColorEvents_Col3_Ev4 = { caColorEvent_Kind_Wait, 1 };
caColorEventGoto        caColorEvents_Col3_Ev5 = { caColorEvent_Kind_Goto, &caColorEvents_Col3_Ev0 };

// 0x8012CAD0 - ColAnim Script 4
caColorEventSetRGBA     caColorEvents_Col4_Ev0 = { caColorEvent_Kind_SetColor1, 0x80, 0xFF, 0x80, 0x50 };
caColorEventBlendRGBA   caColorEvents_Col4_Ev1 = { caColorEvent_Kind_BlendColor1, 3, 0x80, 0xFF, 0x80, 0x14 };
caColorEventDefault     caColorEvents_Col4_Ev2 = { caColorEvent_Kind_Wait, 3 };
caColorEventDefault     caColorEvents_Col4_Ev3 = { caColorEvent_Kind_ToggleColorOff };
caColorEventDefault     caColorEvents_Col4_Ev4 = { caColorEvent_Kind_Wait, 1 };
caColorEventGoto        caColorEvents_Col4_Ev5 = { caColorEvent_Kind_Goto, &caColorEvents_Col4_Ev0 };

// 0x8012CAF4 - ColAnim Script 5
caColorEventSetLight    caColorEvents_Col5_Ev0 = { caColorEvent_Kind_SetLight, 90, 0 };
caColorEventDefault     caColorEvents_Col5_Ev1 = { caColorEvent_Kind_ToggleColorOff };
caColorEventDefault     caColorEvents_Col5_Ev2 = { caColorEvent_Kind_Wait, 1 };
caColorEventSetRGBA     caColorEvents_Col5_Ev3 = { caColorEvent_Kind_SetColor1, 0xFF, 0xFF, 0xFF, 0xE6 };
caColorEventDefault     caColorEvents_Col5_Ev4 = { caColorEvent_Kind_Wait, 1 };
caColorEventBlendRGBA   caColorEvents_Col5_Ev5 = { caColorEvent_Kind_BlendColor1, 6, 0xFF, 0xFF, 0xFF, 0x1E };
caColorEventDefault     caColorEvents_Col5_Ev6 = { caColorEvent_Kind_Wait, 6 };
caColorEventDefault     caColorEvents_Col5_Ev7 = { caColorEvent_Kind_ToggleColorOff };
caColorEventDefault     caColorEvents_Col5_Ev8 = { caColorEvent_Kind_End };

// Next: 8012CB20

/*

// ColAnim Script 0 is NULL

// 0x8012CA90 - ColAnim Script 1
uintptr_t caColorEventScript1[/* */] =
{
    caColorCommandSetColor1S1(),
    caColorCommandSetColor1S2(0xFF, 0xFF, 0xFF, 0x30),
    caColorCommandWaitS1(65535),
    caColorCommandGotoS1(),
    caColorCommandGotoS2(caColorEventScript1)
};

// 0x8012CAA4 - ColAnim Script 2
uintptr_t caColorEventScript2[/* */] =
{
    caColorCommandToggleColorOffS1(),
    caColorCommandEndS1()
};

// 0x8012CAAC - ColAnim Script 3
uintptr_t caColorEventScript3[/* */] =
{
    caColorCommandSetColor1S1(),
    caColorCommandSetColor1S2(0xFF, 0xFF, 0xFF, 0x82),
    caColorCommandBlendColor1S1(3),
    caColorCommandBlendColor1S2(0xFF, 0xFF, 0xFF, 0x32),
    caColorCommandWaitS1(3),
    caColorCommandToggleColorOffS1(),
    caColorCommandWaitS1(1),
    caColorCommandGotoS1(),
    caColorCommandGotoS2(caColorEventScript3)
};

// 0x8012CAD0 - ColAnim Script 4
uintptr_t caColorEventScript4[/* */] =
{
    caColorCommandSetColor1S1(),
    caColorCommandSetColor1S2(0x80, 0xFF, 0x80, 0x50),
    caColorCommandBlendColor1S1(3),
    caColorCommandBlendColor1S2(0x80, 0xFF, 0x80, 0x14),
    caColorCommandWaitS1(3),
    caColorCommandToggleColorOffS1(),
    caColorCommandWaitS1(1),
    caColorCommandGotoS1(),
    caColorCommandGotoS2(caColorEventScript4)
};

// 0x8012CAF4 - ColAnim Script 5
uintptr_t caColorEventScript5[/* */] =
{
    caColorCommandSetLightS1(90, 0),
    caColorCommandToggleColorOffS1(),
    caColorCommandWaitS1(1),
    caColorCommandSetColor1S1(),
    caColorCommandSetColor1S2(0xFF, 0xFF, 0xFF, 0xE6),
    caColorCommandWaitS1(1),
    caColorCommandBlendColor1S1(6),
    caColorCommandBlendColor1S2(0xFF, 0xFF, 0xFF, 0x1E),
    caColorCommandWaitS1(6),
    caColorCommandToggleColorOffS1(),
    caColorCommandEndS1()
};

*/

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