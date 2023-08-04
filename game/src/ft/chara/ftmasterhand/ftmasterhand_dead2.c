#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x8015ADC0
void ftMasterHand_Dead2_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.masterhand.dead.dead_timer--;

    if (fp->status_vars.masterhand.dead.dead_timer == 0)
    {
        fp->proc_physics = NULL;
    }
}

// 0x8015ADE8
void ftMasterHand_Dead2_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;
    f32 vel_z;

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Dead2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.x = 0.0F;
    fp->phys_info.vel_air.y = __sinf(QUART_PI32) * 100.0F;

    vel_z = cosf(QUART_PI32) * 100.0F;

    fp->status_vars.masterhand.dead.dead_timer = 200;

    fp->phys_info.vel_air.z = -vel_z;
}
