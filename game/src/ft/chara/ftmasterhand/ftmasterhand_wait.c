#include <ft/fighter.h>
#include <gm/battle.h>

u8 ftMasterHand_Wait_RandomStatusMain[12];
u8 ftMasterHand_Wait_RandomStatusIndex[16];
ftMasterHandRandom ftMasterHand_Wait_RandomGround[4];
ftMasterHandRandom ftMasterHand_Wait_RandomNoGround[4];
u8 D_ovl3_80188DEC[20];

// 0x801587B0 - New file?
void ftMasterHand_Wait_SetVelStickRange(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    s32 vel_x = (ABS(fp->input.pl.stick_range.x) >= 8) ? fp->input.pl.stick_range.x : 0;
    s32 vel_y = (ABS(fp->input.pl.stick_range.y) >= 8) ? fp->input.pl.stick_range.y : 0;

    fp->phys_info.vel_air.x = vel_x;
    fp->phys_info.vel_air.y = vel_y;
}

// 0x80158824
void ftMasterHand_Wait_DecideStatusPlayer(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 angle;
    ftStruct *target_fp;
    Vec3f pos;

    if (ftCommon_Turn_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        fp->lr = -fp->lr;
        fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y = fp->lr * F_DEG_TO_RAD(90.0F); // HALF_PI32
    }

    angle = ftCommon_GetStickAngleRadians(fp);

    target_fp = ftGetStruct(fp->fighter_vars.masterhand.boss->target_gobj);

    if (fp->input.pl.button_tap & fp->input.button_mask_b)
    {
        if ((fp->input.pl.stick_range.x * fp->lr) >= 20)
        {
            if (ABSF(angle) <= F_DEG_TO_RAD(50.0F)) // 0.87266463F
            {
                ftMasterHand_Common_GotoTargetEdge(fighter_gobj, &pos);
                ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Hippataku_SetStatus, &pos);
                return;
            }
        }
        if ((fp->input.pl.stick_range.y >= 20) && (F_DEG_TO_RAD(50.0F) < angle)) // 0.87266463F
        {
            ftMasterHand_Okuhikouki1_SetStatus(fighter_gobj);
            return;
        }
        else if ((fp->input.pl.stick_range.y <= -20) && (angle < F_DEG_TO_RAD(-50.0F))) // -0.87266463F
        {
            if ((target_fp->coll_data.ground_line_id != -1) && (target_fp->coll_data.ground_line_id != -2))
            {
                ftMasterHand_Common_SetPosOffsetY(fighter_gobj, &pos, 800.0F);
                ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_GootsubusuUp_SetStatus, &pos);
                return;
            }
        }
        ftMasterHand_Common_GotoTargetEdge(fighter_gobj, &pos);
        ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Walk_SetStatus, &pos);

    }
    else if (fp->input.pl.button_tap & fp->input.button_mask_a)
    {
        if ((ABS(fp->input.pl.stick_range.x) >= 56) && (fp->tap_stick_x < 3))
        {
            ftMasterHand_Common_SetPosAddVelAuto(fighter_gobj, &pos, 3000.0F, 0);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Yubideppou1_SetStatus, &pos);
            return;
        }

        else if ((fp->input.pl.stick_range.y >= 53) && (fp->tap_stick_y < 4))
        {
            ftMasterHand_Common_SetPosAddVelAuto(fighter_gobj, &pos, 600.0F, 0);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Okupunch1_SetStatus, &pos);
            return;
        }
        else if ((fp->input.pl.stick_range.y <= -53) && (fp->tap_stick_y < 4))
        {
            ftMasterHand_Common_SetPosAddVelAuto(fighter_gobj, &pos, 600.0F, 0);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_OkutsubushiStart_SetStatus, &pos);
            return;
        }
        else if (((fp->input.pl.stick_range.x * fp->lr) >= 20) && (angle <= F_DEG_TO_RAD(50.0F))) // 0.87266463F
        {
            ftMasterHand_Common_SetPosAddVelAuto(fighter_gobj, &pos, 3000.0F, 100.0F);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Okukouki_SetStatus, &pos);
            return;
        }
        else if ((fp->input.pl.stick_range.y >= 20) && (F_DEG_TO_RAD(50.0F) < angle)) // 0.87266463F
        {
            if ((target_fp->coll_data.ground_line_id != -1) && (target_fp->coll_data.ground_line_id != -2))
            {
                ftMasterHand_Common_SetPosAddVelPlayer(fighter_gobj, &pos, 600.0F, 100.0F);
                ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Drill_SetStatus, &pos);
                return;
            }
        }
        if ((fp->input.pl.stick_range.y <= -20) && (angle < F_DEG_TO_RAD(-50.0F)))
        {
            ftMasterHand_Common_GotoTargetEdge(fighter_gobj, &pos);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Harau_SetStatus, &pos);
            return;
        }
        ftMasterHand_Common_SetPosOffsetY(fighter_gobj, &pos, 800.0F);
        ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Tsutsuku1_SetStatus, &pos);
        return;
    }
    else ftMasterHand_Wait_SetVelStickRange(fighter_gobj);
}

// 0x80158C34
void ftMasterHand_Wait_DecideStatusComputer(GObj *fighter_gobj) // Decide Master Hand's next attack
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    u32 random;
    u32 var;
    s32 status_id;
    u32 unused[2];
    ftMasterHandRandom *index_ptr;

    fp->fighter_vars.masterhand.boss->wait_timer--;

    if (fp->fighter_vars.masterhand.boss->wait_timer == 0)
    {
        if (fp->fighter_vars.masterhand.boss->status_index_guard == 3)
        {
            fp->fighter_vars.masterhand.boss->status_index_guard = 0;

            var = 2;
        }
        else
        {
            random = lbRandom_GetIntRange(3);

            var = D_ovl3_80188DEC[fp->fighter_vars.masterhand.boss->status_index * 3 + random];

            if (var == 2)
            {
                fp->fighter_vars.masterhand.boss->status_index_guard = 0;
            }
            else fp->fighter_vars.masterhand.boss->status_index_guard++;
        }

        if 
        (
            ftGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->coll_data.ground_line_id == -1 ||
            ftGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->coll_data.ground_line_id == -2
        )
        {
            index_ptr = &ftMasterHand_Wait_RandomNoGround[var];
        }
        else index_ptr = &ftMasterHand_Wait_RandomGround[var];

        random = ftMasterHand_Wait_RandomStatusIndex[index_ptr->r1 + lbRandom_GetIntRange(index_ptr->r2)];

        fp->fighter_vars.masterhand.boss->status_index = var;

        status_id = ftMasterHand_Wait_RandomStatusMain[random];

        fp->fighter_vars.masterhand.boss->status_index_random = random;

        switch (status_id)
        {
        case ftStatus_MasterHand_Hippataku:
            ftMasterHand_Common_GotoTargetEdge(fighter_gobj, &pos);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Hippataku_SetStatus, &pos);
            break;

        case ftStatus_MasterHand_Okuhikouki1:
            ftMasterHand_Okuhikouki1_SetStatus(fighter_gobj);
            break;

        case ftStatus_MasterHand_GootsubusuUp:
            ftMasterHand_Common_SetPosOffsetY(fighter_gobj, &pos, 800.0F);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_GootsubusuUp_SetStatus, &pos);
            break;

        case ftStatus_MasterHand_Walk:
            ftMasterHand_Common_GotoTargetEdge(fighter_gobj, &pos);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Walk_SetStatus, &pos);
            break;

        case ftStatus_MasterHand_Yubideppou1:
            ftMasterHand_Common_SetPosAddVelAuto(fighter_gobj, &pos, 3000.0F, 0.0F);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Yubideppou1_SetStatus, &pos);
            break;

        case ftStatus_MasterHand_Okupunch1:
            ftMasterHand_Common_SetPosAddVelAuto(fighter_gobj, &pos, 600.0F, 0.0F);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Okupunch1_SetStatus, &pos);
            break;

        case ftStatus_MasterHand_OkutsubushiStart:
            ftMasterHand_Common_SetPosAddVelAuto(fighter_gobj, &pos, 600.0F, 0.0F);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_OkutsubushiStart_SetStatus, &pos);
            break;

        case ftStatus_MasterHand_Okukouki:
            ftMasterHand_Common_SetPosAddVelAuto(fighter_gobj, &pos, 3000.0F, 100.0F);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Okukouki_SetStatus, &pos);
            break;

        case ftStatus_MasterHand_Drill:
            ftMasterHand_Common_SetPosAddVelPlayer(fighter_gobj, &pos, 600.0F, 100.0F);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Drill_SetStatus, &pos);
            break;

        case ftStatus_MasterHand_Harau:
            ftMasterHand_Common_GotoTargetEdge(fighter_gobj, &pos);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Harau_SetStatus, &pos);
            break;

        case ftStatus_MasterHand_Tsutsuku1:
            ftMasterHand_Common_SetPosOffsetY(fighter_gobj, &pos, 800.0F);
            ftMasterHand_Move_SetStatus(fighter_gobj, ftMasterHand_Tsutsuku1_SetStatus, &pos);
            break;

        default:
            break;
        }
        ftMasterHand_Common_SetNextAttackWait(fighter_gobj);
    }
}

// 0x80158F74
void ftMasterHand_Wait_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_info.pl_kind == Pl_Kind_Man)
    {
        ftMasterHand_Wait_DecideStatusPlayer(fighter_gobj);
    }
    else ftMasterHand_Wait_DecideStatusComputer(fighter_gobj);
}

// 0x80158FB4
void ftMasterHand_Wait_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f vel;
    f32 magnitude;

    if (fp->status_info.pl_kind != Pl_Kind_Man)
    {
        lbVector_Vec3fSubtract(&vel, &fp->status_vars.masterhand.wait.pos, &DObjGetStruct(fighter_gobj)->translate.vec.f);

        magnitude = lbVector_Vec3fMagnitude(&vel);

        lbVector_Vec3fNormalize(&vel);

        lbVector_Vec3fScale(&vel, magnitude * 0.1F);

        fp->phys_info.vel_air.x = vel.x;
        fp->phys_info.vel_air.y = vel.y;
    }
}

// 0x80159040
void ftMasterHand_Wait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;
    Vec3f *translate;
    Vec3f pos;
    s32 ground_line_id;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_MasterHand_Wait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);

    translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;

    if (fp->coll_data.ground_line_id != -1)
    {
        fp->status_vars.masterhand.wait.pos.x = translate->x;
        fp->status_vars.masterhand.wait.pos.y = translate->y + fp->coll_data.ground_dist;
    }
    else
    {
        ground_line_id = ftGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->coll_data.ground_line_id;

        if ((ground_line_id == -1) || (ground_line_id == -2))
        {
            ground_line_id = fp->fighter_vars.masterhand.boss->default_line_id;
        }

        if (translate->x > gMPEdgeBounds.d2.right)
        {
            mpCollision_GetLREdgeRight(ground_line_id, &pos);
        }
        else if (translate->x < gMPEdgeBounds.d2.left)
        {
            mpCollision_GetLREdgeLeft(ground_line_id, &pos);
        }
        else ftMasterHand_Common_GetPositionCenter(ground_line_id, &pos);
        
        fp->status_vars.masterhand.wait.pos.x = pos.x;
        fp->status_vars.masterhand.wait.pos.y = pos.y;
    }

    fp->status_vars.masterhand.wait.pos.y += (fp->fighter_vars.masterhand.boss->wait_div == 1.5F) ? 600.0F : 400.0F;
    fp->status_vars.masterhand.wait.pos.z = 0.0F;
}
