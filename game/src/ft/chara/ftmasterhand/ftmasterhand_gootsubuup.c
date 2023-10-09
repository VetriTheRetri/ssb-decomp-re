#include <ft/fighter.h>

// 0x80159B00
void ftMasterHand_GootsubusuUp_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp;

    ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.y += 50.0F;
}

// 0x80159B3C
void ftMasterHand_GootsubusuUp_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp;

    mpObjectProc_SetFighterProjectGroundID(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    if (-fp->coll_data.ground_dist >= 3000.0F)
    {
        DObj *joint = DObjGetStruct(fighter_gobj);

        joint->translate.vec.f.y += (fp->coll_data.ground_dist + 3000.0F);

        ftMasterHand_GootsubusuWait_SetStatus(fighter_gobj);
    }
}

// 0x80159B9C
void ftMasterHand_GootsubusuUp_SetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_MasterHand_GootsubusuUp, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}
