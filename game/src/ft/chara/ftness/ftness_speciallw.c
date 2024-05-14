#include <ft/fighter.h>
#include <wp/weapon.h>

#define FTNESS_SPECIALLWSTART_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)
#define FTNESS_SPECIALLWHOLD_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE)
#define FTNESS_SPECIALLWHIT_STATUPDATE_FLAGS (FTSTATUPDATE_LOOPSFX_PRESERVE | FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE)
#define FTNESS_SPECIALLWEND_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// PSI Magnet (SpecialLw/SpecialAirLw)

extern intptr_t lFTNessSpecialLwAbsorb;
extern void *gFTDataNessBattleMotion;

// 0x801551E0
void ftNessSpecialLwCheckRelease(ftStruct *fp) // PSI Magnet interrupt?
{
    if (!(fp->input.pl.button_hold & fp->input.button_mask_b))
    {
        fp->status_vars.ness.speciallw.is_release = TRUE;
    }
}

// 0x80155204
void ftNessSpecialLwDecReleaseLag(ftStruct *fp)
{
    if (fp->status_vars.ness.speciallw.release_lag != 0)
    {
        fp->status_vars.ness.speciallw.release_lag--;
    }
}

// 0x8015521C
void ftNessSpecialLwProcAbsorb(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *joint = fp->joint[ftParts_Joint_TopN];

    fp->lr = fp->lr_absorb;

    joint->rotate.vec.f.y += F_DEG_TO_RAD(-180.0F); // -PI32

    func_ovl2_800EB528(fp->joint[ftParts_Joint_TopN]);

    if (fp->ground_or_air == GA_Ground)
    {
        ftNessSpecialLwHitSetStatus(fighter_gobj);
    }
    else ftNessSpecialAirLwHitSetStatus(fighter_gobj);
}

// 0x801552A0
void ftNessSpecialLwStartProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftNessSpecialLwHoldSetStatus);
}

// 0x801552C4
void ftNessSpecialAirLwStartProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftNessSpecialAirLwHoldSetStatus);
}

// 0x801552E8
void ftNessSpecialLwProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.ness.speciallw.gravity_delay != 0)
    {
        fp->status_vars.ness.speciallw.gravity_delay--;
    }
}

// 0x80155304
void ftNessSpecialAirLwProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->status_vars.ness.speciallw.gravity_delay != 0)
    {
        fp->status_vars.ness.speciallw.gravity_delay--;
    }
    else ftPhysics_ApplyGClampTVel(fp, 0.8F, attributes->fall_speed_max);
    
    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}
// 0x80155380
void ftNessSpecialLwStartProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftNessSpecialLwStart_SwitchStatusAir);
}

// 0x801553A4
void ftNessSpecialAirLwStartProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterCliffProcMap(fighter_gobj, ftNessSpecialAirLwStartSwitchStatusGround);
}

// 0x801553C8
void ftNessSpecialAirLwStartSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialLwStart, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWSTART_STATUPDATE_FLAGS);
}

// 0x80155408
void ftNessSpecialLwStart_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirLwStart, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWSTART_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x80155454
void ftNessSpecialLw_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.ness.speciallw.release_lag = FTNESS_PSI_MAGNET_RELEASE_LAG;
    fp->status_vars.ness.speciallw.is_release = FALSE;
    fp->status_vars.ness.speciallw.gravity_delay = FTNESS_PSI_MAGNET_GRAVITY_DELAY;
}

// 0x80155470
void ftNessSpecialLwStart_SetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialLwStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    ftNessSpecialLw_InitStatusVars(fighter_gobj);
}

// 0x801554B0
void ftNessSpecialAirLwStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirLwStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    ftNessSpecialLw_InitStatusVars(fighter_gobj);

    fp->phys_info.vel_air.x /= 2;
    fp->phys_info.vel_air.y = 0.0F;
}

// 0x80155518
void ftNessSpecialLw_UpdateReleaseLag(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNessSpecialLwCheckRelease(fp);
    ftNessSpecialLwDecReleaseLag(fp);
}

// 0x80155544
void ftNessSpecialLwHoldProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNessSpecialLw_UpdateReleaseLag(fighter_gobj);

    if ((fp->status_vars.ness.speciallw.release_lag <= 0) && (fp->status_vars.ness.speciallw.is_release != FALSE))
    {
        ftNessSpecialLwEndSetStatus(fighter_gobj);
    }
}

// 0x80155594
void ftNessSpecialAirLwHoldProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNessSpecialLw_UpdateReleaseLag(fighter_gobj);

    if ((fp->status_vars.ness.speciallw.release_lag <= 0) && (fp->status_vars.ness.speciallw.is_release != FALSE))
    {
        ftNessSpecialAirLwEndSetStatus(fighter_gobj);
    }
}

// 0x801555E4
void ftNessSpecialLwHoldProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftNessSpecialLwHoldSwitchStatusAir);
}

// 0x80155608
void ftNessSpecialAirLwHoldProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterCliffProcMap(fighter_gobj, ftNessSpecialAirLwHoldSwitchStatusGround);
}

// 0x8015562C
void ftNessSpecialAirLwHoldSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialLwHold, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWHOLD_STATUPDATE_FLAGS);

    fp->is_absorb = TRUE;
}

// 0x80155680
void ftNessSpecialLwHoldSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirLwHold, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWHOLD_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);

    fp->is_absorb = TRUE;
}

// 0x801556E0
void ftNessSpecialLwInitVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_attach_effect))
    {
        if (efParticle_PSIMagnet_MakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
        }
    }
    fp->is_absorb = TRUE;

    fp->special_hit = (ftSpecialHit*) ((uintptr_t)gFTDataNessBattleMotion + (intptr_t)&lFTNessSpecialLwAbsorb); // Linker thing (attempt uintptr_t for 64-bit compatibility?)

    fp->command_vars.flags.flag1 = 0;
}

// 0x80155750
void ftNessSpecialLwHoldSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialLwHold, 0.0F, 1.0F, (FTSTATUPDATE_LOOPSFX_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    ftNessSpecialLwInitVars(fighter_gobj);
}

// 0x80155794
void ftNessSpecialAirLwHoldSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirLwHold, 0.0F, 1.0F, (FTSTATUPDATE_LOOPSFX_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    ftNessSpecialLwInitVars(fighter_gobj);
}

// 0x801557D8
void ftNessSpecialLwHitProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        ftNessSpecialLwHoldSetStatus(fighter_gobj);
    }
}

// 0x80155808
void ftNessSpecialAirLwHitProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        ftNessSpecialAirLwHoldSetStatus(fighter_gobj);
    }
}

// 0x80155838
void ftNessSpecialLwHitProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftNessSpecialLwHitSwitchStatusAir);
}

// 0x8015585C
void ftNessSpecialAirLwHitProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterCliffProcMap(fighter_gobj, ftNessSpecialAirLwHitSwitchStatusGround);
}

// 0x80155880
void ftNessSpecialAirLwHitSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialLwHit, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWHIT_STATUPDATE_FLAGS);
    fp->is_absorb = TRUE;
}

// 0x801558D4
void ftNessSpecialLwHitSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirLwHit, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWHIT_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);

    fp->is_absorb = TRUE;
}

// 0x80155934
void ftNessSpecialLwHitSetAbsorbTrue(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_absorb = TRUE;
}

// 0x80155948
void ftNessSpecialLwHitSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialLwHit, 0.0F, 1.0F, FTSTATUPDATE_GFX_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    ftNessSpecialLwHitSetAbsorbTrue(fighter_gobj);
}

// 0x8015598C
void ftNessSpecialAirLwHitSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirLwHit, 0.0F, 1.0F, FTSTATUPDATE_GFX_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    ftNessSpecialLwHitSetAbsorbTrue(fighter_gobj);
}

// 0x801559D0
void ftNessSpecialAirLwEndProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Fall_SetStatus);
}

// 0x801559F4
void ftNessSpecialLwEndProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftNessSpecialLwEndSwitchStatusAir);
}

// 0x80155A18
void ftNessSpecialAirLwEndProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterCliffProcMap(fighter_gobj, ftNessSpecialAirLwEndSwitchStatusGround);
}

// 0x80155A3C
void ftNessSpecialAirLwEndSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialLwEnd, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWEND_STATUPDATE_FLAGS);
}

// 0x80155A7C
void ftNessSpecialLwEndSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirLwEnd, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWEND_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x80155AC8
void ftNessSpecialLwEndSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialLwEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80155B00
void ftNessSpecialAirLwEndSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirLwEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}
