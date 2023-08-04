#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x8015A350
void ftMasterHand_Yubideppou1_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Yubideppou2_SetStatus);
}

// 0x8015A374
void ftMasterHand_Yubideppou1_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Yubideppou1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    func_ovl3_80158030(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    fp->status_vars.masterhand.yubideppou.bullet_count = 0;
}
