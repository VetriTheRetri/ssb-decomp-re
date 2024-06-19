#include <ft/fighter.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, id_true, id_false) \
(((fp->fighter_vars.kirby.copy_id == Ft_Kind_Mario) || (fp->fighter_vars.kirby.copy_id == Ft_Kind_PolyMario) || (fp->fighter_vars.kirby.copy_id == Ft_Kind_MetalMario)) ? id_true : id_false) \

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801569B0
void ftKirbyCopyMarioSpecialNProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftMap_SetStatusWaitOrFall);
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

        ftParts_GetDObjWorldPosition(fp->joint[FTKIRBY_COPYMARIO_FIREBALL_SPAWN_JOINT], &pos);

        switch (fp->fighter_vars.kirby.copy_id) // jtbl at 0x8018C6A0
        {
        case Ft_Kind_Mario:
        case Ft_Kind_MetalMario:
        case Ft_Kind_PolyMario:
            fireball_kind = 0;
            break;

        default:
            break; // Undefined behavior here, var is uninitialized, but projectile spawn function still runs

        case Ft_Kind_Luigi:
        case Ft_Kind_PolyLuigi:
            fireball_kind = 1;
            break;
        }
        wpMarioFireballMakeWeapon(fighter_gobj, &pos, fireball_kind);
    }
}

// 0x80156A74
void ftKirbyCopyMarioSpecialNProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftKirbyCopyMarioSpecialNSwitchStatusAir);
}

// 0x80156A98
void ftKirbyCopyMarioSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyMarioSpecialAirNSwitchStatusGround);
}

// 0x80156ABC
void ftKirbyCopyMarioSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);

    ftMainSetFighterStatus(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, ftStatus_Kirby_CopyMario_SpecialN, ftStatus_Kirby_CopyLuigi_SpecialN), fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_accessory = ftKirbyCopyMarioSpecialNProcAccessory;
}

// 0x80156B38
void ftKirbyCopyMarioSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);

    ftMainSetFighterStatus(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, ftStatus_Kirby_CopyMario_SpecialAirN, ftStatus_Kirby_CopyLuigi_SpecialAirN), fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    ftPhysics_ClampAirVelXMax(fp);

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

    ftMainSetFighterStatus(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, ftStatus_Kirby_CopyMario_SpecialN, ftStatus_Kirby_CopyLuigi_SpecialN), 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyMarioSpecialNInitStatusVars(fighter_gobj);
}

// 0x80156C38
void ftKirbyCopyMarioSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, ftStatus_Kirby_CopyMario_SpecialAirN, ftStatus_Kirby_CopyLuigi_SpecialAirN), 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyMarioSpecialNInitStatusVars(fighter_gobj);
}
