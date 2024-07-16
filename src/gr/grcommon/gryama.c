#include <gr/ground.h>

#include <ft/fighter.h>
#include <it/item.h>
#include <mp/mpcoll.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lGRYamaGateOpenAnimJoint;           // 0x000009B0
extern intptr_t lGRYamaGateCloseAnimJoint;          // 0x00000A20
extern intptr_t lGRYamaItemHead;                    // 0x00000014
extern intptr_t lGRYamaMapHead;                     // 0x000008A0

extern void func_8000DF34_EB34(GObj*);
extern void func_8000BD8C_C98C(GObj*, void*, f32);

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012EB60
s32 dGRYamaMonsterAttackKind = GRYAMA_MONSTER_WEAPON_MAX;

// 0x8012EB64
u16 dGRYamaMonsterMPointKinds[/* */] =
{
    mpMPoint_Kind_Monster,
    mpMPoint_Kind_MonsterUnused2,
    mpMPoint_Kind_MonsterUnused3,
    mpMPoint_Kind_MonsterUnused4,
    mpMPoint_Kind_MonsterUnused1
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum grYamaGateStatus
{
    nGRYamaGateStatusSleep,
    nGRYamaGateStatusWait,   // The gates open + lights on state is still considered Gate_Wait
    nGRYamaGateStatusOpen    // Fully open when a Pokémon appears
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8010ACD0
void grYamaGateUpdateSleep(void)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGroundStruct.yama.gate_status = nGRYamaGateStatusWait;
        gGroundStruct.yama.monster_wait = mtTrigGetRandomIntRange(1000) + 1000;
    }
}

// 0x8010AD18
sb32 grYamaGateCheckPlayersNear(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if ((fp->ground_or_air == GA_Ground) && ((fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK) == mpCollision_Material_Detect))
        {
            return TRUE;
        }
        else fighter_gobj = fighter_gobj->link_next;
    }
    return FALSE;
}

// 0x8010AD70
void grYamaGateMakeMonster(void)
{
    Vec3f pos;
    Vec3f vel;
    s32 mpoint;
    s32 item_id;

    gGroundStruct.yama.gate_status = nGRYamaGateStatusOpen;
    gGroundStruct.yama.is_gate_noentry = FALSE;

    mpCollision_GetMPointIDsKind(dGRYamaMonsterMPointKinds[0], &mpoint);
    mpCollision_GetMPointPositionID(mpoint, &pos);

    vel.x = vel.y = vel.z = 0.0F;

    if ((dITMonsterSpawnID == 0) || (dITMonsterSpawnID > (It_Kind_GrMonsterEnd - It_Kind_GrMonsterStart + 1)))
    {
        item_id = mtTrigGetRandomIntRange(It_Kind_GrMonsterEnd - It_Kind_GrMonsterStart + 1);

        if (item_id == gGroundStruct.yama.monster_id_prev)
        {
            item_id = (item_id == (It_Kind_GrMonsterEnd - It_Kind_GrMonsterStart)) ? 0 : item_id + 1;
        }
        gGroundStruct.yama.monster_id_prev = item_id;
    }
    else item_id = dITMonsterSpawnID - 1;

    gGroundStruct.yama.monster_gobj = itManagerMakeItemSetupCommon(NULL, item_id + It_Kind_GrMonsterStart, &pos, &vel, ITEM_MASK_SPAWN_GROUND);
}

// 0x8010AE3C
void grYamaGateSetPositionFar(void)
{
    gGroundStruct.yama.gate_pos.x = 1600.0F;
    gGroundStruct.yama.gate_pos.y = gMPRooms->room_dobj[3]->translate.vec.f.y;
}

// 0x8010AE68
void grYamaGateSetPositionNear(void)
{
    gGroundStruct.yama.gate_pos.x = 960.0F;
    gGroundStruct.yama.gate_pos.y = gMPRooms->room_dobj[3]->translate.vec.f.y;
}

// 0x8010AE94
void grYamaGateAddAnimOffset(intptr_t offset)
{
    func_8000BD8C_C98C(gGroundStruct.yama.gate_gobj, (uintptr_t)gGroundStruct.yama.map_head + (intptr_t)offset, 0.0F);
    func_8000DF34_EB34(gGroundStruct.yama.gate_gobj);
}

// 0x8010AED8
void grYamaGateAddAnimOpen(void)
{
    grYamaGateAddAnimOffset((intptr_t)&lGRYamaGateOpenAnimJoint);
}

// 0x8010AEFC
void grYamaGateAddAnimClose(void)
{
    grYamaGateAddAnimOffset((intptr_t)&lGRYamaGateCloseAnimJoint);
}

// 0x8010AF20 - Allow entry inside Pokémon spawn hub?
void grYamaGateAddAnimOpenEntry(void)
{
    grYamaGateAddAnimOpen();
    grYamaGateSetPositionFar();
}

// 0x8010AF48
void grYamaGateUpdateWait(void)
{
    if (gGroundStruct.yama.gate_wait == 0)
    {
        if (grYamaGateCheckPlayersNear() != FALSE)
        {
            grYamaGateMakeMonster();

            return;
        }
    }
    else if (--gGroundStruct.yama.gate_wait == 0)
    {
        grYamaGateAddAnimOpenEntry();
        func_800269C0_275C0(alSound_SFX_YamaGate);
    }
    gGroundStruct.yama.monster_wait--;

    if (gGroundStruct.yama.monster_wait == 0)
    {
        if (gGroundStruct.yama.gate_wait != 0)
        {
            grYamaGateAddAnimOpen();
            func_800269C0_275C0(alSound_SFX_YamaGate);
        }
        grYamaGateMakeMonster();
    }
}

// 0x8010AFF4
void grYamaGateUpdateOpen(void)
{
    if (gGroundStruct.yama.monster_gobj == NULL)
    {
        grYamaGateSetClosedWait();
    }
    else if (gGroundStruct.yama.is_gate_noentry == FALSE)
    {
        itStruct *ip = itGetStruct(gGroundStruct.yama.monster_gobj);

        gGroundStruct.yama.gate_pos.x = DObjGetStruct(gGroundStruct.yama.monster_gobj)->translate.vec.f.x - ip->coll_data.object_coll.width;
        gGroundStruct.yama.gate_pos.y = gMPRooms->room_dobj[3]->translate.vec.f.y;

        if (gGroundStruct.yama.gate_pos.x < 960.0F)
        {
            gGroundStruct.yama.gate_pos.x = 960.0F;

            gGroundStruct.yama.is_gate_noentry = TRUE;
        }
        else if (gGroundStruct.yama.gate_pos.x > 1600.0F)
        {
            gGroundStruct.yama.gate_pos.x = 1600.0F;
        }
    }
}

// 0x8010B0AC
void grYamaGateClearMonsterGObj(void)
{
    gGroundStruct.yama.monster_gobj = NULL;
}

// 0x8010B0B8
void grYamaGateSetClosedWait(void)
{
    gGroundStruct.yama.gate_status = nGRYamaGateStatusWait;
    gGroundStruct.yama.gate_wait = 1000;

    gGroundStruct.yama.monster_wait = mtTrigGetRandomIntRange(1000) + 1000;

    grYamaGateSetPositionNear();
    grYamaGateAddAnimClose();
}

// 0x8010B108
void grYamaGateUpdateYakumonoPos(void)
{
    mpCollision_SetYakumonoPosID(3, &gGroundStruct.yama.gate_pos);
}

// 0x8010B130
void grYamaGateProcUpdate(GObj *ground_gobj)
{
    switch (gGroundStruct.yama.gate_status)
    {
    case nGRYamaGateStatusSleep:
        grYamaGateUpdateSleep();
        break;

    case nGRYamaGateStatusWait:
        grYamaGateUpdateWait();
        grYamaGateUpdateYakumonoPos();
        break;

    case nGRYamaGateStatusOpen:
        grYamaGateUpdateOpen();
        grYamaGateUpdateYakumonoPos();
        break;
    }
}

void grYamaMakeGate(void)
{
    GObj *gate_gobj;

    gGroundStruct.yama.gate_gobj = gate_gobj = omMakeGObjSPAfter(GObj_Kind_Ground, NULL, GObj_LinkID_Ground, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gate_gobj, odRenderDObjTreeDLLinksForGObj, 6, GOBJ_DLLINKORDER_DEFAULT, -1);
    func_8000F590(gate_gobj, (DObjDesc*) ((uintptr_t)gGroundStruct.yama.map_head + (intptr_t)&lGRYamaMapHead), NULL, OMMtx_Transform_TraRotRpyR, 0, 0);
    omAddGObjCommonProc(gate_gobj, func_8000DF34_EB34, GObjProcess_Kind_Proc, 5);
    grYamaGateAddAnimClose();
}

// 0x8010B250
void grYamaInitGroundVars(void)
{
    gGroundStruct.yama.map_head = (void*) ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&lGRYamaMapHead);

    mpCollision_SetYakumonoOnID(3);

    gGroundStruct.yama.gate_wait = 1;
    gGroundStruct.yama.item_head = (void*) ((uintptr_t)gGroundInfo - (intptr_t)&lGRYamaItemHead);

    dGRYamaMonsterAttackKind = GRYAMA_MONSTER_WEAPON_MAX;

    gGroundStruct.yama.monster_id_prev = It_Kind_GrMonsterEnd - It_Kind_GrMonsterStart + 1;
    gGroundStruct.yama.gate_pos.z = 0.0F;

    grYamaGateSetPositionNear();
    grYamaMakeGate();
    grYamaGateUpdateYakumonoPos();

    gGroundStruct.yama.gate_status = 0;
}

// 0x8010B2EC
GObj* grYamaMakeGround(void)
{
    GObj *ground_gobj = omMakeGObjSPAfter(GObj_Kind_Ground, NULL, GObj_LinkID_Ground, GOBJ_LINKORDER_DEFAULT);

    omAddGObjCommonProc(ground_gobj, grYamaGateProcUpdate, GObjProcess_Kind_Proc, 4);
    grYamaInitGroundVars();

    return ground_gobj;
}
