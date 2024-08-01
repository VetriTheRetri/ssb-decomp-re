#include <ft/fighter.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80155E40
void ftMarioSpecialNProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftMap_SetStatusWaitOrFall);
}

// 0x80155E64
void ftMarioSpecialNProcAccessory(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    s32 fireball_item_id; // 0 = Mario, 1 = Luigi

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        gmCollisionGetFighterPartsWorldPosition(fp->joint[FTMARIO_FIREBALL_SPAWN_JOINT], &pos);

        switch (fp->ft_kind) // jtbl at 0x8018C630
        {
        case nFTKindMario:
        case nFTKindMetalMario:
        case nFTKindPolyMario:
            fireball_item_id = 0;
            break;

        default:
            #if defined (AVOID_UB)
                return; // This prevents the UB by returning from the function if an unwanted character somehow slips through.
            #else
                break; // Undefined behavior here, var is uninitialized, but projectile spawn function still runs
            #endif

        case nFTKindLuigi:
        case nFTKindPolyLuigi:
            fireball_item_id = 1;
            break;
        }
        wpMarioFireballMakeWeapon(fighter_gobj, &pos, fireball_item_id);
    }
}

// 0x80155F04
void ftMarioSpecialNProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftMarioSpecialNSwitchStatusAir);
}

// 0x80155F28
void ftMarioSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftMarioSpecialAirNSwitchStatusGround);
}

// 0x80155F4C
void ftMarioSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);

    ftMainSetFighterStatus(fighter_gobj, nFTMarioStatusSpecialN, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_COLANIM);

    fp->proc_accessory = ftMarioSpecialNProcAccessory;
}

// 0x80155FA0
void ftMarioSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTMarioStatusSpecialAirN, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_COLANIM);
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_accessory = ftMarioSpecialNProcAccessory;
}

// 0x80155FFC
void ftMarioSpecialNInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = FALSE;
    fp->proc_accessory = ftMarioSpecialNProcAccessory;
}

// 0x80156014
void ftMarioSpecialNSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTMarioStatusSpecialN, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftMarioSpecialNInitStatusVars(fighter_gobj);
}

// 0x80156054
void ftMarioSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTMarioStatusSpecialAirN, 0.0F, 1.0F, FTSTATUS_PRESERVE_FASTFALL);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftMarioSpecialNInitStatusVars(fighter_gobj);
}
