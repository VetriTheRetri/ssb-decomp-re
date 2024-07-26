#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015AAB0
void ftBossOkutsubushiProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        fp->lr = LR_Left;

        cmManagerSetCameraStatusDefault();
        ftBossWaitSetStatus(fighter_gobj);
        ftBossCommonSetDisableFogColor(fighter_gobj);
    }
}

// 0x8015AB08
void ftBossOkutsubushiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp;
    f32 dist_x;

    ftPhysics_SetAirVelTransN(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    dist_x = DObjGetStruct(fp->fighter_vars.boss.p->target_gobj)->translate.vec.f.x - DObjGetStruct(fighter_gobj)->translate.vec.f.x;

    if (ABSF(dist_x) > 40.0F)
    {
        f32 vel_x = (dist_x > 0.0F) ? 40.0F : -40.0F;

        fp->phys_info.vel_air.x += vel_x;
    }
    else fp->phys_info.vel_air.x += dist_x;
    
    fp->status_vars.boss.okutsubushi.follow_timer--;

    if (fp->status_vars.boss.okutsubushi.follow_timer == 0)
    {
        fp->phys_info.vel_air.x = 0.0F;
        fp->proc_physics = ftPhysics_SetAirVelTransN;
    }
    ftBossCommonUpdateFogColor(fighter_gobj);
}

// 0x8015ABEC
void ftBossOkutsubushiSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *translate;
    Vec3f sp34;
    Vec3f sp28;

    fp->lr = LR_Center;

    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusOkutsubushi, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;

    translate->x = fp->status_vars.boss.okutsubushi.pos.x;
    translate->y = fp->status_vars.boss.okutsubushi.pos.y;
    translate->z = -15000.0F;

    fp->status_vars.boss.okutsubushi.follow_timer = 61;

    sp34.x = 0.0F;
    sp34.y = 0.0F;
    sp34.z = 0.0F;

    sp28.x = 0.0F;
    sp28.y = 1000.0F;
    sp28.z = 7000.0F;

    func_ovl2_8010D0A4(&sp34, &sp28);
    ftBossCommonSetUseFogColor(fighter_gobj);
}
