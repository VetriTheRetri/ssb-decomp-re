#ifndef _GRTYPES_H_
#define _GRTYPES_H_

#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <mp/mpcoll.h>
#include <gm/battle.h>
#include <gm/gmmisc.h>
#include <ef/effect.h>

typedef enum grKind
{
	Gr_Kind_CommonStart,

	Gr_Kind_VSStart = Gr_Kind_CommonStart,
	Gr_Kind_Castle = Gr_Kind_VSStart, // Peach's Castle
	Gr_Kind_Sector,
	Gr_Kind_Jungle,
	Gr_Kind_Zebes,
	Gr_Kind_Hyrule,
	Gr_Kind_Yoster,	  // Yoshi's Island
	Gr_Kind_Pupupu,	  // Dream Land
	Gr_Kind_Yamabuki, // Saffron City
	Gr_Kind_Inishie,  // Mushroom Kingdom
	Gr_Kind_VSEnd = Gr_Kind_Inishie,

	Gr_Kind_PPPTest1,
	Gr_Kind_PPPTest2,
	Gr_Kind_Explain,  // How to Play
	Gr_Kind_Yoster1P, // Small Yoshi's Island
	Gr_Kind_Crystal,  // Meta Crystal
	Gr_Kind_Duel,	  // Duel Zone
	Gr_Kind_Bonus3,	  // Race to the Finish
	Gr_Kind_Last,	  // Final Destination
	Gr_Kind_CommonEnd = Gr_Kind_Last,

	Gr_Kind_BonusGameStart,
	Gr_Kind_Bonus1Start = Gr_Kind_BonusGameStart, // Start of Target Test stages
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
	Gr_Kind_Bonus2End = Gr_Kind_Bonus2Ness,
	Gr_Kind_BonusGameEnd = Gr_Kind_Bonus2End

} grKind;

typedef struct grCreateDesc
{
	void* dobj_desc;
	void* anim_joint;
	void* aobj;
	void* matanim_joint;

} grCreateDesc;

typedef struct grRenderDesc
{
	void* unk_grrender_0x0;
	void* unk_grrender_0x4;
	u8 unk_grrender_0x8;
	void* gobjproc;

} grRenderDesc;

typedef struct grHitbox
{
	s32 env_kind; // Not actually UpdateState, no idea what this is; something
				  // to do with sound effects?
	s32 damage;
	s32 angle;
	s32 knockback_scale;
	s32 knockback_weight;
	s32 knockback_base;
	s32 element;

} grHitbox;

typedef struct grMapObject
{
	GObj* ogobj;
	sb32 (*proc_update)(GObj*, GObj*, s32*);

} grMapObject;

typedef struct grMapEnvironment
{
	GObj* egobj;
	sb32 (*proc_update)(GObj*, GObj*, grHitbox*, s32*);

} grMapEnvironment;

typedef struct gmGroundUnkBytes
{
	u8 byte[1]; // Size currently unknown

} gmGroundUnkBytes;

typedef struct grFileInfo
{
	intptr_t size, offset;

} grFileInfo;

typedef struct gmGroundInfo
{
	grCreateDesc gr_desc[4];
	mpGeometryInfo* map_geometry;
	u8 unk_0x44;
	void* unk_0x48; // Background image?
	ColorRGB fog_color;
	u8 fog_alpha;								   // Unused padding?
	ColorRGB emblem_colors[GMMATCH_PLAYERS_MAX]; // What's this doing here?
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
	void* map_nodes;
	gmGroundUnkBytes* unk_0x84;
	s16 unk_groundinfo_0x88;
	s16 unk_groundinfo_0x8A;
	s16 unk_groundinfo_0x8C;
	s16 unk_groundinfo_0x8E;
	s16 unk_groundinfo_0x90;
	s16 unk_bound_top;
	s16 unk_bound_bottom;
	s16 unk_bound_right;
	s16 unk_bound_left;
	Vec3h unk_groundinfo_0x9A;
	Vec3h unk_groundinfo_0xA0;

} gmGroundInfo;

// ---- specific ground data types ---- //

#define GRPUPUPU_WHISPY_BLINK_WAIT_BASE 30
#define GRPUPUPU_WHISPY_BLINK_WAIT_RANDOM 270
#define GRPUPUPU_WHISPY_WAIT_DURATION_BASE 960
#define GRPUPUPU_WHISPY_WAIT_DURATION_RANDOM 1140
#define GRPUPUPU_WHISPY_WIND_DURATION_BASE 240
#define GRPUPUPU_WHISPY_WIND_DURATION_RANDOM 80
#define GRPUPUPU_WHISPY_WIND_RUMBLE_WAIT 18
#define GRPUPUPU_WHISPY_POS_X (-525.0F)
#define GRPUPUPU_WHISPY_WIND_VEL_BASE 6.0F
#define GRPUPUPU_WHISPY_WIND_DIST_DECAY 0.0006F
#define GRPUPUPU_WHISPY_WINDBOX_TOP 1000.0F
#define GRPUPUPU_WHISPY_WINDBOX_BOTTOM (-10.0F)
#define GRPUPUPU_WHISPY_WINDBOX_EDGELEFT (-2325.0F)
#define GRPUPUPU_WHISPY_WINDBOX_EDGERIGHT 2275.0F

typedef struct grPupupuEffect
{
	Vec3f pos;
	f32 rotate;

} grPupupuEffect;

typedef enum grPupupuWhispyWindStatus
{
	grPupupu_WhispyWind_Sleep,
	grPupupu_WhispyWind_Wait,
	grPupupu_WhispyWind_Turn,
	grPupupu_WhispyWind_Open,
	grPupupu_WhispyWind_Blow,
	grPupupu_WhispyWind_Stop

} grPupupuWhispyWindStatus;

typedef enum grPupupuWhispyEyesStatus
{
	grPupupu_WhispyEyes_Turn,
	grPupupu_WhispyEyes_Blink

} grPupupuWhispyEyesStatus;

typedef enum grPupupuWhispyMouthStatus
{
	grPupupu_WhispyMouth_Stretch,
	grPupupu_WhispyMouth_Turn,
	grPupupu_WhispyMouth_Open,
	grPupupu_WhispyMouth_Close

} grPupupuWhispyMouthStatus;

typedef enum grPupupuFlowerStatus
{
	grPupupu_Flower_Default,
	grPupupu_Flower_WindStart,
	grPupupu_Flower_WindLoopStart,
	grPupupu_Flower_WindLoop,
	grPupupu_Flower_WindLoopEnd,
	grPupupu_Flower_WindStop

} grPupupuFlowerStatus;

typedef struct grCommon_GroundVars_Pupupu
{
	void* map_head;
	GObj* map_gobj[4];
	s32 effect_bank_index;
	efTransform* leaves_eftrans;
	efTransform* dust_eftrans;
	u16 whispy_wind_wait;
	u16 whispy_wind_duration;
	s16 whispy_blink_wait;
	u8 whispy_status;
	u8 flowers_back_wait;
	u8 flowers_front_wait;
	u8 rumble_wait;
	s8 lr_players;
	u8 flowers_back_status;
	u8 flowers_front_status;
	s8 whispy_eyes_status;
	s8 whispy_mouth_status;
	s8 whispy_mouth_texture;
	s8 whispy_eyes_texture;

} grCommon_GroundVars_Pupupu;

typedef struct grSectorDesc
{
	ATrack* atrack_0x0;
	u8 filler_0x4[0x1C - 0x4];
	ATrack* atrack_0x1C;
	void* unk_sectordesc_0x20;
	ATrack* atrack_0x24;
	void* unk_sectordesc_0x28;
	ATrack* atrack_0x2C;

} grSectorDesc;

typedef struct grCommon_GroundVars_Sector
{
	void* map_head;
	GObj* map_gobj;
	DObj* map_dobj[12];
	void* weapon_head;
	void* map_file;
	f32 arwing_target_x;
	u16 arwing_appear_timer;
	u16 arwing_state_timer;
	u8 arwing_status;
	s8 arwing_flight_pattern;
	u8 arwing_type_cycle;
	u8 arwing_laser_ammo;
	s8 unk_sector_0x4C;
	s8 unk_sector_0x4D;
	u16 unk_sector_0x4E;
	u16 arwing_laser_timer;
	u8 unk_sector_0x52;
	s8 arwing_pilot_current; // Line IDs?
	s8 arwing_pilot_prev;
	u8 arwing_laser_count; // Laser shot count? e.g. if set to 2, the arwing
						   // will fire 2 lasers at once (though this is
						   // hardcoded to fire two shots in the weapon make
						   // function)
	ub8 is_arwing_z_near;
	ub8 is_arwing_z_collision;
	ub8 is_arwing_line_active;
	ub8 is_arwing_line_collision;

} grCommon_GroundVars_Sector;

typedef struct grZebesAcid
{
	u16 acid_random_add;
	u16 acid_random1, acid_random2;
	f32 acid_level;

} grZebesAcid;

typedef struct grCommon_GroundVars_Zebes
{
	void* map_head;
	GObj* map_gobj;
	grHitbox* gr_hit;
	f32 acid_level_current;
	f32 acid_level_step;
	u16 acid_level_wait;
	u8 acid_status;
	u8 acid_level_index;
	u8 rumble_wait;

} grCommon_GroundVars_Zebes;

typedef struct grYosterCloud
{
	GObj* gobj;
	DObj* dobj[3];
	f32 altitude;
	f32 pressure; // 0x18
	u8 status;
	s8 anim_id;
	ub8 is_cloud_line_active;
	s8 pressure_timer;
	u8 evaporate_wait; // 0x1C

} grYosterCloud;

typedef struct grCommon_GroundVars_Yoster
{
	void* map_head;
	grYosterCloud clouds[3];
	s32 effect_bank_index;

} grCommon_GroundVars_Yoster;

typedef struct grInishieScale
{
	DObj* platform_dobj;
	DObj* string_dobj;
	f32 string_length;
	f32 platform_base_y;

} grInishieScale;

typedef struct grCommon_GroundVars_Inishie
{
	void* map_head;
	void* item_head;
	grInishieScale scale[2];
	f32 splat_altitude;	  // Scale platform uh... thing I don't know how to
						  // explain, splat_accelerate gets added to this
	f32 splat_accelerate; // Scale platform fall acceleration
	u16 splat_wait;		  // Wait this many frames before retracting if the platforms
					// have falle
	u8 splat_status;   // Current state of the platforms
	u8 players_tt[4];  // Players timer, something to do with being
					   // grounded/airborne
	ub8 players_ga[4]; // Players ground or air
	GObj* pblock_gobj;
	grHitbox* gr_hit;
	u16 pblock_appear_wait;
	u8 pblock_pos_count;
	u8* pblock_pos_ids;
	u8 pblock_status;
	GObj* pakkun_gobj[2];

} grCommon_GroundVars_Inishie;

typedef struct grCommon_GroundVars_Jungle
{
	void* map_head;
	GObj* tarucann_gobj;
	u8 tarucann_status;
	u16 tarucann_wait;
	f32 tarucann_rotate_step;

} grCommon_GroundVars_Jungle;

typedef struct grCommon_GroundVars_Hyrule
{
	void* map_head;
	GObj* twister_gobj;
	efTransform* twister_eftrans;
	f32 twister_leftedge_x;
	f32 twister_rightedge_x;
	f32 twister_vel;
	u8* twister_pos_ids;
	s32 effect_bank_index;
	u16 twister_wait;
	u16 twister_speed_wait;
	u16 twister_turn_wait;
	u16 twister_line_id;
	u8 twister_status;
	u8 twister_pos_count;

} grCommon_GroundVars_Hyrule;

typedef struct grCommon_GroundVars_Yamabuki
{
	void* map_head;
	void* item_head;
	GObj* monster_gobj;
	GObj* gate_gobj;
	Vec3f gate_pos;
	u8 gate_status;
	ub8 is_gate_deny_entry;
	u16 monster_wait;
	u16 gate_wait;
	u8 monster_id_prev;

} grCommon_GroundVars_Yamabuki;

typedef struct grCommon_GroundVars_Castle
{
	void* map_head;
	void* item_head;
	GObj* bumper_gobj;
	Vec3f bumper_pos;

} grCommon_GroundVars_Castle;

typedef struct grBonus1Targets
{
	intptr_t o_main;
	intptr_t o_dobjdesc;
	intptr_t o_anim;

} grBonus1Targets;

typedef struct grBonus_GroundVars_Bonus1
{
	u32 filler_0x0;
	GObj* interface_gobj; // GObj for target count HUD at the top of the screen
	u32 unk_bonus2_0x8;
	u8 target_count;
	u8 unk_bonus1_0xD;
	u8 unk_bonus1_0xE;
	u8 unk_bonus1_0xF;
	u8 unk_bonus1_0x10;

} grBonus_GroundVars_Bonus1;

typedef enum grBonus2PlatformKind
{
	grBonus_PlatformKind_Narrow,
	grBonus_PlatformKind_Medium,
	grBonus_PlatformKind_Wide

} grBonus2PlatformKind;

typedef struct grBonus2Nodes
{
	intptr_t unk_bonus2nodes_0x0;
	intptr_t unk_bonus2nodes_0x4;
	intptr_t unk_bonus2nodes_0x8;
	intptr_t unk_bonus2nodes_0xC;

} grBonus2Nodes;

typedef struct grBonus2Unk
{
	intptr_t unk_bonus2unk_0x0;
	intptr_t unk_bonus2unk_0x4;

} grBonus2Unk;

typedef struct grBonus2Bumpers
{
	intptr_t o_main;
	intptr_t o_anim;

} grBonus2Bumpers;

typedef struct grBonus_GroundVars_Bonus2
{
	void* unk_bonus2_0x0;
	void* unk_bonus2_0x4;
	void* unk_bonus2_0x8;
	GObj* interface_gobj; // GObj for platform count HUD at the top of the screen
	u8 platform_count;

} grBonus_GroundVars_Bonus2;

typedef struct grBonus_GroundVars_Bonus3
{
	void* map_head;
	void* item_head;
	Vec3f rbomb_make_pos;
	s32 rbomb_make_wait;

} grBonus_GroundVars_Bonus3;

typedef union grStruct
{
	// Common stages
	grCommon_GroundVars_Pupupu pupupu;
	grCommon_GroundVars_Sector sector;
	grCommon_GroundVars_Zebes zebes;
	grCommon_GroundVars_Yoster yoster;
	grCommon_GroundVars_Inishie inishie;
	grCommon_GroundVars_Jungle jungle;
	grCommon_GroundVars_Hyrule hyrule;
	grCommon_GroundVars_Yamabuki yamabuki;
	grCommon_GroundVars_Castle castle;

	// Bonus stages
	grBonus_GroundVars_Bonus1 bonus1;
	grBonus_GroundVars_Bonus2 bonus2;
	grBonus_GroundVars_Bonus3 bonus3;

} grStruct;

#endif