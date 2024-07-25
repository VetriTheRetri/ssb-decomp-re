#include <ft/fighter.h>
#include <gm/battle.h>

extern f32 ftCommon_GetStickAngleRadians(ftStruct*);

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x80188DC0
u8 dFTBossWaitRandomStatusIDs[/* */] =
{
    ftStatus_Boss_Hippataku,
    ftStatus_Boss_Harau,
    ftStatus_Boss_Walk,
    ftStatus_Boss_GootsubusuUp,
    ftStatus_Boss_Tsutsuku1,
    ftStatus_Boss_Drill,
    ftStatus_Boss_Okukouki,
    ftStatus_Boss_Okuhikouki1,
    ftStatus_Boss_Okupunch1,
    ftStatus_Boss_OkutsubushiStart,
    ftStatus_Boss_Yubideppou1
};

// 0x80188DCC - Used to look up status IDs from dFTBossWaitRandomStatusIDs
u8 dFTBossWaitRandomStatusLookup[/* */] =
{
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 4, 6
};

// 0x80188DDC
u8 dFTBossWaitRandomGround[/* */][2] =
{
    {  0, 3 },
    {  3, 4 },
    {  7, 3 },
    { 10, 1 }
};

// 0x80188DE4
u8 dFTBossWaitRandomNoGround[/* */][2] =
{
    {  0, 3 },
    { 11, 2 },
    {  7, 3 },
    { 10, 1 }
};

// 0x80188DEC
u8 dFTBossWaitRandomArrayLookup[/* */] = 
{
    1, 2, 3, 0,
    2, 3, 0, 1,
    3, 0, 1, 2
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801587B0
void ftBossWaitSetVelStickRange(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    s32 vel_x = (ABS(fp->input.pl.stick_range.x) >= 8) ? fp->input.pl.stick_range.x : 0;
    s32 vel_y = (ABS(fp->input.pl.stick_range.y) >= 8) ? fp->input.pl.stick_range.y : 0;

    fp->phys_info.vel_air.x = vel_x;
    fp->phys_info.vel_air.y = vel_y;
}

// 0x80158824
void ftBossWaitDecideStatusPlayer(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 angle;
    ftStruct *target_fp;
    Vec3f pos;

    if (ftCommonTurnCheckInputSuccess(fighter_gobj) != FALSE)
    {
        fp->lr = -fp->lr;
        fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y = fp->lr * F_CST_DTOR32(90.0F); // HALF_PI32
    }

    angle = ftCommon_GetStickAngleRadians(fp);

    target_fp = ftGetStruct(fp->fighter_vars.boss.p->target_gobj);

    if (fp->input.pl.button_tap & fp->input.button_mask_b)
    {
        if ((fp->input.pl.stick_range.x * fp->lr) >= 20)
        {
            if (ABSF(angle) <= F_CST_DTOR32(50.0F)) // 0.87266463F
            {
                ftBossCommonGotoTargetEdge(fighter_gobj, &pos);
                ftBossMoveSetStatus(fighter_gobj, ftBossHippatakuSetStatus, &pos);
                return;
            }
        }
        if ((fp->input.pl.stick_range.y >= 20) && (F_CST_DTOR32(50.0F) < angle)) // 0.87266463F
        {
            ftBossOkuhikouki1SetStatus(fighter_gobj);
            return;
        }
        else if ((fp->input.pl.stick_range.y <= -20) && (angle < F_CST_DTOR32(-50.0F))) // -0.87266463F
        {
            if ((target_fp->coll_data.ground_line_id != -1) && (target_fp->coll_data.ground_line_id != -2))
            {
                ftBossCommonSetPosOffsetY(fighter_gobj, &pos, 800.0F);
                ftBossMoveSetStatus(fighter_gobj, ftBossGootsubusuUpSetStatus, &pos);
                return;
            }
        }
        ftBossCommonGotoTargetEdge(fighter_gobj, &pos);
        ftBossMoveSetStatus(fighter_gobj, ftBossWalkSetStatus, &pos);
    }
    else if (fp->input.pl.button_tap & fp->input.button_mask_a)
    {
        if ((ABS(fp->input.pl.stick_range.x) >= 56) && (fp->tap_stick_x < 3))
        {
            ftBossCommonSetPosAddVelAuto(fighter_gobj, &pos, 3000.0F, 0);
            ftBossMoveSetStatus(fighter_gobj, ftBossYubideppou1SetStatus, &pos);
            return;
        }

        else if ((fp->input.pl.stick_range.y >= 53) && (fp->tap_stick_y < 4))
        {
            ftBossCommonSetPosAddVelAuto(fighter_gobj, &pos, 600.0F, 0);
            ftBossMoveSetStatus(fighter_gobj, ftBossOkupunch1SetStatus, &pos);
            return;
        }
        else if ((fp->input.pl.stick_range.y <= -53) && (fp->tap_stick_y < 4))
        {
            ftBossCommonSetPosAddVelAuto(fighter_gobj, &pos, 600.0F, 0);
            ftBossMoveSetStatus(fighter_gobj, ftBossOkutsubushiStartSetStatus, &pos);
            return;
        }
        else if (((fp->input.pl.stick_range.x * fp->lr) >= 20) && (angle <= F_CST_DTOR32(50.0F))) // 0.87266463F
        {
            ftBossCommonSetPosAddVelAuto(fighter_gobj, &pos, 3000.0F, 100.0F);
            ftBossMoveSetStatus(fighter_gobj, ftBossOkukoukiSetStatus, &pos);
            return;
        }
        else if ((fp->input.pl.stick_range.y >= 20) && (F_CST_DTOR32(50.0F) < angle)) // 0.87266463F
        {
            if ((target_fp->coll_data.ground_line_id != -1) && (target_fp->coll_data.ground_line_id != -2))
            {
                ftBossCommonSetPosAddVelPlayer(fighter_gobj, &pos, 600.0F, 100.0F);
                ftBossMoveSetStatus(fighter_gobj, ftBossDrillSetStatus, &pos);
                return;
            }
        }
        if ((fp->input.pl.stick_range.y <= -20) && (angle < F_CST_DTOR32(-50.0F)))
        {
            ftBossCommonGotoTargetEdge(fighter_gobj, &pos);
            ftBossMoveSetStatus(fighter_gobj, ftBossHarauSetStatus, &pos);
            return;
        }
        ftBossCommonSetPosOffsetY(fighter_gobj, &pos, 800.0F);
        ftBossMoveSetStatus(fighter_gobj, ftBossTsutsuku1SetStatus, &pos);
        return;
    }
    else ftBossWaitSetVelStickRange(fighter_gobj);
}

// 0x80158C34
void ftBossWaitDecideStatusComputer(GObj *fighter_gobj) // Decide Master Hand's next attack
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    s32 random;
    s32 var;
    s32 status_id;
    s32 unused[2];
    u8 *p_random;

    fp->fighter_vars.boss.p->wait_timer--;

    if (fp->fighter_vars.boss.p->wait_timer == 0)
    {
        if (fp->fighter_vars.boss.p->status_index_guard == 3)
        {
            fp->fighter_vars.boss.p->status_index_guard = 0;

            var = 2;
        }
        else
        {
            random = mtTrigGetRandomIntRange(3);

            var = dFTBossWaitRandomArrayLookup[fp->fighter_vars.boss.p->status_index * 3 + random];

            if (var == 2)
            {
                fp->fighter_vars.boss.p->status_index_guard = 0;
            }
            else fp->fighter_vars.boss.p->status_index_guard++;
        }

        if 
        (
            ftGetStruct(fp->fighter_vars.boss.p->target_gobj)->coll_data.ground_line_id == -1 ||
            ftGetStruct(fp->fighter_vars.boss.p->target_gobj)->coll_data.ground_line_id == -2
        )
        {
            p_random = dFTBossWaitRandomNoGround[var];
        }
        else p_random = dFTBossWaitRandomGround[var];

        random = dFTBossWaitRandomStatusLookup[p_random[0] + mtTrigGetRandomIntRange(p_random[1])];

        fp->fighter_vars.boss.p->status_index = var;

        status_id = dFTBossWaitRandomStatusIDs[random];

        fp->fighter_vars.boss.p->status_index_random = random;

        switch (status_id)
        {
        case ftStatus_Boss_Hippataku:
            ftBossCommonGotoTargetEdge(fighter_gobj, &pos);
            ftBossMoveSetStatus(fighter_gobj, ftBossHippatakuSetStatus, &pos);
            break;

        case ftStatus_Boss_Okuhikouki1:
            ftBossOkuhikouki1SetStatus(fighter_gobj);
            break;

        case ftStatus_Boss_GootsubusuUp:
            ftBossCommonSetPosOffsetY(fighter_gobj, &pos, 800.0F);
            ftBossMoveSetStatus(fighter_gobj, ftBossGootsubusuUpSetStatus, &pos);
            break;

        case ftStatus_Boss_Walk:
            ftBossCommonGotoTargetEdge(fighter_gobj, &pos);
            ftBossMoveSetStatus(fighter_gobj, ftBossWalkSetStatus, &pos);
            break;

        case ftStatus_Boss_Yubideppou1:
            ftBossCommonSetPosAddVelAuto(fighter_gobj, &pos, 3000.0F, 0.0F);
            ftBossMoveSetStatus(fighter_gobj, ftBossYubideppou1SetStatus, &pos);
            break;

        case ftStatus_Boss_Okupunch1:
            ftBossCommonSetPosAddVelAuto(fighter_gobj, &pos, 600.0F, 0.0F);
            ftBossMoveSetStatus(fighter_gobj, ftBossOkupunch1SetStatus, &pos);
            break;

        case ftStatus_Boss_OkutsubushiStart:
            ftBossCommonSetPosAddVelAuto(fighter_gobj, &pos, 600.0F, 0.0F);
            ftBossMoveSetStatus(fighter_gobj, ftBossOkutsubushiStartSetStatus, &pos);
            break;

        case ftStatus_Boss_Okukouki:
            ftBossCommonSetPosAddVelAuto(fighter_gobj, &pos, 3000.0F, 100.0F);
            ftBossMoveSetStatus(fighter_gobj, ftBossOkukoukiSetStatus, &pos);
            break;

        case ftStatus_Boss_Drill:
            ftBossCommonSetPosAddVelPlayer(fighter_gobj, &pos, 600.0F, 100.0F);
            ftBossMoveSetStatus(fighter_gobj, ftBossDrillSetStatus, &pos);
            break;

        case ftStatus_Boss_Harau:
            ftBossCommonGotoTargetEdge(fighter_gobj, &pos);
            ftBossMoveSetStatus(fighter_gobj, ftBossHarauSetStatus, &pos);
            break;

        case ftStatus_Boss_Tsutsuku1:
            ftBossCommonSetPosOffsetY(fighter_gobj, &pos, 800.0F);
            ftBossMoveSetStatus(fighter_gobj, ftBossTsutsuku1SetStatus, &pos);
            break;

        default:
            break;
        }
        ftBossCommonSetNextAttackWait(fighter_gobj);
    }
}

// 0x80158F74
void ftBossWaitProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_info.pl_kind == Pl_Kind_Man)
    {
        ftBossWaitDecideStatusPlayer(fighter_gobj);
    }
    else ftBossWaitDecideStatusComputer(fighter_gobj);
}

// 0x80158FB4
void ftBossWaitProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f vel;
    f32 magnitude;

    if (fp->status_info.pl_kind != Pl_Kind_Man)
    {
        lbVector_Vec3fSubtract(&vel, &fp->status_vars.boss.wait.pos, &DObjGetStruct(fighter_gobj)->translate.vec.f);

        magnitude = lbVector_Vec3fMagnitude(&vel);

        lbVector_Vec3fNormalize(&vel);

        lbVector_Vec3fScale(&vel, magnitude * 0.1F);

        fp->phys_info.vel_air.x = vel.x;
        fp->phys_info.vel_air.y = vel.y;
    }
}

// 0x80159040
void ftBossWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;
    Vec3f *translate;
    Vec3f pos;
    s32 ground_line_id;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_Wait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);

    translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;

    if (fp->coll_data.ground_line_id != -1)
    {
        fp->status_vars.boss.wait.pos.x = translate->x;
        fp->status_vars.boss.wait.pos.y = translate->y + fp->coll_data.ground_dist;
    }
    else
    {
        ground_line_id = ftGetStruct(fp->fighter_vars.boss.p->target_gobj)->coll_data.ground_line_id;

        if ((ground_line_id == -1) || (ground_line_id == -2))
        {
            ground_line_id = fp->fighter_vars.boss.p->default_line_id;
        }

        if (translate->x > gMPEdgeBounds.d2.right)
        {
            mpCollisionGetLREdgeRight(ground_line_id, &pos);
        }
        else if (translate->x < gMPEdgeBounds.d2.left)
        {
            mpCollisionGetLREdgeLeft(ground_line_id, &pos);
        }
        else ftBossCommonGetPositionCenter(ground_line_id, &pos);
        
        fp->status_vars.boss.wait.pos.x = pos.x;
        fp->status_vars.boss.wait.pos.y = pos.y;
    }

    fp->status_vars.boss.wait.pos.y += (fp->fighter_vars.boss.p->wait_div == 1.5F) ? 600.0F : 400.0F;
    fp->status_vars.boss.wait.pos.z = 0.0F;
}
