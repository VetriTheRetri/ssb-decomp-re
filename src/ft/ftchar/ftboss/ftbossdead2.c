#include <ft/fighter.h>

// 0x8015ADC0
void ftBossDead2ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.masterhand.dead.dead_timer--;

    if (fp->status_vars.masterhand.dead.dead_timer == 0)
    {
        fp->proc_physics = NULL;
    }
}

// 0x8015ADE8
void ftBossDead2SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;
    f32 vel_z;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_Dead2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.x = 0.0F;
    fp->phys_info.vel_air.y = __sinf(F_CST_DTOR32(45.0F)) * 100.0F; // QUART_PI32

    vel_z = __cosf(F_CST_DTOR32(45.0F)) * 100.0F;

    fp->status_vars.masterhand.dead.dead_timer = 200;

    fp->phys_info.vel_air.z = -vel_z;
}
