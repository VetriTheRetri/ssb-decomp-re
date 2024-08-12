#ifndef _GMSCRIPT_H_
#define _GMSCRIPT_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>

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
	s32 joint_id : 7;
	u32 effect_id : 9;
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
	gmColEventMakeEffect1 ca_effect1;
	gmColEventMakeEffect2 ca_effect2;
	gmColEventMakeEffect3 ca_effect3;
	gmColEventMakeEffect4 ca_effect4;
	gmColEventSetLight ca_light;
	gmColEventPlaySFX ca_sfx;

} gmColEventAll;

// // ColAnim Script 0 is NULL

// // 0x8012CA90 - ColAnim Script 1
// gmColEventSetRGBA     gmColEvents_Col1_Ev0 = {
// nGMColEventKindSetColor1, 0xFF, 0xFF, 0xFF, 0x30 }; gmColEventDefault
// gmColEvents_Col1_Ev1 = { nGMColEventKindWait, 65535 }; gmColEventGoto
// gmColEvents_Col1_Ev2 = { nGMColEventKindGoto, &gmColEvents_Col1_Ev0 };

// // 0x8012CAA4 - ColAnim Script 2
// gmColEventDefault     gmColEvents_Col2_Ev0 = {
// nGMColEventKindToggleColorOff }; gmColEventDefault
// gmColEvents_Col2_Ev1 = { nGMColEventKindEnd };

// // 0x8012CAAC - ColAnim Script 3
// gmColEventSetRGBA     gmColEvents_Col3_Ev0 = {
// nGMColEventKindSetColor1, 0xFF, 0xFF, 0xFF, 0x82 }; gmColEventBlendRGBA
// gmColEvents_Col3_Ev1 = { nGMColEventKindBlendColor1, 3, 0xFF, 0xFF,
// 0xFF, 0x32 }; gmColEventDefault     gmColEvents_Col3_Ev2 = {
// nGMColEventKindWait, 3 }; gmColEventDefault     gmColEvents_Col3_Ev3
// = { nGMColEventKindToggleColorOff }; gmColEventDefault
// gmColEvents_Col3_Ev4 = { nGMColEventKindWait, 1 }; gmColEventGoto
// gmColEvents_Col3_Ev5 = { nGMColEventKindGoto, &gmColEvents_Col3_Ev0
// };

// // 0x8012CAD0 - ColAnim Script 4
// gmColEventSetRGBA     gmColEvents_Col4_Ev0 = {
// nGMColEventKindSetColor1, 0x80, 0xFF, 0x80, 0x50 }; gmColEventBlendRGBA
// gmColEvents_Col4_Ev1 = { nGMColEventKindBlendColor1, 3, 0x80, 0xFF,
// 0x80, 0x14 }; gmColEventDefault     gmColEvents_Col4_Ev2 = {
// nGMColEventKindWait, 3 }; gmColEventDefault     gmColEvents_Col4_Ev3
// = { nGMColEventKindToggleColorOff }; gmColEventDefault
// gmColEvents_Col4_Ev4 = { nGMColEventKindWait, 1 }; gmColEventGoto
// gmColEvents_Col4_Ev5 = { nGMColEventKindGoto, &gmColEvents_Col4_Ev0
// };

// // 0x8012CAF4 - ColAnim Script 5
// gmColEventSetLight    gmColEvents_Col5_Ev0 = {
// nGMColEventKindSetLight, 90, 0 }; gmColEventDefault
// gmColEvents_Col5_Ev1 = { nGMColEventKindToggleColorOff };
// gmColEventDefault     gmColEvents_Col5_Ev2 = { nGMColEventKindWait, 1
// }; gmColEventSetRGBA     gmColEvents_Col5_Ev3 = {
// nGMColEventKindSetColor1, 0xFF, 0xFF, 0xFF, 0xE6 }; gmColEventDefault
// gmColEvents_Col5_Ev4 = { nGMColEventKindWait, 1 }; gmColEventBlendRGBA
// gmColEvents_Col5_Ev5 = { nGMColEventKindBlendColor1, 6, 0xFF, 0xFF,
// 0xFF, 0x1E }; gmColEventDefault     gmColEvents_Col5_Ev6 = {
// nGMColEventKindWait, 6 }; gmColEventDefault     gmColEvents_Col5_Ev7
// = { nGMColEventKindToggleColorOff }; gmColEventDefault
// gmColEvents_Col5_Ev8 = { nGMColEventKindEnd };

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
