#ifndef _GRVARS_H_
#define _GRVARS_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <gr/grdef.h>
#include <ef/efdef.h>

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

#define GRYAMABUKI_MONSTER_WEAPON_NONE      (0)
#define GRYAMABUKI_MONSTER_WEAPON_WAIT      (1)
#define GRYAMABUKI_MONSTER_WEAPON_INSTANT   (2)
#define GRYAMABUKI_MONSTER_WEAPON_ALL       (3)
#define GRYAMABUKI_MONSTER_WEAPON_MAX       (4U)

typedef struct grPupupuEffect
{
	Vec3f pos;
	f32 rotate;

} grPupupuEffect;

typedef struct grCommonGroundVarsPupupu
{
	void* map_head;
	GObj* map_gobj[4];
	s32 particle_bank_id;
	LBTransform* leaves_tfrm;
	LBTransform* dust_tfrm;
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

} grCommonGroundVarsPupupu;

typedef struct grSectorDesc
{
	AObjEvent32* anim_joint_0x0;
	u8 filler_0x4[0x1C - 0x4];
	AObjEvent32* anim_joint_0x1C;
	void* unk_sectordesc_0x20;
	AObjEvent32* anim_joint_0x24;
	void* unk_sectordesc_0x28;
	AObjEvent32* anim_joint_0x2C;

} grSectorDesc;

typedef struct grCommonGroundVarsSector
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
	u8 arwing_pilot_prev;
	u8 arwing_laser_count; // Laser shot count? e.g. if set to 2, the arwing
						   // will fire 2 lasers at once (though this is
						   // hardcoded to fire two shots in the weapon make
						   // function)
	ub8 is_arwing_z_near;
	ub8 is_arwing_z_collision;
	ub8 is_arwing_line_active;
	ub8 is_arwing_line_collision;

} grCommonGroundVarsSector;

typedef struct grZebesAcid
{
	u16 acid_wait_base;
	u16 acid_random_min, acid_random_max;
	f32 acid_level;

} grZebesAcid;

typedef struct grCommonGroundVarsZebes
{
	void* map_head;
	GObj* map_gobj;
	GRHitCollision* gr_hitcoll;
	f32 acid_level_current;
	f32 acid_level_step;
	u16 acid_level_wait;
	u8 acid_status;
	u8 acid_attr_id;
	u8 rumble_wait;

} grCommonGroundVarsZebes;

typedef struct grYosterCloud
{
	GObj* gobj;
	DObj* dobj[3];
	f32 alt;
	f32 pressure; // 0x18
	u8 status;
	s8 anim_id;
	ub8 is_cloud_line_active;
	s8 pressure_timer;
	u8 evaporate_wait; // 0x1C

} grYosterCloud;

typedef struct grCommonGroundVarsYoster
{
	void* map_head;
	grYosterCloud clouds[3];
	s32 particle_bank_id;

} grCommonGroundVarsYoster;

typedef struct grInishieScale
{
	DObj* platform_dobj;
	DObj* string_dobj;
	f32 string_length;
	f32 platform_base_y;

} grInishieScale;

typedef struct grCommonGroundVarsInishie
{
	void* map_head;
	void* item_head;
	grInishieScale scale[2];
	f32 splat_alt;	  // Scale platform uh... thing I don't know how to
						  // explain, splat_accelerate gets added to this
	f32 splat_accelerate; // Scale platform fall acceleration
	u16 splat_wait;		  // Wait this many frames before retracting if the platforms
					// have falle
	u8 splat_status;   // Current state of the platforms
	u8 players_tt[4];  // Players timer, something to do with being
					   // grounded/airborne
	ub8 players_ga[4]; // Players ground or air
	GObj* pblock_gobj;
	GRHitCollision* gr_hitcoll;
	u16 pblock_appear_wait;
	u8 pblock_pos_count;
	u8* pblock_pos_ids;
	u8 pblock_status;
	GObj* pakkun_gobj[2];

} grCommonGroundVarsInishie;

typedef struct grCommonGroundVarsJungle
{
	void* map_head;
	GObj* tarucann_gobj;
	u8 tarucann_status;
	u16 tarucann_wait;
	f32 tarucann_rotate_step;

} grCommonGroundVarsJungle;

typedef struct grCommonGroundVarsHyrule
{
	void* map_head;
	GObj* twister_gobj;
	LBTransform* twister_tfrm;
	f32 twister_leftedge_x;
	f32 twister_rightedge_x;
	f32 twister_vel;
	u8* twister_pos_ids;
	s32 particle_bank_id;
	u16 twister_wait;
	u16 twister_speed_wait;
	u16 twister_turn_wait;
	u16 twister_line_id;
	u8 twister_status;
	u8 twister_pos_count;

} grCommonGroundVarsHyrule;

typedef struct grCommonGroundVarsYamabuki
{
	void* map_head;
	void* item_head;
	GObj* monster_gobj;
	GObj* gate_gobj;
	Vec3f gate_pos;
	u8 gate_status;
	ub8 gate_noentry;
	u16 monster_wait;
	u16 gate_wait;
	u8 monster_id_prev;

} grCommonGroundVarsYamabuki;

typedef struct grCommonGroundVarsCastle
{
	void* map_head;
	void* item_head;
	GObj* bumper_gobj;
	Vec3f bumper_pos;

} grCommonGroundVarsCastle;

typedef struct grBonus1Targets
{
	intptr_t o_main;
	intptr_t o_dobjsetup;
	intptr_t o_anim;

} grBonus1Targets;

typedef struct grBonusGroundVarsBonus1
{
	u32 filler_0x0;
	GObj* interface_gobj; // GObj for target count HUD at the top of the screen
	u32 unk_bonus2_0x8;
	u8 target_count;
	u8 unk_bonus1_0xD;
	u8 unk_bonus1_0xE;
	u8 unk_bonus1_0xF;
	u8 unk_bonus1_0x10;

} grBonusGroundVarsBonus1;

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

typedef struct grBonusGroundVarsBonus2
{
	void* unk_bonus2_0x0;
	void* unk_bonus2_0x4;
	void* unk_bonus2_0x8;
	GObj* interface_gobj; // GObj for platform count HUD at the top of the screen
	u8 platform_count;

} grBonusGroundVarsBonus2;

typedef struct grBonusGroundVarsBonus3
{
	void* map_head;
	void* item_head;
	Vec3f tarubomb_make_pos;
	s32 tarubomb_make_wait;

} grBonusGroundVarsBonus3;

#endif /* _GROUNDVARS_H_ */
