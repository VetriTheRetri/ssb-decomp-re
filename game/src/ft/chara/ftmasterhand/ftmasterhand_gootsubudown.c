#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x80159DB0
void ftMasterHand_GootsubuDown_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Wait_SetStatus);
}

// 0x80159DD4
void ftMasterHand_GootsubuDown_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_GootsubuDown, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.y = 0.0F;
}
