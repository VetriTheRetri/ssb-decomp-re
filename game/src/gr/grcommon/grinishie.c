#include <gr/ground.h>

#include <ft/fighter.h>

enum grInishieScale
{
    grInishie_Scale_Wait,
    grInishie_Scale_Fall,
    grInishie_Scale_Sleep,
    grInishie_Scale_Retract
};

u8 grCommon_Inishie_SPlatLeftLineID = 1;
u8 grCommon_Inishie_SPlatRightLineID = 2;

extern intptr_t D_NF_00000734;

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

    l_weight = grCommon_Inishie_GetScaleFighterPressure(grCommon_Inishie_SPlatLeftLineID);
    r_weight = grCommon_Inishie_GetScaleFighterPressure(grCommon_Inishie_SPlatRightLineID);

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

    l_dobj = gGroundStruct.inishie.splat_left_dobj;
    r_dobj = gGroundStruct.inishie.splat_right_dobj;

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
    l_dobj->translate.y = gGroundStruct.inishie.splat_left_base + gGroundStruct.inishie.splat_altitude;
    r_dobj->translate.y = gGroundStruct.inishie.splat_right_base - gGroundStruct.inishie.splat_altitude;

    gGroundStruct.inishie.sstring_left_dobj->translate.y = l_dobj->translate.y - gGroundStruct.inishie.sstring_left_length;
    gGroundStruct.inishie.sstring_right_dobj->translate.y = r_dobj->translate.y - gGroundStruct.inishie.sstring_right_length;
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
    gGroundStruct.inishie.splat_left_dobj->translate.y -= gGroundStruct.inishie.splat_accelerate;
    gGroundStruct.inishie.splat_right_dobj->translate.y -= gGroundStruct.inishie.splat_accelerate;

    deadzone = gGroundInfo->blastzone_bottom + (-1000.0F);

    if ((gGroundStruct.inishie.splat_left_dobj->translate.y < deadzone) && (gGroundStruct.inishie.splat_right_dobj->translate.y < deadzone))
    {
        gGroundStruct.inishie.splat_status = grInishie_Scale_Sleep;
        gGroundStruct.inishie.splat_accelerate = 0.0F;

        mpCollision_SetYakumonoOffID(grCommon_Inishie_SPlatLeftLineID);
        mpCollision_SetYakumonoOffID(grCommon_Inishie_SPlatRightLineID);

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

        omAddDObjAnimAll(gGroundStruct.inishie.splat_left_dobj, (ATrack*) ((intptr_t)&D_NF_00000734 + (uintptr_t)gGroundStruct.inishie.map_head), 0.0F);
        omAddDObjAnimAll(gGroundStruct.inishie.splat_right_dobj,(ATrack*) ((intptr_t)&D_NF_00000734 + (uintptr_t)gGroundStruct.inishie.map_head), 0.0F);
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
    l_dobj = gGroundStruct.inishie.splat_left_dobj;
    r_dobj = gGroundStruct.inishie.splat_right_dobj;

    if (is_complete != FALSE)
    {
        gGroundStruct.inishie.splat_altitude = 0.0F;

        l_dobj->dobj_f0 = (f32)FLOAT_NEG_MAX;
        l_dobj->unk_0x54 = 0;

        mpCollision_SetYakumonoOnID(grCommon_Inishie_SPlatLeftLineID);

        r_dobj->dobj_f0 = (f32)FLOAT_NEG_MAX;
        r_dobj->unk_0x54 = 0;

        mpCollision_SetYakumonoOnID(grCommon_Inishie_SPlatRightLineID);

        gGroundStruct.inishie.splat_status = grInishie_Scale_Wait;
    }
    l_dobj->translate.y = gGroundStruct.inishie.splat_left_pos + gGroundStruct.inishie.splat_altitude;
    r_dobj->translate.y = gGroundStruct.inishie.splat_right_pos - gGroundStruct.inishie.splat_altitude;

    gGroundStruct.inishie.sstring_left_dobj->translate.y = l_dobj->translate.y - gGroundStruct.inishie.sstring_left_length;
    gGroundStruct.inishie.sstring_right_dobj->translate.y = r_dobj->translate.y - gGroundStruct.inishie.sstring_right_length;
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
    mpCollision_SetYakumonoPosID(grCommon_Inishie_SPlatLeftLineID, &gGroundStruct.inishie.splat_left_dobj->translate);
    mpCollision_SetYakumonoPosID(grCommon_Inishie_SPlatRightLineID, &gGroundStruct.inishie.splat_right_dobj->translate);
}
