#include <ft/fighter.h>
#include <it/item.h>
#include <gr/ground.h>
#include <if/interface.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <lb/library.h>

#include "ovl6.h"

// Externs
extern intptr_t D_NF_00000088;
extern intptr_t D_NF_00000097;
extern intptr_t D_NF_000000C0;
extern intptr_t D_NF_000000FD;
extern intptr_t D_NF_00000138;
extern intptr_t D_NF_000001D0;
extern intptr_t D_NF_00001140;
extern intptr_t D_NF_00001238;
extern uintptr_t lOverlay6ArenaLo; // 0x8018F710
extern uintptr_t lOverlay6ArenaHi; // 0x80392A00

extern void* gGMCommonFiles[];
extern intptr_t dIFCommonTimerDigitSpriteOffsets[];
extern void* D_ovl2_801313F4;
extern grStruct gGRCommonStruct;
extern scBattleState gDefaultBattleState;
extern GObj* gOMObjCommonLinks[OM_COMMON_MAX_LINKS];
extern ftCreateDesc dFTManagerDefaultFighterDesc; // ovl2 80116DD0

extern void func_ovl2_8010CFA8(GObj*, f32, f32, f32, f32, f32);

extern void itManagerInitItems();
extern void wpManagerAllocWeapons();
extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);
extern void gmRumbleInitPlayers();
extern void func_ovl6_8018ED70();

// Forward declarations
void scBonusGame_InitBonusGame();
void scBonusGame_SetGeometryRenderLights(Gfx** display_list);


// Data
// 8018EEC0
s32 D_ovl6_8018EEC0 = 0;

// 8018EEC4
grBonus1Targets scBonusGame_Bonus1_TargetOffsets[] = {

	// Bonus1Mario
	{ 0x1EB0, 0x2150, 0x2360 },

	// Bonus1Fox
	{ 0x2068, 0x24B0, 0x26C0 },

	// Bonus1Donkey
	{ 0x1F20, 0x2250, 0x2460 },

	// Bonus1Samus
	{ 0x1868, 0x1B30, 0x1D40 },

	// Bonus1Luigi
	{ 0x1BA0, 0x2020, 0x2230 },

	// Bonus1Link
	{ 0x2378, 0x2770, 0x2980 },

	// Bonus1Yoshi
	{ 0x2D68, 0x3290, 0x34A0 },

	// Bonus1Captain
	{ 0x1888, 0x1B70, 0x1D80 },

	// Bonus1Kirby
	{ 0x2150, 0x2510, 0x2720 },

	// Bonus1Pikachu
	{ 0x2658, 0x2A70, 0x2C80 },

	// Bonus1Purin
	{ 0x1FF8, 0x23A0, 0x25B0 },

	// Bonus1Ness
	{ 0x2940, 0x2E60, 0x3070 }
};

// 8018EF54
grBonus2Bumpers scBonusGame_Bonus2_BumperOffsets[] = {

	// Mario
	{ 0x0000, 0x0000 },

	// Fox
	{ 0xE160, 0xE350 },

	// Donkey or Samus (??)
	{ 0x0000, 0x0000 },

	// Luigi
	{ 0x2910, 0x29C0 },

	// Link
	{ 0x0000, 0x0000 },

	// Yoshi
	{ 0x0000, 0x0000 },

	// Captain
	{ 0x0000, 0x0000 },

	// Donkey or Samus (??)
	{ 0x0000, 0x0000 },

	// Kirby
	{ 0x3920, 0x3A60 },

	// Pikachu
	{ 0x0000, 0x0000 },

	// Purin
	{ 0x4FE0, 0x5120 },

	// Ness
	{ 0x3FE0, 0x4090 }
};

// 8018EFB4
grBonus2Nodes scBonusGame_Bonus2_PlatformOffsets[] = {

	// Narrow
	{ 0x3DA8, 0x3E60, 0x3720, 0x3F00 },

	// Medium
	{ 0x45D8, 0x4690, 0x3F70, 0x4730 },

	// Wide
	{ 0x4E08, 0x4EC0, 0x47A0, 0x4F70 }
};

// 8018EFE4
grBonus2Unk D_ovl6_8018EFE4[] = {

	{ 0x5520, 0x55D0 },
	{ 0x5B80, 0x5C30 },
	{ 0x61E0, 0x6290 }
};

// 0x8018EFFC - last one is apparently 0.554000020027F but precision is lost
f32 scBonusGame_Timer_UnitLengths[] = {

	I_MIN_TO_TICS(10),
	I_MIN_TO_TICS(1),
	I_SEC_TO_TICS(10),
	I_SEC_TO_TICS(1),
	I_SEC_TO_TICS(1) / 10,
	277.0F / 500.0F
};

// 8018F014
s32 scBonusGame_Timer_DigitPositions[] = {

	/* 0 */ 207,
	/* 1 */ 222,
	/* 2 */ 240,
	/* 3 */ 255,
	/* 4 */ 273,
	/* 5 */ 288
};

// 8018F02C
s32 scBonusGame_Player_InterfacePositions[] = {

	55, 55, 55, 55
};

// 8018F03C
syColorRGBA dSCBonusGameFadeColor = { 0x00, 0x00, 0x00, 0x00 };

// 8018F040
s32 D_ovl6_8018F040[16] = {

	0x20202000, 0x20202000, 0xffffff00, 0xffffff00,
	0x32323200, 0x00000000, 0xd9ffffff, 0x00020000,
	0xdb020000, 0x00000018, 0xdc08060a, 0x8018f048,
	0xdc08090a, 0x8018f040, 0xdf000000, 0x00000000
};

// 8018F080
syDisplaySetup D_ovl6_8018F080 = SYDISPLAY_DEFINE_DEFAULT();

// 8018F09C
scRuntimeInfo D_ovl6_8018F09C = {

	0x00000000, 0x8018d0d0,
	0x800a26b8, &lOverlay6ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x0000f000, 0x00005000,
	0x00000000, 0x00000000, 0x0000d000, 0x00020000, 0x0000c000,
	scBonusGame_SetGeometryRenderLights, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800d5cac, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006c,
	0x00000000, 0x00000090,
	scBonusGame_InitBonusGame
};

// BSS
// 8018F1A0
void* gBonusGameFileData[4];

// 8018F1B0
scBattleState gBonusBattleState;

// 8018F3A0
u8 gBonusTimerDigits[6];

// 8018F3A8
sb32 gIsBonusGameTimeUp;


// 8018D0C0
void func_ovl6_8018D0C0() {}

// 8018D0C8
void func_ovl6_8018D0C8() {}

// 8018D0D0
void func_ovl6_8018D0D0()
{
	ifCommonBattleUpdateInterfaceAll();
}

// 8018D0F0
void func_ovl6_8018D0F0()
{
	s32 player;
	s32 ft_kind;

	gSceneData.is_reset = FALSE;
	gBonusBattleState = gDefaultBattleState;

	gBattleState = &gBonusBattleState;
	gBattleState->game_type = nSCBattleGameTypeBonus;
	gBattleState->game_rules = SCBATTLE_GAMERULE_BONUS | SCBATTLE_GAMERULE_TIME;
	gBattleState->is_display_score = FALSE;
	gBattleState->pl_count = 1;
	gBattleState->cp_count = 0;

	if (gSceneData.scene_previous == 0x34)
	{
		ft_kind = gSceneData.ft_kind;
		gBattleState->time_limit = 100;

		if (gSceneData.spgame_stage == 3)
		{
			if (gSceneData.spgame_time_limit != 0x64)
				gBattleState->time_limit = 2;
			gBattleState->gr_kind = ft_kind + nGRKindBonus1Start;
		}
		else
		{
			if (gSceneData.spgame_time_limit != 0x64)
				gBattleState->time_limit = 2;
			gBattleState->gr_kind = ft_kind + nGRKindBonus2Start;
		}
	}
	else
	{
		ft_kind = gSceneData.bonus_ft_kind;
		gBattleState->time_limit = 0x64;
		if (gSceneData.scene_previous == 0x13)
			gBattleState->gr_kind = ft_kind + nGRKindBonus1Start;
		else
			gBattleState->gr_kind = ft_kind + nGRKindBonus2Start;
	}
	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		if (player == gSceneData.spgame_player)
		{
			gBattleState->players[player].pl_kind = nFTPlayerKindMan;
			gBattleState->players[player].ft_kind = ft_kind;

			if (gSceneData.scene_previous == 0x34)
				gBattleState->players[player].costume = gSceneData.costume;
			else
				gBattleState->players[player].costume = gSceneData.bonus_costume;

			gBattleState->players[player].player_color = player;
		}
		else
			gBattleState->players[player].pl_kind = nFTPlayerKindNot;
	}
}

// 8018D330
void func_ovl6_8018D330()
{
	gBonusGameFileData[0] = lbRelocGetFileExternHeap(
		(u32)&D_NF_000000FD, gsMemoryAlloc(lbRelocGetFileSize((u32)&D_NF_000000FD), 0x10));
}

// 8018D374
void scBonusGame_InitBonus1Targets()
{
	grBonusDesc* bonus_desc = &scBonusGame_Bonus1_TargetOffsets[gBattleState->gr_kind - nGRKindBonus1Start];
	AObjEvent32 **anim_joints;
	DObjDesc* dobj_desc;
	Vec3f pos;

	pos.x = pos.y = pos.z = 0.0F;

	dobj_desc = (DObjDesc*)((uintptr_t)((uintptr_t)gMPCollisionGroundData->gr_desc[1].dobj_desc - (intptr_t)bonus_desc->o_main)
							+ (intptr_t)bonus_desc->o_dobjdesc);
	anim_joints = (AObjEvent32**)((uintptr_t)((uintptr_t)gMPCollisionGroundData->gr_desc[1].dobj_desc - (intptr_t)bonus_desc->o_main)
					  + (intptr_t)bonus_desc->o_anim);

	gGRCommonStruct.bonus1.target_count = 0;
	dobj_desc++, anim_joints++;

	while (dobj_desc->index != DOBJ_ARRAY_MAX)
	{
		GObj* item_gobj = itManagerMakeItemSetupCommon(NULL, nITKindTarget, &dobj_desc->translate, &pos, 1);

		if (*anim_joints != NULL)
		{
			gcAddDObjAnimJoint(DObjGetStruct(item_gobj), *anim_joints, 0.0F);
			gcPlayAnimAll(item_gobj);
		}
		dobj_desc++, anim_joints++, gGRCommonStruct.bonus1.target_count++;
	}
	if (gGRCommonStruct.bonus1.target_count != 10)
	{
		syErrorPrintf("Error : not %d targets!\n", 10);

		while (TRUE);
	}
}

// 8018D4C4
void scBonusGame_UpdateBonus1TargetInterface()
{
	s32 i;
	SObj* sobj = SObjGetStruct(gGRCommonStruct.bonus1.interface_gobj);

	for (i = 0; i < gGRCommonStruct.bonus1.target_count; i++)
		sobj = sobj->next;

	gcEjectSObj(sobj);
}

// 8018D510
void scBonusGame_UpdateBonus1TargetCount()
{
	gGRCommonStruct.bonus1.target_count--;
	scBonusGame_UpdateBonus1TargetInterface();
	if (gGRCommonStruct.bonus1.target_count == 0)
	{
		if ((gSceneData.scene_previous != 0x34)
			&& (gSaveData.spgame_records[gSceneData.bonus_ft_kind].bonus1_task_count == 10)
			&& (gBattleState->battle_time_current < gSaveData.spgame_records[gSceneData.bonus_ft_kind].bonus1_time))
			ifCommonAnnounceCompleteInitInterface(0x1D0);
		else
			ifCommonAnnounceCompleteInitInterface(0x1CB);

		ifCommonBattleEndAddSoundQueueID(0x118U);
	}
}

// 8018D5C8
void func_ovl6_8018D5C8()
{
	scBonusGame_InitBonus1Targets();
}

// 8018D5E8
void func_ovl6_8018D5E8()
{
	gGRCommonStruct.bonus2.unk_bonus2_0x4 = lbRelocGetFileExternHeap(
		(u32)&D_NF_00000088, gsMemoryAlloc(lbRelocGetFileSize((u32)&D_NF_00000088), 0x10U));
}

// 8018D62C
s32 scBonusGame_GetBonus2PlatformKind(s32 line_id)
{
	Vec3f pos_left;
	Vec3f pos_right;

	mpCollisionGetLREdgeLeft(line_id, &pos_left);
	mpCollisionGetLREdgeRight(line_id, &pos_right);

	if ((pos_right.x - pos_left.x) <= 750.0F)
		return grBonus_PlatformKind_Narrow;
	else if ((pos_right.x - pos_left.x) <= 1050.0F)
		return grBonus_PlatformKind_Medium;
	else
		return grBonus_PlatformKind_Wide;
}

// 8018D6A8
void func_ovl6_8018D6A8(s32 line_id)
{
	DObj* dobj;
	s32 index;

	index = mpCollisionSetDObjNoID(line_id);
	dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[index];
	index = scBonusGame_GetBonus2PlatformKind(line_id);

	lbCommonSetupTreeDObjs(dobj,
					   (void*)((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4
							   + (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x0),
					   NULL, 0x44, 0, 0);
	lbCommonAddMObjForTreeDObjs(dobj->child, (void*)((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4
											+ (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x8));

	lbCommonAddDObjAnimAll(dobj->child,
					   ((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4
						+ (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x4),
					   ((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4
						+ (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0xC),
					   0.0F);

	lbCommonPlayTreeDObjsAnim(dobj->child);
	dobj->child->user_data.s = index | 0x8000;
}

// 8018D794
void scBonusGame_InitBonus2Platforms()
{
	s32 line_count;
	s32 line_ids[100];
	s32 room_id;
	s32 i;

	line_count = mpCollisionGetLineCountType(nMPLineKindGround);
	gGRCommonStruct.bonus2.platform_count = 0;
	mpCollisionGetLineIDsTypeCount(nMPLineKindGround, line_count, line_ids);

	for (i = 0; i < line_count; i++)
	{
		if ((mpCollisionGetVertexFlagsLineID(line_ids[i]) & MPCOLL_VERTEX_MAT_MASK) == nMPMaterialDetect)
		{
			room_id = mpCollisionSetDObjNoID(line_ids[i]);
			if (gMPCollisionYakumonoDObjs->yakumono_dobj[room_id]->anim_joint.event32 == NULL)
				mpCollisionSetYakumonoOnID(room_id);
			func_ovl6_8018D6A8(line_ids[i]);
			gGRCommonStruct.bonus2.platform_count++;
		}
	}
}

// 8018D890
void scBonusGame_UpdateBonus2PlatformInterface()
{
	SObj* sobj = SObjGetStruct(gGRCommonStruct.bonus2.interface_gobj);
	s32 i;

	for (i = 0; i < gGRCommonStruct.bonus2.platform_count; i++)
		sobj = sobj->next;
	gcEjectSObj(sobj);
}

// 8018D8DC
void scBonusGame_UpdateBonus2PlatformCount(DObj* dobj)
{
	s32 index = dobj->child->user_data.s & ~0x8000;

	gcEjectDObj(dobj->child);

	lbCommonSetupTreeDObjs(
		dobj,
		(void*)((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4 + (intptr_t)D_ovl6_8018EFE4[index].unk_bonus2unk_0x0),
		NULL, 0x44, 0, 0);
	lbCommonAddDObjAnimJointAll(
		dobj->child,
		(void*)((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4 + (intptr_t)D_ovl6_8018EFE4[index].unk_bonus2unk_0x4),
		0.0F);
	lbCommonPlayTreeDObjsAnim(dobj->child);

	gGRCommonStruct.bonus2.platform_count--;

	scBonusGame_UpdateBonus2PlatformInterface();
	func_800269C0_275C0(nSYAudioFGMBonus2PlatformLanding);

	if (gGRCommonStruct.bonus2.platform_count == 0)
	{
		if ((gSceneData.scene_previous != 0x34)
			&& (gSaveData.spgame_records[gSceneData.bonus_ft_kind].bonus2_task_count == SCBATTLE_BONUSGAME_TASK_MAX)
			&& (gBattleState->battle_time_current < gSaveData.spgame_records[gSceneData.bonus_ft_kind].bonus2_time))
			ifCommonAnnounceCompleteInitInterface(nSYAudioVoiceAnnounceNewRecord);
		else
			ifCommonAnnounceCompleteInitInterface(nSYAudioVoiceAnnounceComplete);

		ifCommonBattleEndAddSoundQueueID(nSYAudioFGMBonus2PlatformLanding);
	}
}

// 8018DA2C
void scBonusGame_CheckBonus2PlatformLanding(GObj* ground_gobj)
{
	GObj* fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

	while (fighter_gobj != NULL)
	{
		ftStruct* fp = ftGetStruct(fighter_gobj);
		if ((fp->ga == nMPKineticsGround)
			&& ((fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK) == nMPMaterialDetect))
		{
			DObj* dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[mpCollisionSetDObjNoID(fp->coll_data.ground_line_id)];

			if (dobj->child->user_data.s != 0)
				scBonusGame_UpdateBonus2PlatformCount(dobj);
		}
		fighter_gobj = fighter_gobj->link_next;
	}
}

// 8018DAE0
void grBonus_Bonus2_MakeGround()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(nOMObjCommonKindGround, NULL, 1U, 0x80000000U),
						scBonusGame_CheckBonus2PlatformLanding, 1, 4);
}

// 8018DB24
void scBonusGame_InitBonus2Bumpers()
{
	grBonus2Bumpers* bonus_desc;
	DObjDesc* dobj_desc;
	AObjEvent32** anim_joint;
	Vec3f vel;
	GObj* item_gobj;

	if (gMPCollisionGroundData->map_nodes != NULL)
	{
		bonus_desc = ((uintptr_t)gMPCollisionGroundData->map_nodes
					  - (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - nGRKindBonus2Start].o_main);

		vel.x = vel.y = vel.z = 0.0F;
		dobj_desc
			= (DObjDesc*)((uintptr_t)bonus_desc
						  + (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - nGRKindBonus2Start]
								.o_main);
		anim_joint = (AObjEvent32**)((uintptr_t)bonus_desc
							+ (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - nGRKindBonus2Start]
								  .o_anim);
		dobj_desc++, anim_joint++;

		while (dobj_desc->index != 0x12)
		{
			item_gobj = itManagerMakeItemSetupCommon(NULL, nITKindGBumper, &dobj_desc->translate, &vel,
													  ITEM_FLAG_PARENT_GROUND);
			if (*anim_joint != NULL)
			{
				gcAddDObjAnimJoint(DObjGetStruct(item_gobj), *anim_joint, 0.0F);
				gcPlayAnimAll(item_gobj);
			}
			dobj_desc++, anim_joint++;
		}
	}
}

// 8018DC38
void func_ovl6_8018DC38()
{
	scBonusGame_InitBonus2Bumpers();
	func_ovl6_8018D5E8();
	scBonusGame_InitBonus2Platforms();
	grBonus_Bonus2_MakeGround();
}

// 8018DC70
void scBonusGame_InitInterface(GObj* interface_gobj)
{
	gcStopCurrentGObjThread(60);
	ifCommonAnnounceGoMakeInterface();
	ifCommonPlayerDamageSetShowInterface();
	func_800269C0_275C0(nSYAudioVoiceAnnounceGo);
	ifCommonAnnounceGoSetStatus();
	gcEjectGObj(NULL);
	gcStopCurrentGObjThread(1);
}

// 8018DCC4
void scBonusGame_MakeInterface()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, 0xAU, 0x80000000U), scBonusGame_InitInterface, 0,
						5);
	gBattleState->game_status = nSCBattleGameStatusWait;
}

// 8018DD14
void scBonusGame_InitCameraVars()
{
	s32 player;

	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		if (gBattleState->players[player].pl_kind == nFTPlayerKindNot)
			continue;

		if (gBattleState->gr_kind >= nGRKindBonus2Start)
			func_ovl2_8010CFA8(gBattleState->players[player].fighter_gobj, 0.0F, F_CLC_DTOR32(-15.0F), 9000.0F,
							   0.3F, 31.5F);
		else
			func_ovl2_8010CFA8(gBattleState->players[player].fighter_gobj, 0.0F, F_CLC_DTOR32(-9.0F), 9000.0F,
							   0.3F, 31.5F);

		break;
	}
}

// 8018DDE0
void scBonusGame_InitBonus1TargetSprites()
{
	GObj* interface_gobj;
	SObj* sobj;
	void* sprites;
	s32 i;

	sprites
		= lbRelocGetFileExternHeap(&D_NF_00000097, gsMemoryAlloc(lbRelocGetFileSize(&D_NF_00000097), 0x10));
	gGRCommonStruct.bonus1.interface_gobj = interface_gobj
		= gcMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, 0xBU, 0x80000000);
	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);

	for (i = 0; i < gGRCommonStruct.bonus1.target_count; i++)
	{
		sobj = lbCommonMakeSObjForGObj(interface_gobj, (void*)((uintptr_t)sprites + (intptr_t)&D_NF_000001D0));
		sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
		sobj->pos.x = -(sobj->sprite.width / 2) + (((sobj->sprite.width + 3) * i) + 30);
		sobj->pos.y = 30 - (sobj->sprite.height / 2);
	}
}

// 8018DF3C
void scBonusGame_InitBonus2PlatformSprites()
{
	GObj* interface_gobj;
	SObj* sobj;
	void* sprites;
	s32 i;

	sprites
		= lbRelocGetFileExternHeap(&D_NF_00000097, gsMemoryAlloc(lbRelocGetFileSize(&D_NF_00000097), 0x10));
	gGRCommonStruct.bonus2.interface_gobj = interface_gobj
		= gcMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, 0xBU, 0x80000000);
	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17, 0x80000000, -1);

	for (i = 0; i < gGRCommonStruct.bonus2.platform_count; i++)
	{
		sobj = lbCommonMakeSObjForGObj(interface_gobj, (void*)((uintptr_t)sprites + (intptr_t)&D_NF_000000C0));
		sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
		sobj->pos.x = -(sobj->sprite.width / 2) + (((sobj->sprite.width + 3) * i) + 30);
		sobj->pos.y = 30 - (sobj->sprite.height / 2);
	}
}

// 8018E098
void scBonusGame_InitBonusGameSprites()
{
	if (gBattleState->gr_kind >= nGRKindBonus2Start)
		scBonusGame_InitBonus2PlatformSprites();
	else
		scBonusGame_InitBonus1TargetSprites();
}

// 8018E0E0
void scBonusGame_GetPlayerSpawnPosition(Vec3f* pos)
{
	s32 mapobj;

	mpCollisionGetMapObjIDsKind(nMPMapObjKind1PGamePlayerSpawn, &mapobj);
	mpCollisionGetMapObjPositionID(mapobj, pos);
}

// 8018E114
void scBonusGame_InitTimer(GObj* interface_gobj)
{
	s32 unit;
	u32 itime;
	f32 ftime;
	SObj* sobj;
	s32 i;

	itime = gBattleState->battle_time_current;
	sobj = SObjGetStruct(interface_gobj);

	if (itime > I_TIME_TO_TICS(0, 59, 59, 59))
		itime = I_TIME_TO_TICS(0, 59, 59, 59);
	ftime = itime;

	for (i = 0; i < ARRAY_COUNT(gBonusTimerDigits); i++)
	{
		unit = (s32)(ftime / scBonusGame_Timer_UnitLengths[i]);
		ftime -= (unit * scBonusGame_Timer_UnitLengths[i]);

		if (unit != gBonusTimerDigits[i])
		{
			sobj->sprite = *(Sprite*)((uintptr_t)gGMCommonFiles[3] + (intptr_t)dIFCommonTimerDigitSpriteOffsets[unit]);
			sobj->pos.x = scBonusGame_Timer_DigitPositions[i] - (sobj->sprite.width * 0.5F);
			sobj->pos.y = 30.0F - (sobj->sprite.height * 0.5F);
			gBonusTimerDigits[i] = unit;

			if (i == 0)
				sobj->sprite.attr &= ~SP_HIDDEN;
		}
		sobj = sobj->next;
	}
}

// 8018E298
void scBonusGame_SetTimeUp() { gIsBonusGameTimeUp = TRUE; }

// 8018E2A8
void scBonusGame_CheckTimeUpEjectInterface(GObj* interface_gobj)
{
	if (gIsBonusGameTimeUp != FALSE)
	{
		ifCommonAnnounceFailureInitInterface();
		gIsBonusGameTimeUp = FALSE;
		gcEjectGObj(interface_gobj);
	}
}

// 8018E2E8
void scBonusGame_MakeBonusTimerGObj()
{
	gIsBonusGameTimeUp = FALSE;
	if (gSceneData.scene_previous == 0x34)
		gcAddGObjProcess(gcMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, 0xBU, 0x80000000U),
							scBonusGame_CheckTimeUpEjectInterface, 1, 0);
}

// 8018E344
void func_ovl6_8018E344()
{
	GObj* interface_gobj;
	SObj* sobj;
	s32 i;

	if (gSceneData.scene_previous != 0x34)
	{
		ifCommonTimerMakeInterface(NULL);
		ifCommonTimerSetAttr();
		interface_gobj = gcMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, 0xBU, 0x80000000U);
		gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 0x17U, 0x80000000U, -1);

		for (i = 0; i < ARRAY_COUNT(gBonusTimerDigits); i++)
		{
			sobj = lbCommonMakeSObjForGObj(interface_gobj,
										  (void*)((uintptr_t)gGMCommonFiles[3] + (intptr_t)&D_NF_00000138));
			sobj->pos.x = scBonusGame_Timer_DigitPositions[i] - (sobj->sprite.width * 0.5F);
			sobj->pos.y = 30.0F - (sobj->sprite.height * 0.5F);
			gBonusTimerDigits[i] = 0;
		}
		sobj = SObjGetStruct(interface_gobj);
		sobj->sprite.attr |= SP_HIDDEN;

		sobj = lbCommonMakeSObjForGObj(interface_gobj,
									  (void*)((uintptr_t)gGMCommonFiles[3] + (intptr_t)&D_NF_00001140));
		sobj->pos.x = (s32)(231.0F - (sobj->sprite.width * 0.5F));
		sobj->pos.y = (s32)(20.0F - (sobj->sprite.height * 0.5F));

		sobj = lbCommonMakeSObjForGObj(interface_gobj,
									  (void*)((uintptr_t)gGMCommonFiles[3] + (intptr_t)&D_NF_00001238));
		sobj->pos.x = (s32)(264.0F - (sobj->sprite.width * 0.5F));
		sobj->pos.y = (s32)(20.0F - (sobj->sprite.height * 0.5F));

		gcAddGObjProcess(interface_gobj, scBonusGame_InitTimer, 1, 5);
		return;
	}
	else
	{
		ifCommonTimerMakeInterface(scBonusGame_SetTimeUp);
		ifCommonTimerMakeDigits();
	}
}

// 8018E5D8
void scBonusGame_SetPlayerInterfacePositions()
{
	gIFCommonPlayerInterface.ifplayers_pos_x = scBonusGame_Player_InterfacePositions;
	gIFCommonPlayerInterface.ifplayers_pos_y = 210;
}

// 8018E5F8
void scBonusGame_InitBonusGame()
{
	s32 unused[3];
	s32 player;
	GObj* fighter_gobj;
	ftCreateDesc player_spawn;
	syColorRGBA color;

	func_ovl6_8018D0F0();
	func_ovl6_8018ED70();
	func_ovl6_8018D330();
	gcMakeDefaultCameraGObj(9, 0x80000000U, 0x64, 1, 0xFF);
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaperMakeGroundWallpaper();
	func_ovl2_8010DB00();
	itManagerInitItems();
	grCommonSetupInitAll();
	ftManagerAllocFighter(2, GMCOMMON_PLAYERS_MAX);
	wpManagerAllocWeapons();
	efManagerInitEffects();
	ifScreenFlashMakeInterface(0xFF);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (player = 0, player_spawn = dFTManagerDefaultFighterDesc; player < ARRAY_COUNT(gBattleState->players);
		 player++)
	{
		if (gBattleState->players[player].pl_kind == nFTPlayerKindNot)
			continue;

		ftManagerSetupFilesAllKind(gBattleState->players[player].ft_kind);

		player_spawn.ft_kind = gBattleState->players[player].ft_kind;

		scBonusGame_GetPlayerSpawnPosition(&player_spawn.pos);

		player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? nGMFacingL : nGMFacingR;

		player_spawn.team = 0;
		player_spawn.player = player;
		player_spawn.detail = nFTPartsDetailHigh;
		player_spawn.costume = gBattleState->players[player].costume;

		player_spawn.pl_kind = gBattleState->players[player].pl_kind;
		player_spawn.controller = &gPlayerControllers[player];

		player_spawn.figatree_heap = ftManagerAllocAnimHeapKind(gBattleState->players[player].ft_kind);
		player_spawn.is_skip_entry = TRUE;

		fighter_gobj = ftManagerMakeFighter(&player_spawn);

		ftParamInitPlayerBattleStats(player, fighter_gobj);

		break;
	}

	ftManagerSetupFilesPlayablesAll();
	ifCommonBattleSetGameStatusWait();
	func_ovl2_8010DDC4();
	func_ovl2_8010E374();
	func_ovl2_8010E498();
	ifCommonPlayerTagMakeInterface();
	scBonusGame_SetPlayerInterfacePositions();
	ifCommonPlayerDamageInitInterface();
	ifCommonPlayerStockInitInterface();
	scBonusGame_InitBonusGameSprites();
	scBonusGame_MakeInterface();
	mpCollisionSetPlayBGM();
	func_800269C0_275C0(nSYAudioVoicePublicityExcited);
	func_ovl6_8018E344();
	scBonusGame_InitCameraVars();

	color = dSCBonusGameFadeColor;

	lbFadeMakeActor(nOMObjCommonKindTransition, nOMObjCommonLinkIDTransition, 10, &color, 12, TRUE, NULL);
	scBonusGame_MakeBonusTimerGObj();
}

// 8018E8D0
void scBonusGame_SetBonusEndStats(sb32 is_practice)
{
	gSC1PManagerTotalDamage += gBattleState->players[gSceneData.spgame_player].total_damage_all;

	if (is_practice != FALSE)
	{
		gSceneData.spgame_time_seconds = 0;
		gSceneData.bonus_get_mask[0] = 0;
		gSceneData.bonus_get_mask[1] = 0;
		gSceneData.bonus_get_mask[2] = 0;
	}
	else
	{
		gSceneData.spgame_time_seconds = (gBattleState->battle_time_remain + 59) / GS_TIME_SEC;
		gSceneData.bonus_get_mask[0] = 0x40000;
		gSceneData.bonus_get_mask[1] = 0;
		gSceneData.bonus_get_mask[2] = 0;
	}
}

// 8018E95C
void scBonusGame_SaveBonusRecordSRAM(sb32 is_tasks_fail, s32 ft_kind)
{
	if (gSceneData.is_reset == FALSE)
	{
		if (gBattleState->gr_kind <= nGRKindBonus1End)
		{
			if (is_tasks_fail != FALSE)
			{
				if (gSaveData.spgame_records[ft_kind].bonus1_task_count < gSceneData.bonus_tasks_current)
				{
					gSaveData.spgame_records[ft_kind].bonus1_task_count = gSceneData.bonus_tasks_current;

					lbBackupWrite();
				}
			}
			else
			{
				gSaveData.spgame_records[ft_kind].bonus1_task_count = SCBATTLE_BONUSGAME_TASK_MAX;

				if (gBattleState->battle_time_current < gSaveData.spgame_records[ft_kind].bonus1_time)
				{
					gSaveData.spgame_records[ft_kind].bonus1_time = gBattleState->battle_time_current;

					lbBackupWrite();
				}
			}
		}
		else if (is_tasks_fail != FALSE)
		{
			if (gSaveData.spgame_records[ft_kind].bonus2_task_count < gSceneData.bonus_tasks_current)
			{
				gSaveData.spgame_records[ft_kind].bonus2_task_count = gSceneData.bonus_tasks_current;

				lbBackupWrite();
			}
		}
		else
		{
			gSaveData.spgame_records[ft_kind].bonus2_task_count = SCBATTLE_BONUSGAME_TASK_MAX;

			if (gBattleState->battle_time_current < gSaveData.spgame_records[ft_kind].bonus2_time)
			{
				gSaveData.spgame_records[ft_kind].bonus2_time = gBattleState->battle_time_current;

				lbBackupWrite();
			}
		}
	}
}

// 8018EA80
void scBonusGame_SetGeometryRenderLights(Gfx** display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 8018EACC
void sc1PBonusGameStartScene()
{
	u16 bonus_complete_chars;
	s32 task_count;
	u32 tasks_complete;
	s32 i;

	D_ovl6_8018F080.zbuffer = syDisplayGetZBuffer(6400);

	func_80007024(&D_ovl6_8018F080);

	D_ovl6_8018F09C.arena_size = (size_t) ((uintptr_t)&lOverlay6ArenaHi - (uintptr_t)&lOverlay6ArenaLo);
	D_ovl6_8018F09C.proc_start = scBonusGame_InitBonusGame;

	gsGTLSceneInit(&D_ovl6_8018F09C);
	auStopBGM();

	while (auIsBGMPlaying(0) != FALSE)
	{
		continue;
	};
	auSetBGMVolume(0, 0x7800);
	func_800266A0_272A0();
	gmRumbleInitPlayers();

	if (gBattleState->game_status != nSCBattleGameStatusPause)
	{
		task_count = (gBattleState->gr_kind <= nGRKindBonus1End) ? gGRCommonStruct.bonus1.target_count
																  : gGRCommonStruct.bonus2.platform_count;

		tasks_complete = SCBATTLE_BONUSGAME_TASK_MAX - task_count;

		if (task_count > 0)
			; // Needed for match; plausible leftover statement in original code, if (TRUE) and if (task_count) also work

		gSceneData.bonus_tasks_current = tasks_complete;

		switch (gSceneData.scene_previous)
		{
		case 0x34:
			scBonusGame_SetBonusEndStats(task_count);
			scBonusGame_SaveBonusRecordSRAM(task_count, gSceneData.ft_kind);
			break;

		default:
			scBonusGame_SaveBonusRecordSRAM(task_count, gSceneData.bonus_ft_kind);

			switch (gSceneData.scene_previous)
			{
			case 0x13:
				gSceneData.scene_current = 0x13;

				if (tasks_complete == SCBATTLE_BONUSGAME_TASK_MAX)
				{
					if (!(gSaveData.unlock_mask & LBBACKUP_UNLOCK_MASK_LUIGI))
					{
						for (bonus_complete_chars = i = 0; i < ARRAY_COUNT(gSaveData.spgame_records); i++)
						{
							if (gSaveData.spgame_records[i].bonus1_task_count == SCBATTLE_BONUSGAME_TASK_MAX)
								bonus_complete_chars |= (1 << i);
						}
						if ((bonus_complete_chars & LBBACKUP_CHARACTER_MASK_STARTER)
							== LBBACKUP_CHARACTER_MASK_STARTER)
						{
							gSceneData.ft_kind = gSceneData.bonus_ft_kind;
							gSceneData.costume = gSceneData.bonus_costume;

							gSceneData.spgame_stage = nSC1PGameStageLuigi;
							gSceneData.scene_current = 0x34;

							break;
						}
					}
					if (sc1PManagerCheckUnlockSoundTest() != FALSE)
					{
						gSceneData.unlock_messages[0] = nLBBackupUnlockSoundTest;
						gSceneData.scene_current = 0xC;
					}
					break;
				}
				else
					break;

			default:
				gSceneData.scene_current = 0x14;

				if ((tasks_complete == SCBATTLE_BONUSGAME_TASK_MAX) && (sc1PManagerCheckUnlockSoundTest() != FALSE))
				{
					gSceneData.unlock_messages[0] = nLBBackupUnlockSoundTest;
					gSceneData.scene_current = 0xC;
				}
				break;
			}
			break;
		}
		gSceneData.scene_previous = 0x35;
	}
}
