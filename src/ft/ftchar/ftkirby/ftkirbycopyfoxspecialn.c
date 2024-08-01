#include <ft/fighter.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80156CB0
void ftKirbyCopyFoxSpecialNProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    if (fp->command_vars.flags.flag0 != FALSE)
    {
        fp->command_vars.flags.flag0 = FALSE;

        pos.x = FTKIRBY_COPYFOX_BLASTER_SPAWN_OFF_X;
        pos.y = 0.0F;
        pos.z = 0.0F;

        gmCollisionGetFighterPartsWorldPosition(fp->joint[FTKIRBY_COPYFOX_BLASTER_SPAWN_JOINT], &pos);
        wpFoxBlasterMakeWeapon(fighter_gobj, &pos);
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftMap_SetStatusWaitOrFall(fighter_gobj);
    }
}

// 0x80156D38
void ftKirbyCopyFoxSpecialNProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 != 0) && (fp->input.pl.button_tap & fp->input.button_mask_b))
    {
        if (fp->ga == nMPKineticsAir)
        {
            ftKirbyCopyFoxSpecialAirNSetStatus(fighter_gobj);
        }
        else ftKirbyCopyFoxSpecialNSetStatus(fighter_gobj);

        ftParamSetMotionID(fp, nFTMotionAttackIDSpecialNCopyFox);
        ftParamSetStatUpdate(fp, fp->stat_flags.halfword);
        ftParamUpdate1PGameAttackStats(fp, 0);
    }
}

// 0x80156DC8
void ftKirbyCopyFoxSpecialNInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;
    fp->command_vars.flags.flag1 = 0;
}

// 0x80156DD8
void ftKirbyCopyFoxSpecialNSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyFoxSpecialN, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftKirbyCopyFoxSpecialNInitStatusVars(fighter_gobj);
}

// 0x80156E18
void ftKirbyCopyFoxSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyFoxSpecialAirN, 0.0F, 1.0F, FTSTATUS_PRESERVE_FASTFALL);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftKirbyCopyFoxSpecialNInitStatusVars(fighter_gobj);
}
