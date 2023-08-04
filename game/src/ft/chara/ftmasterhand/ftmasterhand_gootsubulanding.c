#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x80159E20
void ftMasterHand_GootsubuLanding_ProcMap(GObj *fighter_gobj)
{
    if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        ftMasterHand_GootsubuDown_SetStatus(fighter_gobj);
    }
}

// 0x80159E50
void ftMasterHand_GootsubuLanding_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_GootsubuLanding, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.x = 0.0F;
    fp->phys_info.vel_air.y = -400.0F;
}
