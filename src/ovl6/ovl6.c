#include <gm/battle.h>
#include <gr/grdef.h>
#include <ft/fttypes.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <it/itdef.h>
#include <gm/gmsound.h>
#include <sys/om.h>
#include <mp/mpcollision.h>
#include <it/ittypes.h>
#include <sys/rldm.h>

#include "ovl6.h"

// 8018D0C0
void func_ovl6_8018D0C0() {}

// 8018D0C8
void func_ovl6_8018D0C8() {}

// 8018D0D0
void func_ovl6_8018D0D0() { func_ovl2_8011485C(); }

// 8018D0F0
void func_ovl6_8018D0F0()
{
	s32 player;
	s32 ft_kind;

	gSceneData.is_reset = FALSE;
	gBonusBattleState = gDefaultBattleState;

	gBattleState = &gBonusBattleState;
	gBattleState->game_type = gmMatch_GameType_Bonus;
	gBattleState->match_rules = GMMATCH_GAMERULE_BONUS | GMMATCH_GAMERULE_TIME;
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
			gBattleState->gr_kind = ft_kind + Gr_Kind_Bonus1Start;
		}
		else
		{
			if (gSceneData.spgame_time_limit != 0x64)
				gBattleState->time_limit = 2;
			gBattleState->gr_kind = ft_kind + Gr_Kind_Bonus2Start;
		}
	}
	else
	{
		ft_kind = gSceneData.unk39;
		gBattleState->time_limit = 0x64;
		if (gSceneData.scene_previous == 0x13)
			gBattleState->gr_kind = ft_kind + Gr_Kind_Bonus1Start;
		else
			gBattleState->gr_kind = ft_kind + Gr_Kind_Bonus2Start;
	}
	for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
	{
		if (player == gSceneData.player_port)
		{
			gBattleState->player_block[player].player_kind = Pl_Kind_Man;
			gBattleState->player_block[player].character_kind = ft_kind;

			if (gSceneData.scene_previous == 0x34)
				gBattleState->player_block[player].costume_index = gSceneData.costume_index;
			else
				gBattleState->player_block[player].costume_index = gSceneData.unk3A;

			gBattleState->player_block[player].player_color_index = player;
		}
		else
			gBattleState->player_block[player].player_kind = Pl_Kind_Not;
	}
}

// 8018D330
void func_ovl6_8018D330()
{
	D_ovl6_8018F1A0[0] = rldm_get_file_with_external_heap(
		(u32)&D_NF_000000FD, hal_alloc(rldm_bytes_needed_to_load((u32)&D_NF_000000FD), 0x10));
}

// 8018D374
void scBonusGame_InitBonus1Targets()
{
	grBonusDesc* bonus_desc = &D_ovl6_8018EEC4[gBattleState->gr_kind - Gr_Kind_Bonus1Start];
	void** atrack;
	DObjDesc* dobj_desc;
	Vec3f sp48;

	sp48.x = sp48.y = sp48.z = 0.0F;

	dobj_desc = (DObjDesc*)((uintptr_t)((uintptr_t)gGroundInfo->gr_desc[1].dobj_desc - (intptr_t)bonus_desc->o_main)
							+ (intptr_t)bonus_desc->o_dobjdesc);
	atrack = (void**)((uintptr_t)((uintptr_t)gGroundInfo->gr_desc[1].dobj_desc - (intptr_t)bonus_desc->o_main)
					  + (intptr_t)bonus_desc->o_anim);

	gGroundStruct.bonus1.target_count = 0;
	dobj_desc++, atrack++;

	while (dobj_desc->index != 0x12)
	{
		GObj* item_gobj = itManager_MakeItemSetupCommon(NULL, It_Kind_Target, &dobj_desc->translate, &sp48, 1);
		if (*atrack != NULL)
		{
			omAddDObjAnimAll(DObjGetStruct(item_gobj), *atrack, 0.0F);
			func_8000DF34(item_gobj);
		}
		dobj_desc++, atrack++, gGroundStruct.bonus1.target_count++;
	}
	if (gGroundStruct.bonus1.target_count != 10)
	{
		fatal_printf("Error : not %d targets!\n", 10);
		while (TRUE)
			;
	}
}

// 8018D4C4
void scBonusGame_UpdateBonus1TargetInterface()
{
	s32 i;
	SObj* sobj = SObjGetStruct(gGroundStruct.bonus1.interface_gobj);

	for (i = 0; i < gGroundStruct.bonus1.target_count; i++)
		sobj = sobj->next;
	func_800096EC(sobj);
}

// 8018D510
void scBonusGame_UpdateBonus1TargetCount()
{
	gGroundStruct.bonus1.target_count--;
	func_ovl6_8018D4C4();
	if (gGroundStruct.bonus1.target_count == 0)
	{
		if ((gSceneData.scene_previous != 0x34) && (gSaveData.spgame_records[gSceneData.unk39].bonus1_task_count == 10)
			&& (gBattleState->match_time_current < gSaveData.spgame_records[gSceneData.unk39].bonus1_time))
			func_ovl2_80114D58(0x1D0);
		else
			func_ovl2_80114D58(0x1CB);

		func_ovl2_80113804(0x118U);
	}
}

// 8018D5C8
void func_ovl6_8018D5C8() { func_ovl6_8018D374(); }

// 8018D5E8
void func_ovl6_8018D5E8()
{
	D_ovl2_801313F4 = rldm_get_file_with_external_heap(
		(u32)&D_NF_00000088, hal_alloc(rldm_bytes_needed_to_load((u32)&D_NF_00000088), 0x10U));
}

// 8018D62C
s32 scBonusGame_GetBonus2PlatformKind(s32 line_id)
{
	Vec3f pos_left;
	Vec3f pos_right;

	mpCollision_GetLREdgeLeft(line_id, &pos_left);
	mpCollision_GetLREdgeRight(line_id, &pos_right);

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

	index = mpCollision_SetDObjNoID(line_id);
	dobj = gMapRooms->room_dobj[index];
	index = scBonusGame_GetBonus2Platformindex(line_id);

	func_ovl0_800C8B28(dobj,
					   (void*)((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4
							   + (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x0),
					   NULL, 0x44, 0, 0);
	func_ovl0_800C9228(dobj->child, (void*)((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4
											+ (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x8));

	func_ovl0_800C88AC(dobj->child,
					   ((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4
						+ (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x4),
					   ((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4
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

	line_count = mpCollision_GetLineCountType(mpCollision_LineType_Ground);
	gGroundStruct.bonus2.platform_count = 0;
	mpCollision_GetLineIDsTypeCount(mpCollision_LineType_Ground, line_count, line_ids);

	for (i = 0; i < line_count; i++)
	{
		if ((mpCollision_GetVertexFlagsLineID(line_ids[i]) & MPCOLL_VERTEX_MAT_MASK) == mpCollision_Material_Detect)
		{
			room_id = mpCollision_SetDObjNoID(line_ids[i]);
			if (gMapRooms->room_dobj[room_id]->actor.atrack == NULL)
				mpCollision_SetYakumonoOnID(room_id);
			func_ovl6_8018D6A8(line_ids[i]);
			gGroundStruct.bonus2.platform_count++;
		}
	}
}

// 8018D890
void scBonusGame_UpdateBonus2PlatformInterface()
{
	SObj* sobj = SObjGetStruct(gGroundStruct.bonus2.interface_gobj);
	s32 i;

	for (i = 0; i < gGroundStruct.bonus2.platform_count; i++)
		sobj = sobj->next;
	func_800096EC(sobj);
}

// 8018D8DC
void scBonusGame_UpdateBonus2PlatformCount(DObj* dobj)
{
	s32 index = dobj->child->user_data.s & ~0x8000;

	func_8000948C(dobj->child);

	func_ovl0_800C8B28(
		dobj,
		(void*)((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4 + (intptr_t)D_ovl6_8018EFE4[index].unk_bonus2unk_0x0),
		NULL, 0x44, 0, 0);
	func_ovl0_800C8758(
		dobj->child,
		(void*)((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4 + (intptr_t)D_ovl6_8018EFE4[index].unk_bonus2unk_0x4),
		0.0F);
	func_ovl0_800C92C8(dobj->child);

	gGroundStruct.bonus2.platform_count--;

	func_ovl6_8018D890();
	func_800269C0(alSound_SFX_Bonus2PlatformLanding);

	if (gGroundStruct.bonus2.platform_count == 0)
	{
		if ((gSceneData.scene_previous != 0x34)
			&& (gSaveData.spgame_records[gSceneData.unk39].bonus2_task_count == GMMATCH_BONUSGAME_TASK_MAX)
			&& (gBattleState->match_time_current < gSaveData.spgame_records[gSceneData.unk39].bonus2_time))
			func_ovl2_80114D58(alSound_Voice_AnnounceNewRecord);
		else
			func_ovl2_80114D58(alSound_Voice_AnnounceComplete);

		func_ovl2_80113804(alSound_SFX_Bonus2PlatformLanding);
	}
}

// 8018DA2C
void scBonusGame_CheckBonus2PlatformLanding(GObj* ground_gobj)
{
	GObj* fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

	while (fighter_gobj != NULL)
	{
		ftStruct* fp = ftGetStruct(fighter_gobj);
		if ((fp->ground_or_air == GA_Ground)
			&& ((fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK) == mpCollision_Material_Detect))
		{
			DObj* dobj = gMapRooms->room_dobj[mpCollision_SetDObjNoID(fp->coll_data.ground_line_id)];

			if (dobj->child->user_data.s != 0)
				scBonusGame_UpdateBonus2PlatformCount(dobj);
		}
		fighter_gobj = fighter_gobj->link_next;
	}
}

// 8018DAE0
void grBonus_Bonus2_MakeGround()
{
	omAddGObjCommonProc(omMakeGObjCommon(GObj_Kind_Ground, NULL, 1U, 0x80000000U),
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

	if (gGroundInfo->map_nodes != NULL)
	{
		bonus_desc = ((uintptr_t)gGroundInfo->map_nodes
					  - (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - Gr_Kind_Bonus2Start].o_main);

		vel.x = vel.y = vel.z = 0.0F;
		dobj_desc
			= (DObjDesc*)((uintptr_t)bonus_desc
						  + (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - Gr_Kind_Bonus2Start]
								.o_main);
		atrack = (ATrack**)((uintptr_t)bonus_desc
							+ (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - Gr_Kind_Bonus2Start]
								  .o_anim);
		dobj_desc++, atrack++;

		while (dobj_desc->index != 0x12)
		{
			item_gobj = itManager_MakeItemSetupCommon(NULL, It_Kind_GBumper, &dobj_desc->translate, &vel,
													  ITEM_MASK_SPAWN_GROUND);
			if (*atrack != NULL)
			{
				omAddDObjAnimAll(DObjGetStruct(item_gobj), *atrack, 0.0F);
				func_8000DF34(item_gobj);
			}
			dobj_desc++, atrack++;
		}
	}
}

// 8018DC38
void func_ovl6_8018DC38()
{
	func_ovl6_8018DB24();
	func_ovl6_8018D5E8();
	func_ovl6_8018D794();
	func_ovl6_8018DAE0();
}

// 8018DC70
void scBonusGame_InitInterface(GObj* interface_gobj)
{
	stop_current_process(60);
	func_ovl2_801120D4();
	ifPlayer_Damage_InitInterface();
	func_800269C0(0x1EA);
	func_ovl2_801121C4();
	omEjectGObjCommon(NULL);
	stop_current_process(1);
}

// 8018DCC4
void scBonusGame_MakeInterface()
{
	omAddGObjCommonProc(omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xAU, 0x80000000U), scBonusGame_InitInterface, 0,
						5);
	gBattleState->game_status = gmMatch_GameStatus_Wait;
}

// 8018DD14
void scBonusGame_InitCameraVars()
{
	s32 player;

	for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
	{
		if (gBattleState->player_block[player].player_kind == Pl_Kind_Not)
			continue;

		if (gBattleState->gr_kind >= Gr_Kind_Bonus2Start)
			func_ovl2_8010CFA8(gBattleState->player_block[player].fighter_gobj, 0.0F, F_DEG_TO_RAD(-15.0F), 9000.0F,
							   0.3F, 31.5F);
		else
			func_ovl2_8010CFA8(gBattleState->player_block[player].fighter_gobj, 0.0F, F_DEG_TO_RAD(-9.0F), 9000.0F,
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
		= rldm_get_file_with_external_heap(&D_NF_00000097, hal_alloc(rldm_bytes_needed_to_load(&D_NF_00000097), 0x10));
	gGroundStruct.bonus1.interface_gobj = interface_gobj
		= omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xBU, 0x80000000);
	omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

	for (i = 0; i < gGroundStruct.bonus1.target_count; i++)
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
		= rldm_get_file_with_external_heap(&D_NF_00000097, hal_alloc(rldm_bytes_needed_to_load(&D_NF_00000097), 0x10));
	gGroundStruct.bonus2.interface_gobj = interface_gobj
		= omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xBU, 0x80000000);
	omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

	for (i = 0; i < gGroundStruct.bonus2.platform_count; i++)
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
	if (gBattleState->gr_kind >= Gr_Kind_Bonus2Start)
		scBonusGame_InitBonus2PlatformSprites();
	else
		scBonusGame_InitBonus1TargetSprites();
}

// 8018E0E0
void scBonusGame_GetPlayerSpawnPosition(Vec3f* pos)
{
	s32 mpoint;

	mpCollision_GetMPointIDsKind(mpMPoint_Kind_1PGamePlayerSpawn, &mpoint);
	mpCollision_GetMPointPositionID(mpoint, pos);
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
			sobj->sprite = *(Sprite*)((uintptr_t)gCommonSpriteFiles[3] + (intptr_t)ifTimer_Digits_SpriteOffsets[unit]);
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
		func_ovl2_80114DD4();
		gIsBonusGameTimeUp = FALSE;
		omEjectGObjCommon(interface_gobj);
	}
}

// 8018E2E8
void scBonusGame_MakeBonusTimerGObj()
{
	gIsBonusGameTimeUp = FALSE;
	if (gSceneData.scene_previous == 0x34)
		omAddGObjCommonProc(omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xBU, 0x80000000U),
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
		ifTimer_BattleTime_SetInterface(NULL);
		func_ovl2_80112EBC();
		interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xBU, 0x80000000U);
		omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17U, 0x80000000U, -1);

		for (i = 0; i < ARRAY_COUNT(gBonusTimerDigits); i++)
		{
			sobj = gcAppendSObjWithSprite(interface_gobj,
										  (void*)((uintptr_t)gCommonSpriteFiles[3] + (intptr_t)&D_NF_00000138));
			sobj->pos.x = scBonusGame_Timer_DigitPositions[i] - (sobj->sprite.width * 0.5F);
			sobj->pos.y = 30.0F - (sobj->sprite.height * 0.5F);
			gBonusTimerDigits[i] = 0;
		}
		sobj = SObjGetStruct(interface_gobj);
		sobj->sprite.attr |= SP_HIDDEN;

		sobj = gcAppendSObjWithSprite(interface_gobj,
									  (void*)((uintptr_t)gCommonSpriteFiles[3] + (intptr_t)&D_NF_00001140));
		sobj->pos.x = (s32)(231.0F - (sobj->sprite.width * 0.5F));
		sobj->pos.y = (s32)(20.0F - (sobj->sprite.height * 0.5F));

		sobj = gcAppendSObjWithSprite(interface_gobj,
									  (void*)((uintptr_t)gCommonSpriteFiles[3] + (intptr_t)&D_NF_00001238));
		sobj->pos.x = (s32)(264.0F - (sobj->sprite.width * 0.5F));
		sobj->pos.y = (s32)(20.0F - (sobj->sprite.height * 0.5F));

		omAddGObjCommonProc(interface_gobj, scBonusGame_InitTimer, 1, 5);
		return;
	}
	else
	{
		ifTimer_BattleTime_SetInterface(scBonusGame_SetTimeUp);
		ifTimer_BattleTime_SetTimerDigits();
	}
}

// 8018E5D8
void scBonusGame_SetPlayerInterfacePositions()
{
	gPlayerCommonInterface.ifplayers_pos_x = scBonusGame_Player_InterfacePositions;
	gPlayerCommonInterface.ifplayers_pos_y = 210;
}

// 8018E5F8

// 8018E8D0

// 8018E95C

// 8018EA80

// 8018EACC

// 8018ED70

// 8018EE10

// 8018EE5C