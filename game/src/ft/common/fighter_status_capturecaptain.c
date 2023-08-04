#include <ft/fighter.h>
#include <it/item.h>

extern intptr_t ftCaptain_CaptureCaptain_Offset_Add; // 0x00000000
extern void *D_ovl2_80131034;
Vec3f Fighter_CaptureCaptain_Offset = { 0.0F, 0.0F, 0.0F };

// 0x8014D0F0
void ftCommon_CaptureCaptain_UpdateCapturePos(GObj *fighter_gobj, GObj *capture_gobj, Vec3f *pos)
{
    Vec3f offset = Fighter_CaptureCaptain_Offset;
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *capture_fp = ftGetStruct(capture_gobj);
    Vec2h *offset_add = (Vec2h*) ((uintptr_t)D_ovl2_80131034 + (intptr_t)&ftCaptain_CaptureCaptain_Offset_Add);
    s32 unused;

    pos->x = 0.0F;
    pos->y = 0.0F;
    pos->z = 0.0F;

    func_ovl2_800EDF24(this_fp->joint[29], pos);
    func_ovl2_800EDF24(capture_fp->joint[ftParts_TopN_Joint], &offset);

    offset.x += (offset_add[capture_fp->ft_kind].x * this_fp->lr);
    offset.y += offset_add[capture_fp->ft_kind].y;

    vec3f_sub_from(pos, &offset);
}

// 0x8014D0F0
void ftCommon_CaptureCaptain_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f offset;

    if (fp->status_vars.common.capturecaptain.capture_flag & FTCOMMON_CAPTURECAPTAIN_MASK_THROW)
    {
        ftCommon_CaptureCaptain_Release(fighter_gobj);
    }
    else if (!(fp->status_vars.common.capturecaptain.capture_flag & FTCOMMON_CAPTURECAPTAIN_MASK_NOUPDATE))
    {
        ftCommon_CaptureCaptain_UpdateCapturePos(fp->capture_gobj, fighter_gobj, &offset);

        if (vec3f_mag(&offset) > 180.0F)
        {
            vec3f_normalize(&offset);
            vec3f_scale(&offset, 180.0F);
        }
        vec3f_add_to(&DObjGetStruct(fighter_gobj)->translate, &offset);
    }
}

// 0x8014D2A0
void ftCommon_CaptureCaptain_ProcCapture(GObj *fighter_gobj, GObj *capture_gobj)
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
    this_fp->capture_gobj = capture_gobj;

    capture_fp = ftGetStruct(capture_gobj);

    this_fp->lr = -capture_fp->lr;

    this_fp->status_vars.common.capturecaptain.capture_flag = 0;

    if (this_fp->ground_or_air != GA_Air)
    {
        this_fp->status_vars.common.capturecaptain.capture_flag |= FTCOMMON_CAPTURECAPTAIN_MASK_NOUPDATE;

        this_fp->x192_flag_b3 = TRUE;
    }
    else this_fp->x192_flag_b3 = FALSE;

    ftMap_SetAir(this_fp);
    ftStatus_Update(fighter_gobj, ftStatus_Common_CaptureCaptain, FTCOMMON_CAPTURECAPTAIN_FRAME_BEGIN, FTCOMMON_CAPTURECAPTAIN_ANIM_SPEED, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_SetCaptureIgnoreMask(this_fp, FTCATCHKIND_MASK_ALL);
    ftAnim_Update(fighter_gobj);
    func_ovl2_800D9444(fighter_gobj);
    ftCommon_CaptureCaptain_ProcPhysics(fighter_gobj);
}

// 0x8014D3BC
void ftCommon_CaptureCaptain_Release(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl3_8014AFD0(fighter_gobj, fp->lr, 0, 0);
    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_NONE);
}
