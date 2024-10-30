#ifndef _SCTYPES_H_
#define _SCTYPES_H_

#include <ssb_types.h>
#include <macros.h>
#include <sys/obj.h>
#include <sc/scdef.h>

#include <gm/generic.h>

struct SC1PGameComputer
{
	ub8 is_team_attack;
	u8 item_appearance_rate;
	u8 enemy_level[5];
	u8 enemy_handicap[5];
	u8 ally_level[5];
	u8 ally_handicap[5];
};

struct SC1PGameStage
{
	u8 screenflash_alpha;
	u8 gr_kind;
	u32 item_toggles;
	u8 opponent_count;            // Number of enemy players to spawn?
	u8 fkind[2];
	u8 opponent_behavior;
	u8 ally_count;
	u8 ally_behavior;
};

struct SC1PGameFighter
{
	s32 mapobj_kind; // Spawn position?
	void *figatree;
	s32 copy_kind;
	s32 team_order;
	sb32 is_skip_entry;
	sb32 is_skip_magnify;
	u8 cp_trait;
	f32 camera_frame_mul;
};

struct SC1PGameStats
{
	s32 team_order;
	s32 damage_status_id;
	s32 damage_player;
	s32 damage_object_class;
	s32 damage_object_kind;
	GMStatFlags damage_stat_flags;
	u16 damage_stat_count;
};

struct SC1PGameBossPlan
{
    s32 unk_sc1pbossplan_0x0;
    u8 dl_link;
    u32 cobj_tag;
    Vec3f pos;
};

struct SC1PGameBossAnim
{
    intptr_t o_anim_joint;
    intptr_t o_matanim_joint;
    f32 anim_speed;
};

struct SC1PGameBossEffect
{
    void (*proc_update)(GObj*);
    void (*func_display)(GObj*);
    intptr_t o_dobjdesc;
    intptr_t o_mobjsub;
};

struct SC1PGameBossWallpaper
{
    s32 loop_count;
    s32 effect_count;
    s32 anim_count;
    s32 plan_count;
    s32 dobj_color_id;
    s32 color_id;
    s32 change_wait_base;
    s32 change_damage_min;
    sb32 is_random_wallpaper;
    SC1PGameBossEffect *bosseffect;
    SC1PGameBossAnim *bossanim;
    SC1PGameBossPlan *bossplan;
};

struct SC1PGameBossMain
{
    sb32 is_skip_wallpaper_change;
    s32 wallpaper_id;
    s32 change_wait;
    void *file_head;
    SC1PGameBossWallpaper *bosswallpaper;
    s32 bossplayer;
};

struct SC1PStageClearStats
{
	s32 bonus_array_id;
	s32 bonus_id;
};

struct SC1PStageClearScore
{
	intptr_t offset;
	s32 points;
};

struct SCTrainingSprites
{
	Vec2h pos;
	Sprite *sprite;
};

struct SCTrainingFiles
{
	s32 file_id;
	uintptr_t addr;
	syColorRGB fog_color;
};

struct scTrainingStruct
{
	s32 main_menu_option;					    // Option selected in the main training mode menu (vertically)
	s32 damage;								    // Total combo damage accumulated
	s32 combo;								    // Combo count
	s32 item_hold;							    // Training Mode Item ID of item currently held by player
	s32 item_menu_option;					    // Option selected in "Item" settings
	s32 cp_menu_option;						    // Option selected in "CP" settings
	s32 speed_menu_option;					    // Option selected in "Speed" settings
	s32 view_menu_option;					    // Option selected in "View" settings
	s32 opponent;							    // Dummy fighter's port ID
	SCTrainingSprites* display_label_sprites;   // "DAMAGE", "COMBO", "ENEMY", "SPEED" text
	Sprite** display_option_sprites;
	SCTrainingSprites* menu_label_sprites;      // Orange text describing what each option is?
	Sprite** menu_option_sprites;
	SCTrainingSprites* unk_trainmenu_0x34;
	SCTrainingSprites* unk_trainmenu_0x38;
	GObj* damage_display_gobj;	                // Interface GObj of damage stat display
	GObj* combo_display_gobj;	                // Interface GObj of combo stat display
	GObj* cp_display_gobj;		                // Interface GObj of CP behavior display
	GObj* speed_display_gobj;	                // Interface GObj of speed display
	GObj* item_display_gobj;	                // Interface GObj of item display
	GObj* menu_label_gobj;		                // Interface GObj of main menu options descriptions (orange text)
	GObj* cursor_gobj;			                // Interface GObj of red underline + red orb cursor
	GObj* cp_option_gobj;		                // Interface GObj of scrollable main menu CP options text
	GObj* item_option_gobj;		                // Interface GObj of scrollable main menu Item options text
	GObj* speed_option_gobj;	                // Interface GObj of scrollable main menu Speed options text
	GObj* view_option_gobj;		                // Interface GObj of scrollable main menu View options text
	GObj* arrow_option_gobj;	                // Interface GObj of arrow indicators around scrollable options
	SObj* hscroll_option_sobj[4];               // Horizontally scrollable menu option SObjs (CP, Item, Speed, View)
	GObj* unk_trainmenu_0x7C;
	GObj* unk_trainmenu_0x80;
	SObj* vscroll_option_sobj[6][2];            // Vertically scrollable main menu option
									            // SObjs (CP, Item, Speed, View, Reset, EXIT); 
                                                // [0] = text, [1] = arrow (if applicable)
	u32 cursor_ulx,
		cursor_uly;                             // Cursor underline upper left coordinates for display list
	u32 cursor_lrx,
		cursor_lry;                             // Cursor underline lower right coordinates for display list
	u16 button_hold;
	u16 button_tap;
	u16 button_queue;
	s32 rapid_scroll_wait;
	u8 damage_reset_wait;	                    // Wait this many frames before resetting combo damage
	u8 combo_reset_wait;	                    // Wait this many frames before resetting combo count
	ub8 exit_or_reset;		                    // 0 = exit, 1 = reset
	u8 lagframe_wait;		                    // Wait this many frames before duplicate/lag frame is
							                    // applied? Used for 2/3 speed with a setting of 1
	u8 frameadvance_wait;	                    // Wait this many frames before advancing to the next frame
	u8 item_spawn_wait;		                    // Cooldown before new item can be summoned
	u16 magnify_wait;		                    // Cooldown before magnifying glass is shown again after switch back from Close-Up view
	ub8 is_read_menu_inputs;                    // Menu navigation inputs are ignored if FALSE
};

struct SCExplainMain
{
    SObj *textbox_sobj;
    GObj *stick_gobj;
    GObj *spark_gobj;
    GObj *rgb_gobj;
    SObj *phase_sobj0;
    SObj *phase_sobj1;
    SObj *phase_sobj2;
    SObj *phase_sobj3;
    SObj *phase_sobj4;
    SObj *phase_sobj5;
    s32 phase_advance_wait;
    s32 phase;
    u8 unk_scexplainif_0x30;
    u8 stick_status;
};

struct SCExplainArgs
{
    u16 sprite_pos_x;
    u8 sprite_pos_y;
    u8 sprite_status;
};

struct SCExplainPhase
{
    u16 phase_time;                     // Time the given explanation phase of the How to Play tutorial should last
    u16 unused;
    u8 textbox_pos_x;
    u8 textbox_pos_y;
    Sprite *sprite;
    SCExplainArgs control_stick_args;
    SCExplainArgs phase_args0;
    SCExplainArgs phase_args1;
    SCExplainArgs phase_args2;
    SCExplainArgs phase_args3;
    SCExplainArgs phase_args4;
    SCExplainArgs rgb_overlay_args;
    SCExplainArgs phase_args5;
};

struct SCAutoDemoProc
{
	u16 focus_end_wait;
	void (*proc_change)();
	void (*proc_focus)();
};

struct SCBattleResults
{
	s32 tko;
	s32 kos;
	u8 player_or_team;
	u8 unk_battleres_0x9;
	ub8 is_human_player;
};

struct SCPlayerData
{
	u8 level;		   		                        // Actually begins at 1 instead of 0
	u8 handicap;	   		                        // Master Hand's handicap value is 35!?
	u8 pkind;	   			                        // 0 = HMN, 1 = CPU, 2 = none (?), 5 = How to Play (?)
	u8 fkind;
	u8 team;
	u8 player; 				                        // Identical to team if team battle is on?
	u8 costume;
	u8 shade; 				                        // Fog overlay applied when several players use the same costume
	u8 player_color;		                        // Used for emblems, player tags, and possibly more
	ub8 is_single_stockicon;                        // Whether player's stock is permanent or a limited amount
	u8 tag_kind;			                        // Player tag sprite index (i.e. 1P, 2P, 3P, 4P, CP or heart)
	s8 stock_count;			                        // -1 = player has no stocks
	ub8 is_spgame_team;		                        // Respawn flag of multi-man enemy teams (Yoshi, Kirby, Fighting Polygons) in 1P mode
	u8 placement;			                        // Player's placement in battle results
	s32 falls;
	s32 score;								        // Caps at positive 999, crashes if way too low in the negatives
	s32 total_ko_player[GMCOMMON_PLAYERS_MAX];      // KOs scored on other players
	s32 unk_pblock_0x28;
	s32 unk_pblock_0x2C;
	s32 total_self_destruct;					    // Applied when damaging player's ID is -1 or GMCOMMON_PLAYERS_MAX
	s32 total_damage_dealt;						    // Total damage dealt to all players
	s32 total_damage_all;						    // Damage received from all hazards
	s32 total_damage_player[GMCOMMON_PLAYERS_MAX];  // Total damage received from each player present
	s32 stock_damage_all;						    // All damage received per current stock, from any hazard
	s32 combo_damage_foe;						    // Total damage from consecutive hits dealt by foes (Resets when hitstun ends)
	s32 combo_count_foe;						    // Number of consecutive hits received from foes (Resets when hitstun ends)
	GObj *fighter_gobj;							    // Pointer to player's fighter GObj
	u32 stale_id;							  	    // Current position in stale queue?
	
	struct scPlayerStale
	{
		u16 attack_id;
		u16 motion_count;

	} stale_info[5];
};

struct SCBattleState
{
	u8 game_type;
	u8 gr_kind;
	ub8 is_team_battle;
	u8 game_rules; 			// Series of flags; 0x1 = time, 0x2 = stock
	u8 pl_count;			// Number of human players registered
	u8 cp_count;			// Number of computer players registered
	u8 time_limit;
	u8 stock_setting;	 	// Number of stocks set in game rules
	u8 handicap_setting; 	// 0 = OFF, 1 = ON, 2 = AUTO
	ub8 is_team_attack;	 	// 0 = OFF, 1 = ON
	ub8 is_stage_select; 	// 0 = OFF, 1 = ON
	u8 damage_ratio;
	u32 item_toggles; 		// Bits = item's on/off switch from match settings
	u8 unk_0x10;
	u8 game_status;
	u8 unk_0x12;
	u8 unk_0x13;
	u32 battle_time_remain;							// Frames remaining until timeout
	u32 battle_time_current; 						// Current match frame, counts up from 0
	u8 item_appearance_rate;									// Item appearance rate setting 
													// 0x3 on various stages, 0x4 on Polygon Team?
	ub32 is_display_score : 1;						// Displays score when a fighter falls
	ub32 is_not_teamshadows : 1;					// If FALSE, shadows are colored based on
													// players' team affiliation, otherwise use default shadow color
	SCPlayerData players[GMCOMMON_PLAYERS_MAX]; 	// Holds data for each player
};

struct SCCommonData
{
	u8 scene_current;
	u8 scene_previous;
	u8 unlock_messages[2];		// Queued unlock messages?
	u8 pad04[0x09 - 0x04];
	u8 challenger_fkind;		// Opponent being fought in "Challenger Approaching" battle
	u16 demo_mask_prev;
	u8 demo_first_fkind;
	u8 demo_fkind[2];
	u8 gr_kind;
	u8 unk10;
	ub8 is_select_continue;
	ub8 is_reset; 				// Player did A + B + R + Z button combination
	u8 spgame_player;
	u8 fkind;
	u8 costume;
	u8 spgame_time_limit;
	u8 spgame_stage; 			// 1P Game stage (0 = VS Link, 1 = VS Yoshi Team, etc.)
	u8 ally_players[2];			// CPU player ports
	u32 spgame_time_seconds; 	// Timer of current match in seconds
	u32 spgame_score;
	u32 continues_used;
	u32 bonus_count;	   		// Number of bonuses player acquired throughout the game
	u32 bonus_get_mask[3]; 		// Different bonuses the player has accumulated per match;
								// also includes total Bonus Stage tasks completed in last member
	u8 bonus_tasks_current;
	u8 bonus_fkind;
	u8 bonus_costume;
	u8 training_man_fkind;
	u8 training_man_costume;
	u8 training_com_fkind;
	u8 training_com_costume;
	ub8 is_extend_demo_wait;
	u8 demo_ground_order;
	u8 stagesel_battle_gr_kind;
	u8 stagesel_training_gr_kind;
	u8 challenger_level_drop;	// Subtract from default CP level?
	ub8 is_title_anim_viewed;
	u8 unk45;
	u8 unk46;
	u8 unk47;
};

typedef struct scRuntimeInfo
{
	void* unk_pointer_0x0;
	void* unk_pointer_0x4;
	void* unk_pointer_0x8;
	void* unk_scruntime_0xC;
	size_t arena_size;
	void* unk_pointer_0x14;
	void* unk_pointer_0x18;
	void* unk_pointer_0x1C;
	s32 unk_0x20;
	s32 unk_0x24;
	s32 unk_0x28;
	s32 unk_0x2C;
	s32 unk_0x30;
	void* unk_pointer_0x34;
	void* unk_pointer_0x38;
	void* unk_pointer_0x3C;
	s32 unk_0x40;
	s32 unk_0x44;
	s32 unk_0x48;
	s32 unk_0x4C;
	s32 unk_0x50;
	s32 unk_0x54;
	s32 unk_0x58;
	s32 unk_0x5C;
	void* unk_scruntime_0x60;
	s32 unk_0x64;
	void* unk_pointer_0x68;
	void* unk_pointer_0x6C;
	s32 unk_0x70;
	s32 unk_0x74;
	s32 unk_0x78;
	s32 unk_0x7C;
	s32 unk_0x80;
	s32 unk_0x84;
	void (*func_start)(); // 0x88

} scRuntimeInfo; // This is actually something from gtl.c, will have to move at a later point

#endif
