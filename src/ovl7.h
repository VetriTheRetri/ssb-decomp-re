#ifndef _OVL7_H_
#define _OVL7_H_

#define scGetTrainingModeItemKind(kind) ((kind) - (nITKindUtilityStart - 1))

void auSetBGMVolume(s32 playerID, u32 vol);
void scTrainingMode_InitViewOptionSprite();				 /* extern */
void func_ovl0_800CCF00(GObj*);							 /* extern */
void func_ovl0_800CCF00_overload(GObj*);				 /* extern */
void scTrainingMode_LoadFiles();
void ftRenderLightsDrawReflect(Gfx**, f32, f32); /* extern */
void scTrainingMode_InitCPDisplaySprite();
void scTrainingMode_InitCPOptionSprite();
void scTrainingMode_UpdateOptionArrows();
void scTrainingMode_UpdateCursorUnderline();
void scTrainingMode_UpdateOpponentBehavior();
void scTrainingMode_InitItemOptionSprite();
void scTrainingMode_InitSpeedDisplaySprite();
void scTrainingMode_InitSpeedOptionSprite();
void scTrainingMode_UpdateCursorPosition();

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

s32 D_80190960; // ? referenced from scene_manager
s32 D_80190964; // unused ?

// 80190770
u16 D_ovl80190770[]
	= { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004, 0x0000, 0x0005, 0x0000, 0x0006, 0x0000, 0x0007,
		0x0000, 0x0008, 0x0000, 0x0009, 0x0000, 0x000a, 0x0000, 0x000b, 0x0000, 0x000c, 0x0000, 0x000d,
		0x0000, 0x000e, 0x0000, 0x000f, 0x0000, 0x0010, 0x0000, 0x0011, 0x0000, 0x0012, 0x0000, 0x0013 };

// 801907B8
intptr_t D_ovl7_801907B8[] = { 0x26C88, 0x26C88, 0x26C88, 0x26C88, 0x26C88, 0x26C88, 0x26C88, 0x26C88, 0x26C88 };

u16 D_ovl7_801907DC[3] = { 0x004b, 0x0055, 0x005f };
u8 D_ovl7_801907E4[3] = { 0x64, 0xa, 0x1 };
u16 D_ovl7_801907E8[2] = { 0x0045, 0x004f };
u8 D_ovl7_801907EC[2] = { 0x0a, 0x01 };
sb32 (*jtbl_ovl7_801907F0[6])() = { 0x8018d478, 0x8018d518, 0x8018d684, 0x8018d6dc, 0x8018d7b8, 0x8018d830 };

// 80190808
s32 scTrainingMode_CPOpponent_BehaviorKind[/* */] = { 0x0F, 0x10, 0x11, 0x12, 0x00 };

u8 D_ovl7_8019081C[4][2] = { { 0x0, 0x0 }, { 0x1, 0x1 }, { 0x0, 0x1 }, { 0x0, 0x3 } };

// 80190824
scTrainingFiles scTrainingMode_Files_BackgroundImageInfo[/* */] = { { 0x1A, 0x20718, { 0x00, 0x00, 0x00 } },
																	{ 0x1B, 0x20718, { 0xEE, 0x9E, 0x06 } },
																	{ 0x1C, 0x20718, { 0xAF, 0xF5, 0xFF } } };

// 80190848
s32 scTrainingMode_Files_BackgroundImageIDs[/* */] = {
	2, // Peach's Castle
	0, // Sector Z
	0, // Kongo Jungle
	0, // Planet Zebes
	2, // Hyrule Castle
	1, // Yoshi's Story
	2, // Dream Land
	2, // Saffron City
	2  // Mushroom Kingdom
};

Unk800D4060 D_ovl7_8019086C = { 0 };
scUnkDataBounds D_ovl7_80190870
	= { 0x80392a00, 0x803b6900, 0x803da800, 0x00000000, 0x00000140, 0x000000F0, 0x00016A99 };

scRuntimeInfo D_ovl7_8019088C
	= { NULL,		0x8018da78, 0x800a26b8, 0x80190fa0, 0x00000000, 0x00000001, 0x00000002, 0x0000f000, 0x00005000,
		0x00000000, 0x00000000, 0x0000d000, 0x00020000, 0x0000c000, 0x801905a8, 0x80004310, 0x00000000, 0x00000600,
		0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000088, 0x00000000, 0x800d5cac, 0x00000000, 0x00000000,
		0x00000000, 0x00000000, 0x00000088, 0x00000000, 0x0000006c, 0x00000000, 0x00000090, 0x80190260 };

// 80190968
gmBattleState gTrainingModeBattleState;

// 80190B58
scTrainingMenu gTrainingModeStruct;

// 80190C40
rdFileNode gOverlay7StatusBuf[100];
// 80190F60
rdFileNode gOverlay7ForceBuf[7];

extern u32 dCommonFileIDs[8];
extern intptr_t D_NF_00000000;
extern intptr_t D_NF_00000020;
extern intptr_t D_NF_000000BC;
extern intptr_t D_NF_000000FE;
extern intptr_t D_NF_0000010C;
extern intptr_t D_NF_0000013C;
extern intptr_t D_NF_000001B8;
extern uintptr_t D_NF_800A5240;
extern uintptr_t lOverlay7ArenaHi; // 80392A00
extern uintptr_t lOverlay7ArenaLo; // 80190FA0

extern void* gGMCommonFiles[/* */];
extern GObj* gOMObjCommonLinks[OM_COMMON_MAX_LINKS];

#endif
