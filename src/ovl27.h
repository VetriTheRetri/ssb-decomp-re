#ifndef _CSSVS_H_
#define _CSSVS_H_

#include <ssb_types.h>
#include <sys/objdraw.h>

typedef struct mnCharPanel1P
{
	GObj *cursor;
	GObj *token;
	GObj *player;
	GObj *name_logo;
	GObj *panel_doors;
	GObj *panel;
	GObj *white_square;
	void* anim_heap;
	s32 char_id;
	u32 costume_id;
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
	sb32 unk_0x88;
	sb32 selected_animation_started;
	f32 token_x_velocity;
	f32 token_y_velocity;
	f32 cursor_pickup_x;
	f32 cursor_pickup_y;
	sb32 unk_0xA0;
	alSoundEffect *p_sfx;
	u16 sfx_id;
	u16 unk_0xAE;
	sb32 is_b_held;
	u32 unk_0xB4;
	s32 b_held_frame_count;

} mnCharPanel1P;

typedef enum mnSelectButton
{
	mnSelect_CU,                // C-Up
	mnSelect_CR,                // C-Right
	mnSelect_CD,                // C-Down
	mnSelect_CL,                // C-Left
	mnSelect_A                  // A

} mnSelectButton;

typedef enum mnPanelType
{
	mnPanelTypeHuman,           // HMN
	mnPanelTypeCPU,             // CPU
	mnPanelTypeNA               // NA

} mnPanelType;

typedef enum mnCursorState
{
	mnCursorStatePointer,         // Pointer
	mnCursorStateHoldingToken,    // Holding token
	mnCursorStateNotHoldingToken  // Not holding token

} mnCursorState;

#endif