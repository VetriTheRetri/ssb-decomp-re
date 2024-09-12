#ifndef _GMTYPES_H_
#define _GMTYPES_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gm/gmdef.h>

#include <ovl0/library.h>

struct gmHitCollisionFlags
{
	u32 is_interact_hurt : 1;
	u32 is_interact_shield : 1;
	u32 is_interact_reflect : 1;
	u32 is_interact_absorb : 1;
	u32 group_id : 3; // Number of hitbox groups this object has been hit by /
					  // can be hit by? Its implementation feels abandoned.
	u32 timer_rehit : 6;
};

struct gmHitRecord
{
	GObj *victim_gobj;
	gmHitCollisionFlags victim_flags;
};

union gmStatFlags
{
	struct
	{
		u16 unused : 3;
		ub16 is_smash_attack : 1;
		ub16 ga : 1;
		ub16 is_projectile : 1;
		u16 stat_attack_id : 10;
	};
	u16 halfword;
};

struct gmColScript
{
	u32 *p_script; // Pointer to Color Animation script?
	u16 color_event_timer;
	u16 script_id;
	void *p_subroutine[1];
	s32 loop_count[1];
	void *p_goto[2];
	s32 unk_ca_timer;
};

struct gmColKeys
{
	u8 r, g, b, a;
	s16 ir, ig, ib, ia; 		// Interpolation step
};

struct gmColAnim
{
	gmColScript cs[2];
	s32 length;
	s32 colanim_id;
	gmColKeys maincolor; 		// Used as both PrimColor and EnvColor? Screen flashes use it as Prim and items as Env
	f32 light_angle1;
	f32 light_angle2;
	gmColKeys blendcolor;
	ub8 is_use_maincolor : 1;
	ub8 is_use_light : 1;
	ub8 is_use_blendcolor : 1;
	u8 skeleton_id : 2; 		// ID of skeleton model to use during electric shock ColAnim?
};

struct gmColDesc
{
	void *p_script;
	u8 priority;				// If this is >= current ColAnim's priority, the new ColAnim gets applied
	ub8 is_unlocked;			// If TRUE, ColAnim can be interrupted on fighter status change
};

struct gmColEventDefault
{
	u32 opcode : 6;
	u32 value : 26;
};

struct gmColEventGoto1
{
	u32 opcode : 6;
};

struct gmColEventGoto2
{
	void* p_goto;
};

struct gmColEventGoto
{
	gmColEventGoto1 s1;
	gmColEventGoto2 s2;
};

struct gmColEventSubroutine1
{
	u32 opcode : 6;
};

struct gmColEventSubroutine2
{
	void* p_subroutine;
};

struct gmColEventSubroutine
{
	gmColEventSubroutine1 s1;
	gmColEventSubroutine2 s2;
};

struct gmColEventParallel1
{
	u32 opcode : 6;
};

struct gmColEventParallel2
{
	void* p_script;
};

struct gmColEventParallel
{
	gmColEventParallel1 s1;
	gmColEventParallel2 s2;
};

struct gmColEventSetRGBA1
{
	u32 opcode : 6;
};

struct gmColEventSetRGBA2
{
	u32 r : 8;
	u32 g : 8;
	u32 b : 8;
	u32 a : 8;
};

struct gmColEventSetRGBA
{
	gmColEventSetRGBA1 s1;
	gmColEventSetRGBA2 s2;
};

struct gmColEventBlendRGBA1
{
	u32 opcode : 6;
	u32 blend_frames : 26;
};

struct gmColEventBlendRGBA2
{
	u32 r : 8;
	u32 g : 8;
	u32 b : 8;
	u32 a : 8;
};

struct gmColEventBlendRGBA
{
	gmColEventBlendRGBA1 s1;
	gmColEventBlendRGBA2 s2;
};

struct gmColEventMakeEffect1
{
	u32 opcode : 6;
	s32 joint_id : 7;
	u32 effect_id : 9;
	u32 flag : 10;
};

struct gmColEventMakeEffect2
{
	s32 off_x : 16;
	s32 off_y : 16;
};

struct gmColEventMakeEffect3
{
	s32 off_z : 16;
	s32 rng_x : 16;
};

struct gmColEventMakeEffect4
{
	s32 rng_y : 16;
	s32 rng_z : 16;
};

struct gmColEventMakeEffect
{
	gmColEventMakeEffect1 s1;
	gmColEventMakeEffect2 s2;
	gmColEventMakeEffect3 s3;
	gmColEventMakeEffect4 s4;
};

struct gmColEventSetLight
{
	u32 opcode : 6;
	s32 light1 : 13;
	s32 light2 : 13;
};

union gmColEventAll
{
	gmColEventDefault ca_default;
	gmColEventGoto1 ca_goto1;
	gmColEventGoto2 ca_goto2;
	gmColEventDefault ca_loopstart;
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
	gmColEventDefault ca_sfx;
};

struct gmRumbleEventDefault
{
	u16 opcode : 3;
	u16 param : 13;
};

struct gmRumbleScript
{
	u8 rumble_id;
	ub8 is_rumble_active;
	u16 rumble_status;
	u16 loop_count;
	s32 rumble_timer;
	void *p_goto;
	gmRumbleEventDefault *p_event;
};

struct gmRumbleLink
{
	gmRumbleScript *p_script;
	gmRumbleLink *rnext;
    gmRumbleLink *rprev;
};

struct gmRumblePlayer
{
	ub8 is_active;
	gmRumbleLink *rlink;
};

struct gmStaffrollMatrix
{
	u8 filler_0x0[0xC];
	f32 unk_gmcreditsmtx_0xC;
	f32 unk_gmcreditsmtx_0x10;
	f32 unk_gmcreditsmtx_0x14;
};

struct gmStaffrollText
{
	s32 character_start;        // Where to begin reading text from in main character array
	s32 character_count;        // Number of characters in credits role card to display
};

struct gmStaffrollSprite
{
	u8 width;
	u8 height;
	intptr_t offset;
};

struct gmStaffrollStaff
{
	u8 filler_0x0[0x4];
	s32 staff_id;
};

struct gmStaffrollName
{
	gmStaffrollName *next;
	s32 name_id;
	sb32 job_or_name;   // 0 = job (e.g. Director), 1 = name (e.g. Masahiro Sakurai)
	f32 offset_x;
	f32 unkgmcreditsstruct0x10;
	f32 interpolation;
	s32 status;
	s32 unkgmcreditsstruct0x1C;
};

struct gmStaffrollJob
{
	s32 prefix_id;    // e.g. "Chief" -> Chief Programmers
	s32 job_id;       // Job text to use
	s32 staff_count;  // Number of staff members to roll until new job is shown
};

struct gmStaffrollSetup
{
	f32 unk_gmcreditsunk_0x0;
	DObj *dobj;
	f32 spacing;
	f32 unk_gmcreditsunk_0xC;
	f32 unk_gmcreditsunk_0x10;
};

struct gmStaffrollProjection
{
	Vec3f pv0;
	Vec3f pv1;
	Vec3f pv2;
	Vec3f pv3;
	f32 px0;
	f32 py0;
	f32 px1;
	f32 py1;
	f32 px2;
	f32 py2;
	f32 px3;
	f32 py3;
};

#endif
