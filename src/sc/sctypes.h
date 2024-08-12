#ifndef _SCTYPES_H_
#define _SCTYPES_H_

#include <ssb_types.h>
#include <macros.h>
#include <sys/obj.h>
#include <sc/scdef.h>
#include <gm/gmmisc.h> // Temporary!

#define SCBATTLE_TIMELIMIT_INFINITE 100
#define SCBATTLE_BONUSGAME_TASK_MAX 10
#define SCBATTLE_PLAYERS_MAX 4              // Global limit for simultaneous players in a match

#define SC1PGAME_BONUS_MASK_CREATE(kind)    (1 << ((kind) - (((kind) / GS_BITCOUNT(u32, 1)) * GS_BITCOUNT(u32, 1))))

#define SCBATTLE_GAMERULE_TIME 	            (1 << nSCBattleGameRuleTime)	        // 0x1
#define SCBATTLE_GAMERULE_STOCK	            (1 << nSCBattleGameRuleStock)           // 0x2
#define SCBATTLE_GAMERULE_BONUS             (1 << nSCBattleGameRuleBonus) 	        // 0x4
#define SCBATTLE_GAMERULE_1PGAME            (1 << nSCBattleGameRule1PGame)          // 0x8

// First set of bonuses
#define SC1PGAME_BONUS_MASK0_CHEAPSHOT		(1 << nSC1PGameBonusCheapShot)          // One attack made up >= 35% of all attacks used
#define SC1PGAME_BONUS_MASK0_STARFINISH		(1 << nSC1PGameBonusStarFinish)	        // KO'd last enemy with a Star KO or Screen KO
#define SC1PGAME_BONUS_MASK0_NOITEM			(1 << nSC1PGameBonusNoItem)			    // Did not use any items
#define SC1PGAME_BONUS_MASK0_SHIELDBREAKER	(1 << nSC1PGameBonusShieldBreaker)      // Broke enemy's shield
#define SC1PGAME_BONUS_MASK0_JUDOWARRIOR	(1 << nSC1PGameBonusJudoWarrior)		// Only used throws
#define SC1PGAME_BONUS_MASK0_HAWK			(1 << nSC1PGameBonusHawk)		        // Only used aerials
#define SC1PGAME_BONUS_MASK0_SHOOTER		(1 << nSC1PGameBonusShooter)		    // Only used projectiles
#define SC1PGAME_BONUS_MASK0_HEAVYDAMAGE	(1 << nSC1PGameBonusHeavyDamage)		// Accumulated over 200% damage
#define SC1PGAME_BONUS_MASK0_ALLVARIATIONS	(1 << nSC1PGameBonusAllVariations)	    // Used all jabs, tilts, attacks and aerials
#define SC1PGAME_BONUS_MASK0_ITEMSTRIKE		(1 << nSC1PGameBonusItemStrike)		    // Only used items
#define SC1PGAME_BONUS_MASK0_DOUBLEKO		(1 << nSC1PGameBonusDoubleKO) 		    // Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK0_TRICKSTER		(1 << nSC1PGameBonusTrickster)		    // KO'd every enemy of a team with a Star KO or Screen KO
#define SC1PGAME_BONUS_MASK0_GIANTIMPACT	(1 << nSC1PGameBonusGiantImpact)		// Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK0_SPEEDSTER		(1 << nSC1PGameBonusSpeedster)		    // Cleared stage in less than 30 seconds
#define SC1PGAME_BONUS_MASK0_ITEMTHROW		(1 << nSC1PGameBonusItemThrow)		    // Threw or dropped all items, never used them in any other way
#define SC1PGAME_BONUS_MASK0_TRIPLEKO		(1 << nSC1PGameBonusTripleKO)		    // Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK0_LASTCHANCE		(1 << nSC1PGameBonusLastChance)		    // Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK0_PACIFIST		(1 << nSC1PGameBonusPacifist)		    // Cleared stage without dealing any damage
#define SC1PGAME_BONUS_MASK0_PERFECT		(1 << nSC1PGameBonusPerfect)		    // Cleared Bonus Stage with all targets broken or all platforms boarded
#define SC1PGAME_BONUS_MASK0_NOMISS			(1 << nSC1PGameBonusNoMiss)		        // Cleared stage without falling once throughout 1P Game progress; multiplied each time it is earned, lost after first fall
#define SC1PGAME_BONUS_MASK0_NODAMAGE		(1 << nSC1PGameBonusNoDamage)	        // Cleared stage without falling and taking any damage
#define SC1PGAME_BONUS_MASK0_FULLPOWER		(1 << nSC1PGameBonusFullPower)	        // Cleared stage with 0% damage (does not yield No Damage)
#define SC1PGAME_BONUS_MASK0_GAMECLEAR		(1 << nSC1PGameBonusGameClear)	        // Cleared Final Stage (number of bonus points depends on difficulty?)
#define SC1PGAME_BONUS_MASK0_NOMISSCLEAR	(1 << nSC1PGameBonusNoMissClear)	    // Cleared all stages without falling once (except Bonus Stages?)
#define SC1PGAME_BONUS_MASK0_NODAMAGECLEAR	(1 << nSC1PGameBonusNoDamageClear)	    // Cleared all stages without taking any damage
#define SC1PGAME_BONUS_MASK0_SPEEDKING		(1 << nSC1PGameBonusSpeedKing)	        // Cleared all stages in under 12 minutes (not earned if Speed Demon criteria is met)
#define SC1PGAME_BONUS_MASK0_SPEEDDEMON		(1 << nSC1PGameBonusSpeedDemon)	        // Cleared all stages in under 8 minutes
#define SC1PGAME_BONUS_MASK0_MEWCATCHER		(1 << nSC1PGameBonusMewCatcher)	        // Mew was released from player's Pok� Ball
#define SC1PGAME_BONUS_MASK0_STARCLEAR		(1 << nSC1PGameBonusStarClear)	        // Cleared stage while under the effect of Star Man
#define SC1PGAME_BONUS_MASK0_VEGETARIAN		(1 << nSC1PGameBonusVegetarian)	        // Consumed 3 or more Maxim Tomatoes
#define SC1PGAME_BONUS_MASK0_HEARTTHROB		(1 << nSC1PGameBonusHeartThrob)	        // Consumed 3 or more Hearts
#define SC1PGAME_BONUS_MASK0_THROWDOWN		(1 << nSC1PGameBonusThrowDown)	        // KO'd last enemy with a throw

// Second set of bonuses
#define SC1PGAME_BONUS_MASK1_SMASHMANIA		(1 << (nSC1PGameBonusSmashMania-32))    // Only used Smash Attacks
#define SC1PGAME_BONUS_MASK1_SMASHLESS		(1 << (nSC1PGameBonusSmashless-32))	    // Never used Smash Attacks
#define SC1PGAME_BONUS_MASK1_SPECIALMOVE	(1 << (nSC1PGameBonusSpecialMove-32))	// Only used Special Attacks
#define SC1PGAME_BONUS_MASK1_SINGLEMOVE		(1 << (nSC1PGameBonusSingleMove-32))    // Only used the same Special Attack
#define SC1PGAME_BONUS_MASK1_POKEMONFINISH	(1 << (nSC1PGameBonusPokemonFinish-32))	// KO'd last enemy with a Pok�mon (Saffron City Pok�mon projectiles also count, but not the Pok�mon themselves?)
#define SC1PGAME_BONUS_MASK1_BOOBYTRAP		(1 << (nSC1PGameBonusBoobyTrap-32))		// KO'd last enemy with a Motion Sensor Bomb
#define SC1PGAME_BONUS_MASK1_FIGHTERSTANCE	(1 << (nSC1PGameBonusFighterStance-32)) // Player was taunting as stage ended
#define SC1PGAME_BONUS_MASK1_MYSTIC			(1 << (nSC1PGameBonusMystic-32))		// Player fell as stage ended
#define SC1PGAME_BONUS_MASK1_COMETMYSTIC	(1 << (nSC1PGameBonusCometMystic-32))   // Player was getting Star KO'd as stage ended (Screen KOs do not count)
#define SC1PGAME_BONUS_MASK1_ACIDCLEAR		(1 << (nSC1PGameBonusAcidClear-32))		// Last enemy got KO'd by Acid
#define SC1PGAME_BONUS_MASK1_BUMPERCLEAR	(1 << (nSC1PGameBonusBumperClear-32))	// Last enemy got KO'd by Bumper
#define SC1PGAME_BONUS_MASK1_TORNADOCLEAR	(1 << (nSC1PGameBonusTornadoClear-32))  // Last enemy got KO'd by Tornado
#define SC1PGAME_BONUS_MASK1_ARWINGCLEAR	(1 << (nSC1PGameBonusArwingClear-32))	// Last enemy got KO'd by ARWING
#define SC1PGAME_BONUS_MASK1_COUNTERATTACK	(1 << (nSC1PGameBonusCounterAttack-32)) // Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK1_METEORSMASH	(1 << (nSC1PGameBonusMeteorSmash-32))	// Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK1_AERIAL			(1 << (nSC1PGameBonusAerial-32))		// Unused, translated from Japanese
#define SC1PGAME_BONUS_MASK1_LASTSECOND		(1 << (nSC1PGameBonusLastSecond-32))	// Cleared stage with 1 second left on the timer
#define SC1PGAME_BONUS_MASK1_LUCKY3			(1 << (nSC1PGameBonusLucky3-32))		// Cleared stage with 3:33 left on the timer
#define SC1PGAME_BONUS_MASK1_JACKPOT		(1 << (nSC1PGameBonusJackpot-32))		// Cleared stage with a damage % of two or three identical digits (e.g. 44% or 111%)
#define SC1PGAME_BONUS_MASK1_YOSHIRAINBOW	(1 << (nSC1PGameBonusYoshiRainbow-32))	// KO'd every member of Yoshi Team in the order they appeared
#define SC1PGAME_BONUS_MASK1_KIRBYRANKS		(1 << (nSC1PGameBonusKirbyRanks-32))	// KO'd every member of Kirby Team in the order they appeared
#define SC1PGAME_BONUS_MASK1_BROSCALAMITY	(1 << (nSC1PGameBonusBrosCalamity-32))	// KO'd Luigi before damaging Mario on VS Mario Bros. stage
#define SC1PGAME_BONUS_MASK1_DKDEFENDER		(1 << (nSC1PGameBonusDKDefender-32))	// Allies did not fall on VS. Giant Donkey Kong stage
#define SC1PGAME_BONUS_MASK1_DKPERFECT		(1 << (nSC1PGameBonusDKPerfect-32))	    // Allies did not fall and took no damage on VS. Giant Donkey Kong stage
#define SC1PGAME_BONUS_MASK1_GOODFRIEND		(1 << (nSC1PGameBonusGoodFriend-32))	// Ally did not fall on VS Mario Bros. stage
#define SC1PGAME_BONUS_MASK1_TRUEFRIEND		(1 << (nSC1PGameBonusTrueFriend-32))	// Ally did not fall and took no damage on VS Mario Bros. stage

// "DAMAGE", "COMBO", "ENEMY", "SPEED" text
#define SCTRAINING_STATDISPLAY_TEXT_COUNT 4
#define SCTRAINING_STATDISPLAY_CHARACTER_COUNT 39

#define SCTRAINING_DAMAGEDISPLAY_DIGIT_COUNT 3

#define SCTRAINING_COMBODISPLAY_DIGIT_COUNT 2

// Total menu description text sprite count
#define SCTRAINING_MENULABELS_SPRITE_COUNT 10

// Text describing what each option is for (orange text)
#define SCTRAINING_MENULABELS_TEXT_COUNT 6

// Wait this many frames before magnifying glass is shown again after changing
// back from Close-Up view
#define SCTRAINING_VIEW_MAGNIFY_WAIT 180

#define SCTRAINING_GENERAL_SCROLL_WAIT_NORMAL 30
#define SCTRAINING_GENERAL_SCROLL_WAIT_FAST 5

#define SCTRAINING_ITEMSPAWN_MAX 4
#define SCTRAINING_ITEMSPAWN_WAIT 8
#define SCTRAINING_ITEMSPAWN_VEL_Y 30.0F
#define SCTRAINING_ITEMSPAWN_OFF_Y 200.0F

#define SCTRAINING_INPUT_STICK_RANGE_MIN (I_CONTROLLER_RANGE_MAX / 2)

#define SCMANAGER_OVERLAY_DEFINE(OVL_NUM) 		\
{												\
	(uintptr_t)&_ovl##OVL_NUM##SegRomStart, 	\
	(uintptr_t)&_ovl##OVL_NUM##SegRomEnd,		\
	(uintptr_t)&_ovl##OVL_NUM##SegStart, 		\
	(uintptr_t)&_ovl##OVL_NUM##TextStart, 		\
	(uintptr_t)&_ovl##OVL_NUM##TextEnd, 		\
	(uintptr_t)&_ovl##OVL_NUM##DataStart,		\
	(uintptr_t)&_ovl##OVL_NUM##DataEnd,			\
	(uintptr_t)&_ovl##OVL_NUM##SegNoloadStart,	\
	(uintptr_t)&_ovl##OVL_NUM##SegNoloadEnd		\
}

struct sc1PGameComputer
{
	ub8 is_team_attack;
	u8 item_switch;
	u8 enemy_level[5];
	u8 enemy_handicap[5];
	u8 ally_level[5];
	u8 ally_handicap[5];
};

struct sc1PGameStage
{
	u8 screenflash_alpha;
	u8 gr_kind;
	u32 item_toggles;
	u8 opponent_count;            // Number of enemy players to spawn?
	u8 ft_kind[2];
	u8 opponent_behavior;
	u8 ally_count;
	u8 ally_behavior;
};

struct sc1PGameFighter
{
	s32 mapobj_kind; // Spawn position?
	void* anim_bank;
	s32 copy_kind;
	s32 team_order;
	sb32 is_skip_entry;
	sb32 is_skip_magnify;
	u8 cp_trait;
	f32 camera_frame_mul;
};

struct sc1PGameStats
{
	s32 team_order;
	s32 damage_status_id;
	s32 damage_player;
	s32 damage_object_class;
	s32 damage_object_kind;
	gmStatFlags damage_stat_flags;
	u16 damage_stat_count;
};

struct sc1PStageClearStats
{
	s32 bonus_array_id;
	s32 bonus_id;
};

struct sc1PStageClearScore
{
	intptr_t offset;
	s32 points;
};

struct scTrainingSprites
{
	Vec2h pos;
	Sprite *sprite;
};

struct scTrainingFiles
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
	scTrainingSprites* display_label_sprites;   // "DAMAGE", "COMBO", "ENEMY", "SPEED" text
	Sprite** display_option_sprites;
	scTrainingSprites* menu_label_sprites;      // Orange text describing what each option is?
	Sprite** menu_option_sprites;
	scTrainingSprites* unk_trainmenu_0x34;
	scTrainingSprites* unk_trainmenu_0x38;
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

struct scAutoDemoProc
{
	u16 focus_end_wait;
	void (*proc_change)();
	void (*proc_focus)();
};

struct scBattleResults
{
	s32 tko;
	s32 kos;
	u8 player_or_team;
	u8 unk_battleres_0x9;
	ub8 is_human_player;
};

struct scPlayerData
{
	u8 level;		   		                        // Actually begins at 1 instead of 0
	u8 handicap;	   		                        // Master Hand's handicap value is 35!?
	u8 pl_kind;	   			                        // 0 = HMN, 1 = CPU, 2 = none (?), 5 = How to Play (?)
	u8 ft_kind;
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
	s32 total_ko_player[SCBATTLE_PLAYERS_MAX];      // KOs scored on other players
	s32 unk_pblock_0x28;
	s32 unk_pblock_0x2C;
	s32 total_self_destruct;					    // Applied when damaging player's ID is -1 or SCBATTLE_PLAYERS_MAX
	s32 total_damage_dealt;						    // Total damage dealt to all players
	s32 total_damage_all;						    // Damage received from all hazards
	s32 total_damage_player[SCBATTLE_PLAYERS_MAX];  // Total damage received from each player present
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

struct scBattleState
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
	u8 item_switch;									// Item appearance rate setting 
													// 0x3 on various stages, 0x4 on Polygon Team?
	ub32 is_display_score : 1;						// Displays score when a fighter falls
	ub32 is_not_teamshadows : 1;					// If FALSE, shadows are colored based on
													// players' team affiliation, otherwise use default shadow color
	scPlayerData players[SCBATTLE_PLAYERS_MAX]; 	// Holds data for each player
};

struct scCommonData
{
	u8 scene_current;
	u8 scene_previous;
	u8 prize_unlocks[2];		// Unlockable features part 1 (?)
	u8 pad04[0x09 - 0x04];
	u8 challenger_ft_kind;		// Opponent being fought in "Challenger Approaching" battle
	u8 unk0A;
	u8 pad0B[0xD - 0xB];
	u8 demo_ft_kind[2];
	u8 gr_kind;
	u8 unk10;
	ub8 is_select_continue;
	ub8 is_reset; 				// Player did A + B + R + Z button combination
	u8 spgame_player;
	u8 ft_kind;
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
	u8 bonus_ft_kind;
	u8 bonus_costume;
	u8 training_man_ft_kind;
	u8 training_man_costume;
	u8 training_com_ft_kind;
	u8 training_com_costume;
	u8 unk3F;
	u8 demo_ground_order;
	u8 stagesel_battle_gr_kind;
	u8 stagesel_training_gr_kind;
	u8 unk43;
	u8 unk44;
	u8 unk45;
	u8 unk46;
	u8 unk47;
};

// These next three structs are only temporarily placed here!
typedef struct scUnkDataBounds
{
	uintptr_t unk_scdatabounds_0x0;
	uintptr_t unk_scdatabounds_0x4;
	uintptr_t unk_scdatabounds_0x8;
	uintptr_t unk_scdatabounds_0xC;
	u32 unk_0x10;
	u32 unk_0x14;
	u32 unk_0x18;

} scUnkDataBounds;

typedef struct scRuntimeInfo
{
	void* unk_pointer_0x0;
	void* unk_pointer_0x4;
	void* unk_pointer_0x8;
	void* unk_scruntime_0xC;
	u32 arena_size;
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
	void (*proc_start)(); // 0x88

} scRuntimeInfo; // This is actually something from gtl.c, will have to move at a later point

typedef struct Unk800D4060
{
	u32 unk_b0;

} Unk800D4060;

#endif
