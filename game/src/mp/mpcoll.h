#ifndef _MPCOLL_H_
#define _MPCOLL_H_

#include <PR/ultratypes.h>
#include <ssb_types.h>
#include <macros.h>

#define MPCOLL_KIND_LWALL       (1 << 0)    // 0x1
#define MPCOLL_KIND_RWALL       (1 << 5)    // 0x20
#define MPCOLL_KIND_CEIL        (1 << 10)   // 0x400 
#define MPCOLL_KIND_GROUND      (1 << 11)   // 0x800
#define MPCOLL_KIND_LCLIFF      (1 << 12)   // 0x1000
#define MPCOLL_KIND_RCLIFF      (1 << 13)   // 0x2000
#define MPCOLL_KIND_CEILHEAVY   (1 << 14)   // 0x4000 - head bonk?
#define MPCOLL_KIND_UNK1        (1 << 15)   // 0x8000

#define MPCOLL_KIND_MAIN_MASK   (MPCOLL_KIND_GROUND | MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL) // Mask every main collision flag
#define MPCOLL_KIND_CLIFF_MASK  (MPCOLL_KIND_LCLIFF | MPCOLL_KIND_RCLIFF)                                       // Mask all ledge flags

#define MPCOLL_VERTEX_ATTR_BITS 8

#define MPCOLL_VERTEX_CLL_PASS (1 << 14) // Line ID can be passed through

#define MPCOLL_VERTEX_CLL_MASK (0xFF << (MPCOLL_VERTEX_ATTR_BITS * 1)) // This is what the game covers when checking flags & 0xFFFF00FF
#define MPCOLL_VERTEX_MAT_MASK (0xFF << (MPCOLL_VERTEX_ATTR_BITS * 0)) // This is what the game looks for when checking flags & 0xFFFF00FF

#define MPCOLL_VERTEX_ALL_BITS (MPCOLL_VERTEX_CLL_MASK | MPCOLL_VERTEX_MAT_MASK)

typedef enum mpGroundAir
{
    GA_Ground,
    GA_Air

} mpGroundAir;

typedef enum mpMaterial
{
    mpCollision_Material_0,
    mpCollision_Material_1,
    mpCollision_Material_2,
    mpCollision_Material_3,
    mpCollision_Material_4,
    mpCollision_Material_5,
    mpCollision_Material_6,
    mpCollision_Material_FireWeakHz1,
    mpCollision_Material_FireStrongVt1,
    mpCollision_Material_FireWeakVt1,
    mpCollision_Material_SpikeStrongHz1,
    mpCollision_Material_FireWeakVt2,
    mpCollision_Material_DokanLeft,
    mpCollision_Material_DokanRight,
    mpCollision_Material_Detect, // Board the Platforms / Race to the Finish gate / Saffron City gate
    mpCollision_Material_FireWeakVt3,
    mpCollision_Material_Custom

} mpMaterial;

// Room = collection of groups
// Group = collection of lines
// Line = collection of vertices

typedef struct mpVertexInfo
{
    u8 room_id;
    u8 line_type;
    s16 coll_pos_next;
    s16 coll_pos_prev;
    s16 edge_psign_id;  // PSign = positive sign -> collision types that use +1 for orientation (Upper/Ground and Right)
    s16 edge_nsign_id;  // NSign = negative sign -> collision types that use -1 for orientation (Under/Down/Ceil and Left)

} mpVertexInfo;

typedef struct mpVertexLinks
{
    u16 vertex1, vertex2;

} mpVertexLinks;

typedef struct mpVertexArray
{
    u16 vertex_id[1];

} mpVertexArray;

typedef struct mpVertexData
{
    Vec2h pos;
    u16 vertex_flags; // upper 8 bits = surface type (e.g. drop-through, cliff), lower 8 bits = material (e.g. normal, damaging floor, etc.)

} mpVertexData;

typedef struct mpVertexPosContainer
{
    mpVertexData vpos[1];

} mpVertexPosContainer;

typedef struct mpLineData
{
    u16 group_id;
    u16 line_count;    // Number of lines with collision type? e.g. there are 4 ground lines on Saffron City in the main group

} mpLineData;

typedef struct mpLineInfo
{
    u16 room_id; // Group that this line
    mpLineData line_data[4];

} mpLineInfo;

typedef struct mpGeometryInfo // 0x80131368
{
    u16 room_count;
    void *vertex_data;
    void *vertex_id;
    void *vertex_links;
    mpLineInfo *line_info;
    u16 gpoint_count;
    void *gpoints;

} mpGeometryInfo;

typedef struct mpVertexInfoContainer
{
    mpVertexInfo vertex_info[1];

} mpVertexInfoContainer;

typedef struct mpVertexLinksContainer
{
    mpVertexLinks vertex_links[1];

} mpVertexLinksContainer;

typedef struct mpRoomDObj
{
    DObj *room_dobj[1];

} mpRoomDObj;

typedef struct mpGPointData
{
    u16 gpoint_kind;
    Vec2h pos;

} mpGPointData;

typedef struct mpGPointContainer
{
    mpGPointData gpoints[1];

} mpGPointContainer;

typedef enum mpLineType
{
    mpCollision_LineType_Ground,
    mpCollision_LineType_Ceil,
    mpCollision_LineType_RWall,
    mpCollision_LineType_LWall,
    mpCollision_LineType_EnumMax

} mpLineType;

typedef enum mpGPointKind
{
    mpCollision_GPointKind_ItemSpawn = 0x4,
    mpCollision_GPointKind_PowerBlock = 0x9,
    mpCollision_GPointKind_Twister = 0xD,
    mpCollision_GPointKind_Monster = 0xE,
    mpCollision_GPointKind_Bumper = 0x13,
    mpCollision_GPointKind_RBomb = 0x29
};

typedef enum mpYakumonoStatus // State of collision line?
{
    mpCollision_Yakumono_None,
    mpCollision_Yakumono_On,
    mpCollision_Yakumono_Unk,
    mpCollision_Yakumono_Off

} mpYakumonoStatus;

typedef struct mpLineGroup // This is all getting hard to wrap one's head around, but this is basically a group of line types (ground, ceil, rwall, lwall)
{
    u16 line_count, *line_id;

} mpLineGroup;

typedef struct mpDirection
{
    f32 top, bottom, right, left;

} mpDirection;

typedef struct mpEdgeBounds
{
    mpDirection d0, d1, d2, d3;

} mpEdgeBounds;

extern mpEdgeBounds gMapEdgeBounds;

typedef struct _mpObjectColl
{
    f32 top;
    f32 center;
    f32 bottom;
    f32 width;

} mpObjectColl;

typedef struct _mpCollData
{
    Vec3f *p_translate; // Points to TopN translation vector
    s32 *p_lr; // Points to facing direction?
    Vec3f pos_curr;
    Vec3f pos_correct; // Unconfirmed
    Vec3f pos_speed; // Applied from moving collisions?
    Vec3f vel_push; // Applied from extern stage objects such as Whispy's Wind?
    mpObjectColl object_coll;
    mpObjectColl *p_object_coll; // Points back to collision box???
    Vec2f cliffcatch_coll;
    u16 coll_mask_prev;
    u16 coll_mask;
    u16 unk_0x58;
    u16 coll_type; // "Flag that relates to type of clipping?"
    u16 coll_update_frame; // "Flag is enabled if moving into a wall"
    s32 ewall_line_id; // Line ID of wall that is right under the ledge the object is standing on?
    bool32 unk_0x64;
    Vec3f ground_to_air_pos_last;

    s32 ground_line_id;
    f32 ground_dist; // Distance to nearest ground line? 
    u32 ground_flags; // Line collision behavior (e.g. drop-through)
    Vec3f ground_angle;

    s32 ceil_line_id; // Clipping ID of last ceiling interacted with
    u32 ceil_flags;
    Vec3f ceil_angle;

    s32 lwall_line_id; // Clipping ID of last left wall interacted with
    u32 lwall_flags;
    Vec3f lwall_angle;

    s32 rwall_line_id; 
    u32 rwall_flags;
    Vec3f rwall_angle;

    s32 cliff_id; // Ledge ID
    s32 ignore_line_id; // Ignore this line when checking for collision

} mpCollData;

extern mpEdgeBounds gMapEdgeBounds;
extern mpRoomDObj *gMapRooms;
extern mpLineGroup gMapLineTypeGroups[mpCollision_LineType_EnumMax];
extern mpGeometryInfo *gMapGeometry;
extern mpVertexInfoContainer *gMapVertexInfo;
extern mpVertexArray *gMapVertexID;
extern mpVertexLinks *gMapVertexLinks;   //
extern mpVertexPosContainer *gMapVertexData; // Vertex positions
extern Vec3f *gMapDynamicCollisions;
extern mpGPointContainer *gMapGeneralPoints;
extern s32 gMapLineCount;
extern GfxColorAlpha gMapLightColor;

#endif