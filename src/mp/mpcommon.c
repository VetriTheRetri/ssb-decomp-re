#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>

extern f32 lbMathMag2D();

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80130E20 
sb32 (*sMPCommonProcPass)(GObj*);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800DD820 - new file?
sb32 mpCommonCheckSetFighterCliffEdge(GObj *fighter_gobj, s32 ground_line_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    mpObjectColl *objcoll = &fp->coll_data.objcoll;
    Vec3f *translate = fp->coll_data.p_translate;
    Vec3f edge_pos;
    Vec3f sp4C;
    Vec3f angle;
    u32 flags;
    f32 ground_dist;

    if (mpCollisionCheckExistLineID(ground_line_id) == FALSE)
    {
        return FALSE;
    }
    else
    {
        mpCollisionGetLREdgeLeft(ground_line_id, &edge_pos);

        if (translate->x <= edge_pos.x)
        {
            if ((fp->lr == nGMFacingL) && (fp->input.pl.stick_range.x > -60))
            {
                edge_pos.x += 40.0F;

                mpCollisionGetUDCommonUp(ground_line_id, &edge_pos, &ground_dist, &flags, &angle);

                edge_pos.y += ground_dist;
                sp4C.x = objcoll->width + edge_pos.x;
                sp4C.y = (objcoll->center + edge_pos.y) - objcoll->bottom;

                if (mpCollisionCheckLWallLineCollisionSame(&edge_pos, &sp4C, NULL, NULL, NULL, NULL) == FALSE)
                {
                    fp->lr = nGMFacingL;

                    goto setground;
                }
            }
        }
        else if ((fp->lr == nGMFacingR) && (fp->input.pl.stick_range.x < 60))
        {
            mpCollisionGetLREdgeRight(ground_line_id, &edge_pos);

            edge_pos.x -= 40.0F;

            mpCollisionGetUDCommonUp(ground_line_id, &edge_pos, &ground_dist, &flags, &angle);

            edge_pos.y += ground_dist;
            sp4C.x = edge_pos.x - objcoll->width;
            sp4C.y = (objcoll->center + edge_pos.y) - objcoll->bottom;

            if (mpCollisionCheckRWallLineCollisionSame(&edge_pos, &sp4C, NULL, NULL, NULL, NULL) == FALSE)
            {
                fp->lr = nGMFacingR;

                goto setground;
            }
        }
    }
    return FALSE;

setground: // ???
    *translate = edge_pos; // This is what causes the infamous Dream Land teleport

    fp->coll_data.ground_line_id = ground_line_id;
    fp->coll_data.ground_flags = flags;
    fp->coll_data.ground_angle = angle;
    fp->coll_data.ground_dist = 0.0F;

    fp->coll_data.coll_mask_stat |= MPCOLL_VERTEX_CLL_CLIFF;

    return TRUE;
}

// 0x800DDA6C
sb32 mpCommonCheckSetFighterEdge(GObj *fighter_gobj, s32 ground_line_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    mpObjectColl *objcoll = &fp->coll_data.objcoll;
    Vec3f *translate = fp->coll_data.p_translate;
    Vec3f edge_pos;
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f angle;
    u32 flags;
    f32 ground_dist;

    if (mpCollisionCheckExistLineID(ground_line_id) == FALSE)
    {
        return FALSE;
    }
    else
    {
        mpCollisionGetLREdgeLeft(ground_line_id, &edge_pos);

        if (translate->x <= edge_pos.x)
        {
            if (mpCollisionGetUDCommonUp(ground_line_id, &edge_pos, &ground_dist, &flags, &angle));

            sp4C.x = edge_pos.x + 1.0F;
            sp4C.y = edge_pos.y + 1.0F;

            sp40.x = objcoll->width + edge_pos.x;
            sp40.y = (objcoll->center + edge_pos.y) - objcoll->bottom;

            if (mpCollisionCheckLWallLineCollisionSame(&sp4C, &sp40, NULL, NULL, NULL, NULL) == FALSE)
            {
                if (TRUE) goto setground;
            }
        }
        else
        {
            mpCollisionGetLREdgeRight(ground_line_id, &edge_pos);

            if (mpCollisionGetUDCommonUp(ground_line_id, &edge_pos, &ground_dist, &flags, &angle));

            sp4C.x = edge_pos.x - 1.0F;
            sp4C.y = edge_pos.y + 1.0F;

            sp40.x = edge_pos.x - objcoll->width;
            sp40.y = (objcoll->center + edge_pos.y) - objcoll->bottom;

            if (mpCollisionCheckRWallLineCollisionSame(&sp4C, &sp40, NULL, NULL, NULL, NULL) == FALSE)
            {
                if (TRUE) goto setground;
            }
        }
    }
    return FALSE;

setground: // Absolutely ridiculous match
    *translate = edge_pos;

    fp->coll_data.ground_line_id = ground_line_id;
    fp->coll_data.ground_flags = flags;
    fp->coll_data.ground_angle = angle;
    fp->coll_data.ground_dist = 0.0F;

    return TRUE;
}

// 0x800DDC50
sb32 mpCommonRunFighterAllCollisions(mpCollData *coll_data, GObj *fighter_gobj, u32 flags)
{
    s32 ground_line_id = coll_data->ground_line_id;
    sb32 sp20 = FALSE;

    if (mpProcessCheckTestLWallCollision(coll_data) != FALSE)
    {
        mpProcessRunLWallCollision(coll_data);

        coll_data->is_coll_end = TRUE;
    }
    if (mpProcessCheckTestRWallCollision(coll_data) != FALSE)
    {
        mpProcessRunRWallCollision(coll_data);

        coll_data->is_coll_end = TRUE;
    }
    if (mpProcessCheckTestGroundCollisionNew(coll_data) != FALSE)
    {
        if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
        {
            mpProcessRunGroundEdgeAdjust(coll_data);

            sp20 = TRUE;
        }
    }
    else if (flags & MPCOLL_PROC_TYPE_CLIFFEDGE)
    {
        mpCommonCheckSetFighterCliffEdge(fighter_gobj, ground_line_id);

        coll_data->is_coll_end = TRUE;
    }
    else if (flags & MPCOLL_PROC_TYPE_STOPEDGE)
    {
        if (mpCommonCheckSetFighterEdge(fighter_gobj, ground_line_id) != FALSE)
        {
            sp20 = TRUE;
        }
        else coll_data->is_coll_end = TRUE;
    }
    else coll_data->is_coll_end = TRUE;

    if (mpProcessCheckTestGroundCollision(coll_data, ground_line_id) != FALSE)
    {
        func_ovl2_800DD59C(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
        {
            mpProcessRunGroundEdgeAdjust(coll_data);

            sp20 = TRUE;
        }
        coll_data->coll_mask_stat &= ~MPCOLL_VERTEX_CLL_CLIFF;
        coll_data->is_coll_end = FALSE;
    }
    return sp20;
}

// 0x800DDDA8
sb32 mpCommonCheckFighterOnGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpProcessUpdateMapProcMain(&fp->coll_data, mpCommonRunFighterAllCollisions, fighter_gobj, MPCOLL_PROC_TYPE_DEFAULT);
}

// 0x800DDDDC
sb32 mpCommonProcFighterOnGround(GObj *fighter_gobj, void (*proc_map)(GObj*))
{
    if (mpCommonCheckFighterOnGround(fighter_gobj) == FALSE)
    {
        proc_map(fighter_gobj);

        return FALSE;
    }
    else return TRUE;
}

// 0x800DDE1C
sb32 mpCommonCheckFighterOnCliffEdge(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpProcessUpdateMapProcMain(&fp->coll_data, mpCommonRunFighterAllCollisions, fighter_gobj, MPCOLL_PROC_TYPE_CLIFFEDGE);
}

// 0x800DDE50
sb32 mpCommonCheckFighterOnEdge(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpProcessUpdateMapProcMain(&fp->coll_data, mpCommonRunFighterAllCollisions, fighter_gobj, MPCOLL_PROC_TYPE_STOPEDGE);
}

// 0x800DDE84
sb32 mpCommonProcFighterOnEdge(GObj *fighter_gobj, void (*proc_map)(GObj*))
{
    if (mpCommonCheckFighterOnEdge(fighter_gobj) == FALSE)
    {
        proc_map(fighter_gobj);

        return FALSE;
    }
    else return TRUE;
}

// 0x800DDEC4
void mpCommonSetFighterFallOnGroundBreak(GObj *fighter_gobj)
{
    mpCommonProcFighterOnGround(fighter_gobj, ftCommonFallSetStatus);
}

// 0x800DDEE8
void mpCommonProcFighterOnCliffEdge(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpCommonCheckFighterOnCliffEdge(fighter_gobj) == FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_VERTEX_CLL_CLIFF)
        {
            ftCommonOttottoSetStatus(fighter_gobj);
        }
        else ftCommonFallSetStatus(fighter_gobj);
    }
}

// 0x800DDF44
void mpCommonSetFighterFallOnEdgeBreak(GObj *fighter_gobj)
{
    if (mpCommonCheckFighterOnEdge(fighter_gobj) == FALSE)
    {
        ftCommonFallSetStatus(fighter_gobj);
    }
}

// 0x800DDF74
sb32 func_ovl2_800DDF74(GObj *fighter_gobj, ftStruct *fp, ftAttributes *attributes, DObj *target_joint, Vec3f *vec)
{
    Vec3f sp64;
    Vec3f vec_translate;
    Vec3f sp4C;
    f32 sp48;
    DObj *joint;
    f32 tangent;
    u32 sp3C;
    f32 ternary;
    f32 translate_y;

    if (mpCollisionGetUDCommonUp(fp->coll_data.ground_line_id, vec, &sp48, &sp3C, &sp64) != FALSE)
    {
        translate_y = (vec->y + sp48) - DObjGetStruct(fighter_gobj)->translate.vec.f.y;
    }
    else
    {
        mpCollisionGetLREdgeLeft(fp->coll_data.ground_line_id, &vec_translate);

        if (vec_translate.x < vec->x)
        {
            mpCollisionGetLREdgeRight(fp->coll_data.ground_line_id, &vec_translate);
        }
        translate_y = vec_translate.y - DObjGetStruct(fighter_gobj)->translate.vec.f.y;
    }

    ternary = ABSF(translate_y);

    if (ternary < 0.0001F)
    {
        return FALSE;
    }

    vec->y += translate_y;

    joint = DObjGetStruct(fighter_gobj);

    if (vec->y < joint->translate.vec.f.y)
    {
        ternary = ((joint->translate.vec.f.x < vec->x) ? -(joint->translate.vec.f.x - vec->x) : (joint->translate.vec.f.x - vec->x));

        tangent = DObjGetStruct(fighter_gobj)->translate.vec.f.y - ternary * tanf(attributes->unk_0x320);

        if (vec->y < tangent)
        {
            vec->y = tangent;
        }
    }

    sp4C.x = sp4C.y = sp4C.z = 0;

    gmCollisionGetFighterPartsWorldPosition(target_joint, &sp4C);

    if (vec->y > sp4C.y - attributes->unk_0x31C)
    {
        vec->y = sp4C.y - attributes->unk_0x31C;
    }
    return TRUE;
}

// 0x800DE150
void mpCommonUpdateFighterSlopeContour(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    DObj *joint;
    Vec3f sp30;
    f32 sp2C;

    if (fp->ga == nMPKineticsGround)
    {
        if ((fp->coll_data.ground_line_id != -1) && (fp->coll_data.ground_line_id != -2) && (fp->hitlag_timer <= 0))
        {
            if (fp->slope_contour & FTSLOPECONTOUR_FLAG_RFOOT)
            {
                joint = fp->joints[attributes->joint_rfoot_id];

                func_ovl2_800EBC0C(fp, &sp30, &sp2C, attributes->joint_rfoot_rotate, joint);

                if (func_ovl2_800DDF74(fighter_gobj, fp, attributes, joint, &sp30) != FALSE)
                {
                    func_ovl2_800EE018(fp->joints[attributes->joint_rfoot_id], &sp30);
                    func_ovl2_800EBD08(fp->joints[attributes->joint_rfoot_id], attributes->joint_rfoot_rotate, &sp30, sp2C);
                }
            }
            if (fp->slope_contour & FTSLOPECONTOUR_FLAG_LFOOT)
            {
                joint = fp->joints[attributes->joint_lfoot_id];

                func_ovl2_800EBC0C(fp, &sp30, &sp2C, attributes->joint_lfoot_rotate, joint);

                if (func_ovl2_800DDF74(fighter_gobj, fp, attributes, joint, &sp30) != FALSE)
                {
                    func_ovl2_800EE018(fp->joints[attributes->joint_lfoot_id], &sp30);
                    func_ovl2_800EBD08(fp->joints[attributes->joint_lfoot_id], attributes->joint_lfoot_rotate, &sp30, sp2C);
                }
            }
            if (fp->slope_contour & FTSLOPECONTOUR_FLAG_FULL)
            {
                DObjGetStruct(fighter_gobj)->rotate.vec.f.x = (atan2f(fp->coll_data.ground_angle.x, fp->coll_data.ground_angle.y) * fp->lr);
            }
        }
    }
    else return;
}

// 0x800DE324
void mpCommonSetFighterProjectGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpProcessSetCollProjectGroundID(&fp->coll_data);
}

// 0x800DE348
void mpCommonUpdateFighterProjectGround(GObj *fighter_gobj)
{
    mpCommonSetFighterProjectGround(fighter_gobj);
}

// 0x800DE368
void mpCommonSetFighterLandingParams(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->publicity_knockback != 0.0F)
    {
        if (fp->publicity_knockback >= 100.0F)
        {
            if 
            (
                (fp->joints[nFTPartsJointTopN]->translate.vec.f.x < (gMPCollisionEdgeBounds.d2.left + 450.0F)) || 
                (fp->joints[nFTPartsJointTopN]->translate.vec.f.x > (gMPCollisionEdgeBounds.d2.right - 450.0F))
            )
            {
                ftPublicityPlayCliffReact(fighter_gobj, fp->publicity_knockback);
            }   
        }
        fp->publicity_knockback = 0.0F;
    }
    switch (fp->ft_kind)
    {
    case nFTKindMario:
    case nFTKindMMario:
    case nFTKindNMario:
        fp->fighter_vars.mario.is_expend_tornado = FALSE;
        break;

    case nFTKindSamus:
    case nFTKindNSamus:
        fp->fighter_vars.samus.charge_recoil = 0;
        return;

    case nFTKindLuigi:
    case nFTKindNLuigi:
        fp->fighter_vars.mario.is_expend_tornado = FALSE;
        break;

    case nFTKindCaptain:
    case nFTKindNCaptain:
        fp->fighter_vars.captain.falcon_punch_unk = FALSE;
        break;

    case nFTKindPurin:
    case nFTKindNPurin:
        fp->fighter_vars.purin.unk_0x0 = FALSE;
        break;
    }
}

// 0x800DE45C
sb32 mpCommonRunFighterSpecialCollisions(mpCollData *coll_data, GObj *fighter_gobj, u32 flags)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *cliffcatch_gobj;
    ftStruct *cliffcatch_fp;
    s32 unused;
    sb32 is_ceilstop = FALSE;
    sb32 is_collide;

    if (mpProcessCheckTestLWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunLWallCollisionAdjNew(coll_data);
    }
    if (mpProcessCheckTestRWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunRWallCollisionAdjNew(coll_data);
    }
    if (mpProcessCheckTestCeilCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunCeilCollisionAdjNew(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_FLAG_CEIL)
        {
            mpProcessRunCeilEdgeAdjust(coll_data);
        }
        if ((flags & MPCOLL_PROC_TYPE_CEILHEAVY) && (this_fp->phys_info.vel_air.y >= 30.0F))
        {
            coll_data->coll_mask_curr |= MPCOLL_FLAG_CEILHEAVY;

            is_ceilstop = TRUE;

            coll_data->is_coll_end = TRUE;
        }
    }
                                         is_collide 
                             
                                            =
        
                            (flags & MPCOLL_PROC_TYPE_PASS) 

                                            ? 
        
    mpProcessCheckTestGroundCollisionAdjNew(coll_data, sMPCommonProcPass, fighter_gobj) 
        
                                            :
        
                    mpProcessRunGroundCollisionAdjNewNULL(coll_data);

    if (is_collide != FALSE)
    {
        if (flags & MPCOLL_PROC_TYPE_PROJECT)
        {
            func_ovl2_800DD6A8(coll_data);

            if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
            {
                mpProcessRunGroundEdgeAdjust(coll_data);
            }
            else mpProcessSetCollProjectGroundID(coll_data);
        }
        else
        {
            func_ovl2_800DD59C(coll_data);
            mpCommonSetFighterLandingParams(fighter_gobj);

            if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
            {
                mpProcessRunGroundEdgeAdjust(coll_data);

                coll_data->is_coll_end = TRUE;

                return TRUE;
            }
        }
    }
    else mpProcessSetCollProjectGroundID(coll_data);

    if ((flags & MPCOLL_PROC_TYPE_CLIFF) && (this_fp->cliffcatch_wait == 0))
    {
        if ((mpProcessCheckTestLCliffCollision(coll_data) != FALSE) || (mpProcessCheckTestRCliffCollision(coll_data) != FALSE))
        {
            cliffcatch_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

            while (cliffcatch_gobj != NULL)
            {
                if (cliffcatch_gobj != fighter_gobj)
                {
                    cliffcatch_fp = ftGetStruct(cliffcatch_gobj);

                    if ((cliffcatch_fp->is_cliff_hold) && (this_fp->coll_data.cliff_id == cliffcatch_fp->coll_data.cliff_id) && (this_fp->lr == cliffcatch_fp->lr))
                    {
                        return is_ceilstop;
                    }
                    else goto next_gobj; // Bruh
                }
            next_gobj:
                cliffcatch_gobj = cliffcatch_gobj->link_next;
            }
            mpCommonSetFighterLandingParams(fighter_gobj);

            coll_data->is_coll_end = TRUE;

            return TRUE;
        }
    }
    return is_ceilstop;
}

// 0x800DE6B0
sb32 mpCommonCheckFighterLanding(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpProcessUpdateMapProcMain(&fp->coll_data, mpCommonRunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_DEFAULT);
}

// 0x800DE6E4
sb32 mpCommonProcFighterLanding(GObj *fighter_gobj, void(*proc_map)(GObj*))
{
    if (mpCommonCheckFighterLanding(fighter_gobj) != FALSE)
    {
        proc_map(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x800DE724 - keep fighter airborne but project onto ground?
sb32 mpCommonCheckFighterProject(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpProcessUpdateMapProcMain(&fp->coll_data, mpCommonRunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_PROJECT);
}

// 0x800DE758
sb32 mpCommonCheckFighterPass(GObj *fighter_gobj, sb32(*proc_map)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    sMPCommonProcPass = proc_map;

    return mpProcessUpdateMapProcMain(&fp->coll_data, mpCommonRunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_PASS);
}

// 0x800DE798
sb32 mpCommonCheckFighterPassCliff(GObj *fighter_gobj, sb32(*proc_map)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    sMPCommonProcPass = proc_map;

    return mpProcessUpdateMapProcMain(&fp->coll_data, mpCommonRunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_PASS | MPCOLL_PROC_TYPE_CLIFF);
}

// 0x800DE7D8
sb32 mpCommonCheckFighterCliff(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpProcessUpdateMapProcMain(&fp->coll_data, mpCommonRunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_CLIFF);
}

// Check if fighter becomes grounded, allow CliffCatch interrupt
sb32 mpCommonProcFighterCliff(GObj *fighter_gobj, void (*proc_map)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpCommonCheckFighterCliff(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_FLAG_CLIFF_MASK)
        {
            ftCommonCliffCatchSetStatus(fighter_gobj);

            return TRUE;
        }
        else proc_map(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x800DE87C
sb32 mpCommonCheckFighterCeilHeavyCliff(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpProcessUpdateMapProcMain(&fp->coll_data, mpCommonRunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_CEILHEAVY | MPCOLL_PROC_TYPE_CLIFF);
}

// 0x800DE8B0
sb32 mpCommonCheckFighterCeilHeavy(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpProcessUpdateMapProcMain(&fp->coll_data, mpCommonRunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_CEILHEAVY);
}

// 0x800DE8E4
void mpCommonSetFighterWaitOrLanding(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->phys_info.vel_air.y > FTCOMMON_ATTACKAIR_SKIPLANDING_VEL_Y_MAX)
    {
        ftCommonWaitSetStatus(fighter_gobj);
    }
    else ftCommonLandingSetStatus(fighter_gobj);
}

// 0x800DE934
void mpCommonProcFighterWaitOrLanding(GObj *fighter_gobj)
{
    mpCommonProcFighterLanding(fighter_gobj, mpCommonSetFighterWaitOrLanding);
}

// 0x800DE958
void mpCommonProcFighterProject(GObj *fighter_gobj)
{
    mpCommonCheckFighterProject(fighter_gobj);
}

// 0x800DE978
void mpCommonProcFighterCliffWaitOrLanding(GObj *fighter_gobj)
{
    mpCommonProcFighterCliff(fighter_gobj, mpCommonSetFighterWaitOrLanding);
}

// 0x800DE99C
void mpCommonProcFighterCliffGroundCeil(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpCommonCheckFighterCeilHeavyCliff(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_FLAG_CLIFF_MASK)
        {
            ftCommonCliffCatchSetStatus(fighter_gobj);
        }
        else if (fp->coll_data.coll_mask_stat & MPCOLL_FLAG_GROUND)
        {
            mpCommonSetFighterWaitOrLanding(fighter_gobj);
        }
        else if (fp->coll_data.coll_mask_curr & MPCOLL_FLAG_CEILHEAVY) // Enter ceiling bonk if true?
        {
            ftCommonStopCeilSetStatus(fighter_gobj);
        }
    }
}

// 0x800DEA20
sb32 mpCommonProcFighterDamage(mpCollData *coll_data, GObj *fighter_gobj, u32 flags)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    sb32 is_collide = FALSE;

    if (mpProcessCheckTestLWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunLWallCollisionAdjNew(coll_data);

        if (!(fp->status_vars.common.damage.coll_mask_prev & MPCOLL_FLAG_LWALL) && (lbMathMag2D(&coll_data->pos_correct) > 30.0F) && (lbVector_Vec3fAngleDiff(&coll_data->pos_correct, &coll_data->lwall_angle) > F_CLC_DTOR32(110.0F))) // 1.9198622F
        {
            fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_FLAG_LWALL;

            is_collide = TRUE;

            coll_data->is_coll_end = TRUE;
        }
        else if (!(coll_data->coll_mask_prev & MPCOLL_FLAG_LWALL))
        {
            fp->status_vars.common.damage.coll_mask_ignore |= MPCOLL_FLAG_LWALL;
        }
    }
    if (mpProcessCheckTestRWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunRWallCollisionAdjNew(coll_data);

        if (!(fp->status_vars.common.damage.coll_mask_prev & MPCOLL_FLAG_RWALL) && (lbMathMag2D(&coll_data->pos_correct) > 30.0F) && (lbVector_Vec3fAngleDiff(&coll_data->pos_correct, &coll_data->rwall_angle) > F_CLC_DTOR32(110.0F))) // 1.9198622F
        {
            fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_FLAG_RWALL;

            is_collide = TRUE;

            coll_data->is_coll_end = TRUE;
        }
        else if (!(coll_data->coll_mask_prev & MPCOLL_FLAG_RWALL))
        {
            fp->status_vars.common.damage.coll_mask_ignore |= MPCOLL_FLAG_RWALL;
        }
    }
    if (mpProcessCheckTestCeilCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunCeilCollisionAdjNew(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_FLAG_CEIL)
        {
            mpProcessRunCeilEdgeAdjust(coll_data);
        }
        if (!(fp->status_vars.common.damage.coll_mask_prev & MPCOLL_FLAG_CEIL) && (lbMathMag2D(&coll_data->pos_correct) > 30.0F) && (lbVector_Vec3fAngleDiff(&coll_data->pos_correct, &coll_data->ceil_angle) > F_CLC_DTOR32(110.0F)))
        {
            fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_FLAG_CEIL;

            is_collide = TRUE;

            coll_data->is_coll_end = TRUE;
        }
        else if (!(coll_data->coll_mask_prev & MPCOLL_FLAG_CEIL))
        {
            fp->status_vars.common.damage.coll_mask_ignore |= MPCOLL_FLAG_CEIL;
        }
    }
    if (mpProcessRunGroundCollisionAdjNewNULL(coll_data) != FALSE)
    {
        if (fp->hitlag_timer > 0)
        {
            func_ovl2_800DD6A8(coll_data);

            if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
            {
                mpProcessRunGroundEdgeAdjust(coll_data);
            }
            else mpProcessSetCollProjectGroundID(coll_data);
        }
        else
        {
            if (lbVector_Vec3fAngleDiff(&coll_data->pos_correct, &coll_data->ground_angle) > F_CLC_DTOR32(110.0F))
            {
                func_ovl2_800DD59C(coll_data);
                mpCommonSetFighterLandingParams(fighter_gobj);

                if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
                {
                    mpProcessRunGroundEdgeAdjust(coll_data);

                    fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_FLAG_GROUND;

                    is_collide = TRUE;

                    coll_data->is_coll_end = TRUE;
                }
            }
            else
            {
                func_ovl2_800DD6A8(coll_data);

                if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
                {
                    mpProcessRunGroundEdgeAdjust(coll_data);

                    if (!(coll_data->coll_mask_prev & MPCOLL_FLAG_GROUND))
                    {
                        fp->status_vars.common.damage.coll_mask_ignore |= MPCOLL_FLAG_GROUND;

                        fp->status_vars.common.damage.wall_collide_angle = coll_data->ground_angle;
                    }
                }
                else mpProcessSetCollProjectGroundID(coll_data);
            }
        }
    }
    else mpProcessSetCollProjectGroundID(coll_data);

    return is_collide;
}

// 0x800DEDAC
sb32 mpCommonCheckFighterDamageCollision(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.damage.coll_mask_prev = fp->status_vars.common.damage.coll_mask_curr;
    fp->status_vars.common.damage.coll_mask_curr = 0;
    fp->status_vars.common.damage.coll_mask_ignore = 0;

    return mpProcessUpdateMapProcMain(&fp->coll_data, mpCommonProcFighterDamage, fighter_gobj, MPCOLL_PROC_TYPE_DEFAULT);
}

// 0x800DEDF0
void mpCommonUpdateFighterKinetics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ga == nMPKineticsAir)
    {
        if (mpCommonCheckFighterLanding(fighter_gobj) != FALSE)
        {
            mpCommonSetFighterGround(fp);
        }
    }
    else if (mpCommonCheckFighterOnGround(fighter_gobj) == FALSE)
    {
        mpCommonSetFighterAir(fp);
    }
}

// 0x800DEE54
void mpCommonSetFighterWaitOrFall(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ga == nMPKineticsAir)
    {
        ftCommonFallSetStatus(fighter_gobj);
    }
    else ftCommonWaitSetStatus(fighter_gobj);
}

// 0x800DEE98
void mpCommonSetFighterGround(ftStruct *fp)
{
    fp->phys_info.vel_ground.x = fp->phys_info.vel_air.x * fp->lr;

    fp->ga = nMPKineticsGround;

    fp->jumps_used = 0;

    fp->stat_flags.ga = nMPKineticsGround; // Ground/Air bool?
}

// 0x800DEEC8
void mpCommonSetFighterAir(ftStruct *fp)
{
    fp->ga = nMPKineticsAir;

    fp->phys_info.vel_air.z = fp->joints[nFTPartsJointTopN]->translate.vec.f.z = 0.0F;

    fp->jumps_used = 1;
}

// 0x800DEEF4
void mpCommonRunDefaultCollision(mpCollData *coll_data, GObj *gobj, u32 flags)
{
    if (mpProcessCheckTestLWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunLWallCollisionAdjNew(coll_data);
    }
    if (mpProcessCheckTestRWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunRWallCollisionAdjNew(coll_data);
    }
    if (mpProcessCheckTestCeilCollisionAdjNew(coll_data) != FALSE)
    {
        mpProcessRunCeilCollisionAdjNew(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_FLAG_CEIL)
        {
            mpProcessRunCeilEdgeAdjust(coll_data);
        }
    }
    if (mpProcessRunGroundCollisionAdjNewNULL(coll_data) != FALSE)
    {
        func_ovl2_800DD6A8(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_FLAG_GROUND)
        {
            mpProcessRunGroundEdgeAdjust(coll_data);
        }
    }
    else mpProcessSetCollProjectGroundID(coll_data);
}

// 0x800DEFBC
void mpCommonCopyCollDataStats(mpCollData *this_coll_data, Vec3f *pos, mpCollData *other_coll_data)
{
    this_coll_data->pos_curr = *pos;

    this_coll_data->p_objcoll = &other_coll_data->objcoll;
    this_coll_data->coll_mask_curr = 0;
    this_coll_data->coll_mask_unk = 0;
    this_coll_data->coll_mask_stat = 0;
    this_coll_data->is_coll_end = FALSE;
    this_coll_data->coll_update_frame = other_coll_data->coll_update_frame;
}

// 0x800DEFF8
void mpCommonResetCollDataStats(mpCollData *coll_data)
{
    coll_data->p_objcoll = &coll_data->objcoll;

    coll_data->coll_update_frame = gMPCollisionUpdateFrame;
    coll_data->coll_mask_curr = 0;
}

// 0x800DF014
void mpCommonRunFighterCollisionDefault(GObj *fighter_gobj, Vec3f *pos, mpCollData *coll_data)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonCopyCollDataStats(&fp->coll_data, pos, coll_data);
    mpCommonRunDefaultCollision(&fp->coll_data, fighter_gobj, MPCOLL_PROC_TYPE_DEFAULT);
    mpCommonResetCollDataStats(&fp->coll_data);
}

// 0x800DF058
void mpCommonRunItemCollisionDefault(GObj *item_gobj, Vec3f *pos, mpCollData *coll_data)
{
    itStruct *ip = itGetStruct(item_gobj);

    mpCommonCopyCollDataStats(&ip->coll_data, pos, coll_data);
    mpCommonRunDefaultCollision(&ip->coll_data, item_gobj, MPCOLL_PROC_TYPE_DEFAULT);
    mpCommonResetCollDataStats(&ip->coll_data);
}

// 0x800DF09C
void mpCommonRunWeaponCollisionDefault(GObj *weapon_gobj, Vec3f *pos, mpCollData *coll_data)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    mpCommonCopyCollDataStats(&wp->coll_data, pos, coll_data);
    mpCommonRunDefaultCollision(&wp->coll_data, weapon_gobj, MPCOLL_PROC_TYPE_DEFAULT);
    mpCommonResetCollDataStats(&wp->coll_data);
}
