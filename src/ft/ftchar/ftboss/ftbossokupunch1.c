#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015A7A0
void ftBossOkupunch1ProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftBossOkupunch2SetStatus);
}

// 0x8015A7C4
void ftBossOkupunch1SetStatus(GObj *fighter_gobj)
{
    ftStruct *boss_fp, *target_fp;
    s32 ground_line_id;
    s32 line_id;

    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusOkupunch1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    boss_fp = ftGetStruct(fighter_gobj);

    target_fp = ftGetStruct(boss_fp->fighter_vars.boss.p->target_gobj);

    ground_line_id = target_fp->coll_data.ground_line_id;

    line_id = ((ground_line_id != -1) && ground_line_id != -2) ? ground_line_id : boss_fp->fighter_vars.boss.p->default_line_id;

    ftBossCommonGetPositionCenter(line_id, &boss_fp->status_vars.boss.okupunch.pos);
}
