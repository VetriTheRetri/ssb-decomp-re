#include <ft/chara/ftlink/ftlink.h>

// 0x801643D0
void ftLink_SpecialLw_CreateBomb(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos = DObjGetStruct(fighter_gobj)->translate;

        vel.x = 0.0F;
        vel.y = 0.0F;
        vel.z = 0.0F;

        itLink_Bomb_MakeItem(fighter_gobj, &pos, &vel);
    }
}

// 0x80164434
void ftLink_SpecialLw_ProcUpdate(GObj *fighter_gobj)
{
    ftLink_SpecialLw_CreateBomb(fighter_gobj);
    ftCommon_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x8016445C
void ftLink_SpecialAirLw_ProcUpdate(GObj *fighter_gobj)
{
    ftLink_SpecialLw_CreateBomb(fighter_gobj);
    ftCommon_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x80164484
void ftLink_SpecialLw_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
        ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialAirLw, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    }
}

// 0x801644D4
void ftLink_SpecialAirLw_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        ftMap_SetGround(fp);
        ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialLw, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    }
}

// 0x80164524
bool32 ftLink_SpecialLw_CheckGotoItemThrow(GObj *fighter_gobj, bool32 is_ground)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->item_hold != NULL)
    {
        itStruct *ap = itGetStruct(fp->item_hold);

        if (ap->it_kind == It_Kind_Link_Bomb)
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
void ftLink_SpecialLw_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftLink_SpecialLw_CheckGotoItemThrow(fighter_gobj, TRUE) != TRUE)
    {
        fp->command_vars.flags.flag0 = 0;

        ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftAnim_Update(fighter_gobj);
    }
}

// 0x801645E8
void ftLink_SpecialAirLw_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftLink_SpecialLw_CheckGotoItemThrow(fighter_gobj, FALSE) != TRUE)
    {
        fp->command_vars.flags.flag0 = 0;

        ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialAirLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftAnim_Update(fighter_gobj);
    }
}
