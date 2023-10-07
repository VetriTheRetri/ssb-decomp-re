#include <ft/fighter.h>

// 0x80159DB0
void ftMasterHand_GootsubusuEnd_ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Wait_SetStatus);
}

// 0x80159DD4
void ftMasterHand_GootsubusuEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_MasterHand_GootsubusuEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.y = 0.0F;
}
