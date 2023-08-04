#include <ft/chara/ftkirby/ftkirby.h>

#define FTKIRBY_COPYPIKACHU_SPECIALN_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x801536C0
void ftKirby_CopyPikachu_SpecialN_ProcAccessory(GObj *fighter_gobj)
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

        func_ovl2_800EDF24(fp->joint[FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_JOINT], &pos);

        pos.x += FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_OFF_X * fp->lr;
        pos.y += FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_OFF_Y;

        vel.x = cosf(FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_ANGLE) * FTKIRBY_COPYPIKACHU_THUNDERJOLT_VEL * fp->lr;
        vel.y = __sinf(FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_ANGLE) * FTKIRBY_COPYPIKACHU_THUNDERJOLT_VEL;
        vel.z = 0.0F;

        wpPikachu_ThunderJoltAir_MakeWeapon(fighter_gobj, &pos, &vel);
        ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_COPYPIKACHU_THUNDERJOLT_COLANIM_ID, FTKIRBY_COPYPIKACHU_THUNDERJOLT_COLANIM_LENGTH);
    }
}

// 0x801537B8
void ftKirby_CopyPikachu_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftKirby_CopyPikachu_SpecialN_SwitchStatusAir);
}

// 0x801537DC
void ftKirby_CopyPikachu_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyPikachu_SpecialAirN_SwitchStatusGround);
}

// 0x80153800
void ftKirby_CopyPikachu_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyPikachu_SpecialN, fighter_gobj->anim_frame, 1.0F, FTKIRBY_COPYPIKACHU_SPECIALN_STATUPDATE_FLAGS);

    fp->proc_accessory = ftKirby_CopyPikachu_SpecialN_ProcAccessory;
}

// 0x80153854
void ftKirby_CopyPikachu_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyPikachu_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTKIRBY_COPYPIKACHU_SPECIALN_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);

    fp->proc_accessory = ftKirby_CopyPikachu_SpecialN_ProcAccessory;
}

// 0x801538B0
void ftKirby_CopyPikachu_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;

    fp->proc_accessory = ftKirby_CopyPikachu_SpecialN_ProcAccessory;
}

// 0x801538C8
void ftKirby_CopyPikachu_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyPikachu_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyPikachu_SpecialN_InitStatusVars(fighter_gobj);
}

// 0x80153908
void ftKirby_CopyPikachu_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyPikachu_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyPikachu_SpecialN_InitStatusVars(fighter_gobj);
}
