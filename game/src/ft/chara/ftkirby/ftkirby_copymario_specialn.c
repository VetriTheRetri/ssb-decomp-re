#include <ft/chara/ftkirby/ftkirby.h>

#define FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, id_true, id_false) \
(((fp->fighter_vars.kirby.copy_id == Ft_Kind_Mario) || (fp->fighter_vars.kirby.copy_id == Ft_Kind_PolyMario) || (fp->fighter_vars.kirby.copy_id == Ft_Kind_MetalMario)) ? id_true : id_false) \

// 0x801569B0
void ftKirby_CopyMario_SpecialN_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, func_ovl2_800DEE54);
}

// 0x801569D4
void ftKirby_CopyMario_SpecialN_SpawnFireball(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    s32 fireball_item_id;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        func_ovl2_800EDF24(fp->joint[FTKIRBY_COPYMARIO_FIREBALL_SPAWN_JOINT], &pos);

        switch (fp->fighter_vars.kirby.copy_id) // jtbl at 0x8018C6A0
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

// 0x80156A74
void ftKirby_CopyMario_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftKirby_CopyMario_SpecialN_SwitchStatusAir);
}

// 0x80156A98
void ftKirby_CopyMario_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyMario_SpecialAirN_SwitchStatusGround);
}

// 0x80156ABC
void ftKirby_CopyMario_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);

    ftStatus_Update(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, ftStatus_Kirby_CopyMario_SpecialN, ftStatus_Kirby_CopyLuigi_SpecialN), fighter_gobj->anim_frame, 1.0F, 2U);

    fp->proc_accessory = ftKirby_CopyMario_SpecialN_SpawnFireball;
}

// 0x80156B38
void ftKirby_CopyMario_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);

    ftStatus_Update(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, ftStatus_Kirby_CopyMario_SpecialAirN, ftStatus_Kirby_CopyLuigi_SpecialAirN), fighter_gobj->anim_frame, 1.0F, 2U);

    func_ovl2_800D8EB8(fp);

    fp->proc_accessory = ftKirby_CopyMario_SpecialN_SpawnFireball;
}

// 0x80156BB8
void ftKirby_CopyMario_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;
    fp->proc_accessory = ftKirby_CopyMario_SpecialN_SpawnFireball;
}

// 0x80156BD0
void ftKirby_CopyMario_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, ftStatus_Kirby_CopyMario_SpecialN, ftStatus_Kirby_CopyLuigi_SpecialN), 0.0F, 1.0F, 0U);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyMario_SpecialN_InitStatusVars(fighter_gobj);
}

// 0x80156C38
void ftKirby_CopyMario_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, FTKIRBY_COPYMARIO_FIREBALL_CHECK_FTKIND(fp, ftStatus_Kirby_CopyMario_SpecialAirN, ftStatus_Kirby_CopyLuigi_SpecialAirN), 0.0F, 1.0F, 8U);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyMario_SpecialN_InitStatusVars(fighter_gobj);
}
