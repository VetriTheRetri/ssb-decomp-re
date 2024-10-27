#ifndef _GMTYPES_H_
#define _GMTYPES_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gm/gmdef.h>

#include <lb/library.h>

struct GMHitFlags
{
	u32 is_interact_hurt : 1;
	u32 is_interact_shield : 1;
	u32 is_interact_reflect : 1;
	u32 is_interact_absorb : 1;
	u32 group_id : 3; // Number of hitbox groups this object has been hit by /
					  // can be hit by? Its implementation feels abandoned.
	u32 timer_rehit : 6;
};

struct GMHitRecord
{
	GObj *victim_gobj;
	GMHitFlags victim_flags;
};

union GMStatFlags
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

struct GMColScript
{
	u32 *p_script; // Pointer to Color Animation script?
	u16 color_event_timer;
	u16 script_id;
	void *p_subroutine[1];
	s32 loop_count[1];
	void *p_goto[2];
	s32 unk_ca_timer;
};

struct GMColKeys
{
	u8 r, g, b, a;
	s16 ir, ig, ib, ia; 		// Interpolation step
};

struct GMColAnim
{
	GMColScript cs[2];
	s32 length;
	s32 colanim_id;
	GMColKeys maincolor; 		// Used as both PrimColor and EnvColor? Screen flashes use it as Prim and items as Env
	f32 light_angle_x;
	f32 light_angle_y;
	GMColKeys blendcolor;
	ub8 is_use_maincolor : 1;
	ub8 is_use_light : 1;
	ub8 is_use_blendcolor : 1;
	u8 skeleton_id : 2; 		// ID of skeleton model to use during electric shock ColAnim?
};

struct GMColDesc
{
	void *p_script;
	u8 priority;				// If this is >= current ColAnim's priority, the new ColAnim gets applied
	ub8 is_unlocked;			// If TRUE, ColAnim can be interrupted on fighter status change
};

struct GMColEventDefault
{
	u32 opcode : 6;
	u32 value : 26;
};

struct GMColEventGoto1
{
	u32 opcode : 6;
};

struct GMColEventGoto2
{
	void* p_goto;
};

struct GMColEventGoto
{
	GMColEventGoto1 s1;
	GMColEventGoto2 s2;
};

struct GMColEventSubroutine1
{
	u32 opcode : 6;
};

struct GMColEventSubroutine2
{
	void* p_subroutine;
};

struct GMColEventSubroutine
{
	GMColEventSubroutine1 s1;
	GMColEventSubroutine2 s2;
};

struct GMColEventParallel1
{
	u32 opcode : 6;
};

struct GMColEventParallel2
{
	void* p_script;
};

struct GMColEventParallel
{
	GMColEventParallel1 s1;
	GMColEventParallel2 s2;
};

struct GMColEventSetRGBA1
{
	u32 opcode : 6;
};

struct GMColEventSetRGBA2
{
	u32 r : 8;
	u32 g : 8;
	u32 b : 8;
	u32 a : 8;
};

struct GMColEventSetRGBA
{
	GMColEventSetRGBA1 s1;
	GMColEventSetRGBA2 s2;
};

struct GMColEventBlendRGBA1
{
	u32 opcode : 6;
	u32 blend_frames : 26;
};

struct GMColEventBlendRGBA2
{
	u32 r : 8;
	u32 g : 8;
	u32 b : 8;
	u32 a : 8;
};

struct GMColEventBlendRGBA
{
	GMColEventBlendRGBA1 s1;
	GMColEventBlendRGBA2 s2;
};

struct GMColEventMakeEffect1
{
	u32 opcode : 6;
	s32 joint_id : 7;
	u32 effect_id : 9;
	u32 flag : 10;
};

struct GMColEventMakeEffect2
{
	s32 off_x : 16;
	s32 off_y : 16;
};

struct GMColEventMakeEffect3
{
	s32 off_z : 16;
	s32 rng_x : 16;
};

struct GMColEventMakeEffect4
{
	s32 rng_y : 16;
	s32 rng_z : 16;
};

struct GMColEventMakeEffect
{
	GMColEventMakeEffect1 s1;
	GMColEventMakeEffect2 s2;
	GMColEventMakeEffect3 s3;
	GMColEventMakeEffect4 s4;
};

struct GMColEventSetLight
{
	u32 opcode : 6;
	s32 light1 : 13;
	s32 light2 : 13;
};

union GMColEventAll
{
	GMColEventDefault ca_default;
	GMColEventGoto1 ca_goto1;
	GMColEventGoto2 ca_goto2;
	GMColEventDefault ca_loopstart;
	GMColEventSubroutine1 ca_sub1;
	GMColEventSubroutine2 ca_sub2;
	GMColEventParallel1 ca_par1;
	GMColEventParallel2 ca_par2;
	GMColEventSetRGBA1 ca_rgba1;
	GMColEventSetRGBA2 ca_rgba2;
	GMColEventBlendRGBA1 ca_blend1;
	GMColEventBlendRGBA2 ca_blend2;
	GMColEventMakeEffect1 ca_effect1;
	GMColEventMakeEffect2 ca_effect2;
	GMColEventMakeEffect3 ca_effect3;
	GMColEventMakeEffect4 ca_effect4;
	GMColEventSetLight ca_light;
	GMColEventDefault ca_sfx;
};

struct GMRumbleEventDefault
{
	u16 opcode : 3;
	u16 param : 13;
};

struct GMRumbleScript
{
	u8 rumble_id;
	ub8 is_rumble_active;
	u16 rumble_status;
	u16 loop_count;
	s32 rumble_timer;
	void *p_goto;
	GMRumbleEventDefault *p_event;
};

struct GMRumbleLink
{
	GMRumbleScript *p_script;
	GMRumbleLink *rnext;
    GMRumbleLink *rprev;
};

struct GMRumblePlayer
{
	ub8 is_active;
	GMRumbleLink *rlink;
};

struct GMStaffrollMatrix
{
	u8 filler_0x0[0xC];
	f32 unk_gmcreditsmtx_0xC;
	f32 unk_gmcreditsmtx_0x10;
	f32 unk_gmcreditsmtx_0x14;
};

struct GMStaffrollText
{
	s32 character_start;        // Where to begin reading text from in main character array
	s32 character_count;        // Number of characters in credits role card to display
};

struct GMStaffrollSprite
{
	u8 width;
	u8 height;
	intptr_t offset;
};

struct GMStaffrollStaff
{
	u8 filler_0x0[0x4];
	s32 staff_id;
};

struct GMStaffrollName
{
	GMStaffrollName *next;
	s32 name_id;
	sb32 job_or_name;   // 0 = job (e.g. Director), 1 = name (e.g. Masahiro Sakurai)
	f32 offset_x;
	f32 unkgmcreditsstruct0x10;
	f32 interpolation;
	s32 status;
	s32 unkgmcreditsstruct0x1C;
};

struct GMStaffrollJob
{
	s32 prefix_id;    // e.g. "Chief" -> Chief Programmers
	s32 job_id;       // Job text to use
	s32 staff_count;  // Number of staff members to roll until new job is shown
};

struct GMStaffrollSetup
{
	f32 unk_gmcreditsunk_0x0;
	DObj *dobj;
	f32 spacing;
	f32 unk_gmcreditsunk_0xC;
	f32 unk_gmcreditsunk_0x10;
};

struct GMStaffrollProjection
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
