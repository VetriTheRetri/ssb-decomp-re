#include <gr/ground.h>
#include <ft/fighter.h>
#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lGRInishieScaleDObjDesc;                // 0x00000380
extern intptr_t lGRInishieMapHead;                      // 0x000005F0
extern intptr_t lGRInishieScaleRetractAnimJoint;        // 0x00000734
extern intptr_t lGRInishiePowerBlockHit;                // 0x000000BC

extern void func_8000DF34_EB34(GObj*);
extern void grModelSetupDObj();

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012EB30
u16 dGRInishieScaleMPointKinds[/* */] = { mpMPoint_Kind_ScaleL, mpMPoint_Kind_ScaleR };

// 0x8012EB34
u8 dGRInishieScaleLineGroups[/* */] = { 0x01, 0x02 };

// 0x8012EB38
DObjTransformTypes dGRInishieScaleTransformKinds[/* */] =
{
    { OMMtx_Transform_Tra, OMMtx_Transform_Null, 0x01 },
    { OMMtx_Transform_Tra, OMMtx_Transform_Null, 0x01 },
    { OMMtx_Transform_Tra, OMMtx_Transform_Null, 0x00 },
    { OMMtx_Transform_Tra, OMMtx_Transform_Null, 0x01 },
    { OMMtx_Transform_Tra, OMMtx_Transform_Null, 0x00 }
};

// 0xx8012EB48
u16 dGRInishiePakkunMPointKinds[/* */] = { mpMPoint_Kind_PakkunLSpawn, mpMPoint_Kind_PakkunRSpawn };

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum grInishieScaleStatus
{
    nGRInishieScaleStatusWait,
    nGRInishieScaleStatusFall,
    nGRInishieScaleStatusSleep,
    nGRInishieScaleStatusRetract
};

enum grInishiePowerBlockStatus
{
    nGRInishiePowerBlockStatusWait,
    nGRInishiePowerBlockStatusMake,
    nGRInishiePowerBlockStatusSleep,
    nGRInishiePowerBlockStatusDamage
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80108CD0
void grInishieScaleUpdateFighterStatsGA(void)
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
f32 grInishieScaleGetPressure(s32 line_id)
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
void grInishieScaleUpdateWait(void)
{
    DObj *l_dobj;
    DObj *r_dobj;
    f32 l_weight;
    f32 r_weight;
    f32 alt;
    sb32 ud;

    grInishieScaleUpdateFighterStatsGA();

    l_weight = grInishieScaleGetPressure(dGRInishieScaleLineGroups[0]);
    r_weight = grInishieScaleGetPressure(dGRInishieScaleLineGroups[1]);

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

        gGroundStruct.inishie.splat_status = nGRInishieScaleStatusFall;

        efParticle_SparkleWhiteScale_MakeEffect(&l_dobj->translate.vec.f, 1.0F);
        efParticle_SparkleWhiteScale_MakeEffect(&r_dobj->translate.vec.f, 1.0F);
    }
    l_dobj->translate.vec.f.y = gGroundStruct.inishie.scale[0].platform_base_y + gGroundStruct.inishie.splat_altitude;
    r_dobj->translate.vec.f.y = gGroundStruct.inishie.scale[1].platform_base_y - gGroundStruct.inishie.splat_altitude;

    gGroundStruct.inishie.scale[0].string_dobj->translate.vec.f.y = l_dobj->translate.vec.f.y - gGroundStruct.inishie.scale[0].string_length;
    gGroundStruct.inishie.scale[1].string_dobj->translate.vec.f.y = r_dobj->translate.vec.f.y - gGroundStruct.inishie.scale[1].string_length;
}

// 0x80109118
void grInishieScaleUpdateFall(void)
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
        gGroundStruct.inishie.splat_status = nGRInishieScaleStatusSleep;
        gGroundStruct.inishie.splat_accelerate = 0.0F;

        mpCollision_SetYakumonoOffID(dGRInishieScaleLineGroups[0]);
        mpCollision_SetYakumonoOffID(dGRInishieScaleLineGroups[1]);

        gGroundStruct.inishie.splat_wait = 180;
    }
}

// 0x80109220
void grInishieScaleUpdateStep(void)
{
    gGroundStruct.inishie.splat_wait--;

    if (gGroundStruct.inishie.splat_wait == 0)
    {
        gGroundStruct.inishie.splat_status = nGRInishieScaleStatusRetract;

        omAddDObjAnimAll(gGroundStruct.inishie.scale[0].platform_dobj, (ATrack*) ((intptr_t)&lGRInishieScaleRetractAnimJoint + (uintptr_t)gGroundStruct.inishie.map_head), 0.0F);
        omAddDObjAnimAll(gGroundStruct.inishie.scale[1].platform_dobj, (ATrack*) ((intptr_t)&lGRInishieScaleRetractAnimJoint + (uintptr_t)gGroundStruct.inishie.map_head), 0.0F);
    }
}

// 0x8010929C
void grInishieScaleUpdateRetract(void)
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

        mpCollision_SetYakumonoOnID(dGRInishieScaleLineGroups[0]);

        r_dobj->dobj_f0 = AOBJ_FRAME_NULL;
        r_dobj->flags = DOBJ_FLAG_NONE;

        mpCollision_SetYakumonoOnID(dGRInishieScaleLineGroups[1]);

        gGroundStruct.inishie.splat_status = nGRInishieScaleStatusWait;
    }
    l_dobj->translate.vec.f.y = gGroundStruct.inishie.scale[0].platform_base_y + gGroundStruct.inishie.splat_altitude;
    r_dobj->translate.vec.f.y = gGroundStruct.inishie.scale[1].platform_base_y - gGroundStruct.inishie.splat_altitude;

    gGroundStruct.inishie.scale[0].string_dobj->translate.vec.f.y = l_dobj->translate.vec.f.y - gGroundStruct.inishie.scale[0].string_length;
    gGroundStruct.inishie.scale[1].string_dobj->translate.vec.f.y = r_dobj->translate.vec.f.y - gGroundStruct.inishie.scale[1].string_length;
}

// 0x801093EC
void grInishieScaleProcUpdate(GObj *ground_gobj)
{
    switch (gGroundStruct.inishie.splat_status)
    {
    case nGRInishieScaleStatusWait:
        grInishieScaleUpdateWait();
        break;

    case nGRInishieScaleStatusFall:
        grInishieScaleUpdateFall();
        break;

    case nGRInishieScaleStatusSleep:
        grInishieScaleUpdateStep();
        break;

    case nGRInishieScaleStatusRetract:
        grInishieScaleUpdateRetract();
        break;
    }
    mpCollision_SetYakumonoPosID(dGRInishieScaleLineGroups[0], &gGroundStruct.inishie.scale[0].platform_dobj->translate.vec.f);
    mpCollision_SetYakumonoPosID(dGRInishieScaleLineGroups[1], &gGroundStruct.inishie.scale[1].platform_dobj->translate.vec.f);
}

// 0x801094A0
void grInishieMakeScale(void)
{
    void *map_head;
    GObj *ground_gobj;
    DObj *map_dobj[5];
    DObj *platform_dobj;
    s32 i;
    s32 mpoint;
    Vec3f yakumono_pos;

    map_head = gGroundStruct.inishie.map_head;
    ground_gobj = omMakeGObjSPAfter(GObj_Kind_Ground, NULL, GObj_LinkID_Ground, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(ground_gobj, odRenderDObjTreeForGObj, 6, GOBJ_DLLINKORDER_DEFAULT, -1);
    grModelSetupDObj(ground_gobj, (DObjDesc*) ((uintptr_t)map_head + (intptr_t)&lGRInishieScaleDObjDesc), map_dobj, dGRInishieScaleTransformKinds);

    gGroundStruct.inishie.scale[0].string_dobj = map_dobj[4];
    gGroundStruct.inishie.scale[0].string_length = map_dobj[0]->translate.vec.f.y + map_dobj[3]->translate.vec.f.y;

    gGroundStruct.inishie.scale[1].string_dobj = map_dobj[2];
    gGroundStruct.inishie.scale[1].string_length = map_dobj[0]->translate.vec.f.y + map_dobj[1]->translate.vec.f.y;

    for (i = 0; i < ARRAY_COUNT(gGroundStruct.inishie.scale); i++)
    {
        ground_gobj = omMakeGObjSPAfter(GObj_Kind_Ground, NULL, GObj_LinkID_Ground, GOBJ_LINKORDER_DEFAULT);
        omAddGObjRenderProc(ground_gobj, odRenderDObjDLHead0, 6, GOBJ_DLLINKORDER_DEFAULT, -1);

        platform_dobj = omAddDObjForGObj(ground_gobj, (void*) ((uintptr_t)map_head + (intptr_t)&lGRInishieMapHead));
        gGroundStruct.inishie.scale[i].platform_dobj = platform_dobj;

        omAddOMMtxForDObjFixed(platform_dobj, OMMtx_Transform_Tra, 0);
        omAddGObjCommonProc(ground_gobj, func_8000DF34_EB34, GObjProcess_Kind_Proc, 5);

        mpCollision_GetMPointIDsKind(dGRInishieScaleMPointKinds[i], &mpoint);
        mpCollision_GetMPointPositionID(mpoint, &yakumono_pos);

        platform_dobj->translate.vec.f = yakumono_pos;

        gGroundStruct.inishie.scale[i].platform_base_y = yakumono_pos.y;

        mpCollision_SetYakumonoOnID(dGRInishieScaleLineGroups[i]);
    }
    omAddGObjCommonProc(ground_gobj, grInishieScaleProcUpdate, GObjProcess_Kind_Proc, 4);

    // WARNING: gGroundStruct MUST be defined as extern in ground.h in order for this to match
    gGroundStruct.inishie.splat_status = nGRInishieScaleStatusWait;
    gGroundStruct.inishie.splat_altitude = 0.0F;
    gGroundStruct.inishie.splat_accelerate = 0.0F;

    for (i = 0; i < (ARRAY_COUNT(gGroundStruct.inishie.players_ga) + ARRAY_COUNT(gGroundStruct.inishie.players_tt)) / 2; i++)
    {
        gGroundStruct.inishie.players_tt[i] = 0;
        gGroundStruct.inishie.players_ga[i] = 0;
    }
}

// 0x8010972C
void grInishiePakkunSetWaitFighter(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gGroundStruct.inishie.pakkun_gobj); i++)
    {
        itPakkunSDefaultSetWaitFighter(gGroundStruct.inishie.pakkun_gobj[i]);
    }
}

// 0x80109774
void grInishieMakePakkun(void)
{
    s32 i;
    Vec3f pos;
    Vec3f vel;
    s32 mpoint;

    for (i = 0; i < ARRAY_COUNT(gGroundStruct.inishie.pakkun_gobj); i++)
    {
        mpCollision_GetMPointIDsKind(dGRInishiePakkunMPointKinds[i], &mpoint);
        mpCollision_GetMPointPositionID(mpoint, &pos);

        vel.x = vel.y = vel.z = 0.0F;

        gGroundStruct.inishie.pakkun_gobj[i] = itManagerMakeItemSetupCommon(NULL, It_Kind_Pakkun, &pos, &vel, ITEM_MASK_SPAWN_GROUND);
    }
}

// 0x80109838
void grInishiePowerBlockUpdateWait(void)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGroundStruct.inishie.pblock_status = nGRInishiePowerBlockStatusMake;
        gGroundStruct.inishie.pblock_appear_wait = 1800;
    }
}

// 0x8010986C
void grInishiePowerBlockSetWait(void)
{
    gGroundStruct.inishie.pblock_status = nGRInishiePowerBlockStatusMake;
    gGroundStruct.inishie.pblock_appear_wait = 1800;
}

// 0x80109888
void grInishiePowerBlockUpdateMake(void)
{
    GObj *pblock_gobj;
    Vec3f pos;
    Vec3f vel;

    gGroundStruct.inishie.pblock_appear_wait--;

    if (gGroundStruct.inishie.pblock_appear_wait == 0)
    {
        s32 pblock_pos_id = gGroundStruct.inishie.pblock_pos_ids[mtTrigGetRandomIntRange(gGroundStruct.inishie.pblock_pos_count)];

        mpCollision_GetMPointPositionID(pblock_pos_id, &pos);

        vel.x = vel.y = vel.z = 0.0F;

        pblock_gobj = itManagerMakeItemSetupCommon(NULL, It_Kind_PowerBlock, &pos, &vel, ITEM_MASK_SPAWN_GROUND);

        if (pblock_gobj != NULL)
        {
            gGroundStruct.inishie.pblock_gobj = pblock_gobj;
            gGroundStruct.inishie.pblock_status = nGRInishiePowerBlockStatusSleep;
        }
        else grInishiePowerBlockSetWait();
    }
}

// 0x8010992C
void grInishiePowerBlockUpdateDamage(void)
{
    gGroundStruct.inishie.pblock_appear_wait--;

    if (gGroundStruct.inishie.pblock_appear_wait == 0)
    {
        ftMainClearMapEnvGObj(gGroundStruct.inishie.pblock_gobj);
    }
}

// 0x80109968
void grInishiePowerBlockProcUpdate(GObj *ground_gobj)
{
    switch (gGroundStruct.inishie.pblock_status)
    {
    case nGRInishiePowerBlockStatusWait:
        grInishiePowerBlockUpdateWait();
        break;

    case nGRInishiePowerBlockStatusMake:
        grInishiePowerBlockUpdateMake();
        break;

    case nGRInishiePowerBlockStatusDamage:
        grInishiePowerBlockUpdateDamage();
        break;
    }
}

// 0x801099D4
void grInishieMakePowerBlock(void)
{
    s32 pos_count, i, pos_ids[10];

    omAddGObjCommonProc(omMakeGObjSPAfter(GObj_Kind_Ground, NULL, GObj_LinkID_Ground, GOBJ_LINKORDER_DEFAULT), grInishiePowerBlockProcUpdate, GObjProcess_Kind_Proc, 4);

    gGroundStruct.inishie.pblock_pos_count = pos_count = mpCollision_GetMPointCountKind(mpMPoint_Kind_PowerBlock);

    if ((pos_count == 0) || (pos_count > ARRAY_COUNT(pos_ids)))
    {
        while (TRUE)
        {
            gsFatalPrintF("PowerBlock positions are error!\n");
            smRunPrintGObjStatus();
        }
    }
    gGroundStruct.inishie.pblock_pos_ids = (u8*) gsMemoryAlloc(pos_count * sizeof(*gGroundStruct.inishie.pblock_pos_ids), 0x0);

    mpCollision_GetMPointIDsKind(mpMPoint_Kind_PowerBlock, pos_ids);

    for (i = 0; i < pos_count; i++)
    {
        gGroundStruct.inishie.pblock_pos_ids[i] = pos_ids[i];
    }
    gGroundStruct.inishie.pblock_status = nGRInishiePowerBlockStatusWait;
    gGroundStruct.inishie.gr_hit = (grHitbox*) (((uintptr_t)gGroundInfo - (intptr_t)&lGRCommonHeaderStart) + (intptr_t)&lGRInishiePowerBlockHit);
}

// 0x80109B4C
void grInishiePowerBlockSetDamage(void)
{
    ftMainCheckSetMapEnvGObj(gGroundStruct.inishie.pblock_gobj, grInishiePowerBlockCheckGetDamageKind);

    gGroundStruct.inishie.pblock_appear_wait = 2;
    gGroundStruct.inishie.pblock_status = nGRInishiePowerBlockStatusDamage;
}

// 0x80109B8C
sb32 grInishiePowerBlockCheckGetDamageKind(GObj *item_gobj, GObj *fighter_gobj, grHitbox **gr_hit, s32 *kind)
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
void grInishieInitHeaders(void)
{
    gGroundStruct.inishie.map_head = (void*) ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&lGRInishieMapHead);
    gGroundStruct.inishie.item_head = (void*) ((uintptr_t)gGroundInfo - (intptr_t)&lGRCommonHeaderStart);
}

// 0x80109C0C
GObj* grInishieMakeGround(void)
{
    grInishieInitHeaders();
    grInishieMakeScale();
    grInishieMakePakkun();
    grInishieMakePowerBlock();

    return NULL;
}

// 0x80109C48
void grInishieScaleGetPlatformInfo(f32 *alt, f32 *accel) // Unused?
{
    *alt = 1100.0F - ((gGroundStruct.inishie.splat_altitude < 0.0F) ? -gGroundStruct.inishie.splat_altitude : gGroundStruct.inishie.splat_altitude);

    *accel = (gGroundStruct.inishie.splat_accelerate < 0.0F) ? -gGroundStruct.inishie.splat_accelerate : gGroundStruct.inishie.splat_accelerate;
}
