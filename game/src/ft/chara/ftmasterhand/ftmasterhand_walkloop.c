#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x801598C0
bool32 ftMasterHand_WalkLoop_CheckPlayerRange(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    Vec3f *translate_m = &DObjGetStruct(fighter_gobj)->translate;
    Vec3f *translate_t = &DObjGetStruct(fp->fighter_vars.masterhand.boss->target_gobj)->translate;

    if 
    (
        ((translate_t->y - translate_m->y) > -300.0F)           &&
        ((translate_t->y - translate_m->y) < 500.0F)            &&
        ((translate_t->x - translate_m->x) * fp->lr < 1200.0F)
    )                                                           // Check if target is within range, return TRUE if Master Hand should flick his pointer finger
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80159964
void ftMasterHand_WalkLoop_ProcPhysics(GObj *fighter_gobj)
{
    if (ftMasterHand_WalkLoop_CheckPlayerRange(fighter_gobj) != FALSE)
    {
        ftMasterHand_WalkShoot_SetStatus(fighter_gobj);
    }
}

// 0x80159994
void ftMasterHand_WalkLoop_ProcMap(GObj *fighter_gobj)
{
    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        ftMasterHand_WalkWait_SetStatus(fighter_gobj);
    }
}

// 0x801599C4
void ftMasterHand_WalkLoop_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->phys_info.vel_air.y = 0;

    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_WalkLoop, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.x = fp->lr * 35.0F;
}
