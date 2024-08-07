#include <gr/ground.h>
#include <ft/fighter.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lGRZebesAcidHit;                    // 0x000000BC
extern intptr_t D_NF_000008C0;
extern intptr_t lGRZebesAcidDObjSetup;              // 0x00000B08
extern intptr_t lGRZebesAcidAnimJoint;              // 0x00000B90
extern intptr_t lGRZebesAcidMatAnimJoint;           // 0x00000BD0

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012EA60
grZebesAcid dGRZebesAcidAttributes[/* */] =
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

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum grZebesStatus
{
    nGRZebesAcidStatusWait,
    nGRZebesAcidStatusNormal,
    nGRZebesAcidStatusShake,
    nGRZebesAcidStatusRise
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80108020
void grZebesAcidSetLevelStep(void)
{
    gGRCommonStruct.zebes.acid_level_step = 
    ((dGRZebesAcidAttributes[gGRCommonStruct.zebes.acid_attr_id].acid_level + (mtTrigGetRandomFloat() * 250.0F)) - gGRCommonStruct.zebes.acid_level_current) / 240.0F;
}

// 0x80108088
void grZebesAcidSetRandomWait(void)
{
    s32 index = gGRCommonStruct.zebes.acid_attr_id;

    gGRCommonStruct.zebes.acid_level_wait = dGRZebesAcidAttributes[index].acid_wait_base +
                                          dGRZebesAcidAttributes[index].acid_random_min +
                                          mtTrigGetRandomIntRange(dGRZebesAcidAttributes[index].acid_random_max - dGRZebesAcidAttributes[index].acid_random_min);
}

// 0x801080EC
GObj* grZebesMakeAcid(void)
{
    // Many linker things here
    GObj *map_gobj;
    void *map_head;

    map_head = (void*) ((uintptr_t)gMPCollisionGroundData->map_nodes - (intptr_t)&lGRZebesAcidDObjSetup);
    gGRCommonStruct.zebes.map_head = map_head;

    map_gobj = omMakeGObjSPAfter(nOMObjCommonKindGround, NULL, nOMObjCommonLinkIDGround, GOBJ_LINKORDER_DEFAULT);
    gGRCommonStruct.zebes.map_gobj = map_gobj;

    omAddGObjRenderProc(map_gobj, odRenderDObjTreeDLLinksForGObj, 12, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcSetupCommonDObjs(map_gobj, (DObjDesc*) ((intptr_t)&lGRZebesAcidDObjSetup + (uintptr_t)map_head), NULL, nOMTransformTra, nOMTransformNull, 0);
    gcAddMObjSubAll(map_gobj, (uintptr_t)map_head + (intptr_t)&D_NF_000008C0);
    omAddGObjCommonProc(map_gobj, gcPlayAnimAll, nOMObjProcessKindProc, 5);
    gcAddAnimAll(map_gobj, (uintptr_t)map_head + (intptr_t)&lGRZebesAcidAnimJoint, (uintptr_t)map_head + (intptr_t)&lGRZebesAcidMatAnimJoint, 0.0F);
    gcPlayAnimAll(map_gobj);

    gGRCommonStruct.zebes.acid_status = nGRZebesAcidStatusWait;
    gGRCommonStruct.zebes.acid_level_current = dGRZebesAcidAttributes[15].acid_level;
    gGRCommonStruct.zebes.acid_attr_id = 0;

    gGRCommonStruct.zebes.gr_hit = (void*) (((uintptr_t)gMPCollisionGroundData - (intptr_t)&lGRCommonHeaderStart) + (intptr_t)&lGRZebesAcidHit);

    grZebesAcidSetRandomWait();

    DObjGetStruct(map_gobj)->translate.vec.f.y = gGRCommonStruct.zebes.acid_level_current;

    return map_gobj;
}

// 0x80108240
void grZebesAcidUpdateWait(void)
{
    if (gBattleState->game_status != nGMBattleGameStatusWait)
    {
        gGRCommonStruct.zebes.acid_status = nGRZebesAcidStatusNormal;
    }
}

// 0x80108268
void grZebesAcidUpdateRumble(void)
{
    if (gGRCommonStruct.zebes.rumble_wait == 0)
    {
        efManagerQuakeMakeEffect(0);

        gGRCommonStruct.zebes.rumble_wait = 18;
    }
    gGRCommonStruct.zebes.rumble_wait--;
}

// 0x801082B4
void grZebesAcidUpdateNormal(void)
{
    gGRCommonStruct.zebes.acid_level_wait--;

    if (gGRCommonStruct.zebes.acid_level_wait == 0)
    {
        gGRCommonStruct.zebes.acid_status = nGRZebesAcidStatusShake;
        gGRCommonStruct.zebes.acid_level_wait = 18;
        gGRCommonStruct.zebes.rumble_wait = 0;
    }
}

// 0x801082EC
void grZebesAcidUpdateShake(void)
{
    gGRCommonStruct.zebes.acid_level_wait--;

    if (gGRCommonStruct.zebes.acid_level_wait == 0)
    {
        gGRCommonStruct.zebes.acid_status = nGRZebesAcidStatusRise;
        gGRCommonStruct.zebes.acid_level_wait = 240;

        grZebesAcidSetLevelStep();
    }
    grZebesAcidUpdateRumble();
}

// 0x8010833C
void grZebesAcidUpdateRise(void)
{
    gGRCommonStruct.zebes.acid_level_current += gGRCommonStruct.zebes.acid_level_step;

    DObjGetStruct(gGRCommonStruct.zebes.map_gobj)->translate.vec.f.y = gGRCommonStruct.zebes.acid_level_current;

    gGRCommonStruct.zebes.acid_level_wait--;

    if (gGRCommonStruct.zebes.acid_level_wait == 0)
    {
        gGRCommonStruct.zebes.acid_status = nGRZebesAcidStatusNormal;
        gGRCommonStruct.zebes.acid_attr_id++;

        if (gGRCommonStruct.zebes.acid_attr_id >= ARRAY_COUNT(dGRZebesAcidAttributes))
        {
            gGRCommonStruct.zebes.acid_attr_id = 0;
        }
        grZebesAcidSetRandomWait();
    }
    grZebesAcidUpdateRumble();
}

// 0x801083C4
void grZebesProcUpdate(GObj *ground_gobj)
{
    switch (gGRCommonStruct.zebes.acid_status)
    {
    case nGRZebesAcidStatusWait:
        grZebesAcidUpdateWait();
        break;

    case nGRZebesAcidStatusNormal:
        grZebesAcidUpdateNormal();
        break;

    case nGRZebesAcidStatusShake:
        grZebesAcidUpdateShake();
        break;

    case nGRZebesAcidStatusRise:
        grZebesAcidUpdateRise();
        break;
    }
}

// 0x80108448
GObj* grZebesMakeGround(void)
{
    GObj *ground_gobj = omMakeGObjSPAfter(nOMObjCommonKindGround, NULL, nOMObjCommonLinkIDGround, GOBJ_LINKORDER_DEFAULT);
    GObj *acid_gobj = grZebesMakeAcid();

    omAddGObjCommonProc(ground_gobj, grZebesProcUpdate, nOMObjProcessKindProc, 4);
    ftMainCheckAddGroundHazard(acid_gobj, grZebesAcidCheckGetDamageKind);

    return ground_gobj;
}

// 0x801084AC
sb32 grZebesAcidCheckGetDamageKind(GObj *ground_gobj, GObj *fighter_gobj, grHitbox **gr_hit, s32 *kind)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->acid_wait == 0)
    {
        DObj *dobj = DObjGetStruct(ground_gobj);

        if (DObjGetStruct(fighter_gobj)->translate.vec.f.y < (dobj->translate.vec.f.y + dobj->child->translate.vec.f.y))
        {
            *gr_hit = gGRCommonStruct.zebes.gr_hit;
            *kind = nGMHitEnvironmentAcid;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x8010850C
void grZebesAcidGetLevelInfo(f32 *current, f32 *step)
{
    *current = gGRCommonStruct.zebes.acid_level_current;

    *step = (gGRCommonStruct.zebes.acid_status == nGRZebesAcidStatusRise) ? gGRCommonStruct.zebes.acid_level_step : 0.0F;
}
