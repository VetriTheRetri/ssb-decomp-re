#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015A600
void ftBossYubideppou2UpdatePosition(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;
    f32 magnitude;

    pos.x = DObjGetStruct(fp->fighter_vars.boss.p->target_gobj)->translate.vec.f.x + (-fp->lr * 3000.0F);
    pos.y = DObjGetStruct(fp->fighter_vars.boss.p->target_gobj)->translate.vec.f.y;
    pos.z = 0.0F;

    lbVector_Vec3fSubtract(&vel, &pos, &DObjGetStruct(fighter_gobj)->translate.vec.f);

    magnitude = lbVector_Vec3fMagnitude(&vel);

    if (magnitude < 5.0F)
    {
        fp->phys_info.vel_air.x = vel.x;
        fp->phys_info.vel_air.y = vel.y;
    }
    else
    {
        lbVector_Vec3fNormalize(&vel);
        lbVector_Vec3fScale(&vel, magnitude * 0.1F);

        fp->phys_info.vel_air.x = vel.x;
        fp->phys_info.vel_air.y = vel.y;
    }
}

// 0x8015A6FC
void ftBossYubideppou2ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.boss.yubideppou.wait_timer--;

    if (fp->status_vars.boss.yubideppou.wait_timer == 0)
    {
        ftBossYubideppou3SetStatus(fighter_gobj);
    }
    else ftBossYubideppou2UpdatePosition(fighter_gobj);
}

// 0x8015A748
void ftBossYubideppou2SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_Yubideppou2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);

    fp->status_vars.boss.yubideppou.wait_timer = mtTrigGetRandomIntRange(120) + 60;
}
