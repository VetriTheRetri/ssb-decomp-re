#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80159780
void ftBossOkuhikouki3ProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftBossWaitSetStatus);
}

// 0x801597A4
void ftBossOkuhikouki3SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *translate;

    fp->lr = nGMDirectionL;

    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusOkuhikouki3, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);

    translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;

    translate->x = fp->status_vars.boss.okuhikouki.pos.x + 9000.0F;
    translate->y = fp->status_vars.boss.okuhikouki.pos.y + 3000.0F;
    translate->z = 0.0F;
}
