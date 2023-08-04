#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x8015AE80
void ftMasterHand_Dead3_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->lr = LEFT;

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Dead3, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.z = 0.0F;
    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x = 0.0F;
}
