#include <ft/fighter.h>
#include <wp/weapon.h>
// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define FTKIRBY_COPYPIKACHU_SPECIALN_STATUS_FLAGS (FTSTATUS_PRESERVE_TEXTUREPART | FTSTATUS_PRESERVE_HITSTATUS | FTSTATUS_PRESERVE_EFFECT | FTSTATUS_PRESERVE_COLANIM)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

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

        gmCollisionGetFighterPartsWorldPosition(fp->joints[FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_JOINT], &pos);

        pos.x += FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_OFF_X * fp->lr;
        pos.y += FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_OFF_Y;

        vel.x = __cosf(FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_ANGLE) * FTKIRBY_COPYPIKACHU_THUNDERJOLTVEL * fp->lr;
        vel.y = __sinf(FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_ANGLE) * FTKIRBY_COPYPIKACHU_THUNDERJOLTVEL;
        vel.z = 0.0F;

        wpPikachuThunderJoltAirMakeWeapon(fighter_gobj, &pos, &vel);
        ftParamCheckSetFighterColAnimID(fighter_gobj, FTKIRBY_COPYPIKACHU_THUNDERJOLT_COLANIM_ID, FTKIRBY_COPYPIKACHU_THUNDERJOLT_COLANIM_LENGTH);
    }
}

// 0x801537B8
void ftKirbyCopyPikachuSpecialNProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterOnGround(fighter_gobj, ftKirbyCopyPikachuSpecialNSwitchStatusAir);
}

// 0x801537DC
void ftKirbyCopyPikachuSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterLanding(fighter_gobj, ftKirbyCopyPikachuSpecialAirNSwitchStatusGround);
}

// 0x80153800
void ftKirbyCopyPikachuSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonSetFighterGround(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyPikachuSpecialN, fighter_gobj->anim_frame, 1.0F, FTKIRBY_COPYPIKACHU_SPECIALN_STATUS_FLAGS);

    fp->proc_accessory = ftKirbyCopyPikachuSpecialNProcAccessory;
}

// 0x80153854
void ftKirbyCopyPikachuSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonSetFighterAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyPikachuSpecialAirN, fighter_gobj->anim_frame, 1.0F, FTKIRBY_COPYPIKACHU_SPECIALN_STATUS_FLAGS);
    ftPhysicsClampAirVelXMax(fp);

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
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyPikachuSpecialN, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftKirbyCopyPikachuSpecialNInitStatusVars(fighter_gobj);
}

// 0x80153908
void ftKirbyCopyPikachuSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyPikachuSpecialAirN, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftKirbyCopyPikachuSpecialNInitStatusVars(fighter_gobj);
}
