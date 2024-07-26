#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015AEE0
void ftBossAppearProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    DObj *topn_joint = fp->joint[nFTPartsJointTopN], *transn_joint = fp->joint[nFTPartsJointTransN];

    topn_joint->translate.vec.f = transn_joint->translate.vec.f;
}
