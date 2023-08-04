#ifndef _MPCOLL_H_
#define _MPCOLL_H_

#include <PR/ultratypes.h>
#include <ssb_types.h>
#include <macros.h>

#define MPCOLL_MASK_LWALL       (1 << 0)    // 0x1
#define MPCOLL_MASK_RWALL       (1 << 5)    // 0x20
#define MPCOLL_MASK_CEIL        (1 << 10)   // 0x400 
#define MPCOLL_MASK_GROUND      (1 << 11)   // 0x800
#define MPCOLL_MASK_LCLIFF      (1 << 12)   // 0x1000
#define MPCOLL_MASK_RCLIFF      (1 << 13)   // 0x2000
#define MPCOLL_MASK_CEILHEAVY   (1 << 14)   // 0x4000 - head bonk?
#define MPCOLL_MASK_UNK1        (1 << 15)   // 0x8000

#define MPCOLL_MASK_MAIN_ALL    (MPCOLL_MASK_GROUND | MPCOLL_MASK_CEIL | MPCOLL_MASK_RWALL | MPCOLL_MASK_LWALL) // Mask every main collision flag
#define MPCOLL_MASK_CLIFF_ALL   (MPCOLL_MASK_LCLIFF | MPCOLL_MASK_RCLIFF) // Mask all ledge flags       

#define MPCOLL_MASK_NONSOLID    (1 << 14) // Line ID can be passed through

typedef enum mpGroundAir
{
    GA_Ground,
    GA_Air

} mpGroundAir;

// Room = collection of groups
// Group = collection of lines
// Line = collection of vertices

typedef struct mpRoomInfo
{
    u8 filler_0x0[0x1C];
    Vec3f translate;
    u8 filler_0x28[0x70 - 0x28];
    void *unk_dobj_0x70;
    u8 filler_0x74[0x84 - 0x74];
    s32 yakumono_id;

} mpRoomInfo;

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
    void *unk_mpmap_0x4;
    void *unk_mpmap_0x8;
    void *unk_mpmap_0xC;
    mpLineInfo *line_info;
    u16 unk_mpgeo_count;

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

typedef struct mpUnkVectorData
{
    u16 mpvector_id;
    Vec2h pos;

} mpUnkVectorData;

typedef struct mpUnkVectorContainer
{
    mpUnkVectorData vector_data[1];

} mpUnkVectorContainer;

typedef enum mpLineType
{
    mpCollision_LineType_Ground,
    mpCollision_LineType_Ceil,
    mpCollision_LineType_RWall,
    mpCollision_LineType_LWall,
    mpCollision_LineType_EnumMax

} mpLineType;

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
    Vec3f pos_prev; // Unconfirmed
    Vec3f vel_push; // Applied from extern stage objects such as Whispy's Wind?
    mpObjectColl object_coll;
    mpObjectColl *p_object_coll; // Points back to collision box???
    Vec2f cliffcatch_coll;
    u16 coll_mask_prev;
    u16 coll_mask;
    u16 unk_0x58;
    u16 coll_type; // "Flag that relates to type of clipping?"
    u16 wall_flag; // "Flag is enabled if moving into a wall"
    s32 unk_0x60;
    bool32 unk_0x64;
    Vec3f ground_to_air_pos_last;

    s32 ground_line_id;
    f32 ground_dist; // Distance to nearest ground line? 
    u32 ground_flags; // Line collision behavior (e.g. drop-through)
    Vec3f ground_angle;

    s32 ceil_line_id; // Clipping ID of last ceiling interacted with
    u32 ceil_flags;
    Vec3f ceil_angle;

    s32 rwall_line_id; // Clipping ID of last left wall interacted with
    u32 rwall_flags;
    Vec3f rwall_angle;

    s32 lwall_line_id;
    u32 lwall_flags;
    Vec3f lwall_angle;

    s32 cliff_id; // Ledge ID
    s32 ignore_line_id; // Ignore this line when checking for collision

} mpCollData;

#endif