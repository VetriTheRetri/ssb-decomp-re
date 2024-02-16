#include <gr/ground.h>

#include <ft/fighter.h>
#include <gm/battle.h>

enum grZebesStatus
{
    grStatus_Zebes_AcidWait,
    grStatus_Zebes_AcidNormal,
    grStatus_Zebes_AcidShake,
    grStatus_Zebes_AcidRise
};

grZebesAcid grCommon_Zebes_AcidAttr[] =
{
    { 1200, 60, 70, -3600.0F },
    {  180, 60, 70, -1000.0F },
    {   60, 60, 70,  -200.0F },
    {   60, 60, 70,  1800.0F },
    {   60, 60, 70, -3600.0F },
    {  120,  0,  0,  2600.0F },
    {   30,  0,  0, -1000.0F },
    { 1200, 60, 70,  -500.0F },
    {  600, 60, 70,  -400.0F },
    {  100, 60, 70,   800.0F },
    { 1200, 60, 70,  1200.0F },
    {   60,  0,  0, -1000.0F },
    {   60, 60, 70,     0.0F },
    {   60, 60, 70, -1000.0F },
    {  120, 60, 70,   500.0F },
    {  200, 60, 70, -3000.0F }
};

// 0x80108020
void grCommon_Zebes_SetAcidLevelStep(void)
{
    gGroundStruct.zebes.acid_level_step = 
    ((grCommon_Zebes_AcidAttr[gGroundStruct.zebes.acid_level_index].acid_level + (lbRandom_GetFloat() * 250.0F)) - gGroundStruct.zebes.acid_level_current) / 240.0F;
}

// 0x80108088
void grCommon_Zebes_SetAcidRandomWait(void)
{
    s32 index = gGroundStruct.zebes.acid_level_index;

    gGroundStruct.zebes.acid_level_wait = grCommon_Zebes_AcidAttr[index].acid_random_add +
                                          grCommon_Zebes_AcidAttr[index].acid_random1 +
                                          lbRandom_GetIntRange(grCommon_Zebes_AcidAttr[index].acid_random2 - grCommon_Zebes_AcidAttr[index].acid_random1);
}

extern intptr_t D_NF_00000014;
extern intptr_t D_NF_000000BC;
extern intptr_t D_NF_000008C0;
extern intptr_t D_NF_00000B08;
extern intptr_t D_NF_00000B90;
extern intptr_t D_NF_00000BD0;

// 0x801080EC
GObj* grCommon_Zebes_MakeAcid(void)
{
    // Many linker things here
    GObj *map_gobj;
    void *map_head;

    map_head = (void*) ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&D_NF_00000B08);
    gGroundStruct.sector.map_head = map_head;

    map_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000);
    gGroundStruct.sector.map_gobj = map_gobj;

    omAddGObjRenderProc(map_gobj, func_80014768, 0xC, 0x80000000U, -1);
    func_8000F590(map_gobj, (intptr_t)&D_NF_00000B08 + (uintptr_t)map_head, NULL, 0x12U, 0, 0);
    func_8000F8F4(map_gobj, (uintptr_t)map_head + (intptr_t)&D_NF_000008C0);
    omAddGObjCommonProc(map_gobj, func_8000DF34, 1, 5);
    func_8000BED8(map_gobj, (uintptr_t)map_head + (intptr_t)&D_NF_00000B90, (uintptr_t)map_head + (intptr_t)&D_NF_00000BD0, 0.0F);
    func_8000DF34(map_gobj);

    gGroundStruct.zebes.acid_status = 0;
    gGroundStruct.zebes.acid_level_current = grCommon_Zebes_AcidAttr[15].acid_level;
    gGroundStruct.zebes.acid_level_index = 0;

    gGroundStruct.zebes.gr_hit = (void*) (((uintptr_t)gGroundInfo - (intptr_t)&D_NF_00000014) + (intptr_t)&D_NF_000000BC);

    grCommon_Zebes_SetAcidRandomWait();

    DObjGetStruct(map_gobj)->translate.vec.f.y = gGroundStruct.zebes.acid_level_current;

    return map_gobj;
}

// 0x80108240
void grCommon_Zebes_UpdateAcidWait(void)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGroundStruct.zebes.acid_status = grStatus_Zebes_AcidNormal;
    }
}

// 0x80108268
void grCommon_Zebes_UpdateAcidRumble(void)
{
    if (gGroundStruct.zebes.rumble_wait == 0)
    {
        efParticle_Quake_MakeEffect(0);

        gGroundStruct.zebes.rumble_wait = 18;
    }
    gGroundStruct.zebes.rumble_wait--;
}

// 0x801082B4
void grCommon_Zebes_UpdateAcidNormal(void)
{
    gGroundStruct.zebes.acid_level_wait--;

    if (gGroundStruct.zebes.acid_level_wait == 0)
    {
        gGroundStruct.zebes.acid_status = grStatus_Zebes_AcidShake;
        gGroundStruct.zebes.acid_level_wait = 18;
        gGroundStruct.zebes.rumble_wait = 0;
    }
}

// 0x801082EC
void grCommon_Zebes_UpdateAcidShake(void)
{
    gGroundStruct.zebes.acid_level_wait--;

    if (gGroundStruct.zebes.acid_level_wait == 0)
    {
        gGroundStruct.zebes.acid_status = grStatus_Zebes_AcidRise;
        gGroundStruct.zebes.acid_level_wait = 240;

        grCommon_Zebes_SetAcidLevelStep();
    }
    grCommon_Zebes_UpdateAcidRumble();
}

// 0x8010833C
void grCommon_Zebes_UpdateAcidRise(void)
{
    gGroundStruct.zebes.acid_level_current += gGroundStruct.zebes.acid_level_step;

    DObjGetStruct(gGroundStruct.zebes.map_gobj)->translate.vec.f.y = gGroundStruct.zebes.acid_level_current;

    gGroundStruct.zebes.acid_level_wait--;

    if (gGroundStruct.zebes.acid_level_wait == 0)
    {
        gGroundStruct.zebes.acid_status = grStatus_Zebes_AcidNormal;
        gGroundStruct.zebes.acid_level_index++;

        if (gGroundStruct.zebes.acid_level_index > (ARRAY_COUNT(grCommon_Zebes_AcidAttr) - 1))
        {
            gGroundStruct.zebes.acid_level_index = 0;
        }
        grCommon_Zebes_SetAcidRandomWait();
    }
    grCommon_Zebes_UpdateAcidRumble();
}

// 0x801083C4
void grCommon_Zebes_ProcUpdate(GObj *ground_gobj)
{
    switch (gGroundStruct.zebes.acid_status)
    {
    case grStatus_Zebes_AcidWait:
        grCommon_Zebes_UpdateAcidWait();
        break;

    case grStatus_Zebes_AcidNormal:
        grCommon_Zebes_UpdateAcidNormal();
        break;

    case grStatus_Zebes_AcidShake:
        grCommon_Zebes_UpdateAcidShake();
        break;

    case grStatus_Zebes_AcidRise:
        grCommon_Zebes_UpdateAcidRise();
        break;
    }
}

// 0x80108448
GObj* grCommon_Zebes_MakeGround(void)
{
    GObj *ground_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000);
    GObj *acid_gobj = grCommon_Zebes_MakeAcid();

    omAddGObjCommonProc(ground_gobj, grCommon_Zebes_ProcUpdate, 1, 4);
    ftMain_CheckSetMapEnvironmentGObj(acid_gobj, grCommon_Zebes_GetAcidHitInfo);

    return ground_gobj;
}

// 0x801084AC
sb32 grCommon_Zebes_GetAcidHitInfo(GObj *ground_gobj, GObj *fighter_gobj, grHitbox **gr_hit, s32 *kind)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->acid_wait == 0)
    {
        DObj *dobj = DObjGetStruct(ground_gobj);

        if (DObjGetStruct(fighter_gobj)->translate.vec.f.y < (dobj->translate.vec.f.y + dobj->child->translate.vec.f.y))
        {
            *gr_hit = gGroundStruct.zebes.gr_hit;
            *kind = gmHitEnvironment_Kind_Acid;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x8010850C
void grCommon_Zebes_GetAcidLevelInfo(f32 *current, f32 *step)
{
    *current = gGroundStruct.zebes.acid_level_current;

    *step = (gGroundStruct.zebes.acid_status == grStatus_Zebes_AcidRise) ? gGroundStruct.zebes.acid_level_step : 0.0F;
}
