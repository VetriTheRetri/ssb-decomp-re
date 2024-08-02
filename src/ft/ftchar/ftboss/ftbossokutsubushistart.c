#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015ACB0
void ftBossOkutsubushiStartProcUpdate(GObj *fighter_gobj)
{
    ftAnimEndCheckSetStatus(fighter_gobj, ftBossOkutsubushiSetStatus);
}

// 0x8015ACD4
void ftBossOkutsubushiStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *boss_fp, *target_fp;
    s32 ground_line_id;
    s32 line_id;

    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusOkutsubushiStart, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

    boss_fp = ftGetStruct(fighter_gobj);
    target_fp = ftGetStruct(boss_fp->fighter_vars.boss.p->target_gobj);

    ground_line_id = target_fp->coll_data.ground_line_id;

    line_id = ((ground_line_id != -1) && (ground_line_id != -2)) ? ground_line_id : boss_fp->fighter_vars.boss.p->default_line_id;

    ftBossCommonGetPositionCenter(line_id, &boss_fp->status_vars.boss.okutsubushi.pos);
}
