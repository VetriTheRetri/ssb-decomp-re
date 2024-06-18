#include <ft/fighter.h>

// 0x8015AA10
void ftBossOkupunch3ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftBossWaitSetStatus);
}

// 0x8015AA34
void ftBossOkupunch3SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *translate;

    fp->lr = LR_Left;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_Okupunch3, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;

    translate->x = fp->status_vars.boss.okupunch.pos.x;
    translate->y = fp->status_vars.boss.okupunch.pos.y + 6000.0F;
    translate->z = 0.0F;
}
