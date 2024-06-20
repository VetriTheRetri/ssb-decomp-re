#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014A980
void ftCommonCaptureWaitProcMap(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    ftStruct *capture_fp = ftGetStruct(capture_gobj);
    Vec3f *this_pos = &DObjGetStruct(fighter_gobj)->translate.vec.f;
    Vec3f capture_pos;
    f32 dist_y;

    if (mpCollision_GetUDCommonUp(capture_fp->coll_data.ground_line_id, this_pos, &dist_y, &this_fp->coll_data.ground_flags, &this_fp->coll_data.ground_angle) != FALSE)
    {
        this_fp->coll_data.ground_line_id = capture_fp->coll_data.ground_line_id;

        this_pos->y += dist_y;

        this_fp->ground_or_air = GA_Ground;
        this_fp->jumps_used = 0;
    }
    else
    {
        if (capture_fp->lr == LR_Right)
        {
            mpCollision_GetLREdgeRight(capture_fp->coll_data.ground_line_id, &capture_pos);
        }
        else mpCollision_GetLREdgeLeft(capture_fp->coll_data.ground_line_id, &capture_pos);

        this_pos->y = capture_pos.y;

        mpObjectProc_SetFighterProjectGroundID(fighter_gobj);

        this_fp->ground_or_air = GA_Air;
        this_fp->jumps_used = 1;
    }
}

// 0x8014AA58
void ftCommonCaptureWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *capture_fp = ftGetStruct(this_fp->capture_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CaptureWait, 0.0F, 1.0F, (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_MODELPART_PRESERVE));

    if ((capture_fp->ft_kind == Ft_Kind_Yoshi) || (capture_fp->ft_kind == Ft_Kind_PolyYoshi))
    {
        this_fp->is_invisible = TRUE;

        ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Intangible);
    }
    gmCommonFighterSetCaptureImmuneMask(this_fp, FTCATCHKIND_MASK_ALL);
}
