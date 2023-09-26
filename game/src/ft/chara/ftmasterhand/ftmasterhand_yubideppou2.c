#include <ft/fighter.h>

// 0x8015A600
void ftMasterHand_Yubideppou2_UpdatePosition(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;
    f32 magnitude;

    pos.x = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.vec.f.x + (-fp->lr * 3000.0F);
    pos.y = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.vec.f.y;
    pos.z = 0.0F;

    lbVector_Vec3fSubtract(&vel, &pos, &DObjGetStruct(fighter_gobj)->translate);

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
void ftMasterHand_Yubideppou2_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.masterhand.yubideppou.wait_timer--;

    if (fp->status_vars.masterhand.yubideppou.wait_timer == 0)
    {
        ftMasterHand_Yubideppou3_SetStatus(fighter_gobj);
    }
    else ftMasterHand_Yubideppou2_UpdatePosition(fighter_gobj);
}

// 0x8015A748
void ftMasterHand_Yubideppou2_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_MasterHand_Yubideppou2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);

    fp->status_vars.masterhand.yubideppou.wait_timer = lbRandom_GetIntRange(120) + 60;
}
