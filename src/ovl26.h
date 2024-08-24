#ifndef _OVL26_H_
#define _OVL26_H_

#include <ssb_types.h>
#include <sys/objdraw.h>

typedef struct mnCharPanelBattle
{
	GObj* cursor;
	GObj* token;
	GObj* player;
	GObj* type_button;
	GObj* name_logo;
	GObj* panel_doors;
	GObj* panel;
	GObj* team_color_button;
	GObj* handicap_cpu_level;
	GObj* arrows;
	GObj* handicap_cpu_level_value;
	GObj* white_square;
	GObj* type;
	void* anim_heap;
	u32 cpu_level;
	u32 handicap;
	s32 team;
	u32 unk_0x44;
	s32 char_id;
	u32 costume_id;
	u32 shade;
	s32 cursor_state;
	sb32 is_selected;
	sb32 is_recalling;
	s32 min_frames_elapsed_until_recall;
	f32 recall_start_x;
	f32 recall_end_x;
	f32 recall_start_y;
	f32 recall_mid_y;
	f32 recall_end_y;
	s32 recall_frame_counter;
	s32 holder_port_id;
	s32 held_port_id;
	s32 player_type;
	sb32 unk_0x88;
	sb32 selected_animation_started;
	f32 token_x_velocity;
	f32 token_y_velocity;
	f32 cursor_pickup_x;
	f32 cursor_pickup_y;
	sb32 unk_0xA0;
	s32 door_offset;
	alSoundEffect* p_sfx;
	u16 sfx_id;
	u16 unk_0xAE;
	sb32 is_b_held;
	u32 unk_0xB4;
	s32 b_held_frame_count;

} mnCharPanelBattle;

typedef enum mnSelectButton
{
	mnSelect_CU, // C-Up
	mnSelect_CR, // C-Right
	mnSelect_CD, // C-Down
	mnSelect_CL, // C-Left
	mnSelect_A	 // A

} mnSelectButton;

typedef enum mnPanelType
{
	mnPanelTypeHuman, // HMN
	mnPanelTypeCPU,	  // CPU
	mnPanelTypeNA	  // NA

} mnPanelType;

typedef enum mnCursorState
{
	mnCursorStatePointer,		 // Pointer
	mnCursorStateHoldingToken,	 // Holding token
	mnCursorStateNotHoldingToken // Not holding token

} mnCursorState;


#define gFile011 gMnBattleFilesArray[0] // 8013C4A0; // file 0x011 pointer
#define gFile000 gMnBattleFilesArray[1] // 8013C4A4; // file 0x000 pointer
#define gFile014 gMnBattleFilesArray[2] // 8013C4A8; // file 0x014 pointer
#define gFile015 gMnBattleFilesArray[3] // 8013C4AC; // file 0x015 pointer
#define gFile012 gMnBattleFilesArray[4] // 8013C4B0; // file 0x012 pointer
#define gFile013 gMnBattleFilesArray[5] // 8013C4B4; // file 0x013 pointer
#define gFile016 gMnBattleFilesArray[6] // 8013C4B8; // file 0x016 pointer

#endif
