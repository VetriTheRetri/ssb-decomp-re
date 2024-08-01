#include <gr/ground.h>
#include <it/item.h>

extern void func_8000DF34_EB34(GObj*);
extern void func_8000BD8C_C98C(GObj*, void*, f32);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lGRCastleMapHead;               // 0x00000000

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8010B340
void grCastleBumperProcUpdate(GObj *ground_gobj)
{
    Vec3f *ground_pos = &DObjGetStruct(ground_gobj)->translate.vec.f;

    if (gGRCommonStruct.castle.bumper_gobj != NULL)
    {
        Vec3f *bumper_pos = &DObjGetStruct(gGRCommonStruct.castle.bumper_gobj)->translate.vec.f;

        bumper_pos->x = ground_pos->x + gGRCommonStruct.castle.bumper_pos.x;
    }
}

// 0x8010B378
void grCastleInitAll(void)
{
    void *map_head;
    GObj *ground_gobj;
    Vec3f yakumono_pos;
    Vec3f vel;
    s32 pos_id;
    DObj *dobj;

    gGRCommonStruct.castle.map_head = map_head = (void*)((uintptr_t)gMPCollisionGroundData->map_nodes - (intptr_t)&lGRCastleMapHead);

    ground_gobj = omMakeGObjSPAfter(nOMObjCommonKindGround, NULL, nOMObjCommonLinkIDGround, GOBJ_LINKORDER_DEFAULT);

    omAddGObjCommonProc(ground_gobj, grCastleBumperProcUpdate, nOMObjProcessKindProc, 4);

    dobj = omAddDObjForGObj(ground_gobj, NULL);
    dobj->translate.vec.f.x = dobj->translate.vec.f.y = dobj->translate.vec.f.z = 0.0F;

    omAddGObjCommonProc(ground_gobj, func_8000DF34_EB34, nOMObjProcessKindProc, 5);

    func_8000BD8C_C98C(ground_gobj, gMPCollisionGroundData->map_nodes, 0.0F);
    func_8000DF34_EB34(ground_gobj);

    mpCollisionGetMapObjIDsKind(nMPMapObjKindBumper, &pos_id);
    mpCollisionGetMapObjPositionID(pos_id, &yakumono_pos);

    gGRCommonStruct.castle.bumper_pos = yakumono_pos;

    vel.x = 0.0F;
    vel.y = 0.0F;
    vel.z = 0.0F;

    gGRCommonStruct.castle.bumper_gobj = itManagerMakeItemSetupCommon(NULL, nITKindGBumper, &yakumono_pos, &vel, ITEM_MASK_SPAWN_GROUND);
}

// 0x8010B4AC
GObj* grCastleMakeGround(void)
{
    grCastleInitAll();

    return NULL;
}
