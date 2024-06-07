#include <ft/fighter.h>

// 0x8013DE60
void ftNessAppearStartProcUpdate(GObj *fighter_gobj)
{
    ftCommon_Appear_UpdateEffects(fighter_gobj);
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftNessAppearWaitSetStatus);
}

// 0x8013DE90
void ftNessAppearWaitProcUpdate(GObj *fighter_gobj)
{
    ftCommon_Appear_UpdateEffects(fighter_gobj);
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftNessAppearEndSetStatus);
}

// 0x8013DEC0
void ftNessAppearWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Ness_AppearWait, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftCommon_Appear_InitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}

// 0x8013DF14
void ftNessAppearEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ((fp->status_vars.common.entry.lr_entry == LR_Right) ? ftStatus_Ness_AppearREnd : ftStatus_Ness_AppearLEnd), 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftCommon_Appear_InitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}

// 0x8013DF7C
void ftCaptainAppearStartProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Appear_UpdateEffects(fighter_gobj);

    if ((fp->status_vars.common.entry.lr_entry == LR_Left) && (fp->dl_link != 9) && (DObjGetStruct(fighter_gobj)->translate.vec.f.z > -1000.0F))
    {
        ftRenderSwapDLLink(fighter_gobj, 9);
    }
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftCaptainAppearEndSetStatus);
}

// 0x8013E008
void ftCaptainAppearEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ((fp->status_vars.common.entry.lr_entry == LR_Right) ? ftStatus_Captain_AppearREnd : ftStatus_Captain_AppearLEnd), 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_Appear_InitStatusVars(fighter_gobj);

    fp->x18E_flag_b0 = FALSE;
}
