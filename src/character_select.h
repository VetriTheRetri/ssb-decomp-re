#ifndef _CSSVS_H_
#define _CSSVS_H_

#include <ssb_types.h>
#include <sys/objdisplay.h>

typedef struct MNPlayersSlot1PGame
{
	GObj *cursor;
	GObj *puck;
	GObj *player;
	GObj *name_logo_gobj;
	GObj *panel_doors;
	GObj *panel;
	GObj *flash;
	void *figatree_heap;
	s32 fkind;
	u32 costume;
	s32 cursor_state;
	sb32 is_selected;
	sb32 is_recalling;
	s32 recall_end_tic;
	f32 recall_start_x;
	f32 recall_end_x;
	f32 recall_start_y;
	f32 recall_mid_y;
	f32 recall_end_y;
	s32 recall_tics;
	s32 holder_player;
	s32 held_player;
	sb32 unk_0x88;
	sb32 is_fighter_selected;
	f32 puck_vel_x;
	f32 puck_vel_y;
	f32 cursor_pickup_x;
	f32 cursor_pickup_y;
	sb32 is_cursor_adjusting;
	alSoundEffect *p_sfx;
	u16 sfx_id;
	sb32 is_hold_b;
	u32 unk_0xB4;
	s32 hold_b_tics;

} MNPlayersSlot1PGame;

typedef struct MNPlayersSlotTraining
{
	GObj *cursor;
	GObj *puck;
	GObj *player;
	GObj *type_button;
	GObj *name_logo_gobj;
	GObj *panel_doors;
	GObj *panel;
	GObj *team_color_button;
	GObj *handicap_cpu_level;
	GObj *arrows;
	GObj *handicap_cpu_level_value;
	GObj *flash;
	GObj *type;
	void* figatree_heap;
	u32 cpu_level;
	u32 handicap;
	s32 team;
	u32 unk_0x44;
	s32 fkind;
	u32 costume;
	s32 cursor_state;
	sb32 is_selected;
	sb32 is_recalling;
	s32 recall_end_tic;
	f32 recall_start_x;
	f32 recall_end_x;
	f32 recall_start_y;
	f32 recall_mid_y;
	f32 recall_end_y;
	s32 recall_tics;
	s32 holder_player;
	s32 held_player;
	s32 player_type;
	sb32 unk_0x88;
	sb32 is_fighter_selected;
	f32 puck_vel_x;
	f32 puck_vel_y;
	f32 cursor_pickup_x;
	f32 cursor_pickup_y;
	sb32 is_cursor_adjusting;
	s32 door_offset;
	alSoundEffect *p_sfx;
	u16 sfx_id;
	u16 unk_0xAE;
	sb32 is_hold_b;
	u32 unk_0xB4;
	s32 hold_b_tics;

} MNPlayersSlotTraining;

typedef struct MNPlayersSlotVS
{
	GObj *cursor;
	GObj *puck;
	GObj *player;
	GObj *type_button;
	GObj *name_logo_gobj;
	GObj *panel_doors;
	GObj *panel;
	GObj *team_color_button;
	GObj *handicap_cpu_level;
	GObj *arrows;
	GObj *handicap_cpu_level_value;
	GObj *flash;
	GObj *type;
	void* figatree_heap;
	u32 cpu_level;
	u32 handicap;
	s32 team;
	u32 unk_0x44;
	s32 fkind;
	u32 costume;
	u32 shade;
	s32 cursor_state;
	sb32 is_selected;
	sb32 is_recalling;
	s32 recall_end_tic;
	f32 recall_start_x;
	f32 recall_end_x;
	f32 recall_start_y;
	f32 recall_mid_y;
	f32 recall_end_y;
	s32 recall_tics;
	s32 holder_player;
	s32 held_player;
	s32 player_type;
	sb32 unk_0x88;
	sb32 is_fighter_selected;
	f32 puck_vel_x;
	f32 puck_vel_y;
	f32 cursor_pickup_x;
	f32 cursor_pickup_y;
	sb32 is_cursor_adjusting;
	s32 door_offset;
	alSoundEffect* p_sfx;
	u16 sfx_id;
	sb32 is_hold_b;
	u32 unk_0xB4;
	s32 hold_b_tics;

} MNPlayersSlotVS;

typedef struct MNPlayersSlotBonus
{
	GObj *cursor;
	GObj *puck;
	GObj *player;
	GObj *name_logo_gobj;
	GObj *panel_doors;
	GObj *panel;
	GObj *flash;
	void *figatree_heap;
	s32 fkind;
	u32 costume;
	s32 cursor_state;
	sb32 is_selected;
	sb32 is_recalling;
	s32 recall_end_tic;
	f32 recall_start_x;
	f32 recall_end_x;
	f32 recall_start_y;
	f32 recall_mid_y;
	f32 recall_end_y;
	s32 recall_tics;
	s32 holder_player;
	s32 held_player;
	sb32 is_fighter_selected;	// Whether fighter has been selected with the puck
	sb32 is_status_selected;	// Whether "Selected" state has been set
	f32 puck_vel_x;
	f32 puck_vel_y;
	f32 cursor_pickup_x;
	f32 cursor_pickup_y;
	sb32 is_cursor_adjusting;	// Whether cursor is auto-positioning to puck
	alSoundEffect *p_sfx;
	u16 sfx_id;
	sb32 is_hold_b;
	u32 unk_0x80;
	s32 hold_b_tics;

} MNPlayersSlotBonus;


typedef enum mnSelectButton
{
	mnSelect_CU,                // C-Up
	mnSelect_CR,                // C-Right
	mnSelect_CD,                // C-Down
	mnSelect_CL,                // C-Left
	mnSelect_A                  // A

} mnSelectButton;

typedef enum mnCursorState
{
	mnCursorStatePointer,         // Pointer
	mnCursorStateHoldingPuck,    // Holding puck
	mnCursorStateNotHoldingPuck  // Not holding puck

} mnCursorState;

typedef enum mn1PBonusPlayersType
{
	mn1PBonusPlayersTypeBTT, // Break the Targets
	mn1PBonusPlayersTypeBTP  // Board the Platforms

} mn1PBonusPlayersType;


#define IS_BETWEEN(val, min, max) \
(( ( (val) >= (min) ) && ( (val) <= (max) ) ) ? TRUE : FALSE) \


#endif