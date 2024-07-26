#include <gr/ground.h>

#include <ft/fighter.h>
#include <it/item.h>
#include <mp/map.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lGRYamabukiGateOpenAnimJoint;           // 0x000009B0
extern intptr_t lGRYamabukiGateCloseAnimJoint;          // 0x00000A20
extern intptr_t lGRYamabukiItemHead;                    // 0x00000014
extern intptr_t lGRYamabukiMapHead;                     // 0x000008A0

extern void func_8000DF34_EB34(GObj*);
extern void func_8000BD8C_C98C(GObj*, void*, f32);

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x8012EB60
s32 dGRYamabukiMonsterAttackKind = GRYAMABUKI_MONSTER_WEAPON_MAX;

// 0x8012EB64
u16 dGRYamabukiMonsterMapObjKinds[/* */] =
{
    nMPMapObjKindMonster,
    nMPMapObjKindMonsterUnused2,
    nMPMapObjKindMonsterUnused3,
    nMPMapObjKindMonsterUnused4,
    nMPMapObjKindMonsterUnused1
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum grYamabukiGateStatus
{
    nGRYamabukiGateStatusSleep,
    nGRYamabukiGateStatusWait,   // The gates open + lights on state is still considered Gate_Wait
    nGRYamabukiGateStatusOpen    // Fully open when a Pokémon appears
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8010ACD0
void grYamabukiGateUpdateSleep(void)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGRCommonStruct.yamabuki.gate_status = nGRYamabukiGateStatusWait;
        gGRCommonStruct.yamabuki.monster_wait = mtTrigGetRandomIntRange(1000) + 1000;
    }
}

// 0x8010AD18
sb32 grYamabukiGateCheckPlayersNear(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if ((fp->ground_or_air == nMPKineticsGround) && ((fp->coll_data.ground_flags & MPCOLL_VERTEX_MAT_MASK) == nMPMaterialDetect))
        {
            return TRUE;
        }
        else fighter_gobj = fighter_gobj->link_next;
    }
    return FALSE;
}

// 0x8010AD70
void grYamabukiGateMakeMonster(void)
{
    Vec3f pos;
    Vec3f vel;
    s32 mpoint;
    s32 item_id;

    gGRCommonStruct.yamabuki.gate_status = nGRYamabukiGateStatusOpen;
    gGRCommonStruct.yamabuki.is_gate_noentry = FALSE;

    mpCollisionGetMapObjIDsKind(dGRYamabukiMonsterMapObjKinds[0], &mpoint);
    mpCollisionGetMapObjPositionID(mpoint, &pos);

    vel.x = vel.y = vel.z = 0.0F;

    if ((dITManagerMonsterSpawnID == 0) || (dITManagerMonsterSpawnID > (nITKindGrMonsterEnd - nITKindGrMonsterStart + 1)))
    {
        item_id = mtTrigGetRandomIntRange(nITKindGrMonsterEnd - nITKindGrMonsterStart + 1);

        if (item_id == gGRCommonStruct.yamabuki.monster_id_prev)
        {
            item_id = (item_id == (nITKindGrMonsterEnd - nITKindGrMonsterStart)) ? 0 : item_id + 1;
        }
        gGRCommonStruct.yamabuki.monster_id_prev = item_id;
    }
    else item_id = dITManagerMonsterSpawnID - 1;

    gGRCommonStruct.yamabuki.monster_gobj = itManagerMakeItemSetupCommon(NULL, item_id + nITKindGrMonsterStart, &pos, &vel, ITEM_MASK_SPAWN_GROUND);
}

// 0x8010AE3C
void grYamabukiGateSetPositionFar(void)
{
    gGRCommonStruct.yamabuki.gate_pos.x = 1600.0F;
    gGRCommonStruct.yamabuki.gate_pos.y = gMPYakumonoDObjs->yakumono_dobj[3]->translate.vec.f.y;
}

// 0x8010AE68
void grYamabukiGateSetPositionNear(void)
{
    gGRCommonStruct.yamabuki.gate_pos.x = 960.0F;
    gGRCommonStruct.yamabuki.gate_pos.y = gMPYakumonoDObjs->yakumono_dobj[3]->translate.vec.f.y;
}

// 0x8010AE94
void grYamabukiGateAddAnimOffset(intptr_t offset)
{
    func_8000BD8C_C98C(gGRCommonStruct.yamabuki.gate_gobj, (uintptr_t)gGRCommonStruct.yamabuki.map_head + (intptr_t)offset, 0.0F);
    func_8000DF34_EB34(gGRCommonStruct.yamabuki.gate_gobj);
}

// 0x8010AED8
void grYamabukiGateAddAnimOpen(void)
{
    grYamabukiGateAddAnimOffset((intptr_t)&lGRYamabukiGateOpenAnimJoint);
}

// 0x8010AEFC
void grYamabukiGateAddAnimClose(void)
{
    grYamabukiGateAddAnimOffset((intptr_t)&lGRYamabukiGateCloseAnimJoint);
}

// 0x8010AF20 - Allow entry inside Pokémon spawn hub?
void grYamabukiGateAddAnimOpenEntry(void)
{
    grYamabukiGateAddAnimOpen();
    grYamabukiGateSetPositionFar();
}

// 0x8010AF48
void grYamabukiGateUpdateWait(void)
{
    if (gGRCommonStruct.yamabuki.gate_wait == 0)
    {
        if (grYamabukiGateCheckPlayersNear() != FALSE)
        {
            grYamabukiGateMakeMonster();

            return;
        }
    }
    else if (--gGRCommonStruct.yamabuki.gate_wait == 0)
    {
        grYamabukiGateAddAnimOpenEntry();
        func_800269C0_275C0(alSound_SFX_YamabukiGate);
    }
    gGRCommonStruct.yamabuki.monster_wait--;

    if (gGRCommonStruct.yamabuki.monster_wait == 0)
    {
        if (gGRCommonStruct.yamabuki.gate_wait != 0)
        {
            grYamabukiGateAddAnimOpen();
            func_800269C0_275C0(alSound_SFX_YamabukiGate);
        }
        grYamabukiGateMakeMonster();
    }
}

// 0x8010AFF4
void grYamabukiGateUpdateOpen(void)
{
    if (gGRCommonStruct.yamabuki.monster_gobj == NULL)
    {
        grYamabukiGateSetClosedWait();
    }
    else if (gGRCommonStruct.yamabuki.is_gate_noentry == FALSE)
    {
        itStruct *ip = itGetStruct(gGRCommonStruct.yamabuki.monster_gobj);

        gGRCommonStruct.yamabuki.gate_pos.x = DObjGetStruct(gGRCommonStruct.yamabuki.monster_gobj)->translate.vec.f.x - ip->coll_data.object_coll.width;
        gGRCommonStruct.yamabuki.gate_pos.y = gMPYakumonoDObjs->yakumono_dobj[3]->translate.vec.f.y;

        if (gGRCommonStruct.yamabuki.gate_pos.x < 960.0F)
        {
            gGRCommonStruct.yamabuki.gate_pos.x = 960.0F;

            gGRCommonStruct.yamabuki.is_gate_noentry = TRUE;
        }
        else if (gGRCommonStruct.yamabuki.gate_pos.x > 1600.0F)
        {
            gGRCommonStruct.yamabuki.gate_pos.x = 1600.0F;
        }
    }
}

// 0x8010B0AC
void grYamabukiGateClearMonsterGObj(void)
{
    gGRCommonStruct.yamabuki.monster_gobj = NULL;
}

// 0x8010B0B8
void grYamabukiGateSetClosedWait(void)
{
    gGRCommonStruct.yamabuki.gate_status = nGRYamabukiGateStatusWait;
    gGRCommonStruct.yamabuki.gate_wait = 1000;

    gGRCommonStruct.yamabuki.monster_wait = mtTrigGetRandomIntRange(1000) + 1000;

    grYamabukiGateSetPositionNear();
    grYamabukiGateAddAnimClose();
}

// 0x8010B108
void grYamabukiGateUpdateYakumonoPos(void)
{
    mpCollisionSetYakumonoPosID(3, &gGRCommonStruct.yamabuki.gate_pos);
}

// 0x8010B130
void grYamabukiGateProcUpdate(GObj *ground_gobj)
{
    switch (gGRCommonStruct.yamabuki.gate_status)
    {
    case nGRYamabukiGateStatusSleep:
        grYamabukiGateUpdateSleep();
        break;

    case nGRYamabukiGateStatusWait:
        grYamabukiGateUpdateWait();
        grYamabukiGateUpdateYakumonoPos();
        break;

    case nGRYamabukiGateStatusOpen:
        grYamabukiGateUpdateOpen();
        grYamabukiGateUpdateYakumonoPos();
        break;
    }
}

void grYamabukiMakeGate(void)
{
    GObj *gate_gobj;

    gGRCommonStruct.yamabuki.gate_gobj = gate_gobj = omMakeGObjSPAfter(nOMObjKindGround, NULL, GObj_LinkID_Ground, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gate_gobj, odRenderDObjTreeDLLinksForGObj, 6, GOBJ_DLLINKORDER_DEFAULT, -1);
    func_8000F590(gate_gobj, (DObjDesc*) ((uintptr_t)gGRCommonStruct.yamabuki.map_head + (intptr_t)&lGRYamabukiMapHead), NULL, OMMtx_Transform_TraRotRpyR, 0, 0);
    omAddGObjCommonProc(gate_gobj, func_8000DF34_EB34, nOMObjProcessKindProc, 5);
    grYamabukiGateAddAnimClose();
}

// 0x8010B250
void grYamabukiInitGroundVars(void)
{
    gGRCommonStruct.yamabuki.map_head = (void*) ((uintptr_t)gMPGroundData->map_nodes - (intptr_t)&lGRYamabukiMapHead);

    mpCollisionSetYakumonoOnID(3);

    gGRCommonStruct.yamabuki.gate_wait = 1;
    gGRCommonStruct.yamabuki.item_head = (void*) ((uintptr_t)gMPGroundData - (intptr_t)&lGRYamabukiItemHead);

    dGRYamabukiMonsterAttackKind = GRYAMABUKI_MONSTER_WEAPON_MAX;

    gGRCommonStruct.yamabuki.monster_id_prev = nITKindGrMonsterEnd - nITKindGrMonsterStart + 1;
    gGRCommonStruct.yamabuki.gate_pos.z = 0.0F;

    grYamabukiGateSetPositionNear();
    grYamabukiMakeGate();
    grYamabukiGateUpdateYakumonoPos();

    gGRCommonStruct.yamabuki.gate_status = 0;
}

// 0x8010B2EC
GObj* grYamabukiMakeGround(void)
{
    GObj *ground_gobj = omMakeGObjSPAfter(nOMObjKindGround, NULL, GObj_LinkID_Ground, GOBJ_LINKORDER_DEFAULT);

    omAddGObjCommonProc(ground_gobj, grYamabukiGateProcUpdate, nOMObjProcessKindProc, 4);
    grYamabukiInitGroundVars();

    return ground_gobj;
}
