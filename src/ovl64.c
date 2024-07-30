#include <ft/fighter.h>
#include <gr/ground.h>
#include <gm/battle.h>

extern intptr_t D_NF_0000000C;
extern intptr_t D_NF_800A5240;
extern intptr_t lOverlay64ArenaLo;          // 8018E860
extern intptr_t lOverlay64ArenaHi;          // 80392A00

extern intptr_t lAutoDemoNameSpriteMario;   // 00000138
extern intptr_t lAutoDemoNameSpriteFox;     // 00000258
extern intptr_t lAutoDemoNameSpriteDonkey;  // 00000378
extern intptr_t lAutoDemoNameSpriteSamus;   // 000004F8
extern intptr_t lAutoDemoNameSpriteLuigi;   // 00000618
extern intptr_t lAutoDemoNameSpriteLink;    // 00000738
extern intptr_t lAutoDemoNameSpriteYoshi;   // 00000858
extern intptr_t lAutoDemoNameSpriteCaptain; // 00000A38
extern intptr_t lAutoDemoNameSpriteKirby;   // 00000BB8
extern intptr_t lAutoDemoNameSpritePikachu; // 00000D38
extern intptr_t lAutoDemoNameSpritePurin;   // 00000F78
extern intptr_t lAutoDemoNameSpriteNess;    // 00001098
extern void func_ovl64_8018D19C();
extern void func_ovl2_8010CF44(GObj *fighter_gobj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
extern void func_ovl0_800CCF00();


// Forward declarations
void scAutoDemoSetFocusPlayer1();
void scAutoDemoSetFocusPlayer2();
void scAutoDemoProcFocusPlayer1();
void scAutoDemoResetFocusPlayerAll();
void scAutoDemoProcFocusPlayer2();
void scAutoDemoExit();
void scAutoDemoSetMagnifyDisplayOn();


// BSS
// 8018E2F0
gmBattleState sAutoDemoBattleState;

// 8018E4E0
s32 sAutoDemoFocusChangeWait;

// 8018E4E4
u16 sAutoDemoCharacterFlag;

// 8018E4E8
GObj *sAutoDemoFighterNameGObj;

// 8018E4EC
scAutoDemoProc *sAutoDemoProc;

// 8018E4F0
s16 sAutoDemoMapObjs[8];


// DATA
s32 D_ovl64_8018E160 = 0;
s32 D_ovl64_8018E164 = 0;

// 8018E168
u8 dAutoDemoGroundOrder[] = 
{
	nGRKindPupupu,
	nGRKindZebes,
	nGRKindCastle,
	nGRKindJungle,
	nGRKindSector,
	nGRKindYoster,
	nGRKindYamabuki,
	nGRKindHyrule
};

// 8018E170
s16 dAutoDemoMapObjKindList[] = 
{
	nMPMapObjKindAutoDemoSpawn1,
	nMPMapObjKindAutoDemoSpawn2,
	nMPMapObjKindAutoDemoSpawn3,
	nMPMapObjKindAutoDemoSpawn4,
	nMPMapObjKindAutoDemoSpawn5,
	nMPMapObjKindAutoDemoSpawn6,
	nMPMapObjKindAutoDemoSpawn7,
	nMPMapObjKindAutoDemoSpawn8
};

// 8018E180
scAutoDemoProc dAutoDemoProcList[] =
{
	// Nothing?
	{
		0,                              // Wait frames until focus changes 
		NULL,                           // Function to run on focus change
		NULL                            // Function to run when focusing
	},

	// Pre-focus
	{
		340,                            // Wait frames until focus changes 
		func_ovl64_8018D19C,            // Function to run on focus change
		NULL                            // Function to run when focusing
	},

	// Player 1 Focus
	{
		340,                            // Wait frames until focus changes 
		scAutoDemoSetFocusPlayer1,      // Function to run on focus change
		NULL                            // Function to run when focusing
	},

	// Player 2 focus
	{
		340,                            // Wait frames until focus changes 
		scAutoDemoSetFocusPlayer2,      // Function to run on focus change
		scAutoDemoProcFocusPlayer1      // Function to run when focusing
	},

	// End focus
	{
		400,                            // Wait frames until focus changes 
		scAutoDemoResetFocusPlayerAll,  // Function to run on focus change
		scAutoDemoProcFocusPlayer2      // Function to run when focusing
	},

	// Unknown
	{
		60,                             // Wait frames until focus changes 
		scAutoDemoSetMagnifyDisplayOn,  // Function to run on focus change
		NULL                            // Function to run when focusing
	},

	// End demo
	{
		1,                              // Wait frames until focus changes 
		scAutoDemoExit,                 // Function to run on focus change
		NULL                            // Function to run when focusing
	}
};

// 8018E1D4
f32 D_ovl64_8018E1D4[] = { -40.0F, -28.0F, -14.0F, 14.0F, 28.0F, 40.0F };

// 8018E1EC
f32 D_ovl64_8018E1EC[] = { 2.0F, 0.0F, -6.0F, -9.0F, -30.0F };

// 8018E200
intptr_t dAutoDemoFighterNameSpriteOffsets[] =
{
	&lAutoDemoNameSpriteMario,      // Mario
	&lAutoDemoNameSpriteFox,        // Fox
	&lAutoDemoNameSpriteDonkey,     // Donkey Kong
	&lAutoDemoNameSpriteSamus,      // Samus
	&lAutoDemoNameSpriteLuigi,      // Luigi
	&lAutoDemoNameSpriteLink,       // Link
	&lAutoDemoNameSpriteYoshi,      // Yoshi
	&lAutoDemoNameSpriteCaptain,    // Captain Falcon
	&lAutoDemoNameSpriteKirby,      // Kirby
	&lAutoDemoNameSpritePikachu,    // Pikachu
	&lAutoDemoNameSpritePurin,      // Jigglypuff
	&lAutoDemoNameSpriteNess        // Ness
};

// 8018E230
Unk800D4060 D_ovl64_8018E230 = { 0 };

// 8018E234
scUnkDataBounds D_ovl64_8018E234 = {
	0x80392a00, 0x803b6900, 0x803da800,
	0x00000000, 0x00000140, 0x000000f0, 0x00016a99
};

// 8018E250
scRuntimeInfo D_ovl64_8018E250 = {
	0x00000000, 0x8018d0c0, 0x800a26b8, 0x8018e860,
	0x00000000, 0x00000001, 0x00000002, 0x00006000,
	0x00003000, 0x00000000, 0x00000000, 0x00008000,
	0x00020000, 0x0000c000, 0x8018dfc8, 0x80004310,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800d5cac, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006c,
	0x00000000, 0x00000090, 0x8018dcc4
};


// 8018D0C0
void func_ovl64_8018D0C0()
{
	func_8000A5E4();
}

// 8018D0E0
void scAutoDemoBeginMatch()
{
	GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

	while (fighter_gobj != NULL)
	{
		ftParamUnlockPlayerControl(fighter_gobj);

		fighter_gobj = fighter_gobj->link_next;
	}
	gBattleState->game_status = nGMBattleGameStatusGo;
}

// 8018D134
void scAutoDemoDetectExit()
{
	s32 player;

	for (player = 0; player < ARRAY_COUNT(gPlayerControllers); player++)
	{
		u16 button_new = gPlayerControllers[player].button_new;

		if (button_new & (A_BUTTON | B_BUTTON | START_BUTTON))
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = scMajor_Kind_Title;

			leoInitUnit_atten();
			break;
		}
	}
}

// 8018D19C
void func_ovl64_8018D19C()
{
	Unk800D4060 sp2C = D_ovl64_8018E230;

	func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp2C, 0x1E, 1, 0);
}

// 8018D1EC
sb32 scAutoDemoCheckStopFocusPlayer(ftStruct *fp)
{
	switch (fp->status_info.status_id)
	{
	case nFTCommonStatusDeadDown:
	case nFTCommonStatusDeadLeftRight:
	case nFTCommonStatusDeadUpStar:
		return TRUE;

	default:
		return FALSE;
	}
}

// 8018D220
#define F_DEG_TO_RAD(x) ((f32)(((x) * PI32) / 180.0F))
void func_ovl64_8018D220(GObj *fighter_gobj)
{
	func_ovl2_8010CF44
	(
		fighter_gobj,
		F_DEG_TO_RAD(D_ovl64_8018E1D4[mtTrigGetRandomIntRange(ARRAY_COUNT(D_ovl64_8018E1D4))]),
		F_DEG_TO_RAD(D_ovl64_8018E1EC[mtTrigGetRandomIntRange(ARRAY_COUNT(D_ovl64_8018E1EC))]),
		ftGetStruct(fighter_gobj)->attributes->closeup_cam_zoom,
		0.3F,
		28.0F
	);
}

// 8018D2CC
void scAutoDemoSetFocusPlayer1()
{
	GObj *fighter_gobj = gBattleState->players[0].fighter_gobj;
	ftStruct *fp = ftGetStruct(fighter_gobj);

	if (scAutoDemoCheckStopFocusPlayer(fp) != FALSE)
	{
		sAutoDemoFocusChangeWait = 0;
	}
	else
	{
		ftGetStruct(gBattleState->players[1].fighter_gobj)->cp_level =
			ftGetStruct(gBattleState->players[2].fighter_gobj)->cp_level =
			ftGetStruct(gBattleState->players[3].fighter_gobj)->cp_level = 1;

		func_ovl64_8018D220(fighter_gobj);
		ftParamSetModelPartDetailAll(fighter_gobj, nFTPartsDetailHigh);

		fp->detail_default = nFTPartsDetailHigh;

		SObjGetStruct(sAutoDemoFighterNameGObj)->sprite.attr &= ~SP_HIDDEN;

		gIFPlayerCommonInterface.is_ifmagnify_display = FALSE;
	}
}

// 8018D39C
void scAutoDemoProcFocusPlayer1()
{
	if (scAutoDemoCheckStopFocusPlayer(ftGetStruct(gBattleState->players[0].fighter_gobj)) != FALSE)
	{
		sAutoDemoFocusChangeWait = 0;
	}
}

// 8018D3D4
void scAutoDemoSetFocusPlayer2()
{
	GObj *p2_gobj = gBattleState->players[1].fighter_gobj;
	GObj *p1_gobj = gBattleState->players[0].fighter_gobj;
	ftStruct *p2_fp = ftGetStruct(p2_gobj);

	SObjGetStruct(sAutoDemoFighterNameGObj)->sprite.attr |= SP_HIDDEN;

	ftParamSetModelPartDetailAll(p1_gobj, nFTPartsDetailLow);
	ftGetStruct(p1_gobj)->detail_default = nFTPartsDetailLow;

	if (scAutoDemoCheckStopFocusPlayer(p2_fp) != FALSE)
	{
		sAutoDemoFocusChangeWait = 0;
	}
	else
	{
		ftGetStruct(gBattleState->players[1].fighter_gobj)->cp_level = 9;

		ftGetStruct(gBattleState->players[0].fighter_gobj)->cp_level =
		ftGetStruct(gBattleState->players[2].fighter_gobj)->cp_level =
		ftGetStruct(gBattleState->players[3].fighter_gobj)->cp_level = 1;

		func_ovl64_8018D220(p2_gobj);
		ftParamSetModelPartDetailAll(p2_gobj, nFTPartsDetailHigh);

		p2_fp->detail_default = nFTPartsDetailHigh;

		SObjGetStruct(sAutoDemoFighterNameGObj)->next->sprite.attr &= ~SP_HIDDEN;
	}
}

// 8018D4F0
void scAutoDemoProcFocusPlayer2()
{
	if (scAutoDemoCheckStopFocusPlayer(ftGetStruct(gBattleState->players[1].fighter_gobj)) != FALSE)
	{
		sAutoDemoFocusChangeWait = 0;
	}
}

// 8018D528
void scAutoDemoResetFocusPlayerAll()
{
	GObj *p2_gobj = gBattleState->players[1].fighter_gobj;

	cmManagerSetCameraStatusDefault();

	ftGetStruct(gBattleState->players[0].fighter_gobj)->cp_level =
	ftGetStruct(p2_gobj)->cp_level =
	ftGetStruct(gBattleState->players[2].fighter_gobj)->cp_level =
	ftGetStruct(gBattleState->players[3].fighter_gobj)->cp_level = 9;

	ftParamSetModelPartDetailAll(p2_gobj, nFTPartsDetailLow);

	ftGetStruct(p2_gobj)->detail_default = nFTPartsDetailLow;

	SObjGetStruct(sAutoDemoFighterNameGObj)->next->sprite.attr |= SP_HIDDEN;
}

// 8018D5E0
void scAutoDemoSetMagnifyDisplayOn()
{
	gIFPlayerCommonInterface.is_ifmagnify_display = TRUE;
}

// 8018D5F0
void scAutoDemoExit()
{
	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = scMajor_Kind_N64;

	leoInitUnit_atten();
}

// 8018D624
void scAutoDemoChangeFocus()
{
	sAutoDemoFocusChangeWait = sAutoDemoProc->focus_end_wait;

	if (sAutoDemoProc->proc_change != NULL)
	{
		sAutoDemoProc->proc_change();
	}
	sAutoDemoProc++;
}

// 8018D674
void scAutoDemoUpdateFocus()
{
	if (sAutoDemoProc->proc_focus != NULL)
	{
		sAutoDemoProc->proc_focus();
	}
	while (sAutoDemoFocusChangeWait == 0)
	{
		scAutoDemoChangeFocus();
	}
	sAutoDemoFocusChangeWait--;
}

// 8018D6DC
void scAutoDemoProcUpdateMain(GObj *gobj)
{
	scAutoDemoDetectExit();
	scAutoDemoUpdateFocus();
}

// 8018D704
GObj* scAutoDemoMakeFocusInterface()
{
	GObj *interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, scAutoDemoProcUpdateMain, 0xA, 0x80000000);

	sAutoDemoProc = dAutoDemoProcList;
	sAutoDemoFocusChangeWait = 0;

	scAutoDemoUpdateFocus();

	return interface_gobj;
}

// 8018D758
void scAutoDemoGetPlayerSpawnPosition(s32 mapobj_kind, Vec3f *mpoint_pos)
{
	s32 i, j;
	s32 mpoint_random;
	s32 mpoint_select;
	s32 mpoint;

	mpoint_random = mtTrigGetRandomIntRange(((ARRAY_COUNT(dAutoDemoMapObjKindList) + ARRAY_COUNT(sAutoDemoMapObjs)) / 2) - mapobj_kind);

	for (i = j = 0; i < (ARRAY_COUNT(dAutoDemoMapObjKindList) + ARRAY_COUNT(sAutoDemoMapObjs)) / 2; i++)
	{
		mpoint_select = dAutoDemoMapObjKindList[i];

		if (sAutoDemoMapObjs[i] != -1)
		{
			if (mpoint_random == j)
			{
				sAutoDemoMapObjs[i] = -1;

				break;
			}
			else j++;
		}
	}
	if (mpCollisionGetMapObjCountKind(mpoint_select) != 0)
	{
		mpCollisionGetMapObjIDsKind(mpoint_select, &mpoint);
		mpCollisionGetMapObjPositionID(mpoint, mpoint_pos);
	}
}

// 8018D7FC
s32 func_ovl64_8018D7FC(u16 flag)
{
	s32 i, j;

	for (i = 0, j = 0; i < (sizeof(u16) * 8); i++, flag = flag >> 1)
	{
		if (flag & 1)
		{
			j++;
		}
	}
	return j;
}

// 8018D874
s32 func_ovl64_8018D874(u16 arg0, u16 arg1, s32 arg2)
{
	s32 var_v1 = -1;

	arg2++;

	do
	{
		var_v1++;

		if ((arg0 & (1 << var_v1)) && !(arg1 & (1 << var_v1)))
		{
			arg2--;
		}
	} while (arg2 != 0);

	return var_v1;
}

// 8018D8C0
s32 scAutoDemoGetFighterKind(s32 player)
{
	u16 character_flag;
	s32 unused;
	s32 character_count2;
	s32 character_count1;
	s32 shuf;

	if (player < ARRAY_COUNT(gSceneData.demo_ft_kind))
	{
		return gSceneData.demo_ft_kind[player];
	}
	character_flag = (gSaveData.character_mask | GMBACKUPINFO_CHARACTER_MASK_STARTER);

	character_count1 = func_ovl64_8018D7FC(character_flag), character_count2 = func_ovl64_8018D7FC(sAutoDemoCharacterFlag);

	shuf = func_ovl64_8018D874(character_flag, sAutoDemoCharacterFlag, mtTrigGetRandomIntRange(character_count1 - character_count2));

	sAutoDemoCharacterFlag |= 1 << shuf;

	return shuf;
}

// 8018D954
s32 scAutoDemoGetPlayerDamage(s32 player)
{
	if (player < ARRAY_COUNT(gSceneData.demo_ft_kind))
	{
		return mtTrigGetRandomIntRange(30);
	}
	else return mtTrigGetRandomIntRange(60) + 40;
}

// 8018D990
void func_ovl64_8018D990()
{
	s32 i;

	sAutoDemoBattleState = gDefaultBattleState;
	gBattleState = &sAutoDemoBattleState;

	gBattleState->game_type = nGMBattleGameTypeDemo;
	gBattleState->gr_kind = dAutoDemoGroundOrder[gSceneData.demo_ground_order];

	gSceneData.demo_ground_order++;

	if (gSceneData.demo_ground_order >= ARRAY_COUNT(dAutoDemoGroundOrder))
	{
		gSceneData.demo_ground_order = 0;
	}
	sAutoDemoCharacterFlag = (1 << gSceneData.demo_ft_kind[0]) | (1 << gSceneData.demo_ft_kind[1]);

	for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
	{
		gBattleState->players[i].pl_kind = nFTPlayerKindCom;
		gBattleState->players[i].ft_kind = scAutoDemoGetFighterKind(i);
		gBattleState->players[i].level = 9;

		gBattleState->players[i].stock_damage_all = scAutoDemoGetPlayerDamage(i);
	}
	gBattleState->pl_count = 0;
	gBattleState->cp_count = 4;

	for (i = 0; i < ARRAY_COUNT(sAutoDemoMapObjs); i++)
	{
		sAutoDemoMapObjs[i] = 0;
	}
}

// 8018DB18
void func_ovl64_8018DB18()
{
	GObj *interface_gobj;
	s32 player;
	void *file;

	file = rdManagerGetFileWithExternHeap((uintptr_t)&D_NF_0000000C, gsMemoryAlloc(rdManagerGetFileSize((uintptr_t)&D_NF_0000000C), 0x10));
	sAutoDemoFighterNameGObj = interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, 0xB, 0x80000000);

	omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

	for (player = 0; player < ARRAY_COUNT(gSceneData.demo_ft_kind); player++)
	{
		SObj *sobj = gcAppendSObjWithSprite(interface_gobj, spGetSpriteFromFile(file, dAutoDemoFighterNameSpriteOffsets[gBattleState->players[player].ft_kind]));

		sobj->sprite.red   = 0xFF;
		sobj->sprite.green = 0xFF;
		sobj->sprite.blue  = 0xFF;

		sobj->sprite.attr = SP_TEXSHUF | SP_HIDDEN | SP_TRANSPARENT;

		sobj->pos.x = (s32)(160.0F - (sobj->sprite.width * 0.5F));
		sobj->pos.y = (s32)(50.0F - (sobj->sprite.height * 0.5F));
	}
}

// 8018DCC4
void func_ovl64_8018DCC4()
{
	GObj *fighter_gobj;
	ftCreateDesc player_spawn;
	s32 player;

	func_ovl64_8018D990();
	func_ovl64_8018E0C0();
	func_8000B9FC(9, 0x80000000U, 0x64, 1, 0xFF);
	efAllocInitParticleBank();
	ftParamGameSet();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaperMakeGroundWallpaper();
	func_ovl2_8010DB00();
	itManagerInitItems();
	grCommonSetupInitAll();
	ftManagerAllocFighter(2, 4);
	wpManagerAllocWeapons();
	efManagerInitEffects();
	ifScreenFlashMakeInterface(0xFF);
	gmRumbleMakeActor();
	ftPublicitySetup();

	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		player_spawn = dFTDefaultFighterDesc;

		ftManagerSetupDataKind(gBattleState->players[player].ft_kind);

		player_spawn.ft_kind = gBattleState->players[player].ft_kind;

		scAutoDemoGetPlayerSpawnPosition(player, &player_spawn.pos);

		player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? nGMDirectionL : nGMDirectionR;

		player_spawn.team = gBattleState->players[player].team;

		player_spawn.player = player;

		player_spawn.model_lod = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;

		player_spawn.costume = gBattleState->players[player].costume;

		player_spawn.shade = gBattleState->players[player].shade;

		player_spawn.handicap = gBattleState->players[player].handicap;

		player_spawn.cp_level = gBattleState->players[player].level;

		player_spawn.stock_count = gBattleState->stock_setting;

		player_spawn.damage = gBattleState->players[player].stock_damage_all;

		player_spawn.pl_kind = gBattleState->players[player].pl_kind;

		player_spawn.controller = &gPlayerControllers[player];

		player_spawn.anim_heap = ftManagerAllocAnimHeapKind(gBattleState->players[player].ft_kind);

		player_spawn.is_skip_entry = TRUE;

		fighter_gobj = ftManagerMakeFighter(&player_spawn);

		gBattleState->players[player].player_color_index = player;
		gBattleState->players[player].tag_kind = player;

		ftParamInitPlayerBattleStats(player, fighter_gobj);
	}
	ftManagerSetupDataPlayables();
	scAutoDemoBeginMatch();
	func_ovl2_8010E2D4();
	ifCommonPlayerArrowsInitInterface();
	func_ovl2_8010E1A4();
	ifCommonPlayerMagnifyMakeInterface();

	gIFPlayerCommonInterface.is_ifmagnify_display = TRUE;

	func_ovl2_8010DDC4();
	func_ovl2_8010E374();
	func_ovl2_8010E498();
	ifCommonPlayerTagMakeInterface();
	ifCommonPlayerDamageSetDigitPositions();
	ifCommonPlayerDamageInitInterface();
	ifCommonPlayerDamageSetShowInterface();
	ifCommonPlayerStockInitInterface();
	func_ovl64_8018DB18();
	mpCollisionSetPlayMusicID();
	func_800269C0_275C0(0x272);
	scAutoDemoMakeFocusInterface();
}

// 8018DFC8
void func_ovl64_8018DFC8(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

	ftRenderLightsDrawReflect(display_list, gMPLightAngleX, gMPLightAngleY);
}

// 8018E014
void scAutoDemoStartScene()
{
	D_ovl64_8018E234.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);

	func_80007024(&D_ovl64_8018E234);

	D_ovl64_8018E250.arena_size = ((uintptr_t)&lOverlay64ArenaHi - (uintptr_t)&lOverlay64ArenaLo);
	D_ovl64_8018E250.proc_start = func_ovl64_8018DCC4;

	func_800A2698(&D_ovl64_8018E250);
	auStopBGM();

	while (auIsBGMPlaying(0) != FALSE)
	{
		continue;
	}

	auSetBGMVolume(0, 0x7800);
	func_800266A0_272A0();
	gmRumbleInitPlayers();
}
