#include <ft/chara/ftness/ftness.h>

#define FTNESS_SPECIALN_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// PK Fire (SpecialN/SpecialAirN)

// 0x80153950
void ftNess_SpecialN_ProcAccessory(GObj *fighter_gobj) // PK Fire setup
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

        func_ovl2_800EDF24(fp->joint[FTNESS_PKFIRE_SPAWN_JOINT], &pos);

        pos.x += FTNESS_PKFIRE_SPAWN_OFF_X * fp->lr;
        pos.y += FTNESS_PKFIRE_SPAWN_OFF_Y;
        pos.z = 0.0F;

        if (fp->ground_or_air == GA_Air)
        {
            vel.z = 0.0F;
            angle = FTNESS_PKFIRE_SPARK_ANGLE_AIR;
            vel.x = cosf(FTNESS_PKFIRE_SPARK_ANGLE_AIR) * FTNESS_PKFIRE_SPARK_VEL_AIR * fp->lr;
            vel.y = __sinf(FTNESS_PKFIRE_SPARK_ANGLE_AIR) * FTNESS_PKFIRE_SPARK_VEL_AIR;
        }
        else
        {
            vel.z = 0.0F;
            angle = FTNESS_PKFIRE_SPARK_ANGLE_GROUND;
            vel.x = cosf(FTNESS_PKFIRE_SPARK_ANGLE_GROUND) * FTNESS_PKFIRE_SPARK_VEL_GROUND * fp->lr;
            vel.y = __sinf(FTNESS_PKFIRE_SPARK_ANGLE_GROUND) * FTNESS_PKFIRE_SPARK_VEL_GROUND;
        }

        wpNess_PKFire_MakeWeapon(fighter_gobj, &pos, &vel, angle); // Spawn PK Fire
    }
}

// 0x80153AC0
void ftNess_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftNess_SpecialN_SwitchStatusAir);
}

// 0x80153AE4
void ftNess_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftNess_SpecialAirN_SwitchStatusGround);
}

// 0x80153B08
void ftNess_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);

    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialN, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALN_STATUPDATE_FLAGS); // Action State Change

    fp->proc_accessory = ftNess_SpecialN_ProcAccessory;
}

// 0x80153B5C
void ftNess_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);

    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALN_STATUPDATE_FLAGS); // Action State Change

    func_ovl2_800D8EB8(fp);

    fp->proc_accessory = ftNess_SpecialN_ProcAccessory;
}

// 0x80153BB8
void ftNess_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = FALSE;
    fp->proc_accessory = ftNess_SpecialN_ProcAccessory;
}

// 0x80153BD0
void ftNess_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftNess_SpecialN_InitStatusVars(fighter_gobj);
}

// 0x80153C10
void ftNess_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Ness_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftNess_SpecialN_InitStatusVars(fighter_gobj);
}