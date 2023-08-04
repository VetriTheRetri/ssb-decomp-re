#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x8015A7A0
void ftMasterHand_Okupunch1_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Okupunch2_SetStatus);
}

// 0x8015A7C4
void ftMasterHand_Okupunch1_SetStatus(GObj *fighter_gobj)
{
    ftStruct *masterhand_fp, *target_fp;
    s32 ground_line_id;
    s32 line_id;

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Okupunch1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    masterhand_fp = ftGetStruct(fighter_gobj);

    target_fp = ftGetStruct(masterhand_fp->fighter_vars.masterhand.boss->target_gobj);

    ground_line_id = target_fp->coll_data.ground_line_id;

    line_id = ((ground_line_id != -1) && ground_line_id != -2) ? ground_line_id : masterhand_fp->fighter_vars.masterhand.boss->default_line_id;

    func_ovl3_8015839C(line_id, &masterhand_fp->status_vars.masterhand.okupunch.pos);
}
