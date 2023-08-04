#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x80159BD0
void ftMasterHand_GootsubuWait_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    jtgt_ovl2_800D9414(fighter_gobj);

    fp->status_vars.masterhand.gootsubu.wait_timer--;

    if (fp->status_vars.masterhand.gootsubu.wait_timer == 0)
    {
        ftMasterHand_GootsubuLanding_SetStatus(fighter_gobj);
    }
    else
    {
        f32 dist_x = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.x - DObjGetStruct(fighter_gobj)->translate.x;

        if (ABSF(dist_x) > 35.0F)
        {
            fp->phys_info.vel_air.x = (dist_x > 0.0F) ? 35.0F : -35.0F;
        }
        else fp->phys_info.vel_air.x = dist_x;
    }
}

// 0x80159CA4
void ftMasterHand_GootsubuWait_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *translate = &DObjGetStruct(fighter_gobj)->translate;
    f32 var;

    if (fp->status_vars.masterhand.gootsubu.edgeright_pos_x < translate->x)
    {
        translate->x = fp->status_vars.masterhand.gootsubu.edgeright_pos_x;
    }

    else if (translate->x < fp->status_vars.masterhand.gootsubu.edgeleft_pos_x)
    {
        translate->x = fp->status_vars.masterhand.gootsubu.edgeleft_pos_x;
    }

    func_ovl2_800DE348(fighter_gobj);

    var = fp->coll_data.ground_dist + 3000.0F;

    translate->y -= var;

    fp->coll_data.ground_dist = 3000.0F;
}

// 0x80159D34
void ftMasterHand_GootsubuWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_GootsubuWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->status_vars.masterhand.gootsubu.wait_timer = lbRandom_GetIntRange(60) + 60;

    mpCollision_GetLREdgeLeft(fp->coll_data.ground_line_id, &pos);

    fp->status_vars.masterhand.gootsubu.edgeleft_pos_x = pos.x;

    mpCollision_GetLREdgeRight(fp->coll_data.ground_line_id, &pos);

    fp->status_vars.masterhand.gootsubu.edgeright_pos_x = pos.x;
}
