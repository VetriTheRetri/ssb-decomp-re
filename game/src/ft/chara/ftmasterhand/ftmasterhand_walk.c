#include <ft/fighter.h>

// 0x80159830
void ftMasterHand_Walk_ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_WalkLoop_SetStatus);
}

// 0x80159854
void ftMasterHand_Walk_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_MasterHand_Walk, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMasterHand_Common_CheckEdgeInvertLR(fighter_gobj);

    fp->phys_info.vel_air.x = 0.0F;
    fp->phys_info.vel_air.y = fp->coll_data.ground_dist / 60.0F;
}
