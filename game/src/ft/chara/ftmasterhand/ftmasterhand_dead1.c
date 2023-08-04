#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x8015AD50
void ftMasterHand_Dead1_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Dead2_SetStatus);
}

// 0x8015AD74
void ftMasterHand_Dead1_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Dead1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.z = 0.0F;
    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x = 0.0F;
}
