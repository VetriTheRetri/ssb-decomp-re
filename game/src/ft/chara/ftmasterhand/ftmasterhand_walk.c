#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x80159830
void ftMasterHand_Walk_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_WalkLoop_SetStatus);
}

// 0x80159854
void ftMasterHand_Walk_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Walk, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    func_ovl3_80157F90(fighter_gobj);

    fp->phys_info.vel_air.x = 0.0F;
    fp->phys_info.vel_air.y = fp->coll_data.ground_dist / 60.0F;
}
