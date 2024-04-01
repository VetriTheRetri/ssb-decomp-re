#ifndef _OBJTYPES_H_
#define _OBJTYPES_H_

#include <macros.h>
#include <ssb_types.h>
#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>

#include "objdef.h"

// General OM defines
#define OM_COMMON_MAX_LINKS 33
#define OM_COMMON_MAX_DL_LINKS 65

// GObj defines
#define GOBJ_FLAG_NONE (0)
#define GOBJ_FLAG_NORENDER (1 << 0)
#define GOBJ_FLAG_NOEJECT (1 << 6) // I actually don't know what this really does

// DObj defines
#define DOBJ_PARENT_NULL ((DObj*)1)

#define DOBJ_FLAG_NONE (0)
#define DOBJ_FLAG_NOTEXTURE (1 << 0)
#define DOBJ_FLAG_NORENDER (1 << 1)

// AObj defines
#define AOBJ_FRAME_NULL F32_MIN // Used to mark the lack of frames remaining in an animation

// MObj defines
#define MOBJ_FLAG_PRIMCOLOR (1 << 9)
#define MOBJ_FLAG_ENVCOLOR (1 << 10)
#define MOBJ_FLAG_BLENDCOLOR (1 << 11)
#define MOBJ_FLAG_LIGHT1 (1 << 12)
#define MOBJ_FLAG_LIGHT2 (1 << 13)

union OMUserData
{
	s32 s;
	u32 u;
	void* p;
};

union ATrack
{
	f32 f;
	u32 w;
	void* p;
};

// Not to be confused with SGI's Acmd
union ACommand
{
	struct
	{
		u16 opcode : 5;
		u16 flags : 10;
		u16 toggle : 1;

	} command;

	s16 shalf;
	u16 uhalf;
};

union AObjActor
{
	void* p;
	ATrack* atrack;
	ACommand* acommand;
};

struct _AObj
{
	/* 0x00 */ AObj* next;
	/* 0x04 */ u8 unk_aobj_0x4;
	/* 0x05 */ u8 unk_aobj_0x5;
	/* 0x08 */ f32 unk_aobj_0x8;
	/* 0x0C */ f32 unk_aobj_0xC;
	/* 0x10 */ f32 unk_aobj_0x10;
	/* 0x14 */ f32 unk_aobj_0x14;
	/* 0x18 */ f32 unk_aobj_0x18;
	/* 0x1C */ f32 unk_aobj_0x1C;
	// interpolation control struct?
	/* 0x20 */ ACommand* interpolate;
}; // size == 0x24

struct _GObjThread
{
	GObjThread* next;
	OSThread osthread;
	u64* osstack;
	u32 stack_size;
};

struct _OMThreadStackNode
{
	OMThreadStackNode* next;
	u32 stack_size;
	u64 stack[1];
}; // size == 0x08 + VLA

// List that connects lists of stack nodes of `size` bytes
struct _OMThreadStackList
{
	OMThreadStackList* next;
	OMThreadStackNode* stack;
	u32 size;
};

struct _GObjProcess
{
	GObjProcess* unk_gobjproc_0x0;
	GObjProcess* unk_gobjproc_0x4;
	GObjProcess* unk_gobjproc_0x8; // This is more than likely not an array, doing this only to get the correct offsets
	GObjProcess* unk_gobjproc_0xC;
	s32 priority;
	u8 kind;
	u8 unk_gobjproc_0x15;
	GObj* parent_gobj;
	union // These are based on 0x14
	{
		GObjThread* gobjthread; // GObjThread
		void (*proc_thread)(GObj*);
	};
	void (*proc_common)(GObj*);
};

struct GObjLink
{
	GObj* next;
	s32 unk_gobjlink_0x4;
};

struct GObj
{
	GObjKind gobj_id;
	GObj* link_next;
	GObj* link_prev;
	u8 link_id;
	u8 dl_link_id;
	u8 unk_gobj_0xE; // ???
	u8 obj_kind;	 // Determines kind of *obj: 0 = NULL, 1 = DObj, 2 = SObj, 3 = Camera
	u32 link_order;
	void (*proc_eject)(GObj*);
	GObjProcess* gobjproc_next;

	union
	{
		s32 unk_0x1C;
		GObj* unk_gobj_0x1C;
		GObjProcess* gobjproc_prev;
	};

	GObj* dl_link_next;
	GObj* dl_link_prev;
	u32 dl_link_order;
	void (*proc_render)(GObj*);
	u64 unk_gobj_0x30;
	s32 unk_gobj_0x38; // 0xFFFFFFFF, textures or series of flags?
	u64 unk_gobj_0x40;
	GObjLink gobjlinks[5];
	s32 gobjlink_len;				   // Length/number of active members of gobjlinks
	void* obj;						   // Can be: NULL, DObj, SObj or Camera
	f32 anim_frame;					   // Current frame of animation?
	u32 flags;						   // GObj logic flags (e.g. 0x1 = skip rendering)
	void (*dobjproc)(DObj*, s32, f32); // DObj animation renderer?
	OMUserData user_data;
};

struct _OMMtx
{
	OMMtx* next;
	u8 kind;
	u8 unk05;
	Mtx unk08;
};

struct OMPersp
{
	OMMtx* ommtx;
	u16 norm;
	f32 fovy;
	f32 aspect;
	f32 near;
	f32 far;
	f32 scale;
};

struct OMFrustum
{
	OMMtx* ommtx;
	f32 l, r, b, t, n, f;
	f32 scale;
};

struct OMOrtho
{
	OMMtx* ommtx;
	f32 l, r, b, t, n, f;
	f32 scale;
};

struct OMTranslate
{
	OMMtx* ommtx;

	union
	{
		Vec3f f;
		Vec3i i;

	} vec;
};

struct OMRotate
{
	OMMtx* ommtx;

	f32 a; // Rotation angle

	union
	{
		Vec3f f;

	} vec;
};

struct OMScale
{
	OMMtx* ommtx;

	union
	{
		Vec3f f;

	} vec;
};

/// This stores up to 3 `Mtx3Int`/`Mtx3Float`/`Mtx4Float` structures in the VLA data
/// based on the kind id in the `kinds` arrays:
/// Kind 1 - `struct Mtx3Int` or `union Mtx3fi`
/// Kind 2 - `struct Mtx4Float`
/// Kind 3 - `struct Mtx3Float`
struct DObjDynamicStore
{
	/* 0x00 */ u8 kinds[3];
	/* 0x03 */ u8 pad;
	/* 0x04 */ u8 data[1];
}; // size == 4 + VLA

struct _MObjSub
{
	u16 pad00;
	u8 fmt;
	u8 siz;
	Sprite** sprites; // should this be a pointer to an array of images (sprite set)?
	u16 unk08;
	u16 unk0A;
	u16 unk0C;
	u16 unk0E;
	s32 unk10; // could be f32??
	f32 unk14;
	f32 unk18;
	f32 unk1C;
	f32 unk20;
	f32 unk24;
	f32 unk28;
	void** images; // image pointers?
	u16 flags;	   // command flags?
	u8 block_fmt;  // texture image format?
	u8 block_siz;
	u16 block_dxt;
	u16 unk36;
	u16 unk38;
	u16 unk3A;
	f32 unk3C;
	f32 unk40;
	f32 unk44;
	u8 pad48[0x4C - 0x48];
	u32 unk4C;
	gsColorRGBA primcolor;
	u8 prim_l;
	u8 prim_m;
	u8 prim_pad[2];
	gsColorRGBA envcolor;
	gsColorRGBA blendcolor;
	u32 light1_color;
	u32 light2_color;
	s32 unk68;
	s32 unk6C;
	s32 unk70;
	s32 unk74;
};

struct _MObj
{
	MObj* next;
	GObj* parent_gobj; // Unconfirmed
	MObjSub sub;
	u16 current_image_id;
	u16 next_image_id;
	f32 lfrac;
	f32 image_frame;
	u8 filler_0x8C[0x90 - 0x8C];
	AObj* aobj;
	AObjActor actor;
	f32 mobj_f0; // Animation frames remaining, multi-purpose?
	f32 mobj_f1; // Animation playback rate / interpolation, multi-purpose?
	f32 mobj_f2; // Current animation frame, multi-purpose?
	s32 unk_dobj_0xA4;
};

struct DObjTransformTypes
{
	u8 tk1, tk2;
	u8 unk_dobjtransform_0x2;
};

struct DObjDesc
{
	s32 index;
	void* display_list;
	Vec3f translate;
	Vec3f rotate;
	Vec3f scale;
};

struct DObjDescArray
{
	DObjDesc* dobj_desc;
	DObjDesc** d2;
	DObjDesc** d3;
	u8 unk_dobjcontain_0xC;
};

struct DObjDescContainer
{
	DObjDescArray dobj_desc_array[2];
};

struct DObjMultiList
{
	s32 id;
	Gfx *dl1, *dl2;
};

struct DObjDLLink
{
	s32 list_id;
	Gfx* dl;
};

struct DObjDistDL
{
	f32 target_dist;
	Gfx* dl;
};

struct DObjDistDLLink
{
	f32 target_dist;
	DObjDLLink* dl_link;
};

struct OMGfxLink
{
	u8 id;
	Gfx* dls[4];
};

struct _DObj
{
	DObj* alloc_free; // Has to do with memory allocation
	GObj* parent_gobj;
	union
	{
		struct
		{
			DObj* sib_next; // Next sibling? 0x8
			DObj* sib_prev; // Previous sibling? 0xC
			DObj* child;	// Child? 0x10
			DObj* parent;	// Parent? 0x14
		};
		struct
		{
			DObj* unk_0x8;
			DObj* unk_0xC;
			DObj* next;
			DObj* prev;
		};
	};
	OMTranslate translate;
	OMRotate rotate;
	OMScale scale;

	DObjDynamicStore* dynstore;

	union
	{
		void* display_ptr;
		Gfx* display_list;
		Gfx** dl_array;
		DObjMultiList* multi_list;
		DObjDLLink* dl_link;
		DObjDistDL* dist_dl;
		DObjDistDLLink* dist_dl_link;
	};

	u8 flags;
	u8 unk_dobj_0x55;
	u8 ommtx_len;
	OMMtx* ommtx[5];
	AObj* aobj;
	AObjActor actor;

	f32 dobj_f0; // Multi-purpose? Usually FLOAT32_MAX, used as rotation step in Crate/Barrel smash GFX?
	f32 dobj_f1; // Multi-purpose? Fighters use this as animation playback rate / interpolation, but it is used as
				 // rotation step in Crate/Barrel smash GFX?
	f32 dobj_f2; // Multi-purpose? Usually animation frame, but used as rotation step in Crate/Barrel smash GFX?

	MObj* mobj;

	/*
	 * Can be:
	 * Other DObj that this DObj is attached to
	 * ftParts
	 * YakumonoID
	 * Color for 1P Game Master Hand defeat fadeout (?)
	 */
	OMUserData user_data;
};

struct _SObj // Sprite object
{
	SObj* alloc_free;	  // Has to do with memory allocation
	GObj* parent_gobj;	  // GObj that owns this SObj
	SObj* next;			  // Next SObj in linked list
	SObj* prev;			  // Prev SObj in linked list
	Sprite sprite;		  // Sprite data
	OMUserData user_data; // Custom parameters attached to SObj
	Vec2f pos; // Position on screen; Causes a ghosting effect if out of bounds; based on pixel position in width-height
			   // 2D array
	gsColorRGBA shadow_color; // Color of outline around / under sprite?
	u8 cms;					  // s-axis mirror, no-mirror, wrap and clamp flags
	u8 cmt;					  // t-axis mirror, no-mirror, wrap and clamp flags
	u8 masks;				  // s-axis mask
	u8 maskt;				  // t-axis mask
	u16 lrs, lrt;			  // lower right s and t - used for wrap/mirror boundary
};

struct CameraVec
{
	OMMtx* ommtx;
	Vec3f eye; // Either camera terms do not translate very well here or I'm just too incompetent... this rotates about
			   // the focus point
	Vec3f at;  // This moves the camera on the XYZ planes
	Vec3f up;
};

struct _Camera
{
	Camera* next;
	GObj* parent_gobj;

	Vp viewport;

	union CameraProjection
	{
		OMPersp persp;
		OMOrtho ortho;
		OMFrustum frustum;

	} projection;

	CameraVec vec;

	s32 ommtx_len;
	OMMtx* ommtx[2];

	AObj* aobj;
	AObjActor actor;

	f32 cam_f0;
	f32 cam_f1;
	f32 cam_f2;

	u32 flags;
	u32 color;

	void (*proc_camera)(Camera*, s32);

	s32 unk_camera_0x8C;
};

struct _OMSetup
{
	GObjThread* gobjthreads;
	s32 num_gobjthreads;

	u32 thread_stack_size;
	OMThreadStackNode* threadstacks;
	u32 num_stacks;

	s32 unk_omsetup_0x14;

	GObjProcess* gobjprocs;
	s32 num_gobjprocs;

	GObj* gobjs;
	s32 num_gobjs;
	s32 gobj_size;

	OMMtx* ommtxes;
	s32 num_ommtxes;

	void (*proc_cleanup)(DObjDynamicStore*);

	AObj* aobjs;
	s32 num_aobjs;

	MObj* mobjs;
	s32 num_mobjs;

	DObj* dobjs;
	s32 num_dobjs;
	s32 dobj_size;

	SObj* sobjs;
	s32 num_sobjs;
	s32 sobj_size;

	Camera* cameras;
	s32 num_cameras;
	s32 camera_size;
};

#endif