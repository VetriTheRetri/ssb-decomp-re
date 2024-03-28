#include <gr/ground.h>

#include <ft/fighter.h>
#include <ef/effect.h>
#include <gm/battle.h>

enum grHyruleTwisterStatus
{
    grHyrule_Twister_Sleep,
    grHyrule_Twister_Wait,
    grHyrule_Twister_Summon,
    grHyrule_Twister_Move,
    grHyrule_Twister_Turn,
    grHyrule_Twister_Stop,
    grHyrule_Twister_Subside
};

// 0x8010A140
efParticle* efParticle_Twister_MakeEffect(Vec3f *pos, s32 effect_id)
{
    efParticle *efpart = func_ovl0_800CE9E8(gGroundStruct.hyrule.effect_bank_index | 8, effect_id);

    if (efpart != NULL)
    {
        efTransform *eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans == NULL)
        {
            func_ovl0_800CEA40(efpart);

            return NULL;
        }
        func_ovl0_800CEA14(efpart);

        if (eftrans->unk_effect_0x2A == 0)
        {
            return NULL;
        }
        eftrans->translate.vec.f = *pos;
    }
    return efpart;
}

// 0x8010A1E4
GObj* grHyrule_Twister_MakeGround(Vec3f *pos)
{
    s32 line_id;
    f32 ground_dist;
    GObj *twister_gobj;
    DObj *twister_dobj;
    efParticle *efpart;
    Vec3f edge_pos;
    s32 edge_under;

    if (func_ovl2_800F9348(pos, &line_id, &ground_dist, NULL, NULL) == FALSE)
    {
        return NULL;
    }
    twister_gobj = omMakeGObjCommon(GObj_Kind_Ground, NULL, 1, 0x80000000U);

    if (twister_gobj != NULL)
    {
        twister_dobj = omAddDObjForGObj(twister_gobj, NULL);

        twister_dobj->translate.vec.f = *pos;

        twister_dobj->translate.vec.f.y += ground_dist;

        efpart = efParticle_Twister_MakeEffect(&twister_dobj->translate.vec.f, 3);

        if (efpart == NULL)
        {
            gGroundStruct.hyrule.twister_eftrans = NULL;

            omEjectGObjCommon(twister_gobj);

            return NULL;
        }
        gGroundStruct.hyrule.twister_line_id = line_id;

        mpCollision_GetLREdgeLeft(line_id, &edge_pos);

        edge_under = mpCollision_GetEdgeUnderLLineID(line_id);

        if ((edge_under == -1) || (mpCollision_GetLineTypeID(edge_under) != mpCollision_LineType_RWall))
        {
            gGroundStruct.hyrule.twister_leftedge_x = edge_pos.x;
        }
        else gGroundStruct.hyrule.twister_leftedge_x = edge_pos.x + 300.0F;
        
        mpCollision_GetLREdgeRight(line_id, &edge_pos);

        edge_under = mpCollision_GetEdgeUnderRLineID(line_id);

        if ((edge_under == -1) || (mpCollision_GetLineTypeID(edge_under) != mpCollision_LineType_LWall))
        {
            gGroundStruct.hyrule.twister_rightedge_x = edge_pos.x;
        }
        else gGroundStruct.hyrule.twister_rightedge_x = edge_pos.x - 300.0F;
        
        gGroundStruct.hyrule.twister_eftrans = efpart->effect_info;
    }
    return twister_gobj;
}

// 0x8010A36C
void grHyrule_Twister_UpdateSleep(void)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGroundStruct.hyrule.twister_status = grHyrule_Twister_Wait;
        gGroundStruct.hyrule.twister_wait = lbRandom_GetIntRange(1200) + 1600;
    }
}

// 0x8010A3B4
void grHyrule_Twister_UpdateWait(void)
{
    Vec3f pos;
    GObj *twister_gobj;

    gGroundStruct.hyrule.twister_wait--;

    if (gGroundStruct.hyrule.twister_wait == 0)
    {
        mpCollision_GetMPointPositionID(gGroundStruct.hyrule.twister_pos_ids[lbRandom_GetIntRange(gGroundStruct.hyrule.twister_pos_count)], &pos);

        twister_gobj = grHyrule_Twister_MakeGround(&pos);

        if (twister_gobj == NULL)
        {
            gGroundStruct.hyrule.twister_wait = lbRandom_GetIntRange(1200) + 1600;
        }
        else
        {
            gGroundStruct.hyrule.twister_wait = 80;
            gGroundStruct.hyrule.twister_gobj = twister_gobj;
            gGroundStruct.hyrule.twister_status = grHyrule_Twister_Summon;
        }
    }
}

// 0x8010A444
void grHyrule_Twister_UpdateSummon(void)
{
    s32 lr;

    gGroundStruct.hyrule.twister_wait--;

    if (gGroundStruct.hyrule.twister_wait == 0)
    {
        gGroundStruct.hyrule.twister_status = grHyrule_Twister_Move;
        gGroundStruct.hyrule.twister_wait = lbRandom_GetIntRange(600) + 520;

        lr = ((lbRandom_GetShort() % 2) != 0) ? LR_Right : LR_Left;

        gGroundStruct.hyrule.twister_turn_wait = 0;
        gGroundStruct.hyrule.twister_vel = lr * 10.0F;
        gGroundStruct.hyrule.twister_speed_wait = lbRandom_GetIntRange(120) + 180;

        ftMain_CheckSetMapObjectGObj(gGroundStruct.hyrule.twister_gobj, grHyrule_Twister_GetHitInfo);

        func_800269C0(alSound_SFX_HyruleTwisterSpawn);
    }
}

// 0x8010A4F4
sb32 grHyrule_Twister_DecLifetimeCheckStop(void)
{
    gGroundStruct.hyrule.twister_wait--;

    if (gGroundStruct.hyrule.twister_wait == 0)
    {
        gGroundStruct.hyrule.twister_status = grHyrule_Twister_Stop;

        return TRUE;
    }
    else return FALSE;
}

// 0x8010A52C
s32 grHyrule_Twister_GetPlayerSidesLR(void)
{
    s32 players_rside = 0;
    s32 players_lside = 0;
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];
    f32 twister_pos_x = DObjGetStruct(gGroundStruct.hyrule.twister_gobj)->translate.vec.f.x;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if ((fp->ground_or_air == GA_Ground) && (fp->coll_data.ground_line_id == gGroundStruct.hyrule.twister_line_id))
        {
            if (fp->joint[ftParts_Joint_TopN]->translate.vec.f.x > twister_pos_x)
            {
                players_rside++;
            }
            else players_lside++;
        }
        fighter_gobj = fighter_gobj->link_next;
    }
    if ((players_lside != 0) || (players_rside != 0))
    {
        if (players_lside == players_rside)
        {
            return ((lbRandom_GetShort() % 2) != 0) ? LR_Left : LR_Right;
        }
        else if (players_rside < players_lside)
        {
            return LR_Left;
        }
        else return LR_Right;
    }
    else return LR_Center;
}

// 0x8010A610
void grHyrule_Twister_UpdateMove(void)
{
    Vec3f *pos = &DObjGetStruct(gGroundStruct.hyrule.twister_gobj)->translate.vec.f;
    f32 ground_level;
    f32 pos_x;
    s32 lr;

    if (grHyrule_Twister_DecLifetimeCheckStop() == FALSE)
    {
        if (gGroundStruct.hyrule.twister_turn_wait != 0)
        {
            gGroundStruct.hyrule.twister_turn_wait--;

            if (gGroundStruct.hyrule.twister_turn_wait == 0)
            {
                if (gGroundStruct.hyrule.twister_vel < 0.0F)
                {
                    gGroundStruct.hyrule.twister_vel = -10.0F;
                }
                else gGroundStruct.hyrule.twister_vel = 10.0F;
            }
        }
        else
        {
            gGroundStruct.hyrule.twister_speed_wait--;

            if (gGroundStruct.hyrule.twister_speed_wait == 0)
            {
                lr = grHyrule_Twister_GetPlayerSidesLR();

                if ((lr != LR_Center) && (lbRandom_GetIntRange(5) == 0))
                {
                    gGroundStruct.hyrule.twister_turn_wait = lbRandom_GetIntRange(180) + 300;
                    gGroundStruct.hyrule.twister_vel = lr * 50.0F;
                }
            }
        }
        pos_x = pos->x + gGroundStruct.hyrule.twister_vel;

        if ((gGroundStruct.hyrule.twister_rightedge_x < pos_x) || (pos_x < gGroundStruct.hyrule.twister_leftedge_x))
        {
            if (gGroundStruct.hyrule.twister_rightedge_x < pos_x)
            {
                pos->x = (gGroundStruct.hyrule.twister_rightedge_x - 10.0F);
            }
            else pos->x = (gGroundStruct.hyrule.twister_leftedge_x + 10.0F);

            gGroundStruct.hyrule.twister_status = grHyrule_Twister_Turn;
            gGroundStruct.hyrule.twister_turn_wait = 120;
        }
        else pos->x = pos_x;

        mpCollision_GetUDCommonUp(gGroundStruct.hyrule.twister_line_id, pos, &ground_level, NULL, NULL);

        pos->y += ground_level;

        gGroundStruct.hyrule.twister_eftrans->translate.vec.f = *pos;
    }
}

// 0x8010A7CC
void grHyrule_Twister_UpdateTurn(void)
{
    if (grHyrule_Twister_DecLifetimeCheckStop() == FALSE)
    {
        gGroundStruct.hyrule.twister_turn_wait--;

        if (gGroundStruct.hyrule.twister_turn_wait == 0)
        {
            gGroundStruct.hyrule.twister_status = grHyrule_Twister_Move;
            gGroundStruct.hyrule.twister_turn_wait = 0;
            gGroundStruct.hyrule.twister_vel = -gGroundStruct.hyrule.twister_vel;
        }
    }
}

// 0x8010A824
void grHyrule_Twister_UpdateStop(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->status_info.status_id != ftStatus_Common_Twister)
        {
            fighter_gobj = fighter_gobj->link_next;
        }
        else return;
    }
    gGroundStruct.hyrule.twister_status = grHyrule_Twister_Subside;
    gGroundStruct.hyrule.twister_wait = 32;

    ftMain_ClearMapObjectGObj(gGroundStruct.hyrule.twister_gobj);

    if (gGroundStruct.hyrule.twister_eftrans != NULL)
    {
        efParticle_Twister_MakeEffect(&gGroundStruct.hyrule.twister_eftrans->translate.vec.f, 7);
    }
    omEjectGObjCommon(gGroundStruct.hyrule.twister_gobj);
}

// 0x8010A8B4
void grHyrule_Twister_UpdateSubside(void)
{
    gGroundStruct.hyrule.twister_wait--;

    if (gGroundStruct.hyrule.twister_wait == 0)
    {
        gGroundStruct.hyrule.twister_status = grHyrule_Twister_Wait;
        gGroundStruct.hyrule.twister_wait = lbRandom_GetIntRange(1200) + 1600;

        if (gGroundStruct.hyrule.twister_eftrans != NULL)
        {
            func_ovl0_800D39D4(gGroundStruct.hyrule.twister_eftrans->unk_effect_0xB8, 1);
        }
    }
}

// 0x8010A91C
void grHyrule_Twister_ProcUpdate(GObj *ground_gobj)
{
    switch (gGroundStruct.hyrule.twister_status)
    {
    case grHyrule_Twister_Sleep:
        grHyrule_Twister_UpdateSleep();
        break;

    case grHyrule_Twister_Wait:
        grHyrule_Twister_UpdateWait();
        break;

    case grHyrule_Twister_Summon:
        grHyrule_Twister_UpdateSummon();
        break;

    case grHyrule_Twister_Move:
        grHyrule_Twister_UpdateMove();
        break;

    case grHyrule_Twister_Turn:
        grHyrule_Twister_UpdateTurn();
        break;

    case grHyrule_Twister_Stop:
        grHyrule_Twister_UpdateStop();
        break;

    case grHyrule_Twister_Subside:
        grHyrule_Twister_UpdateSubside();
        break;
    }
}

extern intptr_t D_NF_00B1F960;
extern intptr_t D_NF_00B1FC80;
extern intptr_t D_NF_00B1FC80_other;
extern intptr_t D_NF_00B22980;

// 0x8010A9C8
void grHyrule_Twister_InitGroundVars(void)
{
    s32 i;
    s32 pos_count;
    s32 pos_ids[10];

    gGroundStruct.hyrule.twister_pos_count = pos_count = mpCollision_GetMPointCountKind(mpMPoint_Kind_Twister);

    if ((pos_count == 0) || (pos_count > ARRAY_COUNT(pos_ids)))
    {
        while (TRUE)
        {
            gsFatalPrintF("Twister positions are error!\n");
            smCrashPrintGObjStatus();
        }
    }
    gGroundStruct.hyrule.twister_pos_ids = (u8*) hlMemoryAlloc(pos_count * sizeof(*gGroundStruct.hyrule.twister_pos_ids), 0x0);

    mpCollision_GetMPointIDsKind(mpMPoint_Kind_Twister, pos_ids);

    for (i = 0; i < pos_count; i++)
    {
        gGroundStruct.hyrule.twister_pos_ids[i] = pos_ids[i];
    }

    gGroundStruct.hyrule.twister_status = grHyrule_Twister_Sleep;
    gGroundStruct.hyrule.effect_bank_index = efAlloc_SetParticleBank((intptr_t)&D_NF_00B1F960, (intptr_t)&D_NF_00B1FC80, (intptr_t)&D_NF_00B1FC80_other, (intptr_t)&D_NF_00B22980);
}

// 0x8010AB20
GObj* grCommon_Hyrule_MakeGround(void)
{
    GObj *ground_gobj = omMakeGObjCommon(GObj_Kind_Ground, NULL, 1, 0x80000000);

    omAddGObjCommonProc(ground_gobj, grHyrule_Twister_ProcUpdate, 1, 4);
    grHyrule_Twister_InitGroundVars();

    return ground_gobj;
}

// 0x8010AB74
sb32 grHyrule_Twister_GetHitInfo(GObj *ground_gobj, GObj *fighter_gobj, s32 *kind)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 dist_y;
    f32 dist_x;

    if 
    (
        (fp->twister_wait == 0)                                && 
        (fp->status_info.status_id != ftStatus_Common_Twister) && 
        !(fp->capture_ignore_mask & FTCATCHKIND_MASK_TWISTER)  &&
        (ftCommon_GetBestHitStatusAll(fighter_gobj) == gmHitCollision_HitStatus_Normal)
    )
    {
        DObj *gr_dobj = DObjGetStruct(ground_gobj);
        DObj *ft_dobj = DObjGetStruct(fighter_gobj);

        if (gr_dobj->translate.vec.f.x < ft_dobj->translate.vec.f.x)
        {
            dist_x = -(gr_dobj->translate.vec.f.x - ft_dobj->translate.vec.f.x);
        }
        else dist_x = (gr_dobj->translate.vec.f.x - ft_dobj->translate.vec.f.x);

        dist_y = ft_dobj->translate.vec.f.y - gr_dobj->translate.vec.f.y;

        if ((dist_x < 300.0F) && (dist_y < 600.0F) && (dist_y > -300.0F))
        {
            *kind = gmHitEnvironment_Kind_Twister;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x8010AC70
sb32 grHyrule_Twister_GetPosition(Vec3f *pos)
{
    if ((gGroundStruct.hyrule.twister_status == grHyrule_Twister_Move) || (gGroundStruct.hyrule.twister_status == grHyrule_Twister_Turn))
    {
        *pos = DObjGetStruct(gGroundStruct.hyrule.twister_gobj)->translate.vec.f;

        return TRUE;
    }
    else return FALSE;
}
