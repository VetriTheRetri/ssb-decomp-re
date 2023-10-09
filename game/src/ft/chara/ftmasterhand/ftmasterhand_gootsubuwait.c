#include <ft/fighter.h>

// 0x80159BD0
void ftMasterHand_GootsubusuWait_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);

    fp->status_vars.masterhand.gootsubu.wait_timer--;

    if (fp->status_vars.masterhand.gootsubu.wait_timer == 0)
    {
        ftMasterHand_GootsubusuDown_SetStatus(fighter_gobj);
    }
    else
    {
        f32 dist_x = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.vec.f.x - DObjGetStruct(fighter_gobj)->translate.vec.f.x;

        if (ABSF(dist_x) > 35.0F)
        {
            fp->phys_info.vel_air.x = (dist_x > 0.0F) ? 35.0F : -35.0F;
        }
        else fp->phys_info.vel_air.x = dist_x;
    }
}

// 0x80159CA4
void ftMasterHand_GootsubusuWait_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;
    f32 var;

    if (fp->status_vars.masterhand.gootsubu.edgeright_pos_x < translate->x)
    {
        translate->x = fp->status_vars.masterhand.gootsubu.edgeright_pos_x;
    }

    else if (translate->x < fp->status_vars.masterhand.gootsubu.edgeleft_pos_x)
    {
        translate->x = fp->status_vars.masterhand.gootsubu.edgeleft_pos_x;
    }

    ftMap_UpdateProjectGroundID(fighter_gobj);

    var = fp->coll_data.ground_dist + 3000.0F;

    translate->y -= var;

    fp->coll_data.ground_dist = 3000.0F;
}

// 0x80159D34
void ftMasterHand_GootsubusuWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_MasterHand_GootsubusuWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->status_vars.masterhand.gootsubu.wait_timer = lbRandom_GetIntRange(60) + 60;

    mpCollision_GetLREdgeLeft(fp->coll_data.ground_line_id, &pos);

    fp->status_vars.masterhand.gootsubu.edgeleft_pos_x = pos.x;

    mpCollision_GetLREdgeRight(fp->coll_data.ground_line_id, &pos);

    fp->status_vars.masterhand.gootsubu.edgeright_pos_x = pos.x;
}
