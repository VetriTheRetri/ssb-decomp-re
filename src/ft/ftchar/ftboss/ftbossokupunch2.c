#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015A840
void ftBossOkupunch2ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        cmManagerSetCameraStatusDefault();
        ftBossOkupunch3SetStatus(fighter_gobj);
        ftBossCommonSetDisableFogColor(fighter_gobj);
    }
}

// 0x8015A890
void ftBossOkupunch2ProcPhysics(GObj *fighter_gobj)
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
    
    ftBossCommonUpdateFogColor(fighter_gobj);
}

// 0x8015A950
void ftBossOkupunch2SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *translate;
    Vec3f sp34;
    Vec3f sp28;

    fp->lr = LR_Center;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_Okupunch2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    translate = &DObjGetStruct(fighter_gobj)->translate.vec.f;

    translate->x = fp->status_vars.boss.okupunch.pos.x;
    translate->y = fp->status_vars.boss.okupunch.pos.y;
    translate->z = -15000.0F;

    sp34.x = 0.0F;
    sp34.y = 0.0F;
    sp34.z = 0.0F;

    sp28.x = 0.0F;
    sp28.y = 1000.0F;
    sp28.z = 7000.0F;

    func_ovl2_8010D0A4(&sp34, &sp28);
    ftBossCommonSetUseFogColor(fighter_gobj);
}
