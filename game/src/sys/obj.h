#ifndef _OBJ_H_
#define _OBJ_H_

#include <PR/ultratypes.h>
#include <ssb_types.h>
#include <macros.h>

typedef enum gOMObjLinkIndex
{
    gOMObjLinkIndexFighter = 0x3,
    gOMObjLinkIndexItem,
    gOMObjLinkIndexWeapon,
    gOMObjLinkIndexEffect,
    gOMObjLinkIndexBackground = 13

} gOMObjLinkIndex;

typedef enum omGObjKind
{
    omGObj_Kind_Fighter     = 1000,
    omGObj_Kind_Background  = 1008, // Might not be ground but something related
    omGObj_Kind_GrRender,
    omGObj_Kind_Ground,
    omGObj_Kind_Effect,
    omGObj_Kind_Weapon,
    omGObj_Kind_Item

} omGObjKind;

typedef f32 mtx[3][4];

typedef struct _AObj AObj;

struct _AObj {
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
    /* 0x20 */ void *interpolate;
}; // size == 0x24

typedef struct GObj GObj;

typedef struct _GObjProcess GObjProcess;

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
        void(*proc)(GObj*);
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
    f32 unk_gobj_0x24;              // Unconfirmed, might be int
    s32 room_order;                 // Might be group? Assuming room based on order here
    void (*renderer)(GObj *gobj);
    u64 unk_0x30;
    s32 unk_0x38;                   // 0xFFFFFFFF, textures or series of flags?
    u8 filler_0x3C[0x74 - 0x3C];
    void *obj;                      // Can be: NULL, DObj, SObj or OMCamera
    f32 anim_frame;                 // Current frame of animation?
    bool32 obj_renderflags;          // Skips rendering this GObj's *obj?
    u32 unk_0x80;
    void *user_data;                // Special data struct unique to each GObj kind
};

typedef struct HAL_Bitmap // Probably belongs in a different header
{
    Vec3f unk_bitmap_0x0;
    void *unk_bitmap_0xC;
    Vec3f unk_bitmap_0x10;
    s32 unk_bitmap_0x1C;
    Vec3f unk_bitmap_0x20;
    void *unk_bitmap_0x2C;
    Vec3f unk_bitmap_0x30;
    f32 unk_bitmap_0x3C;

} HAL_Bitmap;

extern GObj *gOMObjCommonLinks[];

typedef struct _OMMtx OMMtx;

struct _OMMtx {
    /* 0x00 */ OMMtx *next;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05;
    /* 0x08 */ Mtx unk08;
    ///* 0x08 */ f32 unk08[4][4];
    ///* 0x08 */ f32 (*unk08)[4][4];
    ///* 0x0C */ u8 pad0C[0x48 - 0xc];
}; // size == 0x48

typedef struct MObj // Image footer struct
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

} MObj;

typedef struct UnkDObjData
{
    s32 unk_dobjdata_0x0;
    s32 unk_dobjdata_0x4;
    u8 filler_0x4[0xC - 0x8];
    u8 unk_0xC;
    u8 unk_0xD;
    u8 unk_dobjdata_0xE;
    u8 unk_dobjdata_0xF;
    u8 filler_0x10[0x70 - 0x10]; // Probably bitmap/sprite/texture?
    Vec3f unk_dobjdata_0x70;
    s32 unk_dobjdata_0x7C;
    Vec3f unk_dobjdata_0x80;
    u8 filler_0x8C[0xDC - 0x8C];
    GObj *unk_gobj;

} UnkDObjData;

typedef struct DObjDesc
{
    s32 index;
    void *display_list;
    Vec3f translate;
    Vec3f rotate;
    Vec3f scale;

} DObjDesc;

typedef struct DObjDescArray
{
    DObjDesc *dobj_desc;
    DObjDesc **d2;
    DObjDesc **d3;
    u8 unk_dobjcontain_0xC;

} DObjDescArray;

typedef struct DObjDescContainer
{
    DObjDescArray dobj_desc_array[2];

} DObjDescContainer;

typedef struct _DObj DObj;

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
            DObj *parent;   // Parent? 0x14
        };
        struct
        {
            DObj *unk_0x8;
            DObj *unk_0xC;
            DObj *next;
            DObj *prev;
        };
    };
    mtx *mtx_translate; // 0x18
    Vec3f translate; // 0x1C - 0x24
    mtx *mtx_rotate; // 0x28
    s32 unk_0x2C;
    Vec3f rotate; // 0x30 - 0x3C
    s32 unk_0x3C;
    Vec3f scale; // 0x40 - 0x48
    s32 unk_0x4C;
    void *display_list;
    u8 unk_0x54;
    u8 unk_dobj_0x55;
    u8 unk_dobj_0x56;
    OMMtx *om_mtx[5];
    void *aobj;
    void *unk_dobj_0x70;
    f32 dobj_f0; // Multi-purpose? Usually FLOAT32_MAX, used as rotation step in Crate/Barrel smash GFX?
    f32 dobj_f1; // Multi-purpose? Fighters use this as animation playback rate, but it is used as rotation step in Crate/Barrel smash GFX?
    f32 dobj_f2; // Multi-purpose? Usually animation frame, but used as rotation step in Crate/Barrel smash GFX?
    MObj *mobj;
    union
    {
        DObj *attach_dobj;
        void *unk_0x84;    // Multi-purpose? Articles store a fighter joint here, but func_ovl2_800D78E8 expects a different struct
        s32 yakumono_id;     // Used in mpcollision.c to determine whether to check for collision?
    };
};

typedef struct _SObj SObj;

struct _SObj // Sprite object?
{
    SObj *next;
    GObj *parent_gobj;
    SObj *unk_sobj_0x8;
    SObj *unk_sobj_0xC;
    Sprite sprite;
    s32 unk_sobj_0x54;
    Vec3f pos; // Position / offset? Causes a ghosting effect if out of bounds; not sure if Vec2f or Vec3f but the latter seems to align
};

typedef struct _OMCamera OMCamera;

struct _OMCamera
{
    u8 filler_0x0[0x3C];  // 0x18 and 0x1C are roll (rotate camera on Z axis?)
    Vec3f tilt;           // Either camera terms do not translate very well here or I'm just too incompetent... this rotates about the focus point
    Vec3f pan;            // This moves the camera on the XYZ planes
};

#define DObjGetStruct(gobj) \
((DObj*)(gobj)->obj) \

#define SObjGetStruct(gobj) \
((SObj*)(gobj)->obj) \

#define OMCameraGetStruct(gobj) \
((OMCamera*)(gobj)->obj) \

#endif