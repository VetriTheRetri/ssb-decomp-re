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

#define AOBJ_FRAME_NULL F32_MIN         // Used to mark the lack of frames remaining in an animation

union OMUserData
{
    s32 s;
    u32 u;
    void *p;
};

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

struct _GObjThread
{
    GObjThread *next;
    OSThread os_thread;
    u64 *os_stack;
    u32 stack_size;
};

struct OMThreadStackNode
{
    OMThreadStackNode *next;
    u32 stack_size;
    u64 stack[1];
}; // size == 0x08 + VLA

struct OMThreadStackList 
{
    OMThreadStackList *next;
    OMThreadStackNode *stack;
    u32 size;
};


struct _GObjProcess
{
    GObjProcess *unk_gobjproc_0x0;
    GObjProcess *unk_gobjproc_0x4;
    GObjProcess *unk_gobjproc_0x8; // This is more than likely not an array, doing this only to get the correct offsets
    GObjProcess *unk_gobjproc_0xC;
    s32 priority;
    u8 kind;
    u8 unk_gobjproc_0x15;
    GObj *parent_gobj;
    union // These are based on 0x14
    {
        GObjThread *gobjthread; // GObjThread
        void(*proc_thread)(GObj*);
    };
    void (*proc_common)(GObj*);
};

struct GObj
{
    omGObjKind gobj_id;
    GObj *link_next;
    GObj *link_prev;
    u8 link_id;
    u8 dl_link_id;
    u8 asynchronous_timer;          // For subaction events?
    u8 obj_kind;                    // Determines kind of *obj: 0 = NULL, 1 = DObj, 2 = SObj, 3 = Camera
    s32 group_order;                // Might be room?
    void *call_unk;
    GObjProcess *gobjproc_next;

    union
    {
        s32 unk_0x1C;
        GObj *unk_gobj_0x1C;
        GObjProcess *gobjproc_prev;
    };
    
    GObj *dl_link_next;        // Unconfirmed, might be int
    GObj *dl_link_prev;        // Unconfirmed, might be int
    s32 dl_link_order;                 // Might be group? Assuming room based on order here
    void (*proc_render)(GObj*);
    u64 unk_0x30;
    s32 unk_0x38;                   // 0xFFFFFFFF, textures or series of flags?
    u8 filler_0x3C[0x74 - 0x3C];
    void *obj;                      // Can be: NULL, DObj, SObj or Camera
    f32 anim_frame;                 // Current frame of animation?
    u32 obj_renderflags;            // Skips rendering this GObj's *obj?
    void(*dobjproc)(DObj*, s32, f32); // DObj animation renderer?
    OMUserData user_data;
};

extern GObj *gOMObjCommonLinks[];

struct _OMMtx 
{
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

struct OMPerspective
{
    OMMtx *mtx;
    u16 norm;
    f32 fovy;
    f32 aspect;
    f32 near;
    f32 far;
    f32 scale;
    f32 unk_ompersp_0x1C;
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

struct _MObjSub
{
    ///* 0x00 */ f32 unk00;
    /* 0x00 */ u16 pad00;
    /* 0x02 */ u8 unk02;  // SetTextureImage format?
    /* 0x03 */ u8 unk03;  // SetTextureImage size?
    /* 0x04 */ f32 unk04; // should this be a pointer to an array of images (sprite set)?
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u16 unk0A;
    ///* 0x0C */ f32 unk0C;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ s32 unk10; // could be f32??
    /* 0x14 */ f32 unk14;
    // next three part of vec3f?
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ void **unk2C; // image pointers?
    /* 0x30 */ u16 mobj_flags0;    // command flags?
    /* 0x32 */ u8 unk32;     // texture image format?
    /* 0x33 */ u8 unk33;
    /* 0x34 */ u16 mobj_flags1;
    /* 0x36 */ u16 unk36;
    /* 0x38 */ u16 unk38;
    /* 0x3A */ u16 unk3A;
    /* 0x3C */ f32 unk3C;
    /* 0x40 */ f32 unk40;
    /* 0x44 */ f32 unk44;
    /* 0x48 */ u8 pad48[0x4C - 0x48];
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ GfxColorAlpha primcolor;
    /* 0x54 */ GfxColorAlpha unkcolor1;
    /* 0x58 */ GfxColorAlpha envcolor;
    /* 0x5C */ u8 unk5C;  // blend color r?
    /* 0x5D */ u8 unk5D;  // g?
    /* 0x5E */ u8 unk5E;  // b?
    /* 0x5F */ u8 unk5F;  // a?
    /* 0x60 */ GfxColorAlpha mobj_color1;
    /* 0x64 */ s32 unk64; // light 2 color?
    /* 0x68 */ s32 unk68;
    /* 0x6C */ s32 unk6C;
    /* 0x70 */ s32 unk70;
    /* 0x74 */ s32 unk74;
};

struct _MObj
{
    MObj *mobj_next;
    GObj *parent_gobj;      // Unconfirmed
    MObjSub sub;
    u16 image_id;
    f32 unk_0x84;
    f32 image_frame;
    u8 filler_0x8C[0x90 - 0x8C];
    AObj *aobj;
    u32 unk_mobj_0x94;
    f32 mobj_f0;            // Animation frames remaining, multi-purpose?
    f32 mobj_f1;            // Animation playback rate / interpolation, multi-purpose?
    f32 mobj_f2;            // Current animation frame, multi-purpose?
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
    DObj *alloc_free;       // Has to do with memory allocation
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
                sb32 nullcheck;  // For checking against 1; so dumb, might not even be necessary
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
    OMMtx *ommtx[5];
    AObj *aobj;

    union
    {
        ATrack *atrack; // Unconfirmed
        ACommand *acommand;
    };

    f32 dobj_f0; // Multi-purpose? Usually FLOAT32_MAX, used as rotation step in Crate/Barrel smash GFX?
    f32 dobj_f1; // Multi-purpose? Fighters use this as animation playback rate / interpolation, but it is used as rotation step in Crate/Barrel smash GFX?
    f32 dobj_f2; // Multi-purpose? Usually animation frame, but used as rotation step in Crate/Barrel smash GFX?

    MObj *mobj;

    union
    {
        DObj *attach_dobj;
        void *ft_parts;
        void *unk_0x84;      // Multi-purpose? Items store a fighter joint here, but func_ovl2_800D78E8 expects a different struct
        s32 yakumono_id;     // Used in mpcollision.c to determine whether to check for collision?
        s32 color_id;
    };
};

struct _SObj // Sprite object
{
    SObj *alloc_free;       // Has to do with memory allocation
    GObj *parent_gobj;      // GObj that owns this SObj
    SObj *next;             // Next SObj in linked list
    SObj *prev;             // Prev SObj in linked list
    Sprite sprite;          // Sprite data
    OMUserData user_data;   // Custom parameters attached to SObj
    Vec2f pos;              // Position / offset? Causes a ghosting effect if out of bounds;
    GfxColorAlpha shadow_color;  // Color of outline around / under sprite?
    u8 cms;                 // s-axis mirror, no-mirror, wrap and clamp flags
    u8 cmt;                 // t-axis mirror, no-mirror, wrap and clamp flags
    u8 masks;               // s-axis mask
    u8 maskt;               // t-axis mask
    u16 lrs, lrt;           // lower right s and t - used for wrap/mirror boundary
};

struct CameraVec
{
    OMMtx *mtx;
    Vec3f eye; // Either camera terms do not translate very well here or I'm just too incompetent... this rotates about the focus point
    Vec3f at;  // This moves the camera on the XYZ planes
    Vec3f up;
};

// 0x18 and 0x1C are roll (rotate camera on Z axis?)
struct _Camera
{
    Camera *next;
    GObj *parent_gobj;
    Vp viewport;

    union
    {
        Mtx6f f6;
        Mtx7f f7;
        OMPerspective persp;

    } projection;

    CameraVec vec;
    s32 mtx_len;
    OMMtx *ommtx[2];
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