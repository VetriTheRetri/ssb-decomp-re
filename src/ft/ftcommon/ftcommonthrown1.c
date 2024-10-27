#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014AAF0
void ftCommonThrownProcUpdate(GObj *fighter_gobj)
{
    FTStruct *this_fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        FTStruct *capture_fp = ftGetStruct(this_fp->capture_gobj);

        if 
        (
            (capture_fp->ft_kind != nFTKindDonkey)                      &&
            (capture_fp->ft_kind != nFTKindNDonkey)                     &&
            (capture_fp->ft_kind != nFTKindGDonkey)                     ||
            (capture_fp->status_id != nFTCommonStatusThrowF)
        )
        {
            ftCommonThrownSetStatusImmediate(fighter_gobj, this_fp->status_vars.common.thrown.status_id);
        }
    }
}

// 0x8014AB64
void ftCommonThrownProcPhysics(GObj *fighter_gobj)
{
    DObj *joint = DObjGetStruct(fighter_gobj);
    ftCommonCapturePulledRotateScale(fighter_gobj, &joint->translate.vec.f, &joint->rotate.vec.f);
}

// 0x8014AB8C
void ftCommonThrownProcMap(GObj *fighter_gobj)
{
    FTStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    FTStruct *capture_fp = ftGetStruct(capture_gobj);
    Vec3f *this_pos = &DObjGetStruct(fighter_gobj)->translate.vec.f;
    Vec3f unused;
    f32 dist_y;

    if (capture_fp->coll_data.ground_line_id != -1)
    {
        if (mpCollisionGetUDCommonUp(capture_fp->coll_data.ground_line_id, this_pos, &dist_y, &this_fp->coll_data.ground_flags, &this_fp->coll_data.ground_angle) != FALSE)
        {
            this_fp->coll_data.ground_line_id = capture_fp->coll_data.ground_line_id;

            return;
        }
    }
    mpCommonSetFighterProjectGround(fighter_gobj);
}

// 0x8014AC0C
void ftCommonThrownSetStatusQueue(GObj *fighter_gobj, s32 status_id_new, s32 status_id_queue)
{
    FTStruct *this_fp = ftGetStruct(fighter_gobj);
    FTStruct *capture_fp = ftGetStruct(this_fp->capture_gobj);

    this_fp->ga = nMPKineticsAir;
    this_fp->jumps_used = 1;

    ftMainSetFighterStatus(fighter_gobj, status_id_new, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);

    if ((capture_fp->ft_kind == nFTKindYoshi) || (capture_fp->ft_kind == nFTKindNYoshi))
    {
        this_fp->is_invisible = TRUE;

        ftParamSetHitStatusAll(fighter_gobj, nGMHitStatusIntangible);
    }
    ftParamSetCaptureImmuneMask(this_fp, FTCATCHKIND_MASK_ALL);

    this_fp->status_vars.common.thrown.status_id = status_id_queue;
}

// 0x8014ACB4
void ftCommonThrownSetStatusImmediate(GObj *fighter_gobj, s32 status_id)
{
    FTStruct *this_fp = ftGetStruct(fighter_gobj);
    FTStruct *capture_fp = ftGetStruct(this_fp->capture_gobj);

    this_fp->ga = nMPKineticsAir;
    this_fp->jumps_used = 1;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);

    if ((capture_fp->ft_kind == nFTKindYoshi) || (capture_fp->ft_kind == nFTKindNYoshi))
    {
        this_fp->is_invisible = TRUE;

        ftParamSetHitStatusAll(fighter_gobj, nGMHitStatusIntangible);
    }
    ftParamSetCaptureImmuneMask(this_fp, FTCATCHKIND_MASK_ALL);

    if 
    (
        (capture_fp->ft_kind == nFTKindMario)   ||
        (capture_fp->ft_kind == nFTKindMMario)  ||
        (capture_fp->ft_kind == nFTKindLuigi)   ||
        (capture_fp->ft_kind == nFTKindNMario)  ||
        (capture_fp->ft_kind == nFTKindNLuigi)
    )
    {
        if (capture_fp->status_id == nFTCommonStatusThrowB)
        {
            ftParamMakeRumble(this_fp, 7, 0);
        }
    }
}
