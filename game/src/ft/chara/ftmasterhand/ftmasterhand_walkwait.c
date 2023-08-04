#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x80159A30
void ftMasterHand_WalkWait_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Wait_SetStatus);
}

// 0x80159A54
void ftMasterHand_WalkWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_WalkWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.z = 0;
    fp->phys_info.vel_air.y = 0;
    fp->phys_info.vel_air.x = 0;
}
