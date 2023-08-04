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

    if (func_ovl2_800DE7D8(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
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

    func_ovl2_800D8EB8(fp);
    ftMain_MakeRumble(fp, 3, 0);
}

// 0x80143664
void ftCommon_DamageFall_SetStatusFromDamage(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Common_DamageFall, 0.0F, 1.0F, (FTSTATUPDATE_PLAYERTAG_PRESERVE | FTSTATUPDATE_FASTFALL_PRESERVE));
    func_ovl3_80143630(fighter_gobj);
}

// 0x801436A0
void ftCommon_DamageFall_SetStatusFromCliffWait(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_DamageFall, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);
    func_ovl3_80143630(fighter_gobj);

    fp->time_since_last_z = U16_MAX + 1;
}

void func_ovl3_801436F0(GObj *fighter_gobj) // Unused
{
    ftStatus_Update(fighter_gobj, ftStatus_Common_DamageFall, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_PLAYERTAG_PRESERVE | FTSTATUPDATE_FASTFALL_PRESERVE));
    func_ovl3_80143630(fighter_gobj);
}