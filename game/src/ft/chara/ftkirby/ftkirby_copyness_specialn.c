#include <ft/chara/ftkirby/ftkirby.h>

#define FTKIRBY_COPYNESS_SPECIALN_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x80155B40
void ftKirby_CopyNess_SpecialN_ProcAccessory(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;
    f32 angle;

    if (fp->command_vars.flags.flag0 != FALSE) // Check if flag to summon PK Fire is true
    {
        fp->command_vars.flags.flag0 = FALSE; // Revert to 0 if PK Fire is summoned, so it doesn't repeat on every frame of the move

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        func_ovl2_800EDF24(fp->joint[FTKIRBY_COPYNESS_PKFIRE_SPAWN_JOINT], &pos);

        pos.x += FTKIRBY_COPYNESS_PKFIRE_SPAWN_OFF_X * fp->lr;
        pos.y += FTKIRBY_COPYNESS_PKFIRE_SPAWN_OFF_Y;

        if (fp->ground_or_air == GA_Air)
        {
            vel.z = 0.0F;
            angle = FTKIRBY_COPYNESS_PKFIRE_SPARK_ANGLE_AIR;
            vel.x = cosf(FTKIRBY_COPYNESS_PKFIRE_SPARK_ANGLE_AIR) * FTKIRBY_COPYNESS_PKFIRE_SPARK_VEL_AIR * fp->lr;
            vel.y = __sinf(FTKIRBY_COPYNESS_PKFIRE_SPARK_ANGLE_AIR) * FTKIRBY_COPYNESS_PKFIRE_SPARK_VEL_AIR;
        }
        else
        {
            vel.z = 0.0F;
            angle = FTKIRBY_COPYNESS_PKFIRE_SPARK_ANGLE_GROUND;
            vel.x = cosf(FTKIRBY_COPYNESS_PKFIRE_SPARK_ANGLE_GROUND) * FTKIRBY_COPYNESS_PKFIRE_SPARK_VEL_GROUND * fp->lr;
            vel.y = __sinf(FTKIRBY_COPYNESS_PKFIRE_SPARK_ANGLE_GROUND) * FTKIRBY_COPYNESS_PKFIRE_SPARK_VEL_GROUND;
        }

        wpNess_PKFire_MakeWeapon(fighter_gobj, &pos, &vel, angle); // Spawn PK Fire
    }
}

// 0x80155CAC
void ftKirby_CopyNess_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftKirby_CopyNess_SpecialN_SwitchStatusAir);
}

// 0x80155CD0
void ftKirby_CopyNess_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyNess_SpecialAirN_SwitchStatusGround);
}

// 0x80155CF4
void ftKirby_CopyNess_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyNess_SpecialN, fighter_gobj->anim_frame, 1.0F, FTKIRBY_COPYNESS_SPECIALN_STATUPDATE_FLAGS);

    fp->proc_accessory = ftKirby_CopyNess_SpecialN_ProcAccessory;
}

// 0x80155D48
void ftKirby_CopyNess_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyNess_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTKIRBY_COPYNESS_SPECIALN_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);

    fp->proc_accessory = ftKirby_CopyNess_SpecialN_ProcAccessory;
}

// 0x80155DA4
void ftKirby_CopyNess_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;

    fp->proc_accessory = ftKirby_CopyNess_SpecialN_ProcAccessory;
}

// 0x80155DBC
void ftKirby_CopyNess_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyNess_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyNess_SpecialN_InitStatusVars(fighter_gobj);
}

// 0x80155DFC
void ftKirby_CopyNess_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyNess_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyNess_SpecialN_InitStatusVars(fighter_gobj);
}
