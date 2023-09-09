#include <ft/fighter.h>

bool32 ftAnim_IfAnimEnd_ProcStatus(GObj *fighter_gobj, void (*proc_status)(GObj*))
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        proc_status(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x800D94C4
void ftCommon_IfAnimEnd_SetStatusWait(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Wait_SetStatus);
}

// 0x800D94E8
void ftCommon_IfAnimEnd_SetStatusFall(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Fall_SetStatus);
}
