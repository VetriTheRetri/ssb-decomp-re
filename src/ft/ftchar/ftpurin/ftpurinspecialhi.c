#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define FTPURIN_SPECIALHI_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80151550
void ftPurinSpecialHiProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 == 1)
    {
        if (efManagerPurinSingMakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
        }
        fp->command_vars.flags.flag1 = 0;
    }
    if (fp->status_info.status_id == ftStatus_Purin_SpecialHi)
    {
        ftStatusWaitOnAnimEnd(fighter_gobj);
    }
    else ftStatusFallOnAnimEnd(fighter_gobj);
}

// 0x801515CC
void ftPurinSpecialHiProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftPurinSpecialHiSwitchStatusAir);
}

// 0x801515F0
void ftPurinSpecialAirHiProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftPurinSpecialAirHiSwitchStatusGround);
}

// 0x80151614
void ftPurinSpecialAirHiSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialHi, fighter_gobj->anim_frame, 1.0F, FTPURIN_SPECIALHI_STATUPDATE_FLAGS);
}

// 0x80151654
void ftPurinSpecialHiSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialAirHi, fighter_gobj->anim_frame, 1.0F, FTPURIN_SPECIALHI_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x801516A0
void ftPurinSpecialHiSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x801516D8
void ftPurinSpecialAirHiSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}
