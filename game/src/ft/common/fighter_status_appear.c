#include <ft/fighter.h>

// 0x8013DE60
void ftNess_AppearStart_ProcUpdate(GObj *fighter_gobj)
{
    ftCommon_Appear_UpdateEffects(fighter_gobj);
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftNess_AppearWait_SetStatus);
}

// 0x8013DE90
void ftNess_AppearWait_ProcUpdate(GObj *fighter_gobj)
{
    ftCommon_Appear_UpdateEffects(fighter_gobj);
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftNess_AppearEnd_SetStatus);
}

// 0x8013DEC0
void ftNess_AppearWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_AppearWait, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftCommon_Appear_InitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}

// 0x8013DF14
void ftNess_AppearEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ((fp->status_vars.common.entry.lr_entry == LR_Right) ? ftStatus_Ness_AppearREnd : ftStatus_Ness_AppearLEnd), 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftCommon_Appear_InitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}

// 0x8013DF7C
void ftCaptain_AppearStart_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Appear_UpdateEffects(fighter_gobj);

    if ((fp->status_vars.common.entry.lr_entry == LR_Left) && (fp->unk_0x16 != 9) && (DObjGetStruct(fighter_gobj)->translate.vec.f.z > -1000.0F))
    {
        func_ovl2_800E827C(fighter_gobj, 9);
    }
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftCaptain_AppearEnd_SetStatus);
}

// 0x8013E008
void ftCaptain_AppearEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ((fp->status_vars.common.entry.lr_entry == LR_Right) ? ftStatus_Captain_AppearREnd : ftStatus_Captain_AppearLEnd), 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_Appear_InitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}
