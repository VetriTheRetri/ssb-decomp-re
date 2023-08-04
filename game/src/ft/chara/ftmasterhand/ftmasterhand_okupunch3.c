#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x8015AA10
void ftMasterHand_Okupunch3_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Wait_SetStatus);
}

// 0x8015AA34
void ftMasterHand_Okupunch3_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *translate;

    fp->lr = LEFT;

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Okupunch3, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    translate = &DObjGetStruct(fighter_gobj)->translate;

    translate->x = fp->status_vars.masterhand.okupunch.pos.x;
    translate->y = fp->status_vars.masterhand.okupunch.pos.y + 6000.0F;
    translate->z = 0.0F;
}
