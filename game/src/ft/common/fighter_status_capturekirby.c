#include <ft/fighter.h>
#include <it/item.h>

// 0x80188700
ftThrowReleaseDesc ftCommon_CaptureKirby_CatchKnockback     = { 361, 100, 90, 0 };

// 0x80188710
ftThrowReleaseDesc ftCommon_CaptureKirby_CaptureKnockback   = {  80, 100, 60, 0 };

// 0x8014B700
void ftCommon_CaptureKirby_UpdatePosMag(GObj *fighter_gobj, Vec3f *dist)
{
    f32 mag = lbVector_Vec3fMagnitude(dist);

    if (mag < FTCOMMON_CAPTUREKIRBY_MAGNITUDE_MAX)
    {
        DObj *joint = DObjGetStruct(fighter_gobj)->child;

        mag /= FTCOMMON_CAPTUREKIRBY_MAGNITUDE_MAX;
        mag *= FTCOMMON_CAPTUREKIRBY_MAGNITUDE_MUL;

        joint->scale.vec.f.x = joint->scale.vec.f.y = joint->scale.vec.f.z = FTCOMMON_CAPTUREKIRBY_MAGNITUDE_ADD + mag;
    }
}

// 0x8014B774
void ftCommon_CaptureKirby_UpdatePosAll(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    Vec3f dist;
    ftStruct *capture_fp = ftGetStruct(this_fp->capture_gobj);

    dist.x = capture_fp->status_vars.kirby.specialn.dist.x;
    dist.y = capture_fp->status_vars.kirby.specialn.dist.y;
    dist.z = 0;

    ftCommon_CaptureKirby_UpdatePosMag(fighter_gobj, &dist);

    if (ABSF(dist.x) > FTCOMMON_CAPTUREKIRBY_DIST_X_MIN)
    {
        dist.x = ((dist.x < 0.0F) ? LR_Left : LR_Right) * FTCOMMON_CAPTUREKIRBY_DIST_X_MIN;
    }
    if (ABSF(dist.y) > FTCOMMON_CAPTUREKIRBY_DIST_Y_MIN)
    {
        dist.y = ((dist.y < 0.0F) ? UD_Down : UD_Up) * FTCOMMON_CAPTUREKIRBY_DIST_Y_MIN;
    }
    capture_fp->status_vars.kirby.specialn.dist.x -= dist.x;
    capture_fp->status_vars.kirby.specialn.dist.y -= dist.y;

    ftKirby_SpecialN_AddCaptureDistance(capture_fp, this_fp->capture_gobj, &dist);

    DObjGetStruct(fighter_gobj)->translate.vec.f.x = capture_fp->status_vars.kirby.specialn.dist.x + dist.x;
    DObjGetStruct(fighter_gobj)->translate.vec.f.y = capture_fp->status_vars.kirby.specialn.dist.y + dist.y;
    DObjGetStruct(fighter_gobj)->translate.vec.f.z = DObjGetStruct(this_fp->capture_gobj)->translate.vec.f.z;
}

// 0x8014B914
void ftCommon_CaptureKirby_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_CaptureKirby_UpdatePosAll(fighter_gobj);

    if ((fp->status_info.status_id == ftStatus_Common_CaptureKirby) && (fp->status_vars.common.capturekirby.is_goto_capturewait != FALSE))
    {
        ftCommon_CaptureWaitKirby_SetStatus(fighter_gobj);
    }
}

// 0x8014B968
void ftCommon_CaptureKirby_ProcCapture(GObj *fighter_gobj, GObj *capture_gobj)
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

    ftMap_SetAir(this_fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_CaptureKirby, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    ftMain_MakeRumble(this_fp, 7, 0);

    this_fp->status_vars.common.capturekirby.is_goto_capturewait = FALSE;
    this_fp->status_vars.common.capturekirby.lr = LR_Center;
    this_fp->status_vars.common.capturekirby.is_kirby = FALSE;

    ftCommon_SetCaptureIgnoreMask(this_fp, FTCATCHKIND_MASK_ALL);
    ftPhysics_StopVelAll(fighter_gobj);
    ftCommon_CaptureKirby_ProcPhysics(fighter_gobj);
    func_ovl2_800DE348(fighter_gobj);
}

// 0x8014BA98
void ftCommon_CaptureWaitKirby_UpdateBreakoutVars(ftStruct *this_fp, ftStruct *capture_fp)
{
    sb32 is_wiggle = FALSE;

    if ((capture_fp->status_info.status_id == ftStatus_Kirby_SpecialAirNWait) || (capture_fp->status_info.status_id == ftStatus_Kirby_SpecialNWait))
    {
        if ((this_fp->input.pl.stick_range.y >= FTCOMMON_CAPTUREKIRBY_WIGGLE_STICK_RANGE_MIN) && (this_fp->tap_stick_y < FTCOMMON_CAPTUREKIRBY_WIGGLE_BUFFER_FRAMES_MAX))
        {
            this_fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;
            is_wiggle = TRUE;

            if (capture_fp->ground_or_air == GA_Ground)
            {
                ftKirby_SpecialNWait_SwitchStatusAir(capture_fp->fighter_gobj);

                is_wiggle = TRUE;

                capture_fp->phys_info.vel_air.y = FTCOMMON_CAPTUREKIRBY_WIGGLE_VEL_XY;
            }
        }
        else if ((this_fp->input.pl.stick_range.y <= -FTCOMMON_CAPTUREKIRBY_WIGGLE_STICK_RANGE_MIN) && (this_fp->tap_stick_y < FTCOMMON_CAPTUREKIRBY_WIGGLE_BUFFER_FRAMES_MAX) && (this_fp->coll_data.ground_flags & 0x4000))
        {
            this_fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;
            is_wiggle = TRUE;

            if (capture_fp->ground_or_air == GA_Ground)
            {
                ftKirby_SpecialNWait_SwitchStatusAir(capture_fp->fighter_gobj);

                is_wiggle = TRUE;

                capture_fp->coll_data.ignore_line_id = capture_fp->coll_data.ground_line_id;
                capture_fp->phys_info.vel_air.y = -FTCOMMON_CAPTUREKIRBY_WIGGLE_VEL_XY;
            }
        }
        if ((ABS(this_fp->input.pl.stick_range.x) >= (FTCOMMON_CAPTUREKIRBY_WIGGLE_STICK_RANGE_MIN + 3)) && (this_fp->tap_stick_x < (FTCOMMON_CAPTUREKIRBY_WIGGLE_BUFFER_FRAMES_MAX * 2)))
        {
            this_fp->tap_stick_x = FTINPUT_STICKBUFFER_FRAMES_MAX;
            is_wiggle = TRUE;

            if (capture_fp->ground_or_air == FALSE)
            {
                capture_fp->phys_info.vel_ground.x = (((this_fp->input.pl.stick_range.x < 0) ? -1 : 1) * capture_fp->lr) * FTCOMMON_CAPTUREKIRBY_WIGGLE_VEL_XY;
            }
            else capture_fp->phys_info.vel_air.x = ((this_fp->input.pl.stick_range.x < 0) ? -1 : 1) * FTCOMMON_CAPTUREKIRBY_WIGGLE_VEL_XY;
        }
        if (is_wiggle != FALSE)
        {
            if (capture_fp->anim_bank != NULL)
            {
                func_ovl0_800C87F4(capture_fp->joint[ftParts_Joint_TopN]->child, capture_fp->anim_bank, 0.0F);
            }
        }
    }
}

// 0x8014BC94
void ftCommon_CaptureWaitKirby_ProcMap(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    ftStruct *capture_fp = ftGetStruct(capture_gobj);
    Vec3f *this_translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;

    *this_translate = DObjGetStruct(capture_gobj)->translate.vec.f;

    if (capture_fp->lr == LR_Right)
    {
        this_translate->x += 10.0F;
    }
    else this_translate->x -= 10.0F;
}

// 0x8014BD04
void ftCommon_CaptureWaitKirby_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;

    if (capture_gobj != NULL)
    {
        ftStruct *capture_fp = ftGetStruct(capture_gobj);
        s32 breakout_wait;

        ftCommon_CaptureWaitKirby_UpdateBreakoutVars(this_fp, capture_fp);

        breakout_wait = this_fp->breakout_wait;

        ftCommon_Trap_UpdateBreakoutVars(this_fp);

        this_fp->breakout_wait -= ((breakout_wait - this_fp->breakout_wait) * 5);

        this_fp->breakout_wait--;

        if (this_fp->breakout_wait <= 0)
        {
            ftCommon_CatchCut_DamageApplyKnockback(capture_gobj, &ftCommon_CaptureKirby_CatchKnockback); // Deal knockback to player who caught this fighter
            ftCommon_CaptureCut_DamageApplyKnockback(fighter_gobj, &ftCommon_CaptureKirby_CaptureKnockback); // Deal knockback to this fighter

            capture_fp->catch_gobj = NULL;
            this_fp->capture_gobj = NULL;
        }
    }
}

// 0x8014BDB4
void ftCommon_CaptureWaitKirby_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_CaptureWaitKirby, 0.0F, 1.0F, (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_MODELPART_PRESERVE));
    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);

    fp->is_invisible = TRUE;

    ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Intangible);
    ftCommon_Trap_InitBreakoutVars(fp, 500);
}

// 0x8014BE24
void ftCommon_ThrownKirby_Escape(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_Fall, 0.0F, 1.0F, FTSTATUPDATE_DAMAGEPORT_PRESERVE);
}

// 0x8014BE54
void ftCommon_ThrownCommonStar_ProcHit(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_Fall, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x8014BE90
void ftCommon_ThrownKirby_SpawnStarGFX(GObj *fighter_gobj, f32 arg1, f32 arg2)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_attach_effect))
    {
        if (efParticle_CaptureKirbyStar_MakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
        }
    }
}

// 0x8014BEE0
void ftCommon_ThrownKirbyStar_ProcUpdate(GObj *fighter_gobj)
{
    ftCommon_ThrownKirby_SpawnStarGFX(fighter_gobj, 360.0F, 210.0F);
}

// 0x8014BF04
void ftCommon_ThrownCommonStar_UpdatePhysics(GObj *fighter_gobj, f32 decelerate)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 != 0) && (fp->command_vars.flags.flag2 != 3))
    {
        f32 sqrt_vel = sqrtf(SQUARE(fp->phys_info.vel_air.x) + SQUARE(fp->phys_info.vel_air.y));

        if (decelerate < sqrt_vel)
        {
            fp->phys_info.vel_air.x = (fp->phys_info.vel_air.x * (sqrt_vel - decelerate)) / sqrt_vel;
            fp->phys_info.vel_air.y = (fp->phys_info.vel_air.y * (sqrt_vel - decelerate)) / sqrt_vel;

            if (fp->phys_info.vel_air.y < 0)
            {
                fp->lr = LR_Left;
            }
            else fp->lr = LR_Right;
        }
        else fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = 0;

        fp->command_vars.flags.flag1--;

        ftCommon_Trap_UpdateBreakoutVars(fp);

        if (fp->breakout_wait <= 0)
        {
            fp->command_vars.flags.flag1 = 0;
        }
    }
    else
    {
        if (fp->command_vars.flags.flag2 == 1)
        {
            if (((fp->ft_kind == Ft_Kind_Kirby) || (fp->ft_kind == Ft_Kind_PolyKirby)) && (fp->status_vars.common.capturekirby.is_kirby != FALSE))
            {
                ftKirby_SpecialN_InitFighterVars(fp);

                fp->fighter_vars.kirby.copy_id = Ft_Kind_Kirby;

                ftCommon_SetModelPartRenderStateIndex(fighter_gobj, 6, 0);
                ftCommon_ResetModelPartRenderAll(fighter_gobj);
            }
            fp->is_invisible = FALSE;

            ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Normal);
            ftCommon_ProcStopGFX(fighter_gobj);
            ftCommon_ThrownKirby_Escape(fighter_gobj);

            if (efParticle_StarSplash_MakeEffect(&DObjGetStruct(fighter_gobj)->translate.vec.f, (-fp->phys_info.vel_air.x < 0.0F) ? LR_Left : LR_Right) != NULL)
            {
                fp->is_attach_effect = TRUE;
            }
        }
        else
        {
            if (fp->command_vars.flags.flag2 == 2)
            {
                fp->command_vars.flags.flag1 = 4;
                fp->command_vars.flags.flag2 = 3;

                fp->phys_info.vel_air.y = FTCOMMON_THROWNKIRBYSTAR_RELEASE_VEL_Y;

                if (fp->status_vars.common.capturekirby.lr != LR_Center)
                {
                    fp->phys_info.vel_air.x = fp->status_vars.common.capturekirby.lr * FTCOMMON_THROWNKIRBYSTAR_RELEASE_VEL_X;
                }
                else fp->phys_info.vel_air.x = ((fp->phys_info.vel_air.x < 0.0F) ? LR_Left : LR_Right) * FTCOMMON_THROWNKIRBYSTAR_RELEASE_VEL_X;

                ftCommon_ProcStopGFX(fighter_gobj);

                if (efParticle_StarSplash_MakeEffect(&DObjGetStruct(fighter_gobj)->translate.vec.f, (-fp->phys_info.vel_air.x < 0.0F) ? LR_Left : LR_Right) != NULL)
                {
                    fp->is_attach_effect = TRUE;
                }
                fp->is_invisible = FALSE;

                ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Normal);
            }
            if (fp->command_vars.flags.flag2 == 3)
            {
                DObj *joint = DObjGetStruct(fighter_gobj)->next;
                f32 scale = (4.0F - fp->command_vars.flags.flag1) * 0.25F;

                scale *= FTCOMMON_CAPTUREKIRBY_MAGNITUDE_MUL;

                joint->scale.vec.f.x = joint->scale.vec.f.y = joint->scale.vec.f.z = FTCOMMON_CAPTUREKIRBY_MAGNITUDE_ADD + scale;

                if (fp->command_vars.flags.flag1-- <= 0)
                {
                    ftCommon_ThrownKirby_Escape(fighter_gobj);
                }
            }
        }
    }
}

// 0x8014C260
void ftCommon_ThrownKirbyStar_ProcPhysics(GObj *fighter_gobj)
{
    ftCommon_ThrownCommonStar_UpdatePhysics(fighter_gobj, FTCOMMON_THROWNKIRBYSTAR_DECELERATE);
}

// 0x8014C280
void ftCommon_ThrownCommonStar_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *angle;
    Vec3f pos = DObjGetStruct(fighter_gobj)->translate.vec.f;
    Vec3f vel_bak;

    angle = NULL;

    if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        angle = &fp->coll_data.ground_angle;
    }
    else if (fp->coll_data.coll_mask & MPCOLL_KIND_CEIL)
    {
        angle = &fp->coll_data.ceil_angle;

        pos.y += fp->coll_data.object_coll.top;
    }
    else if (fp->coll_data.coll_mask & MPCOLL_KIND_LWALL)
    {
        angle = &fp->coll_data.lwall_angle;

        pos.x += fp->coll_data.object_coll.width;
        pos.y += fp->coll_data.object_coll.center;
    }
    else if (fp->coll_data.coll_mask & MPCOLL_KIND_RWALL)
    {
        angle = &fp->coll_data.rwall_angle;

        pos.x -= fp->coll_data.object_coll.width;
        pos.y += fp->coll_data.object_coll.center;
    }
    if (angle != NULL)
    {
        vel_bak = fp->phys_info.vel_air;

        func_ovl0_800C7B08(&fp->phys_info.vel_air, angle);

        if (((fp->phys_info.vel_air.x * vel_bak.x) + (vel_bak.y * fp->phys_info.vel_air.y)) < 0.0F)
        {
            fp->status_vars.common.capturekirby.lr = (angle->x < 0) ? LR_Left : LR_Right;

            fp->command_vars.flags.flag1 = 0;
        }
        efParticle_Quake_MakeEffect(2);
        efParticle_ImpactSW_MakeEffect(&pos, 4, atan2f(-angle->x, angle->y));
    }
}

// 0x8014C424
void ftCommon_ThrownKirbyStar_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;

    if (capture_gobj != NULL)
    {
        ftStruct *capture_fp = ftGetStruct(capture_gobj);

        func_ovl3_8014ADB0(fighter_gobj);
        ftCommon_SetCaptureIgnoreMask(this_fp, FTCATCHKIND_MASK_NONE);
        ftCommon_SetCaptureIgnoreMask(capture_fp, FTCATCHKIND_MASK_NONE);
        ftCommon_Update1PGameDamageStats(this_fp, capture_fp->player, 1, capture_fp->ft_kind, capture_fp->stat_flags.halfword, capture_fp->stat_count);

        this_fp->capture_gobj = NULL;
        this_fp->catch_gobj = NULL;
        capture_fp->catch_gobj = NULL;
        capture_fp->capture_gobj = NULL;

        this_fp->status_vars.common.capturekirby.lr = (this_fp->phys_info.vel_air.x < 0.0F) ? LR_Left : LR_Right;
    }
}

// 0x8014C4D8
void ftCommon_ThrownKirbyStar_ProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 30;
    fp->command_vars.flags.flag2 = 2;

    ftCommon_ThrownKirbyStar_InitStatusVars(fighter_gobj);
}

extern intptr_t lKirbySpecialNCopyData; // This is just 0x00000000
extern void *D_ovl2_80131074;

// 0x8014C508
void ftCommon_ThrownKirbyStar_SetStatus(GObj *fighter_gobj)
{
    s32 i;
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftKirbyCopy *copy_data = (ftKirbyCopy*) ((uintptr_t)D_ovl2_80131074 + (intptr_t)&lKirbySpecialNCopyData);

    if (fp->ground_or_air == GA_Ground)
    {
        ftMap_SetAir(fp);
    }
    fp->proc_status = ftCommon_ThrownKirbyStar_ProcStatus;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_ThrownKirbyStar, 0.0F, 1.0F, FTSTATUPDATE_THROWPOINTER_PRESERVE);
    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);

    fp->proc_hit = ftCommon_ThrownCommonStar_ProcHit;

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
    {
        ftHitbox *ft_hit = &fp->fighter_hit[i];

        if (ft_hit->update_state == gmHitCollision_UpdateState_New)
        {
            ft_hit->damage = copy_data[fp->ft_kind].star_damage;
        }
    }
    fp->is_invisible = fp->x18E_flag_b0 = TRUE;

    ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Intangible);
    ftCommon_SetPlayerTagWait(fighter_gobj, 1);
    ftCommon_Trap_InitBreakoutVars(fp, FTCOMMON_THROWNKIRBYSTAR_BREAKOUT_INPUTS_MIN);
}

// 0x8014C634
void ftCommon_ThrownCopyStar_ProcUpdate(GObj *fighter_gobj)
{
    ftCommon_ThrownKirby_SpawnStarGFX(fighter_gobj, -400.0F, 280.0F);
}

// 0x8014C658
void ftCommon_ThrownCopyStar_ProcPhysics(GObj *fighter_gobj)
{
    ftCommon_ThrownCommonStar_UpdatePhysics(fighter_gobj, FTCOMMON_THROWNCOPYSTAR_DECELERATE);
}

// 0x8014C67C
void ftCommon_ThrownCopyStar_ProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 10;
    fp->command_vars.flags.flag2 = 1;

    ftCommon_ThrownKirbyStar_InitStatusVars(fighter_gobj);
}

// 0x8014C6AC
void ftCommon_ThrownCopyStar_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftMap_SetAir(fp);
    }
    fp->proc_status = ftCommon_ThrownCopyStar_ProcStatus;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_ThrownCopyStar, 0.0F, 1.0F, FTSTATUPDATE_THROWPOINTER_PRESERVE);
    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);

    fp->proc_hit = ftCommon_ThrownCommonStar_ProcHit;
    fp->is_invisible = fp->x18E_flag_b0 = TRUE;

    ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Intangible);
    ftCommon_SetPlayerTagWait(fighter_gobj, 1);
}