#include <ft/fighter.h>

// 0x80149810
void ftCommon_FuraFura_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 breakout_wait;

    fp->shield_health = (fp->ft_kind == Ft_Kind_Yoshi) ? 30 : 30;

    fp->breakout_wait--;

    breakout_wait = fp->breakout_wait;

    ftCommon_Trap_UpdateBreakoutVars(fp);

    fp->breakout_wait += (fp->breakout_wait - breakout_wait) * 3;

    if (fp->breakout_wait <= 0)
    {
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x801498A4
void ftCommon_FuraFura_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 breakout_wait;

    ftStatus_Update(fighter_gobj, ftStatus_Common_FuraFura, 0.0F, 1.0F, (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_MODELPART_PRESERVE));

    fp->shield_health = (fp->ft_kind == Ft_Kind_Yoshi) ? 30 : 30;

    breakout_wait = FTCOMMON_FURAFURA_BREAKOUT_WAIT_DEFAULT - fp->percent_damage;

    if (breakout_wait <= 0)
    {
        breakout_wait = 0;
    }
    breakout_wait += FTCOMMON_FURAFURA_BREAKOUT_WAIT_MIN;

    ftCommon_Trap_InitBreakoutVars(fp, breakout_wait);
    ftColor_CheckSetColAnimIndex(fighter_gobj, FTCOMMON_FURAFURA_COLANIM_ID, FTCOMMON_FURAFURA_COLANIM_LENGTH);
}