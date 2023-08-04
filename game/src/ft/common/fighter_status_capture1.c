#include <ft/fighter.h>
#include <it/item.h>

// 0x8014A5F0
void ftCommon_CapturePulled_BitmapRotateScale(GObj *fighter_gobj, Vec3f *this_pos, Vec3f *rotate)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *capture_fp = ftGetStruct(this_fp->capture_gobj);
    DObj *joint = DObjGetStruct(fighter_gobj)->next;
    HAL_Bitmap capture;

    func_ovl0_800C9A38(&capture, capture_fp->joint[capture_fp->attributes->joint_itemhold_heavy]);
    func_ovl2_800EDA0C(&capture.unk_bitmap_0x0, rotate);

    this_pos->x = (-joint->translate.x * DObjGetStruct(fighter_gobj)->scale.x);
    this_pos->y = (-joint->translate.y * DObjGetStruct(fighter_gobj)->scale.y);
    this_pos->z = (-joint->translate.z * DObjGetStruct(fighter_gobj)->scale.z);

    func_ovl2_800ED3C0(&capture.unk_bitmap_0x0, this_pos);
}

// 0x8014A6B4
void ftCommon_Capture_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    ftCommon_CapturePulled_BitmapRotateScale(fighter_gobj, &pos, &DObjGetStruct(fighter_gobj)->rotate);

    DObjGetStruct(fighter_gobj)->translate.x = pos.x;
    DObjGetStruct(fighter_gobj)->translate.z = pos.z;

    if ((fp->status_info.status_id == ftStatus_Common_CapturePulled) && (fp->status_vars.common.capture.is_goto_pulled_wait != FALSE))
    {
        ftCommon_CaptureWait_SetStatus(fighter_gobj);
    }
}

// 0x8014A72C
void ftCommon_CapturePulled_ProcMap(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    ftStruct *capture_fp = ftGetStruct(capture_gobj);
    Vec3f *this_pos = &DObjGetStruct(fighter_gobj)->translate;
    Vec3f capture_pos;
    f32 dist_y;

    if (mpCollision_GetUUCommonUp(capture_fp->coll_data.ground_line_id, this_pos, &dist_y, &this_fp->coll_data.ground_flags, &this_fp->coll_data.ground_angle.x) != FALSE)
    {
        this_fp->coll_data.ground_line_id = capture_fp->coll_data.ground_line_id;

        if (dist_y >= 0.0F)
        {
            this_pos->y += dist_y;

            this_fp->ground_or_air = GA_Ground;
            this_fp->jumps_used = 0;
        }
        else
        {
            this_pos->y += dist_y * 0.5F;

            this_fp->ground_or_air = GA_Air;
            this_fp->jumps_used = 1;
        }
    }
    else
    {
        if (capture_fp->lr == RIGHT)
        {
            mpCollision_GetLREdgeRight(capture_fp->coll_data.ground_line_id, &capture_pos);
        }
        else mpCollision_GetLREdgeLeft(capture_fp->coll_data.ground_line_id, &capture_pos);

        this_pos->y = this_pos->y + ((capture_pos.y - this_pos->y) * 0.5F);

        func_ovl2_800DE324(fighter_gobj);

        this_fp->ground_or_air = GA_Air;
        this_fp->jumps_used = 1;
    }
}

// 0x8014A860
void ftCommon_CapturePulled_ProcCapture(GObj *fighter_gobj, GObj *capture_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *capture_fp;

    ftCommon_ProcDamageStopVoice(fighter_gobj);

    if ((this_fp->item_hold != NULL) && (itGetStruct(this_fp->item_hold)->weight == It_Weight_Heavy))
    {
        ftSetupDropItem(this_fp);
    }
    if (this_fp->catch_gobj != NULL)
    {
        func_ovl3_8014B330(this_fp->catch_gobj);

        this_fp->catch_gobj = NULL;
    }
    else if (this_fp->capture_gobj != NULL)
    {
        func_ovl3_8014AECC(this_fp->capture_gobj, fighter_gobj);
    }
    this_fp->x192_flag_b3 = FALSE;

    this_fp->capture_gobj = capture_gobj;

    capture_fp = ftGetStruct(capture_gobj);

    this_fp->lr = -capture_fp->lr;

    ftStatus_Update(fighter_gobj, ftStatus_Common_CapturePulled, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    this_fp->status_vars.common.capture.is_goto_pulled_wait = FALSE;

    ftCommon_SetCaptureIgnoreMask(this_fp, FTCATCHKIND_MASK_ALL);
    ftMain_MakeRumble(this_fp, 9, 0);
    func_ovl2_800D9444(fighter_gobj);
    ftCommon_Capture_ProcPhysics(fighter_gobj);
    ftCommon_CapturePulled_ProcMap(fighter_gobj);
}

// 0x8014A980
void ftCommon_CaptureWait_ProcMap(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    ftStruct *capture_fp = ftGetStruct(capture_gobj);
    Vec3f *this_pos = &DObjGetStruct(fighter_gobj)->translate;
    Vec3f capture_pos;
    f32 dist_y;

    if (mpCollision_GetUUCommonUp(capture_fp->coll_data.ground_line_id, this_pos, &dist_y, &this_fp->coll_data.ground_flags, &this_fp->coll_data.ground_angle.x) != FALSE)
    {
        this_fp->coll_data.ground_line_id = capture_fp->coll_data.ground_line_id;

        this_pos->y += dist_y;

        this_fp->ground_or_air = GA_Ground;
        this_fp->jumps_used = 0;
    }
    else
    {
        if (capture_fp->lr == RIGHT)
        {
            mpCollision_GetLREdgeRight(capture_fp->coll_data.ground_line_id, &capture_pos);
        }
        else mpCollision_GetLREdgeLeft(capture_fp->coll_data.ground_line_id, &capture_pos);

        this_pos->y = capture_pos.y;

        func_ovl2_800DE324(fighter_gobj);

        this_fp->ground_or_air = GA_Air;
        this_fp->jumps_used = 1;
    }
}

// 0x8014AA58
void ftCommon_CaptureWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *capture_fp = ftGetStruct(this_fp->capture_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_CaptureWait, 0.0F, 1.0F, (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_MODELPART_PRESERVE));

    if ((capture_fp->ft_kind == Ft_Kind_Yoshi) || (capture_fp->ft_kind == Ft_Kind_PolyYoshi))
    {
        this_fp->is_invisible = TRUE;

        ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Intangible);
    }
    ftCommon_SetCaptureIgnoreMask(this_fp, FTCATCHKIND_MASK_ALL);
}