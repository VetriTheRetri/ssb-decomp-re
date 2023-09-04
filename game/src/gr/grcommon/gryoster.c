#include <gr/ground.h>

#include <ft/fighter.h>

u8 grCommon_Yoster_CloudLineIDs[/* */] = { 0x1, 0x2, 0x3 };
intptr_t D_ovl2_8012EB20       [/* */] = { 0x0670, 0x0690 };

enum grYosterCloudStatus
{
    grYoster_Cloud_Solid,
    grYoster_Cloud_Evaporate
};

// 0x80108550
efGenerator* efParticle_YosterCloudVapor_MakeEffect(Vec3f *pos)
{
    efGenerator *efgen = func_ovl0_800D35DC(gGroundStruct.yoster.effect_bank_index, 0);

    if (efgen != NULL)
    {
        efgen->pos.x = pos->x;
        efgen->pos.y = pos->y;
        efgen->pos.z = pos->z;
    }
    return efgen;
}

// 0x801085A8
bool32 grCommon_Yoster_CheckFighterCloudStand(s32 index)
{
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];
    s32 line_id = grCommon_Yoster_CloudLineIDs[index];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->ground_or_air == GA_Ground)
        {
            if ((fp->coll_data.ground_line_id != -2) && (mpCollision_SetDObjNoID(fp->coll_data.ground_line_id) == line_id))
            {
                return TRUE;
            }
        }
        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    return FALSE;
}

// 0x80108634
void grCommon_Yoster_UpdateCloudSolid(s32 cloud_id)
{
    Vec3f pos;
    DObj *dobj;

    if (gGroundStruct.yoster.clouds[cloud_id].dobj[0]->mobj->unk_mobj_0x98 == (f32)FLOAT_NEG_MAX)
    {
        if (gGroundStruct.yoster.clouds[cloud_id].is_cloud_line_active == FALSE)
        {
            mpCollision_SetYakumonoOnID(grCommon_Yoster_CloudLineIDs[cloud_id]);

            gGroundStruct.yoster.clouds[cloud_id].is_cloud_line_active = TRUE;
        }
        if (gGroundStruct.yoster.clouds[cloud_id].pressure_timer == 0)
        {
            gGroundStruct.yoster.clouds[cloud_id].status = grYoster_Cloud_Evaporate;
            gGroundStruct.yoster.clouds[cloud_id].anim_id = grYoster_Cloud_Evaporate;
            gGroundStruct.yoster.clouds[cloud_id].evaporate_wait = 180;

            pos = DObjGetStruct(gGroundStruct.yoster.clouds[cloud_id].gobj)->translate;

            pos.x += (-750.0F);
            pos.y += (-350.0F);

            efParticle_YosterCloudVapor_MakeEffect(&pos);

            func_800269C0(alSound_SFX_YosterCloudVapor);
        }
        else
        {
            if (grCommon_Yoster_CheckFighterCloudStand(cloud_id) != FALSE)
            {
                if (gGroundStruct.yoster.clouds[cloud_id].pressure_timer == -1)
                {
                    gGroundStruct.yoster.clouds[cloud_id].pressure_timer = 120;
                }
                gGroundStruct.yoster.clouds[cloud_id].pressure += 5.0F;

                if (gGroundStruct.yoster.clouds[cloud_id].pressure > 180.0F)
                {
                    gGroundStruct.yoster.clouds[cloud_id].pressure = 180.0F;
                }
            }
            else
            {
                gGroundStruct.yoster.clouds[cloud_id].pressure_timer = -1;
                gGroundStruct.yoster.clouds[cloud_id].pressure -= 5.0F;

                if (gGroundStruct.yoster.clouds[cloud_id].pressure < 0.0F)
                {
                    gGroundStruct.yoster.clouds[cloud_id].pressure = 0.0F;
                }
            }
            if (gGroundStruct.yoster.clouds[cloud_id].pressure_timer > 0)
            {
                gGroundStruct.yoster.clouds[cloud_id].pressure_timer--;
            }
        }
    }
    dobj = DObjGetStruct(gGroundStruct.yoster.clouds[cloud_id].gobj);
    dobj->translate.vec.f.y = gGroundStruct.yoster.clouds[cloud_id].altitude - gGroundStruct.yoster.clouds[cloud_id].pressure;

    mpCollision_SetYakumonoPosID(grCommon_Yoster_CloudLineIDs[cloud_id], &dobj->translate);
}

// 0x80108814
void grCommon_Yoster_UpdateCloudEvaporate(s32 cloud_id)
{
    if (gGroundStruct.yoster.clouds[cloud_id].is_cloud_line_active != FALSE)
    {
        mpCollision_SetYakumonoOffID(grCommon_Yoster_CloudLineIDs[cloud_id]);

        gGroundStruct.yoster.clouds[cloud_id].is_cloud_line_active = FALSE;
    }
    if (gGroundStruct.yoster.clouds[cloud_id].evaporate_wait == 0)
    {
        gGroundStruct.yoster.clouds[cloud_id].status = grYoster_Cloud_Solid;
        gGroundStruct.yoster.clouds[cloud_id].anim_id = grYoster_Cloud_Solid;
        gGroundStruct.yoster.clouds[cloud_id].pressure_timer = -1;
        gGroundStruct.yoster.clouds[cloud_id].pressure = 0.0F;
    }
    else gGroundStruct.yoster.clouds[cloud_id].evaporate_wait--;
}

// 0x80108890
void grCommon_Yoster_UpdateCloudAnim(s32 cloud_id)
{
    s8 anim_id = gGroundStruct.yoster.clouds[cloud_id].anim_id;

    if (anim_id != -1)
    {
        void *map_head = gGroundStruct.yoster.map_head;
        s32 i;

        for (i = 0; i < ARRAY_COUNT(gGroundStruct.yoster.clouds[cloud_id].dobj); i++)
        {
            DObj *dobj = gGroundStruct.yoster.clouds[cloud_id].dobj[i];

            func_ovl0_800C88AC(dobj, NULL, (void*) ((intptr_t)D_ovl2_8012EB20[anim_id] + (uintptr_t)map_head), 0.0F);
            func_8000CCBC(dobj);
        }
        gGroundStruct.yoster.clouds[cloud_id].anim_id = -1;
    }
}

// 0x80108960
void grCommon_Yoster_ProcUpdate(GObj *ground_gobj)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gGroundStruct.yoster.clouds); i++)
    {
        switch (gGroundStruct.yoster.clouds[i].status)
        {
        case grYoster_Cloud_Solid:
            grCommon_Yoster_UpdateCloudSolid(i);
            break;

        case grYoster_Cloud_Evaporate:
            grCommon_Yoster_UpdateCloudEvaporate(i);
            break;
        }
        grCommon_Yoster_UpdateCloudAnim(i);
    }
}

extern intptr_t D_NF_00000100;
extern intptr_t D_NF_000001E0;
extern intptr_t D_NF_000004B8;
extern intptr_t D_NF_00000580;
extern intptr_t D_NF_00B22980;
extern intptr_t D_NF_00B22A00;
extern intptr_t D_NF_00B22A00_other;
extern intptr_t D_NF_00B22C30;

// 0x801089F4
void grCommon_Yoster_InitGroundVars(void)
{
    DObj *cloud_dobj;
    GObj *map_gobj;
    DObj *coll_dobj;
    void *map_head;
    s32 i, j;

    map_head = (uintptr_t)gGroundInfo->map_nodes - (intptr_t)&D_NF_00000100;
    gGroundStruct.yoster.map_head = map_head;

    for (i = 0; i < ARRAY_COUNT(gGroundStruct.yoster.clouds); i++)
    {
        map_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000);

        gGroundStruct.yoster.clouds[i].gobj = map_gobj;

        func_80009DF4(map_gobj, func_80014038, 6, 0x80000000U, -1);
        func_8000F590(map_gobj, (intptr_t)&D_NF_00000100 + (uintptr_t)map_head, NULL, 0x12, 0, 0); // Make this 0x1C to add static cloud animation

        omAddGObjCommonProc(map_gobj, func_8000DF34, 1, 5);

        func_8000BD8C(map_gobj, (uintptr_t)map_head + (intptr_t)&D_NF_000001E0, 0);

        coll_dobj = DObjGetStruct(map_gobj);
        coll_dobj->translate.vec.f = gMapRooms->room_dobj[grCommon_Yoster_CloudLineIDs[i]]->translate;

        gGroundStruct.yoster.clouds[i].altitude = coll_dobj->translate.vec.f.y;

        coll_dobj = coll_dobj->child;

        for (j = 0; j < ARRAY_COUNT(gGroundStruct.yoster.clouds[i].dobj); j++, coll_dobj = coll_dobj->sib_next)
        {
            cloud_dobj = func_800093F4(coll_dobj, (uintptr_t)map_head + (intptr_t)&D_NF_00000580);
            gGroundStruct.yoster.clouds[i].dobj[j] = cloud_dobj;

            func_80008CC0(cloud_dobj, 0x12U, 0);
            func_80008CC0(cloud_dobj, 0x30U, 0);
            func_ovl0_800C9228(cloud_dobj, (uintptr_t)map_head + (intptr_t)&D_NF_000004B8);
        }
        func_8000DF34(map_gobj);

        gGroundStruct.yoster.clouds[i].status = grYoster_Cloud_Solid;
        gGroundStruct.yoster.clouds[i].anim_id = 0;
        gGroundStruct.yoster.clouds[i].pressure_timer = -1;
        gGroundStruct.yoster.clouds[i].is_cloud_line_active = FALSE;
        gGroundStruct.yoster.clouds[i].pressure = 0.0F;

        mpCollision_SetYakumonoOnID(grCommon_Yoster_CloudLineIDs[i]);

    }
    gGroundStruct.yoster.effect_bank_index = func_ovl2_801159F8(&D_NF_00B22980, &D_NF_00B22A00, &D_NF_00B22A00_other, &D_NF_00B22C30);
}

// 0x80108C80
GObj* grCommon_Yoster_MakeGround(void)
{
    GObj *ground_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000);

    grCommon_Yoster_InitGroundVars();
    omAddGObjCommonProc(ground_gobj, grCommon_Yoster_ProcUpdate, 1, 4);

    return ground_gobj;
}
