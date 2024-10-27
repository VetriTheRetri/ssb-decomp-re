#include <ft/fighter.h>
#include <it/item.h>
#include <gr/ground.h>
#include <if/interface.h>
#include <sc/scene.h>
#include <sys/video.h>
#include <buttons.h>
#include <lb/library.h>

#include "ovl7.h"

// Externs
extern void auSetBGMVolume(s32 playerID, u32 vol);

extern u32 dGMCommonFileIDs[8];
extern intptr_t D_NF_00000000;
extern intptr_t D_NF_00000020;
extern intptr_t D_NF_000000BC;
extern intptr_t D_NF_000000FE;
extern intptr_t D_NF_0000010C;
extern intptr_t D_NF_0000013C;
extern intptr_t D_NF_000001B8;
extern uintptr_t lOverlay7ArenaHi; // 0x80392A00
extern uintptr_t lOverlay7ArenaLo; // 0x80190FA0
extern void* gGMCommonFiles[/* */];
extern GObj* gGCCommonLinks[GC_COMMON_MAX_LINKS];

// Forward declarations
void scTrainingMode_LoadFiles();
void scTrainingMode_InitTrainingMode();
void scTrainingMode_InitViewOptionSprite();
void scTrainingMode_InitCPDisplaySprite();
void scTrainingMode_InitCPOptionSprite();
void scTrainingMode_UpdateOptionArrows();
void scTrainingMode_UpdateCursorUnderline();
void scTrainingMode_UpdateOpponentBehavior();
void scTrainingMode_InitItemOptionSprite();
void scTrainingMode_InitSpeedDisplaySprite();
void scTrainingMode_InitSpeedOptionSprite();
void scTrainingMode_UpdateCursorPosition();
void scTrainingMode_SetGeometryRenderLights(Gfx** display_list);

// Data
// 0x80190770
u16 D_ovl80190770[] = {

	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004,
	0x0000, 0x0005, 0x0000, 0x0006, 0x0000, 0x0007,
	0x0000, 0x0008, 0x0000, 0x0009, 0x0000, 0x000a,
	0x0000, 0x000b, 0x0000, 0x000c, 0x0000, 0x000d,
	0x0000, 0x000e, 0x0000, 0x000f, 0x0000, 0x0010,
	0x0000, 0x0011, 0x0000, 0x0012, 0x0000, 0x0013
};

// 0x801907B8
intptr_t D_ovl7_801907B8[] = {

	0x26C88, 0x26C88, 0x26C88,
	0x26C88, 0x26C88, 0x26C88,
	0x26C88, 0x26C88, 0x26C88
};

u16 D_ovl7_801907DC[3] = {

	0x004b, 0x0055, 0x005f
};

u8 D_ovl7_801907E4[3] = {

	0x64, 0xa, 0x1
};

u16 D_ovl7_801907E8[2] = {

	0x0045, 0x004f
};

u8 D_ovl7_801907EC[2] = {

	0x0a, 0x01
};

sb32 (*jtbl_ovl7_801907F0[6])() = {

	0x8018d478, 0x8018d518, 0x8018d684,
	0x8018d6dc, 0x8018d7b8, 0x8018d830
};

// 0x80190808
s32 scTrainingMode_CPOpponent_BehaviorKind[] = {

	0x0F, 0x10, 0x11, 0x12, 0x00
};

u8 D_ovl7_8019081C[4][2] = {

	{ 0x0, 0x0 }, { 0x1, 0x1 },
	{ 0x0, 0x1 }, { 0x0, 0x3 }
};

// 0x80190824
SCTrainingFiles scTrainingMode_Files_BackgroundImageInfo[] = {

	{ 0x1A, 0x20718, { 0x00, 0x00, 0x00 } },
	{ 0x1B, 0x20718, { 0xEE, 0x9E, 0x06 } },
	{ 0x1C, 0x20718, { 0xAF, 0xF5, 0xFF } }
};

// 0x80190848
s32 scTrainingMode_Files_BackgroundImageIDs[] = {

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

// 0x8019086C
syColorRGBA dSCTrainingFadeColor = { 0x00, 0x00, 0x00, 0x00 };

syVideoSetup D_ovl7_80190870 = SYVIDEO_DEFINE_DEFAULT();

scRuntimeInfo D_ovl7_8019088C = {

	0x00000000, 0x8018da78,
	0x800a26b8, &lOverlay7ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x0000f000, 0x00005000,
	0x00000000, 0x00000000, 0x0000d000, 0x00020000, 0x0000c000,
	scTrainingMode_SetGeometryRenderLights, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800d5cac, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006c,
	0x00000000, 0x00000090,
	scTrainingMode_InitTrainingMode
};


// BSS

// 0x80190960 ? referenced from scene_manager
s32 D_ovl7_80190960;

// 0x80190964 unused ?
s32 D_ovl7_80190964;

// 0x80190968
SCBattleState gTrainingModeBattleState;

// 0x80190B58
scTrainingMenu gTrainingModeStruct;

// 0x80190C40
LBFileNode gOverlay7StatusBuffer[100];

// 0x80190F60
LBFileNode gOverlay7ForceStatusBuffer[7];


// 0x8018D0C0
void scTrainingMode_SetPauseGObjRenderFlags(u32 flags)
{
	GObj* pause_gobj = gGCCommonLinks[nGCCommonLinkIDPauseMenu];

	while (pause_gobj != NULL)
	{
		pause_gobj->flags = flags;
		pause_gobj = pause_gobj->link_next;
	}
}

// 0x8018D0E8
void scTrainingMode_CheckEnterTrainingMenu()
{
	s32 player = gSceneData.spgame_player;

	if (gPlayerControllers[player].button_tap & HAL_BUTTON_START)
	{
		GObj* fighter_gobj = gBattleState->players[player].fighter_gobj;
		FTStruct* fp = ftGetStruct(fighter_gobj);

		if (!(fp->is_ignore_training_menu))
		{
			ifCommonInterfaceSetGObjFlagsAll(1);
			scTrainingMode_SetPauseGObjRenderFlags(0);
			gmRumbleInitPlayers();
			ftParamLockPlayerControl(gBattleState->players[player].fighter_gobj);
			ftParamLockPlayerControl(gBattleState->players[gTrainingModeStruct.opponent].fighter_gobj);

			gBattleState->game_status = 2;

			func_800269C0_275C0(nSYAudioFGMGamePause);
			auSetBGMVolume(0, 0x3C00);

			gTrainingModeStruct.is_read_menu_inputs = 0;
		}
	}
}

// 0x8018D1F0
void scTrainingMode_CheckLeaveTrainingMenu()
{
	s32 player = gSceneData.spgame_player;
	GObj* fighter_gobj;

	if (gPlayerControllers[player].button_tap & (HAL_BUTTON_B | HAL_BUTTON_START))
	{
		ifCommonInterfaceSetGObjFlagsAll(0);
		scTrainingMode_SetPauseGObjRenderFlags(1);

		gBattleState->game_status = 1;
		func_ovl2_800E7F68(gBattleState->players[gTrainingModeStruct.opponent].fighter_gobj);
		fighter_gobj = gBattleState->players[player].fighter_gobj;
		func_ovl2_800E7F68(fighter_gobj);

		if (gPlayerControllers[player].button_tap & HAL_BUTTON_B)
		{
			FTStruct* fp = ftGetStruct(fighter_gobj);
			fp->input.pl.button_hold |= HAL_BUTTON_B;
		}
		auSetBGMVolume(0, 0x7800);
	}
}

// 0x8018D2F0
void scTrainingMode_UpdateMenuInputs()
{
	u16 inputs = 0;
	s32 player = gSceneData.spgame_player;

	if (gPlayerControllers[player].stick_range.x > 40)
		inputs |= 0x100;
	if (gPlayerControllers[player].stick_range.x < -40)
		inputs |= 0x200;
	if (gPlayerControllers[player].stick_range.y > 40)
		inputs |= 0x800;
	if (gPlayerControllers[player].stick_range.y < -40)
		inputs |= 0x400;
	if (gTrainingModeStruct.is_read_menu_inputs == FALSE)
	{
		if (!(inputs))
			gTrainingModeStruct.is_read_menu_inputs = TRUE;
	}
	else
	{
		gTrainingModeStruct.button_tap = (inputs ^ gTrainingModeStruct.button_hold) & inputs;

		if (inputs ^ gTrainingModeStruct.button_hold)
		{
			gTrainingModeStruct.button_queue = gTrainingModeStruct.button_tap;
			gTrainingModeStruct.rapid_scroll_wait = 30;
		}
		else
		{
			gTrainingModeStruct.rapid_scroll_wait--;

			if (gTrainingModeStruct.rapid_scroll_wait > 0)
				gTrainingModeStruct.button_queue = 0;
			else
			{
				gTrainingModeStruct.button_queue = inputs;
				gTrainingModeStruct.rapid_scroll_wait = 5;
			}
		}
		gTrainingModeStruct.button_hold = inputs;
	}
}

// 0x8018D3DC
void func_ovl7_8018D3DC()
{
	scTrainingMode_UpdateOptionArrows();
	scTrainingMode_UpdateCursorUnderline();
	func_800269C0_275C0(nSYAudioFGMMenuScroll2);
}

// 0x8018D40C
sb32 scTrainingMode_CheckUpdateOptionID(s32* arg0, s32 arg1, s32 arg2)
{
	if (gTrainingModeStruct.button_queue & 0x300)
	{
		if (gTrainingModeStruct.button_queue & 0x200)
		{
			if (--(*arg0) < arg1)
			{
				*arg0 = arg2 - 1;
				return TRUE;
			}
		}
		else if (++(*arg0) >= arg2)
			*arg0 = arg1;
		return TRUE;
	}
	else
		return FALSE;
}

// 0x8018D478
sb32 scTrainingMode_UpdateCPOption()
{
	if (scTrainingMode_CheckUpdateOptionID(&gTrainingModeStruct.cp_menu_option, 0, 5) != FALSE)
	{
		scTrainingMode_UpdateOpponentBehavior();
		scTrainingMode_InitCPDisplaySprite();
		scTrainingMode_InitCPOptionSprite();
		func_ovl7_8018D3DC();
	}
	return FALSE;
}

// 0x8018D4D0
s32 scTrainingMode_GetSpawnableItemCount()
{
	GObj* item_gobj = gGCCommonLinks[nGCCommonLinkIDItem];
	s32 item_count;

	for (item_count = 0; item_gobj != NULL; item_gobj = item_gobj->link_next)
	{
		if ((itGetStruct(item_gobj)->it_kind <= nITKindCommonEnd)
			|| (itGetStruct(item_gobj)->it_kind >= nITKindMBallMonsterStart))
			item_count++;
	}
	return item_count;
}

// 0x8018D518
sb32 scTrainingMode_UpdateItemOption()
{
	Vec3f pos;
	Vec3f vel;

	if (scTrainingMode_CheckUpdateOptionID(&gTrainingModeStruct.item_menu_option, 0, 0x11) != FALSE)
	{
		scTrainingMode_InitItemOptionSprite();
		func_ovl7_8018D3DC();
	}
	if (gTrainingModeStruct.item_spawn_wait == 0)
	{
		if ((gPlayerControllers[gSceneData.spgame_player].button_tap & HAL_BUTTON_A)
			&& (gTrainingModeStruct.item_menu_option != 0))
		{
			if (scTrainingMode_GetSpawnableItemCount() <= 3)
			{
				vel.x = vel.z = 0.0F;
				vel.y = 30.0F;

				pos = DObjGetStruct(gBattleState->players[gSceneData.spgame_player].fighter_gobj)->translate.vec.f;

				pos.y += 200.0F;
				pos.z = 0.0F;

				itManagerMakeItemSetupCommon(NULL, gTrainingModeStruct.item_menu_option + 3, &pos, &vel, 4);
				func_800269C0_275C0(nSYAudioFGMMenuSelect);
				gTrainingModeStruct.item_spawn_wait = 8;
			}
			else
				func_800269C0_275C0(nSYAudioFGMMenuDenied);
		}
	}
	else
		gTrainingModeStruct.item_spawn_wait--;

	return FALSE;
}

// 0x8018D684
sb32 scTrainingMode_UpdateSpeedOption()
{
	if (scTrainingMode_CheckUpdateOptionID(&gTrainingModeStruct.speed_menu_option, 0, 4) != FALSE)
	{
		gTrainingModeStruct.lagframe_wait = gTrainingModeStruct.frameadvance_wait = 0;

		scTrainingMode_InitSpeedDisplaySprite();
		scTrainingMode_InitSpeedOptionSprite();
		func_ovl7_8018D3DC();
	}
	return FALSE;
}

// 0x8018D6DC
sb32 scTrainingMode_UpdateViewOption()
{
	GObj* fighter_gobj;

	if (scTrainingMode_CheckUpdateOptionID(&gTrainingModeStruct.view_menu_option, 0, 2) != FALSE)
	{
		if (gTrainingModeStruct.view_menu_option == 1)
		{
			cmManagerSetCameraStatusDefault();
			gTrainingModeStruct.magnify_wait = 180;
		}
		else
		{
			fighter_gobj = gBattleState->players[gSceneData.spgame_player].fighter_gobj;
			func_ovl2_8010CF44(fighter_gobj, 0.0F, 0.0F, ftGetStruct(fighter_gobj)->attributes->closeup_camera_zoom, 0.1F,
							   28.0F);
			gIFCommonPlayerInterface.is_magnify_display = FALSE;
			gTrainingModeStruct.magnify_wait = 0;
		}
		scTrainingMode_InitViewOptionSprite();
		func_ovl7_8018D3DC();
	}
	return FALSE;
}

// 0x8018D7B8
sb32 scTrainingMode_UpdateResetOption()
{
	if (gPlayerControllers[gSceneData.spgame_player].button_tap & A_BUTTON)
	{
		gTrainingModeStruct.exit_or_reset = 1;
		func_800266A0_272A0();
		func_800269C0_275C0(nSYAudioFGMTrainingSel2);
		auSetBGMVolume(0, 0x7800);
		syTaskmanSetLoadScene();
		return TRUE;
	}
	else
		return FALSE;
}

// 0x8018D830
sb32 scTrainingMode_UpdateExitOption()
{
	if (gPlayerControllers[gSceneData.spgame_player].button_tap & A_BUTTON)
	{
		func_800266A0_272A0();
		func_800269C0_275C0(nSYAudioFGMTrainingSel2);
		syTaskmanSetLoadScene();
		return TRUE;
	}
	else
		return FALSE;
}

// 0x8018D898
void scTrainingMode_UpdateMainOption()
{
	if (gTrainingModeStruct.button_queue & 0xC00)
	{
		if (gTrainingModeStruct.button_queue & 0x800)
		{
			if (--gTrainingModeStruct.main_menu_option < 0)
				gTrainingModeStruct.main_menu_option = 5;
		}
		else if (++gTrainingModeStruct.main_menu_option >= 6)
			gTrainingModeStruct.main_menu_option = 0;

		scTrainingMode_UpdateCursorPosition();
		func_ovl7_8018D3DC();
		func_800269C0_275C0(nSYAudioFGMMenuScroll2);
	}
}

// 0x8018D91C
void scTrainingMode_UpdateTrainingMenu()
{
	scTrainingMode_UpdateMenuInputs();

	if (jtbl_ovl7_801907F0[gTrainingModeStruct.main_menu_option]() == FALSE)
	{
		scTrainingMode_UpdateMainOption();
		scTrainingMode_CheckLeaveTrainingMenu();
	}
}

// 0x8018D974
sb32 scTrainingMode_CheckSpeedFrameFreeze()
{
	if (gTrainingModeStruct.lagframe_wait == 0)
	{
		if (gTrainingModeStruct.frameadvance_wait == 0)
			gTrainingModeStruct.lagframe_wait = D_ovl7_8019081C[gTrainingModeStruct.speed_menu_option][0];
		else
		{
			gTrainingModeStruct.frameadvance_wait--;
			return TRUE;
		}
	}
	else
		gTrainingModeStruct.lagframe_wait--;

	if (gTrainingModeStruct.lagframe_wait == 0)
		gTrainingModeStruct.frameadvance_wait = D_ovl7_8019081C[gTrainingModeStruct.speed_menu_option][1];

	return FALSE;
}

// 0x8018D9F0
void scTrainingMode_ProcUpdate()
{
	switch (gBattleState->game_status)
	{
	case 1: scTrainingMode_CheckEnterTrainingMenu(); break;

	case 2: scTrainingMode_UpdateTrainingMenu(); break;
	}
	if (scTrainingMode_CheckSpeedFrameFreeze() == FALSE)
		func_8000A5E4();
	else
		cmManagerRunGlobalFuncCamera(gCMManagerCameraGObj);

	ifCommonSetMaxNumGObj();
}

// 0x8018DA78
void scTrainingMode_RunProcUpdate() { scTrainingMode_ProcUpdate(); }

// 0x8018DA98
void func_ovl7_8018DA98()
{
	s32 opponent;
	s32 player;
	gTrainingModeBattleState = gDefaultBattleState;
	gBattleState = &gTrainingModeBattleState;

	gBattleState->game_type = 7;
	gBattleState->gr_kind = gSceneData.gr_kind;
	gBattleState->time_limit = 100;
	gBattleState->is_display_score = FALSE;
	gBattleState->item_toggles = 0;

	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		if (player == gSceneData.spgame_player)
		{
			gBattleState->players[player].pl_kind = nFTPlayerKindMan;
			gBattleState->players[player].ft_kind = gSceneData.training_man_ft_kind;
			gBattleState->players[player].costume = gSceneData.training_man_costume;
			gBattleState->players[player].team = 0;
			gBattleState->players[player].player_color = player;
		}
		else
			gBattleState->players[player].pl_kind = nFTPlayerKindNot;
	}

	opponent = (gSceneData.spgame_player == 0) ? 1 : 0;

	gBattleState->players[opponent].pl_kind = 1;
	gBattleState->players[opponent].tag_kind = 4;
	gBattleState->players[opponent].ft_kind = gSceneData.training_com_ft_kind;
	gBattleState->players[opponent].costume = gSceneData.training_com_costume;
	gBattleState->players[opponent].level = 3;
	gBattleState->players[opponent].team = 1;
	gBattleState->players[opponent].player_color = 4;
	gBattleState->pl_count = 1;
	gBattleState->cp_count = 1;

	gTrainingModeStruct.main_menu_option = 0;
	gTrainingModeStruct.damage = 0;
	gTrainingModeStruct.combo = 0;
	gTrainingModeStruct.item_hold = -1;
	gTrainingModeStruct.cp_menu_option = 0;
	gTrainingModeStruct.speed_menu_option = 0;
	gTrainingModeStruct.view_menu_option = 1;
	gTrainingModeStruct.lagframe_wait = 0;
	gTrainingModeStruct.frameadvance_wait = 0;
	gTrainingModeStruct.item_spawn_wait = 0;
	gTrainingModeStruct.item_menu_option = 0;
	gTrainingModeStruct.opponent = opponent;
	gTrainingModeStruct.button_hold = gTrainingModeStruct.button_tap = gTrainingModeStruct.button_queue = 0;
	gTrainingModeStruct.rapid_scroll_wait = 30;
	gTrainingModeStruct.damage_reset_wait = 0;
	gTrainingModeStruct.combo_reset_wait = 0;
	gTrainingModeStruct.exit_or_reset = 0;
	gTrainingModeStruct.magnify_wait = 0;
	gTrainingModeStruct.is_read_menu_inputs = 0;
}

// 0x8018DD0C
void scTrainingMode_LoadSprites()
{
	void* addr = lbRelocGetFileExternHeap((u32)&D_NF_000000FE,
												  syTaskmanMalloc(lbRelocGetFileSize((u32)&D_NF_000000FE), 0x10));
	gTrainingModeStruct.display_label_sprites = (void*)((uintptr_t)addr + (intptr_t)&D_NF_00000000);
	gTrainingModeStruct.display_option_sprites = (void*)((uintptr_t)addr + (intptr_t)&D_NF_00000020);
	gTrainingModeStruct.menu_label_sprites = (void*)((uintptr_t)addr + (intptr_t)&D_NF_000000BC);
	gTrainingModeStruct.menu_option_sprites = (void*)((uintptr_t)addr + (intptr_t)&D_NF_0000013C);
	gTrainingModeStruct.unk_trainmenu_0x34 = (void*)((uintptr_t)addr + (intptr_t)&D_NF_0000010C);
	gTrainingModeStruct.unk_trainmenu_0x38 = (void*)((uintptr_t)addr + (intptr_t)&D_NF_000001B8);
}

// 0x8018DDB0
void scTrainingMode_SetBackgroundSprite()
{
	gMPCollisionGroundData->wallpaper = (void*)
	(
		(uintptr_t)lbRelocGetFileExternForceStatusBufferHeap
		(
			scTrainingMode_Files_BackgroundImageInfo[scTrainingMode_Files_BackgroundImageIDs[gBattleState->gr_kind]].file_id,
			(void*)((uintptr_t)gMPCollisionGroundData->wallpaper - (intptr_t)D_ovl7_801907B8[gBattleState->gr_kind])
		)
		+ scTrainingMode_Files_BackgroundImageInfo[scTrainingMode_Files_BackgroundImageIDs[gBattleState->gr_kind]].addr
	);
}

// 0x8018DE60
void scTrainingMode_InitMiscVars()
{
	gMPCollisionGroundData->fog_color
		= scTrainingMode_Files_BackgroundImageInfo[scTrainingMode_Files_BackgroundImageIDs[gBattleState->gr_kind]]
			  .fog_color;
	ifCommonPlayerMagnifyMakeInterface();
	gIFCommonPlayerInterface.is_magnify_display = TRUE;
}

// 0x8018DEDC
SObj* scTrainingMode_MakeStatDisplaySObj(GObj* interface_gobj, SCTrainingSprites* tms)
{
	SObj* sobj = lbCommonMakeSObjForGObj(interface_gobj, tms->sprite);
	sobj->pos.x = tms->pos.x;
	sobj->pos.y = tms->pos.y;
	return sobj;
}

// 0x8018DF30
void scTrainingMode_InitStatDisplayTextInterface()
{
	s32 i;
	GObj* interface_gobj = gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xB, 0x80000000);

	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);

	for (i = 0; i < 4; i++)
	{
		SObj* sobj = scTrainingMode_MakeStatDisplaySObj(interface_gobj, &gTrainingModeStruct.display_label_sprites[i]);

		sobj->sprite.red = 0xAF;
		sobj->sprite.green = 0xAE;
		sobj->sprite.blue = 0xDD;

		sobj->envcolor.r = 0;
		sobj->envcolor.g = 0;
		sobj->envcolor.b = 0;

		sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
	}
}

// 0x8018E014
void scTrainingMode_UpdateDamageDisplay(GObj* interface_gobj, s32 index)
{
	SObj* sobj = SObjGetStruct(interface_gobj);
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(D_ovl7_801907DC) + ARRAY_COUNT(D_ovl7_801907E4)) / 2; i++)
	{
		s32 modulo = index / D_ovl7_801907E4[i];
		index -= ((modulo)*D_ovl7_801907E4[i]);
		sobj->sprite = *gTrainingModeStruct.display_option_sprites[modulo];
		sobj->pos.x = (s32)(D_ovl7_801907DC[i] - (sobj->sprite.width * 0.5F));
		sobj = sobj->next;
	}
}

// 0x8018E138
void scTrainingMode_UpdateDamageInfo(GObj* interface_gobj)
{
	s32 damage = gBattleState->players[gTrainingModeStruct.opponent].combo_damage_foe;
	if (damage > 999)
		damage = 999;
	if (damage == 0)
	{
		if (gTrainingModeStruct.damage != 0)
		{
			gTrainingModeStruct.damage_reset_wait = 90;
			gTrainingModeStruct.damage = 0;
		}
		if (gTrainingModeStruct.damage_reset_wait == 0)
			gTrainingModeStruct.damage = 1;
	}
	if (damage != gTrainingModeStruct.damage)
	{
		scTrainingMode_UpdateDamageDisplay(interface_gobj, damage);
		gTrainingModeStruct.damage = damage;
	}
	lbCommonDrawSObjAttr(interface_gobj);
}

// 0x8018E1F8
void scTrainingMode_UpdateDamageResetWait(GObj* interface_gobj)
{
	if (gTrainingModeStruct.damage_reset_wait != 0)
		gTrainingModeStruct.damage_reset_wait -= 1;
}

// 0x8018E21C
void scTrainingMode_InitStatDisplayCharacterVars()
{
	s32 i;
	for (i = 0; i < 39; i++)
	{
		Sprite* sprite = gTrainingModeStruct.display_option_sprites[i];
		sprite->red = 0x6C;
		sprite->green = 0xFF;
		sprite->blue = 0x6C;
		sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;
	}
}

// 0x8018E300
void scTrainingMode_InitSObjColors(SObj* sobj)
{
	sobj->envcolor.r = 0x00;
	sobj->envcolor.g = 0x00;
	sobj->envcolor.b = 0x00;
}

// 0x8018E310
void scTrainingMode_MakeDamageDisplayInterface()
{
	GObj* interface_gobj;
	SObj* sobj;
	s32 i;

	gTrainingModeStruct.damage_display_gobj = interface_gobj
		= gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xBU, 0x80000000);
	gcAddGObjDisplay(interface_gobj, scTrainingMode_UpdateDamageInfo, 0x17U, 0x80000000, -1);
	gcAddGObjProcess(interface_gobj, scTrainingMode_UpdateDamageResetWait, 1, 4);

	for (i = 0; i < 3; i++)
	{
		sobj = lbCommonMakeSObjForGObj(interface_gobj, gTrainingModeStruct.display_option_sprites[0]);
		scTrainingMode_InitSObjColors(sobj);
		sobj->pos.y = 20.0F;
	}
	scTrainingMode_UpdateDamageDisplay(interface_gobj, 0);
	sobj = lbCommonMakeSObjForGObj(interface_gobj, gTrainingModeStruct.display_option_sprites[38]);
	scTrainingMode_InitSObjColors(sobj);

	sobj->pos.y = 20.0F;
	sobj->pos.x = 100.0F;
}

// 0x8018E424
void scTrainingMode_UpdateComboDisplay(GObj* interface_gobj, s32 index)
{
	SObj* sobj = SObjGetStruct(interface_gobj);
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(D_ovl7_801907E8) + ARRAY_COUNT(D_ovl7_801907EC)) / 2; i++)
	{
		s32 modulo = index / D_ovl7_801907EC[i];
		index -= (modulo * D_ovl7_801907EC[i]);
		sobj->sprite = *gTrainingModeStruct.display_option_sprites[modulo];
		sobj->pos.x = (s32)(D_ovl7_801907E8[i] - (sobj->sprite.width * 0.5F));
		sobj = sobj->next;
	}
}

// 0x8018E548
void scTrainingMode_UpdateComboResetWait(GObj* interface_gobj)
{
	if (gTrainingModeStruct.combo_reset_wait != 0)
		gTrainingModeStruct.combo_reset_wait--;
}

// 0x8018E56C
void scTrainingMode_UpdateComboInfo(s32 interface_gobj)
{
	s32 combo = gBattleState->players[gTrainingModeStruct.opponent].combo_count_foe;

	if (combo > 99)
		combo = 99;
	if (combo == 0)
	{
		if (gTrainingModeStruct.combo != 0)
		{
			gTrainingModeStruct.combo_reset_wait = 90;
			gTrainingModeStruct.combo = 0;
		}
		if (gTrainingModeStruct.combo_reset_wait == 0)
			gTrainingModeStruct.combo = 1;
	}
	if (combo != gTrainingModeStruct.combo)
	{
		scTrainingMode_UpdateComboDisplay(interface_gobj, combo);
		gTrainingModeStruct.combo = combo;
	}
	lbCommonDrawSObjAttr(interface_gobj);
}

// 0x8018E62C
void scTrainingMode_MakeComboDisplayInterface()
{
	GObj* interface_gobj;
	s32 i;

	gTrainingModeStruct.combo_display_gobj = interface_gobj
		= gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xBU, 0x80000000);

	gcAddGObjDisplay(interface_gobj, scTrainingMode_UpdateComboInfo, 0x17U, 0x80000000, -1);
	gcAddGObjProcess(interface_gobj, scTrainingMode_UpdateComboResetWait, 1, 4);

	for (i = 0; i < 2; i++)
	{
		SObj* sobj = lbCommonMakeSObjForGObj(interface_gobj, *gTrainingModeStruct.display_option_sprites);
		scTrainingMode_InitSObjColors(sobj);
		sobj->pos.y = 36.0F;
	}
	scTrainingMode_UpdateComboDisplay(interface_gobj, 0);
}

// 0x8018E714
void scTrainingMode_InitSpeedDisplaySprite()
{
	SObj* sobj = SObjGetStruct(gTrainingModeStruct.speed_display_gobj);
	sobj->sprite = *gTrainingModeStruct.display_option_sprites[gTrainingModeStruct.speed_menu_option + 27];
}

// 0x8018E774
void scTrainingMode_MakeSpeedDisplayInterface()
{
	GObj* interface_gobj;
	SObj* sobj;

	gTrainingModeStruct.speed_display_gobj = interface_gobj
		= gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xB, 0x80000000);
	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000U, -1);
	sobj = lbCommonMakeSObjForGObj(
		interface_gobj, gTrainingModeStruct.display_option_sprites[gTrainingModeStruct.speed_menu_option + 27]);

	sobj->pos.x = 276.0F;
	sobj->pos.y = 20.0F;

	scTrainingMode_InitSObjColors(sobj);
}

// 0x8018E810
void scTrainingMode_InitCPDisplaySprite()
{
	SObj* sobj = SObjGetStruct(gTrainingModeStruct.cp_display_gobj);
	sobj->sprite = *gTrainingModeStruct.display_option_sprites[gTrainingModeStruct.cp_menu_option + 31];
}

// 0x8018E870
void scTrainingMode_MakeCPDisplayInterface()
{
	GObj* interface_gobj;
	SObj* sobj;

	gTrainingModeStruct.cp_display_gobj = interface_gobj = gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xB, 0x80000000);
	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);
	sobj = lbCommonMakeSObjForGObj(interface_gobj,
								  gTrainingModeStruct.display_option_sprites[gTrainingModeStruct.cp_menu_option + 31]);

	sobj->pos.x = 191.0F;
	sobj->pos.y = 20.0F;

	scTrainingMode_InitSObjColors(sobj);
}

// 0x8018E90C
void scTrainingMode_InitItemDisplaySprite()
{
	SObj *root_sobj, *next_sobj;
	root_sobj = SObjGetStruct(gTrainingModeStruct.item_display_gobj)->next;
	next_sobj = root_sobj->next;
	root_sobj->sprite = *gTrainingModeStruct.display_option_sprites[gTrainingModeStruct.item_hold + 10];
	root_sobj->pos.x = (f32)(292 - root_sobj->sprite.width);
	next_sobj->pos.x = (f32)(292 - root_sobj->sprite.width) - next_sobj->sprite.width;
}

// 0x8018E9AC
void scTrainingMode_UpdateItemDisplay(s32 interface_gobj)
{
	FTStruct* fp = ftGetStruct(gBattleState->players[gSceneData.spgame_player].fighter_gobj);
	GObj* item_gobj = fp->item_hold;
	s32 item_id;

	if (item_gobj != NULL)
	{
		ITStruct* ip = itGetStruct(item_gobj);

		if (ip->it_kind <= nITKindContainerEnd)
		{
			while (TRUE)
			{
				syErrorPrintf("Error : wrong item! %d\n", ip->it_kind);
				scManagerRunPrintGObjStatus();
			}
		}
		item_id = (ip->it_kind <= nITKindCommonEnd) ? scGetTrainingModeItemKind(ip->it_kind) : 0;
	}
	else
		item_id = 0;

	if (gTrainingModeStruct.item_hold != item_id)
	{
		gTrainingModeStruct.item_hold = item_id;
		scTrainingMode_InitItemDisplaySprite();
	}
	lbCommonDrawSObjAttr(interface_gobj);
}

// 0x8018EA88
void scTrainingMode_MakeItemDisplayInterface()
{
	GObj* interface_gobj;
	SObj* sobj;

	gTrainingModeStruct.item_display_gobj = interface_gobj
		= gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xB, 0x80000000);
	gcAddGObjDisplay(interface_gobj, scTrainingMode_UpdateItemDisplay, 0x17, 0x80000000, -1);
	sobj = lbCommonMakeSObjForGObj(interface_gobj, gTrainingModeStruct.display_option_sprites[37]);

	sobj->pos.x = 292.0F;
	sobj->pos.y = 36.0F;
	scTrainingMode_InitSObjColors(sobj);

	sobj = lbCommonMakeSObjForGObj(interface_gobj, gTrainingModeStruct.display_option_sprites[0]);
	sobj->pos.y = 36.0F;
	scTrainingMode_InitSObjColors(sobj);

	sobj = lbCommonMakeSObjForGObj(interface_gobj, gTrainingModeStruct.display_option_sprites[36]);
	sobj->pos.y = 36.0F;
	scTrainingMode_InitSObjColors(sobj);
}

// 0x8018EB64
void scTrainingMode_InitStatDisplayAll()
{
	scTrainingMode_InitStatDisplayTextInterface();
	scTrainingMode_InitStatDisplayCharacterVars();
	scTrainingMode_MakeDamageDisplayInterface();
	scTrainingMode_MakeComboDisplayInterface();
	scTrainingMode_MakeSpeedDisplayInterface();
	scTrainingMode_MakeCPDisplayInterface();
	scTrainingMode_MakeItemDisplayInterface();
}

// 0x8018EBB4
void scTrainingMode_MakeMenuLabelsInterface()
{
	GObj* interface_gobj;
	s32 i;

	gTrainingModeStruct.menu_label_gobj = interface_gobj = gcMakeGObjSPAfter(0x3F8U, NULL, 0xE, 0x80000000);
	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);

	for (i = 0; i < 10; i++)
	{
		SObj* sobj = scTrainingMode_MakeStatDisplaySObj(interface_gobj, &gTrainingModeStruct.menu_label_sprites[i]);

		if (i < 6)
		{
			sobj->sprite.red = 0xF3;
			sobj->sprite.green = 0xA7;
			sobj->sprite.blue = 0x6A;

			sobj->envcolor.r = 0x00;
			sobj->envcolor.g = 0x00;
			sobj->envcolor.b = 0x00;
		}
		sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
	}
}

// 0x8018ECA4
void scTrainingMode_InitMenuOptionSpriteAttrs()
{
	s32 i;
	for (i = 0; i < 31; i++)
		gTrainingModeStruct.menu_option_sprites[i]->attr = SP_TEXSHUF | SP_TRANSPARENT;
}

// 0x8018ED2C
void scTrainingMode_RenderMainMenu(GObj* interface_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x00, 0x64, 0xFF, 0x64);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 68, 47, 253, 198);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
}

// 0x8018EE10
void scTrainingMode_MakeMainMenuInterface()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xE, 0x80000000), scTrainingMode_RenderMainMenu,
						0x16, 0x80000000, -1);
}

// 0x8018EE5C
void scTrainingMode_InitCPOptionTextColors()
{
	s32 i;
	for (i = nSCTrainingMenuOptionSpriteCPStart; i <= nSCTrainingMenuOptionSpriteCPEnd; i++)
	{
		Sprite* sprite = gTrainingModeStruct.menu_option_sprites[i];
		sprite->red = 0xFF;
		sprite->green = 0xFF;
		sprite->blue = 0xFF;
	}
}

// 0x8018EEE8
void scTrainingMode_InitCPOptionSprite()
{
	SObj* sobj = SObjGetStruct(gTrainingModeStruct.cp_option_gobj);
	sobj->sprite = *gTrainingModeStruct
						.menu_option_sprites[gTrainingModeStruct.cp_menu_option + nSCTrainingMenuOptionSpriteCPStart];
	sobj->pos.x = 191 - (sobj->sprite.width / 2);
}

// 0x8018EF78
void scTrainingMode_MakeCPOptionInterface()
{
	GObj* interface_gobj;
	SObj* sobj;

	gTrainingModeStruct.cp_option_gobj = interface_gobj = gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xE, 0x80000000);

	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);

	sobj = lbCommonMakeSObjForGObj(interface_gobj,
								  gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.cp_menu_option
																		  + nSCTrainingMenuOptionSpriteCPStart]);

	sobj->pos.x = 191 - (sobj->sprite.width / 2);
	sobj->pos.y = 65.0F;

	sobj->envcolor.r = 0x4A;
	sobj->envcolor.g = 0x2E;
	sobj->envcolor.b = 0x60;
}

// 0x8018F040
void scTrainingMode_InitItemOptionSprite()
{
	SObj* sobj = SObjGetStruct(gTrainingModeStruct.item_option_gobj);

	sobj->sprite
		= *gTrainingModeStruct
			   .menu_option_sprites[gTrainingModeStruct.item_menu_option + nSCTrainingMenuOptionSpriteItemStart];

	sobj->pos.x = 191 - (sobj->sprite.width / 2);
	sobj->pos.y = (gTrainingModeStruct.item_menu_option == nSCTrainingMenuItemMotionSensorBomb) ? 83.0F : 85.0F;
}

// 0x8018F0FC
void scTrainingMode_InitItemOptionTextColors()
{
	s32 i;
	for (i = nSCTrainingMenuOptionSpriteItemStart; i <= nSCTrainingMenuOptionSpriteItemEnd; i++)
	{
		Sprite* sprite = gTrainingModeStruct.menu_option_sprites[i];
		sprite->red = 0xFF;
		sprite->green = 0xFF;
		sprite->blue = 0xFF;
	}
}

// 0x8018F194
void scTrainingMode_MakeItemOptionInterface()
{
	GObj* interface_gobj;
	SObj* sobj;

	gTrainingModeStruct.item_option_gobj = interface_gobj
		= gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xE, 0x80000000);

	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);

	sobj = lbCommonMakeSObjForGObj(interface_gobj,
								  gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.item_menu_option
																		  + nSCTrainingMenuOptionSpriteItemStart]);
	sobj->pos.x = 191 - (sobj->sprite.width / 2);

	scTrainingMode_InitItemOptionSprite();

	sobj->envcolor.r = 0x4A;
	sobj->envcolor.g = 0x2E;
	sobj->envcolor.b = 0x60;
}

// 0x8018F264
void scTrainingMode_InitSpeedOptionTextColors()
{
	s32 i;
	for (i = nSCTrainingMenuOptionSpriteSpeedStart; i <= nSCTrainingMenuOptionSpriteSpeedEnd; i++)
	{
		Sprite* sprite = gTrainingModeStruct.menu_option_sprites[i];
		sprite->red = 0xFF;
		sprite->green = 0xFF;
		sprite->blue = 0xFF;
	}
}

// 0x8018F2C4
void scTrainingMode_InitSpeedOptionSprite()
{
	SObj* sobj = SObjGetStruct(gTrainingModeStruct.speed_option_gobj);

	sobj->sprite
		= *gTrainingModeStruct
			   .menu_option_sprites[gTrainingModeStruct.speed_menu_option + nSCTrainingMenuOptionSpriteSpeedStart];

	sobj->pos.x = 191 - (sobj->sprite.width / 2);
}

// 0x8018F354
void scTrainingMode_MakeSpeedOptionInterface()
{
	GObj* interface_gobj;
	SObj* sobj;

	gTrainingModeStruct.speed_option_gobj = interface_gobj
		= gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xE, 0x80000000);

	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);

	sobj = lbCommonMakeSObjForGObj(interface_gobj,
								  gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.speed_menu_option
																		  + nSCTrainingMenuOptionSpriteSpeedStart]);

	sobj->pos.x = 191 - (sobj->sprite.width / 2);
	sobj->pos.y = 105.0F;

	sobj->envcolor.r = 0x4A;
	sobj->envcolor.g = 0x2E;
	sobj->envcolor.b = 0x60;
}

// 0x8018F41C
void func_ovl7_8018F41C() {}

// 0x8018F424
void scTrainingMode_InitViewOptionSprite()
{
	SObj* sobj = SObjGetStruct(gTrainingModeStruct.view_option_gobj);
	sobj->sprite
		= *gTrainingModeStruct
			   .menu_option_sprites[gTrainingModeStruct.view_menu_option + nSCTrainingMenuOptionSpriteViewStart];
	sobj->pos.x = 191 - (sobj->sprite.width / 2);
}

// 0x8018F4B4
void scTrainingMode_UpdateMagnifyWait(GObj* interface_gobj)
{
	if (gTrainingModeStruct.magnify_wait != 0)
	{
		gTrainingModeStruct.magnify_wait--;
		if (gTrainingModeStruct.magnify_wait == 0)
			gIFCommonPlayerInterface.is_magnify_display = TRUE;
	}
}

// 0x8018F4EC
void scTrainingMode_MakeViewOptionInterface()
{
	GObj* interface_gobj;
	SObj* sobj;

	gTrainingModeStruct.view_option_gobj = interface_gobj
		= gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xE, 0x80000000);

	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);

	sobj = lbCommonMakeSObjForGObj(interface_gobj,
								  gTrainingModeStruct.menu_option_sprites[gTrainingModeStruct.view_menu_option
																		  + nSCTrainingMenuOptionSpriteViewStart]);

	sobj->pos.x = 191 - (sobj->sprite.width / 2);
	sobj->pos.y = 125.0F;

	sobj->envcolor.r = 0x4A;
	sobj->envcolor.g = 0x2E;
	sobj->envcolor.b = 0x60;

	gcAddGObjProcess(interface_gobj, scTrainingMode_UpdateMagnifyWait, 1, 4);
}

// 0x8018F5CC
void scTrainingMode_CopyHScrollOptionSObjs()
{
	gTrainingModeStruct.hscroll_option_sobj[0] = SObjGetStruct(gTrainingModeStruct.cp_option_gobj);
	gTrainingModeStruct.hscroll_option_sobj[1] = SObjGetStruct(gTrainingModeStruct.item_option_gobj);
	gTrainingModeStruct.hscroll_option_sobj[2] = SObjGetStruct(gTrainingModeStruct.speed_option_gobj);
	gTrainingModeStruct.hscroll_option_sobj[3] = SObjGetStruct(gTrainingModeStruct.view_option_gobj);
}

// 0x8018F608
void scTrainingMode_InitOptionArrowColors(SObj* sobj)
{
	sobj->sprite.red = 0xF3;
	sobj->sprite.green = 0x10;
	sobj->sprite.blue = 0xE;

	sobj->envcolor.r = 0x00;
	sobj->envcolor.g = 0x00;
	sobj->envcolor.b = 0x00;
}

// 0x8018F630
void scTrainingMode_UpdateOptionArrows()
{
	SObj* root_sobj = SObjGetStruct(gTrainingModeStruct.arrow_option_gobj); // Left arrow
	SObj* next_sobj = root_sobj->next;										// Right arrow

	if (gTrainingModeStruct.main_menu_option <= nSCTrainingMenuMainScrollEnd)
	{
		SObj* option_sobj = gTrainingModeStruct.hscroll_option_sobj[gTrainingModeStruct.main_menu_option];

		root_sobj->pos.x = 137.0F;
		next_sobj->pos.x = 237.0F;

		if ((gTrainingModeStruct.main_menu_option == nSCTrainingMenuMainItem)
			&& (gTrainingModeStruct.item_menu_option == nSCTrainingMenuItemMotionSensorBomb))
			root_sobj->pos.y = next_sobj->pos.y = (s32)(option_sobj->pos.y + 5.0F);
		else
			root_sobj->pos.y = next_sobj->pos.y = (s32)(option_sobj->pos.y + 3.0F);

		root_sobj->sprite.attr &= ~SP_HIDDEN;
		next_sobj->sprite.attr &= ~SP_HIDDEN;
	}
	else
	{
		root_sobj->sprite.attr |= SP_HIDDEN;
		next_sobj->sprite.attr |= SP_HIDDEN;
	}
}

// 0x8018F730
void scTrainingMode_MakeOptionArrowInterface()
{
	GObj* interface_gobj;

	gTrainingModeStruct.arrow_option_gobj = interface_gobj
		= gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xE, 0x80000000);
	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);
	scTrainingMode_InitOptionArrowColors(lbCommonMakeSObjForGObj(
		interface_gobj, gTrainingModeStruct.menu_option_sprites[nSCTrainingMenuOptionSpriteLeftArrow]));
	scTrainingMode_InitOptionArrowColors(lbCommonMakeSObjForGObj(
		interface_gobj, gTrainingModeStruct.menu_option_sprites[nSCTrainingMenuOptionSpriteRightArrow]));

	scTrainingMode_UpdateOptionArrows();
}

// 0x8018F7C8
SObj* func_ovl7_8018F7C8(GObj* interface_gobj, SCTrainingSprites* tms)
{
	SObj* sobj = lbCommonMakeSObjForGObj(interface_gobj, tms->sprite);
	sobj->pos.x = tms->pos.x;
	return sobj;
}

// 0x8018F804
void func_ovl7_8018F804() // Unused?
{
	s32 i;
	for (i = 0; i < 6; i++)
		gTrainingModeStruct.unk_trainmenu_0x34[i].sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;
}

// 0x8018F874
void func_ovl7_8018F874() // Unused?
{
	SObj* sobj = SObjGetStruct(gTrainingModeStruct.unk_trainmenu_0x7C);
	sobj->sprite = *gTrainingModeStruct.unk_trainmenu_0x34[gTrainingModeStruct.main_menu_option].sprite;
	sobj->pos.x = gTrainingModeStruct.unk_trainmenu_0x34[gTrainingModeStruct.main_menu_option].pos.x;
}

// 0x8018F8FC
void func_ovl7_8018F8FC() // Unused?
{
	GObj* interface_gobj;

	gTrainingModeStruct.unk_trainmenu_0x7C = interface_gobj
		= gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xE, 0x80000000);
	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);
	func_ovl7_8018F7C8(interface_gobj, &gTrainingModeStruct.unk_trainmenu_0x34[gTrainingModeStruct.main_menu_option])
		->pos.y
		= 182.0F;
}

// 0x8018F984
void func_ovl7_8018F984() // Unused?
{
	s32 i;
	for (i = 0; i < 28; i++)
		gTrainingModeStruct.unk_trainmenu_0x38[i].sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;
}

// 0x8018F9E8
s32 scTrainingMode_GetMenuOptionSpriteID()
{
	switch (gTrainingModeStruct.main_menu_option)
	{
	case nSCTrainingMenuMainCP: return gTrainingModeStruct.cp_menu_option + nSCTrainingMenuOptionSpriteCPStart;

	case nSCTrainingMenuMainItem: return gTrainingModeStruct.item_menu_option + nSCTrainingMenuOptionSpriteItemStart;

	case nSCTrainingMenuMainSpeed:
		return gTrainingModeStruct.speed_menu_option + nSCTrainingMenuOptionSpriteSpeedStart;

	case nSCTrainingMenuMainView: return gTrainingModeStruct.view_menu_option + nSCTrainingMenuOptionSpriteViewStart;

	case nSCTrainingMenuMainReset: return nSCTrainingMenuOptionSpriteEnumMax;

	case nSCTrainingMenuMainExit: return nSCTrainingMenuOptionSpriteEnumMax;
	}
}

// 0x8018FA54
void func_ovl7_8018FA54() // Unused but referenced?
{
	SObj* sobj = SObjGetStruct(gTrainingModeStruct.combo0);
	s32 sprite_id = scTrainingMode_GetMenuOptionSpriteID();

	if (sprite_id == nSCTrainingMenuOptionSpriteEnumMax)
		sobj->sprite.attr |= SP_HIDDEN;
	else
	{
		sobj->sprite = *gTrainingModeStruct.unk_trainmenu_0x38[sprite_id].sprite;
		sobj->pos.x = gTrainingModeStruct.unk_trainmenu_0x38[sprite_id].pos.x;
		sobj->pos.y = (sprite_id == nSCTrainingMenuOptionSpriteItemMotionSensorBomb) ? 178.0F : 182.0F;
		sobj->sprite.attr &= ~SP_HIDDEN;
	}
}

// 0x8018FB40
void func_ovl7_8018FB40() // Unused?
{
	GObj* interface_gobj;

	gTrainingModeStruct.combo0 = interface_gobj = gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xE, 0x80000000);
	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);
	func_ovl7_8018F7C8(interface_gobj, gTrainingModeStruct.unk_trainmenu_0x38);
	func_ovl7_8018FA54();
}

// 0x8018FBB0
void scTrainingMode_UpdateCursorPosition()
{
	SObj* cursor_sobj = SObjGetStruct(gTrainingModeStruct.cursor_gobj);
	SObj* text_sobj = gTrainingModeStruct.vscroll_option_sobj[gTrainingModeStruct.main_menu_option][0];
	cursor_sobj->pos.y = (s32)(text_sobj->pos.y - 1.0F);
}

// 0x8018FC00
void scTrainingMode_MakeMenuCursorInterface()
{
	GObj* interface_gobj;
	SObj* target_sprite;

	gTrainingModeStruct.cursor_gobj = interface_gobj = gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xE, 0x80000000);
	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);
	target_sprite = lbCommonMakeSObjForGObj(interface_gobj,
										   gTrainingModeStruct.menu_option_sprites[nSCTrainingMenuOptionSpriteCursor]);
	target_sprite->pos.x = 71.0F;

	scTrainingMode_UpdateCursorPosition();
}

// 0x8018FC7C
void scTrainingMode_CopyVScrollOptionSObjs()
{
	SObj* arrow_sobj = SObjGetStruct(gTrainingModeStruct.arrow_option_gobj)->next;

	gTrainingModeStruct.vscroll_option_sobj[0][0] = SObjGetStruct(gTrainingModeStruct.menu_label_gobj);
	gTrainingModeStruct.vscroll_option_sobj[0][1] = arrow_sobj;

	gTrainingModeStruct.vscroll_option_sobj[1][0] = gTrainingModeStruct.vscroll_option_sobj[0][0]->next;
	gTrainingModeStruct.vscroll_option_sobj[1][1] = arrow_sobj;

	gTrainingModeStruct.vscroll_option_sobj[2][0] = gTrainingModeStruct.vscroll_option_sobj[1][0]->next;
	gTrainingModeStruct.vscroll_option_sobj[2][1] = arrow_sobj;

	gTrainingModeStruct.vscroll_option_sobj[3][0] = gTrainingModeStruct.vscroll_option_sobj[2][0]->next;
	gTrainingModeStruct.vscroll_option_sobj[3][1] = arrow_sobj;

	gTrainingModeStruct.vscroll_option_sobj[4][0] = gTrainingModeStruct.vscroll_option_sobj[4][1]
		= gTrainingModeStruct.vscroll_option_sobj[3][0]->next;
	gTrainingModeStruct.vscroll_option_sobj[5][0] = gTrainingModeStruct.vscroll_option_sobj[5][1]
		= gTrainingModeStruct.vscroll_option_sobj[4][0]->next;
}

// 0x8018FCE0
void scTrainingMode_RenderCursorUnderline(GObj* interface_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_FILL);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gSYTaskmanDLHeads[0]++,
					syVideoGetFillColor(GPACK_RGBA8888(0xFF, 0x00, 0x00, 0xFF)));
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, gTrainingModeStruct.cursor_ulx, gTrainingModeStruct.cursor_uly,
					 gTrainingModeStruct.cursor_lrx, gTrainingModeStruct.cursor_lry);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018FE40
void scTrainingMode_UpdateCursorUnderline()
{
	SObj* text_sobj = gTrainingModeStruct.vscroll_option_sobj[gTrainingModeStruct.main_menu_option][0];
	SObj* arrow_sobj = gTrainingModeStruct.vscroll_option_sobj[gTrainingModeStruct.main_menu_option][1];
	s32 offset;

	gTrainingModeStruct.cursor_ulx = text_sobj->pos.x - 13.0F;

	offset = ((gTrainingModeStruct.main_menu_option == nSCTrainingMenuMainReset)
			  || (gTrainingModeStruct.main_menu_option == nSCTrainingMenuMainExit))
				 ? 2
				 : -2;

	gTrainingModeStruct.cursor_lrx = offset + (arrow_sobj->pos.x + arrow_sobj->sprite.width);
	gTrainingModeStruct.cursor_uly = text_sobj->pos.y + text_sobj->sprite.height + (-1.0F);
	gTrainingModeStruct.cursor_lry = gTrainingModeStruct.cursor_uly + 1;
}

// 0x80190070
void scTrainingMode_MakeCursorUnderlineInterface()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(nGCCommonKindInterface, NULL, 0xE, 0x80000000),
						scTrainingMode_RenderCursorUnderline, 0x16, 0x80000000, -1);
	scTrainingMode_UpdateCursorUnderline();
}

// 0x801900C4
void scTrainingMode_InitTrainingMenuAll()
{
	scTrainingMode_MakeMenuLabelsInterface();
	scTrainingMode_InitMenuOptionSpriteAttrs();
	scTrainingMode_MakeMainMenuInterface();
	scTrainingMode_InitCPOptionTextColors();
	scTrainingMode_MakeCPOptionInterface();
	scTrainingMode_InitItemOptionTextColors();
	scTrainingMode_MakeItemOptionInterface();
	scTrainingMode_InitSpeedOptionTextColors();
	scTrainingMode_MakeSpeedOptionInterface();
	func_ovl7_8018F41C();
	scTrainingMode_MakeViewOptionInterface();
	scTrainingMode_CopyHScrollOptionSObjs();
	scTrainingMode_MakeOptionArrowInterface();
	scTrainingMode_CopyVScrollOptionSObjs();
	scTrainingMode_MakeMenuCursorInterface();
	scTrainingMode_MakeCursorUnderlineInterface();
	scTrainingMode_SetPauseGObjRenderFlags(GOBJ_FLAG_HIDDEN);
}

// 0x80190164
void scTrainingMode_SetPlayDefaultMusicID()
{
	gMPCollisionBGMDefault = 0x2A;
	auPlaySong(0, gMPCollisionBGMDefault);
	gMPCollisionBGMCurrent = gMPCollisionBGMDefault;
}

// 0x801901A0
void scTrainingMode_SetGameStatusGo()
{
	GObj* fighter_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];

	while (fighter_gobj != NULL)
	{
		ftParamUnlockPlayerControl(fighter_gobj);
		fighter_gobj = fighter_gobj->link_next;
	}
	gBattleState->game_status = nSCBattleGameStatusGo;
}

// 0x801901F4
void scTrainingMode_UpdateOpponentBehavior()
{
	FTStruct* fp = ftGetStruct(gBattleState->players[gTrainingModeStruct.opponent].fighter_gobj);

	if (fp->pl_kind == nFTPlayerKindCom)
	{
		fp->computer.behavior = scTrainingMode_CPOpponent_BehaviorKind[gTrainingModeStruct.cp_menu_option];
		fp->computer.trait = 0xA;
	}
}

// 0x80190260
void scTrainingMode_InitTrainingMode()
{
	GObj* fighter_gobj;
	FTCreateDesc player_spawn;
	s32 player;
	syColorRGBA color;

	func_ovl7_8018DA98();
	scTrainingMode_LoadFiles();
	scTrainingMode_LoadSprites();
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 1, 0xFF);
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaperMakeDecideKind();
	func_ovl2_8010DB00();
	itManagerInitItems();
	grCommonSetupInitAll();
	ftManagerAllocFighter(2, GMCOMMON_PLAYERS_MAX);
	wpManagerAllocWeapons();
	efManagerInitEffects();
	ifScreenFlashMakeInterface(0xFF);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		player_spawn = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[player].pl_kind == nFTPlayerKindNot)
			continue;

		ftManagerSetupFilesAllKind(gBattleState->players[player].ft_kind);
		player_spawn.ft_kind = gBattleState->players[player].ft_kind;
		mpCollisionGetPlayerMapObjPosition(player, &player_spawn.pos);
		player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? nGMFacingL : nGMFacingR;
		player_spawn.team = gBattleState->players[player].team;
		player_spawn.player = player;
		player_spawn.detail
			= ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;
		player_spawn.costume = gBattleState->players[player].costume;
		player_spawn.shade = gBattleState->players[player].shade;
		player_spawn.handicap = gBattleState->players[player].handicap;
		player_spawn.cp_level = gBattleState->players[player].level;
		player_spawn.stock_count = gBattleState->stock_setting;
		player_spawn.damage = 0;
		player_spawn.pl_kind = gBattleState->players[player].pl_kind;
		player_spawn.controller = &gPlayerControllers[player];
		player_spawn.figatree_heap = ftManagerAllocFigatreeHeapKind(gBattleState->players[player].ft_kind);
		player_spawn.is_skip_entry = TRUE;
		fighter_gobj = ftManagerMakeFighter(&player_spawn);
		ftParamInitPlayerBattleStats(player, fighter_gobj);
	}
	scTrainingMode_UpdateOpponentBehavior();
	ftManagerSetupFilesPlayablesAll();
	scTrainingMode_SetGameStatusGo();
	func_ovl2_8010E2D4();
	ifCommonPlayerArrowsInitInterface();
	func_ovl2_8010E1A4();
	scTrainingMode_InitMiscVars();
	func_ovl2_8010DDC4();
	func_ovl2_8010E374();
	func_ovl2_8010E498();
	ifCommonPlayerTagMakeInterface();
	ifCommonPlayerDamageSetDigitPositions();
	ifCommonPlayerDamageInitInterface();
	ifCommonPlayerDamageSetShowInterface();
	ifCommonPlayerStockInitInterface();
	scTrainingMode_InitStatDisplayAll();
	scTrainingMode_InitTrainingMenuAll();
	scTrainingMode_SetPlayDefaultMusicID();
	func_800266A0_272A0();
	func_800269C0_275C0(nSYAudioVoicePublicityExcited);

	color = dSCTrainingFadeColor;

	lbFadeMakeActor(nGCCommonKindTransition, nGCCommonLinkIDTransition, 10, &color, 12, TRUE, NULL);
}

// 0x801905A8
void scTrainingMode_SetGeometryRenderLights(Gfx** display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x801905F4
void scManager_TrainingMode_InitScene()
{
	D_ovl7_80190870.zbuffer = syVideoGetZBuffer(6400);

	syVideoInit(&D_ovl7_80190870);

	D_ovl7_8019088C.arena_size = (size_t) ((uintptr_t)&lOverlay7ArenaHi - (uintptr_t)&lOverlay7ArenaLo);
	D_ovl7_8019088C.func_start = scTrainingMode_InitTrainingMode;

	do
	{
		func_800A2698(&D_ovl7_8019088C);
		gmRumbleInitPlayers();
	} while (gTrainingModeStruct.exit_or_reset != 0);

	auStopBGM();

	while (auIsBGMPlaying(0) != FALSE)
		continue;
	auSetBGMVolume(0, 0x7800);

	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = 0x12;
}

// 0x801906D0
void scTrainingMode_LoadFiles()
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = gOverlay7StatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(gOverlay7StatusBuffer);
	rl_setup.force_status_buffer = gOverlay7ForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(gOverlay7ForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs), gGMCommonFiles,
						 syTaskmanMalloc(lbRelocGetAllocSize(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs)), 0x10));
}
