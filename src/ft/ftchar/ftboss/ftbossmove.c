#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801591A0
void ftBossMoveProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f vel;
    f32 magnitude;

    lbVector_Vec3fSubtract(&vel, &fp->status_vars.boss.move.vel, &DObjGetStruct(fighter_gobj)->translate.vec.f);

    magnitude = lbVector_Vec3fMagnitude(&vel);

    if (magnitude < 5.0F)
    {
        fp->status_vars.boss.move.magnitude = 0.0F;
        fp->phys_info.vel_air.x = vel.x;
        fp->phys_info.vel_air.y = vel.y;
    }
    else
    {
        fp->status_vars.boss.move.magnitude = magnitude;

        lbVector_Vec3fNormalize(&vel);

        lbVector_Vec3fScale(&vel, magnitude * 0.1F);

        fp->phys_info.vel_air.x = vel.x;
        fp->phys_info.vel_air.y = vel.y;
    }
}

// 0x80159260
void ftBossMoveProcMap(GObj *fighter_gobj)
{
    ftStruct *fp;

    mpObjectProc_SetFighterProjectGroundID(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.boss.move.magnitude == 0.0F)
    {
        fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;

        fp->status_vars.boss.move.proc_setstatus(fighter_gobj);
    }
}

// 0x801592B4
void ftBossMoveSetStatus(GObj *fighter_gobj, void (*proc_setstatus)(GObj*), Vec3f *vel)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_Move, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->status_vars.boss.move.proc_setstatus = proc_setstatus;

    fp->status_vars.boss.move.vel = *vel;

    if (((vel->x - DObjGetStruct(fighter_gobj)->translate.vec.f.x) * fp->lr) < 0.0F)
    {
        fp->lr = -fp->lr;
        fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y = fp->lr * F_CST_DTOR32(90.0F); // HALF_PI32
    }
}