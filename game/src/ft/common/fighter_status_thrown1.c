#include <ft/fighter.h>

// 0x8014AAF0
void ftCommon_Thrown_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftStruct *capture_fp = ftGetStruct(this_fp->capture_gobj);

        if 
        (
            (capture_fp->ft_kind != Ft_Kind_Donkey)                       &&
            (capture_fp->ft_kind != Ft_Kind_PolyDonkey)                   &&
            (capture_fp->ft_kind != Ft_Kind_GiantDonkey)                  ||
            (capture_fp->status_info.status_id != ftStatus_Common_ThrowF)
        )
        {
            ftCommon_Thrown_SetStatusImmediate(fighter_gobj, this_fp->status_vars.common.thrown.status_id);
        }
    }
}

// 0x8014AB64
void ftCommon_Thrown_ProcPhysics(GObj *fighter_gobj)
{
    DObj *joint = DObjGetStruct(fighter_gobj);
    ftCommon_CapturePulled_BitmapRotateScale(fighter_gobj, &joint->translate, &joint->rotate);
}

// 0x8014AB8C
void ftCommon_Thrown_ProcMap(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    ftStruct *capture_fp = ftGetStruct(capture_gobj);
    Vec3f *this_pos = &DObjGetStruct(fighter_gobj)->translate;
    s32 unused[3];
    f32 dist_y;

    if (capture_fp->coll_data.ground_line_id != -1)
    {
        if (mpCollision_GetUUCommonUp(capture_fp->coll_data.ground_line_id, this_pos, &dist_y, &this_fp->coll_data.ground_flags, &this_fp->coll_data.ground_angle.x) != FALSE)
        {
            this_fp->coll_data.ground_line_id = capture_fp->coll_data.ground_line_id;

            return;
        }
    }
    func_ovl2_800DE324(fighter_gobj);
}

// 0x8014AC0C
void ftCommon_Thrown_SetStatusQueue(GObj *fighter_gobj, s32 status_id_new, s32 status_id_queue)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *capture_fp = ftGetStruct(this_fp->capture_gobj);

    this_fp->ground_or_air = GA_Air;
    this_fp->jumps_used = 1;

    ftStatus_Update(fighter_gobj, status_id_new, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    if ((capture_fp->ft_kind == Ft_Kind_Yoshi) || (capture_fp->ft_kind == Ft_Kind_PolyYoshi))
    {
        this_fp->is_invisible = TRUE;

        ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Intangible);
    }
    ftCommon_SetCaptureIgnoreMask(this_fp, FTCATCHKIND_MASK_ALL);

    this_fp->status_vars.common.thrown.status_id = status_id_queue;
}

// 0x8014ACB4
void ftCommon_Thrown_SetStatusImmediate(GObj *fighter_gobj, s32 status_id)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *capture_fp = ftGetStruct(this_fp->capture_gobj);

    this_fp->ground_or_air = GA_Air;
    this_fp->jumps_used = 1;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    if ((capture_fp->ft_kind == Ft_Kind_Yoshi) || (capture_fp->ft_kind == Ft_Kind_PolyYoshi))
    {
        this_fp->is_invisible = TRUE;

        ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Intangible);
    }
    ftCommon_SetCaptureIgnoreMask(this_fp, FTCATCHKIND_MASK_ALL);

    if 
    (
        (capture_fp->ft_kind == Ft_Kind_Mario)      ||
        (capture_fp->ft_kind == Ft_Kind_MetalMario) ||
        (capture_fp->ft_kind == Ft_Kind_Luigi)      ||
        (capture_fp->ft_kind == Ft_Kind_PolyMario)  ||
        (capture_fp->ft_kind == Ft_Kind_PolyLuigi)
    )
    {
        if (capture_fp->status_info.status_id == ftStatus_Common_ThrowB)
        {
            ftMain_MakeRumble(this_fp, 7, 0);
        }
    }
}