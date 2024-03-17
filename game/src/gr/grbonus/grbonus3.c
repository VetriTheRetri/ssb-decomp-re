#include <gr/ground.h>
#include <it/item.h>
#include <ft/fighter.h>

extern intptr_t lBonus3MapHead;     // 0x00000000
extern intptr_t lBonus3DObjDesc;    // 0x00000000
extern intptr_t lBonus3ItemHead;    // 0x00000000
extern intptr_t lBonus3AnimJoint;   // 0x00000110

// 0x8010B4D0
void grBonus3_Files_InitPointers(void)
{
    gGroundStruct.bonus3.map_head = (void*) ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&lBonus3MapHead);
    gGroundStruct.bonus3.item_head = (void*) ((uintptr_t)gGroundInfo - (intptr_t)&lBonus3ItemHead);
}

// 0x8010B508
void grBonus3_Bumpers_MakeItem(void)
{
    ATrack **atrack;
    GObj *item_gobj;
    Vec3f vel;
    DObjDesc *dobj_desc;
    s32 i;

    vel.x = vel.y = vel.z = 0.0F;

    dobj_desc = (DObjDesc*) ((uintptr_t)gGroundStruct.bonus3.map_head + (intptr_t)&lBonus3DObjDesc);
    atrack = (ATrack**) ((uintptr_t)gGroundStruct.bonus3.map_head + (intptr_t)&lBonus3AnimJoint);

    atrack++, dobj_desc++;

    for (i = 0; dobj_desc->index != 0x12; i++, dobj_desc++, atrack++)
    {
        item_gobj = itManager_MakeItemSetupCommon(NULL, It_Kind_GBumper, &dobj_desc->translate.vec.f, &vel, ITEM_MASK_SPAWN_GROUND);

        if ((*atrack != NULL) && (item_gobj != NULL))
        {
            omAddDObjAnimAll(DObjGetStruct(item_gobj), *atrack, 0.0F);
            func_8000DF34(item_gobj);
        }
    }
}

// 0x8010B5F0
void grBonus3_RBomb_ProcUpdate(GObj *ground_gobj)
{
    Vec3f vel;

    if (gGroundStruct.bonus3.rbomb_make_wait == 0)
    {
        vel.x = vel.y = vel.z = 0.0F;

        itManager_MakeItemSetupCommon(NULL, It_Kind_RBomb, &gGroundStruct.bonus3.rbomb_make_pos, &vel, ITEM_MASK_SPAWN_GROUND);

        gGroundStruct.bonus3.rbomb_make_wait = 180;
    }
    gGroundStruct.bonus3.rbomb_make_wait--;
}

// 0x8010B660
void grBonus3_RBomb_MakeGround(void)
{
    s32 pos_ids;

    omAddGObjCommonProc(omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000U), grBonus3_RBomb_ProcUpdate, 1, 4);

    if (mpCollision_GetMPointCountKind(mpMPoint_Kind_1PGameBonus3RBomb) != 1)
    {
        while (TRUE)
        {
            gsFatalPrintF("Too many barrels!\n");
            scnmgr_scManagerCrashPrintGObjStatus();
        }
    }
    mpCollision_GetMPointIDsKind(mpMPoint_Kind_1PGameBonus3RBomb, &pos_ids);
    mpCollision_GetMPointPositionID(pos_ids, &gGroundStruct.bonus3.rbomb_make_pos);

    gGroundStruct.bonus3.rbomb_make_wait = 180;
}

// 0x8010B700
void grBonus3_Finish_ProcUpdate(GObj *ground_gobj)
{
    ftStruct *fp = ftGetStruct(gBattleState->player_block[gSceneData.spgame_player].fighter_gobj);

    if ((fp->ground_or_air == GA_Ground) && ((fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK) == mpCollision_Material_Detect))
    {
        func_ovl2_80114D58(0x1CB);
        func_ovl2_80113804(0x111U);
    }
}

// 0x8010B784
void grBonus3_Finish_MakeGround(void)
{
    omAddGObjCommonProc(omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000U), grBonus3_Finish_ProcUpdate, 1, 4);
}

// 0x8010B7C8
GObj* grBonus_Bonus3_MakeGround(void)
{
    grBonus3_Files_InitPointers();
    grBonus3_Bumpers_MakeItem();
    grBonus3_RBomb_MakeGround();
    grBonus3_Finish_MakeGround();

    return NULL;
}
