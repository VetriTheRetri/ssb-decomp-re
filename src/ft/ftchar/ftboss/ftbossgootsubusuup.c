#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80159B00
void ftBossGootsubusuUpProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp;

    ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.y += 50.0F;
}

// 0x80159B3C
void ftBossGootsubusuUpProcMap(GObj *fighter_gobj)
{
    ftStruct *fp;

    mpCommonSetFighterProjectGround(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    if (-fp->coll_data.ground_dist >= 3000.0F)
    {
        DObj *joint = DObjGetStruct(fighter_gobj);

        joint->translate.vec.f.y += (fp->coll_data.ground_dist + 3000.0F);

        ftBossGootsubusuWaitSetStatus(fighter_gobj);
    }
}

// 0x80159B9C
void ftBossGootsubusuUpSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusGootsubusuUp, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
}
