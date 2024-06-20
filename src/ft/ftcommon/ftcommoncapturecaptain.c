#include <ft/fighter.h>
#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lFTCaptainSpecialHiOffset;          // 0x00000000

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014D0F0
void ftCommonCaptureCaptainUpdatePositions(GObj *fighter_gobj, GObj *capture_gobj, Vec3f *pos)
{
    // 0x80188A20
    Vec3f offset = { 0.0F, 0.0F, 0.0F };

    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *capture_fp = ftGetStruct(capture_gobj);
    Vec2h *offset_add = (Vec2h*) ((uintptr_t)gFTDataCaptainBattleMotion + (intptr_t)&lFTCaptainSpecialHiOffset);
    s32 unused;

    pos->x = 0.0F;
    pos->y = 0.0F;
    pos->z = 0.0F;

    ftParts_GetDObjWorldPosition(this_fp->joint[29], pos);
    ftParts_GetDObjWorldPosition(capture_fp->joint[ftParts_Joint_TopN], &offset);

    offset.x += (offset_add[capture_fp->ft_kind].x * this_fp->lr);
    offset.y += offset_add[capture_fp->ft_kind].y;

    lbVector_Vec3fSubtractFrom(pos, &offset);
}

// 0x8014D200
void ftCommonCaptureCaptainProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f offset;

    if (fp->status_vars.common.capturecaptain.capture_flag & FTCOMMON_CAPTURECAPTAIN_MASK_THROW)
    {
        ftCommonCaptureCaptainRelease(fighter_gobj);
    }
    else if (!(fp->status_vars.common.capturecaptain.capture_flag & FTCOMMON_CAPTURECAPTAIN_MASK_NOUPDATE))
    {
        ftCommonCaptureCaptainUpdatePositions(fp->capture_gobj, fighter_gobj, &offset);

        if (lbVector_Vec3fMagnitude(&offset) > 180.0F)
        {
            lbVector_Vec3fNormalize(&offset);
            lbVector_Vec3fScale(&offset, 180.0F);
        }
        lbVector_Vec3fAddTo(&DObjGetStruct(fighter_gobj)->translate.vec.f, &offset);
    }
}

// 0x8014D2A0
void ftCommonCaptureCaptainProcCapture(GObj *fighter_gobj, GObj *capture_gobj)
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
        ftCommon_Thrown_SetStatusDamageRelease(this_fp->catch_gobj);

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
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CaptureCaptain, FTCOMMON_CAPTURECAPTAIN_FRAME_BEGIN, FTCOMMON_CAPTURECAPTAIN_ANIM_SPEED, FTSTATUPDATE_NONE_PRESERVE);
    ftSetCaptureIgnoreMask(this_fp, FTCATCHKIND_MASK_ALL);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftPhysics_StopVelAll(fighter_gobj);
    ftCommonCaptureCaptainProcPhysics(fighter_gobj);
}

// 0x8014D3BC
void ftCommonCaptureCaptainRelease(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Thrown_ReleaseThrownUpdateStats(fighter_gobj, fp->lr, 0, 0);
    ftSetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_NONE);
}
