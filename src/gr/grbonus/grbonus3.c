#include <gr/ground.h>
#include <it/item.h>
#include <ft/fighter.h>

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
    gGroundStruct.bonus3.map_head = (void*) ((uintptr_t)gMPGroundData->map_nodes - (intptr_t)&lGRBonus3MapHead);
    gGroundStruct.bonus3.item_head = (void*) ((uintptr_t)gMPGroundData - (intptr_t)&lGRBonus3ItemHead);
}

// 0x8010B508
void grBonus3MakeBumpers(void)
{
    ATrack **atrack;
    GObj *item_gobj;
    Vec3f vel;
    DObjDesc *dobj_desc;
    s32 i;

    vel.x = vel.y = vel.z = 0.0F;

    dobj_desc = (DObjDesc*) ((uintptr_t)gGroundStruct.bonus3.map_head + (intptr_t)&lGRBonus3BumpersDObjDesc);
    atrack = (ATrack**) ((uintptr_t)gGroundStruct.bonus3.map_head + (intptr_t)&lGRBonus3BumpersAnimJoint);

    atrack++, dobj_desc++;

    for (i = 0; dobj_desc->index != DOBJ_ARRAY_MAX; i++, dobj_desc++, atrack++)
    {
        item_gobj = itManagerMakeItemSetupCommon(NULL, It_Kind_GBumper, &dobj_desc->translate, &vel, ITEM_MASK_SPAWN_GROUND);

        if ((*atrack != NULL) && (item_gobj != NULL))
        {
            omAddDObjAnimAll(DObjGetStruct(item_gobj), *atrack, 0.0F);
            func_8000DF34_EB34(item_gobj);
        }
    }
}

// 0x8010B5F0
void grBonus3RBombProcUpdate(GObj *ground_gobj)
{
    Vec3f vel;

    if (gGroundStruct.bonus3.rbomb_make_wait == 0)
    {
        vel.x = vel.y = vel.z = 0.0F;

        itManagerMakeItemSetupCommon(NULL, It_Kind_RBomb, &gGroundStruct.bonus3.rbomb_make_pos, &vel, ITEM_MASK_SPAWN_GROUND);

        gGroundStruct.bonus3.rbomb_make_wait = 180;
    }
    gGroundStruct.bonus3.rbomb_make_wait--;
}

// 0x8010B660
void grBonus3RBombMakeActor(void)
{
    s32 pos_ids;

    omAddGObjCommonProc(omMakeGObjSPAfter(GObj_Kind_Ground, NULL, GObj_LinkID_Ground, GOBJ_LINKORDER_DEFAULT), grBonus3RBombProcUpdate, GObjProcess_Kind_Proc, 4);

    if (mpCollisionGetMapObjCountKind(nMPMapObjKind1PGameBonus3RBomb) != 1)
    {
        while (TRUE)
        {
            gsFatalPrintF("Too many barrels!\n");
            smRunPrintGObjStatus();
        }
    }
    mpCollisionGetMapObjIDsKind(nMPMapObjKind1PGameBonus3RBomb, &pos_ids);
    mpCollisionGetMapObjPositionID(pos_ids, &gGroundStruct.bonus3.rbomb_make_pos);

    gGroundStruct.bonus3.rbomb_make_wait = 180;
}

// 0x8010B700
void grBonus3FinishProcUpdate(GObj *ground_gobj)
{
    ftStruct *fp = ftGetStruct(gBattleState->player_block[gSceneData.spgame_player].fighter_gobj);

    if ((fp->ground_or_air == nMPKineticsGround) && ((fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK) == nMPMaterialDetect))
    {
        ifCommonAnnounceCompleteInitInterface(0x1CB);
        ifCommonBattleEndAddSoundQueueID(alSound_SFX_BonusComplete);
    }
}

// 0x8010B784
void grBonus3FinishMakeActor(void)
{
    omAddGObjCommonProc(omMakeGObjSPAfter(GObj_Kind_Ground, NULL, GObj_LinkID_Ground, GOBJ_LINKORDER_DEFAULT), grBonus3FinishProcUpdate, 1, 4);
}

// 0x8010B7C8
GObj* grBonus3MakeGround(void)
{
    grBonus3InitHeaders();
    grBonus3MakeBumpers();
    grBonus3RBombMakeActor();
    grBonus3FinishMakeActor();

    return NULL;
}
