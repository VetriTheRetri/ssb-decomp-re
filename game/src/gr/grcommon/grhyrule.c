#include <gr/ground.h>

#include <ft/fighter.h>
#include <ef/effect.h>
#include <gm/gmmatch.h>

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
        eftrans->translate = *pos;
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
    twister_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000U);

    if (twister_gobj != NULL)
    {
        twister_dobj = func_800092D0(twister_gobj, NULL);

        twister_dobj->translate = *pos;

        twister_dobj->translate.y += ground_dist;

        efpart = efParticle_Twister_MakeEffect(&twister_dobj->translate, 3);

        if (efpart == NULL)
        {
            gGroundStruct.hyrule.twister_eftrans = NULL;

            omEjectGObjCommon(twister_gobj);

            return NULL;
        }
        gGroundStruct.hyrule.twister_line_id = line_id;

        mpCollision_GetLREdgeLeft(line_id, &edge_pos);

        edge_under = func_ovl2_800FAA24(line_id);

        if ((edge_under == -1) || (mpCollision_GetLineTypeID(edge_under) != mpCollision_LineType_RWall))
        {
            gGroundStruct.hyrule.twister_leftedge_x = edge_pos.x;
        }
        else gGroundStruct.hyrule.twister_leftedge_x = edge_pos.x + 300.0F;
        
        mpCollision_GetLREdgeRight(line_id, &edge_pos);

        edge_under = func_ovl2_800FA964(line_id);

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
        mpCollision_GetGPointPositionsID(gGroundStruct.hyrule.twister_pos_ids[lbRandom_GetIntRange(gGroundStruct.hyrule.twister_pos_count)], &pos);

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

        func_ovl2_800E1D48(gGroundStruct.hyrule.twister_gobj, func_ovl2_8010AB74);

        func_800269C0(alSound_SFX_HyruleTwisterSpawn);
    }
}

// 0x8010A4F4
bool32 grHyrule_Twister_DecLifetimeCheckStop(void)
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
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];
    f32 twister_pos_x = DObjGetStruct(gGroundStruct.hyrule.twister_gobj)->translate.x;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if ((fp->ground_or_air == GA_Ground) && (fp->coll_data.ground_line_id == gGroundStruct.hyrule.twister_line_id))
        {
            if (fp->joint[ftParts_Joint_TopN]->translate.x > twister_pos_x)
            {
                players_rside++;
            }
            else players_lside++;
        }
        fighter_gobj = fighter_gobj->group_gobj_next;
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
    Vec3f *pos = &DObjGetStruct(gGroundStruct.hyrule.twister_gobj)->translate;
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

        mpCollision_GetUUCommonUp(gGroundStruct.hyrule.twister_line_id, pos, &ground_level, NULL, NULL);

        pos->y += ground_level;

        gGroundStruct.hyrule.twister_eftrans->translate = *pos;
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
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->status_info.status_id != ftStatus_Common_Twister)
        {
            fighter_gobj = fighter_gobj->group_gobj_next;
        }
        else return;
    }
    gGroundStruct.hyrule.twister_status = grHyrule_Twister_Subside;
    gGroundStruct.hyrule.twister_wait = 32;

    func_ovl2_800E1D9C(gGroundStruct.hyrule.twister_gobj);

    if (gGroundStruct.hyrule.twister_eftrans != NULL)
    {
        efParticle_Twister_MakeEffect(&gGroundStruct.hyrule.twister_eftrans->translate, 7);
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
