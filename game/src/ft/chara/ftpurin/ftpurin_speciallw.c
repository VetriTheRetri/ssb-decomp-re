#include <ft/fighter.h>

#define FTPURIN_SPECIALLW_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x80151710
void ftPurinSpecialLwProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftPurinSpecialLwSwitchStatusAir);
}

// 0x80151734
void ftPurinSpecialAirLwProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftPurinSpecialAirLwSwitchStatusGround);
}

// 0x80151758
void ftPurinSpecialAirLwSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialLw, fighter_gobj->anim_frame, 1.0F, FTPURIN_SPECIALLW_STATUPDATE_FLAGS);
}

// 0x80151798
void ftPurinSpecialLwSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialAirLw, fighter_gobj->anim_frame, 1.0F, FTPURIN_SPECIALLW_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x801517E4
void ftPurinSpecialLwSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x8015181C
void ftPurinSpecialAirLwSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Purin_SpecialAirLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}
