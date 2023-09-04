#include <gr/ground.h>

#include <ft/fighter.h>

enum grJungleTaruCannStatus
{
    grJungle_TaruCann_Move,
    grJungle_TaruCann_Rotate
};

grDObjIndex grCommon_Jungle_TaruCannDObjIndex[/* */] =
{
    { 0x28, 0x1A, 0x00 },
    { 0x1C, 0x00, 0x00 }
};

extern intptr_t D_NF_00000B68;
extern intptr_t D_NF_00000BF8;
extern intptr_t D_NF_00000A98;
extern intptr_t D_NF_00000B20;

// 0x80109CB0
void func_ovl2_80109CB0(GObj *ground_gobj, intptr_t offset)
{
    DObj *dobj = DObjGetStruct(ground_gobj)->child;

    omAddDObjAnimAll(dobj, (ATrack*) ((uintptr_t)gGroundStruct.jungle.map_head + (intptr_t)offset), 0.0F);
    func_8000BFE8(dobj);
    func_8000CCBC(dobj);
}

// 0x80109CFC
void func_ovl2_80109CFC(GObj *ground_gobj)
{
    func_ovl2_80109CB0(ground_gobj, &D_NF_00000B68);
}

// 0x80109D20
void func_ovl2_80109D20(GObj *ground_gobj)
{
    func_ovl2_80109CB0(ground_gobj, &D_NF_00000BF8);
}

// 0x80109D44
void grJungle_TaruCann_UpdateMove(GObj *ground_gobj)
{
    gGroundStruct.jungle.tarucann_wait--;

    if (gGroundStruct.jungle.tarucann_wait == 0)
    {
        s32 modulo;

        gGroundStruct.jungle.tarucann_status = grJungle_TaruCann_Rotate;

        modulo = (lbRandom_GetShort() % 2);

        gGroundStruct.jungle.tarucann_rotate_step = (modulo != 0) ? 0.07F : -0.07F;

        gGroundStruct.jungle.tarucann_wait = 90;
    }
}

// 0x80109DBC
void grJungle_TaruCann_UpdateRotate(GObj *ground_gobj)
{
    DObj *dobj = DObjGetStruct(ground_gobj);

    gGroundStruct.jungle.tarucann_wait--;

    if (gGroundStruct.jungle.tarucann_wait == 0)
    {
        gGroundStruct.jungle.tarucann_status = grJungle_TaruCann_Move;

        gGroundStruct.jungle.tarucann_wait = lbRandom_GetIntRange(180) + 180;

        dobj->rotate.vec.f.z = F_DEG_TO_RAD(0.0F);
    }
    else dobj->rotate.vec.f.z += gGroundStruct.jungle.tarucann_rotate_step;
}

// 0x80109E34
void grJungle_TaruCann_ProcUpdate(GObj *ground_gobj)
{
    switch (gGroundStruct.jungle.tarucann_status)
    {
    case grJungle_TaruCann_Move:
        grJungle_TaruCann_UpdateMove(ground_gobj);
        break;

    case grJungle_TaruCann_Rotate:
        grJungle_TaruCann_UpdateRotate(ground_gobj);
        break;
    }
}

// 0x80109E84
void grJungle_TaruCann_MakeGround(void)
{
    void *map_head;
    GObj *tarucann_gobj;

    map_head = (void*) ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&D_NF_00000A98);
    gGroundStruct.jungle.map_head = map_head;

    gGroundStruct.jungle.tarucann_gobj = tarucann_gobj = omMakeGObjCommon(omGObj_Kind_Ground, NULL, 1, 0x80000000U);

    func_80009DF4(tarucann_gobj, func_80014038, 6, 0x80000000U, -1);

    func_ovl2_80105760(tarucann_gobj, (DObjDesc*) ((intptr_t)&D_NF_00000A98 + (uintptr_t)map_head), NULL, grCommon_Jungle_TaruCannDObjIndex);
    omAddGObjCommonProc(tarucann_gobj, func_8000DF34, 1, 5);

    func_8000BD8C(tarucann_gobj, ((uintptr_t)map_head + (intptr_t)&D_NF_00000B20), 0.0F);
    func_8000DF34(tarucann_gobj);

    omAddGObjCommonProc(tarucann_gobj, grJungle_TaruCann_ProcUpdate, 1, 4);
    func_ovl2_800E1D48(tarucann_gobj, grJungle_TaruCann_CheckFindFighter);

    gGroundStruct.jungle.tarucann_status = grJungle_TaruCann_Move;
    gGroundStruct.jungle.tarucann_wait = lbRandom_GetIntRange(180) + 180;
    gGroundStruct.jungle.tarucann_rotate_step = F_DEG_TO_RAD(0.0F);
}

// 0x80109FB4
GObj* grCommon_Jungle_MakeGround(void)
{
    grJungle_TaruCann_MakeGround();

    return NULL;
}

// 0x80109FD8
bool32 grJungle_TaruCann_CheckFindFighter(GObj *ground_gobj, GObj *fighter_gobj, s32 *kind)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    f32 dist_x;
    f32 dist_y;

    if ((this_fp->tarucann_wait == 0) && (this_fp->status_info.status_id != ftStatus_Common_TaruCann) && !(this_fp->capture_ignore_mask & FTCATCHKIND_MASK_TARUCANN))
    {
        DObj *gr_dobj = DObjGetStruct(ground_gobj);
        DObj *ft_dobj = DObjGetStruct(fighter_gobj);

        if (gr_dobj->translate.vec.f.x < ft_dobj->translate.vec.f.x)
        {
            dist_x = -(gr_dobj->translate.vec.f.x - ft_dobj->translate.vec.f.x);
        }
        else dist_x = gr_dobj->translate.vec.f.x - ft_dobj->translate.vec.f.x;

        if (gr_dobj->translate.vec.f.y < ft_dobj->translate.vec.f.y)
        {
            dist_y = -(gr_dobj->translate.vec.f.y - ft_dobj->translate.vec.f.y);
        }
        else dist_y = gr_dobj->translate.vec.f.y - ft_dobj->translate.vec.f.y;

        if ((dist_x < 280.0F) && (dist_y < 280.0F))
        {
            GObj *other_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

            while (other_gobj != NULL)
            {
                if (other_gobj != fighter_gobj)
                {
                    ftStruct *other_fp = ftGetStruct(other_gobj);

                    if ((other_fp->status_info.status_id == ftStatus_Common_TaruCann) && (ground_gobj == other_fp->status_vars.common.tarucann.tarucann_gobj))
                    {
                        return FALSE;
                    }
                }
                other_gobj = other_gobj->group_gobj_next;
            }
            *kind = gmHitCollision_Environment_TaruCann;

            func_ovl2_80109CFC(ground_gobj);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x8010A104
void grJungle_TaruCann_GetPosition(Vec3f *pos)
{
    *pos = DObjGetStruct(gGroundStruct.jungle.tarucann_gobj)->translate;
}

// 0x8010A12C
f32 grJungle_TaruCann_GetRotate(void)
{
    return DObjGetStruct(gGroundStruct.jungle.tarucann_gobj)->rotate.vec.f.z;
}
