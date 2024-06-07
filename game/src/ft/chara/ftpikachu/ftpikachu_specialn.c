#include <ft/fighter.h>
#include <wp/weapon.h>

#define FTPIKACHU_SPECIALN_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x80151B50
void ftPikachuSpecialNProcAccessory(GObj *fighter_gobj)
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

        ftParts_GetDObjWorldPosition(fp->joint[FTPIKACHU_THUNDERJOLT_SPAWN_JOINT], &pos);

        vel.x = cosf(FTPIKACHU_THUNDERJOLT_SPAWN_ANGLE) * FTPIKACHU_THUNDERJOLT_VEL * fp->lr;
        vel.y = __sinf(FTPIKACHU_THUNDERJOLT_SPAWN_ANGLE) * FTPIKACHU_THUNDERJOLT_VEL;
        vel.z = 0.0F;

        wpPikachuThunderJoltAirMakeWeapon(fighter_gobj, &pos, &vel);
        ftColor_CheckSetColAnimIndex(fighter_gobj, FTPIKACHU_THUNDERJOLT_COLANIM_ID, FTPIKACHU_THUNDERJOLT_COLANIM_LENGTH);
    }
}

// 0x80151C14
void ftPikachuSpecialNProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftPikachuSpecialNSwitchStatusAir);
}

// 0x80151C38
void ftPikachuSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftPikachuSpecialAirNSwitchStatusGround);
}

// 0x80151C5C
void ftPikachuSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Pikachu_SpecialN, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALN_STATUPDATE_FLAGS);

    fp->proc_accessory = ftPikachuSpecialNProcAccessory;
}

// 0x80151CB0
void ftPikachuSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Pikachu_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALN_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_accessory = ftPikachuSpecialNProcAccessory;
}

// 0x80151D0C
void ftPikachuSpecialNInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;
    fp->proc_accessory = ftPikachuSpecialNProcAccessory;
}

// 0x80151D24
void ftPikachuSpecialNSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Pikachu_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftPikachuSpecialNInitStatusVars(fighter_gobj);
}

// 0x80151D64
void ftPikachuSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Pikachu_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftPikachuSpecialNInitStatusVars(fighter_gobj);
}
