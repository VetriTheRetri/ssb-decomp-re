#include <sys/develop.h>
#include <ft/fighter.h>
#include <gm/gmsound.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>

#include "debug.h"

// Externs
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay14ArenaLo;  // 80133130
extern intptr_t lOverlay14ArenaHi;  // 80369240
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
extern void func_8000B1C4();
extern ftCreateDesc dFTManagerDefaultFighterDesc;
extern sb32 D_ovl9_80371420; // isMenuShown
extern void func_ovl9_80369D78(s32, s32, s32, void*, s32);
extern func_ovl9_80369EC0();

// Forward declarations
void mnDebugBattleStartBattle();

// Data

// 80132690
s32 gMNDebugBattleExitInterrupt = 0;

// 80132694
s8 gMNDebugBattleMenuValueScene = 0; // scene

// 80132698
s32 gMNDebugBattleCurrentAnimation = 0x0002000A;

// 8013269C
char* dMNDebugBattleFighterKindStrings[27] = {
	" Mario",
	" Fox",
	" Donkey",
	" Samus",
	" Luigi",
	" Link",
	" Yoshi",
	" Captain",
	" Kirby",
	" Pikacyu",
	" Purin",
	" Nes",
	" Boss",
	" Metal",
	" NMario",
	" NFox",
	" NDonkey",
	" NSamus",
	" NLuigi",
	" NLink",
	" NYoshi",
	" NCaptain",
	" NKirby",
	" NPikacyu",
	" NPurin",
	" NNes",
	" GDonkey"
};

// 80132708
char* dMNDebugBattlePlayerKindStrings[6] = {
	"Man",
	"Com",
	"Not",
	"Demo",
	"Key",
	"GameKey"
};

// 80132720
char* dMNDebugBattleSceneStrings[6] = {
	"VS mode",
	"1P mode",
	"Staffroll",
	"Explain",
	"AutoDemo",
	"Congra"
};

// 80132738
char* dMNDebugBattleStageStrings[18] = {
	"S:Link",
	"S:Yoshi",
	"S:Fox",
	"S:Bonus1",
	"S:MarioBros",
	"S:Pikacyu",
	"S:GDonkey",
	"S:Bonus2",
	"S:Kirby",
	"S:Samus",
	"S:Metal",
	"S:Bonus3",
	"S:Zako",
	"S:Boss",
	"S:Luigi",
	"S:Nes",
	"S:Purin",
	"S:Captain"
};

// 80132780
dbMenuItem dMNDebugBattleMenuItems[15] = {
	{ dbMenuItemKindStringByte,  mnDebugBattleStartBattle, (char*) dMNDebugBattleSceneStrings,       (void*) &gMNDebugBattleMenuValueScene,            0.0F, 5.0F,  0 },
	{ dbMenuItemKindNumericByte, 0,                        (char*) "BattleTime %3d",                 (void*) &gTransferBattleState.time_limit,         1.0F, 60.0F, 0 },
	{ dbMenuItemKindStringByte,  0,                        (char*) dMNDebugBattleStageStrings,       (void*) &gSceneData.spgame_stage,                 0.0F, 17.0F, 0 },
	{ dbMenuItemKindStringByte,  0,                        (char*) dMNDebugBattlePlayerKindStrings,  (void*) &gTransferBattleState.players[0].pl_kind, 0.0F, 5.0F,  0 },
	{ dbMenuItemKindStringByte,  0,                        (char*) dMNDebugBattleFighterKindStrings, (void*) &gTransferBattleState.players[0].ft_kind, 0.0F, 26.0F, 0 },
	{ dbMenuItemKindNumericByte, 0,                        (char*) "  %1d",                          (void*) &gTransferBattleState.players[0].costume, 0.0F, 10.0F, 0 },
	{ dbMenuItemKindStringByte,  0,                        (char*) dMNDebugBattlePlayerKindStrings,  (void*) &gTransferBattleState.players[1].pl_kind, 0.0F, 5.0F,  0 },
	{ dbMenuItemKindStringByte,  0,                        (char*) dMNDebugBattleFighterKindStrings, (void*) &gTransferBattleState.players[1].ft_kind, 0.0F, 26.0F, 0 },
	{ dbMenuItemKindNumericByte, 0,                        (char*) "  %1d",                          (void*) &gTransferBattleState.players[1].costume, 0.0F, 10.0F, 0 },
	{ dbMenuItemKindStringByte,  0,                        (char*) dMNDebugBattlePlayerKindStrings,  (void*) &gTransferBattleState.players[2].pl_kind, 0.0F, 5.0F,  0 },
	{ dbMenuItemKindStringByte,  0,                        (char*) dMNDebugBattleFighterKindStrings, (void*) &gTransferBattleState.players[2].ft_kind, 0.0F, 26.0F, 0 },
	{ dbMenuItemKindNumericByte, 0,                        (char*) "  %1d",                          (void*) &gTransferBattleState.players[2].costume, 0.0F, 10.0F, 0 },
	{ dbMenuItemKindStringByte,  0,                        (char*) dMNDebugBattlePlayerKindStrings,  (void*) &gTransferBattleState.players[3].pl_kind, 0.0F, 5.0F,  0 },
	{ dbMenuItemKindStringByte,  0,                        (char*) dMNDebugBattleFighterKindStrings, (void*) &gTransferBattleState.players[3].ft_kind, 0.0F, 26.0F, 0 },
	{ dbMenuItemKindNumericByte, 0,                        (char*) "  %1d",                          (void*) &gTransferBattleState.players[3].costume, 0.0F, 10.0F, 0 }
};

// 80132924
s32 dMNDebugBattleInitialFtKinds[4] = { nFTKindMario, nFTKindDonkey, nFTKindSamus, nFTKindFox };

// 80132934
syDisplaySetup D_ovl14_80132934 = { 0x80392a00, 0x803b6900, 0x803da800, 0x00000000, 0x00000140, 0x000000f0, 0x00016a99 };

// 80132950
scRuntimeInfo D_ovl14_80132950 = {

	0x00000000, 0x8000a5e4, 0x8000a340, 0x80133130,
	0x00000000, 0x00000001, 0x00000002, 0x00004000,
	0x00002000, 0x00000000, 0x00000000, 0x00008000,
	0x00020000, 0x0000c000, 0x80131b00, 0x80004310,
	0x00000008, 0x00000600, 0x00000008, 0x00000000,
	0x00000020, 0x00000020, 0x00000088, 0x00000100,
	0x800d5cac, 0x00000000, 0x00000400, 0x000000a0,
	0x00000100, 0x00000088, 0x00000007, 0x0000006c,
	0x00000008, 0x00000090, 0x8013239c
};

// BSS

// 80132C20
u32 D_ovl14_80132C20[2];

// 80132C28
u32 D_ovl14_80132C28[150];

// 80132E80
u32 D_ovl14_80132E80[150];

// 801330D8
u32 D_ovl14_801330D8[7];

// 801330F8
u32 D_ovl14_801330F8[6];

// 80133110
dbFighter gMNDebugBattleFighters[4];

// 80131B00
void mnDebugBattleSetupDisplaylist(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftRenderLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 80131B58
void mnDebugBattleStartBattle()
{
	s32 i;

	gMNDebugBattleExitInterrupt = 1;
	gTransferBattleState.pl_count = gTransferBattleState.cp_count = 0;

	for (i = 0; i < 4; i++)
	{
		switch (gTransferBattleState.players[i].pl_kind)
		{
			case nFTPlayerKindMan:
				gTransferBattleState.pl_count++;
				break;
			case nFTPlayerKindCom:
				gTransferBattleState.cp_count++;
				break;
		}

		gTransferBattleState.players[i].team = i;
		gTransferBattleState.players[i].player_color = i;
		gTransferBattleState.players[i].tag_kind = i;
	}

	gTransferBattleState.is_team_battle = FALSE;
}

// 80131CD8
s32 mnDebugBattleSetShade(s32 port_id)
{
	s32 i, shade;

	for (i = shade = 0; i != ARRAY_COUNT(gTransferBattleState.players); i++)
	{
	loop:
		if (i == port_id)
			continue;

		if
		(
			(gTransferBattleState.players[i].ft_kind == gTransferBattleState.players[port_id].ft_kind) &&
			(gTransferBattleState.players[i].costume == gTransferBattleState.players[port_id].costume) &&
			(gTransferBattleState.players[i].shade == shade)
		)
		{
			shade++, i = 0;
			goto loop;
		}
	}
	gTransferBattleState.players[port_id].shade = shade;
	return shade;
}

// 80131D74
s32 mnDebugBattleGetUnlockedCharsCountForMask(u16 mask)
{
	s32 i;
	s32 unlocked_chars;

	for (i = 0, unlocked_chars = 0; i < 16; i++, mask = mask >> 1)
	{
		if (mask & 1)
			unlocked_chars++;
	}

	return unlocked_chars;
}

// 80131DEC
s32 mnDebugBattleGetMissingFtKind(u16 mask_1, u16 mask_2, s32 missing_index)
{
	s32 ft_kind = -1;
	missing_index = missing_index + 1;

	do
	{
		ft_kind += 1;

		if ((mask_1 & gmSaveChrMask(ft_kind)) && !(mask_2 & gmSaveChrMask(ft_kind)))
			missing_index -= 1;
	}
	while (missing_index != 0);

	return ft_kind;
}

// 80131E38
void mnDebugBattleSetDemoFtKinds()
{
	s32 non_recently_demoed_count;
	u16 unlocked_mask = (gSaveData.character_mask | SCBACKUP_CHARACTER_MASK_STARTER);

	if (unlocked_mask == gSceneData.recently_demoed_mask)
		gSceneData.recently_demoed_mask = 0;

	non_recently_demoed_count = mnDebugBattleGetUnlockedCharsCountForMask(unlocked_mask) - mnDebugBattleGetUnlockedCharsCountForMask(gSceneData.recently_demoed_mask);

	gSceneData.demo_ft_kind[0] = mnDebugBattleGetMissingFtKind(unlocked_mask, gSceneData.recently_demoed_mask, mtTrigGetRandomIntRange(non_recently_demoed_count));

	if (gSceneData.recently_demoed_mask == 0)
		gSceneData.first_demo_ft_kind = gSceneData.demo_ft_kind[0];

	gSceneData.recently_demoed_mask |= gmSaveChrMask(gSceneData.demo_ft_kind[0]);

	non_recently_demoed_count = mnDebugBattleGetUnlockedCharsCountForMask(unlocked_mask) - mnDebugBattleGetUnlockedCharsCountForMask(gSceneData.recently_demoed_mask);

	if (non_recently_demoed_count == 0)
		gSceneData.demo_ft_kind[1] = gSceneData.first_demo_ft_kind;
	else
	{
		gSceneData.demo_ft_kind[1] = mnDebugBattleGetMissingFtKind(unlocked_mask, gSceneData.recently_demoed_mask, mtTrigGetRandomIntRange(non_recently_demoed_count));
		gSceneData.recently_demoed_mask |= gmSaveChrMask(gSceneData.demo_ft_kind[1]);
	}
}

// 80131F3C
void mnDebugBattleMain(GObj* arg0)
{
	void *anim_heap;
	s32 i;
	GObj* fighter_gobj;
	ftStruct *fp;

	if (gSysController.button_tap & START_BUTTON)
	{
		if (D_ovl9_80371420 != FALSE)
			mnDebugBattleStartBattle();
		else
			func_ovl9_80369D78(0x1E, 0x14, 0x55, &dMNDebugBattleMenuItems, 0xF);
	}

	for (i = 0; i < 4; i++)
	{
		if (gTransferBattleState.players[i].ft_kind != gMNDebugBattleFighters[i].ft_kind)
		{
			ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;
			fighter_gobj = gMNDebugBattleFighters[i].fighter_gobj;
			fp = ftGetStruct(fighter_gobj);

			anim_heap = fp->anim_load;

			ftManagerDestroyFighter(fighter_gobj);

			spawn_info.ft_kind = gTransferBattleState.players[i].ft_kind;
			spawn_info.pos.x = (i * 400.0f) - 600.0f;

			if (ftParamGetCostumeDevelop(spawn_info.ft_kind) < gTransferBattleState.players[i].costume)
				gTransferBattleState.players[i].costume = ftParamGetCostumeDevelop(gTransferBattleState.players[i].ft_kind);

			spawn_info.costume = gTransferBattleState.players[i].costume;
			spawn_info.shade = mnDebugBattleSetShade(i);
			spawn_info.anim_heap = anim_heap;
			gMNDebugBattleFighters[i].fighter_gobj = ftManagerMakeFighter(&spawn_info);

			gMNDebugBattleFighters[i].ft_kind = gTransferBattleState.players[i].ft_kind;
			gMNDebugBattleFighters[i].costume_index = gTransferBattleState.players[i].costume;
		}

		if (gTransferBattleState.players[i].costume != gMNDebugBattleFighters[i].costume_index)
		{
			mnDebugBattleSetShade(i);
			ftParamInitModelTexturePartsAll(gMNDebugBattleFighters[i].fighter_gobj, gTransferBattleState.players[i].costume, gTransferBattleState.players[i].shade);
			gMNDebugBattleFighters[i].costume_index = gTransferBattleState.players[i].costume;
		}
	}

	if (gSysController.button_tap & U_CBUTTONS)
		scSubsysFighterSetStatus(gMNDebugBattleFighters[1].fighter_gobj, gMNDebugBattleCurrentAnimation++);

	if (gSysController.button_tap & D_CBUTTONS)
		scSubsysFighterSetStatus(gMNDebugBattleFighters[1].fighter_gobj, gMNDebugBattleCurrentAnimation--);

	if (gMNDebugBattleExitInterrupt != 0)
	{
		func_ovl9_80369EC0();

		gSceneData.scene_previous = gSceneData.scene_current;

		switch (gMNDebugBattleMenuValueScene)
		{
			case dbBattleSceneVsMode:
				gSceneData.scene_current = nSCKindDebugMPSel;
				break;
			case dbBattleScene1PMode:
				gSceneData.scene_current = nSCKind1PGame;
				gSceneData.spgame_player = 0;
				gSceneData.ft_kind = gTransferBattleState.players[0].ft_kind;
				gSceneData.costume = gTransferBattleState.players[0].costume;
				break;
			case dbBattleSceneStaffroll:
				gSceneData.scene_current = nSCKindCredits;
				break;
			case dbBattleSceneExplain:
				gSceneData.scene_current = nSCKindExplain;
				gTransferBattleState.is_team_battle = FALSE;
				break;
			case dbBattleSceneAutoDemo:
				mnDebugBattleSetDemoFtKinds();
				gSceneData.scene_current = nSCKindDemo;
				gTransferBattleState.is_team_battle = FALSE;
				break;
			case dbBattleSceneCongra:
				gSceneData.scene_current = nSCKind1PCongra;
				break;
		}

		leoInitUnit_atten();
	}
}

// 80132238
void mnDebugBattleSyncCostumes(s32 arg0)
{
	s32 i;
	u8 temp_v0;

	for (i = 0; i < 4; i++)
	{
		if (gTransferBattleState.players[i].costume != gMNDebugBattleFighters[i].costume_index)
		{
			if (gTransferBattleState.players[i].costume == 10)
				gTransferBattleState.players[i].costume = ftParamGetCostumeDevelop(gTransferBattleState.players[i].ft_kind);

			else if (ftParamGetCostumeDevelop(gTransferBattleState.players[i].ft_kind) < gTransferBattleState.players[i].costume)
				gTransferBattleState.players[i].costume = 0;
		}
	}
}

// 801322DC
GObj* mnDebugBattleCreateViewport(void (*proc)(GObj*))
{
	GObj *camera_gobj = func_8000B93C(0x400, func_8000B1C4, 0xF, 0x80000000U, func_80017DBC, 0x32, 0x00048600, -1, 1, 0, proc, 1, 0);
	Camera *cam;

	if (camera_gobj == NULL)
		return NULL;

	cam = CameraGetStruct(camera_gobj);
	cam->flags = 5;
	cam->vec.at.y = 600.0f;
	cam->vec.eye.z = 3000.0f;
	cam->vec.eye.y = 600.0f;

	return camera_gobj;
}

// 8013239C
void mnDebugBattleInit()
{
	s32 i;
	rdSetup rldmSetup;
	GObj *main_gobj;

	rldmSetup.table_addr = &D_NF_001AC870;
	rldmSetup.table_files_num = &D_NF_00000854;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = (rdFileNode*) &D_ovl14_80132C28;
	rldmSetup.status_buf_size = 0x96;
	rldmSetup.force_buf = (rdFileNode*) &D_ovl14_801330D8;
	rldmSetup.force_buf_size = 7;
	rdManagerInitSetup(&rldmSetup);

	main_gobj = gcMakeGObjSPAfter(0, mnDebugBattleMain, 0xF, 0x80000000);
	gcAddGObjProcess(main_gobj, mnDebugBattleSyncCostumes, 1, 0);

	func_8000B9FC(0xF, 0x80000000, 0x64, 2, 0xFF);
	efAllocInitParticleBank();
	mnDebugBattleCreateViewport(0);
	efManagerInitEffects();
	ftManagerAllocFighter(3, 4);

	for (i = nFTKindMario; i <= nFTKindGDonkey; i++)
		ftManagerSetupFilesAllKind(i);

	for (i = 0; i < ARRAY_COUNT(gTransferBattleState.players); i++)
	{
		gTransferBattleState.players[i].team = i;
		gTransferBattleState.players[i].pl_kind = 0;
		gTransferBattleState.players[i].shade = 0;
		gTransferBattleState.players[i].ft_kind = dMNDebugBattleInitialFtKinds[i];
	}

	for (i = 0; i < ARRAY_COUNT(gTransferBattleState.players); i++)
	{
		ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;
		spawn_info.ft_kind = gTransferBattleState.players[i].ft_kind;
		spawn_info.costume = gTransferBattleState.players[i].costume;
		spawn_info.pos.x = (i * 400.0f) - 600.0f;
		spawn_info.anim_heap = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
		gMNDebugBattleFighters[i].fighter_gobj = ftManagerMakeFighter(&spawn_info);

		gMNDebugBattleFighters[i].ft_kind = gTransferBattleState.players[i].ft_kind;
		gMNDebugBattleFighters[i].costume_index = gTransferBattleState.players[i].costume;
	}

	func_ovl9_80369EE0();
	func_ovl9_80369D78(0x1E, 0x14, 0x55, &dMNDebugBattleMenuItems, 0xF);
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
}

// 80132638
void mnDebugBattleStartScene()
{
	D_ovl14_80132934.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl14_80132934);
	D_ovl14_80132950.arena_size = (u32) ((uintptr_t)&lOverlay14ArenaHi - (uintptr_t)&lOverlay14ArenaLo);
	gsGTLSceneInit(&D_ovl14_80132950);
}
