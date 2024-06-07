#include <ft/fighter.h>

// 0x8015AD50
void ftMasterHand_DeadLeft_ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_DeadCenter_SetStatus);
}

// 0x8015AD74
void ftMasterHand_DeadLeft_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_MasterHand_DeadLeft, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);
    
    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;
}
