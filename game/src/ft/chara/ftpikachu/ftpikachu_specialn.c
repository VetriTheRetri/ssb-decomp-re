#include <ft/chara/ftpikachu/ftpikachu.h>

#define FTPIKACHU_SPECIALN_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x80151B50
void ftPikachu_SpecialN_ProcAccessory(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        func_ovl2_800EDF24(fp->joint[FTPIKACHU_THUNDERJOLT_SPAWN_JOINT], &pos);

        vel.x = cosf(FTPIKACHU_THUNDERJOLT_SPAWN_ANGLE) * FTPIKACHU_THUNDERJOLT_VEL * fp->lr;
        vel.y = __sinf(FTPIKACHU_THUNDERJOLT_SPAWN_ANGLE) * FTPIKACHU_THUNDERJOLT_VEL;
        vel.z = 0.0F;

        wpPikachu_ThunderJoltAir_MakeWeapon(fighter_gobj, &pos, &vel);
        ftColor_CheckSetColAnimIndex(fighter_gobj, FTPIKACHU_THUNDERJOLT_COLANIM_ID, FTPIKACHU_THUNDERJOLT_COLANIM_LENGTH);
    }
}

// 0x80151C14
void ftPikachu_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftPikachu_SpecialN_SwitchStatusAir);
}

// 0x80151C38
void ftPikachu_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftPikachu_SpecialAirN_SwitchStatusGround);
}

// 0x80151C5C
void ftPikachu_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialN, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALN_STATUPDATE_FLAGS);

    fp->proc_accessory = ftPikachu_SpecialN_ProcAccessory;
}

// 0x80151CB0
void ftPikachu_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALN_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);

    fp->proc_accessory = ftPikachu_SpecialN_ProcAccessory;
}

// 0x80151D0C
void ftPikachu_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;
    fp->proc_accessory = ftPikachu_SpecialN_ProcAccessory;
}

// 0x80151D24
void ftPikachu_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftPikachu_SpecialN_InitStatusVars(fighter_gobj);
}

// 0x80151D64
void ftPikachu_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftPikachu_SpecialN_InitStatusVars(fighter_gobj);
}
