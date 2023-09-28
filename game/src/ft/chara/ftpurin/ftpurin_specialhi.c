#include <ft/fighter.h>

#define FTPURIN_SPECIALHI_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE)

// 0x80151550
void ftPurin_SpecialHi_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 == 1)
    {
        if (efParticle_PurinSing_MakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
        }
        fp->command_vars.flags.flag1 = 0;
    }
    if (fp->status_info.status_id == ftStatus_Purin_SpecialHi)
    {
        ftStatus_IfAnimEnd_SetStatusWait(fighter_gobj);
    }
    else ftStatus_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x801515CC
void ftPurin_SpecialHi_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftPurin_SpecialHi_SwitchStatusAir);
}

// 0x801515F0
void ftPurin_SpecialAirHi_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftPurin_SpecialAirHi_SwitchStatusGround);
}

// 0x80151614
void ftPurin_SpecialAirHi_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialHi, fighter_gobj->anim_frame, 1.0F, FTPURIN_SPECIALHI_STATUPDATE_FLAGS);
}

// 0x80151654
void ftPurin_SpecialHi_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialAirHi, fighter_gobj->anim_frame, 1.0F, FTPURIN_SPECIALHI_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x801516A0
void ftPurin_SpecialHi_SetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x801516D8
void ftPurin_SpecialAirHi_SetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}
