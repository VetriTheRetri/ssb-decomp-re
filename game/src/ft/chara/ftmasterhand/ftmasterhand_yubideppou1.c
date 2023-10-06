#include <ft/fighter.h>

// 0x8015A350
void ftMasterHand_Yubideppou1_ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Yubideppou2_SetStatus);
}

// 0x8015A374
void ftMasterHand_Yubideppou1_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_MasterHand_Yubideppou1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMasterHand_Common_CheckPlayerInvertLR(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    fp->status_vars.masterhand.yubideppou.bullet_count = 0;
}
