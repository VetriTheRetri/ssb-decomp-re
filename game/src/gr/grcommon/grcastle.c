#include <gr/ground.h>

#include <it/item.h>

extern intptr_t D_NF_00000000;

// 0x8010B340
void grCastle_Bumper_ProcUpdate(GObj *ground_gobj)
{
    Vec3f *ground_pos = &DObjGetStruct(ground_gobj)->translate.vec.f;

    if (gGroundStruct.castle.bumper_gobj != NULL)
    {
        Vec3f *bumper_pos = &DObjGetStruct(gGroundStruct.castle.bumper_gobj)->translate.vec.f;

        bumper_pos->x = ground_pos->x + gGroundStruct.castle.bumper_pos.x;
    }
}

// 0x8010B378
void grCommon_Castle_InitGroundVars(void)
{
    void *map_head;
    GObj *ground_gobj;
    Vec3f yakumono_pos;
    Vec3f vel;
    s32 pos_id;
    DObj *dobj;

    gGroundStruct.castle.map_head = map_head = (void*)((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&D_NF_00000000);

    ground_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000U);

    omAddGObjCommonProc(ground_gobj, grCastle_Bumper_ProcUpdate, 1, 4);

    dobj = func_800092D0(ground_gobj, NULL);
    dobj->translate.vec.f.x = dobj->translate.vec.f.y = dobj->translate.vec.f.z = 0.0F;

    omAddGObjCommonProc(ground_gobj, func_8000DF34, 1, 5);
    func_8000BD8C(ground_gobj, gGroundInfo->map_nodes, 0.0F);
    func_8000DF34(ground_gobj);
    mpCollision_GetMPointIDsKind(mpCollision_MPointKind_Bumper, &pos_id);
    mpCollision_GetMPointPositionID(pos_id, &yakumono_pos);

    gGroundStruct.castle.bumper_pos = yakumono_pos;

    vel.x = 0.0F;
    vel.y = 0.0F;
    vel.z = 0.0F;

    gGroundStruct.castle.bumper_gobj = itManager_MakeItemSetupCommon(NULL, It_Kind_GBumper, &yakumono_pos, &vel, ITEM_MASK_SPAWN_GROUND);
}

// 0x8010B4AC
GObj* grCommon_Castle_MakeGround(void)
{
    grCommon_Castle_InitGroundVars();

    return NULL;
}
