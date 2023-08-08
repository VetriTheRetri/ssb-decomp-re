#include <ft/fighter.h>

// 0x8015AEE0
void ftMasterHand_Appear_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    DObj *topn_joint = fp->joint[ftParts_DefaultJoint_TopN], *transn_joint = fp->joint[ftParts_DefaultJoint_TransN];

    topn_joint->translate = transn_joint->translate;
}
