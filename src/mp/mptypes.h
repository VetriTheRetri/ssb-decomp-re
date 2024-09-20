#ifndef _MPTYPES_H_
#define _MPTYPES_H_

#include <ssb_types.h>
#include <macros.h>
#include <sys/obj.h>
#include <gm/generic.h>
#include <mp/mpdef.h>

// Room = collection of groups
// Group = collection of lines
// Line = collection of vertices

struct mpVertexInfo
{
	u8 yakumono_id;
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
	u16 yakumono_id; // Group that this line
	mpLineData line_data[4];
};

struct mpGeometryInfo // 0x80131368
{
	u16 yakumono_count;
	void* vertex_data;
	void* vertex_id;
	void* vertex_links;
	mpLineInfo* line_info;
	u16 mapobj_count;
	void* mapobjs;
};

struct mpVertexInfoContainer
{
	mpVertexInfo vertex_info[1];
};

struct mpVertexLinksContainer
{
	mpVertexLinks vertex_links[1];
};

struct mpYakumonoDObj
{
	DObj *yakumono_dobj[1];
};

struct mpMapObjData
{
	u16 mapobj_kind;
	Vec2h pos;
};

struct mpMapObjContainer
{
	mpMapObjData mapobjs[1];
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
	Vec3f* p_translate;			 	// Points to object's TopN translation vector
	s32* p_lr;					 	// Points to object's facing direction sign
	Vec3f pos_curr;				 	// Main object collision position
	Vec3f pos_correct;			 	// Unconfirmed
	Vec3f pos_speed;			 	// Applied from moving collisions
	Vec3f vel_push;				 	// Applied from extern stage objects such as Whispy's Wind
	mpObjectColl objcoll;	 	// Environmental collision box
	mpObjectColl *p_objcoll; 	// Points back to environmental collision box???
	Vec2f cliffcatch_coll;		 	// Ledge grab collision box
	u16 coll_mask_prev;			 	// Previous collision flags?
	u16 coll_mask_curr;			 	// Current collision flags
	u16 coll_mask_unk;			 	// ???
	u16 coll_mask_stat;			 	// Used exclusively by object to transition between
								 	// action states? Also, persists unlike the above three.
	u16 coll_update_frame;		 	// Updates each frame?
	s32 ewall_line_id;			 	// Line ID of wall that is right under the ledge the
								 	// object is standing on?
	sb32 is_coll_end;			 	// Collision task completion bool? Main collision loop's
								 	// second condition is that this is FALSE
	Vec3f line_coll_dist;	 		// Distance to nearest collision?

	s32 ground_line_id; 			// Ground collision line ID
	f32 ground_dist;				// Distance to ground collision directly under object
	u32 ground_flags;				// Ground collision attributes
	Vec3f ground_angle; 			// Ground collision angle

	s32 ceil_line_id; 				// Ceiling collision line ID
	u32 ceil_flags;	  				// Ceiling collision attributes
	Vec3f ceil_angle; 				// Ceiling collision angle

	s32 lwall_line_id; 				// Left Wall collision line ID
	u32 lwall_flags;   				// Left Wall collision attributes
	Vec3f lwall_angle; 				// Left Wall collision angle

	s32 rwall_line_id; 				// Right Wall collision line ID
	u32 rwall_flags;   				// Right Wall collision attributes
	Vec3f rwall_angle; 				// Right Wall collision angle

	s32 cliff_id;					// Ledge ID
	s32 ignore_line_id; 			// Ignore this line when checking for collision
};

struct mpItemWeights
{
    u8 item_quantities[20];
};

struct mpGroundDesc
{
	void *dobj_desc;
	AObjEvent32 **anim_joints;
	MObjSub ***p_mobjsubs;
	AObjEvent32 ***p_matanim_joints;
};

struct mpGroundData
{
	mpGroundDesc gr_desc[4];
	mpGeometryInfo *map_geometry;
	u8 layer_mask; // render mask which determines render type for each geo layer (gr_desc) - 0 = primary, 1 = secondary (more alpha control w/2 display lists)
	Sprite *wallpaper; 								// Background image?
	syColorRGB fog_color;
	u8 fog_alpha;								 	// Unused padding?
	syColorRGB emblem_colors[GMCOMMON_PLAYERS_MAX]; 	// What's this doing here?
	s32 unk_0x5C;
	Vec3f light_angle;
	s16 cam_bound_top;				// Normal bounds
	s16 cam_bound_bottom;
	s16 cam_bound_right;
	s16 cam_bound_left;
	s16 map_bound_top;
	s16 map_bound_bottom;
	s16 map_bound_right;
	s16 map_bound_left;
	u32 bgm_id;
	void *map_nodes;
	mpItemWeights *item_weights; 	// Randomizer weights of items
	s16 alt_warning;				// Warning whistle plays if a player goes below this altitude
	s16 cam_bound_team_top;			// 1P Game VS. <character> Team bounds
	s16 cam_bound_team_bottom;
	s16 cam_bound_team_right;
	s16 cam_bound_team_left;
	s16 map_bound_team_top;
	s16 map_bound_team_bottom;
	s16 map_bound_team_right;
	s16 map_bound_team_left;
	Vec3h unk_groundinfo_0x9A;
	Vec3h unk_groundinfo_0xA0;
};

#endif
