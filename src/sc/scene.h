#ifndef _SCENE_H_
#define _SCENE_H_

#include <PR/ultratypes.h>
#include <ssb_types.h>
#include <macros.h>
#include <sys/obj.h>
#include <sys/hal_input.h>

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

typedef enum scTrainingMain
{
	scTrainingMenu_Main_EnumStart,

	scTrainingMenu_Main_CP = scTrainingMenu_Main_EnumStart,

	scTrainingMenu_Main_ScrollStart = scTrainingMenu_Main_CP,
	scTrainingMenu_Main_Item,
	scTrainingMenu_Main_Speed,
	scTrainingMenu_Main_View,
	scTrainingMenu_Main_ScrollEnd = scTrainingMenu_Main_View,

	scTrainingMenu_Main_Reset,
	scTrainingMenu_Main_Exit,

	scTrainingMenu_Main_EnumMax

} scTrainingMain;

typedef enum scTrainingCP
{
	scTrainingMenu_CP_EnumStart,
	scTrainingMenu_CP_Stand = scTrainingMenu_CP_EnumStart,
	scTrainingMenu_CP_Walk,
	scTrainingMenu_CP_Evade,
	scTrainingMenu_CP_Jump,
	scTrainingMenu_CP_Attack,
	scTrainingMenu_CP_EnumMax

} scTrainingCP;

typedef enum scTrainingIT
{
	scTrainingMenu_Item_EnumStart,
	scTrainingMenu_Item_None = scTrainingMenu_Item_EnumStart,
	scTrainingMenu_Item_MaximTomato,
	scTrainingMenu_Item_Heart,
	scTrainingMenu_Item_Star,
	scTrainingMenu_Item_BeamSword,
	scTrainingMenu_Item_HomeRunBat,
	scTrainingMenu_Item_Fan,
	scTrainingMenu_Item_StarRod,
	scTrainingMenu_Item_RayGun,
	scTrainingMenu_Item_FireFlower,
	scTrainingMenu_Item_Hammer,
	scTrainingMenu_Item_MotionSensorBomb,
	scTrainingMenu_Item_Bob_omb,
	scTrainingMenu_Item_Bumper,
	scTrainingMenu_Item_GreenShell,
	scTrainingMenu_Item_RedShell,
	scTrainingMenu_Item_PokeBall,
	scTrainingMenu_Item_EnumMax

} scTrainingIT;

typedef enum scTrainingSpeed
{
	scTrainingMenu_Speed_EnumStart,
	scTrainingMenu_Speed_Full = scTrainingMenu_Speed_EnumStart,
	scTrainingMenu_Speed_2Thirds,
	scTrainingMenu_Speed_Half,
	scTrainingMenu_Speed_Quarter,
	scTrainingMenu_Speed_EnumMax

} scTrainingSpeed;

typedef enum scTrainingView
{
	scTrainingMenu_View_EnumStart,
	scTrainingMenu_View_CloseUp = scTrainingMenu_View_EnumStart,
	scTrainingMenu_View_Normal,
	scTrainingMenu_View_EnumMax

} scTrainingView;

typedef enum scTrainingMenuOptionSprites
{
	scTrainingMenu_OptionSprite_ItemStart,
	scTrainingMenu_OptionSprite_ItemNone = scTrainingMenu_OptionSprite_ItemStart,
	scTrainingMenu_OptionSprite_ItemMaximTomato,
	scTrainingMenu_OptionSprite_ItemHeart,
	scTrainingMenu_OptionSprite_ItemStar,
	scTrainingMenu_OptionSprite_ItemBeamSword,
	scTrainingMenu_OptionSprite_ItemHomeRunBat,
	scTrainingMenu_OptionSprite_ItemFan,
	scTrainingMenu_OptionSprite_ItemStarRod,
	scTrainingMenu_OptionSprite_ItemRayGun,
	scTrainingMenu_OptionSprite_ItemFireFlower,
	scTrainingMenu_OptionSprite_ItemHammer,
	scTrainingMenu_OptionSprite_ItemMotionSensorBomb,
	scTrainingMenu_OptionSprite_ItemBob_omb,
	scTrainingMenu_OptionSprite_ItemBumper,
	scTrainingMenu_OptionSprite_ItemGreenShell,
	scTrainingMenu_OptionSprite_ItemRedShell,
	scTrainingMenu_OptionSprite_ItemPokeBall,
	scTrainingMenu_OptionSprite_ItemEnd = scTrainingMenu_OptionSprite_ItemPokeBall,

	scTrainingMenu_OptionSprite_SpeedStart,
	scTrainingMenu_OptionSprite_SpeedFull = scTrainingMenu_OptionSprite_SpeedStart,
	scTrainingMenu_OptionSprite_Speed2Thirds,
	scTrainingMenu_OptionSprite_SpeedHalf,
	scTrainingMenu_OptionSprite_SpeedQuarter,
	scTrainingMenu_OptionSprite_SpeedEnd = scTrainingMenu_OptionSprite_SpeedQuarter,

	scTrainingMenu_OptionSprite_CPStart,
	scTrainingMenu_OptionSprite_CPStand = scTrainingMenu_OptionSprite_CPStart,
	scTrainingMenu_OptionSprite_CPWalk,
	scTrainingMenu_OptionSprite_CPEvade,
	scTrainingMenu_OptionSprite_CPJump,
	scTrainingMenu_OptionSprite_CPAttack,
	scTrainingMenu_OptionSprite_CPEnd = scTrainingMenu_OptionSprite_CPAttack,

	scTrainingMenu_OptionSprite_ViewStart,
	scTrainingMenu_OptionSprite_ViewNormal = scTrainingMenu_OptionSprite_ViewStart,
	scTrainingMenu_OptionSprite_ViewCloseUp,
	scTrainingMenu_OptionSprite_ViewEnd = scTrainingMenu_OptionSprite_ViewCloseUp,

	scTrainingMenu_OptionSprite_IndicatorStart,
	scTrainingMenu_OptionSprite_LeftArrow = scTrainingMenu_OptionSprite_IndicatorStart,
	scTrainingMenu_OptionSprite_RightArrow,
	scTrainingMenu_OptionSprite_Cursor, // Red orb + underline

	scTrainingMenu_OptionSprite_EnumMax = 31

} scTrainingMenuOptionSprites;

typedef struct scTrainingSprites
{
	Vec2h pos;
	Sprite* sprite;

} scTrainingSprites;

typedef struct scTrainingFiles
{
	s32 file_id;
	uintptr_t addr;
	syColorRGB fog_color;

} scTrainingFiles;

typedef struct scTrainingStruct
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
	GObj* damage_display_gobj;	  // Interface GObj of damage stat display
	GObj* combo_display_gobj;	  // Interface GObj of combo stat display
	GObj* cp_display_gobj;		  // Interface GObj of CP behavior display
	GObj* speed_display_gobj;	  // Interface GObj of speed display
	GObj* item_display_gobj;	  // Interface GObj of item display
	GObj* menu_label_gobj;		  // Interface GObj of main menu options descriptions
								  // (orange text)
	GObj* cursor_gobj;			  // Interface GObj of red underline + red orb cursor
	GObj* cp_option_gobj;		  // Interface GObj of scrollable main menu CP options
								  // text
	GObj* item_option_gobj;		  // Interface GObj of scrollable main menu Item
								  // options text
	GObj* speed_option_gobj;	  // Interface GObj of scrollable main menu Speed
								  // options text
	GObj* view_option_gobj;		  // Interface GObj of scrollable main menu View
								  // options text
	GObj* arrow_option_gobj;	  // Interface GObj of arrow indicators around
								  // scrollable options
	SObj* hscroll_option_sobj[4]; // Horizontally scrollable menu option SObjs
								  // (CP, Item, Speed, View)
	GObj* unk_trainmenu_0x7C;
	GObj* unk_trainmenu_0x80;
	SObj* vscroll_option_sobj[6][2]; // Vertically scrollable main menu option
									 // SObjs (CP, Item, Speed, View, Reset,
									 // EXIT); [0] = text, [1] = arrow (if
									 // applicable)
	u32 cursor_ulx,
		cursor_uly; // Cursor underline upper left coordinates for display list
	u32 cursor_lrx,
		cursor_lry; // Cursor underline lower right coordinates for display list
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

} scTrainingStruct;

#endif
