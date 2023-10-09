#include <ft/fighter.h>

// 0x80143560
void ftCommon_DamageFall_ProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommon_SpecialAir_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_AttackAir_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_JumpAerial_CheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommon_HammerFall_CheckInterruptDamageFall(fighter_gobj);
    }
}

// 0x801435B0
void ftCommon_DamageFall_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpObjectProc_ProcFighterCliff(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);
        }
        else if ((ftCommon_PassiveStand_CheckInterruptDamage(fighter_gobj) == FALSE) && (ftCommon_Passive_CheckInterruptDamage(fighter_gobj) == FALSE))
        {
            ftCommon_DownBounce_SetStatus(fighter_gobj);
        }
    }
}

// 0x80143630
void func_ovl3_80143630(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysics_ClampAirVelXMax(fp);
    ftMain_MakeRumble(fp, 3, 0);
}

// 0x80143664
void ftCommon_DamageFall_SetStatusFromDamage(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_DamageFall, 0.0F, 1.0F, (FTSTATUPDATE_PLAYERTAG_PRESERVE | FTSTATUPDATE_FASTFALL_PRESERVE));
    func_ovl3_80143630(fighter_gobj);
}

// 0x801436A0
void ftCommon_DamageFall_SetStatusFromCliffWait(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_DamageFall, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);
    func_ovl3_80143630(fighter_gobj);

    fp->time_since_last_z = FTINPUT_ZBUTTONLAST_FRAMES_MAX;
}

// 0x801436F0
void func_ovl3_801436F0(GObj *fighter_gobj) // Unused
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_DamageFall, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_PLAYERTAG_PRESERVE | FTSTATUPDATE_FASTFALL_PRESERVE));
    func_ovl3_80143630(fighter_gobj);
}