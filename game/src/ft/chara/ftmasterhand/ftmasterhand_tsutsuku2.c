#include <ft/fighter.h>

// 0x80159F40
void ftMasterHand_Tsutsuku2_ProcPhysi(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f translate;
    Vec3f vel;
    f32 magnitude;

    fp->status_vars.masterhand.tsutsuku.wait_timer--;

    if (fp->status_vars.masterhand.tsutsuku.wait_timer == 0)
    {
        ftMasterHand_Tsutsuku3_SetStatus(fighter_gobj);
    }
    else
    {
        translate.x = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.vec.f.x + (-fp->lr * 900.0F);
        translate.y = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.vec.f.y + 300.0F;
        translate.z = 0.0F;

        lbVector_Vec3fSubtract(&vel, &translate, &DObjGetStruct(fighter_gobj)->translate.vec.f);

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
}

// 0x8015A070
void ftMasterHand_Tsutsuku2_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_MasterHand_Tsutsuku2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);

    fp->status_vars.masterhand.tsutsuku.wait_timer = lbRandom_GetIntRange(80) + 60;
}
