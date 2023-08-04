#include <ft/chara/ftmario/ftmario.h>

// 0x80155E40
void ftMario_SpecialN_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, func_ovl2_800DEE54);
}

// 0x80155E64
void ftMario_SpecialN_ProcAccessory(GObj *fighter_gobj)
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

        func_ovl2_800EDF24(fp->joint[FTMARIO_FIREBALL_SPAWN_JOINT], &pos);

        switch (fp->ft_kind) // jtbl at 0x8018C630
        {
        case Ft_Kind_Mario:
        case Ft_Kind_MetalMario:
        case Ft_Kind_PolyMario:
            fireball_item_id = 0;
            break;

        default:
            break; // Undefined behavior here, var is uninitialized, but projectile spawn function still runs

        case Ft_Kind_Luigi:
        case Ft_Kind_PolyLuigi:
            fireball_item_id = 1;
            break;
        }
        wpMario_Fireball_MakeWeapon(fighter_gobj, &pos, fireball_item_id);
    }
}

// 0x80155F04
void ftMario_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftMario_SpecialN_SwitchStatusAir);
}

// 0x80155F28
void ftMario_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftMario_SpecialAirN_SwitchStatusGround);
}

// 0x80155F4C
void ftMario_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);

    ftStatus_Update(fighter_gobj, ftStatus_Mario_SpecialN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_accessory = ftMario_SpecialN_ProcAccessory;
}

// 0x80155FA0
void ftMario_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Mario_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    func_ovl2_800D8EB8(fp);

    fp->proc_accessory = ftMario_SpecialN_ProcAccessory;
}

// 0x80155FFC
void ftMario_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = FALSE;
    fp->proc_accessory = ftMario_SpecialN_ProcAccessory;
}

// 0x80156014
void ftMario_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Mario_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftMario_SpecialN_InitStatusVars(fighter_gobj);
}

// 0x80156054
void ftMario_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Mario_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftMario_SpecialN_InitStatusVars(fighter_gobj);
}