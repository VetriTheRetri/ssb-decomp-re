#include <ft/chara/ftpurin/ftpurin.h>

#define FTPURIN_SPECIALLW_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x80151710
void ftPurin_SpecialLw_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftPurin_SpecialLw_SwitchStatusAir);
}

// 0x80151734
void ftPurin_SpecialAirLw_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftPurin_SpecialAirLw_SwitchStatusGround);
}

// 0x80151758
void ftPurin_SpecialAirLw_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Purin_SpecialLw, fighter_gobj->anim_frame, 1.0F, FTPURIN_SPECIALLW_STATUPDATE_FLAGS);
}

// 0x80151798
void ftPurin_SpecialLw_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Purin_SpecialAirLw, fighter_gobj->anim_frame, 1.0F, FTPURIN_SPECIALLW_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);
}

// 0x801517E4
void ftPurin_SpecialLw_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Purin_SpecialLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x8015181C
void ftPurin_SpecialAirLw_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Purin_SpecialAirLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}
