#include <gr/ground.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lGRYosterMapHead;                   // 0x00000100
extern intptr_t D_NF_000001E0;
extern intptr_t D_NF_000004B8;
extern intptr_t lGRYosterCloudDisplayList;          // 0x00000580
extern intptr_t lGRYosterCloudSolidMatAnimJoint;    // 0x00000670
extern intptr_t lGRYosterCloudEvaporateMatAnimJoint;// 0x00000690
extern intptr_t lGRYosterParticleBankScriptsLo;      // 0x00B22980
extern intptr_t lGRYosterParticleBankScriptsHi;      // 0x00B22A00
extern intptr_t lGRYosterParticleBankTexturesLo;     // 0x00B22A00
extern intptr_t lGRYosterParticleBankTexturesHi;     // 0x00B22C30

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012EB20
intptr_t dGRYosterCloudMatAnimJoints[/* */] = { &lGRYosterCloudSolidMatAnimJoint, &lGRYosterCloudEvaporateMatAnimJoint };

// 0x8012EB28
u8 dGRYosterCloudLineIDs[/* */] = { 0x1, 0x2, 0x3 };

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum grYosterCloudStatus
{
    nGRYosterCloudStatusSolid,
    nGRYosterCloudStatusEvaporate
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80108550
LBGenerator* grYosterCloudVaporMakeEffect(Vec3f *pos)
{
    LBGenerator *gtor = LBParticleMakeGenerator(gGRCommonStruct.yoster.particle_bank_id, 0);

    if (gtor != NULL)
    {
        gtor->pos.x = pos->x;
        gtor->pos.y = pos->y;
        gtor->pos.z = pos->z;
    }
    return gtor;
}

// 0x801085A8
sb32 grYosterCheckFighterCloudStand(s32 cloud_id)
{
    GObj *fighter_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];
    s32 line_id = dGRYosterCloudLineIDs[cloud_id];

    while (fighter_gobj != NULL)
    {
        FTStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->ga == nMPKineticsGround)
        {
            if ((fp->coll_data.ground_line_id != -2) && (mpCollisionSetDObjNoID(fp->coll_data.ground_line_id) == line_id))
            {
                return TRUE;
            }
        }
        fighter_gobj = fighter_gobj->link_next;
    }
    return FALSE;
}

// 0x80108634
void grYosterUpdateCloudSolid(s32 cloud_id)
{
    Vec3f pos;
    DObj *dobj;

    if (gGRCommonStruct.yoster.clouds[cloud_id].dobj[0]->mobj->anim_wait == AOBJ_ANIM_NULL)
    {
        if (gGRCommonStruct.yoster.clouds[cloud_id].is_cloud_line_active == FALSE)
        {
            mpCollisionSetYakumonoOnID(dGRYosterCloudLineIDs[cloud_id]);

            gGRCommonStruct.yoster.clouds[cloud_id].is_cloud_line_active = TRUE;
        }
        if (gGRCommonStruct.yoster.clouds[cloud_id].pressure_timer == 0)
        {
            gGRCommonStruct.yoster.clouds[cloud_id].status = nGRYosterCloudStatusEvaporate;
            gGRCommonStruct.yoster.clouds[cloud_id].anim_id = nGRYosterCloudStatusEvaporate;
            gGRCommonStruct.yoster.clouds[cloud_id].evaporate_wait = 180;

            pos = DObjGetStruct(gGRCommonStruct.yoster.clouds[cloud_id].gobj)->translate.vec.f;

            pos.x += (-750.0F);
            pos.y += (-350.0F);

            grYosterCloudVaporMakeEffect(&pos);

            func_800269C0_275C0(nSYAudioFGMYosterCloudVapor);
        }
        else
        {
            if (grYosterCheckFighterCloudStand(cloud_id) != FALSE)
            {
                if (gGRCommonStruct.yoster.clouds[cloud_id].pressure_timer == -1)
                {
                    gGRCommonStruct.yoster.clouds[cloud_id].pressure_timer = 120;
                }
                gGRCommonStruct.yoster.clouds[cloud_id].pressure += 5.0F;

                if (gGRCommonStruct.yoster.clouds[cloud_id].pressure > 180.0F)
                {
                    gGRCommonStruct.yoster.clouds[cloud_id].pressure = 180.0F;
                }
            }
            else
            {
                gGRCommonStruct.yoster.clouds[cloud_id].pressure_timer = -1;
                gGRCommonStruct.yoster.clouds[cloud_id].pressure -= 5.0F;

                if (gGRCommonStruct.yoster.clouds[cloud_id].pressure < 0.0F)
                {
                    gGRCommonStruct.yoster.clouds[cloud_id].pressure = 0.0F;
                }
            }
            if (gGRCommonStruct.yoster.clouds[cloud_id].pressure_timer > 0)
            {
                gGRCommonStruct.yoster.clouds[cloud_id].pressure_timer--;
            }
        }
    }
    dobj = DObjGetStruct(gGRCommonStruct.yoster.clouds[cloud_id].gobj);
    dobj->translate.vec.f.y = gGRCommonStruct.yoster.clouds[cloud_id].alt - gGRCommonStruct.yoster.clouds[cloud_id].pressure;

    mpCollisionSetYakumonoPosID(dGRYosterCloudLineIDs[cloud_id], &dobj->translate.vec.f);
}

// 0x80108814
void grYosterUpdateCloudEvaporate(s32 cloud_id)
{
    if (gGRCommonStruct.yoster.clouds[cloud_id].is_cloud_line_active != FALSE)
    {
        mpCollisionSetYakumonoOffID(dGRYosterCloudLineIDs[cloud_id]);

        gGRCommonStruct.yoster.clouds[cloud_id].is_cloud_line_active = FALSE;
    }
    if (gGRCommonStruct.yoster.clouds[cloud_id].evaporate_wait == 0)
    {
        gGRCommonStruct.yoster.clouds[cloud_id].status = nGRYosterCloudStatusSolid;
        gGRCommonStruct.yoster.clouds[cloud_id].anim_id = nGRYosterCloudStatusSolid;
        gGRCommonStruct.yoster.clouds[cloud_id].pressure_timer = -1;
        gGRCommonStruct.yoster.clouds[cloud_id].pressure = 0.0F;
    }
    else gGRCommonStruct.yoster.clouds[cloud_id].evaporate_wait--;
}

// 0x80108890
void grYosterUpdateCloudAnim(s32 cloud_id)
{
    s8 anim_id = gGRCommonStruct.yoster.clouds[cloud_id].anim_id;

    if (anim_id != -1)
    {
        void *map_head = gGRCommonStruct.yoster.map_head;
        s32 i;

        for (i = 0; i < ARRAY_COUNT(gGRCommonStruct.yoster.clouds[cloud_id].dobj); i++)
        {
            DObj *dobj = gGRCommonStruct.yoster.clouds[cloud_id].dobj[i];

            lbCommonAddDObjAnimAll(dobj, NULL, (void*) ((intptr_t)dGRYosterCloudMatAnimJoints[anim_id] + (uintptr_t)map_head), 0.0F);
            gcPlayDObjAnim(dobj);
        }
        gGRCommonStruct.yoster.clouds[cloud_id].anim_id = -1;
    }
}

// 0x80108960
void grYosterProcUpdate(GObj *ground_gobj)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gGRCommonStruct.yoster.clouds); i++)
    {
        switch (gGRCommonStruct.yoster.clouds[i].status)
        {
        case nGRYosterCloudStatusSolid:
            grYosterUpdateCloudSolid(i);
            break;

        case nGRYosterCloudStatusEvaporate:
            grYosterUpdateCloudEvaporate(i);
            break;
        }
        grYosterUpdateCloudAnim(i);
    }
}

// 0x801089F4
void grYosterInitAll(void)
{
    DObj *cloud_dobj;
    GObj *map_gobj;
    DObj *coll_dobj;
    void *map_head;
    s32 i, j;

    map_head = (uintptr_t)gMPCollisionGroundData->map_nodes - (intptr_t)&lGRYosterMapHead;
    gGRCommonStruct.yoster.map_head = map_head;

    for (i = 0; i < ARRAY_COUNT(gGRCommonStruct.yoster.clouds); i++)
    {
        map_gobj = gcMakeGObjSPAfter(nGCCommonKindGround, NULL, nGCCommonLinkIDGround, GOBJ_LINKORDER_DEFAULT);

        gGRCommonStruct.yoster.clouds[i].gobj = map_gobj;

        gcAddGObjDisplay(map_gobj, gcDrawDObjTreeForGObj, 6, GOBJ_DLLINKORDER_DEFAULT, -1);
        gcSetupCustomDObjs
        (
            map_gobj, 
            (DObjDesc*) ((intptr_t)&lGRYosterMapHead + (uintptr_t)map_head), 
            NULL, 
            nGCTransformTra,    // Make this nGCTransformTraRotRpyRSca to see cloud scale animation
            nGCTransformNull, 
            nGCTransformNull
        );
        gcAddGObjProcess(map_gobj, gcPlayAnimAll, nGCProcessKindProc, 5);

        gcAddAnimJointAll(map_gobj, (uintptr_t)map_head + (intptr_t)&D_NF_000001E0, 0);

        coll_dobj = DObjGetStruct(map_gobj);
        coll_dobj->translate.vec.f = gMPCollisionYakumonoDObjs->yakumono_dobj[dGRYosterCloudLineIDs[i]]->translate.vec.f;

        gGRCommonStruct.yoster.clouds[i].alt = coll_dobj->translate.vec.f.y;

        coll_dobj = coll_dobj->child;

        for (j = 0; j < ARRAY_COUNT(gGRCommonStruct.yoster.clouds[i].dobj); j++, coll_dobj = coll_dobj->sib_next)
        {
            cloud_dobj = gcAddChildForDObj(coll_dobj, (uintptr_t)map_head + (intptr_t)&lGRYosterCloudDisplayList);
            gGRCommonStruct.yoster.clouds[i].dobj[j] = cloud_dobj;

            gcAddXObjForDObjFixed(cloud_dobj, nGCTransformTra, 0);
            gcAddXObjForDObjFixed(cloud_dobj, nGCTransform48, 0);
            lbCommonAddMObjForTreeDObjs(cloud_dobj, (uintptr_t)map_head + (intptr_t)&D_NF_000004B8);
        }
        gcPlayAnimAll(map_gobj);

        gGRCommonStruct.yoster.clouds[i].status = nGRYosterCloudStatusSolid;
        gGRCommonStruct.yoster.clouds[i].anim_id = nGRYosterCloudStatusSolid;
        gGRCommonStruct.yoster.clouds[i].pressure_timer = -1;
        gGRCommonStruct.yoster.clouds[i].is_cloud_line_active = FALSE;
        gGRCommonStruct.yoster.clouds[i].pressure = 0.0F;

        mpCollisionSetYakumonoOnID(dGRYosterCloudLineIDs[i]);
    }
    gGRCommonStruct.yoster.particle_bank_id = efAllocGetAddParticleBankID(&lGRYosterParticleBankScriptsLo, &lGRYosterParticleBankScriptsHi, &lGRYosterParticleBankTexturesLo, &lGRYosterParticleBankTexturesHi);
}

// 0x80108C80
GObj* grYosterMakeGround(void)
{
    GObj *ground_gobj = gcMakeGObjSPAfter(nGCCommonKindGround, NULL, nGCCommonLinkIDGround, GOBJ_LINKORDER_DEFAULT);

    grYosterInitAll();
    gcAddGObjProcess(ground_gobj, grYosterProcUpdate, nGCProcessKindProc, 4);

    return ground_gobj;
}
