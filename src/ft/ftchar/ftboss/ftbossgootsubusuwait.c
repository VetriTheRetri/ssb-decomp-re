#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80159BD0
void ftBossGootsubusuWaitProcPhysics(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysicsApplyAirVelTransNYZ(fighter_gobj);

    fp->status_vars.boss.gootsubu.wait_timer--;

    if (fp->status_vars.boss.gootsubu.wait_timer == 0)
    {
        ftBossGootsubusuDownSetStatus(fighter_gobj);
    }
    else
    {
        f32 dist_x = DObjGetStruct(fp->passive_vars.boss.p->target_gobj)->translate.vec.f.x - DObjGetStruct(fighter_gobj)->translate.vec.f.x;

        if (ABSF(dist_x) > 35.0F)
        {
            fp->physics.vel_air.x = (dist_x > 0.0F) ? 35.0F : -35.0F;
        }
        else fp->physics.vel_air.x = dist_x;
    }
}

// 0x80159CA4
void ftBossGootsubusuWaitProcMap(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;
    f32 var;

    if (fp->status_vars.boss.gootsubu.edgeright_pos_x < translate->x)
    {
        translate->x = fp->status_vars.boss.gootsubu.edgeright_pos_x;
    }

    else if (translate->x < fp->status_vars.boss.gootsubu.edgeleft_pos_x)
    {
        translate->x = fp->status_vars.boss.gootsubu.edgeleft_pos_x;
    }

    mpCommonUpdateFighterProjectGround(fighter_gobj);

    var = fp->coll_data.ground_dist + 3000.0F;

    translate->y -= var;

    fp->coll_data.ground_dist = 3000.0F;
}

// 0x80159D34
void ftBossGootsubusuWaitSetStatus(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusGootsubusuWait, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

    fp->status_vars.boss.gootsubu.wait_timer = mtTrigGetRandomIntRange(60) + 60;

    mpCollisionGetLREdgeLeft(fp->coll_data.ground_line_id, &pos);

    fp->status_vars.boss.gootsubu.edgeleft_pos_x = pos.x;

    mpCollisionGetLREdgeRight(fp->coll_data.ground_line_id, &pos);

    fp->status_vars.boss.gootsubu.edgeright_pos_x = pos.x;
}
