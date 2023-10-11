#include <gm/battle.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <it/item.h>

// 0x8018F1A0
void *D_ovl6_8018F1A0;

// 0x8018F1B0
gmMatchInfo gBonusBattleState;

extern intptr_t D_NF_00000088;
extern intptr_t D_NF_000000FD;

// 0x8018EEC4
grBonus1Targets scBonusGame_Bonus1_TargetOffsets[/* */] =
{
    // Bonus1Mario
    {
        0x1EB0, 
        0x2150, 
        0x2360
    },

    // Bonus1Fox
    {
        0x2068,
        0x24B0,
        0x26C0
    },

    // Bonus1Donkey
    {
        0x1F20,
        0x2250,
        0x2460
    },

    // Bonus1Samus
    {
        0x1868,
        0x1B30,
        0x1D40
    },

    // Bonus1Luigi
    {
        0x1BA0,
        0x2020,
        0x2230
    },

    // Bonus1Link
    {
        0x2378,
        0x2770,
        0x2980
    },

    // Bonus1Yoshi
    {
        0x2D68,
        0x3290,
        0x34A0
    },

    // Bonus1Captain
    {
        0x1888,
        0x1B70,
        0x1D80
    },

    // Bonus1Kirby
    {
        0x2150,
        0x2510,
        0x2720
    },

    // Bonus1Pikachu
    {
        0x2658,
        0x2A70,
        0x2C80
    },

    // Bonus1Purin
    {
        0x1FF8,
        0x23A0,
        0x25B0
    },

    // Bonus1Ness
    {
        0x2940,
        0x2E60,
        0x3070
    }
};

// 0x8018EF54
grBonus2Bumpers scBonusGame_Bonus2_BumperOffsets[/* */] =
{
    // Mario
    { 0x0000, 0x0000 },

    // Fox
    { 0xE160, 0xE350 },

    // Donkey
    { 0x0000, 0x0000 },

    // Samus
    { 0x0000, 0x0000 },

    // Luigi
    { 0x2910, 0x29C0 },

    // Link
    { 0x0000, 0x0000 },

    // Yoshi
    { 0x0000, 0x0000 },

    // Captain
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

// 0x8018EFB4
grBonus2Nodes scBonusGame_Bonus2_PlatformOffsets[/* */] =
{
    // Narrow
    {
        0x3DA8,
        0x3E60,
        0x3720,
        0x3F00
    },

    // Medium
    {
        0x45D8,
        0x4690,
        0x3F70,
        0x4730
    },

    // Wide
    {
        0x4E08,
        0x4EC0,
        0x47A0,
        0x4F70
    },

    // Unk1
    {
        0x5520,
        0x55D0,
        0x5B80,
        0x5C30
    }
};

// 0x8018EFE4
grBonus2Unk D_ovl6_8018EFE4[/* */] = 
{
    { 0x5520, 0x55D0 },
    { 0x5B80, 0x5C30 },
    { 0x61E0, 0x6290 }
};

// 0x8018D0D0
void func_ovl6_8018D0D0(void)
{
    func_ovl2_8011485C();
}

// 0x8018D0F0
void func_ovl6_8018D0F0(void)
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

        gBattleState->time_limit = GMMATCH_TIMELIMIT_INFINITE;

        if (gSceneData.scene_queue == 3)
        {
            if (gSceneData.unk16 != 0x64)
            {
                gBattleState->time_limit = 2;
            }
            gBattleState->gr_kind = ft_kind + Gr_Kind_Bonus1Start;
        }
        else
        {
            if (gSceneData.unk16 != 0x64)
            {
                gBattleState->time_limit = 2;
            }
            gBattleState->gr_kind = ft_kind + Gr_Kind_Bonus2Start;
        }
    }
    else
    {
        ft_kind = gSceneData.unk39;

        gBattleState->time_limit = 0x64;

        if (gSceneData.scene_previous == 0x13)
        {
            gBattleState->gr_kind = ft_kind + Gr_Kind_Bonus1Start;
        }
        else gBattleState->gr_kind = ft_kind + Gr_Kind_Bonus2Start;
    }
    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        if (player == gSceneData.player_port)
        {
            gBattleState->player_block[player].player_kind = Pl_Kind_Human;
            gBattleState->player_block[player].character_kind = ft_kind;

            if (gSceneData.scene_previous == 0x34)
            {
                gBattleState->player_block[player].costume_index = gSceneData.costume_index;
            }
            else gBattleState->player_block[player].costume_index = gSceneData.unk3A;

            gBattleState->player_block[player].team_color_index = player;
        }
        else gBattleState->player_block[player].player_kind = Pl_Kind_None;
    }
}

// 0x8018D330
void func_ovl6_8018D330(void)
{
    D_ovl6_8018F1A0 = rldm_get_file_with_external_heap((u32)&D_NF_000000FD, hal_alloc(rldm_bytes_needed_to_load((u32)&D_NF_000000FD), 0x10));
}

// 0x8018D374
void scBonusGame_InitBonus1Targets(void)
{
    grBonus1Targets *bonus_desc = &scBonusGame_Bonus1_TargetOffsets[gBattleState->gr_kind - Gr_Kind_Bonus1Start];
    ATrack **atrack;
    DObjDesc *dobj_desc;
    Vec3f vel;

    vel.x = vel.y = vel.z = 0.0F;

    dobj_desc = (DObjDesc*) ((uintptr_t)((uintptr_t)gGroundInfo->gr_desc[1].dobj_desc - (intptr_t)bonus_desc->o_main) + (intptr_t)bonus_desc->o_dobjdesc);
    atrack = (ATrack**) ((uintptr_t)((uintptr_t)gGroundInfo->gr_desc[1].dobj_desc - (intptr_t)bonus_desc->o_main) + (intptr_t)bonus_desc->o_anim);

    gGroundStruct.bonus1.target_count = 0;

    dobj_desc++, atrack++;

    while (dobj_desc->index != 0x12)
    {
        GObj *item_gobj = itManager_MakeItemSetupCommon(NULL, It_Kind_Target, &dobj_desc->translate, &vel, ITEM_MASK_SPAWN_GROUND);

        if (*atrack != NULL)
        {
            omAddDObjAnimAll(DObjGetStruct(item_gobj), *atrack, 0.0F);
            func_8000DF34(item_gobj);
        }
        dobj_desc++, atrack++, gGroundStruct.bonus1.target_count++;
    }
    if (gGroundStruct.bonus1.target_count != GMMATCH_BONUSGAME_TASK_MAX)
    {
        fatal_printf("Error : not %d targets!\n", GMMATCH_BONUSGAME_TASK_MAX);

        while (TRUE);
    }
}

// 0x8018D4C4
void scBonusGame_UpdateBonus1TargetInterface(void)
{
    s32 i;
    SObj *sobj = SObjGetStruct(gGroundStruct.bonus1.interface_gobj);

    for (i = 0; i < gGroundStruct.bonus1.target_count; i++)
    {
        sobj = sobj->unk_sobj_0x8;
    }
    func_800096EC(sobj);
}

// 0x8018D510
void scBonusGame_UpdateBonus1TargetCount(void)
{
    gGroundStruct.bonus1.target_count--;

    scBonusGame_UpdateBonus1TargetInterface();

    if (gGroundStruct.bonus1.target_count == 0)
    {
        if
        (
            (gSceneData.scene_previous != 0x34)                                                          &&
            (gSaveData.spgame_records[gSceneData.unk39].bonus1_task_count == GMMATCH_BONUSGAME_TASK_MAX) &&
            (gBattleState->match_time_current < gSaveData.spgame_records[gSceneData.unk39].bonus1_time)
        )
        {
            func_ovl2_80114D58(alSound_Voice_AnnounceNewRecord);
        }
        else func_ovl2_80114D58(alSound_Voice_AnnounceComplete);

        func_ovl2_80113804(alSound_SFX_Bonus1TargetBreak);
    }
}

// 0x8018D5E8
void func_ovl6_8018D5E8(void)
{
    gGroundStruct.bonus2.unk_bonus2_0x4 =

    rldm_get_file_with_external_heap
    (
        (u32)&D_NF_00000088,
        hal_alloc(rldm_bytes_needed_to_load((u32)&D_NF_00000088), 0x10)
    );
}

// 0x8018D62C
s32 scBonusGame_GetBonus2PlatformKind(s32 line_id)
{
    Vec3f pos_left;
    Vec3f pos_right;

    mpCollision_GetLREdgeLeft(line_id, &pos_left);
    mpCollision_GetLREdgeRight(line_id, &pos_right);

    if ((pos_right.x - pos_left.x) <= 750.0F)
    {
        return grBonus_PlatformKind_Narrow;
    }
    else if ((pos_right.x - pos_left.x) <= 1050.0F)
    {
        return grBonus_PlatformKind_Medium;
    }
    else return grBonus_PlatformKind_Wide;
}

// 0x8018D6A8
void func_ovl6_8018D6A8(s32 line_id)
{
    DObj *dobj;
    s32 index;

    index = mpCollision_SetDObjNoID(line_id);

    dobj = gMapRooms->room_dobj[index];

    index = scBonusGame_GetBonus2Platformindex(line_id);

    func_ovl0_800C8B28(dobj, (void*) ((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4 + (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x0), NULL, 0x44, 0, 0);
    func_ovl0_800C9228(dobj->child, (void*) ((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4 + (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x8));

    func_ovl0_800C88AC
    (
        dobj->child,
        ((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4 + (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0x4),
        ((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4 + (intptr_t)scBonusGame_Bonus2_PlatformOffsets[index].unk_bonus2nodes_0xC),
        0.0F
    );

    func_ovl0_800C92C8(dobj->child);

    dobj->child->yakumono_id = index | 0x8000;
}

// 0x8018D794
void scBonusGame_InitBonus2Platforms(void)
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

            if (gMapRooms->room_dobj[room_id]->atrack == NULL)
            {
                mpCollision_SetYakumonoOnID(room_id);
            }
            func_ovl6_8018D6A8(line_ids[i]);

            gGroundStruct.bonus2.platform_count++;
        }
    }
}

// 0x8018D890
void scBonusGame_UpdateBonus2PlatformInterface(void)
{
    SObj *sobj = SObjGetStruct(gGroundStruct.bonus2.interface_gobj);
    s32 i;

    for (i = 0; i < gGroundStruct.bonus2.platform_count; i++)
    {
        sobj = sobj->unk_sobj_0x8;
    }
    func_800096EC(sobj);
}

// 0x8018D8DC
void scBonusGame_UpdateBonus2PlatformCount(DObj *dobj)
{
    s32 index = dobj->child->yakumono_id & ~0x8000;

    func_8000948C(dobj->child);

    func_ovl0_800C8B28(dobj, (void*) ((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4 + (intptr_t)D_ovl6_8018EFE4[index].unk_bonus2unk_0x0), NULL, 0x44, 0, 0);
    func_ovl0_800C8758(dobj->child, (void*) ((uintptr_t)gGroundStruct.bonus2.unk_bonus2_0x4 + (intptr_t)D_ovl6_8018EFE4[index].unk_bonus2unk_0x4), 0.0F);
    func_ovl0_800C92C8(dobj->child);

    gGroundStruct.bonus2.platform_count--;

    func_ovl6_8018D890();
    func_800269C0(alSound_SFX_Bonus2PlatformLanding);

    if (gGroundStruct.bonus2.platform_count == 0)
    {
        if
        (
            (gSceneData.scene_previous != 0x34)                                                          &&
            (gSaveData.spgame_records[gSceneData.unk39].bonus2_task_count == GMMATCH_BONUSGAME_TASK_MAX) &&
            (gBattleState->match_time_current < gSaveData.spgame_records[gSceneData.unk39].bonus2_time)
        )
        {
            func_ovl2_80114D58(alSound_Voice_AnnounceNewRecord);
        }
        else func_ovl2_80114D58(alSound_Voice_AnnounceComplete);

        func_ovl2_80113804(alSound_SFX_Bonus2PlatformLanding);
    }
}

// 0x8018DA2C
void scBonusGame_CheckBonus2PlatformLanding(GObj *ground_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if ((fp->ground_or_air == GA_Ground) && ((fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK) == mpCollision_Material_Detect))
        {
            DObj *dobj = gMapRooms->room_dobj[mpCollision_SetDObjNoID(fp->coll_data.ground_line_id)];

            if (dobj->child->yakumono_id != 0)
            {
                scBonusGame_UpdateBonus2PlatformCount(dobj);
            }
        }
        fighter_gobj = fighter_gobj->group_gobj_next;
    }
}

// 0x8018DAE0
void grBonus_Bonus2_MakeGround(void)
{
    omAddGObjCommonProc(omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1U, 0x80000000U), scBonusGame_CheckBonus2PlatformLanding, 1, 4);
}

// 0x8018DB24
void scBonusGame_InitBonus2Bumpers(void)
{
    grBonus2Bumpers *bonus_desc;
    DObjDesc *dobj_desc;
    ATrack **atrack;
    Vec3f vel;
    GObj *item_gobj;

    if (gGroundInfo->map_nodes != NULL)
    {
        bonus_desc = ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - Gr_Kind_Bonus2Start].o_main);

        vel.x = vel.y = vel.z = 0.0F;

        dobj_desc = (DObjDesc*) ((uintptr_t)bonus_desc + (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - Gr_Kind_Bonus2Start].o_main);
        atrack = (ATrack**) ((uintptr_t)bonus_desc + (intptr_t)scBonusGame_Bonus2_BumperOffsets[gBattleState->gr_kind - Gr_Kind_Bonus2Start].o_anim);

        dobj_desc++, atrack++;

        while (dobj_desc->index != 0x12)
        {
            item_gobj = itManager_MakeItemSetupCommon(NULL, It_Kind_GBumper, &dobj_desc->translate, &vel, ITEM_MASK_SPAWN_GROUND);

            if (*atrack != NULL)
            {
                omAddDObjAnimAll(DObjGetStruct(item_gobj), *atrack, 0.0F);
                func_8000DF34(item_gobj);
            }
            dobj_desc++, atrack++;
        }
    }
}

// 0x8018DC70
void scBonusGame_InitInterface(GObj *interface_gobj)
{
    stop_current_process(60);
    func_ovl2_801120D4();
    ifPlayer_Damage_InitInterface();
    func_800269C0(0x1EA);
    func_ovl2_801121C4();
    omEjectGObjCommon(NULL);
    stop_current_process(1);
}

// 0x8018DCC4
void scBonusGame_MakeInterface(void)
{
    omAddGObjCommonProc(omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xAU, 0x80000000U), scBonusGame_InitInterface, 0, 5);

    gBattleState->game_status = gmMatch_GameStatus_Wait;
}

// 0x8018DD14
void scBonusGame_InitCameraVars(void)
{
    s32 player;

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        if (gBattleState->player_block[player].player_kind == Pl_Kind_None) continue;

        if (gBattleState->gr_kind >= Gr_Kind_Bonus2Start)
        {
            // -0.261799395084F, 9000.0F
            func_ovl2_8010CFA8(gBattleState->player_block[player].fighter_gobj, 0.0F, F_DEG_TO_RAD(-15.0F), 9000.0F, 0.3F, 31.5F);
        }
        // -0.157079637051, 9000.0F
        else func_ovl2_8010CFA8(gBattleState->player_block[player].fighter_gobj, 0.0F, F_DEG_TO_RAD(-9.0F), 9000.0F, 0.3F, 31.5F);

        break;
    }
}

