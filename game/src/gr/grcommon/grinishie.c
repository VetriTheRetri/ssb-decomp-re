#include <gr/ground.h>

#include <ft/fighter.h>
#include <it/item.h>

// Get ready for a linker things extravaganza

enum grInishieScaleStatus
{
    grInishie_Scale_Wait,
    grInishie_Scale_Fall,
    grInishie_Scale_Sleep,
    grInishie_Scale_Retract
};

u16 grCommon_Inishie_ScaleMPointKinds[/* */]   = { mpMPoint_Kind_ScaleL, mpMPoint_Kind_ScaleR };
 u8 grCommon_Inishie_ScaleLineGroup[/* */]     = { 0x01, 0x02 };

DObjTransformTypes grCommon_Inishie_ScaleDObjIndex[/* */] =
{
    { OMMtx_Transform_Tra, OMMtx_Transform_Null, 0x01 },
    { OMMtx_Transform_Tra, OMMtx_Transform_Null, 0x01 },
    { OMMtx_Transform_Tra, OMMtx_Transform_Null, 0x00 },
    { OMMtx_Transform_Tra, OMMtx_Transform_Null, 0x01 },
    { OMMtx_Transform_Tra, OMMtx_Transform_Null, 0x00 }
};

u16 grCommon_Inishie_PakkunMPointKinds[/* */]   = { mpMPoint_Kind_PakkunLSpawn, mpMPoint_Kind_PakkunRSpawn };

extern intptr_t D_NF_00000734;
extern intptr_t D_NF_00000380;
extern intptr_t lGroundInfoMainStart;  // 0x00000014
extern intptr_t D_NF_000005F0;
extern intptr_t lOldMarioPowerBlockHitbox;        // 0x000000BC

// 0x80108CD0
void grInishie_Scale_UpdateFighterStatsGA(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

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
        else gGroundStruct.inishie.players_tt[player] = 0;

        gGroundStruct.inishie.players_ga[player] = fp->ground_or_air;

        fighter_gobj = fighter_gobj->link_next;
    }
}

// 0x80108D50
f32 grInishie_Scale_GetPressure(s32 line_id)
{
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];
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
        fighter_gobj = fighter_gobj->link_next;
    }
    return pressure;
}

// 0x801085E0
void grInishie_Scale_UpdateWait(void)
{
    DObj *l_dobj;
    DObj *r_dobj;
    f32 l_weight;
    f32 r_weight;
    f32 alt;
    sb32 ud;

    grInishie_Scale_UpdateFighterStatsGA();

    l_weight = grInishie_Scale_GetPressure(grCommon_Inishie_ScaleLineGroup[0]);
    r_weight = grInishie_Scale_GetPressure(grCommon_Inishie_ScaleLineGroup[1]);

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

        efParticle_SparkleWhiteScale_MakeEffect(&l_dobj->translate.vec.f, 1.0F);
        efParticle_SparkleWhiteScale_MakeEffect(&r_dobj->translate.vec.f, 1.0F);
    }
    l_dobj->translate.vec.f.y = gGroundStruct.inishie.scale[0].platform_base_y + gGroundStruct.inishie.splat_altitude;
    r_dobj->translate.vec.f.y = gGroundStruct.inishie.scale[1].platform_base_y - gGroundStruct.inishie.splat_altitude;

    gGroundStruct.inishie.scale[0].string_dobj->translate.vec.f.y = l_dobj->translate.vec.f.y - gGroundStruct.inishie.scale[0].string_length;
    gGroundStruct.inishie.scale[1].string_dobj->translate.vec.f.y = r_dobj->translate.vec.f.y - gGroundStruct.inishie.scale[1].string_length;
}

// 0x80109118
void grInishie_Scale_UpdateFall(void)
{
    f32 deadzone;

    gGroundStruct.inishie.splat_accelerate += 3.0F;

    if (gGroundStruct.inishie.splat_accelerate > 70.0F)
    {
        gGroundStruct.inishie.splat_accelerate = 70.0F;
    }
    gGroundStruct.inishie.scale[0].platform_dobj->translate.vec.f.y -= gGroundStruct.inishie.splat_accelerate;
    gGroundStruct.inishie.scale[1].platform_dobj->translate.vec.f.y -= gGroundStruct.inishie.splat_accelerate;

    deadzone = gGroundInfo->blastzone_bottom + (-1000.0F);

    if ((gGroundStruct.inishie.scale[0].platform_dobj->translate.vec.f.y < deadzone) && (gGroundStruct.inishie.scale[1].platform_dobj->translate.vec.f.y < deadzone))
    {
        gGroundStruct.inishie.splat_status = grInishie_Scale_Sleep;
        gGroundStruct.inishie.splat_accelerate = 0.0F;

        mpCollision_SetYakumonoOffID(grCommon_Inishie_ScaleLineGroup[0]);
        mpCollision_SetYakumonoOffID(grCommon_Inishie_ScaleLineGroup[1]);

        gGroundStruct.inishie.splat_wait = 180;
    }
}

// 0x80109220
void grInishie_Scale_UpdateStep(void)
{
    gGroundStruct.inishie.splat_wait--;

    if (gGroundStruct.inishie.splat_wait == 0)
    {
        gGroundStruct.inishie.splat_status = grInishie_Scale_Retract;

        omAddDObjAnimAll(gGroundStruct.inishie.scale[0].platform_dobj, (ATrack*) ((intptr_t)&D_NF_00000734 + (uintptr_t)gGroundStruct.inishie.map_head), 0.0F);
        omAddDObjAnimAll(gGroundStruct.inishie.scale[1].platform_dobj, (ATrack*) ((intptr_t)&D_NF_00000734 + (uintptr_t)gGroundStruct.inishie.map_head), 0.0F);
    }
}

// 0x8010929C
void grInishie_Scale_UpdateRetract(void)
{
    DObj *l_dobj;
    DObj *r_dobj;
    sb32 is_complete = FALSE;

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

        l_dobj->dobj_f0 = AOBJ_FRAME_NULL;
        l_dobj->flags = DOBJ_FLAG_NONE;

        mpCollision_SetYakumonoOnID(grCommon_Inishie_ScaleLineGroup[0]);

        r_dobj->dobj_f0 = AOBJ_FRAME_NULL;
        r_dobj->flags = DOBJ_FLAG_NONE;

        mpCollision_SetYakumonoOnID(grCommon_Inishie_ScaleLineGroup[1]);

        gGroundStruct.inishie.splat_status = grInishie_Scale_Wait;
    }
    l_dobj->translate.vec.f.y = gGroundStruct.inishie.splat_left_pos + gGroundStruct.inishie.splat_altitude;
    r_dobj->translate.vec.f.y = gGroundStruct.inishie.splat_right_pos - gGroundStruct.inishie.splat_altitude;

    gGroundStruct.inishie.scale[0].string_dobj->translate.vec.f.y = l_dobj->translate.vec.f.y - gGroundStruct.inishie.scale[0].string_length;
    gGroundStruct.inishie.scale[1].string_dobj->translate.vec.f.y = r_dobj->translate.vec.f.y - gGroundStruct.inishie.scale[1].string_length;
}

// 0x801093EC
void grInishie_Scale_ProcUpdate(GObj *ground_gobj)
{
    switch (gGroundStruct.inishie.splat_status)
    {
    case grInishie_Scale_Wait:
        grInishie_Scale_UpdateWait();
        break;

    case grInishie_Scale_Fall:
        grInishie_Scale_UpdateFall();
        break;

    case grInishie_Scale_Sleep:
        grInishie_Scale_UpdateStep();
        break;

    case grInishie_Scale_Retract:
        grInishie_Scale_UpdateRetract();
        break;
    }
    mpCollision_SetYakumonoPosID(grCommon_Inishie_ScaleLineGroup[0], &gGroundStruct.inishie.scale[0].platform_dobj->translate.vec.f);
    mpCollision_SetYakumonoPosID(grCommon_Inishie_ScaleLineGroup[1], &gGroundStruct.inishie.scale[1].platform_dobj->translate.vec.f);
}

// 0x801094A0
void grInishie_Scale_MakeGround(void)
{
    void *map_head;
    GObj *ground_gobj;
    DObj *map_dobj[5];
    DObj *platform_dobj;
    s32 i;
    s32 mpoint;
    Vec3f yakumono_pos;

    map_head = gGroundStruct.inishie.map_head;
    ground_gobj = omMakeGObjCommon(GObj_Kind_Ground, NULL, 1, 0x80000000);

    omAddGObjRenderProc(ground_gobj, odRenderDObjTreeForGObj, 6, 0x80000000, -1);
    grSetupDObj(ground_gobj, (DObjDesc*) ((uintptr_t)map_head + (intptr_t)&D_NF_00000380), map_dobj, grCommon_Inishie_ScaleDObjIndex);

    gGroundStruct.inishie.scale[0].string_dobj = map_dobj[4];
    gGroundStruct.inishie.scale[0].string_length = map_dobj[0]->translate.vec.f.y + map_dobj[3]->translate.vec.f.y;

    gGroundStruct.inishie.scale[1].string_dobj = map_dobj[2];
    gGroundStruct.inishie.scale[1].string_length = map_dobj[0]->translate.vec.f.y + map_dobj[1]->translate.vec.f.y;

    for (i = 0; i < ARRAY_COUNT(gGroundStruct.inishie.scale); i++)
    {
        ground_gobj = omMakeGObjCommon(GObj_Kind_Ground, NULL, 1, 0x80000000);
        omAddGObjRenderProc(ground_gobj, odRenderDObjDLHead0, 6, 0x80000000, -1);

        platform_dobj = omAddDObjForGObj(ground_gobj, (void*) ((uintptr_t)map_head + (intptr_t)&D_NF_000005F0));
        gGroundStruct.inishie.scale[i].platform_dobj = platform_dobj;

        omAddOMMtxForDObjFixed(platform_dobj, OMMtx_Transform_Tra, 0);
        omAddGObjCommonProc(ground_gobj, func_8000DF34, 1, 5);
        mpCollision_GetMPointIDsKind(grCommon_Inishie_ScaleMPointKinds[i], &mpoint);
        mpCollision_GetMPointPositionID(mpoint, &yakumono_pos);

        platform_dobj->translate.vec.f = yakumono_pos;

        gGroundStruct.inishie.scale[i].platform_base_y = yakumono_pos.y;

        mpCollision_SetYakumonoOnID(grCommon_Inishie_ScaleLineGroup[i]);
    }
    omAddGObjCommonProc(ground_gobj, grInishie_Scale_ProcUpdate, 1, 4);

    // WARNING: gGroundStruct MUST be defined as extern in ground.h in order for this to match
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
void grInishie_Pakkun_MakeItem(void)
{
    s32 i;
    Vec3f pos;
    Vec3f vel;
    s32 mpoint;

    for (i = 0; i < ARRAY_COUNT(gGroundStruct.inishie.pakkun_gobj); i++)
    {
        mpCollision_GetMPointIDsKind(grCommon_Inishie_PakkunMPointKinds[i], &mpoint);
        mpCollision_GetMPointPositionID(mpoint, &pos);

        vel.x = vel.y = vel.z = 0.0F;

        gGroundStruct.inishie.pakkun_gobj[i] = itManagerMakeItemSetupCommon(NULL, It_Kind_Pakkun, &pos, &vel, ITEM_MASK_SPAWN_GROUND);
    }
}

// 0x80109838
void grInishie_PowerBlock_UpdateWait(void)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGroundStruct.inishie.pblock_status = 1;
        gGroundStruct.inishie.pblock_appear_wait = 1800;
    }
}

// 0x8010986C
void grInishie_PowerBlock_SetWait(void)
{
    gGroundStruct.inishie.pblock_status = 1;
    gGroundStruct.inishie.pblock_appear_wait = 1800;
}

// 0x80109888
void grInishie_PowerBlock_UpdateMake(void)
{
    GObj *pblock_gobj;
    Vec3f pos;
    Vec3f vel;

    gGroundStruct.inishie.pblock_appear_wait--;

    if (gGroundStruct.inishie.pblock_appear_wait == 0)
    {
        s32 pblock_pos_id = gGroundStruct.inishie.pblock_pos_ids[lbRandom_GetIntRange(gGroundStruct.inishie.pblock_pos_count)];

        mpCollision_GetMPointPositionID(pblock_pos_id, &pos);

        vel.x = vel.y = vel.z = 0.0F;

        pblock_gobj = itManagerMakeItemSetupCommon(NULL, It_Kind_PowerBlock, &pos, &vel, ITEM_MASK_SPAWN_GROUND);

        if (pblock_gobj != NULL)
        {
            gGroundStruct.inishie.pblock_gobj = pblock_gobj;
            gGroundStruct.inishie.pblock_status = 2;
        }
        else grInishie_PowerBlock_SetWait();
    }
}

// 0x8010992C
void grInishie_PowerBlock_UpdateDamage(void)
{
    gGroundStruct.inishie.pblock_appear_wait--;

    if (gGroundStruct.inishie.pblock_appear_wait == 0)
    {
        ftMain_ClearMapEnvironmentGObj(gGroundStruct.inishie.pblock_gobj);
    }
}

// 0x80109968
void grInishie_PowerBlock_ProcUpdate(GObj *ground_gobj)
{
    switch (gGroundStruct.inishie.pblock_status)
    {
    case 0:
        grInishie_PowerBlock_UpdateWait();
        break;

    case 1:
        grInishie_PowerBlock_UpdateMake();
        break;

    case 3:
        grInishie_PowerBlock_UpdateDamage();
        break;
    }
}

// 0x801099D4
void grInishie_PowerBlock_MakeGround(void)
{
    s32 pos_count, i, pos_ids[10];

    omAddGObjCommonProc(omMakeGObjCommon(GObj_Kind_Ground, NULL, 1, 0x80000000U), grInishie_PowerBlock_ProcUpdate, 1, 4);

    gGroundStruct.inishie.pblock_pos_count = pos_count = mpCollision_GetMPointCountKind(mpMPoint_Kind_PowerBlock);

    if ((pos_count == 0) || (pos_count > ARRAY_COUNT(pos_ids)))
    {
        while (TRUE)
        {
            gsFatalPrintF("PowerBlock positions are error!\n");
            smCrashPrintGObjStatus();
        }
    }
    gGroundStruct.inishie.pblock_pos_ids = (u8*) gsMemoryAlloc(pos_count * sizeof(*gGroundStruct.inishie.pblock_pos_ids), 0x0);

    mpCollision_GetMPointIDsKind(mpMPoint_Kind_PowerBlock, pos_ids);

    for (i = 0; i < pos_count; i++)
    {
        gGroundStruct.inishie.pblock_pos_ids[i] = pos_ids[i];
    }
    gGroundStruct.inishie.pblock_status = 0;
    gGroundStruct.inishie.gr_hit = (grHitbox*) (((uintptr_t)gGroundInfo - (intptr_t)&lGroundInfoMainStart) + (intptr_t)&lOldMarioPowerBlockHitbox);
}

// 0x80109B4C
void func_ovl2_80109B4C(void)
{
    ftMain_CheckSetMapEnvironmentGObj(gGroundStruct.inishie.pblock_gobj, grInishie_PowerBlock_GetHitInfo);

    gGroundStruct.inishie.pblock_appear_wait = 2;
    gGroundStruct.inishie.pblock_status = 3;
}

// 0x80109B8C
sb32 grInishie_PowerBlock_GetHitInfo(GObj *item_gobj, GObj *fighter_gobj, grHitbox **gr_hit, s32 *kind)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if (fighter_gobj != ip->damage_gobj)
        {
            *gr_hit = gGroundStruct.inishie.gr_hit;
            *kind = gmHitEnvironment_Kind_PowerBlock;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x80109BD4
void grInishie_Common_InitFilePointers(void)
{
    gGroundStruct.inishie.map_head = (void*) ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&D_NF_000005F0);
    gGroundStruct.inishie.item_head = (void*) ((uintptr_t)gGroundInfo - (intptr_t)&lGroundInfoMainStart);
}

// 0x80109C0C
GObj* grCommon_Inishie_MakeGround(void)
{
    grInishie_Common_InitFilePointers();
    grInishie_Scale_MakeGround();
    grInishie_Pakkun_MakeItem();
    grInishie_PowerBlock_MakeGround();

    return NULL;
}

// 0x80109C48
void grInishie_Scale_GetPlatformInfo(f32 *alt, f32 *accel) // Unused?
{
    *alt = 1100.0F - ((gGroundStruct.inishie.splat_altitude < 0.0F) ? -gGroundStruct.inishie.splat_altitude : gGroundStruct.inishie.splat_altitude);

    *accel = (gGroundStruct.inishie.splat_accelerate < 0.0F) ? -gGroundStruct.inishie.splat_accelerate : gGroundStruct.inishie.splat_accelerate;
}
