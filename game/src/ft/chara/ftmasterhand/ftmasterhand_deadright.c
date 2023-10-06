#include <ft/fighter.h>

// 0x8015AE80
void ftMasterHand_DeadRight_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->lr = LR_Left;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_MasterHand_DeadRight, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;
}
