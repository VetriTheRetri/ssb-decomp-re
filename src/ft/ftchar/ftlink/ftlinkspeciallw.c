#include <ft/fighter.h>
#include <it/item.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801643D0
void ftLinkSpecialLwCreateBomb(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

        vel.x = 0.0F;
        vel.y = 0.0F;
        vel.z = 0.0F;

        itLinkBombMakeItem(fighter_gobj, &pos, &vel);
    }
}

// 0x80164434
void ftLinkSpecialLwProcUpdate(GObj *fighter_gobj)
{
    ftLinkSpecialLwCreateBomb(fighter_gobj);
    ftStatusWaitOnAnimEnd(fighter_gobj);
}

// 0x8016445C
void ftLinkSpecialAirLwProcUpdate(GObj *fighter_gobj)
{
    ftLinkSpecialLwCreateBomb(fighter_gobj);
    ftStatusFallOnAnimEnd(fighter_gobj);
}

// 0x80164484
void ftLinkSpecialLwProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpCommonCheckFighterOnGround(fighter_gobj) == FALSE)
    {
        mpCommonSetFighterAir(fp);
        ftMainSetFighterStatus(fighter_gobj, nFTLinkStatusSpecialAirLw, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_NONE);
    }
}

// 0x801644D4
void ftLinkSpecialAirLwProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpCommonCheckFighterLanding(fighter_gobj) != FALSE)
    {
        mpCommonSetFighterGround(fp);
        ftMainSetFighterStatus(fighter_gobj, nFTLinkStatusSpecialLw, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_NONE);
    }
}

// 0x80164524
sb32 ftLinkSpecialLwCheckGotoItemThrow(GObj *fighter_gobj, sb32 is_ground)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold != NULL)
    {
        itStruct *ip = itGetStruct(fp->item_hold);

        if (ip->it_kind == nITKindLinkBomb)
        {
            if (is_ground == TRUE)
            {
                ftCommonItemThrowSetStatus(fighter_gobj, nFTCommonStatusLightThrowF4);

                return TRUE;
            }
            else ftCommonItemThrowSetStatus(fighter_gobj, nFTCommonStatusLightThrowAirF4);
        }
        return TRUE;
    }
    return FALSE;
}

// 0x8016458C
void ftLinkSpecialLwSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftLinkSpecialLwCheckGotoItemThrow(fighter_gobj, TRUE) != TRUE)
    {
        fp->command_vars.flags.flag0 = 0;

        ftMainSetFighterStatus(fighter_gobj, nFTLinkStatusSpecialLw, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
        ftMainPlayAnimNoEffect(fighter_gobj);
    }
}

// 0x801645E8
void ftLinkSpecialAirLwSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftLinkSpecialLwCheckGotoItemThrow(fighter_gobj, FALSE) != TRUE)
    {
        fp->command_vars.flags.flag0 = 0;

        ftMainSetFighterStatus(fighter_gobj, nFTLinkStatusSpecialAirLw, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
        ftMainPlayAnimNoEffect(fighter_gobj);
    }
}
