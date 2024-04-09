#include <ft/fighter.h>
#include <wp/weapon.h>

#define FTKIRBY_COPYNESS_SPECIALN_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x80155B40
void ftKirbyCopyNessSpecialNProcAccessory(GObj *fighter_gobj)
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

        ftParts_GetDObjWorldPosition(fp->joint[FTKIRBY_COPYNESS_PKFIRE_SPAWN_JOINT], &pos);

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

        wpNessPKFireMakeWeapon(fighter_gobj, &pos, &vel, angle); // Spawn PK Fire
    }
}

// 0x80155CAC
void ftKirbyCopyNessSpecialNProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftKirbyCopyNessSpecialNSwitchStatusAir);
}

// 0x80155CD0
void ftKirbyCopyNessSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyNessSpecialAirNSwitchStatusGround);
}

// 0x80155CF4
void ftKirbyCopyNessSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyNess_SpecialN, fighter_gobj->anim_frame, 1.0F, FTKIRBY_COPYNESS_SPECIALN_STATUPDATE_FLAGS);

    fp->proc_accessory = ftKirbyCopyNessSpecialNProcAccessory;
}

// 0x80155D48
void ftKirbyCopyNessSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyNess_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTKIRBY_COPYNESS_SPECIALN_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_accessory = ftKirbyCopyNessSpecialNProcAccessory;
}

// 0x80155DA4
void ftKirbyCopyNessSpecialNInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;

    fp->proc_accessory = ftKirbyCopyNessSpecialNProcAccessory;
}

// 0x80155DBC
void ftKirbyCopyNessSpecialNSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyNess_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyNessSpecialNInitStatusVars(fighter_gobj);
}

// 0x80155DFC
void ftKirbyCopyNessSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyNess_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyNessSpecialNInitStatusVars(fighter_gobj);
}
