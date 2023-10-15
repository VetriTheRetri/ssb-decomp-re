#ifndef _SCENE_H_
#define _SCENE_H_

#include <PR/ultratypes.h>
#include <ssb_types.h>
#include <macros.h>
#include <sys/hal_input.h>

// Wait this many frames before magnifying glass is shown again after changing back from Close-Up view
#define SCTRAINING_VIEW_MAGNIFY_WAIT 180        

#define SCTRAINING_ITEMSPAWN_MAX 4
#define SCTRAINING_ITEMSPAWN_WAIT 8
#define SCTRAINING_ITEMSPAWN_VEL_Y 30.0F
#define SCTRAINING_ITEMSPAWN_OFF_Y 200.0F

#define SCTRAINING_INPUT_STICK_RANGE_MIN (I_CONTROLLER_RANGE_MAX / 2)

#define SCTRAINING_INPUT_RIGHT  (1 << 8)
#define SCTRAINING_INPUT_LEFT   (1 << 9)
#define SCTRAINING_INPUT_DOWN   (1 << 10)
#define SCTRAINING_INPUT_UP     (1 << 11)

typedef enum scTrainingMain
{
    scTrainingMenu_Main_EnumStart,
    scTrainingMenu_Main_CP = scTrainingMenu_Main_EnumStart,
    scTrainingMenu_Main_Item,
    scTrainingMenu_Main_Speed,
    scTrainingMenu_Main_View,
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

typedef enum scTrainingItem
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

} scTrainingItem;

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

typedef struct scTrainingMenu
{
    s32 main_menu_option;       // Option selected in the main training mode menu (vertically)
    u8 filler_0x4[0xC];         
    s32 item_menu_option;       // Option selected in "Item" settings
    s32 cp_menu_option;         // Option selected in "CP" settings
    s32 speed_menu_option;      // Option selected in "Speed" settings
    s32 view_menu_option;       // Option selected in "View" settings
    s32 opponent;               // Dummy fighter's port ID
    u8 filler_0x24[0xC4 - 0x24];
    u16 button_hold;
    u16 button_tap;
    u16 button_queue;
    s32 rapid_scroll_wait;
    u8 filler_0xD0[0xD2 - 0xD0];
    ub8 exit_or_reset;          // 0 = exit, 1 = reset
    u8 lagframe_wait;           // Wait this many frames before duplicate/lag frame is applied? Used for 2/3 speed with a setting of 1
    u8 frameadvance_wait;       // Wait this many frames before advancing to the next frame
    u8 item_spawn_wait;         // Cooldown before new item can be summoned
    u16 magnify_wait;           // Cooldown before magnifying glass is shown again after switching back from Close-Up view
    ub8 unk_trainmenu_0xD8;

} scTrainingMenu;

#endif