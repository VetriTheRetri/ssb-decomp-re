#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x8015A0C0
void ftMasterHand_Drill_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Wait_SetStatus);
}

// 0x8015A0E4
void ftMasterHand_Drill_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp;

    jtgt_ovl2_800D9414(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    fp->status_vars.masterhand.drill.follow_timer--;

    if (fp->status_vars.masterhand.drill.follow_timer == 0) // Wait until timer reaches 0 to switch physics?
    {
        fp->proc_physics = ftMasterHand_Drill_ProcPhysicsFollow;
        fp->status_vars.masterhand.drill.follow_timer = 39;
    }
}

// 0x8015A138
void ftMasterHand_Drill_ProcPhysicsFollow(GObj *fighter_gobj)
{
    ftStruct *fp;
    f32 dist_x;

    jtgt_ovl2_800D9414(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    dist_x = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.x - DObjGetStruct(fighter_gobj)->translate.x;

    if (ABSF(dist_x) > 30.0F)
    {
        fp->phys_info.vel_air.x = (dist_x > 0.0F) ? 30.0F : -30.0F;
    }
    else
    {
        fp->phys_info.vel_air.x = dist_x;
    }
    fp->status_vars.masterhand.drill.follow_timer--;

    if (fp->status_vars.masterhand.drill.follow_timer == 0)
    {
        fp->phys_info.vel_air.x = 0.0F;
        fp->proc_physics = jtgt_ovl2_800D9414;
    }
}

// 0x8015A204
void ftMasterHand_Drill_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *translate = &DObjGetStruct(fighter_gobj)->translate;

    if (translate->x > fp->status_vars.masterhand.drill.edgeright_pos_x)
    {
        translate->x = fp->status_vars.masterhand.drill.edgeright_pos_x;
    }
    else if (translate->x < fp->status_vars.masterhand.drill.edgeleft_pos_x)
    {
        translate->x = fp->status_vars.masterhand.drill.edgeleft_pos_x;
    }
    func_ovl2_800DE348(fighter_gobj);
}

// 0x8015A268
void ftMasterHand_Drill_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;
    Vec3f pos;

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Drill, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    func_ovl3_80157F90(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    mpCollision_GetLREdgeLeft(fp->coll_data.ground_line_id, &pos);

    fp->status_vars.masterhand.drill.edgeleft_pos_x = pos.x;

    mpCollision_GetLREdgeRight(fp->coll_data.ground_line_id, &pos);

    fp->status_vars.masterhand.drill.edgeright_pos_x = pos.x;

    fp->status_vars.masterhand.drill.follow_timer = 61;
}
