#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015A350
void ftBossYubideppou1ProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftBossYubideppou2SetStatus);
}

// 0x8015A374
void ftBossYubideppou1SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;

    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusYubideppou1, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftBossCommonCheckPlayerInvertLR(fighter_gobj);

    fp = ftGetStruct(fighter_gobj);

    fp->status_vars.boss.yubideppou.bullet_count = 0;
}
