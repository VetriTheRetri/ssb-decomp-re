#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x80159B00
void ftMasterHand_GootsubuUp_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp;

    jtgt_ovl2_800D9414(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.y += 50.0F;
}

// 0x80159B3C
void ftMasterHand_GootsubuUp_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp;

    func_ovl2_800DE324(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    if (-fp->coll_data.ground_dist >= 3000.0F)
    {
        DObj *joint = DObjGetStruct(fighter_gobj);

        joint->translate.y += (fp->coll_data.ground_dist + 3000.0F);

        ftMasterHand_GootsubuWait_SetStatus(fighter_gobj);
    }
}

// 0x80159B9C
void ftMasterHand_GootsubuUp_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_GootsubuUp, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}
