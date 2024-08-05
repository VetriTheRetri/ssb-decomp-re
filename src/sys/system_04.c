#include <sys/obj.h>

/*********** data **********/
s32 D_8003B930 = 10;
s32 D_8003B934 = 10;
s32 D_8003B938 = 10;
s32 D_8003B93C = 10;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

void gcSetMatAnimJointRateAll(GObj *gobj, f32 anim_rate)
{
    MObj *mobj;
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL) 
    {
        mobj = dobj->mobj;

        while (mobj != NULL)
        {
            mobj->anim_rate = anim_rate;
            mobj            = mobj->next;
        }
        dobj = func_8000BAA0(dobj);
    }
}

void gcRemoveAnimJointAll(GObj *gobj)
{
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL) 
    {
        omRemoveAObjFromDObj(dobj);
        dobj = func_8000BAA0(dobj);
    }
}

void gcRemoveAnimAll(GObj *gobj) 
{
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        MObj *mobj;

        omRemoveAObjFromDObj(dobj);

        mobj = dobj->mobj;

        while (mobj != NULL) 
        {
            omRemoveAObjFromMObj(mobj);
            mobj = mobj->next;
        }
        dobj = func_8000BAA0(dobj);
    }
}

void gcRemoveMatAnimJointAll(GObj *gobj) 
{
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        MObj *mobj = dobj->mobj;

        while (mobj != NULL) 
        {
            omRemoveAObjFromMObj(mobj);
            mobj = mobj->next;
        }
        dobj = func_8000BAA0(dobj);
    }
}

void gcAddDObjAnimJoint(DObj *dobj, AObjAnimJoint *anim_joint, f32 anim_frame) 
{
    AObj *aobj = dobj->aobj;

    while (aobj != NULL) 
    {
        aobj->kind = 0;
        aobj       = aobj->next;
    }
    dobj->anim_joint = anim_joint;
    dobj->anim_remain = -F32_HALF;
    dobj->anim_frame  = anim_frame;
}

void gcAddMObjMatAnimJoint(MObj *mobj, AObjAnimJoint *anim_joint, f32 anim_frame) 
{
    AObj *aobj = mobj->aobj;

    while (aobj != NULL) 
    {
        aobj->kind = 0;
        aobj       = aobj->next;
    }
    mobj->matanim_joint = anim_joint;
    mobj->anim_remain = -F32_HALF;
    mobj->anim_frame  = anim_frame;
}

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000BD8C_C98C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000BE28_CA28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000BED8_CAD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000BFE8_CBE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000CA28_D628.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000CADC_D6DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000CB94_D794.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000CC40_D840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000CCBC_D8BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000CF6C_DB6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000DA40_E640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000DF34_EB34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000E008_EC08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000E044_EC44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000E084_EC84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000E0F4_ECF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000E164_ED64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000E428_F028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000E8A8_F4A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000EC64_F864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000EE40_FA40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000F058_FC58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000F090_FC90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000F0C0_FCC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000F0F0_FCF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000F120_FD20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000F2FC_FEFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000F364_FF64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000F590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000F720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000F8F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000F988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000FA3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_8000FA74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_80010344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_80010580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/unref_800105AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_80010704_11304.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/unref_80010710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_80010734.s")

void unref_80010740(void) 
{
    return;
}

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_80010748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_80010918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_80010AE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/func_80010C2C.s")
