#include <gr/ground.h>

#include <ft/fighter.h>
#include <it/item.h>
#include <mp/mpcoll.h>
#include <gm/battle.h>

extern intptr_t lGrYamabukiGateOpenAnimJoint;   // 0x000009B0
extern intptr_t lGrYamabukiGateCloseAnimJoint;  // 0x00000A20
extern intptr_t D_NF_00000014;
extern intptr_t D_NF_000008A0;

// 0x8012EB60
s32 dGrYamabukiMonsterAttackType = 4;

// 0x8012EB64
u16 dYamabukiMonsterMPointKinds[/* */] =
{
    mpMPoint_Kind_Monster,
    mpMPoint_Kind_MonsterUnused2,
    mpMPoint_Kind_MonsterUnused3,
    mpMPoint_Kind_MonsterUnused4,
    mpMPoint_Kind_MonsterUnused1
};

enum grYamabukiGateStatus
{
    grYamabuki_Gate_Sleep,
    grYamabuki_Gate_Wait,   // The gates open + lights on state is still considered Gate_Wait
    grYamabuki_Gate_Open    // Fully open when a Pokémon appears
};

// 0x8010ACD0
void grYamabukiGateUpdateSleep(void)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGroundStruct.yamabuki.gate_status = grYamabuki_Gate_Wait;
        gGroundStruct.yamabuki.monster_wait = lbRandom_GetIntRange(1000) + 1000;
    }
}

// 0x8010AD18
sb32 grYamabukiGateCheckPlayersNear(void)
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
void grYamabukiGateMakeMonster(void)
{
    Vec3f pos;
    Vec3f vel;
    s32 mpoint;
    s32 item_id;

    gGroundStruct.yamabuki.gate_status = grYamabuki_Gate_Open;
    gGroundStruct.yamabuki.is_gate_deny_entry = FALSE;

    mpCollision_GetMPointIDsKind(dYamabukiMonsterMPointKinds[0], &mpoint);
    mpCollision_GetMPointPositionID(mpoint, &pos);

    vel.x = vel.y = vel.z = 0.0F;

    if ((dITMonsterSpawnID == 0) || (dITMonsterSpawnID > (It_Kind_GrMonsterEnd - It_Kind_GrMonsterStart + 1)))
    {
        item_id = lbRandom_GetIntRange(It_Kind_GrMonsterEnd - It_Kind_GrMonsterStart + 1);

        if (item_id == gGroundStruct.yamabuki.monster_id_prev)
        {
            item_id = (item_id == (It_Kind_GrMonsterEnd - It_Kind_GrMonsterStart)) ? 0 : item_id + 1;
        }
        gGroundStruct.yamabuki.monster_id_prev = item_id;
    }
    else item_id = dITMonsterSpawnID - 1;

    gGroundStruct.yamabuki.monster_gobj = itManagerMakeItemSetupCommon(NULL, item_id + It_Kind_GrMonsterStart, &pos, &vel, ITEM_MASK_SPAWN_GROUND);
}

// 0x8010AE3C
void grYamabukiGateSetPositionFar(void)
{
    gGroundStruct.yamabuki.gate_pos.x = 1600.0F;
    gGroundStruct.yamabuki.gate_pos.y = gMapRooms->room_dobj[3]->translate.vec.f.y;
}

// 0x8010AE68
void grYamabukiGateSetPositionNear(void)
{
    gGroundStruct.yamabuki.gate_pos.x = 960.0F;
    gGroundStruct.yamabuki.gate_pos.y = gMapRooms->room_dobj[3]->translate.vec.f.y;
}

// 0x8010AE94
void grYamabukiGateAddAnimOffset(intptr_t offset)
{
    func_8000BD8C(gGroundStruct.yamabuki.gate_gobj, (uintptr_t)gGroundStruct.yamabuki.map_head + (intptr_t)offset, 0.0F);
    func_8000DF34(gGroundStruct.yamabuki.gate_gobj);
}

// 0x8010AED8
void grYamabukiGateAddAnimOpen(void)
{
    grYamabukiGateAddAnimOffset((intptr_t)&lGrYamabukiGateOpenAnimJoint);
}

// 0x8010AEFC
void grYamabukiGateAddAnimClose(void)
{
    grYamabukiGateAddAnimOffset((intptr_t)&lGrYamabukiGateCloseAnimJoint);
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
    if (gGroundStruct.yamabuki.gate_wait == 0)
    {
        if (grYamabukiGateCheckPlayersNear() != FALSE)
        {
            grYamabukiGateMakeMonster();

            return;
        }
    }
    else if (--gGroundStruct.yamabuki.gate_wait == 0)
    {
        grYamabukiGateAddAnimOpenEntry();
        func_800269C0(alSound_SFX_YCityGate);
    }
    gGroundStruct.yamabuki.monster_wait--;

    if (gGroundStruct.yamabuki.monster_wait == 0)
    {
        if (gGroundStruct.yamabuki.gate_wait != 0)
        {
            grYamabukiGateAddAnimOpen();
            func_800269C0(alSound_SFX_YCityGate);
        }
        grYamabukiGateMakeMonster();
    }
}

// 0x8010AFF4
void grYamabukiGateUpdateOpen(void)
{
    if (gGroundStruct.yamabuki.monster_gobj == NULL)
    {
        grYamabukiGateSetClosedWait();
    }
    else if (gGroundStruct.yamabuki.is_gate_deny_entry == FALSE)
    {
        itStruct *ip = itGetStruct(gGroundStruct.yamabuki.monster_gobj);

        gGroundStruct.yamabuki.gate_pos.x = DObjGetStruct(gGroundStruct.yamabuki.monster_gobj)->translate.vec.f.x - ip->coll_data.object_coll.width;
        gGroundStruct.yamabuki.gate_pos.y = gMapRooms->room_dobj[3]->translate.vec.f.y;

        if (gGroundStruct.yamabuki.gate_pos.x < 960.0F)
        {
            gGroundStruct.yamabuki.gate_pos.x = 960.0F;

            gGroundStruct.yamabuki.is_gate_deny_entry = TRUE;
        }
        else if (gGroundStruct.yamabuki.gate_pos.x > 1600.0F)
        {
            gGroundStruct.yamabuki.gate_pos.x = 1600.0F;
        }
    }
}

// 0x8010B0AC
void grYamabukiGateClearMonsterGObj(void)
{
    gGroundStruct.yamabuki.monster_gobj = NULL;
}

// 0x8010B0B8
void grYamabukiGateSetClosedWait(void)
{
    gGroundStruct.yamabuki.gate_status = grYamabuki_Gate_Wait;
    gGroundStruct.yamabuki.gate_wait = 1000;

    gGroundStruct.yamabuki.monster_wait = lbRandom_GetIntRange(1000) + 1000;

    grYamabukiGateSetPositionNear();
    grYamabukiGateAddAnimClose();
}

// 0x8010B108
void grYamabukiGateUpdateYakumonoPos(void)
{
    mpCollision_SetYakumonoPosID(3, &gGroundStruct.yamabuki.gate_pos);
}

// 0x8010B130
void grYamabukiGateProcUpdate(GObj *ground_gobj)
{
    switch (gGroundStruct.yamabuki.gate_status)
    {
    case grYamabuki_Gate_Sleep:
        grYamabukiGateUpdateSleep();
        break;

    case grYamabuki_Gate_Wait:
        grYamabukiGateUpdateWait();
        grYamabukiGateUpdateYakumonoPos();
        break;

    case grYamabuki_Gate_Open:
        grYamabukiGateUpdateOpen();
        grYamabukiGateUpdateYakumonoPos();
        break;
    }
}

void grYamabukiMakeGate(void)
{
    GObj *gate_gobj;

    gGroundStruct.yamabuki.gate_gobj = gate_gobj = omMakeGObjSPAfter(GObj_Kind_Ground, NULL, 1, 0x80000000);

    omAddGObjRenderProc(gate_gobj, odRenderDObjTreeDLLinksForGObj, 6, 0x80000000, -1);
    func_8000F590(gate_gobj, (DObjDesc*) ((uintptr_t)gGroundStruct.yamabuki.map_head + (intptr_t)&D_NF_000008A0), NULL, OMMtx_Transform_TraRotRpyR, 0, 0);
    omAddGObjCommonProc(gate_gobj, func_8000DF34, 1, 5);
    grYamabukiGateAddAnimClose();
}

// 0x8010B250
void grYamabukiInitGroundVars(void)
{
    gGroundStruct.yamabuki.map_head = (void*) ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&D_NF_000008A0);

    mpCollision_SetYakumonoOnID(3);

    gGroundStruct.yamabuki.gate_wait = 1;
    gGroundStruct.yamabuki.item_head = (void*) ((uintptr_t)gGroundInfo - (intptr_t)&D_NF_00000014);

    dGrYamabukiMonsterAttackType = 4;

    gGroundStruct.yamabuki.monster_id_prev = It_Kind_GrMonsterEnd - It_Kind_GrMonsterStart + 1;
    gGroundStruct.yamabuki.gate_pos.z = 0.0F;

    grYamabukiGateSetPositionNear();
    grYamabukiMakeGate();
    grYamabukiGateUpdateYakumonoPos();

    gGroundStruct.yamabuki.gate_status = 0;
}

// 0x8010B2EC
GObj* grYamabukiMakeGround(void)
{
    GObj *ground_gobj = omMakeGObjSPAfter(GObj_Kind_Ground, NULL, GObj_LinkID_Ground, 0x80000000);

    omAddGObjCommonProc(ground_gobj, grYamabukiGateProcUpdate, 1, 4);
    grYamabukiInitGroundVars();

    return ground_gobj;
}
