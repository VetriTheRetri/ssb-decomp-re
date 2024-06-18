#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015A2F0
void ftBossOkukoukiProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftBossWaitSetStatus);
}

// 0x8015A314
void ftBossOkukoukiSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_Okukouki, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftBossCommonCheckPlayerInvertLR(fighter_gobj);
}
