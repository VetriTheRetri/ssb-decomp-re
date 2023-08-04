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
    gOMObjLinkIndexEffect

} gOMObjLinkIndex;

typedef enum gOMObjKind
{
    gOMObj_Kind_Fighter = 1000,
    gOMObj_Kind_Effect  = 1011,
    gOMObj_Kind_Weapon,
    gOMObj_Kind_Item

} gOMObjKind;

typedef f32 mtx[3][4];

typedef struct GObj GObj;

struct GObj
{
    // Info here acquired from halofactory of the Smash Remix team
    gOMObjKind gobj_id; // arbitrary ID signifying related objects? e.g. 0x000003F8
    GObj *group_gobj_next;
    GObj *group_gobj_prev;
    u8 group;
    u8 room;
    u8 asynchronous_timer; // For subaction events?
    u8 unk_0xF;
    s32 group_order; // Might be room?
    void *call_unk;
    s32 unk_0x18;
    s32 unk_0x1C;
    GObj *room_gobj_next; // Unconfirmed, might be int
    f32 unk_gobj_0x24; // Unconfirmed, might be int
    s32 room_order; // Might be group? Assuming room based on order here
    void (*renderer)(GObj *gobj);
    u64 unk_0x30;
    s32 unk_0x38; // 0xFFFFFFFF, textures or series of flags?
    u8 filler_0x3C[0x74 - 0x3C];
    void *obj;
    f32 anim_frame; // Current frame of animation?
    bool32 is_skip_render;
    u32 unk_0x80;
    void *user_data;
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

typedef struct OMMtx OMMtx;

struct OMMtx {
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
    u8 filler[0x80];
    s16 index;
    f32 unk_0x84;
    f32 anim_frame; // Current frame of texture animation
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

typedef struct DObj DObj;

struct DObj
{
    u8 filler_0x0[0x8];
    DObj *unk_0x8;
    DObj *unk_0xC;
    DObj *next;
    DObj *prev;
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
    OMMtx *unk58[5];
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

typedef struct OMCamera OMCamera;

struct OMCamera
{
    u8 filler_0x0[0x3C];
    Vec3f rotate;
    Vec3f pan;
};

#define DObjGetStruct(gobj) \
((DObj*)(gobj)->obj) \

#define OMCameraGetStruct(gobj) \
((OMCamera*)(gobj)->obj) \

#endif