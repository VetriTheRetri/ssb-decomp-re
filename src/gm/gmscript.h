#ifndef _GMSCRIPT_H_
#define _GMSCRIPT_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>

#define GMRUMBLE_ARRAY_COLS 3

#define ftMotionEventAdvance(event, type) ((event)->p_script = (void*)((uintptr_t)(event)->p_script + (sizeof(type))))

#define ftMotionEventCast(event, type) ((type*)(event)->p_script)

// WARNING: Only advances 4 bytes at a time
#define ftMotionEventCastAdvance(event, type) ((type*)(event)->p_script++)

#define gmColEventAdvance(event, type) ((event) = (void*)((uintptr_t)event + sizeof(type)))

#define gmColEventCast(event, type) ((type*)(event))

// WARNING: Only advances 4 bytes at a time
#define gmColEventCastAdvance(event, type) ((type*)(event)++)

#define gmRumbleEventAdvance(event, type) ((event) = (void*)((uintptr_t)(event) + (sizeof(type))))

#define gmRumbleEventCast(event, type) ((type*)(event))

// WARNING: Only advances 2 bytes at a time
#define gmRumbleEventCastAdvance(event, type) ((type*)(event)++)

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

typedef enum gmColEventKind
{
	gmColEvent_Kind_End,
	gmColEvent_Kind_Wait,
	gmColEvent_Kind_Goto,
	gmColEvent_Kind_LoopBegin,
	gmColEvent_Kind_LoopEnd,
	gmColEvent_Kind_Subroutine,
	gmColEvent_Kind_Return,
	gmColEvent_Kind_SetParallelScript,
	gmColEvent_Kind_ToggleColorOff,
	gmColEvent_Kind_SetColor1,
	gmColEvent_Kind_BlendColor1,
	gmColEvent_Kind_SetColor2,
	gmColEvent_Kind_BlendColor2,
	gmColEvent_Kind_Effect,
	gmColEvent_Kind_EffectScaleOffset, // ???
	gmColEvent_Kind_SetLight,
	gmColEvent_Kind_ToggleLightOff,
	gmColEvent_Kind_PlaySFX,
	gmColEvent_Kind_SetSkeletonID

} gmColEventKind;

typedef enum gmRumbleEventKind
{
	gmRumbleEvent_Kind_End,
	gmRumbleEvent_Kind_StartRumble,
	gmRumbleEvent_Kind_StopRumble,
	gmRumbleEvent_Kind_LoopBegin,
	gmRumbleEvent_Kind_LoopEnd

} gmRumbleEventKind;

typedef struct ftScriptPointer
{
	void* p_goto[1];
	s32 script_index[4];

} ftScriptPointer;

typedef struct ftMotionEvent
{
	f32 frame_timer;
	u32* p_script;
	s32 script_index;
	void* p_goto[1];
	s32 loop_count[4];

} ftMotionEvent;

typedef struct ftMotionEventDefault // Event with no arguments
{
	u32 opcode : 6;

} ftMotionEventDefault;

typedef struct ftMotionEventDouble // Event with no arguments
{
	u32 opcode : 6;
	u32 pad1 : 26;
	u32 pad2 : 32;

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
	ub32 can_rebound : 1;
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
	ftThrowHitDesc* fighter_throw;

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
	void* p_goto;

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
	void* p_subroutine;

} ftMotionEventSubroutineThrown2;

typedef struct ftMotionEventDamage
{
	void* p_script[2][nFTKindEnumMax];

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
	void* p_goto;

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
	void* p_goto;

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

typedef struct gmColEventDefault
{
	u32 opcode : 6;
	u32 value1 : 26;

} gmColEventDefault;

typedef struct gmColEventGoto1
{
	u32 opocode : 6;

} gmColEventGoto1;

typedef struct gmColEventGoto2
{
	void* p_goto;

} gmColEventGoto2;

typedef struct gmColEventGoto
{
	gmColEventGoto1 s1;
	gmColEventGoto2 s2;

} gmColEventGoto;

typedef struct gmColEventLoopBegin
{
	u32 opcode : 6;
	u32 loop_count : 26;

} gmColEventLoopBegin;

typedef struct gmColEventSubroutine1
{
	u32 opcode : 6;

} gmColEventSubroutine1;

typedef struct gmColEventSubroutine2
{
	void* p_subroutine;

} gmColEventSubroutine2;

typedef struct gmColEventSubroutine
{
	gmColEventSubroutine1 s1;
	gmColEventSubroutine2 s2;

} gmColEventSubroutine;

typedef struct gmColEventParallel1
{
	u32 opcode : 6;

} gmColEventParallel1;

typedef struct gmColEventParallel2
{
	void* p_script;

} gmColEventParallel2;

typedef struct gmColEventParallel
{
	gmColEventParallel1 s1;
	gmColEventParallel2 s2;

} gmColEventParallel;

typedef struct gmColEventSetRGBA1
{
	u32 opcode : 6;

} gmColEventSetRGBA1;

typedef struct gmColEventSetRGBA2
{
	u32 r : 8;
	u32 g : 8;
	u32 b : 8;
	u32 a : 8;

} gmColEventSetRGBA2;

typedef struct gmColEventSetRGBA
{
	gmColEventSetRGBA1 s1;
	gmColEventSetRGBA2 s2;

} gmColEventSetRGBA;

typedef struct gmColEventBlendRGBA1
{
	u32 opcode : 6;
	u32 blend_frames : 26;

} gmColEventBlendRGBA1;

typedef struct gmColEventBlendRGBA2
{
	u32 r : 8;
	u32 g : 8;
	u32 b : 8;
	u32 a : 8;

} gmColEventBlendRGBA2;

typedef struct gmColEventBlendRGBA
{
	gmColEventBlendRGBA1 s1;
	gmColEventBlendRGBA2 s2;

} gmColEventBlendRGBA;

typedef struct gmColEventMakeEffect1
{
	u32 opcode : 6;
	s32 joint_index : 7;
	u32 gfx_id : 9;
	u32 flag : 10;

} gmColEventMakeEffect1;

typedef struct gmColEventMakeEffect2
{
	s32 off_x : 16;
	s32 off_y : 16;

} gmColEventMakeEffect2;

typedef struct gmColEventMakeEffect3
{
	s32 off_z : 16;
	s32 rng_x : 16;

} gmColEventMakeEffect3;

typedef struct gmColEventMakeEffect4
{
	s32 rng_y : 16;
	s32 rng_z : 16;

} gmColEventMakeEffect4;

typedef struct gmColEventMakeEffect
{
	gmColEventMakeEffect1 s1;
	gmColEventMakeEffect2 s2;
	gmColEventMakeEffect3 s3;
	gmColEventMakeEffect4 s4;

} gmColEventMakeEffect;

typedef struct gmColEventSetLight
{
	u32 opcode : 6;
	s32 light1 : 13;
	s32 light2 : 13;

} gmColEventSetLight;

typedef struct gmColEventPlaySFX
{
	u32 opcode : 6;
	u32 sfx_id : 26;

} gmColEventPlaySFX;

typedef union gmColEventAll
{
	gmColEventDefault ca_default;
	gmColEventGoto1 ca_goto1;
	gmColEventGoto2 ca_goto2;
	gmColEventLoopBegin ca_loopstart;
	gmColEventSubroutine1 ca_sub1;
	gmColEventSubroutine2 ca_sub2;
	gmColEventParallel1 ca_par1;
	gmColEventParallel2 ca_par2;
	gmColEventSetRGBA1 ca_rgba1;
	gmColEventSetRGBA2 ca_rgba2;
	gmColEventBlendRGBA1 ca_blend1;
	gmColEventBlendRGBA2 ca_blend2;
	gmColEventMakeEffect1 ca_gfx1;
	gmColEventMakeEffect2 ca_gfx2;
	gmColEventMakeEffect3 ca_gfx3;
	gmColEventMakeEffect4 ca_gfx4;
	gmColEventSetLight ca_light;
	gmColEventPlaySFX ca_sfx;

} gmColEventAll;

// Bleh. Don't know how HAL pulled it off, but ColAnim scripts are baked into
// .data, and with their wildly different structures, it's impossible to
// initialize them into an array of color command datatypes... at least in IDO.
// As such, we must either initialize the commands as raw u32, or pray that the
// compiler does not optimize out the initialized, sequential data as seen below.

// It works :) Thanks!
// (https://www.coranac.com/documents/working-with-bits-and-bitfields/)

// Now watch me make dollar store display list commands like a clown
#define gmColCommandEndS1() GC_FIELDSET(gmColEvent_Kind_End, 26, 6)

#define gmColCommandWaitS1(frames) (GC_FIELDSET(gmColEvent_Kind_Wait, 26, 6) | GC_FIELDSET(frames, 0, 26))

#define gmColCommandGotoS1() GC_FIELDSET(gmColEvent_Kind_Goto, 26, 6)
#define gmColCommandGotoS2(addr) ((uintptr_t)addr)

#define gmColCommandLoopBeginS1(count) (GC_FIELDSET(gmColEvent_Kind_LoopBegin, 26, 6) | GC_FIELDSET(count, 0, 26))
#define gmColCommandLoopEndS1() GC_FIELDSET(gmColEvent_Kind_LoopEnd, 26, 6)

#define gmColCommandSubroutineS1() GC_FIELDSET(gmColEvent_Kind_Subroutine, 26, 6)
#define gmColCommandSubroutineS2(addr) ((uintptr_t)addr)

#define gmColCommandReturnS1() GC_FIELDSET(gmColEvent_Kind_Return, 26, 6)

#define gmColCommandParallelS1() GC_FIELDSET(gmColEvent_Kind_SetParallelScript, 26, 6)
#define gmColCommandParallelS2(addr) ((uintptr_t)addr)

#define gmColCommandToggleColorOffS1() GC_FIELDSET(gmColEvent_Kind_ToggleColorOff, 26, 6)

#define gmColCommandSetColor1S1() GC_FIELDSET(gmColEvent_Kind_SetColor1, 26, 6)
#define gmColCommandSetColor1S2(r, g, b, a)                                                                          \
	(GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))

#define gmColCommandBlendColor1S1(frames)                                                                            \
	(GC_FIELDSET(gmColEvent_Kind_BlendColor1, 26, 6) | GC_FIELDSET(frames, 0, 26))
#define gmColCommandBlendColor1S2(r, g, b, a)                                                                        \
	(GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))

#define gmColCommandSetColor2S1() GC_FIELDSET(gmColEvent_Kind_SetColor2, 26, 6)
#define gmColCommandSetColor2S2(r, g, b, a)                                                                          \
	(GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))

#define gmColCommandBlendColor2S1(frames)                                                                            \
	(GC_FIELDSET(gmColEvent_Kind_BlendColor1, 26, 6) | GC_FIELDSET(frames, 0, 26))
#define gmColCommandBlendColor2S2(r, g, b, a)                                                                        \
	(GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))

#define gmColCommandEffectS1(joint, gfx_id, flag)                                                                    \
	(GC_FIELDSET(gmColEvent_Kind_Effect, 26, 6) | GC_FIELDSET(joint, 19, 7) | GC_FIELDSET(gfx_id, 10, 9)             \
	 | GC_FIELDSET(flag, 0, 10))
#define gmColCommandEffectS2(off_x, off_y) (GC_FIELDSET(off_x, 16, 16) | GC_FIELDSET(off_y, 0, 16))
#define gmColCommandEffectS3(off_z, rng_x) (GC_FIELDSET(off_z, 16, 16) | GC_FIELDSET(rng_x, 0, 16))
#define gmColCommandEffectS4(rng_y, rng_z) (GC_FIELDSET(rng_y, 16, 16) | GC_FIELDSET(rng_z, 0, 16))

#define gmColCommandEffectScaleS1(joint, gfx_id, flag)                                                               \
	(GC_FIELDSET(gmColEvent_Kind_EffectScaleOffset, 26, 6) | GC_FIELDSET(joint, 19, 7) | GC_FIELDSET(gfx_id, 10, 9)  \
	 | GC_FIELDSET(flag, 0, 10))
#define gmColCommandEffectScaleS2(off_x, off_y) (GC_FIELDSET(off_x, 16, 16) | GC_FIELDSET(off_y, 0, 16))
#define gmColCommandEffectScaleS3(off_z, rng_x) (GC_FIELDSET(off_z, 16, 16) | GC_FIELDSET(rng_x, 0, 16))
#define gmColCommandEffectSScale4(rng_y, rng_z) (GC_FIELDSET(rng_y, 16, 16) | GC_FIELDSET(rng_z, 0, 16))

#define gmColCommandSetLightS1(angle1, angle2)                                                                       \
	(GC_FIELDSET(gmColEvent_Kind_SetLight, 26, 6) | GC_FIELDSET(angle1, 13, 13) | GC_FIELDSET(angle2, 0, 13))

#define gmColCommandToggleLightOff() GC_FIELDSET(gmColEvent_Kind_ToggleLightOff, 26, 6)

#define gmColCommandPlaySFX(sfx_id) (GC_FIELDSET(gmColEvent_Kind_PlaySFX, 26, 6) | GC_FIELDSET(sfx_id, 0, 26))

#define gmColCommandSetSkeletonID(skeleton_id)                                                                       \
	(GC_FIELDSET(gmColEvent_Kind_SetSkeletonID, 26, 6) | GC_FIELDSET(skeleton_id, 0, 26))

// // ColAnim Script 0 is NULL

// // 0x8012CA90 - ColAnim Script 1
// gmColEventSetRGBA     gmColEvents_Col1_Ev0 = {
// gmColEvent_Kind_SetColor1, 0xFF, 0xFF, 0xFF, 0x30 }; gmColEventDefault
// gmColEvents_Col1_Ev1 = { gmColEvent_Kind_Wait, 65535 }; gmColEventGoto
// gmColEvents_Col1_Ev2 = { gmColEvent_Kind_Goto, &gmColEvents_Col1_Ev0 };

// // 0x8012CAA4 - ColAnim Script 2
// gmColEventDefault     gmColEvents_Col2_Ev0 = {
// gmColEvent_Kind_ToggleColorOff }; gmColEventDefault
// gmColEvents_Col2_Ev1 = { gmColEvent_Kind_End };

// // 0x8012CAAC - ColAnim Script 3
// gmColEventSetRGBA     gmColEvents_Col3_Ev0 = {
// gmColEvent_Kind_SetColor1, 0xFF, 0xFF, 0xFF, 0x82 }; gmColEventBlendRGBA
// gmColEvents_Col3_Ev1 = { gmColEvent_Kind_BlendColor1, 3, 0xFF, 0xFF,
// 0xFF, 0x32 }; gmColEventDefault     gmColEvents_Col3_Ev2 = {
// gmColEvent_Kind_Wait, 3 }; gmColEventDefault     gmColEvents_Col3_Ev3
// = { gmColEvent_Kind_ToggleColorOff }; gmColEventDefault
// gmColEvents_Col3_Ev4 = { gmColEvent_Kind_Wait, 1 }; gmColEventGoto
// gmColEvents_Col3_Ev5 = { gmColEvent_Kind_Goto, &gmColEvents_Col3_Ev0
// };

// // 0x8012CAD0 - ColAnim Script 4
// gmColEventSetRGBA     gmColEvents_Col4_Ev0 = {
// gmColEvent_Kind_SetColor1, 0x80, 0xFF, 0x80, 0x50 }; gmColEventBlendRGBA
// gmColEvents_Col4_Ev1 = { gmColEvent_Kind_BlendColor1, 3, 0x80, 0xFF,
// 0x80, 0x14 }; gmColEventDefault     gmColEvents_Col4_Ev2 = {
// gmColEvent_Kind_Wait, 3 }; gmColEventDefault     gmColEvents_Col4_Ev3
// = { gmColEvent_Kind_ToggleColorOff }; gmColEventDefault
// gmColEvents_Col4_Ev4 = { gmColEvent_Kind_Wait, 1 }; gmColEventGoto
// gmColEvents_Col4_Ev5 = { gmColEvent_Kind_Goto, &gmColEvents_Col4_Ev0
// };

// // 0x8012CAF4 - ColAnim Script 5
// gmColEventSetLight    gmColEvents_Col5_Ev0 = {
// gmColEvent_Kind_SetLight, 90, 0 }; gmColEventDefault
// gmColEvents_Col5_Ev1 = { gmColEvent_Kind_ToggleColorOff };
// gmColEventDefault     gmColEvents_Col5_Ev2 = { gmColEvent_Kind_Wait, 1
// }; gmColEventSetRGBA     gmColEvents_Col5_Ev3 = {
// gmColEvent_Kind_SetColor1, 0xFF, 0xFF, 0xFF, 0xE6 }; gmColEventDefault
// gmColEvents_Col5_Ev4 = { gmColEvent_Kind_Wait, 1 }; gmColEventBlendRGBA
// gmColEvents_Col5_Ev5 = { gmColEvent_Kind_BlendColor1, 6, 0xFF, 0xFF,
// 0xFF, 0x1E }; gmColEventDefault     gmColEvents_Col5_Ev6 = {
// gmColEvent_Kind_Wait, 6 }; gmColEventDefault     gmColEvents_Col5_Ev7
// = { gmColEvent_Kind_ToggleColorOff }; gmColEventDefault
// gmColEvents_Col5_Ev8 = { gmColEvent_Kind_End };

// // Next: 8012CB20

// // 0x8012CA90 - ColAnim Script 1
// uintptr_t gmColEventScript1[/* */] =
// {
//     gmColCommandSetColor1S1(),
//     gmColCommandSetColor1S2(0xFF, 0xFF, 0xFF, 0x30),
//     gmColCommandWaitS1(65535),
//     gmColCommandGotoS1(),
//     gmColCommandGotoS2(gmColEventScript1)
// };

// // 0x8012CAA4 - ColAnim Script 2
// uintptr_t gmColEventScript2[/* */] =
// {
//     gmColCommandToggleColorOffS1(),
//     gmColCommandEndS1()
// };

// // 0x8012CAAC - ColAnim Script 3
// uintptr_t gmColEventScript3[/* */] =
// {
//     gmColCommandSetColor1S1(),
//     gmColCommandSetColor1S2(0xFF, 0xFF, 0xFF, 0x82),
//     gmColCommandBlendColor1S1(3),
//     gmColCommandBlendColor1S2(0xFF, 0xFF, 0xFF, 0x32),
//     gmColCommandWaitS1(3),
//     gmColCommandToggleColorOffS1(),
//     gmColCommandWaitS1(1),
//     gmColCommandGotoS1(),
//     gmColCommandGotoS2(gmColEventScript3)
// };

// // 0x8012CAD0 - ColAnim Script 4
// uintptr_t gmColEventScript4[/* */] =
// {
//     gmColCommandSetColor1S1(),
//     gmColCommandSetColor1S2(0x80, 0xFF, 0x80, 0x50),
//     gmColCommandBlendColor1S1(3),
//     gmColCommandBlendColor1S2(0x80, 0xFF, 0x80, 0x14),
//     gmColCommandWaitS1(3),
//     gmColCommandToggleColorOffS1(),
//     gmColCommandWaitS1(1),
//     gmColCommandGotoS1(),
//     gmColCommandGotoS2(gmColEventScript4)
// };

// // 0x8012CAF4 - ColAnim Script 5
// uintptr_t gmColEventScript5[/* */] =
// {
//     gmColCommandSetLightS1(90, 0),
//     gmColCommandToggleColorOffS1(),
//     gmColCommandWaitS1(1),
//     gmColCommandSetColor1S1(),
//     gmColCommandSetColor1S2(0xFF, 0xFF, 0xFF, 0xE6),
//     gmColCommandWaitS1(1),
//     gmColCommandBlendColor1S1(6),
//     gmColCommandBlendColor1S2(0xFF, 0xFF, 0xFF, 0x1E),
//     gmColCommandWaitS1(6),
//     gmColCommandToggleColorOffS1(),
//     gmColCommandEndS1()
// };

typedef struct gmRumbleEventDefault
{
	u16 opcode : 3;
	u16 param : 13;

} gmRumbleEventDefault;

typedef struct gmRumbleEvent
{
	u8 rumble_id;
	ub8 is_rumble_active;
	u16 rumble_status;
	u16 loop_count;
	s32 rumble_timer;
	void* p_goto;
	gmRumbleEventDefault* p_script;

} gmRumbleEvent;

typedef struct gmRumbleLink
{
	gmRumbleEvent* p_event;
	struct gmRumbleLink* rnext;
	struct gmRumbleLink* rprev;

} gmRumbleLink;

typedef struct gmRumblePlayer
{
	ub8 is_active;
	gmRumbleLink* rlink;

} gmRumblePlayer;

#endif
