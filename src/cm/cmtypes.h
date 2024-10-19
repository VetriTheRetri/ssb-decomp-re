#ifndef _CMTYPES_H_
#define _CMTYPES_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <sys/hal_gu.h>
#include <sys/vec.h>
#include <gm/generic.h>
#include <sys/trig_rand.h>

#include <cm/cmdef.h>

struct cmStruct
{
	s32 status_default;
	s32 status_curr;
	s32 status_prev;
	void (*func_camera)(GObj*);
	f32 target_dist;
	Vec3f at_move;
    s32 viewport_ulx;
    s32 viewport_uly;
    s32 viewport_lrx;
    s32 viewport_lry;
    s32 viewport_center_x;
    s32 viewport_center_y;
    s32 viewport_width;
    s32 viewport_height;
	f32 fovy;
	GObj* pl_pause_gobj; // Guess: this is a struct from here...
	f32 unk_cmstruct_0x48;
	f32 unk_cmstruct_0x4C;
	f32 unk_cmstruct_0x50;
	f32 unk_cmstruct_0x54;
	f32 unk_cmstruct_0x58;
	Vec3f unk_cmstruct_0x5C;
	Vec3f unk_cmstruct_0x68; // ...to here
	GObj* pl_bonus_gobj;	 // ...and there is an array of it
	f32 unk_cmstruct_0x78;
	f32 unk_cmstruct_0x7C;
	f32 unk_cmstruct_0x80;
	f32 unk_cmstruct_0x84;
	f32 unk_cmstruct_0x88;
	Vec3f all_move;
	LookAt look_at;
};

#endif
