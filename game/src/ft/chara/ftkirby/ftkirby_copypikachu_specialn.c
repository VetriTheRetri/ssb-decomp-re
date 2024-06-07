#include <ft/fighter.h>
#include <wp/weapon.h>

#define FTKIRBY_COPYPIKACHU_SPECIALN_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x801536C0
void ftKirbyCopyPikachuSpecialNProcAccessory(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        ftParts_GetDObjWorldPosition(fp->joint[FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_JOINT], &pos);

        pos.x += FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_OFF_X * fp->lr;
        pos.y += FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_OFF_Y;

        vel.x = cosf(FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_ANGLE) * FTKIRBY_COPYPIKACHU_THUNDERJOLT_VEL * fp->lr;
        vel.y = __sinf(FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_ANGLE) * FTKIRBY_COPYPIKACHU_THUNDERJOLT_VEL;
        vel.z = 0.0F;

        wpPikachuThunderJoltAirMakeWeapon(fighter_gobj, &pos, &vel);
        ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_COPYPIKACHU_THUNDERJOLT_COLANIM_ID, FTKIRBY_COPYPIKACHU_THUNDERJOLT_COLANIM_LENGTH);
    }
}

// 0x801537B8
void ftKirbyCopyPikachuSpecialNProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftKirbyCopyPikachuSpecialNSwitchStatusAir);
}

// 0x801537DC
void ftKirbyCopyPikachuSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyPikachuSpecialAirNSwitchStatusGround);
}

// 0x80153800
void ftKirbyCopyPikachuSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyPikachu_SpecialN, fighter_gobj->anim_frame, 1.0F, FTKIRBY_COPYPIKACHU_SPECIALN_STATUPDATE_FLAGS);

    fp->proc_accessory = ftKirbyCopyPikachuSpecialNProcAccessory;
}

// 0x80153854
void ftKirbyCopyPikachuSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyPikachu_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTKIRBY_COPYPIKACHU_SPECIALN_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_accessory = ftKirbyCopyPikachuSpecialNProcAccessory;
}

// 0x801538B0
void ftKirbyCopyPikachuSpecialNInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;

    fp->proc_accessory = ftKirbyCopyPikachuSpecialNProcAccessory;
}

// 0x801538C8
void ftKirbyCopyPikachuSpecialNSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyPikachu_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyPikachuSpecialNInitStatusVars(fighter_gobj);
}

// 0x80153908
void ftKirbyCopyPikachuSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyPikachu_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyPikachuSpecialNInitStatusVars(fighter_gobj);
}
