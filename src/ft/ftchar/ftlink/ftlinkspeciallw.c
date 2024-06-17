#include <ft/fighter.h>
#include <it/item.h>

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
    ftStatus_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x8016445C
void ftLinkSpecialAirLwProcUpdate(GObj *fighter_gobj)
{
    ftLinkSpecialLwCreateBomb(fighter_gobj);
    ftStatus_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x80164484
void ftLinkSpecialLwProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirLw, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    }
}

// 0x801644D4
void ftLinkSpecialAirLwProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckAirLanding(fighter_gobj) != FALSE)
    {
        ftMap_SetGround(fp);
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialLw, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    }
}

// 0x80164524
sb32 ftLinkSpecialLwCheckGotoItemThrow(GObj *fighter_gobj, sb32 is_ground)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold != NULL)
    {
        itStruct *ip = itGetStruct(fp->item_hold);

        if (ip->it_kind == It_Kind_LinkBomb)
        {
            if (is_ground == TRUE)
            {
                ftCommon_ItemThrow_SetStatus(fighter_gobj, ftStatus_Common_LightThrowF4);

                return TRUE;
            }
            else ftCommon_ItemThrow_SetStatus(fighter_gobj, ftStatus_Common_LightThrowAirF4);
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

        ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    }
}

// 0x801645E8
void ftLinkSpecialAirLwSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftLinkSpecialLwCheckGotoItemThrow(fighter_gobj, FALSE) != TRUE)
    {
        fp->command_vars.flags.flag0 = 0;

        ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    }
}
