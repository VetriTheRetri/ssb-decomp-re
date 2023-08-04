#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x8015AAB0
void ftMasterHand_Okutsubushi_ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        fp->lr = LEFT;

        func_ovl2_8010CF20();
        ftMasterHand_Wait_SetStatus(fighter_gobj);
        func_ovl3_80158620(fighter_gobj);
    }
}

// 0x8015AB08
void ftMasterHand_Okutsubushi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp;
    f32 dist_x;

    func_ovl2_800D938C(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    dist_x = DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate.x - DObjGetStruct(fighter_gobj)->translate.x;

    if (ABSF(dist_x) > 40.0F)
    {
        f32 vel_x = (dist_x > 0.0F) ? 40.0F : -40.0F;

        fp->phys_info.vel_air.x += vel_x;
    }
    else
    {
        fp->phys_info.vel_air.x += dist_x;
    }

    fp->status_vars.masterhand.okutsubushi.follow_timer--;

    if (fp->status_vars.masterhand.okutsubushi.follow_timer == 0)
    {
        fp->phys_info.vel_air.x = 0.0F;
        fp->proc_physics = func_ovl2_800D938C;
    }
    func_ovl3_80158528(fighter_gobj);
}

// 0x8015ABEC
void ftMasterHand_Okutsubushi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *translate;
    Vec3f sp34;
    Vec3f sp28;

    fp->lr = CENTER;

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Okutsubushi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    translate = &DObjGetStruct(fighter_gobj)->translate;

    translate->x = fp->status_vars.masterhand.okutsubushi.pos.x;
    translate->y = fp->status_vars.masterhand.okutsubushi.pos.y;
    translate->z = -15000.0F;

    fp->status_vars.masterhand.okutsubushi.follow_timer = 61;

    sp34.x = 0.0F;
    sp34.y = 0.0F;
    sp34.z = 0.0F;

    sp28.x = 0.0F;
    sp28.y = 1000.0F;
    sp28.z = 7000.0F;

    func_ovl2_8010D0A4(&sp34, &sp28);
    func_ovl3_80158604(fighter_gobj);
}
