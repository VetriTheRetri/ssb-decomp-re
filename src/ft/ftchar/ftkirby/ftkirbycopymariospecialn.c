#include <ft/fighter.h>
#include <wp/weapon.h>
// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, id_true, id_false) \
(((fp->fighter_vars.kirby.copy_id == nFTKindMario) || (fp->fighter_vars.kirby.copy_id == nFTKindNMario) || (fp->fighter_vars.kirby.copy_id == nFTKindMMario)) ? id_true : id_false) \

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801569B0
void ftKirbyCopyMarioSpecialNProcUpdate(GObj *fighter_gobj)
{
    ftAnimEndCheckSetStatus(fighter_gobj, mpCommonSetFighterWaitOrFall);
}

// 0x801569D4
void ftKirbyCopyMarioSpecialNProcAccessory(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    s32 fireball_kind;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        gmCollisionGetFighterPartsWorldPosition(fp->joints[FTKIRBY_COPYMARIO_FIREBALL_SPAWN_JOINT], &pos);

        switch (fp->fighter_vars.kirby.copy_id) // jtbl at 0x8018C6A0
        {
        case nFTKindMario:
        case nFTKindMMario:
        case nFTKindNMario:
            fireball_kind = 0;
            break;

        #if defined (AVOID_UB)
            return; // This prevents the UB by returning from the function if an unwanted character somehow slips through.
        #else
            break; // Undefined behavior here, var is uninitialized, but projectile spawn function still runs
        #endif

        case nFTKindLuigi:
        case nFTKindNLuigi:
            fireball_kind = 1;
            break;
        }
        wpMarioFireballMakeWeapon(fighter_gobj, &pos, fireball_kind);
    }
}

// 0x80156A74
void ftKirbyCopyMarioSpecialNProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterOnEdge(fighter_gobj, ftKirbyCopyMarioSpecialNSwitchStatusAir);
}

// 0x80156A98
void ftKirbyCopyMarioSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterLanding(fighter_gobj, ftKirbyCopyMarioSpecialAirNSwitchStatusGround);
}

// 0x80156ABC
void ftKirbyCopyMarioSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonSetFighterGround(fp);

    ftMainSetFighterStatus(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, nFTKirbyStatusCopyMarioSpecialN, nFTKirbyStatusCopyLuigiSpecialN), fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_COLANIM);

    fp->proc_accessory = ftKirbyCopyMarioSpecialNProcAccessory;
}

// 0x80156B38
void ftKirbyCopyMarioSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonSetFighterAir(fp);

    ftMainSetFighterStatus(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, nFTKirbyStatusCopyMarioSpecialAirN, nFTKirbyStatusCopyLuigiSpecialAirN), fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_COLANIM);

    ftPhysicsClampAirVelXMax(fp);

    fp->proc_accessory = ftKirbyCopyMarioSpecialNProcAccessory;
}

// 0x80156BB8
void ftKirbyCopyMarioSpecialNInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;
    fp->proc_accessory = ftKirbyCopyMarioSpecialNProcAccessory;
}

// 0x80156BD0
void ftKirbyCopyMarioSpecialNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, nFTKirbyStatusCopyMarioSpecialN, nFTKirbyStatusCopyLuigiSpecialN), 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftKirbyCopyMarioSpecialNInitStatusVars(fighter_gobj);
}

// 0x80156C38
void ftKirbyCopyMarioSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, nFTKirbyStatusCopyMarioSpecialAirN, nFTKirbyStatusCopyLuigiSpecialAirN), 0.0F, 1.0F, FTSTATUS_PRESERVE_FASTFALL);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftKirbyCopyMarioSpecialNInitStatusVars(fighter_gobj);
}
