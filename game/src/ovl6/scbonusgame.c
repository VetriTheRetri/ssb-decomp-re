#include <gm/battle.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <it/item.h>
#include <if/interface.h>
#include <gm/gmscript.h>

// 0x8018F1A0
itFileData *gBonusGameFileData[4]; // Don't know why but padding suggests there's 4 of these; perhaps this is in a separate file and padded out?

// 0x8018F1B0
gmMatchInfo gBonusBattleState;

// 0x8018F3A0
u8 gBonusTimerDigits[6];

// 0x8018F3A8
sb32 gIsBonusGameTimeUp;

extern void *gCommonSpriteFiles[/* */];
extern intptr_t ifTimer_Digits_SpriteOffsets[/* */];

extern intptr_t D_NF_00000088;
extern intptr_t D_NF_00000097;
extern intptr_t D_NF_000000C0;
extern intptr_t D_NF_000000FD;
extern intptr_t D_NF_00000138;
extern intptr_t D_NF_000001D0;
extern intptr_t D_NF_00001140;
extern intptr_t D_NF_00001238;
extern uintptr_t D_NF_800A5240;
extern uintptr_t lOverlay6ArenaLo; // 0x8018F710
extern uintptr_t lOverlay6ArenaHi; // 0x80392A00

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

// 0x8018EFFC - last one is apparently 0.554000020027F but precision is lost
f32 scBonusGame_Timer_UnitLengths[/* */] = { I_MIN_TO_FRAMES(10), I_MIN_TO_FRAMES(1), I_SEC_TO_FRAMES(10), I_SEC_TO_FRAMES(1), I_SEC_TO_FRAMES(1) / 10, 277.0F / 500.0F};

// 0x8018F014
s32 scBonusGame_Timer_DigitPositions[/* */] =
{
    /* 0 */ 207, 
    /* 1 */ 222,
    /* 2 */ 240,
    /* 3 */ 255,
    /* 4 */ 273,
    /* 5 */ 288
};

// 0x8018F02C
s32 scBonusGame_Player_InterfacePositions[/* */] = { 55, 55, 55, 55 };

// 0x8018F03C
Unk800D4060 D_ovl6_8018F03C = { 0 };

// 0x8018F040 - also contains 0x8018F048
Lights1 D_ovl6_8018F040[/* */] =
{
    gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x32, 0x32, 0x32)
};

// 0x8018F058
Gfx D_ovl6_8018F058[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights0(D_ovl6_8018F040)
    gsSPEndDisplayList()
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
            gBattleState->player_block[player].player_kind = Pl_Kind_Man;
            gBattleState->player_block[player].character_kind = ft_kind;

            if (gSceneData.scene_previous == 0x34)
            {
                gBattleState->player_block[player].costume_index = gSceneData.costume_index;
            }
            else gBattleState->player_block[player].costume_index = gSceneData.unk3A;

            gBattleState->player_block[player].player_color_index = player;
        }
        else gBattleState->player_block[player].player_kind = Pl_Kind_Not;
    }
}

// 0x8018D330
void func_ovl6_8018D330(void)
{
    gBonusGameFileData[0] = rldm_get_file_with_external_heap((u32)&D_NF_000000FD, hal_alloc(rldm_bytes_needed_to_load((u32)&D_NF_000000FD), 0x10));
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
        if (gBattleState->player_block[player].player_kind == Pl_Kind_Not) continue;

        if (gBattleState->gr_kind >= Gr_Kind_Bonus2Start)
        {
            // -0.261799395084F, 9000.0F
            func_ovl2_8010CFA8(gBattleState->player_block[player].fighter_gobj, 0.0F, F_DEG_TO_RAD(-15.0F), 9000.0F, 0.3F, 31.5F);
        }
        // -0.157079637051F, 9000.0F
        else func_ovl2_8010CFA8(gBattleState->player_block[player].fighter_gobj, 0.0F, F_DEG_TO_RAD(-9.0F), 9000.0F, 0.3F, 31.5F);

        break;
    }
}

// 0x8018DDE0
void scBonusGame_InitBonus1TargetSprites(void)
{
    GObj *interface_gobj;
    SObj *sobj;
    void *sprites;
    s32 i;

    sprites = rldm_get_file_with_external_heap(&D_NF_00000097, hal_alloc(rldm_bytes_needed_to_load(&D_NF_00000097), 0x10));

    gGroundStruct.bonus1.interface_gobj = interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xBU, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    for (i = 0; i < gGroundStruct.bonus1.target_count; i++)
    {
        sobj = func_ovl0_800CCFDC(interface_gobj, (void*) ((uintptr_t)sprites + (intptr_t)&D_NF_000001D0));

        sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

        sobj->pos.x = -(sobj->sprite.width / 2) + (((sobj->sprite.width + 3) * i) + 30);
        sobj->pos.y = 30 - (sobj->sprite.height / 2);
    }
}

// 0x8018DF3C
void scBonusGame_InitBonus2PlatformSprites(void)
{
    GObj *interface_gobj;
    SObj *sobj;
    void *sprites;
    s32 i;

    sprites = rldm_get_file_with_external_heap(&D_NF_00000097, hal_alloc(rldm_bytes_needed_to_load(&D_NF_00000097), 0x10));

    gGroundStruct.bonus2.interface_gobj = interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xBU, 0x80000000);

    omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    for (i = 0; i < gGroundStruct.bonus2.platform_count; i++)
    {
        sobj = func_ovl0_800CCFDC(interface_gobj, (void*) ((uintptr_t)sprites + (intptr_t)&D_NF_000000C0));

        sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

        sobj->pos.x = -(sobj->sprite.width / 2) + (((sobj->sprite.width + 3) * i) + 30);
        sobj->pos.y = 30 - (sobj->sprite.height / 2);
    }
}

// 0x8018E098
void scBonusGame_InitBonusGameSprites(void)
{
    if (gBattleState->gr_kind >= Gr_Kind_Bonus2Start)
    {
        scBonusGame_InitBonus2PlatformSprites();
    }
    else scBonusGame_InitBonus1TargetSprites();
}

// 0x8018E0E0
void scBonusGame_GetPlayerSpawnPosition(Vec3f *pos)
{
    s32 mpoint;

    mpCollision_GetMPointIDsKind(mpCollision_MPointKind_BonusPlayerSpawn, &mpoint);
    mpCollision_GetMPointPositionID(mpoint, pos);
}

// 0x8018E114
void scBonusGame_InitTimer(GObj *interface_gobj)
{
    s32 unit;
    u32 itime;
    f32 ftime;
    SObj *sobj;
    s32 i;

    itime = gBattleState->match_time_current;
    sobj = SObjGetStruct(interface_gobj);

    if (itime > I_TIME_TO_FRAMES(0, 59, 59, 59))
    {
        itime = I_TIME_TO_FRAMES(0, 59, 59, 59);
    }
    ftime = itime;

    for (i = 0; i < ARRAY_COUNT(gBonusTimerDigits); i++)
    {
        unit = (s32) (ftime / scBonusGame_Timer_UnitLengths[i]);
        ftime -= (unit * scBonusGame_Timer_UnitLengths[i]);

        if (unit != gBonusTimerDigits[i])
        {
            sobj->sprite = *(Sprite*) ((uintptr_t)gCommonSpriteFiles[3] + (intptr_t)ifTimer_Digits_SpriteOffsets[unit]);

            sobj->pos.x = scBonusGame_Timer_DigitPositions[i] - (sobj->sprite.width * 0.5F);
            sobj->pos.y = 30.0F - (sobj->sprite.height * 0.5F);

            gBonusTimerDigits[i] = unit;

            if (i == 0)
            {
                sobj->sprite.attr &= ~SP_HIDDEN;
            }
        }
        sobj = sobj->unk_sobj_0x8;
    }
}

// 0x8018E298
void scBonusGame_SetTimeUp(void)
{
    gIsBonusGameTimeUp = TRUE;
}

// 0x8018E2A8
void scBonusGame_CheckTimeUpEjectInterface(GObj *interface_gobj)
{
    if (gIsBonusGameTimeUp != FALSE)
    {
        func_ovl2_80114DD4();

        gIsBonusGameTimeUp = FALSE;

        omEjectGObjCommon(interface_gobj);
    }
}

// 0x8018E2E8
void scBonusGame_MakeBonusTimerGObj(void)
{
    gIsBonusGameTimeUp = FALSE;

    if (gSceneData.scene_previous == 0x34)
    {
        omAddGObjCommonProc(omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xBU, 0x80000000U), scBonusGame_CheckTimeUpEjectInterface, 1, 0);
    }
}

// 0x8018E344
void func_ovl6_8018E344(void)
{
    GObj *interface_gobj;
    SObj *sobj;
    s32 i;

    if (gSceneData.scene_previous != 0x34)
    {
        ifTimer_BattleTime_SetInterface(NULL);
        func_ovl2_80112EBC();

        interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xBU, 0x80000000U);

        omAddGObjRenderProc(interface_gobj, func_ovl0_800CCF00, 0x17U, 0x80000000U, -1);

        for (i = 0; i < ARRAY_COUNT(gBonusTimerDigits); i++)
        {
            sobj = func_ovl0_800CCFDC(interface_gobj, (void*) ((uintptr_t)gCommonSpriteFiles[3] + (intptr_t)&D_NF_00000138));

            sobj->pos.x = scBonusGame_Timer_DigitPositions[i] - (sobj->sprite.width * 0.5F);
            sobj->pos.y = 30.0F - (sobj->sprite.height * 0.5F);

            gBonusTimerDigits[i] = 0;

        }
        sobj = SObjGetStruct(interface_gobj);
        sobj->sprite.attr |= SP_HIDDEN;

        sobj = func_ovl0_800CCFDC(interface_gobj, (void*) ((uintptr_t)gCommonSpriteFiles[3] + (intptr_t)&D_NF_00001140));

        sobj->pos.x = (s32)(231.0F - (sobj->sprite.width * 0.5F));
        sobj->pos.y = (s32)(20.0F - (sobj->sprite.height * 0.5F));

        sobj = func_ovl0_800CCFDC(interface_gobj, (void*) ((uintptr_t)gCommonSpriteFiles[3] + (intptr_t)&D_NF_00001238));

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

// 0x8018E5D8
void scBonusGame_SetPlayerInterfacePositions(void) 
{
    gPlayerCommonInterface.ifplayers_pos_x = scBonusGame_Player_InterfacePositions;
    gPlayerCommonInterface.ifplayers_pos_y = 210;
}

// 0x8018E5F8
void scBonusGame_InitBonusGame(void)
{
    s32 unused[3];
    s32 player;
    GObj *fighter_gobj;
    ftSpawnInfo player_spawn;
    Unk800D4060 unk_struct;

    func_ovl6_8018D0F0();
    func_ovl6_8018ED70();
    func_ovl6_8018D330();
    func_8000B9FC(9, 0x80000000U, 0x64, 1, 0xFF);
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    grWallpaper_SetGroundWallpaper();
    func_ovl2_8010DB00();
    itManager_AllocUserData();
    grNodeInit_SetGroundFiles();
    ftManager_AllocFighterData(2, GMMATCH_PLAYERS_MAX);
    wpManager_AllocUserData();
    efManager_AllocUserData();
    ifScreenFlash_InitInterfaceVars(0xFF);
    gmRumble_SetPlayerRumble();
    ftPublicity_SetPlayerPublicReact();

    for (player = 0, player_spawn = ftGlobal_SpawnInfo_MainData; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        if (gBattleState->player_block[player].player_kind == Pl_Kind_Not) continue;

        ftManager_SetFileDataKind(gBattleState->player_block[player].character_kind);

        player_spawn.ft_kind = gBattleState->player_block[player].character_kind;

        scBonusGame_GetPlayerSpawnPosition(&player_spawn.pos);

        player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? LR_Left : LR_Right;

        player_spawn.team = 0;
        player_spawn.player = player;
        player_spawn.model_lod = ftParts_LOD_HighPoly;
        player_spawn.costume = gBattleState->player_block[player].costume_index;

        player_spawn.pl_kind = gBattleState->player_block[player].player_kind;
        player_spawn.p_controller = &gPlayerControllers[player];

        player_spawn.anim_heap = ftManager_AllocAnimHeapKind(gBattleState->player_block[player].character_kind);
        player_spawn.unk_rebirth_0x1F_b0 = TRUE;

        fighter_gobj = ftManager_MakeFighter(&player_spawn);

        ftCommon_ClearPlayerMatchStats(player, fighter_gobj);

        break;
    }

    ftManager_SetFileDataPlayables();
    ifMain_SetGameStatusWait();
    func_ovl2_8010DDC4();
    func_ovl2_8010E374();
    func_ovl2_8010E498();
    ifPlayer_Tag_SetInterface();
    scBonusGame_SetPlayerInterfacePositions();
    func_ovl2_8010F3C0();
    ifPlayer_Stocks_SetInterface();
    scBonusGame_InitBonusGameSprites();
    scBonusGame_MakeInterface();
    mpCollision_SetPlayMusicID();
    func_800269C0(0x272U);
    func_ovl6_8018E344();
    scBonusGame_InitCameraVars();

    unk_struct = D_ovl6_8018F03C;

    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &unk_struct, 0xC, 1, 0);
    scBonusGame_MakeBonusTimerGObj();
}

// 0x8018E8D0
void scBonusGame_SetBonusEndStats(sb32 is_practice)
{
    g1PGameDamageTaken += gBattleState->player_block[gSceneData.player_port].total_damage_all;

    if (is_practice != FALSE)
    {
        gSceneData.time_bonus = 0;
        gSceneData.bonus_get_mask[0] = 0;
        gSceneData.bonus_get_mask[1] = 0;
        gSceneData.bonus_get_mask[2] = 0;
    }
    else
    {
        gSceneData.time_bonus = (gBattleState->match_time_remain + 59) / GC_TIME_SEC;
        gSceneData.bonus_get_mask[0] = 0x40000;
        gSceneData.bonus_get_mask[1] = 0;
        gSceneData.bonus_get_mask[2] = 0;
    }
}

// 0x8018E95C
void scBonusGame_SaveBonusRecordSRAM(s32 is_tasks_fail, s32 ft_kind)
{
    if (gSceneData.is_reset == FALSE)
    {
        if (gBattleState->gr_kind <= Gr_Kind_Bonus1End)
        {
            if (is_tasks_fail != FALSE)
            {
                if (gSaveData.spgame_records[ft_kind].bonus1_task_count < gSceneData.bonus_tasks_complete)
                {
                    gSaveData.spgame_records[ft_kind].bonus1_task_count = gSceneData.bonus_tasks_complete;

                    lbMemory_SaveData_WriteSRAM(gBattleState);
                }
            }
            else
            {
                gSaveData.spgame_records[ft_kind].bonus1_task_count = GMMATCH_BONUSGAME_TASK_MAX;

                if (gBattleState->match_time_current < gSaveData.spgame_records[ft_kind].bonus1_time)
                {
                    gSaveData.spgame_records[ft_kind].bonus1_time = gBattleState->match_time_current;

                    lbMemory_SaveData_WriteSRAM(gBattleState);
                }
            }
        }
        else if (is_tasks_fail != FALSE)
        {
            if (gSaveData.spgame_records[ft_kind].bonus2_task_count < gSceneData.bonus_tasks_complete)
            {
                gSaveData.spgame_records[ft_kind].bonus2_task_count = gSceneData.bonus_tasks_complete;

                lbMemory_SaveData_WriteSRAM(gBattleState);
            }
        }
        else
        {
            gSaveData.spgame_records[ft_kind].bonus2_task_count = GMMATCH_BONUSGAME_TASK_MAX;

            if (gBattleState->match_time_current < gSaveData.spgame_records[ft_kind].bonus2_time)
            {
                gSaveData.spgame_records[ft_kind].bonus2_time = gBattleState->match_time_current;

                lbMemory_SaveData_WriteSRAM(gBattleState);
            }
        }
    }
}

// 0x8018EA80
void scBonusGame_SetGeometryRenderLights(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}

// 0x8018EA80
void scManager_BonusGame_InitScene(void)
{
    u16 bonus_complete_chars;
    s32 task_count;
    u32 tasks_complete;
    s32 i;

    D_ovl6_8018F080.unk_scdatabounds_0xC = (void*)((uintptr_t)&D_NF_800A5240 - 0x1900);

    func_80007024(&D_ovl6_8018F080);

    D_ovl6_8018F09C.arena_size = ((uintptr_t)&lOverlay6ArenaHi - (uintptr_t)&lOverlay6ArenaLo);
    D_ovl6_8018F09C.proc_start = scBonusGame_InitBonusGame;

    func_8000683C(&D_ovl6_8018F09C);
    func_80020A74();

    while (func_80020D58(0) != FALSE)
    {
        continue;
    };
    func_80020B38(0, 0x7800);
    func_800266A0();
    func_ovl2_801157EC();

    if (gBattleState->game_status != gmMatch_GameStatus_Pause)
    {
        task_count = (gBattleState->gr_kind <= Gr_Kind_Bonus1End) ? gGroundStruct.bonus1.target_count : gGroundStruct.bonus2.platform_count;

        tasks_complete = GMMATCH_BONUSGAME_TASK_MAX - task_count;

        if (task_count > 0); // Needed for match; plausible leftover statement in original code, if (TRUE) and if (task_count) also work

        gSceneData.bonus_tasks_complete = tasks_complete;

        switch (gSceneData.scene_previous)
        {
        case 0x34:
            func_ovl6_8018E8D0(task_count);
            func_ovl6_8018E95C(task_count, gSceneData.ft_kind);
            break;

        default:
            func_ovl6_8018E95C(task_count, gSceneData.unk39);

            switch (gSceneData.scene_previous)
            {
            case 0x13:
                gSceneData.scene_current = 0x13;

                if (tasks_complete == GMMATCH_BONUSGAME_TASK_MAX)
                {
                    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_LUIGI))
                    {
                        for (bonus_complete_chars = i = 0; i < ARRAY_COUNT(gSaveData.spgame_records); i++)
                        {
                            if (gSaveData.spgame_records[i].bonus1_task_count == GMMATCH_BONUSGAME_TASK_MAX)
                            {
                                bonus_complete_chars |= (1 << i);
                            }
                        }
                        if ((bonus_complete_chars & GMSAVEINFO_CHARACTER_MASK_STARTER) == GMSAVEINFO_CHARACTER_MASK_STARTER)
                        {
                            gSceneData.ft_kind = gSceneData.unk39;
                            gSceneData.costume_index = gSceneData.unk3A;

                            gSceneData.scene_queue = 0xE;
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
                else break;

            default:
                gSceneData.scene_current = 0x14;

                if ((tasks_complete == GMMATCH_BONUSGAME_TASK_MAX) && (func_ovl2_800D6630() != FALSE))
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