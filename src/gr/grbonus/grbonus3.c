#include <gr/ground.h>
#include <it/item.h>
#include <ft/fighter.h>
#include <sc/scene.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lGRBonus3MapHead;                   // 0x00000000
extern intptr_t lGRBonus3ItemHead;                  // 0x00000000
extern intptr_t lGRBonus3BumpersDObjDesc;           // 0x00000000
extern intptr_t lGRBonus3BumpersAnimJoint;          // 0x00000110

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8010B4D0
void grBonus3InitHeaders(void)
{
    gGRCommonStruct.bonus3.map_head = (void*) ((uintptr_t)gMPCollisionGroundData->map_nodes - (intptr_t)&lGRBonus3MapHead);
    gGRCommonStruct.bonus3.item_head = (void*) ((uintptr_t)gMPCollisionGroundData - (intptr_t)&lGRBonus3ItemHead);
}

// 0x8010B508
void grBonus3MakeBumpers(void)
{
    AObjEvent32 **anim_joint;
    GObj *item_gobj;
    Vec3f vel;
    DObjDesc *dobjdesc;
    s32 i;

    vel.x = vel.y = vel.z = 0.0F;

    dobjdesc = (DObjDesc*) ((uintptr_t)gGRCommonStruct.bonus3.map_head + (intptr_t)&lGRBonus3BumpersDObjDesc);
    anim_joint = (AObjEvent32**) ((uintptr_t)gGRCommonStruct.bonus3.map_head + (intptr_t)&lGRBonus3BumpersAnimJoint);

    anim_joint++, dobjdesc++;

    for (i = 0; dobjdesc->index != DOBJ_ARRAY_MAX; i++, dobjdesc++, anim_joint++)
    {
        item_gobj = itManagerMakeItemSetupCommon(NULL, nITKindGBumper, &dobjdesc->translate, &vel, ITEM_FLAG_PARENT_GROUND);

        if ((*anim_joint != NULL) && (item_gobj != NULL))
        {
            gcAddDObjAnimJoint(DObjGetStruct(item_gobj), *anim_joint, 0.0F);
            gcPlayAnimAll(item_gobj);
        }
    }
}

// 0x8010B5F0
void grBonus3TaruBombProcUpdate(GObj *ground_gobj)
{
    Vec3f vel;

    if (gGRCommonStruct.bonus3.tarubomb_make_wait == 0)
    {
        vel.x = vel.y = vel.z = 0.0F;

        itManagerMakeItemSetupCommon(NULL, nITKindTaruBomb, &gGRCommonStruct.bonus3.tarubomb_make_pos, &vel, ITEM_FLAG_PARENT_GROUND);

        gGRCommonStruct.bonus3.tarubomb_make_wait = 180;
    }
    gGRCommonStruct.bonus3.tarubomb_make_wait--;
}

// 0x8010B660
void grBonus3TaruBombMakeActor(void)
{
    s32 pos_ids;

    gcAddGObjProcess(gcMakeGObjSPAfter(nGCCommonKindGround, NULL, nGCCommonLinkIDGround, GOBJ_LINKORDER_DEFAULT), grBonus3TaruBombProcUpdate, nGCProcessKindProc, 4);

    if (mpCollisionGetMapObjCountKind(nMPMapObjKind1PGameBonus3TaruBomb) != 1)
    {
        while (TRUE)
        {
            syErrorPrintf("Too many barrels!\n");
            scManagerRunPrintGObjStatus();
        }
    }
    mpCollisionGetMapObjIDsKind(nMPMapObjKind1PGameBonus3TaruBomb, &pos_ids);
    mpCollisionGetMapObjPositionID(pos_ids, &gGRCommonStruct.bonus3.tarubomb_make_pos);

    gGRCommonStruct.bonus3.tarubomb_make_wait = 180;
}

// 0x8010B700
void grBonus3FinishProcUpdate(GObj *ground_gobj)
{
    FTStruct *fp = ftGetStruct(gBattleState->players[gSceneData.spgame_player].fighter_gobj);

    if ((fp->ga == nMPKineticsGround) && ((fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK) == nMPMaterialDetect))
    {
        ifCommonAnnounceCompleteInitInterface(0x1CB);
        ifCommonBattleEndAddSoundQueueID(nSYAudioFGMBonusComplete);
    }
}

// 0x8010B784
void grBonus3FinishMakeActor(void)
{
    gcAddGObjProcess(gcMakeGObjSPAfter(nGCCommonKindGround, NULL, nGCCommonLinkIDGround, GOBJ_LINKORDER_DEFAULT), grBonus3FinishProcUpdate, 1, 4);
}

// 0x8010B7C8
GObj* grBonus3MakeGround(void)
{
    grBonus3InitHeaders();
    grBonus3MakeBumpers();
    grBonus3TaruBombMakeActor();
    grBonus3FinishMakeActor();

    return NULL;
}
