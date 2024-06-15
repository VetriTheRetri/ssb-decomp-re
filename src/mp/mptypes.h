#ifndef _MPTYPES_H_
#define _MPTYPES_H_

#include <PR/ultratypes.h>
#include <ssb_types.h>
#include <macros.h>

#include "mpdef.h"

#define MPCOLL_KIND_LWALL (1 << 0)		// 0x1
#define MPCOLL_KIND_RWALL (1 << 5)		// 0x20
#define MPCOLL_KIND_CEIL (1 << 10)		// 0x400
#define MPCOLL_KIND_GROUND (1 << 11)	// 800
#define MPCOLL_KIND_LCLIFF (1 << 12)	// 0x1000
#define MPCOLL_KIND_RCLIFF (1 << 13)	// 0x2000
#define MPCOLL_KIND_CEILHEAVY (1 << 14) // 0x4000 - head bonk?

#define MPCOLL_KIND_MAIN_MASK                                                                                          \
	(MPCOLL_KIND_GROUND | MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL) // Mask every main collision flag
#define MPCOLL_KIND_CLIFF_MASK (MPCOLL_KIND_LCLIFF | MPCOLL_KIND_RCLIFF)			// Mask all ledge flags

#define MPCOLL_VERTEX_ATTR_BITS 8

#define MPCOLL_VERTEX_CLL_PASS (1 << 14)  // Line ID can be passed through
#define MPCOLL_VERTEX_CLL_CLIFF (1 << 15) // 8000

#define MPCOLL_VERTEX_CLL_BITS (0xFF << (MPCOLL_VERTEX_ATTR_BITS * 1))
#define MPCOLL_VERTEX_MAT_BITS (0xFF << (MPCOLL_VERTEX_ATTR_BITS * 0))

#define MPCOLL_VERTEX_CLL_MASK                                                                                         \
	(~MPCOLL_VERTEX_MAT_BITS) // This is what the game covers when checking
							  // flags & 0xFFFF00FF
#define MPCOLL_VERTEX_MAT_MASK                                                                                         \
	(~MPCOLL_VERTEX_CLL_BITS) // This is what the game looks for when checking
							  // flags & 0xFFFF00FF

#define MPCOLL_VERTEX_ALL_BITS (MPCOLL_VERTEX_CLL_BITS | MPCOLL_VERTEX_MAT_BITS)

#define MPCOLL_PROC_TYPE_DEFAULT (0)
#define MPCOLL_PROC_TYPE_CLIFF (1 << 0)
#define MPCOLL_PROC_TYPE_CLIFFEDGE (1 << 0)
#define MPCOLL_PROC_TYPE_UNK (1 << 1)
#define MPCOLL_PROC_TYPE_STOPEDGE (1 << 1)
#define MPCOLL_PROC_TYPE_PASS (1 << 2)
#define MPCOLL_PROC_TYPE_CEILHEAVY (1 << 3)

// Room = collection of groups
// Group = collection of lines
// Line = collection of vertices

struct mpVertexInfo
{
	u8 room_id;
	u8 line_type;
	s16 coll_pos_next;
	s16 coll_pos_prev;
	s16 edge_psign_id; // PSign = positive sign -> collision types that use +1
					   // for orientation (Upper/Ground and Right)
	s16 edge_nsign_id; // NSign = negative sign -> collision types that use -1
					   // for orientation (Under/Down/Ceil and Left)
};

struct mpVertexLinks
{
	u16 vertex1, vertex2;
};

struct mpVertexArray
{
	u16 vertex_id[1];
};

struct mpVertexData
{
	Vec2h pos;
	u16 vertex_flags; // upper 8 bits = surface type (e.g. drop-through,
					  // cliff), lower 8 bits = material (e.g. normal, damaging
					  // floor, etc.)
};

struct mpVertexPosContainer
{
	mpVertexData vpos[1];
};

struct mpLineData
{
	u16 group_id;
	u16 line_count; // Number of lines with collision type? e.g. there are 4
					// ground lines on Saffron City in the main group
};

struct mpLineInfo
{
	u16 room_id; // Group that this line
	mpLineData line_data[4];
};

struct mpGeometryInfo // 0x80131368
{
	u16 room_count;
	void* vertex_data;
	void* vertex_id;
	void* vertex_links;
	mpLineInfo* line_info;
	u16 mpoint_count;
	void* mpoints;
};

struct mpVertexInfoContainer
{
	mpVertexInfo vertex_info[1];
};

struct mpVertexLinksContainer
{
	mpVertexLinks vertex_links[1];
};

struct mpRoomDObj
{
	DObj* room_dobj[1];
};

struct mpMPointData
{
	u16 mpoint_kind;
	Vec2h pos;
};

struct mpMPointContainer
{
	mpMPointData mpoints[1];
};

struct mpLineGroup // This is all getting hard to wrap one's head around, but
				   // this is basically a group of line types (ground, ceil,
				   // rwall, lwall)
{
	u16 line_count, *line_id;
};

struct mpDirection
{
	f32 top, bottom, right, left;
};

struct mpEdgeBounds
{
	mpDirection d0, d1, d2, d3;
};

struct mpObjectColl
{
	f32 top;
	f32 center;
	f32 bottom;
	f32 width;
};

struct mpCollData
{
	Vec3f* p_translate;			 // Points to object's TopN translation vector
	s32* p_lr;					 // Points to object's facing direction sign
	Vec3f pos_curr;				 // Main object collision position
	Vec3f pos_correct;			 // Unconfirmed
	Vec3f pos_speed;			 // Applied from moving collisions
	Vec3f vel_push;				 // Applied from extern stage objects such as Whispy's Wind
	mpObjectColl object_coll;	 // Environmental collision box
	mpObjectColl* p_object_coll; // Points back to environmental collision box???
	Vec2f cliffcatch_coll;		 // Ledge grab collision box
	u16 coll_mask_prev;			 // Previous collision flags?
	u16 coll_mask_curr;			 // Current collision flags
	u16 coll_mask_unk;			 // ???
	u16 coll_mask_stat;			 // Used exclusively by object to transition between
								 // action states? Also, persists unlike the above three.
	u16 coll_update_frame;		 // Updates each frame?
	s32 ewall_line_id;			 // Line ID of wall that is right under the ledge the
								 // object is standing on?
	sb32 is_coll_end;			 // Collision task completion bool? Main collision loop's
								 // second condition is that this is FALSE
	Vec3f line_collision_dist;	 // Distance to nearest collision?

	s32 ground_line_id; // Ground collision line ID
	f32 ground_dist;	// Distance to ground collision directly under object
	u32 ground_flags;	// Ground collision attributes
	Vec3f ground_angle; // Ground collision angle

	s32 ceil_line_id; // Ceiling collision line ID
	u32 ceil_flags;	  // Ceiling collision attributes
	Vec3f ceil_angle; // Ceiling collision angle

	s32 lwall_line_id; // Left Wall collision line ID
	u32 lwall_flags;   // Left Wall collision attributes
	Vec3f lwall_angle; // Left Wall collision angle

	s32 rwall_line_id; // Right Wall collision line ID
	u32 rwall_flags;   // Right Wall collision attributes
	Vec3f rwall_angle; // Right Wall collision angle

	s32 cliff_id;		// Ledge ID
	s32 ignore_line_id; // Ignore this line when checking for collision
};

extern mpEdgeBounds gMapEdgeBounds;
extern mpRoomDObj* gMapRooms;
extern mpLineGroup gMapLineTypeGroups[/* */];
extern mpGeometryInfo* gMapGeometry;
extern mpVertexInfoContainer* gMapVertexInfo;
extern mpVertexArray* gMapVertexID;
extern mpVertexLinks* gMapVertexLinks;		 //
extern mpVertexPosContainer* gMapVertexData; // Vertex positions
extern Vec3f* gMapDynamicCollisions;
extern mpMPointContainer* gMapPoints;
extern s32 gMapLineCount;
extern gsColorRGBA gMapLightColor;
extern s32 gMapRoomCount;
extern f32 gMapLightAngleX;
extern f32 gMapLightAngleY;
extern u16 gMPCollUpdateFrame;
extern u32 gMusicIndexCurrent;
extern u32 gMusicIndexDefault;

#endif
