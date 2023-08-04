#ifndef _GROUND_H_
#define _GROUND_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <sys/obj_renderer.h>
#include <mp/mpcoll.h>

typedef enum grKind
{
    Gr_Kind_CommonStart,
    Gr_Kind_Castle = Gr_Kind_CommonStart, // Peach's Castle
    Gr_Kind_Sector,
    Gr_Kind_Jungle,
    Gr_Kind_Zebes,
    Gr_Kind_Hyrule,
    Gr_Kind_Yoster, // Yoshi's Island
    Gr_Kind_Pupupu, // Dream Land
    Gr_Kind_Yamabuki, // Saffron City
    Gr_Kind_Inishie, // Mushroom Kingdom
    Gr_Kind_PPPTest1,
    Gr_Kind_PPPTest2,
    Gr_Kind_Explain, // How to Play
    Gr_Kind_Yoster1P, // Small Yoshi's Island
    Gr_Kind_Crystal, // Meta Crystal
    Gr_Kind_Duel, // Duel Zone
    Gr_Kind_Bonus3, // Race to the Finish
    Gr_Kind_Last, // Final Destination
    Gr_Kind_CommonEnd = Gr_Kind_Last,

    Gr_Kind_Bonus1Start, // Start of Target Test stages
    Gr_Kind_Bonus1Mario = Gr_Kind_Bonus1Start,
    Gr_Kind_Bonus1Fox,
    Gr_Kind_Bonus1Donkey,
    Gr_Kind_Bonus1Samus,
    Gr_Kind_Bonus1Luigi,
    Gr_Kind_Bonus1Link,
    Gr_Kind_Bonus1Yoshi,
    Gr_Kind_Bonus1Captain,
    Gr_Kind_Bonus1Kirby,
    Gr_Kind_Bonus1Pikachu,
    Gr_Kind_Bonus1Purin,
    Gr_Kind_Bonus1Ness,
    Gr_Kind_Bonus1End = Gr_Kind_Bonus1Ness,

    Gr_Kind_Bonus2Start, // Start of Board the Platforms stages
    Gr_Kind_Bonus2Mario = Gr_Kind_Bonus2Start,
    Gr_Kind_Bonus2Fox,
    Gr_Kind_Bonus2Donkey,
    Gr_Kind_Bonus2Samus,
    Gr_Kind_Bonus2Luigi,
    Gr_Kind_Bonus2Link,
    Gr_Kind_Bonus2Yoshi,
    Gr_Kind_Bonus2Captain,
    Gr_kind_Bonus2Kirby,
    Gr_Kind_Bonus2Pikachu,
    Gr_Kind_Bonus2Purin,
    Gr_Kind_Bonus2Ness,
    Gr_Kind_Bonus2End = Gr_Kind_Bonus2Ness

} grKind;

typedef enum grMaterial
{
    Gr_Mat_0,
    Gr_Mat_1,
    Gr_Mat_2,
    Gr_Mat_3,
    Gr_Mat_4,
    Gr_Mat_5,
    Gr_Mat_6,
    Gr_Mat_FireWeakHz1,
    Gr_Mat_FireStrongVt1,
    Gr_Mat_FireWeakVt1,
    Gr_Mat_SpikeStrongHz1,
    Gr_Mat_FireWeakVt2,
    Gr_Mat_DokanLeft,
    Gr_Mat_DokanRight,
    Gr_Mat_Detect, // Board the Platforms / Race to the Finish gate
    Gr_Mat_FireWeakVt3,
    Gr_Mat_Custom

} grMaterial;

typedef struct _Ground_Hit
{
    s32 env_kind; // Not actually UpdateState, no idea what this is; something to do with sound effects?
    s32 damage;
    s32 angle;
    s32 knockback_scale;
    s32 knockback_weight;
    s32 knockback_base;
    s32 element;

} Ground_Hit;

typedef struct grMapObject
{
    GObj *ogobj;
    bool32 (*proc_update)(GObj*, GObj*, s32*);

} grMapObject;

typedef struct grMapEnvironment
{
    GObj *egobj;
    bool32 (*proc_update)(GObj*, GObj*, Ground_Hit*, s32*);

} grMapEnvironment;

static grMapObject D_ovl2_80131180[2];
static grMapEnvironment D_ovl2_80131190[1];
static s32 D_ovl2_80131198;
static s32 gMapEnvironmentCount;

typedef  struct gmGroundUnkBytes
{
    u8 byte[1]; // Size currently unknown

} gmGroundUnkBytes;

typedef struct grMapCollisionRoom
{
    s32 room_id;
    u8 filler_0x4[0x2C - 0x4];

} grMapCollisionRoom;

typedef struct grFileInfo
{
    intptr_t size, offset;

} grFileInfo;

typedef struct gmGroundInfo
{
    void *unk_0x0;
    void *unk_0x4;
    void *unk_0x8;
    void *unk_0xC;
    grMapCollisionRoom *collision_rooms;
    void *unk_0x14;
    void *unk_0x18;
    void *unk_0x1C;
    void *unk_0x20;
    void *unk_0x24;
    void *unk_0x28;
    void *unk_0x2C;
    void *unk_0x30;
    void *unk_0x34;
    void *unk_0x38;
    void *unk_0x3C;
    mpGeometryInfo *map_geometry;
    void *unk_0x44;
    void *unk_0x48;
    GfxColorAlpha fog_color;
    s32 unk_0x50;
    s32 unk_0x54;
    s32 unk_0x58;
    s32 unk_0x5C;
    Vec3f light_angle;
    s16 cam_bound_top;
    s16 cam_bound_bottom;
    s16 cam_bound_right;
    s16 cam_bound_left;
    s16 blastzone_top;
    s16 blastzone_bottom;
    s16 blastzone_right;
    s16 blastzone_left;
    u32 music_id;
    u32 unk_0x80;
    gmGroundUnkBytes *unk_0x84;
    s16 unk_groundinfo_0x88;
    s16 unk_groundinfo_0x8A;
    u8 filler_0x88[0x92 - 0x8C];
    s16 unk_bound_top;
    s16 unk_bound_bottom;
    s16 unk_bound_right;
    s16 unk_bound_left;

} gmGroundInfo;

static gmGroundInfo *gpGroundInfo; // TO DO: move this to the correct file

#endif
