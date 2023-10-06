#include <ft/fighter.h>

// 0x8015ADC0
void ftMasterHand_DeadCenter_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.masterhand.dead.dead_timer--;

    if (fp->status_vars.masterhand.dead.dead_timer == 0)
    {
        fp->proc_physics = NULL;
    }
}

// 0x8015ADE8
void ftMasterHand_DeadCenter_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;
    f32 vel_z;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_MasterHand_DeadCenter, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.x = 0.0F;
    fp->phys_info.vel_air.y = __sinf(F_DEG_TO_RAD(45.0F)) * 100.0F; // QUART_PI32

    vel_z = cosf(F_DEG_TO_RAD(45.0F)) * 100.0F;

    fp->status_vars.masterhand.dead.dead_timer = 200;

    fp->phys_info.vel_air.z = -vel_z;
}
