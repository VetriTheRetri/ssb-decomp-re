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

#define GetAddressFromOffset(file_ptr, offset) ((int*)((intptr_t)(file_ptr) + (intptr_t)(offset)))

extern intptr_t D_NF_800A5240;	   // 800A5240
extern intptr_t lOverlay26ArenaLo; // 0x8013C4C0
extern intptr_t lOverlay26ArenaHi; // 0x803903E0

extern f32 sqrtf(f32);
extern void gsStopCurrentProcess(s32);
extern void leoInitUnit_atten();
// ovl0
extern void func_ovl0_800CD2CC();
extern GObj* func_ovl0_800CD050(s32, void*, s32, s32, void*, s32, s32, s32, void*, s32, void*, s32);
extern void func_ovl0_800CD1F0(s32, s32, s32, s32);
extern void func_ovl0_800CCF74(GObj*);
extern SObj* gcAppendSObjWithSprite(GObj*, void*);
// ovl1
extern f32 menu_zoom[12]; // D_ovl1_80390D90
// ovl2
extern u8 D_ovl2_8012EF40[4];
extern u32 gFTAnimHeapSize;

extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

// ovl26 stuff

RldmFileId D_ovl26_8013B3A0[20] = { // 8013B3A0
	0x00000011, 0x00000000, 0x00000014, 0x00000015, 0x00000012, 0x00000013, 0x00000016,
	0x00000000, 0x20202000, 0x20202000, 0xFFFFFF00, 0xFFFFFF00, 0x14141400, 0x00000000,
	0x20202000, 0x20202000, 0xFFFFFF00, 0xFFFFFF00, 0x00EC0000, 0x00000000
};

f32 dMnBattlePortraitPositionsX[12] = { // 8013B3F0
	25, 70, 115, 160, 205, 250, 25, 70, 115, 160, 205, 250
};
f32 dMnBattlePortraitVelocities[12] = { // 8013B420
	1.899999976, 3.900000095, 7.800000191, -7.800000191, -3.799999952, -1.799999952,
	1.799999952, 3.799999952, 7.800000191, -7.800000191, -3.799999952, -1.799999952
};
Vec2f dMnBattlePortraitPositionsXY[12] = { // 8013B450[12];
	{ -35, 36 }, { -35, 36 }, { -35, 36 }, { 310, 36 }, { 310, 36 }, { 310, 36 },
	{ -35, 79 }, { -35, 79 }, { -35, 79 }, { 310, 79 }, { 310, 79 }, { 310, 79 }
};
s32 dMnBattleUnused[9] = { 0xC55252C5, 0xA6524294, 0x595252C5, 0, 0, 0, 0, 0, 0 };
s32 dMnBattleFtKindOrder[12] = { // 8013B4D4[12];
	0x00000004, 0x00000000, 0x00000002, 0x00000005, 0x00000003, 0x00000007,
	0x0000000B, 0x00000006, 0x00000008, 0x00000001, 0x00000009, 0x0000000A
};
s32 dMnBattlePortraitOrder[12] = { // 8013B504[12];
	0x00000001, 0x00000009, 0x00000002, 0x00000004, 0x00000000, 0x00000003,
	0x00000007, 0x00000005, 0x00000008, 0x0000000A, 0x0000000B, 0x00000006
};
s32 dMnBattleLockedPortraitOffsets[12] = { // 8013B534[12];
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00020538, 0x00000000,
	0x00000000, 0x0001E2E8, 0x00000000, 0x00000000, 0x000249D8, 0x00022788
};
s32 dMnBattlePortraitOffsets[12] = { // 8013B564[12];
	0x00004728, 0x0000D068, 0x00008BC8, 0x0000AE18, 0x00006978, 0x00011508,
	0x00013758, 0x00019E48, 0x0000F2B8, 0x000159A8, 0x0001C098, 0x00017BF8
};
s32 dMnBattleTeamButtonOffsets[3] = { // 8013B594[3];
	0x0000E3C8, 0x0000EC08, 0x0000E7E8
};
s32 dMnBattleTypeButtonOffsets[3] = { // 8013B5A0[3];
	0x00006048, 0x000063C8, 0x00006748
};
Vec2f dMnBattleUnusedPositions[12] = { // 8013B5AC[12];
	{ 21, 21 }, { 7, 25 }, { 6, 24 },  { 22, 21 }, { 21, 21 }, { 21, 26 },
	{ 27, 21 }, { 3, 24 }, { 23, 20 }, { 23, 21 }, { 23, 21 }, { 23, 21 }
};
s32 dMnBattleLogoOffsets[12] = { // 8013B60C[12];
	0x00000618, 0x00001938, 0x00000C78, 0x000012D8, 0x00000618, 0x000025F8,
	0x00002C58, 0x000032B8, 0x00001F98, 0x00003918, 0x00003918, 0x00003F78
};
s32 dMnBattleNameOffsets[12] = { // 8013B63C[12];
	0x00001838, 0x000025B8, 0x00001FF8, 0x00002358, 0x00001B18, 0x00002BA0,
	0x00002ED8, 0x00003998, 0x000028E8, 0x000032F8, 0x00003DB8, 0x000035B0
};
intptr_t dMnBattlePanelOffsets[4] = { // 8013B66C[4];
	0x000103F8, 0x00010420, 0x00010470, 0x00010448
};
intptr_t dMnBattlePanelCPUOffsets[4] = { // 8013B67C[4];
	0x00011378, 0x000113A0, 0x000113F0, 0x000113C8
};
gsColorRGB dMnBattleUnusedColors[4] = { // 8013B68C[4]
	{ 0xFF, 0x7E, 0x7E },
	{ 0xB3, 0xB3, 0xFF },
	{ 0xEB, 0xDB, 0x7A },
	{ 0x96, 0xCC, 0x96 }
};
intptr_t dMnBattleTypeButtonOffsetsDuplicate[3] = { // 8013B698[3];
	0x00006048, 0x000063C8, 0x00006748
};
intptr_t dMnBattleTypeOffsets[4] = { // 8013B6A4[4];
	0x00000878, 0x00000A58, 0x00000C38, 0x00000E18
};
f32 dMnBattleTypeOffsetsX[4] = { // 8013B6B4[4];
	8, 5, 5, 5
};
intptr_t dMnBattleTypeOffsetsDuplicate[4] = { // 8013B6C4[4];
	0x00000878, 0x00000A58, 0x00000C38, 0x00000E18
};
f32 dMnBattleTypeOffsetsXDuplicate[4] = { 8, 5, 5, 5 }; // 8013B6D4[4];
intptr_t dMnBattlePanelProcRenderList[4] = {			// 8013B6E4[4];
	0x8013317C, 0x801331C8, 0x80133214, 0x80133260
};
s32 dMnBattlePaletteIndexes[4] = { 0, 1, 2, 3 }; // 8013B6F4[4];
intptr_t dMnBattleNumberOffsets[10] = {			 // 8013B704[10];
	0x00005388, 0x00005440, 0x00005558, 0x00005668, 0x00005778,
	0x00005888, 0x00005998, 0x00005AA8, 0x00005BB8, 0x00005CC8
};
s32 dMnBattleNumberColorsTime[6] = { // 8013B72C[6];
	0x00000032, 0x0000001C, 0x0000000E, 0x000000FF, 0x000000FF, 0x000000FF
};
s32 dMnBattleNumberColorsStock[6] = { // 8013B744[6];
	0x00000032, 0x0000001C, 0x0000000E, 0x000000FF, 0x000000FF, 0x000000FF
};
intptr_t dMnBattleTitleOffsets[2] = { // 8013B75C[2]; // title offsets
	0x00000280, 0x000004E0
};
gsColorRGB dMnBattleTitleColors[2] = { // 8013B764[2]; // title colors
	{ 0xE3, 0xAC, 0x04 },
	{ 0x61, 0xAD, 0x49 }
};
gsColorRGBPair dMnBattleCursorTypeColors[4] = { // 8013B76C[4]; // cursor
	{ { 0xE0, 0x15, 0x15 }, { 0x5B, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0xFB }, { 0x00, 0x00, 0x52 } },
	{ { 0xCA, 0x94, 0x08 }, { 0x62, 0x3C, 0x00 } },
	{ { 0x00, 0x91, 0x00 }, { 0x00, 0x4F, 0x00 } }
};

intptr_t dMnBattleCursorTypeOffsets[4] = { // 8013B784[4]; // cursor type
	0x00008268, 0x00008368, 0x00008468, 0x00008568
};

intptr_t dMnBattleCursorOffsets[3] = { // 8013B794[3]; // cursor offsets
	0x00006F88, 0x000076E8, 0x00008168
};
Vec2i dMnBattleCursorTypePositions[3] = { // 8013B7A0[3]; // x,y offset
	{ 0x00000007, 0x0000000F },
	{ 0x00000009, 0x0000000A },
	{ 0x00000009, 0x0000000F }
};
// pairs for cursor type texture
s32 dMnBattlePanelColorIndexes[4] = { 0, 1, 2, 3 }; // 8013B7B8[4]; // panel color indexes
intptr_t dMnBattleTitleOffsetsDuplicate[2] = {		// 8013B7C8[2]; // ffa/team battle offsets
	0x280, 0x4e0
};

gsColorRGB dMnBattleTitleColorsDuplicate[2] = { // 8013B7D0[2]; // ffa/team battle colors
	{ 0xe3, 0xac, 0x04 },
	{ 0x61, 0xad, 0x49 }
};
s32 dMnBattleTeamPaletteIndexes[3] = { 0, 1, 3 };  // 8013B7D8[3]; // team panel
												   // color indexes
s32 D_ovl26_8013B7E4[3] = { 0x1FE, 0x1DB, 0x1EB }; // ??
s32 dMnBattleTokenIndexes[4] = { 0, 1, 2, 3 };	   // 8013B7F0[4]; // token_ids
u16 dMnBattleAnnouncerNames[12] = {				   // 8013B800[12]; // announcer names
	0x01F3, 0x01E6, 0x01E3, 0x0201, 0x01F2, 0x01F1, 0x0217, 0x01E5, 0x01F0, 0x01FB, 0x01FC, 0x01F5
};
intptr_t dMnBattleHandicapCPULevelNumberOffsets[10] = { // 8013B818[10];
	0x0000D310, 0x0000D3E0, 0x0000D4B0, 0x0000D580, 0x0000D650,
	0x0000D720, 0x0000D7F0, 0x0000D8C0, 0x0000D990, 0x0000DA60
};
s32 dMnBattleTokenPickupDisplayOrders[4] = { 6, 4, 2, 0 };		// 8013B840[4]; // display orders
																// for cursors on token pickup
s32 dMnBattleTokenPlaceHeldDisplayOrders[4] = { 3, 2, 1, 0 };	// 8013B850[4]; // display
																// orders for cursors holding
																// tokens on token placement
s32 dMnBattleTokenPlaceUnheldDisplayOrders[4] = { 6, 4, 2, 0 }; // 8013B860[4]; // display orders for cursors not
																// holding tokens on token placement
Vec2i dMnBattleCursorTypePositions2[3] = { // 8013B870[3]; // x,y offset pairs for cursor type texture
	{ 7, 15 },
	{ 9, 10 },
	{ 9, 15 }
};

intptr_t dMnBattleTokenOffsets[5] = { // 8013B888[5]; // token offsets
	0x00009048, 0x00009B28, 0x0000A608, 0x0000B0E8, 0x0000BBC8
};
intptr_t dMnBattleCursorTypeOffsetsUnused[4] = { // 8013B89C[4]; // cursor type texture offsets
	0x00008268, 0x00008368, 0x00008468, 0x00008568
};

Vec2f dMnBattleCursorStartingPositions[4] = { // 8013B8AC[4]; // starting coords for cursors
	{ 40, 170 },
	{ 108, 170 },
	{ 176, 170 },
	{ 244, 170 }
};

s32 dMnBattleCursorStartingDisplayOrders[4] // 8013B8CC[4]; // display orders for cursors on initial load
	= { 6, 4, 2, 0 };
intptr_t dMnBattleTokenOffsetsNoCPU[4] = {
	// 8013B8DC; // token offsets not including cpu
	0x00009048,
	0x00009B28,
	0x0000A608,
	0x0000B0E8,
};
s32 dMnBattleTokenStartingDisplayOrders[4] = { 3, 2, 1, 0 }; // 8013B8EC; // display orders for tokens on initial load
s32 dMnBattleTokenHoldingDisplayOrders[4] // 8013B8FC; // display orders for tokens while being held initially?
	= { 6, 4, 2, 0 };
f32 dMnBattleWhiteCircleSizes[12] = {
	// 8013B90C[12]; // white circle size

	1.5f, 1.5f, 2.0f, 1.5f, 1.5f, 1.5f, 1.5f, 1.5f, 1.5f, 1.5f, 1.5f, 1.5f,
};
s32 dMnBattleTimerValues[8] = { // 8013B93C[8];
	0x00000002, 0x00000003, 0x00000005, 0x0000000A, 0x0000000F, 0x0000001E, 0x0000003C, 0x00000064
};
s32 dMnBattleTimerValuesDuplicate[8] = { // 8013B95C[8];
	0x00000002, 0x00000003, 0x00000005, 0x0000000A, 0x0000000F, 0x0000001E, 0x0000003C, 0x00000064
};
u8 dMnBattleDefaultTeam[4] = { 0, 0, 1, 1 }; // 8013B97C[4]; // default team
scUnkDataBounds D_ovl26_8013B980
	= { 0x80392A00, 0x803B6900, 0x803DA800, 0x00000000, 0x00000140, 0x000000F0, 0x00016A99 };
scRuntimeInfo D_ovl26_8013B99C
	= { 0x00000000, 0x8000a5e4, 0x800a26b8, 0x8013c4c0, 0x00000000, 0x00000001, 0x00000002, 0x000055f0, 0x00000200,
		0x00000000, 0x00000000, 0x00003a98, 0x00020000, 0x00008000, 0x80131b20, 0x80004310, 0x00000000, 0x00000200,
		0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000088, 0x00000000, 0x800d5cac, 0x00000000, 0x00000000,
		0x00000000, 0x00000000, 0x00000088, 0x00000000, 0x0000006c, 0x00000000, 0x00000090, 0x8013b0c8 };

s32 D_8013BA80;											// ? referenced from scene_manager
mnCharPanelBattle gMnBattlePanels[GMBATTLE_PLAYERS_MAX]; // 8013BA88[GMBATTLE_PLAYERS_MAX];
GObj* gMnBattlePickerGObj;								// 8013BD78; // stock/time picker
s32 gMnBattleTimerValue;								// 8013BD7C;
s32 gMnBattleStockValue;								// 8013BD80;
u8 unused_ovl26_bss_1[8];
s32 gMnBattleControllerOrderArray[4]; // 8013BD90; // -1 if no controller
									  // plugged in; due to a bug, random
									  // positive value if plugged in
s32 gMnBattleStartDelayTimer;		  // 8013BDA0; // when start is pressed
									  // when ready to fight, timer counts down
									  // to delay leaving CSS
sb32 gMnBattleIsStartTriggered;		  // 8013BDA4;
sb32 gMnBattleIsTeamBattle;			  // 8013BDA8
sb32 gMnBattleRule;					  // 8013BDAC
GObj* gMnBattleTitleGObj;			  // 8013BDB0; // title gobj
s32 gMnBattleTokenShinePulseColor;	  // 8013BDB4;
sb32 gMnBattleIsTokenShineIncreasing; // 8013BDB8;
u16 gMnBattleCharacterUnlockedMask;	  // 8013BDBC; // flag indicating
									  // which bonus chars are available

u8 unused_ovl26_bss_2[4];
s32 gMnBattlePressStartFlashTimer; // 8013BDC4; looping timer that
								   // helps determine blink rate of
								   // Press Start (and Ready to Fight?)
s32 D_ovl26_8013BDC8;			   // 8013BDC8
s32 gMnBattleFramesElapsed;		   // 8013BDCC; // frames elapsed on CSS
s32 gMnBattleMaxFramesElapsed;	   // 8013BDD0; // frames to wait until exiting the CSS

u8 unused_ovl26_bss_3[0x2d0];
rdFileNode D_ovl26_8013C0A8; // 8013C0A8
u8 unused_ovl26_bss_4[0x30];
u32 D_ovl26_8013C0E0[240];

s32 gMnBattleFilesArray[7];				// 8013C4A0[7]
#define gFile011 gMnBattleFilesArray[0] // 8013C4A0; // file 0x011 pointer
#define gFile000 gMnBattleFilesArray[1] // 8013C4A4; // file 0x000 pointer
#define gFile014 gMnBattleFilesArray[2] // 8013C4A8; // file 0x014 pointer
#define gFile015 gMnBattleFilesArray[3] // 8013C4AC; // file 0x015 pointer
#define gFile012 gMnBattleFilesArray[4] // 8013C4B0; // file 0x012 pointer
#define gFile013 gMnBattleFilesArray[5] // 8013C4B4; // file 0x013 pointer
#define gFile016 gMnBattleFilesArray[6] // 8013C4B8; // file 0x016 pointer

// Offsets
extern intptr_t FILE_000_COLON_IMAGE_OFFSET; // file 0x000 image offset for colon

extern intptr_t FILE_011_TYPE_CP_IMAGE_OFFSET;		  // file 0x011 image offset for CP type image
extern intptr_t FILE_011_HANDICAP_IMAGE_OFFSET;		  // file 0x011 image offset for Handicap image
extern intptr_t FILE_011_CPU_LEVEL_IMAGE_OFFSET;	  // file 0x011 image offset for CPU Level image
extern intptr_t FILE_011_START_IMAGE_OFFSET;		  // Press Start's "Start" texture
extern intptr_t FILE_011_PRESS_IMAGE_OFFSET;		  // Press Start's "Press" texture
extern intptr_t FILE_011_INFINITY_IMAGE_OFFSET;		  // file 0x011 image offset for infinity symbol
extern intptr_t FILE_011_PICKER_TIME_IMAGE_OFFSET;	  // file 0x011 image offset for Time picker texture
extern intptr_t FILE_011_PICKER_STOCK_IMAGE_OFFSET;	  // file 0x011 image offset for Stock picker texture
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET; // file 0x011 image offset for pointer cursor
extern intptr_t FILE_011_PANEL_DOOR_L_IMAGE_OFFSET;
extern intptr_t FILE_011_PANEL_DOOR_R_IMAGE_OFFSET;
extern intptr_t FILE_011_ARROW_L_IMAGE_OFFSET;			 // file 0x011 image offset for left arrow
extern intptr_t FILE_011_ARROW_R_IMAGE_OFFSET;			 // file 0x011 image offset for right arrow
extern intptr_t FILE_011_READY_TO_FIGHT_IMAGE_OFFSET;	 // Ready to Fight banner text
extern intptr_t FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET; // Ready to Fight banner bg
extern intptr_t FILE_011_PANEL_IMAGE_OFFSET;
extern intptr_t FILE_011_BACK_IMAGE_OFFSET; // file 0x011 image offset for

extern s32 FILE_013_XBOX_IMAGE_OFFSET;					 // file 0x013 image offset
extern intptr_t FILE_013_WHITE_SQUARE;					 // white square
extern s32 FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET; // file 0x013 image offset for portrait question mark image
extern s32 FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET;		 // file 0x013 image offset for portrait bg (fire) image

extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET; // file 0x015 image offset for background tile

extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1; // AObj? for white circle
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2; // DObjDesc for white circle

void ftRenderLightsDrawReflect(Gfx**, f32, f32);	  /* extern */
extern f32 func_ovl1_8039051C();							  /* extern */
extern f32 func_ovl1_80390528();							  /* extern */
extern void func_ovl0_800CCF00(GObj*);						  /* extern */
extern void func_ovl1_803904E0(f32, f32, s32, s32, s32, s32); /* extern */
extern void func_ovl0_800CD2CC();
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32); /* extern */
extern void func_80007080(void*, f32, f32, f32, f32);											 /* extern */
extern GObj* gOMObjCommonLinks[OM_COMMON_MAX_LINKS];
sb32 mnBattleIsCostumeInUse(s32 ft_kind, s32 port_id, s32 costume_id);
void mnBattleRedrawCursor(GObj* cursor_gobj, s32 port_id, s32 cursor_state);
s32 mnCheckCPUHandicapRightArrowPress(GObj* cursor_gobj, s32 port_id);
s32 mnCheckCPUHandicapLeftArrowPress(GObj* cursor_gobj, s32 port_id);
void mnBattleSyncNameAndLogo(s32 port_id);
void mnBattleCreateWhiteSquare(s32 port_id);
void mnBattleAnnounceFighter(s32 port_id, s32 panel_id);
void mnBattleDrawHandicapCPULevel(s32 port_id);
void mnDrawHandicapCPULevelValue(s32 port_id);
void mnReplaceFighterNameWithHandicapCPULevel(s32 port_id);
sb32 mnIsHandicapOn();
sb32 mnIsHandicapAuto();
sb32 mnIsHandicap();
void mnBattleReorderCursorsOnPickup(s32 port_id, s32 token_id);
s32 mnBattleReorderCursorsOnPlacement(s32 port_id, s32 held_token_id); // doesn't actually return anything but
																	   // required to match
void mnBattleRedrawToken(GObj* token_gobj, s32 token_index);
s32 mnSelectRandomFighter(GObj* token_gobj);
sb32 mnBattleIsReadyToFight();
void mnBattleDestroyCursorAndTokenProcesses();
void mnBattleSaveMatchInfo();
s32 mnBattleGetNextTimerValue(s32 current_value);
s32 mnBattleGetPrevTimerValue(s32 current_value);

#endif
