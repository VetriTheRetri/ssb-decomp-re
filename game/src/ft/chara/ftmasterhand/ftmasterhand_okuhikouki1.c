#include <ft/fighter.h>

// 0x80159500
void ftMasterHand_Okuhikouki1_ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Okuhikouki2_SetStatus);
}

// 0x80159524
void ftMasterHand_Okuhikouki1_SetStatus(GObj *fighter_gobj)
{
    ftStruct *target_fp;
    ftStruct *masterhand_fp;
    s32 line_id;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_MasterHand_Okuhikouki1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    masterhand_fp = ftGetStruct(fighter_gobj);

    target_fp = ftGetStruct(masterhand_fp->fighter_vars.masterhand.boss->target_gobj);

    line_id = ((target_fp->coll_data.ground_line_id != -1) && (target_fp->coll_data.ground_line_id != -2)) ? target_fp->coll_data.ground_line_id : masterhand_fp->fighter_vars.masterhand.boss->default_line_id;

    ftMasterHand_Common_GetPositionCenter(line_id, &masterhand_fp->status_vars.masterhand.okuhikouki.pos);
}
