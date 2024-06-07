#include <ft/fighter.h>

// 0x80159780
void ftMasterHand_Okuhikouki3_ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Wait_SetStatus);
}

// 0x801597A4
void ftMasterHand_Okuhikouki3_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *translate;

    fp->lr = LR_Left;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_MasterHand_Okuhikouki3, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;

    translate->x = fp->status_vars.masterhand.okuhikouki.pos.x + 9000.0F;
    translate->y = fp->status_vars.masterhand.okuhikouki.pos.y + 3000.0F;
    translate->z = 0.0F;
}
