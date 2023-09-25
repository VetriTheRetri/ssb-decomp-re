#include <gr/ground.h>

#include <ft/fighter.h>
#include <it/item.h>
#include <mp/mpcoll.h>
#include <gm/battle.h>

enum grYamabukiGateStatus
{
    grYamabuki_Gate_Sleep,
    grYamabuki_Gate_Wait,   // The gates open + lights on state is still considered Gate_Wait
    grYamabuki_Gate_Open    // Fully open when a Pokémon appears
};

extern s32 itMonster_Global_SelectMonsterIndex;

s32 grYamabuki_Monster_AttackType = 4;
u16 grYamabuki_Monster_GPointKind = mpCollision_GPointKind_Monster;
u16 grYamabuki_Monster_Unused[/* */] =
{
    0x0010, 0x0011, 0x0012, 0x000F
};

extern intptr_t D_NF_000009B0;
extern intptr_t D_NF_00000A20;
extern intptr_t D_NF_00000014;
extern intptr_t D_NF_000008A0;

// 0x8010ACD0
void grYamabuki_Gate_UpdateSleep(void)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGroundStruct.yamabuki.gate_status = grYamabuki_Gate_Wait;
        gGroundStruct.yamabuki.monster_wait = lbRandom_GetIntRange(1000) + 1000;
    }
}

// 0x8010AD18
bool32 grYamabuki_Gate_CheckPlayersNear(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if ((fp->ground_or_air == GA_Ground) && ((fp->coll_data.ground_flags & ~MPCOLL_VERTEX_CLL_MASK) == mpCollision_Material_Detect))
        {
            return TRUE;
        }
        else fighter_gobj = fighter_gobj->group_gobj_next;
    }
    return FALSE;
}

// 0x8010AD70
void grYamabuki_Gate_MakeMonster(void)
{
    Vec3f pos;
    Vec3f vel;
    s32 pos_id;
    s32 item_id;

    gGroundStruct.yamabuki.gate_status = grYamabuki_Gate_Open;
    gGroundStruct.yamabuki.is_gate_deny_entry = FALSE;

    mpCollision_GetGPointIDsKind(grYamabuki_Monster_GPointKind, &pos_id);
    mpCollision_GetGPointPositionsID(pos_id, &pos);

    vel.x = vel.y = vel.z = 0.0F;

    if ((itMonster_Global_SelectMonsterIndex == 0) || (itMonster_Global_SelectMonsterIndex >= (It_Kind_GrMonsterMax - It_Kind_GrMonsterStart + 1 + 1)))
    {
        item_id = lbRandom_GetIntRange(It_Kind_GrMonsterMax - It_Kind_GrMonsterStart + 1);

        if (item_id == gGroundStruct.yamabuki.monster_id_prev)
        {
            item_id = (item_id == (It_Kind_GrMonsterMax - It_Kind_GrMonsterStart)) ? 0 : item_id + 1;
        }
        gGroundStruct.yamabuki.monster_id_prev = item_id;
    }
    else item_id = itMonster_Global_SelectMonsterIndex - 1;

    gGroundStruct.yamabuki.monster_gobj = itManager_MakeItemSetupCommon(NULL, item_id + It_Kind_GrMonsterStart, &pos, &vel, ITEM_MASK_SPAWN_GROUND);
}

// 0x8010AE3C
void grYamabuki_Gate_SetPositionFar(void)
{
    gGroundStruct.yamabuki.gate_pos.x = 1600.0F;
    gGroundStruct.yamabuki.gate_pos.y = gMapRooms->room_dobj[3]->translate.vec.f.y;
}

// 0x8010AE68
void grYamabuki_Gate_SetPositionNear(void)
{
    gGroundStruct.yamabuki.gate_pos.x = 960.0F;
    gGroundStruct.yamabuki.gate_pos.y = gMapRooms->room_dobj[3]->translate.vec.f.y;
}

// 0x8010AE94
void grYamabuki_Gate_AddAnimOffset(intptr_t offset)
{
    func_8000BD8C(gGroundStruct.yamabuki.gate_gobj, (uintptr_t)gGroundStruct.yamabuki.map_head + (intptr_t)offset, 0.0F);
    func_8000DF34(gGroundStruct.yamabuki.gate_gobj);
}

// 0x8010AED8
void grYamabuki_Gate_AddAnimOpen(void)
{
    grYamabuki_Gate_AddAnimOffset((intptr_t)&D_NF_000009B0);
}

// 0x8010AEFC
void grYamabuki_Gate_AddAnimClosed(void)
{
    grYamabuki_Gate_AddAnimOffset((intptr_t)&D_NF_00000A20);
}

// 0x8010AF20 - Allow entry inside Pokémon spawn hub?
void grYamabuki_Gate_AddAnimOpenEntry(void)
{
    grYamabuki_Gate_AddAnimOpen();
    grYamabuki_Gate_SetPositionFar();
}

// 0x8010AF48
void grYamabuki_Gate_UpdateWait(void)
{
    if (gGroundStruct.yamabuki.gate_wait == 0)
    {
        if (grYamabuki_Gate_CheckPlayersNear() != FALSE)
        {
            grYamabuki_Gate_MakeMonster();

            return;
        }
    }
    else if (--gGroundStruct.yamabuki.gate_wait == 0)
    {
        grYamabuki_Gate_AddAnimOpenEntry();
        func_800269C0(alSound_SFX_YCityGate);
    }
    gGroundStruct.yamabuki.monster_wait--;

    if (gGroundStruct.yamabuki.monster_wait == 0)
    {
        if (gGroundStruct.yamabuki.gate_wait != 0)
        {
            grYamabuki_Gate_AddAnimOpen();
            func_800269C0(alSound_SFX_YCityGate);
        }
        grYamabuki_Gate_MakeMonster();
    }
}

// 0x8010AFF4
void grYamabuki_Gate_UpdateOpen(void)
{
    if (gGroundStruct.yamabuki.monster_gobj == NULL)
    {
        grYamabuki_Gate_SetClosedWait();
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
void grYamabuki_Monster_ClearGObj(void)
{
    gGroundStruct.yamabuki.monster_gobj = NULL;
}

// 0x8010B0B8
void grYamabuki_Gate_SetClosedWait(void)
{
    gGroundStruct.yamabuki.gate_status = grYamabuki_Gate_Wait;
    gGroundStruct.yamabuki.gate_wait = 1000;

    gGroundStruct.yamabuki.monster_wait = lbRandom_GetIntRange(1000) + 1000;

    grYamabuki_Gate_SetPositionNear();
    grYamabuki_Gate_AddAnimClosed();
}

// 0x8010B108
void grYamabuki_Gate_UpdateYakumonoPos(void)
{
    mpCollision_SetYakumonoPosID(3, &gGroundStruct.yamabuki.gate_pos);
}

// 0x8010B130
void grYamabuki_Gate_ProcUpdate(GObj *ground_gobj)
{
    switch (gGroundStruct.yamabuki.gate_status)
    {
    case grYamabuki_Gate_Sleep:
        grYamabuki_Gate_UpdateSleep();
        break;

    case grYamabuki_Gate_Wait:
        grYamabuki_Gate_UpdateWait();
        grYamabuki_Gate_UpdateYakumonoPos();
        break;

    case grYamabuki_Gate_Open:
        grYamabuki_Gate_UpdateOpen();
        grYamabuki_Gate_UpdateYakumonoPos();
        break;
    }
}

extern intptr_t D_NF_000008A0;

void grYamabuki_Gate_MakeGround(void)
{
    GObj *gate_gobj;

    gGroundStruct.yamabuki.gate_gobj = gate_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000U);

    omGObjAddProcRender(gate_gobj, func_80014768, 6, 0x80000000U, -1);
    func_8000F590(gate_gobj, (DObjDesc*) ((uintptr_t)gGroundStruct.yamabuki.map_head + (intptr_t)&D_NF_000008A0), NULL, 0x1BU, 0, 0);
    omAddGObjCommonProc(gate_gobj, func_8000DF34, 1, 5);
    grYamabuki_Gate_AddAnimClosed();
}

// 0x8010B250
void grCommon_Yamabuki_InitGroundVars(void)
{
    gGroundStruct.yamabuki.map_head = (void*) ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&D_NF_000008A0);

    mpCollision_SetYakumonoOnID(3);

    gGroundStruct.yamabuki.gate_wait = 1;
    gGroundStruct.yamabuki.item_head = (void*) ((uintptr_t)gGroundInfo - (intptr_t)&D_NF_00000014);

    grYamabuki_Monster_AttackType = 4;

    gGroundStruct.yamabuki.monster_id_prev = 5;
    gGroundStruct.yamabuki.gate_pos.z = 0.0F;

    grYamabuki_Gate_SetPositionNear();
    grYamabuki_Gate_MakeGround();
    grYamabuki_Gate_UpdateYakumonoPos();

    gGroundStruct.yamabuki.gate_status = 0;
}

// 0x8010B2EC
GObj* grCommon_Yamabuki_MakeGround(void)
{
    GObj *ground_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000U);

    omAddGObjCommonProc(ground_gobj, grYamabuki_Gate_ProcUpdate, 1, 4);
    grCommon_Yamabuki_InitGroundVars();

    return ground_gobj;
}
