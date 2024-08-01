#include <gm/battle.h>
#include <gr/grdef.h>
#include <ft/fttypes.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <gm/gmsound.h>
#include <sys/objtypes.h>
#include <mp/map.h>
#include <it/ittypes.h>
#include <ovl0/reloc_data_mgr.h>

#include "ovl6.h"

// 8018D0C0
void func_ovl6_8018D0C0() {}

// 8018D0C8
void func_ovl6_8018D0C8() {}

// 8018D0D0
void func_ovl6_8018D0D0() { ifCommonBattleUpdateInterfaceAll(); }

// 8018D0F0
void func_ovl6_8018D0F0()
{
	s32 player;
	s32 ft_kind;

	gSceneData.is_reset = FALSE;
	gBonusBattleState = gDefaultBattleState;

	gBattleState = &gBonusBattleState;
	gBattleState->game_type = nGMBattleGameTypeBonus;
	gBattleState->game_rules = GMBATTLE_GAMERULE_BONUS | GMBATTLE_GAMERULE_TIME;
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
		ft_kind = gSceneData.bonus_char_id;
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
				gBattleState->players[player].costume = gSceneData.bonus_costume_id;

			gBattleState->players[player].player_color_index = player;
		}
		else
			gBattleState->players[player].pl_kind = nFTPlayerKindNot;
	}
}

// 8018D330
void func_ovl6_8018D330()
{
	gBonusGameFileData[0] = rdManagerGetFileWithExternHeap(
		(u32)&D_NF_000000FD, gsMemoryAlloc(rdManagerGetFileSize((u32)&D_NF_000000FD), 0x10));
}

// 8018D374
void scBonusGame_InitBonus1Targets()
{
	grBonusDesc* bonus_desc = &scBonusGame_Bonus1_TargetOffsets[gBattleState->gr_kind - nGRKindBonus1Start];
	void** atrack;
	DObjDesc* dobj_desc;
	Vec3f sp48;

	sp48.x = sp48.y = sp48.z = 0.0F;

	dobj_desc = (DObjDesc*)((uintptr_t)((uintptr_t)gMPGroundData->gr_desc[1].dobj_desc - (intptr_t)bonus_desc->o_main)
							+ (intptr_t)bonus_desc->o_dobjdesc);
	atrack = (void**)((uintptr_t)((uintptr_t)gMPGroundData->gr_desc[1].dobj_desc - (intptr_t)bonus_desc->o_main)
					  + (intptr_t)bonus_desc->o_anim);

	gGRCommonStruct.bonus1.target_count = 0;
	dobj_desc++, atrack++;

	while (dobj_desc->index != 0x12)
	{
		GObj* item_gobj = itManagerMakeItemSetupCommon(NULL, nITKindTarget, &dobj_desc->translate, &sp48, 1);
		if (*atrack != NULL)
		{
			omAddDObjAnimAll(DObjGetStruct(item_gobj), *atrack, 0.0F);
			func_8000DF34_EB34(item_gobj);
		}
		dobj_desc++, atrack++, gGRCommonStruct.bonus1.target_count++;
	}
	if (gGRCommonStruct.bonus1.target_count != 10)
	{
		gsFatalPrintF("Error : not %d targets!\n", 10);
		while (TRUE)
			;
	}
}

// 8018D4C4
void scBonusGame_UpdateBonus1TargetInterface()
{
	s32 i;
	SObj* sobj = SObjGetStruct(gGRCommonStruct.bonus1.interface_gobj);

	for (i = 0; i < gGRCommonStruct.bonus1.target_count; i++)
		sobj = sobj->next;
	omEjectSObj(sobj);
}

// 8018D510
void scBonusGame_UpdateBonus1TargetCount()
{
	gGRCommonStruct.bonus1.target_count--;
	scBonusGame_UpdateBonus1TargetInterface();
	if (gGRCommonStruct.bonus1.target_count == 0)
	{
		if ((gSceneData.scene_previous != 0x34)
			&& (gSaveData.spgame_records[gSceneData.bonus_char_id].bonus1_task_count == 10)
			&& (gBattleState->match_time_current < gSaveData.spgame_records[gSceneData.bonus_char_id].bonus1_time))
			ifCommonAnnounceCompleteInitInterface(0x1D0);
		else
			ifCommonAnnounceCompleteInitInterface(0x1CB);

		ifCommonBattleEndAddSoundQueueID(0x118U);
	}
}

// 8018D5C8
void func_ovl6_8018D5C8() { scBonusGame_InitBonus1Targets(); }

// 8018D5E8
void func_ovl6_8018D5E8()
{
	D_ovl2_801313F4 = rdManagerGetFileWithExternHeap(
		(u32)&D_NF_00000088, gsMemoryAlloc(rdManagerGetFileSize((u32)&D_NF_00000088), 0x10U));
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
	dobj = gMPYakumonoDObjs->yakumono_dobj[index];
	index = scBonusGame_GetBonus2PlatformKind(line_id);

	func_ovl0_800C8B28(dobj,
					   (void*)((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4
							   + (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x0),
					   NULL, 0x44, 0, 0);
	func_ovl0_800C9228(dobj->child, (void*)((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4
											+ (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x8));

	func_ovl0_800C88AC(dobj->child,
					   ((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4
						+ (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x4),
					   ((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4
						+ (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0xC),
					   0.0F);

	func_ovl0_800C92C8(dobj->child);
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
			if (gMPYakumonoDObjs->yakumono_dobj[room_id]->actor.atrack == NULL)
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
	omEjectSObj(sobj);
}

// 8018D8DC
void scBonusGame_UpdateBonus2PlatformCount(DObj* dobj)
{
	s32 index = dobj->child->user_data.s & ~0x8000;

	omEjectDObj(dobj->child);

	func_ovl0_800C8B28(
		dobj,
		(void*)((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4 + (intptr_t)D_ovl6_8018EFE4[index].unk_bonus2unk_0x0),
		NULL, 0x44, 0, 0);
	func_ovl0_800C8758(
		dobj->child,
		(void*)((uintptr_t)gGRCommonStruct.bonus2.unk_bonus2_0x4 + (intptr_t)D_ovl6_8018EFE4[index].unk_bonus2unk_0x4),
		0.0F);
	func_ovl0_800C92C8(dobj->child);

	gGRCommonStruct.bonus2.platform_count--;

	scBonusGame_UpdateBonus2PlatformInterface();
	func_800269C0_275C0(nGMSoundFGMBonus2PlatformLanding);

	if (gGRCommonStruct.bonus2.platform_count == 0)
	{
		if ((gSceneData.scene_previous != 0x34)
			&& (gSaveData.spgame_records[gSceneData.bonus_char_id].bonus2_task_count == GMBATTLE_BONUSGAME_TASK_MAX)
			&& (gBattleState->match_time_current < gSaveData.spgame_records[gSceneData.bonus_char_id].bonus2_time))
			ifCommonAnnounceCompleteInitInterface(nGMSoundVoiceAnnounceNewRecord);
		else
			ifCommonAnnounceCompleteInitInterface(nGMSoundVoiceAnnounceComplete);

		ifCommonBattleEndAddSoundQueueID(nGMSoundFGMBonus2PlatformLanding);
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
			DObj* dobj = gMPYakumonoDObjs->yakumono_dobj[mpCollisionSetDObjNoID(fp->coll_data.ground_line_id)];

			if (dobj->child->user_data.s != 0)
				scBonusGame_UpdateBonus2PlatformCount(dobj);
		}
		fighter_gobj = fighter_gobj->link_next;
	}
}

// 8018DAE0
void grBonus_Bonus2_MakeGround()
{
	omAddGObjCommonProc(omMakeGObjSPAfter(nOMObjCommonKindGround, NULL, 1U, 0x80000000U),
						scBonusGame_CheckBonus2PlatformLanding, 1, 4);
}

// 8018DB24
void scBonusGame_InitBonus2Bumpers()
{
	grBonus2Bumpers* bonus_desc;
	DObjDesc* dobj_desc;
	ATrack** atrack;
	Vec3f vel;
	GObj* item_gobj;

	if (gMPGroundData->map_nodes != NULL)
	{
		bonus_desc = ((uintptr_t)gMPGroundData->map_nodes
					  - (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - nGRKindBonus2Start].o_main);

		vel.x = vel.y = vel.z = 0.0F;
		dobj_desc
			= (DObjDesc*)((uintptr_t)bonus_desc
						  + (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - nGRKindBonus2Start]
								.o_main);
		atrack = (ATrack**)((uintptr_t)bonus_desc
							+ (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - nGRKindBonus2Start]
								  .o_anim);
		dobj_desc++, atrack++;

		while (dobj_desc->index != 0x12)
		{
			item_gobj = itManagerMakeItemSetupCommon(NULL, nITKindGBumper, &dobj_desc->translate, &vel,
													  ITEM_MASK_SPAWN_GROUND);
			if (*atrack != NULL)
			{
				omAddDObjAnimAll(DObjGetStruct(item_gobj), *atrack, 0.0F);
				func_8000DF34_EB34(item_gobj);
			}
			dobj_desc++, atrack++;
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
	gsStopCurrentProcess(60);
	ifCommonAnnounceGoMakeInterface();
	ifCommonPlayerDamageSetShowInterface();
	func_800269C0_275C0(0x1EA);
	ifCommonAnnounceGoSetStatus();
	omEjectGObj(NULL);
	gsStopCurrentProcess(1);
}

// 8018DCC4
void scBonusGame_MakeInterface()
{
	omAddGObjCommonProc(omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, 0xAU, 0x80000000U), scBonusGame_InitInterface, 0,
						5);
	gBattleState->game_status = nGMBattleGameStatusWait;
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
		= rdManagerGetFileWithExternHeap(&D_NF_00000097, gsMemoryAlloc(rdManagerGetFileSize(&D_NF_00000097), 0x10));
	gGRCommonStruct.bonus1.interface_gobj = interface_gobj
		= omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, 0xBU, 0x80000000);
	omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

	for (i = 0; i < gGRCommonStruct.bonus1.target_count; i++)
	{
		sobj = gcAppendSObjWithSprite(interface_gobj, (void*)((uintptr_t)sprites + (intptr_t)&D_NF_000001D0));
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
		= rdManagerGetFileWithExternHeap(&D_NF_00000097, gsMemoryAlloc(rdManagerGetFileSize(&D_NF_00000097), 0x10));
	gGRCommonStruct.bonus2.interface_gobj = interface_gobj
		= omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, 0xBU, 0x80000000);
	omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

	for (i = 0; i < gGRCommonStruct.bonus2.platform_count; i++)
	{
		sobj = gcAppendSObjWithSprite(interface_gobj, (void*)((uintptr_t)sprites + (intptr_t)&D_NF_000000C0));
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
	s32 mpoint;

	mpCollisionGetMapObjIDsKind(nMPMapObjKind1PGamePlayerSpawn, &mpoint);
	mpCollisionGetMapObjPositionID(mpoint, pos);
}

// 8018E114
void scBonusGame_InitTimer(GObj* interface_gobj)
{
	s32 unit;
	u32 itime;
	f32 ftime;
	SObj* sobj;
	s32 i;

	itime = gBattleState->match_time_current;
	sobj = SObjGetStruct(interface_gobj);

	if (itime > I_TIME_TO_FRAMES(0, 59, 59, 59))
		itime = I_TIME_TO_FRAMES(0, 59, 59, 59);
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
		omEjectGObj(interface_gobj);
	}
}

// 8018E2E8
void scBonusGame_MakeBonusTimerGObj()
{
	gIsBonusGameTimeUp = FALSE;
	if (gSceneData.scene_previous == 0x34)
		omAddGObjCommonProc(omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, 0xBU, 0x80000000U),
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
		interface_gobj = omMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, 0xBU, 0x80000000U);
		omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17U, 0x80000000U, -1);

		for (i = 0; i < ARRAY_COUNT(gBonusTimerDigits); i++)
		{
			sobj = gcAppendSObjWithSprite(interface_gobj,
										  (void*)((uintptr_t)gGMCommonFiles[3] + (intptr_t)&D_NF_00000138));
			sobj->pos.x = scBonusGame_Timer_DigitPositions[i] - (sobj->sprite.width * 0.5F);
			sobj->pos.y = 30.0F - (sobj->sprite.height * 0.5F);
			gBonusTimerDigits[i] = 0;
		}
		sobj = SObjGetStruct(interface_gobj);
		sobj->sprite.attr |= SP_HIDDEN;

		sobj = gcAppendSObjWithSprite(interface_gobj,
									  (void*)((uintptr_t)gGMCommonFiles[3] + (intptr_t)&D_NF_00001140));
		sobj->pos.x = (s32)(231.0F - (sobj->sprite.width * 0.5F));
		sobj->pos.y = (s32)(20.0F - (sobj->sprite.height * 0.5F));

		sobj = gcAppendSObjWithSprite(interface_gobj,
									  (void*)((uintptr_t)gGMCommonFiles[3] + (intptr_t)&D_NF_00001238));
		sobj->pos.x = (s32)(264.0F - (sobj->sprite.width * 0.5F));
		sobj->pos.y = (s32)(20.0F - (sobj->sprite.height * 0.5F));

		omAddGObjCommonProc(interface_gobj, scBonusGame_InitTimer, 1, 5);
		return;
	}
	else
	{
		ifCommonTimerMakeInterface(scBonusGame_SetTimeUp);
		ifCommonTimerMakeDigitSObjs();
	}
}

// 8018E5D8
void scBonusGame_SetPlayerInterfacePositions()
{
	gIFPlayerCommonInterface.ifplayers_pos_x = scBonusGame_Player_InterfacePositions;
	gIFPlayerCommonInterface.ifplayers_pos_y = 210;
}

// 8018E5F8
void scBonusGame_InitBonusGame()
{
	s32 unused[3];
	s32 player;
	GObj* fighter_gobj;
	ftCreateDesc player_spawn;
	Unk800D4060 unk_struct;

	func_ovl6_8018D0F0();
	func_ovl6_8018ED70();
	func_ovl6_8018D330();
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
	ftManagerAllocFighter(2, GMBATTLE_PLAYERS_MAX);
	wpManagerAllocWeapons();
	efManagerInitEffects();
	ifScreenFlashMakeInterface(0xFF);
	gmRumbleMakeActor();
	ftPublicitySetup();

	for (player = 0, player_spawn = dFTManagerDefaultFighterDesc; player < ARRAY_COUNT(gBattleState->players);
		 player++)
	{
		if (gBattleState->players[player].pl_kind == nFTPlayerKindNot)
			continue;

		ftManagerSetupDataKind(gBattleState->players[player].ft_kind);

		player_spawn.ft_kind = gBattleState->players[player].ft_kind;

		scBonusGame_GetPlayerSpawnPosition(&player_spawn.pos);

		player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? nGMDirectionL : nGMDirectionR;

		player_spawn.team = 0;
		player_spawn.player = player;
		player_spawn.model_lod = nFTPartsDetailHigh;
		player_spawn.costume = gBattleState->players[player].costume;

		player_spawn.pl_kind = gBattleState->players[player].pl_kind;
		player_spawn.controller = &gPlayerControllers[player];

		player_spawn.anim_heap = ftManagerAllocAnimHeapKind(gBattleState->players[player].ft_kind);
		player_spawn.is_skip_entry = TRUE;

		fighter_gobj = ftManagerMakeFighter(&player_spawn);

		ftParamInitPlayerBattleStats(player, fighter_gobj);

		break;
	}

	ftManagerSetupDataPlayables();
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
	mpCollisionSetPlayMusicID();
	func_800269C0_275C0(0x272U);
	func_ovl6_8018E344();
	scBonusGame_InitCameraVars();

	unk_struct = D_ovl6_8018F03C;

	func_ovl0_800D4060(0x3FD, 0xD, 0xA, &unk_struct, 0xC, 1, 0);
	scBonusGame_MakeBonusTimerGObj();
}

// 8018E8D0
void scBonusGame_SetBonusEndStats(sb32 is_practice)
{
	g1PGameTotalDamageTaken += gBattleState->players[gSceneData.spgame_player].total_damage_all;

	if (is_practice != FALSE)
	{
		gSceneData.spgame_time_seconds = 0;
		gSceneData.bonus_get_mask[0] = 0;
		gSceneData.bonus_get_mask[1] = 0;
		gSceneData.bonus_get_mask[2] = 0;
	}
	else
	{
		gSceneData.spgame_time_seconds = (gBattleState->match_time_remain + 59) / GS_TIME_SEC;
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

					lbMemory_SaveData_WriteSRAM(gBattleState);
				}
			}
			else
			{
				gSaveData.spgame_records[ft_kind].bonus1_task_count = GMBATTLE_BONUSGAME_TASK_MAX;

				if (gBattleState->match_time_current < gSaveData.spgame_records[ft_kind].bonus1_time)
				{
					gSaveData.spgame_records[ft_kind].bonus1_time = gBattleState->match_time_current;

					lbMemory_SaveData_WriteSRAM(gBattleState);
				}
			}
		}
		else if (is_tasks_fail != FALSE)
		{
			if (gSaveData.spgame_records[ft_kind].bonus2_task_count < gSceneData.bonus_tasks_current)
			{
				gSaveData.spgame_records[ft_kind].bonus2_task_count = gSceneData.bonus_tasks_current;

				lbMemory_SaveData_WriteSRAM(gBattleState);
			}
		}
		else
		{
			gSaveData.spgame_records[ft_kind].bonus2_task_count = GMBATTLE_BONUSGAME_TASK_MAX;

			if (gBattleState->match_time_current < gSaveData.spgame_records[ft_kind].bonus2_time)
			{
				gSaveData.spgame_records[ft_kind].bonus2_time = gBattleState->match_time_current;

				lbMemory_SaveData_WriteSRAM(gBattleState);
			}
		}
	}
}

// 8018EA80
void scBonusGame_SetGeometryRenderLights(Gfx** display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

	ftRenderLightsDrawReflect(display_list, gMPLightAngleX, gMPLightAngleY);
}

// 8018EACC
void scManager_BonusGame_InitScene()
{
	u16 bonus_complete_chars;
	s32 task_count;
	u32 tasks_complete;
	s32 i;

	D_ovl6_8018F080.unk_scdatabounds_0xC = (void*)((uintptr_t)&D_NF_800A5240 - 0x1900);

	func_80007024(&D_ovl6_8018F080);

	D_ovl6_8018F09C.arena_size = ((uintptr_t)&lOverlay6ArenaHi - (uintptr_t)&lOverlay6ArenaLo);
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

	if (gBattleState->game_status != nGMBattleGameStatusPause)
	{
		task_count = (gBattleState->gr_kind <= nGRKindBonus1End) ? gGRCommonStruct.bonus1.target_count
																  : gGRCommonStruct.bonus2.platform_count;

		tasks_complete = GMBATTLE_BONUSGAME_TASK_MAX - task_count;

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
			scBonusGame_SaveBonusRecordSRAM(task_count, gSceneData.bonus_char_id);

			switch (gSceneData.scene_previous)
			{
			case 0x13:
				gSceneData.scene_current = 0x13;

				if (tasks_complete == GMBATTLE_BONUSGAME_TASK_MAX)
				{
					if (!(gSaveData.unlock_mask & GMBACKUP_UNLOCK_MASK_LUIGI))
					{
						for (bonus_complete_chars = i = 0; i < ARRAY_COUNT(gSaveData.spgame_records); i++)
						{
							if (gSaveData.spgame_records[i].bonus1_task_count == GMBATTLE_BONUSGAME_TASK_MAX)
								bonus_complete_chars |= (1 << i);
						}
						if ((bonus_complete_chars & GMBACKUPINFO_CHARACTER_MASK_STARTER)
							== GMBACKUPINFO_CHARACTER_MASK_STARTER)
						{
							gSceneData.ft_kind = gSceneData.bonus_char_id;
							gSceneData.costume = gSceneData.bonus_costume_id;

							gSceneData.spgame_stage = nGM1PGameStageLuigi;
							gSceneData.scene_current = 0x34;

							break;
						}
					}
					if (func_ovl2_800D6630() != FALSE)
					{
						gSceneData.unk02 = 5;
						gSceneData.scene_current = 0xC;
					}
					break;
				}
				else
					break;

			default:
				gSceneData.scene_current = 0x14;

				if ((tasks_complete == GMBATTLE_BONUSGAME_TASK_MAX) && (func_ovl2_800D6630() != FALSE))
				{
					gSceneData.unk02 = 5;
					gSceneData.scene_current = 0xC;
				}
				break;
			}
			break;
		}
		gSceneData.scene_previous = 0x35;
	}
}
