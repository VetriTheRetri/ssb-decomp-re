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

    FTStruct *this_fp = ftGetStruct(fighter_gobj);
    FTStruct *capture_fp = ftGetStruct(capture_gobj);
    Vec2h *offset_add = (Vec2h*) ((uintptr_t)gFTDataCaptainMainMotion + (intptr_t)&lFTCaptainSpecialHiOffset);
    s32 unused;

    pos->x = 0.0F;
    pos->y = 0.0F;
    pos->z = 0.0F;

    gmCollisionGetFighterPartsWorldPosition(this_fp->joints[29], pos);
    gmCollisionGetFighterPartsWorldPosition(capture_fp->joints[nFTPartsJointTopN], &offset);

    offset.x += (offset_add[capture_fp->fkind].x * this_fp->lr);
    offset.y += offset_add[capture_fp->fkind].y;

    syVectorSub3D(pos, &offset);
}

// 0x8014D200
void ftCommonCaptureCaptainProcPhysics(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f offset;

    if (fp->status_vars.common.capturecaptain.capture_flag & FTCOMMON_CAPTURECAPTAIN_MASK_THROW)
    {
        ftCommonCaptureCaptainRelease(fighter_gobj);
    }
    else if (!(fp->status_vars.common.capturecaptain.capture_flag & FTCOMMON_CAPTURECAPTAIN_MASK_NOUPDATE))
    {
        ftCommonCaptureCaptainUpdatePositions(fp->capture_gobj, fighter_gobj, &offset);

        if (syVectorMag3D(&offset) > 180.0F)
        {
            syVectorNorm3D(&offset);
            syVectorScale3D(&offset, 180.0F);
        }
        syVectorAdd3D(&DObjGetStruct(fighter_gobj)->translate.vec.f, &offset);
    }
}

// 0x8014D2A0
void ftCommonCaptureCaptainProcCapture(GObj *fighter_gobj, GObj *capture_gobj)
{
    FTStruct *this_fp = ftGetStruct(fighter_gobj);
    FTStruct *capture_fp;

    ftParamStopVoiceRunProcDamage(fighter_gobj);

    if ((this_fp->item_gobj != NULL) && (itGetStruct(this_fp->item_gobj)->weight == nITWeightHeavy))
    {
        ftSetupDropItem(this_fp);
    }
    if (this_fp->catch_gobj != NULL)
    {
        ftCommonThrownSetStatusDamageRelease(this_fp->catch_gobj);

        this_fp->catch_gobj = NULL;
    }
    this_fp->capture_gobj = capture_gobj;

    capture_fp = ftGetStruct(capture_gobj);

    this_fp->lr = -capture_fp->lr;

    this_fp->status_vars.common.capturecaptain.capture_flag = 0;

    if (this_fp->ga != nMPKineticsAir)
    {
        this_fp->status_vars.common.capturecaptain.capture_flag |= FTCOMMON_CAPTURECAPTAIN_MASK_NOUPDATE;

        this_fp->unk_ft_0x192_b3 = TRUE;
    }
    else this_fp->unk_ft_0x192_b3 = FALSE;

    mpCommonSetFighterAir(this_fp);
    ftMainSetStatus(fighter_gobj, nFTCommonStatusCaptureCaptain, FTCOMMON_CAPTURECAPTAIN_FRAME_BEGIN, FTCOMMON_CAPTURECAPTAIN_ANIM_SPEED, FTSTATUS_PRESERVE_NONE);
    ftParamSetCaptureImmuneMask(this_fp, FTCATCHKIND_MASK_ALL);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftPhysicsStopVelAll(fighter_gobj);
    ftCommonCaptureCaptainProcPhysics(fighter_gobj);
}

// 0x8014D3BC
void ftCommonCaptureCaptainRelease(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonThrownReleaseThrownUpdateStats(fighter_gobj, fp->lr, 0, 0);
    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_NONE);
}
