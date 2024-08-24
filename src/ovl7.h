#ifndef _OVL7_H_
#define _OVL7_H_

#define scGetTrainingModeItemKind(kind) ((kind) - (nITKindUtilityStart - 1))

typedef struct scTrainingMenu
{
	s32 main_menu_option;					  // Option selected in the main training mode menu
											  // (vertically)
	s32 damage;								  // Total combo damage accumulated
	s32 combo;								  // Combo count
	s32 item_hold;							  // Training Mode Item ID of item currently held by player
	s32 item_menu_option;					  // Option selected in "Item" settings
	s32 cp_menu_option;						  // Option selected in "CP" settings
	s32 speed_menu_option;					  // Option selected in "Speed" settings
	s32 view_menu_option;					  // Option selected in "View" settings
	s32 opponent;							  // Dummy fighter's port ID
	scTrainingSprites* display_label_sprites; // "DAMAGE", "COMBO", "ENEMY", "SPEED" text
	Sprite** display_option_sprites;
	scTrainingSprites* menu_label_sprites; // Orange text describing what each option is?
	Sprite** menu_option_sprites;
	scTrainingSprites* unk_trainmenu_0x34;
	scTrainingSprites* unk_trainmenu_0x38;
	GObj* damage_display_gobj; // Interface GObj of damage stat display
	GObj* combo_display_gobj;  // Interface GObj of combo stat display
	GObj* cp_display_gobj;	   // Interface GObj of CP behavior display
	GObj* speed_display_gobj;  // Interface GObj of speed display
	GObj* item_display_gobj;   // Interface GObj of item display
	GObj* menu_label_gobj;	   // Interface GObj of main menu options descriptions
							   // (orange text)
	GObj* cursor_gobj;
	GObj* cp_option_gobj;	// Interface GObj of main menu CP options
	GObj* item_option_gobj; // Interface GObj of main menu Item options
	GObj* speed_option_gobj;
	GObj* view_option_gobj;
	GObj* arrow_option_gobj;
	SObj* hscroll_option_sobj[4];
	GObj* unk_trainmenu_0x7C;
	GObj* combo0;
	SObj* vscroll_option_sobj[6][2];
	u32 cursor_ulx, cursor_uly;
	u32 cursor_lrx, cursor_lry;
	u16 button_hold;
	u16 button_tap;
	u16 button_queue;
	s32 rapid_scroll_wait;
	u8 damage_reset_wait;	 // Wait this many frames before resetting combo damage
	u8 combo_reset_wait;	 // Wait this many frames before resetting combo count
	ub8 exit_or_reset;		 // 0 = exit, 1 = reset
	u8 lagframe_wait;		 // Wait this many frames before duplicate/lag frame is
							 // applied? Used for 2/3 speed with a setting of 1
	u8 frameadvance_wait;	 // Wait this many frames before advancing to the next
							 // frame
	u8 item_spawn_wait;		 // Cooldown before new item can be summoned
	u16 magnify_wait;		 // Cooldown before magnifying glass is shown again after
							 // switching back from Close-Up view
	ub8 is_read_menu_inputs; // Menu navigation inputs are ignored if FALSE
	s32 unknown[2];

} scTrainingMenu;

#endif
