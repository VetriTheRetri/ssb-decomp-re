#include <ft/chara/ftness/ftness.h>
#include <wp/weapon.h>

#define FTNESS_SPECIALLWSTART_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)
#define FTNESS_SPECIALLWHOLD_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE)
#define FTNESS_SPECIALLWHIT_STATUPDATE_FLAGS (FTSTATUPDATE_LOOPSFX_PRESERVE | FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE)
#define FTNESS_SPECIALLWEND_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// PSI Magnet (SpecialLw/SpecialAirLw)

// 0x801551E0
void ftNess_SpecialLw_CheckRelease(ftStruct *fp) // PSI Magnet interrupt?
{
    if (!(fp->input.pl.button_hold & fp->input.button_mask_b))
    {
        fp->status_vars.ness.speciallw.is_release = TRUE;
    }
}

// 0x80155204
void ftNess_SpecialLw_DecReleaseLag(ftStruct *fp)
{
    if (fp->status_vars.ness.speciallw.release_lag != 0)
    {
        fp->status_vars.ness.speciallw.release_lag--;
    }
}

// 0x8015521C
void ftNess_SpecialLw_Proc_Absorb(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *joint = fp->joint[ftParts_TopN_Joint];

    fp->lr = fp->lr_absorb;
    joint->rotate.y += (-PI32);

    func_ovl2_800EB528(fp->joint[ftParts_TopN_Joint]);

    if (fp->ground_or_air == GA_Ground)
    {
        ftNess_SpecialLwHit_SetStatus(fighter_gobj);
    }
    else ftNess_SpecialAirLwHit_SetStatus(fighter_gobj);
}

// 0x801552A0
void ftNess_SpecialLwStart_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftNess_SpecialLwHold_SetStatus);
}

// 0x801552C4
void ftNess_SpecialAirLwStart_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftNess_SpecialAirLwHold_SetStatus);
}

// 0x801552E8
void ftNess_SpecialLw_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.ness.speciallw.gravity_delay != 0)
    {
        fp->status_vars.ness.speciallw.gravity_delay--;
    }
}

// 0x80155304
void ftNess_SpecialAirLw_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->status_vars.ness.speciallw.gravity_delay != 0)
    {
        fp->status_vars.ness.speciallw.gravity_delay--;
    }
    else
    {
        func_ovl2_800D8D68(fp, 0.8F, attributes->fall_speed_max);
    }

    if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
    {
        func_ovl2_800D9074(fp, attributes);
    }
}
// 0x80155380
void ftNess_SpecialLwStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftNess_SpeciaLwStart_SwitchStatusAir);
}

// 0x801553A4
void ftNess_SpecialAirLwStart_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundCliff(fighter_gobj, ftNess_SpecialAirLwStart_SwitchStatusGround);
}

// 0x801553C8
void ftNess_SpecialAirLwStart_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialLwStart, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWSTART_STATUPDATE_FLAGS);
}

// 0x80155408
void ftNess_SpeciaLwStart_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialAirLwStart, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWSTART_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);
}

// 0x80155454
void ftNess_SpeciaLw_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.ness.speciallw.release_lag = FTNESS_PSI_MAGNET_RELEASE_LAG;
    fp->status_vars.ness.speciallw.is_release = FALSE;
    fp->status_vars.ness.speciallw.gravity_delay = FTNESS_PSI_MAGNET_GRAVITY_DELAY;
}

// 0x80155470
void ftNess_SpeciaLwStart_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialLwStart, 0.0F, 1.0F, 0U);
    ftAnim_Update(fighter_gobj);
    ftNess_SpeciaLw_InitStatusVars(fighter_gobj);
}

// 0x801554B0
void ftNess_SpecialAirLwStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialAirLwStart, 0.0F, 1.0F, 0U);
    ftAnim_Update(fighter_gobj);
    ftNess_SpeciaLw_InitStatusVars(fighter_gobj);

    fp->phys_info.vel_air.x /= 2;
    fp->phys_info.vel_air.y = 0.0F;
}

// 0x80155518
void ftNess_SpeciaLw_UpdateReleaseLag(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNess_SpecialLw_CheckRelease(fp);
    ftNess_SpecialLw_DecReleaseLag(fp);
}

// 0x80155544
void ftNess_SpecialLwHold_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNess_SpeciaLw_UpdateReleaseLag(fighter_gobj);

    if ((fp->status_vars.ness.speciallw.release_lag <= 0) && (fp->status_vars.ness.speciallw.is_release != FALSE))
    {
        ftNess_SpecialLwEnd_SetStatus(fighter_gobj);
    }
}

// 0x80155594
void ftNess_SpecialAirLwHold_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNess_SpeciaLw_UpdateReleaseLag(fighter_gobj);

    if ((fp->status_vars.ness.speciallw.release_lag <= 0) && (fp->status_vars.ness.speciallw.is_release != FALSE))
    {
        ftNess_SpecialAirLwEnd_SetStatus(fighter_gobj);
    }
}

// 0x801555E4
void ftNess_SpecialLwHold_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftNess_SpecialLwHold_SwitchStatusAir);
}

// 0x80155608
void ftNess_SpecialAirLwHold_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundCliff(fighter_gobj, ftNess_SpecialAirLwHold_SwitchStatusGround);
}

// 0x8015562C
void ftNess_SpecialAirLwHold_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialLwHold, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWHOLD_STATUPDATE_FLAGS);

    fp->is_absorb = TRUE;
}

// 0x80155680
void ftNess_SpecialLwHold_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialAirLwHold, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWHOLD_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);

    fp->is_absorb = TRUE;
}

extern intptr_t ftNess_LoadedFiles_SpecialLwData;
extern void *D_ovl2_80131134;

// 0x801556E0
void ftNess_SpecialLw_InitVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_persist_effect))
    {
        if (func_ovl2_801025D8(fighter_gobj) != NULL)
        {
            fp->is_persist_effect = TRUE;
        }
    }
    fp->is_absorb = TRUE;

    fp->special_hit = (ftSpecialHit*) ((uintptr_t)D_ovl2_80131134 + (intptr_t)&ftNess_LoadedFiles_SpecialLwData); // Linker thing (attempt uintptr_t for 64-bit compatibility?)

    fp->command_vars.flags.flag1 = 0;
}

// 0x80155750
void ftNess_SpecialLwHold_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialLwHold, 0.0F, 1.0F, (FTSTATUPDATE_LOOPSFX_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftAnim_Update(fighter_gobj);
    ftNess_SpecialLw_InitVars(fighter_gobj);
}

// 0x80155794
void ftNess_SpecialAirLwHold_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialAirLwHold, 0.0F, 1.0F, (FTSTATUPDATE_LOOPSFX_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftAnim_Update(fighter_gobj);
    ftNess_SpecialLw_InitVars(fighter_gobj);
}

// 0x801557D8
void ftNess_SpecialLwHit_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        ftNess_SpecialLwHold_SetStatus(fighter_gobj);
    }
}

// 0x80155808
void ftNess_SpecialAirLwHit_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        ftNess_SpecialAirLwHold_SetStatus(fighter_gobj);
    }
}

// 0x80155838
void ftNess_SpecialLwHit_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftNess_SpecialLwHit_SwitchStatusAir);
}

// 0x8015585C
void ftNess_SpecialAirLwHit_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundCliff(fighter_gobj, ftNess_SpecialAirLwHit_SwitchStatusGround);
}

// 0x80155880
void ftNess_SpecialAirLwHit_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialLwHit, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWHIT_STATUPDATE_FLAGS);
    fp->is_absorb = TRUE;
}

// 0x801558D4
void ftNess_SpecialLwHit_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialAirLwHit, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWHIT_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);

    fp->is_absorb = TRUE;
}

// 0x80155934
void ftNess_SpecialLwHit_SetAbsorbTrue(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_absorb = TRUE;
}

// 0x80155948
void ftNess_SpecialLwHit_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialLwHit, 0.0F, 1.0F, FTSTATUPDATE_GFX_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftNess_SpecialLwHit_SetAbsorbTrue(fighter_gobj);
}

// 0x8015598C
void ftNess_SpecialAirLwHit_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialAirLwHit, 0.0F, 1.0F, FTSTATUPDATE_GFX_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftNess_SpecialLwHit_SetAbsorbTrue(fighter_gobj);
}

// 0x801559D0
void ftNess_SpecialAirLwEnd_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Fall_SetStatus);
}

// 0x801559F4
void ftNess_SpecialLwEnd_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftNess_SpecialLwEnd_SwitchStatusAir);
}

// 0x80155A18
void ftNess_SpecialAirLwEnd_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundCliff(fighter_gobj, ftNess_SpecialAirLwEnd_SwitchStatusGround);
}

// 0x80155A3C
void ftNess_SpecialAirLwEnd_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialLwEnd, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWEND_STATUPDATE_FLAGS);
}

// 0x80155A7C
void ftNess_SpecialLwEnd_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialAirLwEnd, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALLWEND_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);
}

// 0x80155AC8
void ftNess_SpecialLwEnd_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialLwEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x80155B00
void ftNess_SpecialAirLwEnd_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialAirLwEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}
