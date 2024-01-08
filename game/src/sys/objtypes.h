#ifndef _OBJTYPES_H_
#define _OBJTYPES_H_

#include <PR/ultratypes.h>
#include <PR/sp.h>
#include <ssb_types.h>
#include <macros.h>

#include "objdef.h"

#define DOBJ_RENDERFLAG_NONE   (0)
#define DOBJ_RENDERFLAG_UNK1   (1 << 0)
#define DOBJ_RENDERFLAG_HIDDEN (1 << 1)

#define GOBJ_RENDERFLAG_NONE   (0)
#define GOBJ_RENDERFLAG_HIDDEN (1 << 0)

union ATrack
{
    f32 f;
    u32 w;
    void *p;
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

struct _AObj
{
    /* 0x00 */ AObj *next;
    /* 0x04 */ u8 unk_aobj_0x4;
    /* 0x05 */ u8 unk_aobj_0x5;
    /* 0x08 */ f32 unk_aobj_0x8;
    /* 0x0C */ f32 unk_aobj_0xC;
    /* 0x10 */ f32 unk_aobj_0x10;
    /* 0x14 */ f32 unk_aobj_0x14;
    /* 0x18 */ f32 unk_aobj_0x18;
    /* 0x1C */ f32 unk_aobj_0x1C;
    // interpolation control struct?
    /* 0x20 */ ACommand *interpolate;
}; // size == 0x24

struct _GObjProcess
{
    GObjProcess *gobjproc_next;
    GObjProcess *gobjproc_prev;
    GObjProcess *unk_gobjproc_0x8[2]; // This is more than likely not an array, doing this only to get the correct offsets
    s32 priority;
    u8 kind;
    u8 unk_gobjproc_0x15;
    GObj *parent_gobj;
    union // These are based on 0x14
    {
        void *thread;       // GObjThread
        void(*proc)(GObj *);
    };
    void *unk_gobjproc_0x20;
};

struct GObj
{
    omGObjKind gobj_id;
    GObj *group_gobj_next;
    GObj *group_gobj_prev;
    u8 group;
    u8 room;
    u8 asynchronous_timer;          // For subaction events?
    u8 obj_kind;                    // Determines kind of *obj: 0 = NULL, 1 = DObj, 2 = SObj, 3 = OMCamera
    s32 group_order;                // Might be room?
    void *call_unk;
    GObjProcess *gobjproc;
    s32 unk_0x1C;
    GObj *room_gobj_next;           // Unconfirmed, might be int
    GObj *room_gobj_prev;           // Unconfirmed, might be int
    s32 room_order;                 // Might be group? Assuming room based on order here
    void (*proc_render)(GObj *);
    u64 unk_0x30;
    s32 unk_0x38;                   // 0xFFFFFFFF, textures or series of flags?
    u8 filler_0x3C[0x74 - 0x3C];
    void *obj;                      // Can be: NULL, DObj, SObj or OMCamera
    f32 anim_frame;                 // Current frame of animation?
    u32 obj_renderflags;            // Skips rendering this GObj's *obj?
    void(*dobjproc)(DObj*, s32, f32); // DObj animation renderer?
    void *user_data;                // Special data struct unique to each GObj kind
};

extern GObj *gOMObjCommonLinks[];

struct _OMMtx {
    /* 0x00 */ OMMtx *next;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05;
    /* 0x08 */ Mtx unk08;
    ///* 0x08 */ f32 unk08[4][4];
    ///* 0x08 */ f32 (*unk08)[4][4];
    ///* 0x0C */ u8 pad0C[0x48 - 0xc];
}; // size == 0x48

struct _Mtx6f
{
    OMMtx *mtx;
    f32 f[6];
};

struct _Mtx7f
{
    OMMtx *mtx;
    f32 f[7];
};

struct OMMtxVec3
{
    OMMtx *mtx;

    union
    {
        Vec3f f;
        Vec3i i;

    } vec;
};

struct OMMtxVec4
{
    OMMtx *mtx;

    f32 w; // W axis? Quaternion?

    union
    {
        Vec3f f;
    }
    vec;
};

struct _MObj // Image footer struct
{
    void *mobj_next;
    u8 filler_0x4[0x34];
    u16 mobj_flags;
    u16 filler_0x3A;
    u8 filler_0x3C[0x60 - 0x3C];
    GfxColorAlpha mobj_color1;
    u8 filler_0x64[0x80 - 0x64];
    u16 index;
    f32 unk_0x84;
    f32 anim_frame;
    u8 filler_0x8C[0x94 - 0x8C];
    u32 unk_mobj_0x94;
    f32 unk_mobj_0x98;
    f32 unk_mobj_0x9C;
    f32 unk_mobj_0xA0;
};

struct DObjRenderTypes
{
    u8 t1, t2, t3;
};

struct DObjDesc
{
    s32 index;
    void *display_list;
    Vec3f translate;
    Vec3f rotate;
    Vec3f scale;
};

struct DObjDescArray
{
    DObjDesc *dobj_desc;
    DObjDesc **d2;
    DObjDesc **d3;
    u8 unk_dobjcontain_0xC;
};

struct DObjDescContainer
{
    DObjDescArray dobj_desc_array[2];
};

struct DObjMultiList
{
    Gfx *dl1, *dl2;
};

struct _DObj
{
    u8 filler_0x0[0x4];
    GObj *parent_gobj;
    union
    {
        struct
        {
            DObj *sib_next; // Next sibling? 0x8
            DObj *sib_prev; // Previous sibling? 0xC
            DObj *child;    // Child? 0x10
            union
            {
                DObj *parent;   // Parent? 0x14
                s32 nullcheck;  // For checking against 1; so dumb, might not even be necessary
            };

        };
        struct
        {
            DObj *unk_0x8;
            DObj *unk_0xC;
            DObj *next;
            DObj *prev;
        };
    };
    OMMtxVec3 translate;
    OMMtxVec4 rotate;
    OMMtxVec3 scale;
    s32 unk_0x4C;
    union
    {
        void *display_list;
        DObjMultiList *multi_list;
    };
    u8 flags;
    u8 unk_dobj_0x55;
    u8 unk_dobj_0x56;
    OMMtx *om_mtx[5];
    AObj *aobj;

    union
    {
        ATrack *atrack; // Unconfirmed
        ACommand *acommand;
    };

    f32 dobj_f0; // Multi-purpose? Usually FLOAT32_MAX, used as rotation step in Crate/Barrel smash GFX?
    f32 dobj_f1; // Multi-purpose? Fighters use this as animation playback rate, but it is used as rotation step in Crate/Barrel smash GFX?
    f32 dobj_f2; // Multi-purpose? Usually animation frame, but used as rotation step in Crate/Barrel smash GFX?

    MObj *mobj;

    union
    {
        DObj *attach_dobj;
        void *ft_parts;
        void *unk_0x84;    // Multi-purpose? Items store a fighter joint here, but func_ovl2_800D78E8 expects a different struct
        s32 yakumono_id;     // Used in mpcollision.c to determine whether to check for collision?
    };
};

struct _SObj // Sprite object?
{
    SObj *next;
    GObj *parent_gobj;
    SObj *unk_sobj_0x8; // Child / next?
    SObj *unk_sobj_0xC; // Parent / prev?
    Sprite sprite;
    void *sobj_user_data;
    Vec3f pos; // Position / offset? Causes a ghosting effect if out of bounds; not sure if Vec2f or Vec3f but the latter seems to align
    GfxColor shadow_color;
};

struct OMMtxCamera
{
    OMMtx *mtx;
    Vec3f tilt; // Either camera terms do not translate very well here or I'm just too incompetent... this rotates about the focus point
    Vec3f pan; // This moves the camera on the XYZ planes
    Vec3f unk;
};

// 0x18 and 0x1C are roll (rotate camera on Z axis?)
struct _OMCamera
{
    u8 filler_0x0[0x8];
    Vp viewport;
    union
    {
        Mtx6f f6;
        Mtx7f f7;

    } mtx_types;
    OMMtxCamera view;
    s32 mtx_len;
    OMMtx *om_mtx[2];
    AObj *aobj;
    union
    {
        ATrack *atrack; // Unconfirmed
        ACommand *acommand;
    };
    f32 omcam_f0;
    f32 omcam_f1;
    f32 omcam_f2;
    u32 flags;
};

#endif