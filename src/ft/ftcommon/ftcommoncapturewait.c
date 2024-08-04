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

    if (mpCollisionGetUDCommonUp(capture_fp->coll_data.ground_line_id, this_pos, &dist_y, &this_fp->coll_data.ground_flags, &this_fp->coll_data.ground_angle) != FALSE)
    {
        this_fp->coll_data.ground_line_id = capture_fp->coll_data.ground_line_id;

        this_pos->y += dist_y;

        this_fp->ga = nMPKineticsGround;
        this_fp->jumps_used = 0;
    }
    else
    {
        if (capture_fp->lr == nGMFacingR)
        {
            mpCollisionGetLREdgeRight(capture_fp->coll_data.ground_line_id, &capture_pos);
        }
        else mpCollisionGetLREdgeLeft(capture_fp->coll_data.ground_line_id, &capture_pos);

        this_pos->y = capture_pos.y;

        mpCommonSetFighterProjectGround(fighter_gobj);

        this_fp->ga = nMPKineticsAir;
        this_fp->jumps_used = 1;
    }
}

// 0x8014AA58
void ftCommonCaptureWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *capture_fp = ftGetStruct(this_fp->capture_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusCaptureWait, 0.0F, 1.0F, (FTSTATUS_PRESERVE_TEXTUREPART | FTSTATUS_PRESERVE_MODELPART));

    if ((capture_fp->ft_kind == nFTKindYoshi) || (capture_fp->ft_kind == nFTKindNYoshi))
    {
        this_fp->is_invisible = TRUE;

        ftParamSetHitStatusAll(fighter_gobj, nGMHitStatusIntangible);
    }
    ftParamSetCaptureImmuneMask(this_fp, FTCATCHKIND_MASK_ALL);
}
