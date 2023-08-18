#include <gr/ground.h>

#include <ft/fighter.h>
#include <it/item.h>

enum grInishieScaleStatus
{
    grInishie_Scale_Wait,
    grInishie_Scale_Fall,
    grInishie_Scale_Sleep,
    grInishie_Scale_Retract
};

u16 grCommon_Inishie_ScaleVectorLineID[] = { 0x0005, 0x0006 };
 u8 grCommon_Inishie_ScaleLineGroup[]    = {   0x01,   0x02 };

grDObjIndex grCommon_Inishie_ScaleDObjIndex[] = 
{
    { 0x12, 0x00, 0x01 },
    { 0x12, 0x00, 0x01 },
    { 0x12, 0x00, 0x00 },
    { 0x12, 0x00, 0x01 },
    { 0x12, 0x00, 0x00 }
};

u16 grCommon_Inishie_PakkunVectorLineID[] = { 0x0007, 0x0008 };

extern intptr_t D_NF_00000734;
extern intptr_t D_NF_00000380;
extern intptr_t D_NF_000005F0;

// 0x80108CD0
void grCommon_Inishie_UpdateFighterStatsGA(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);
        s32 player = fp->player;

        if (fp->ground_or_air == GA_Ground)
        {
            if (gGroundStruct.inishie.players_ga[player] != GA_Ground)
            {
                gGroundStruct.inishie.players_tt[player] = 1;
            }
            else if (gGroundStruct.inishie.players_tt[player] != 0)
            {
                gGroundStruct.inishie.players_tt[player]--;
            }
        }
        else gGroundStruct.inishie.players_tt[player] = FALSE;

        gGroundStruct.inishie.players_ga[player] = fp->ground_or_air;

        fighter_gobj = fighter_gobj->group_gobj_next;
    }
}

// 0x80108D50
f32 grCommon_Inishie_GetScaleFighterPressure(s32 line_id)
{
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];
    f32 pressure = 0.0F;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->ground_or_air == GA_Ground)
        {
            if ((fp->coll_data.ground_line_id != -2) && (mpCollision_SetDObjNoID(fp->coll_data.ground_line_id) == line_id))
            {
                f32 weight = (1.0F - fp->attributes->weight) + 1.4F;

                if (gGroundStruct.inishie.players_tt[fp->player] != 0)
                {
                    pressure += (weight * 8.0F);
                }
                else pressure += weight;
            }
        }
        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    return pressure;
}

// 0x801085E0
void grCommon_Inishie_UpdateScaleWait(void)
{
    DObj *l_dobj;
    DObj *r_dobj;
    f32 l_weight;
    f32 r_weight;
    f32 alt;
    bool32 ud;

    grCommon_Inishie_UpdateFighterStatsGA();

    l_weight = grCommon_Inishie_GetScaleFighterPressure(grCommon_Inishie_ScaleLineGroup[0]);
    r_weight = grCommon_Inishie_GetScaleFighterPressure(grCommon_Inishie_ScaleLineGroup[1]);

    if ((l_weight == 0.0F) && (r_weight == 0.0F))
    {
        if (gGroundStruct.inishie.splat_altitude != 0.0F)
        {
            if (gGroundStruct.inishie.splat_altitude < 0.0F)
            {
                gGroundStruct.inishie.splat_altitude += 8.0F;

                if (gGroundStruct.inishie.splat_altitude > 0.0F)
                {
                    gGroundStruct.inishie.splat_altitude = 0.0F;
                }
            }
            else
            {
                gGroundStruct.inishie.splat_altitude -= 8.0F;

                if (gGroundStruct.inishie.splat_altitude < 0.0F)
                {
                    gGroundStruct.inishie.splat_altitude = 0.0F;
                }
            }
        }
        gGroundStruct.inishie.splat_accelerate = 0.0F;
    }
    else
    {
        gGroundStruct.inishie.splat_accelerate += (r_weight - l_weight);

        if ((l_weight != 0.0F) && (r_weight != 0.0F) && (gGroundStruct.inishie.splat_accelerate != 0.0F))
        {
            gGroundStruct.inishie.splat_accelerate *= 0.93F;
        }
        else if (gGroundStruct.inishie.splat_accelerate > 0.0F)
        {
            gGroundStruct.inishie.splat_accelerate -= 0.9F;

            if (gGroundStruct.inishie.splat_accelerate < 0.0F)
            {
                gGroundStruct.inishie.splat_accelerate = 0.0F;
            }
        }
        else if (gGroundStruct.inishie.splat_accelerate < 0.0F)
        {
            gGroundStruct.inishie.splat_accelerate += 0.9F;

            if (gGroundStruct.inishie.splat_accelerate > 0.0F)
            {
                gGroundStruct.inishie.splat_accelerate = 0.0F;
            }
        }
        gGroundStruct.inishie.splat_altitude += gGroundStruct.inishie.splat_accelerate;
    }
    alt = ABSF(gGroundStruct.inishie.splat_altitude);

    l_dobj = gGroundStruct.inishie.scale[0].platform_dobj;
    r_dobj = gGroundStruct.inishie.scale[1].platform_dobj;

    if (alt > 1100.0F)
    {
        ud = 0;

        if (gGroundStruct.inishie.splat_altitude < 0.0F)
        {
            ud = 1;

            if (gGroundStruct.inishie.splat_accelerate != 0.0F)
            {
                // ??? The permuter found this but I really can't match it otherwise
            }
        }
        gGroundStruct.inishie.splat_accelerate = 0.0F;

        if (ud != 0)
        {
            gGroundStruct.inishie.splat_altitude = -1100.0F;
        }
        else gGroundStruct.inishie.splat_altitude = 1100.0F;

        gGroundStruct.inishie.splat_status = grInishie_Scale_Fall;

        efParticle_SparkleWhiteScale_MakeEffect(&l_dobj->translate, 1.0F);
        efParticle_SparkleWhiteScale_MakeEffect(&r_dobj->translate, 1.0F);
    }
    l_dobj->translate.y = gGroundStruct.inishie.scale[0].platform_base_y + gGroundStruct.inishie.splat_altitude;
    r_dobj->translate.y = gGroundStruct.inishie.scale[1].platform_base_y - gGroundStruct.inishie.splat_altitude;

    gGroundStruct.inishie.scale[0].string_dobj->translate.y = l_dobj->translate.y - gGroundStruct.inishie.scale[0].string_length;
    gGroundStruct.inishie.scale[1].string_dobj->translate.y = r_dobj->translate.y - gGroundStruct.inishie.scale[1].string_length;
}

// 0x80109118
void grCommon_Inishie_UpdateScaleFall(void)
{
    f32 deadzone;

    gGroundStruct.inishie.splat_accelerate += 3.0F;

    if (gGroundStruct.inishie.splat_accelerate > 70.0F)
    {
        gGroundStruct.inishie.splat_accelerate = 70.0F;
    }
    gGroundStruct.inishie.scale[0].platform_dobj->translate.y -= gGroundStruct.inishie.splat_accelerate;
    gGroundStruct.inishie.scale[1].platform_dobj->translate.y -= gGroundStruct.inishie.splat_accelerate;

    deadzone = gGroundInfo->blastzone_bottom + (-1000.0F);

    if ((gGroundStruct.inishie.scale[0].platform_dobj->translate.y < deadzone) && (gGroundStruct.inishie.scale[1].platform_dobj->translate.y < deadzone))
    {
        gGroundStruct.inishie.splat_status = grInishie_Scale_Sleep;
        gGroundStruct.inishie.splat_accelerate = 0.0F;

        mpCollision_SetYakumonoOffID(grCommon_Inishie_ScaleLineGroup[0]);
        mpCollision_SetYakumonoOffID(grCommon_Inishie_ScaleLineGroup[1]);

        gGroundStruct.inishie.splat_wait = 180;
    }
}

// 0x80109220
void grCommon_Inishie_UpdateScaleSleep(void)
{
    gGroundStruct.inishie.splat_wait--;

    if (gGroundStruct.inishie.splat_wait == 0)
    {
        gGroundStruct.inishie.splat_status = grInishie_Scale_Retract;

        omAddDObjAnimAll(gGroundStruct.inishie.scale[0].platform_dobj, (ATrack*) ((intptr_t)&D_NF_00000734 + (uintptr_t)gGroundStruct.inishie.map_head), 0.0F);
        omAddDObjAnimAll(gGroundStruct.inishie.scale[1].platform_dobj,(ATrack*) ((intptr_t)&D_NF_00000734 + (uintptr_t)gGroundStruct.inishie.map_head), 0.0F);
    }
}

// 0x8010929C
void grCommon_Inishie_UpdateScaleRetract(void)
{
    DObj *l_dobj;
    DObj *r_dobj;
    bool32 is_complete = FALSE;

    if (gGroundStruct.inishie.splat_altitude != 0.0F)
    {
        if (gGroundStruct.inishie.splat_altitude < 0.0F)
        {
            gGroundStruct.inishie.splat_altitude += 10.0F;

            if (gGroundStruct.inishie.splat_altitude >= 0.0F)
            {
                is_complete = TRUE;
            }
        }
        else
        {
            gGroundStruct.inishie.splat_altitude -= 10.0F;

            if (gGroundStruct.inishie.splat_altitude <= 0.0F)
            {
                is_complete = TRUE;
            }
        }
    }
    l_dobj = gGroundStruct.inishie.scale[0].platform_dobj;
    r_dobj = gGroundStruct.inishie.scale[1].platform_dobj;

    if (is_complete != FALSE)
    {
        gGroundStruct.inishie.splat_altitude = 0.0F;

        l_dobj->dobj_f0 = (f32)FLOAT_NEG_MAX;
        l_dobj->unk_0x54 = 0;

        mpCollision_SetYakumonoOnID(grCommon_Inishie_ScaleLineGroup);

        r_dobj->dobj_f0 = (f32)FLOAT_NEG_MAX;
        r_dobj->unk_0x54 = 0;

        mpCollision_SetYakumonoOnID(grCommon_Inishie_SPlatRightLineID);

        gGroundStruct.inishie.splat_status = grInishie_Scale_Wait;
    }
    l_dobj->translate.y = gGroundStruct.inishie.splat_left_pos + gGroundStruct.inishie.splat_altitude;
    r_dobj->translate.y = gGroundStruct.inishie.splat_right_pos - gGroundStruct.inishie.splat_altitude;

    gGroundStruct.inishie.scale[0].string_dobj->translate.y = l_dobj->translate.y - gGroundStruct.inishie.scale[0].string_length;
    gGroundStruct.inishie.scale[1].string_dobj->translate.y = r_dobj->translate.y - gGroundStruct.inishie.scale[1].string_length;
}

// 0x801093EC
void grCommon_Inishie_ProcUpdate(GObj *ground_gobj)
{
    switch (gGroundStruct.inishie.splat_status)
    {
    case grInishie_Scale_Wait:
        grCommon_Inishie_UpdateScaleWait();
        break;

    case grInishie_Scale_Fall:
        grCommon_Inishie_UpdateScaleFall();
        break;

    case grInishie_Scale_Sleep:
        grCommon_Inishie_UpdateScaleSleep();
        break;

    case grInishie_Scale_Retract:
        grCommon_Inishie_UpdateScaleRetract();
        break;
    }
    mpCollision_SetYakumonoPosID(grCommon_Inishie_ScaleLineGroup[0], &gGroundStruct.inishie.scale[0].platform_dobj->translate);
    mpCollision_SetYakumonoPosID(grCommon_Inishie_ScaleLineGroup[1], &gGroundStruct.inishie.scale[1].platform_dobj->translate);
}

void func_ovl2_801094A0(void)
{
    void *map_head;
    GObj *ground_gobj;
    DObj *map_dobj[5];
    DObj *platform_dobj;
    s32 i;
    s32 sp70;
    Vec3f yakumono_pos;

    map_head = gGroundStruct.inishie.map_head;
    ground_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000);

    func_80009DF4(ground_gobj, func_80014038, 6, 0x80000000, -1);
    func_ovl2_80105760(ground_gobj, (DObjDesc *)((uintptr_t)map_head + (intptr_t)&D_NF_00000380), map_dobj, grCommon_Inishie_ScaleDObjIndex);

    gGroundStruct.inishie.scale[0].string_dobj = map_dobj[4];
    gGroundStruct.inishie.scale[0].string_length = map_dobj[0]->translate.y + map_dobj[3]->translate.y;

    gGroundStruct.inishie.scale[1].string_dobj = map_dobj[2];
    gGroundStruct.inishie.scale[1].string_length = map_dobj[0]->translate.y + map_dobj[1]->translate.y;

    for (i = 0; i < ARRAY_COUNT(gGroundStruct.inishie.scale); i++)
    {
        ground_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000);
        func_80009DF4(ground_gobj, func_80013E68, 6, 0x80000000, -1);

        platform_dobj = func_800092D0(ground_gobj, (void*) ((uintptr_t)map_head + (intptr_t)&D_NF_000005F0));
        gGroundStruct.inishie.scale[i].platform_dobj = platform_dobj;

        func_80008CC0(platform_dobj, 0x12, 0);
        omAddGObjCommonProc(ground_gobj, func_8000DF34, 1, 5);
        func_ovl2_800FC814(grCommon_Inishie_ScaleVectorLineID[i], &sp70);
        func_ovl2_800FC894(sp70, &yakumono_pos);

        platform_dobj->translate = yakumono_pos;

        gGroundStruct.inishie.scale[i].platform_base_y = yakumono_pos.y;

        mpCollision_SetYakumonoOnID(grCommon_Inishie_ScaleLineGroup[i]);
    }
    omAddGObjCommonProc(ground_gobj, grCommon_Inishie_ProcUpdate, 1, 4);

    // WARNING: gGroundStruct MUST be defined as extern in order for this to match
    gGroundStruct.inishie.splat_status = grInishie_Scale_Wait;
    gGroundStruct.inishie.splat_altitude = 0.0F;
    gGroundStruct.inishie.splat_accelerate = 0.0F;

    for (i = 0; i < (ARRAY_COUNT(gGroundStruct.inishie.players_ga) + ARRAY_COUNT(gGroundStruct.inishie.players_tt)) / 2; i++)
    {
        gGroundStruct.inishie.players_tt[i] = 0;
        gGroundStruct.inishie.players_ga[i] = 0;
    }
}

// 0x8010972C
void func_ovl2_8010972C(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gGroundStruct.inishie.pakkun_gobj); i++)
    {
        itPakkun_SDefault_SetWaitFighter(gGroundStruct.inishie.pakkun_gobj[i]);
    }
}

// 0x80109774
void func_ovl2_80109774(void)
{
    s32 i;
    Vec3f pos;
    Vec3f vel;
    s32 sp48;

    for (i = 0; i < ARRAY_COUNT(gGroundStruct.inishie.pakkun_gobj); i++)
    {
        func_ovl2_800FC814(grCommon_Inishie_PakkunVectorLineID[i], &sp48);
        func_ovl2_800FC894(sp48, &pos);

        vel.x = vel.y = vel.z = 0.0F;

        gGroundStruct.inishie.pakkun_gobj[i] = itManager_MakeItemSetupCommon(NULL, It_Kind_Pakkun, &pos, &vel, ITEM_MASK_SPAWN_GROUND);

    }
}

// 0x80109838
void func_ovl2_80109838(void)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGroundStruct.inishie.pakkun_status = 1;
        gGroundStruct.inishie.pakkun_appear_wait = 1800;
    }
}
