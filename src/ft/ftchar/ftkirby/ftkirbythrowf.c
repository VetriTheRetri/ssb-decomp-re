#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014A430
void ftKirbyThrowFProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftKirbyThrowFFallSetStatus);
}

// 0x8014A454
void ftKirbyThrowFProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ftMap_CheckAirLanding(fighter_gobj) != FALSE) && (fp->phys_info.vel_air.y < 0.0F))
    {
        ftKirbyThrowFLandingSetStatus(fighter_gobj);
    }
}

// 0x8014A4A8
void ftKirbyThrowFFallSetStatus(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *catch_gobj = this_fp->catch_gobj;
    ftStruct *catch_fp = ftGetStruct(catch_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_ThrowFFall, 0.0F, 1.0F, FTSTATUPDATE_TEXTUREPART_PRESERVE);

    catch_fp->x192_flag_b1 = FALSE;
}

// 0x8014A4F8
void ftKirbyThrowFLandingProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftPhysics_ApplyGroundVelFriction(fighter_gobj);
    }
    else ftPhysics_ApplyAirVelTransNAll(fighter_gobj);
}

// 0x8014A538
void ftKirbyThrowFLandingProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftCommon_Catch_ProcMap(fighter_gobj);
    }
    else if ((ftMap_CheckAirLanding(fighter_gobj) != FALSE) && (fp->phys_info.vel_air.y < 0.0F))
    {
        ftMap_SetStatusWaitOrLanding(fighter_gobj);
    }
}

// 0x8014A5AC
void ftKirbyThrowFLandingSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_ThrowFLanding, 0.0F, 1.0F, FTSTATUPDATE_TEXTUREPART_PRESERVE);
}
