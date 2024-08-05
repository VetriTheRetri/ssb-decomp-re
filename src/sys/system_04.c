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
            mobj = mobj->next;
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
        aobj = aobj->next;
    }
    dobj->anim_joint = anim_joint;
    dobj->anim_remain = -F32_HALF;
    dobj->anim_frame = anim_frame;
}

void gcAddMObjMatAnimJoint(MObj *mobj, AObjAnimJoint *matanim_joint, f32 anim_frame) 
{
    AObj *aobj = mobj->aobj;

    while (aobj != NULL) 
    {
        aobj->kind = 0;
        aobj = aobj->next;
    }
    mobj->matanim_joint = matanim_joint;
    mobj->anim_remain = -F32_HALF;
    mobj->anim_frame = anim_frame;
}

void gcAddAnimJointAll(GObj *gobj, AObjAnimJoint **anim_joints, f32 anim_frame) 
{
    DObj *dobj = DObjGetStruct(gobj);
    ub8 is_anim_root = TRUE;
    
    gobj->anim_frame = anim_frame;

    while (dobj != NULL) 
    {
        if (*anim_joints != NULL) 
        {
            gcAddDObjAnimJoint(dobj, *anim_joints, anim_frame);
            dobj->is_anim_root = is_anim_root;
            is_anim_root = FALSE;
        } 
        else 
        {
            dobj->anim_remain = F32_MIN;
            dobj->is_anim_root = FALSE;
        }
        anim_joints++;
        dobj = func_8000BAA0(dobj);
    }
}

void gcAddMatAnimJointAll(GObj *gobj, AObjAnimJoint ***p_matanim_joints, f32 anim_frame)
{
    DObj *dobj = DObjGetStruct(gobj);
    
    gobj->anim_frame = anim_frame;

    while (dobj != NULL)
    {
        if (p_matanim_joints != NULL)
        {
            if (*p_matanim_joints != NULL)
            {
                AObjAnimJoint **matanim_joints = *p_matanim_joints;
                MObj *mobj = dobj->mobj;

                while (mobj != NULL)
                {
                    if (*matanim_joints != NULL)
                    { 
                        gcAddMObjMatAnimJoint(mobj, *matanim_joints, anim_frame); 
                    }
                    matanim_joints++;
                    mobj = mobj->next;
                }
            }
            p_matanim_joints++;
        }
        dobj = func_8000BAA0(dobj);
    }
}

void gcAddAnimAll(GObj *gobj, AObjAnimJoint **anim_joints, AObjAnimJoint ***p_matanim_joints, f32 anim_frame)
{
    DObj *dobj = DObjGetStruct(gobj);
    ub8 is_anim_root = TRUE;

    gobj->anim_frame = anim_frame;

    while (dobj != NULL) 
    {
        if (anim_joints != NULL)
        {
            if (*anim_joints != NULL)
            {
                gcAddDObjAnimJoint(dobj, *anim_joints, anim_frame);
                dobj->is_anim_root = is_anim_root;
                is_anim_root = FALSE;
            } 
            else 
            {
                dobj->anim_remain = F32_MIN;
                dobj->is_anim_root = FALSE;
            }
            anim_joints++;
        }
        if (p_matanim_joints != NULL) 
        {
            if (*p_matanim_joints != NULL) 
            {
                AObjAnimJoint **matanim_joints = *p_matanim_joints;
                MObj *mobj = dobj->mobj;

                while (mobj != NULL) 
                {
                    if (*matanim_joints != NULL) 
                    { 
                        gcAddMObjMatAnimJoint(mobj, *matanim_joints, anim_frame); 
                    }
                    matanim_joints++;
                    mobj = mobj->next;
                }
            }
            p_matanim_joints++;
        }
        dobj = func_8000BAA0(dobj);
    }
}

void gcParseDObjAnimJoint(DObj *dobj)
{
    AObj *track_aobjs[nOMObjAnimTrackJointEnd];
    AObj *aobj;
    s32 i;
    u32 command_kind;
    u32 flags;
    f32 payload;

    if (dobj->anim_remain != AOBJ_FRAME_NULL)
    {
        if (dobj->anim_remain == -F32_HALF)
        {
            dobj->anim_remain = -dobj->anim_frame;
        }
        else
        {
            dobj->anim_remain -= dobj->anim_rate;
            dobj->anim_frame += dobj->anim_rate;
            dobj->parent_gobj->anim_frame = dobj->anim_frame;

            if (dobj->anim_remain > 0.0F)
            {
                return;
            }
        }
        for (i = 0; i < ARRAY_COUNT(track_aobjs); i++)
        {
            track_aobjs[i] = NULL;
        }
        aobj = dobj->aobj;

        while (aobj != NULL)
        {
            if ((aobj->track >= nOMObjAnimTrackJointStart) && (aobj->track <= nOMObjAnimTrackJointEnd))
            {
                track_aobjs[aobj->track - nOMObjAnimTrackJointStart] = aobj;
            }
            aobj = aobj->next;
        }
        do
        {
            if (dobj->anim_joint == NULL)
            {
                aobj = dobj->aobj;

                while (aobj != NULL)
                {
                    if (aobj->kind)
                    {
                        aobj->length += dobj->anim_rate + dobj->anim_remain;
                    }
                    aobj = aobj->next;
                }
                dobj->anim_frame = dobj->anim_remain;
                dobj->parent_gobj->anim_frame = dobj->anim_remain;
                dobj->anim_remain = -1.1342745e38F;

                return;
            }
            command_kind = dobj->anim_joint->opcode;

            switch (command_kind)
            {
            case nOMObjAnimCommandSetVal0RateLast:
            case nOMObjAnimCommandSetVal0Rate:
                payload = dobj->anim_joint->payload;
                flags = AObjAnimAdvance(dobj->anim_joint)->flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags >>= 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (track_aobjs[i] == NULL)
                        {
                            track_aobjs[i] = omAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = dobj->anim_joint->f;

                        AObjAnimAdvance(dobj->anim_joint);

                        track_aobjs[i]->rate_base = track_aobjs[i]->rate_target;
                        track_aobjs[i]->rate_target = 0.0F;
                        track_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        track_aobjs[i]->length = -dobj->anim_remain - dobj->anim_rate;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetVal0RateLast)
                {
                    dobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetValLast:
            case nOMObjAnimCommandSetVal:
                payload = dobj->anim_joint->payload;
                flags = AObjAnimAdvance(dobj->anim_joint)->flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags >>= 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (track_aobjs[i] == NULL)
                        {
                            track_aobjs[i] = omAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = dobj->anim_joint->f;

                        AObjAnimAdvance(dobj->anim_joint);

                        track_aobjs[i]->kind = 2;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->rate_base = (track_aobjs[i]->value_target - track_aobjs[i]->value_base) / payload;
                        }
                        track_aobjs[i]->length = -dobj->anim_remain - dobj->anim_rate;
                        track_aobjs[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValLast)
                {
                    dobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetValRateLast:
            case nOMObjAnimCommandSetValRate:
                payload = dobj->anim_joint->payload;
                flags = AObjAnimAdvance(dobj->anim_joint)->flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags >>= 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (track_aobjs[i] == NULL)
                        {
                            track_aobjs[i] = omAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = dobj->anim_joint->f;

                        AObjAnimAdvance(dobj->anim_joint);

                        track_aobjs[i]->rate_base = track_aobjs[i]->rate_target;
                        track_aobjs[i]->rate_target = dobj->anim_joint->f;

                        AObjAnimAdvance(dobj->anim_joint);

                        track_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        track_aobjs[i]->length = -dobj->anim_remain - dobj->anim_rate;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValRateLast)
                {
                    dobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetTargetRate:
                flags = AObjAnimAdvance(dobj->anim_joint)->flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags >>= 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (track_aobjs[i] == NULL)
                        {
                            track_aobjs[i] = omAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->rate_target = dobj->anim_joint->f;

                        AObjAnimAdvance(dobj->anim_joint);
                    }
                }
                break;

            case nOMObjAnimCommandWait:
                dobj->anim_remain += AObjAnimAdvance(dobj->anim_joint)->payload;
                break;

            case nOMObjAnimCommandSetValAfterLast:
            case nOMObjAnimCommandSetValAfter:
                payload = dobj->anim_joint->payload;
                flags = AObjAnimAdvance(dobj->anim_joint)->flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags >>= 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (track_aobjs[i] == NULL)
                        {
                            track_aobjs[i] = omAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = dobj->anim_joint->f;

                        AObjAnimAdvance(dobj->anim_joint);

                        track_aobjs[i]->kind = 1;
                        track_aobjs[i]->length_invert = payload;
                        track_aobjs[i]->length = -dobj->anim_remain - dobj->anim_rate;
                        track_aobjs[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValAfterLast)
                {
                    dobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetAnim:
                AObjAnimAdvance(dobj->anim_joint);
                dobj->anim_joint = dobj->anim_joint->p;
                dobj->anim_frame = -dobj->anim_remain;
                dobj->parent_gobj->anim_frame = -dobj->anim_remain;

                if ((dobj->is_anim_root != FALSE) && (dobj->parent_gobj->dobjproc != NULL))
                {
                    dobj->parent_gobj->dobjproc(dobj, -2, 0);
                }
                break;

            case nOMObjAnimCommandJump:
                AObjAnimAdvance(dobj->anim_joint);
                dobj->anim_joint = dobj->anim_joint->p;

                if ((dobj->is_anim_root != FALSE) && (dobj->parent_gobj->dobjproc != NULL)) 
                {
                    dobj->parent_gobj->dobjproc(dobj, -2, 0);
                }
                break;

            case ANIM_CMD_12:
                payload = dobj->anim_joint->payload;
                flags = AObjAnimAdvance(dobj->anim_joint)->flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags >>= 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (track_aobjs[i] == NULL)
                        {
                            track_aobjs[i] = omAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->length += payload;
                    }
                }
                break;

            case ANIM_CMD_13:
                AObjAnimAdvance(dobj->anim_joint);

                if (track_aobjs[nOMObjAnimTrackRotA - nOMObjAnimTrackJointStart] == NULL) 
                { 
                    track_aobjs[nOMObjAnimTrackRotA - nOMObjAnimTrackJointStart] = omAddAObjForDObj(dobj, nOMObjAnimTrackRotA); 
                }
                track_aobjs[nOMObjAnimTrackRotA - nOMObjAnimTrackJointStart]->interpolate = dobj->anim_joint->p;

                AObjAnimAdvance(dobj->anim_joint);
                break;

            case nOMObjAnimCommandEnd:
                aobj = dobj->aobj;

                while (aobj != NULL)
                {
                    if (aobj->kind != 0)
                    {
                        aobj->length += dobj->anim_rate + dobj->anim_remain;
                    }
                    aobj = aobj->next;
                }
                dobj->anim_frame = dobj->anim_remain;
                dobj->parent_gobj->anim_frame = dobj->anim_remain;
                dobj->anim_remain = -1.1342745e38F;

                if ((dobj->is_anim_root != FALSE) && (dobj->parent_gobj->dobjproc != NULL))
                {
                    dobj->parent_gobj->dobjproc(dobj, -1, 0);
                }
                return; // not break

            case nOMObjAnimCommandSetFlags:
                dobj->flags = dobj->anim_joint->flags;
                dobj->anim_remain += AObjAnimAdvance(dobj->anim_joint)->payload;
                break;

            case ANIM_CMD_16:
                if (dobj->parent_gobj->dobjproc != NULL)
                {
                    // only seems to match when spelled out...
                    dobj->parent_gobj->dobjproc
                    (
                        dobj,
                        dobj->anim_joint->flags >> 8,
                        (u8)dobj->anim_joint->flags
                    );
                }
                dobj->anim_remain += AObjAnimAdvance(dobj->anim_joint)->payload;
                break;

            case ANIM_CMD_17:
                flags = dobj->anim_joint->flags;
                dobj->anim_remain += AObjAnimAdvance(dobj->anim_joint)->payload;

                for (i = 4; i < 14; i++, flags >>= 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (dobj->parent_gobj->dobjproc != NULL)
                        {
                            dobj->parent_gobj->dobjproc(dobj, i, dobj->anim_joint->f);
                        }
                        AObjAnimAdvance(dobj->anim_joint);
                    }
                }
                break;

                // empty, but necessary
            default:
                break;
            }
        } 
        while (dobj->anim_remain <= 0.0F);
    }
}

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

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_04/gcAddMObjSubAll.s")

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
