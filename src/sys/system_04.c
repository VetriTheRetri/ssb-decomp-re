#include <sys/obj.h>

extern void hal_interpolation_cubic(Vec3f*, void*, f32);
extern void func_8000F364_FF64(DObj *gobj, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
extern void func_8000F2FC_FEFC(DObj*, u8, u8, u8);

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

s32 D_8003B930 = 10;
s32 D_8003B934 = 10;
s32 D_8003B938 = 10;
s32 D_8003B93C = 10;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

void gcSetMatAnimJointPlaybackRateAll(GObj *gobj, f32 anim_rate)
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
        aobj->kind = nOMObjAnimKindNone;
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
        aobj->kind = nOMObjAnimKindNone;
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
    AObj *track_aobjs[nOMObjAnimTrackJointEnd - nOMObjAnimTrackJointStart + 1];
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
            command_kind = dobj->anim_joint->command.opcode;

            switch (command_kind)
            {
            case nOMObjAnimCommandSetVal0RateBlock:
            case nOMObjAnimCommandSetVal0Rate:
                payload = dobj->anim_joint->command.payload;
                flags = AObjAnimAdvance(dobj->anim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags = flags >> 1)
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
                if (command_kind == nOMObjAnimCommandSetVal0RateBlock)
                {
                    dobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetValBlock:
            case nOMObjAnimCommandSetVal:
                payload = dobj->anim_joint->command.payload;
                flags = AObjAnimAdvance(dobj->anim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags = flags >> 1)
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
                if (command_kind == nOMObjAnimCommandSetValBlock)
                {
                    dobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetValRateBlock:
            case nOMObjAnimCommandSetValRate:
                payload = dobj->anim_joint->command.payload;
                flags = AObjAnimAdvance(dobj->anim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags = flags >> 1)
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
                if (command_kind == nOMObjAnimCommandSetValRateBlock)
                {
                    dobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetTargetRate:
                flags = AObjAnimAdvance(dobj->anim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags = flags >> 1)
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
                dobj->anim_remain += AObjAnimAdvance(dobj->anim_joint)->command.payload;
                break;

            case nOMObjAnimCommandSetValAfterBlock:
            case nOMObjAnimCommandSetValAfter:
                payload = dobj->anim_joint->command.payload;
                flags = AObjAnimAdvance(dobj->anim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags = flags >> 1)
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
                if (command_kind == nOMObjAnimCommandSetValAfterBlock)
                {
                    dobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetAnim:
                AObjAnimAdvance(dobj->anim_joint);
                dobj->anim_joint = dobj->anim_joint->p;
                dobj->anim_frame = -dobj->anim_remain;
                dobj->parent_gobj->anim_frame = -dobj->anim_remain;

                if ((dobj->is_anim_root != FALSE) && (dobj->parent_gobj->proc_anim != NULL))
                {
                    dobj->parent_gobj->proc_anim(dobj, -2, 0);
                }
                break;

            case nOMObjAnimCommandJump:
                AObjAnimAdvance(dobj->anim_joint);
                dobj->anim_joint = dobj->anim_joint->p;

                if ((dobj->is_anim_root != FALSE) && (dobj->parent_gobj->proc_anim != NULL)) 
                {
                    dobj->parent_gobj->proc_anim(dobj, -2, 0);
                }
                break;

            case ANIM_CMD_12:
                payload = dobj->anim_joint->command.payload;
                flags = AObjAnimAdvance(dobj->anim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(track_aobjs); i++, flags = flags >> 1)
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

            case nOMObjAnimCommandSetTranslateLerp:
                AObjAnimAdvance(dobj->anim_joint);

                if (track_aobjs[nOMObjAnimTrackTraL - nOMObjAnimTrackJointStart] == NULL) 
                { 
                    track_aobjs[nOMObjAnimTrackTraL - nOMObjAnimTrackJointStart] = omAddAObjForDObj(dobj, nOMObjAnimTrackTraL); 
                }
                track_aobjs[nOMObjAnimTrackTraL - nOMObjAnimTrackJointStart]->interpolate = dobj->anim_joint->p;

                AObjAnimAdvance(dobj->anim_joint);
                break;

            case nOMObjAnimCommandEnd:
                aobj = dobj->aobj;

                while (aobj != NULL)
                {
                    if (aobj->kind != nOMObjAnimKindNone)
                    {
                        aobj->length += dobj->anim_rate + dobj->anim_remain;
                    }
                    aobj = aobj->next;
                }
                dobj->anim_frame = dobj->anim_remain;
                dobj->parent_gobj->anim_frame = dobj->anim_remain;
                dobj->anim_remain = -1.1342745e38F;

                if ((dobj->is_anim_root != FALSE) && (dobj->parent_gobj->proc_anim != NULL))
                {
                    dobj->parent_gobj->proc_anim(dobj, -1, 0);
                }
                return; // not break

            case nOMObjAnimCommandSetFlags:
                dobj->flags = dobj->anim_joint->command.flags;
                dobj->anim_remain += AObjAnimAdvance(dobj->anim_joint)->command.payload;
                break;

            case ANIM_CMD_16:
                if (dobj->parent_gobj->proc_anim != NULL)
                {
                    // only seems to match when spelled out...
                    dobj->parent_gobj->proc_anim
                    (
                        dobj,
                        dobj->anim_joint->command.flags >> 8,
                        (u8)dobj->anim_joint->command.flags
                    );
                }
                dobj->anim_remain += AObjAnimAdvance(dobj->anim_joint)->command.payload;
                break;

            case ANIM_CMD_17:
                flags = dobj->anim_joint->command.flags;
                dobj->anim_remain += AObjAnimAdvance(dobj->anim_joint)->command.payload;

                for (i = 4; i < 14; i++, flags = flags >> 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (dobj->parent_gobj->proc_anim != NULL)
                        {
                            dobj->parent_gobj->proc_anim(dobj, i, dobj->anim_joint->f);
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

f32 gcGetLerpValueCubic(f32 length_invert, f32 length, f32 value_base, f32 value_target, f32 rate_base, f32 rate_target) 
{
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18;                                   // length_invert^2
    f32 temp_f2;                                    // length^2

    temp_f2  = SQUARE(length);
    temp_f18 = SQUARE(length_invert);
    temp_f16 = temp_f2 * length * temp_f18;         // length^3 * length_invert^2
    temp_f10 = 2.0F * temp_f16 * length_invert;     // 2.0F * length^3 * length_invert^3
    sp14     = 3.0F * temp_f2 * temp_f18;           // 3 * length^2 * length_invert^2
    sp18     = temp_f2 * length_invert;             // length_invert^3
    sp10     = temp_f16 - sp18;                     // length^3 * length_invert^2 - length_invert^3

    return (((temp_f10 - sp14) + 1.0F) * value_base) + (value_target * (sp14 - temp_f10)) + 
                            (rate_base * ((sp10 - sp18) + length)) + (rate_target * sp10);
}

f32 gcGetLerpRateCubic(f32 length_invert, f32 length, f32 value_base, f32 value_target, f32 rate_base, f32 rate_target) 
{
    f32 temp_f18;
    f32 temp_f16;
    f32 temp_f2;

    temp_f2  = 2.0F * length * length_invert;
    temp_f16 = 3.0F * length * length * length_invert * length_invert;
    temp_f18 = 6.0F * length;

    return (((temp_f18 * length * length_invert * length_invert * length_invert) - (temp_f18 * length_invert * length_invert)) * (value_base - value_target)) + 
                (rate_base * ((temp_f16 - (2.0F * temp_f2)) + 1.0F)) + (rate_target * (temp_f16 - temp_f2));
}

f32 gcGetAObjValue(AObj *aobj)
{
    switch (aobj->kind) 
    {
    case nOMObjAnimKindLinear:
        return aobj->value_base + (aobj->length * aobj->rate_base);

    case nOMObjAnimKindCubic:
        return gcGetLerpValueCubic
        (
            aobj->length_invert, aobj->length, aobj->value_base, aobj->value_target, aobj->rate_base, aobj->rate_target
        );

    case nOMObjAnimKindStep: 
        return (aobj->length_invert <= aobj->length) ? aobj->value_target : aobj->value_base;
    }
#if defined (AVOID_UB)
    return 0.0F;
#endif
}

f32 gcGetAObjRate(AObj *aobj) 
{
    switch (aobj->kind) 
    {
    case nOMObjAnimKindLinear: 
        return aobj->rate_base;

    case nOMObjAnimKindCubic:
        return gcGetLerpRateCubic
        (
            aobj->length_invert, aobj->length, aobj->value_base, aobj->value_target, aobj->rate_base, aobj->rate_target
        );

    case nOMObjAnimKindStep:
        return 0.0F;
    }
#if defined (AVOID_UB)
    return 0.0F;
#endif
}

void gcPlayDObjAnim(DObj *dobj) 
{
    f32 value; // array_dobjs
    AObj *aobj;
    f32 temp_f16;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;

    if (dobj->anim_remain != AOBJ_FRAME_NULL) 
    {
        aobj = dobj->aobj;

        while (aobj != NULL)
        {
            if (aobj->kind != nOMObjAnimKindNone)
            {
                if (dobj->anim_remain != -1.1342745e38F) 
                { 
                    aobj->length += dobj->anim_rate; 
                }
                if (!(dobj->parent_gobj->flags & GOBJ_FLAG_NOANIM)) 
                {
                    switch (aobj->kind) 
                    {
                    case nOMObjAnimKindLinear: 
                        value = aobj->value_base + (aobj->length * aobj->rate_base); 
                        break;
                        
                    case nOMObjAnimKindCubic:
                        temp_f16 = SQUARE(aobj->length_invert);
                        temp_f12 = SQUARE(aobj->length);
                        temp_f18 = aobj->length_invert * temp_f12;
                        temp_f14 = aobj->length * temp_f12 * temp_f16;
                        temp_f20 = 2.0F * temp_f14 * aobj->length_invert;
                        temp_f22 = 3.0F * temp_f12 * temp_f16;
                        temp_f24 = temp_f14 - temp_f18;

                        value = 
                            (aobj->value_base * ((temp_f20 - temp_f22) + 1.0F)) + 
                            (aobj->value_target * (temp_f22 - temp_f20)) + 
                            (aobj->rate_base * ((temp_f24 - temp_f18) + aobj->length)) + 
                            (aobj->rate_target * temp_f24);
                        break;
                        
                    case nOMObjAnimKindStep: 
                        value = (aobj->length_invert <= aobj->length) ? aobj->value_target : aobj->value_base; 
                        break;

                    default:
                        break;
                    }
                    switch (aobj->track)
                    {
                    case nOMObjAnimTrackRotX: 
                        dobj->rotate.vec.f.x = value;
                        break;

                    case nOMObjAnimTrackRotY: 
                        dobj->rotate.vec.f.y = value;
                        break;

                    case nOMObjAnimTrackRotZ: 
                        dobj->rotate.vec.f.z = value;
                        break;

                    case nOMObjAnimTrackTraL:
                        if (value < 0.0F) 
                        {
                            value = 0.0F;
                        } 
                        else if (value > 1.0F) 
                        {
                            value = 1.0F;
                        }
                        hal_interpolation_cubic(&dobj->translate.vec.f, aobj->interpolate, value);
                        break;

                    case nOMObjAnimTrackTraX: 
                        dobj->translate.vec.f.x = value; 
                        break;

                    case nOMObjAnimTrackTraY: 
                        dobj->translate.vec.f.y = value; 
                        break;

                    case nOMObjAnimTrackTraZ: 
                        dobj->translate.vec.f.z = value; 
                        break;

                    case nOMObjAnimTrackScaX: 
                        dobj->scale.vec.f.x = value; 
                        break;
                        
                    case nOMObjAnimTrackScaY: 
                        dobj->scale.vec.f.y = value; 
                        break;

                    case nOMObjAnimTrackScaZ: 
                        dobj->scale.vec.f.z = value; 
                        break;
                    }
                }
            }
            aobj = aobj->next;
        }
        if (dobj->anim_remain == -1.1342745e38F) 
        { 
            dobj->anim_remain = F32_MIN; 
        }
    }
}

void gcParseMObjMatAnimJoint(MObj *mobj)
{
    AObj *mat_aobjs[10];
    AObj *matspecial_aobjs[5];
    AObj *aobj;
    s32 i;
    u32 command_kind;
    u32 flags;
    f32 payload;

    if (mobj->anim_remain != AOBJ_FRAME_NULL)
    {
        if (mobj->anim_remain == -F32_HALF)
        {
            mobj->anim_remain = -mobj->anim_frame;
        }
        else
        {
            mobj->anim_remain -= mobj->anim_rate;
            mobj->anim_frame += mobj->anim_rate;

            if (mobj->anim_remain > 0.0F)
            {
                return;
            }
        }
        for (i = 0; i < ARRAY_COUNT(mat_aobjs); i++)
        {
            mat_aobjs[i] = NULL;
        }
        for (i = 0; i < ARRAY_COUNT(matspecial_aobjs); i++)
        {
            matspecial_aobjs[i] = NULL;
        }
        aobj = mobj->aobj;

        while (aobj != NULL)
        {
            if ((aobj->track >= nOMObjAnimTrackMaterialStart) && (aobj->track <= nOMObjAnimTrackMaterialEnd))
            {
                mat_aobjs[aobj->track - nOMObjAnimTrackMaterialStart] = aobj;
            }
            if ((aobj->track >= nOMObjAnimTrackMaterialSubStart) && (aobj->track <= nOMObjAnimTrackMaterialSubEnd))
            {
                matspecial_aobjs[aobj->track - nOMObjAnimTrackMaterialSubStart] = aobj;
            }
            aobj = aobj->next;
        }
        do
        {
            if (mobj->matanim_joint == NULL)
            {
                aobj = mobj->aobj;

                while (aobj != NULL)
                {
                    if (aobj->kind != nOMObjAnimKindNone)
                    {
                        aobj->length += mobj->anim_rate + mobj->anim_remain;
                    }
                    aobj = aobj->next;
                }
                mobj->anim_frame = mobj->anim_remain;
                mobj->anim_remain = -1.1342745e38F;

                break; // or return?
            }
            command_kind = mobj->matanim_joint->command.opcode;

            switch (command_kind)
            {
            case nOMObjAnimCommandSetVal0RateBlock:
            case nOMObjAnimCommandSetVal0Rate:
                payload = mobj->matanim_joint->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(mat_aobjs); i++, flags = flags >> 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (mat_aobjs[i] == NULL)
                        {
                            mat_aobjs[i] = omAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
                        }
                        mat_aobjs[i]->value_base = mat_aobjs[i]->value_target;
                        mat_aobjs[i]->value_target = mobj->matanim_joint->f;

                        AObjAnimAdvance(mobj->matanim_joint);

                        mat_aobjs[i]->rate_base = mat_aobjs[i]->rate_target;
                        mat_aobjs[i]->rate_target = 0.0F;

                        mat_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            mat_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        mat_aobjs[i]->length = -mobj->anim_remain - mobj->anim_rate;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetVal0RateBlock)
                {
                    mobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetValBlock:
            case nOMObjAnimCommandSetVal:
                payload = mobj->matanim_joint->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(mat_aobjs); i++, flags = flags >> 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (mat_aobjs[i] == NULL)
                        {
                            mat_aobjs[i] = omAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
                        }
                        mat_aobjs[i]->value_base = mat_aobjs[i]->value_target;
                        mat_aobjs[i]->value_target = mobj->matanim_joint->f;

                        AObjAnimAdvance(mobj->matanim_joint);

                        mat_aobjs[i]->kind = 2;

                        if (payload != 0.0F)
                        {
                            mat_aobjs[i]->rate_base = (mat_aobjs[i]->value_target - mat_aobjs[i]->value_base) / payload;
                        }
                        mat_aobjs[i]->length = -mobj->anim_remain - mobj->anim_rate;
                        mat_aobjs[i]->rate_target = 0.0F;
                    }
                }

                if (command_kind == nOMObjAnimCommandSetValBlock)
                {
                    mobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetValRateBlock:
            case nOMObjAnimCommandSetValRate:
                payload = mobj->matanim_joint->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(mat_aobjs); i++, flags = flags >> 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (mat_aobjs[i] == NULL)
                        {
                            mat_aobjs[i] = omAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
                        }
                        mat_aobjs[i]->value_base = mat_aobjs[i]->value_target;
                        mat_aobjs[i]->value_target = mobj->matanim_joint->f;

                        AObjAnimAdvance(mobj->matanim_joint);

                        mat_aobjs[i]->rate_base = mat_aobjs[i]->rate_target;
                        mat_aobjs[i]->rate_target = mobj->matanim_joint->f;

                        AObjAnimAdvance(mobj->matanim_joint);

                        mat_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            mat_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        mat_aobjs[i]->length = -mobj->anim_remain - mobj->anim_rate;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValRateBlock)
                {
                    mobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetTargetRate:
                flags = AObjAnimAdvance(mobj->matanim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(mat_aobjs); i++, flags = flags >> 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (mat_aobjs[i] == NULL)
                        {
                            mat_aobjs[i] = omAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
                        }
                        mat_aobjs[i]->rate_target = mobj->matanim_joint->f;

                        AObjAnimAdvance(mobj->matanim_joint);
                    }
                }
                break;

            case nOMObjAnimCommandWait:
                mobj->anim_remain += mobj->matanim_joint->command.payload;

                AObjAnimAdvance(mobj->matanim_joint);
                break;

            case nOMObjAnimCommandSetValAfterBlock:
            case nOMObjAnimCommandSetValAfter:
                payload = mobj->matanim_joint->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(mat_aobjs); i++, flags = flags >> 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (mat_aobjs[i] == NULL)
                        {
                            mat_aobjs[i] = omAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
                        }
                        mat_aobjs[i]->value_base = mat_aobjs[i]->value_target;
                        mat_aobjs[i]->value_target = mobj->matanim_joint->f;

                        AObjAnimAdvance(mobj->matanim_joint);

                        mat_aobjs[i]->kind = 1;

                        mat_aobjs[i]->length_invert = payload;
                        mat_aobjs[i]->length = -mobj->anim_remain - mobj->anim_rate;

                        mat_aobjs[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValAfterBlock)
                {
                    mobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetAnim:
                AObjAnimAdvance(mobj->matanim_joint);

                mobj->matanim_joint = mobj->matanim_joint->p;
                mobj->anim_frame = -mobj->anim_remain;
                break;

            case nOMObjAnimCommandJump:
                AObjAnimAdvance(mobj->matanim_joint);

                mobj->matanim_joint = mobj->matanim_joint->p;
                break;

            case ANIM_CMD_12:
                payload = mobj->matanim_joint->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(mat_aobjs); i++, flags = flags >> 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (mat_aobjs[i] == NULL)
                        {
                            mat_aobjs[i] = omAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
                        }
                        mat_aobjs[i]->length += payload;
                    }
                }
                break;

            case nOMObjAnimCommandEnd:
                aobj = mobj->aobj;

                while (aobj != NULL)
                {
                    if (aobj->kind != nOMObjAnimKindNone)
                    {
                        aobj->length += mobj->anim_rate + mobj->anim_remain;
                    }
                    aobj = aobj->next;
                }
                mobj->anim_frame = mobj->anim_remain;
                mobj->anim_remain = -1.1342745e38F;
                return; // not break

            case nOMObjAnimCommandSetExtValAfterBlock:
            case nOMObjAnimCommandSetExtValAfter:
                payload = mobj->matanim_joint->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(matspecial_aobjs); i++, flags = flags >> 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (matspecial_aobjs[i] == NULL)
                        {
                            matspecial_aobjs[i] = omAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialSubStart);
                        }
                        matspecial_aobjs[i]->value_base = matspecial_aobjs[i]->value_target;
                        matspecial_aobjs[i]->value_target = mobj->matanim_joint->f;

                        AObjAnimAdvance(mobj->matanim_joint);

                        matspecial_aobjs[i]->kind = 1;

                        matspecial_aobjs[i]->length_invert = payload;
                        matspecial_aobjs[i]->length = -mobj->anim_remain - mobj->anim_rate;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetExtValAfterBlock)
                {
                    mobj->anim_remain += payload;
                }
                break;

            case nOMObjAnimCommandSetExtValBlock:
            case nOMObjAnimCommandSetExtVal:
                payload = mobj->matanim_joint->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint)->command.flags;

                for (i = 0; i < ARRAY_COUNT(matspecial_aobjs); i++, flags = flags >> 1)
                {
                    if (!(flags))
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        if (matspecial_aobjs[i] == NULL)
                        {
                            matspecial_aobjs[i] = omAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialSubStart);
                        }
                        matspecial_aobjs[i]->value_base = matspecial_aobjs[i]->value_target;
                        matspecial_aobjs[i]->value_target = mobj->matanim_joint->f;

                        AObjAnimAdvance(mobj->matanim_joint);

                        matspecial_aobjs[i]->kind = 2;

                        if (payload != 0.0F)
                        {
                            matspecial_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        matspecial_aobjs[i]->length = -mobj->anim_remain - mobj->anim_rate;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetExtValBlock)
                {
                    mobj->anim_remain += payload;
                }
                break;

            case ANIM_CMD_22:
                mobj->anim_remain = mobj->matanim_joint->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint)->command.flags;

                if (flags & 0x01)
                {
                    mobj->sub.unk4C = mobj->matanim_joint->u;
                    AObjAnimAdvance(mobj->matanim_joint);
                }
                if (flags & 0x02)
                {
                    mobj->sub.unk6C = mobj->matanim_joint->u;
                    AObjAnimAdvance(mobj->matanim_joint);
                }
                if (flags & 0x04)
                {
                    mobj->sub.unk68 = mobj->matanim_joint->u;
                    AObjAnimAdvance(mobj->matanim_joint);
                }
                if (flags & 0x08)
                {
                    mobj->sub.unk74 = mobj->matanim_joint->u;
                    AObjAnimAdvance(mobj->matanim_joint);
                }
                if (flags & 0x10)
                {
                    mobj->sub.unk70 = mobj->matanim_joint->u;
                    AObjAnimAdvance(mobj->matanim_joint);
                }
                break;

            default:
                break;
            }
        } 
        while (mobj->anim_remain <= 0.0F);
    }
}

void gcPlayMObjMatAnim(MObj *mobj)
{
    f32 value;
    AObj *aobj;
    f32 temp_f16;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f22;
    gsColorRGBA color; // color
    f32 temp_f24;
    s32 lerp;
    gsColorRGBA sp38; // sp38
    gsColorRGBA sp34; // sp34

    if (mobj->anim_remain != AOBJ_FRAME_NULL) 
    {
        aobj = mobj->aobj;
        
        while (aobj != NULL)
        {
            if (aobj->kind != nOMObjAnimKindNone) 
            {
                if (mobj->anim_remain != -1.1342745e38F) 
                { 
                    aobj->length += mobj->anim_rate; 
                }
                if (aobj->track < (nOMObjAnimTrackMaterialSubStart - 1))
                {
                    switch (aobj->kind) 
                    {
                    case nOMObjAnimKindLinear: 
                        value = aobj->value_base + (aobj->length * aobj->rate_base); 
                        break;
                        
                    case nOMObjAnimKindCubic:
                        temp_f16 = SQUARE(aobj->length_invert);
                        temp_f12 = SQUARE(aobj->length);
                        temp_f18 = aobj->length_invert * temp_f12;
                        temp_f14 = aobj->length * temp_f12 * temp_f16;
                        temp_f20 = 2.0F * temp_f14 * aobj->length_invert;
                        temp_f22 = 3.0F * temp_f12 * temp_f16;
                        temp_f24 = temp_f14 - temp_f18;

                        value = (aobj->value_base * ((temp_f20 - temp_f22) + 1.0F)) + 
                                (aobj->value_target * (temp_f22 - temp_f20)) + 
                                (aobj->rate_base * ((temp_f24 - temp_f18) + aobj->length)) + 
                                (aobj->rate_target * temp_f24);
                        break;
                        
                    case nOMObjAnimKindStep:
                        value = (aobj->length_invert <= aobj->length) ? aobj->value_target : aobj->value_base;
                        break;
                        
                    default: 
                        break;
                    }
                    switch (aobj->track) 
                    {
                    case nOMObjAnimTrackSetTextureIDCurrent: 
                        mobj->texture_id_current = value; 
                        break;
                        
                    case nOMObjAnimTrackTexture14: 
                        mobj->sub.unk14 = value; 
                        break;
                        
                    case nOMObjAnimTrackTexture15: 
                        mobj->sub.unk18 = value; 
                        break;
                        
                    case nOMObjAnimTrackTexture16: 
                        mobj->sub.unk1C = value; 
                        break;
                        
                    case nOMObjAnimTrackTexture17: 
                        mobj->sub.unk20 = value; 
                        break;
                        
                    case nOMObjAnimTrackSetTextureIDNext: 
                        mobj->texture_id_next = value; 
                        break;
                        
                    case nOMObjAnimTrackTexture19: 
                        mobj->sub.unk3C = value; 
                        break;
                        
                    case nOMObjAnimTrackTexture20: 
                        mobj->sub.unk40 = value; 
                        break;
                        
                    case nOMObjAnimTrackSetLFrac: 
                        mobj->lfrac = value; 
                        break;
                        
                    case nOMObjAnimTrackSetTextureFrame: 
                        mobj->texture_frame = value; 
                        break;
                        
                    default: 
                        break;
                    }
                } 
                else 
                {
                    switch(aobj->kind)
                    {
                    case nOMObjAnimKindLinear: 
                        lerp = (aobj->length * aobj->length_invert * 256.0F);
                    
                        if (lerp < 0)
                        { 
                            lerp = 0; 
                        }
                        if (lerp > 256) 
                        { 
                            lerp = 256; 
                        }
                        sp34.pack = 0;
                        sp38.pack = 0;

                        sp38.g = ((u8*)&aobj->value_base)[0];
                        sp38.a = ((u8*)&aobj->value_base)[1];
                        
                        sp34.g = ((u8*)&aobj->value_target)[0];
                        sp34.a = ((u8*)&aobj->value_target)[1];

                        sp38.pack = (256 - lerp) * sp38.pack + sp34.pack * lerp;

                        color.r = sp38.r;
                        color.g = sp38.b;

                        sp38.pack = 0;
                    
                        sp38.g = ((u8*)&aobj->value_base)[2];
                        sp38.a = ((u8*)&aobj->value_base)[3];
                    
                        sp34.g = ((u8*)&aobj->value_target)[2];
                        sp34.a = ((u8*)&aobj->value_target)[3];

                        sp38.pack = (256 - lerp) * sp38.pack + sp34.pack * lerp;

                        color.b = sp38.r;
                        color.a = sp38.b;
                        break;
                    
                    case nOMObjAnimKindStep:
                        color = (aobj->length_invert <= aobj->length) ? *(gsColorRGBA*)&aobj->value_target : *(gsColorRGBA*)&aobj->value_base;
                        break;
                    }
                    switch(aobj->track)
                    {
                    case nOMObjAnimTrackPrimColor:
                        mobj->sub.primcolor = color;
                        break;

                    case nOMObjAnimTrackEnvColor:
                        mobj->sub.envcolor = color;
                        break;

                    case nOMObjAnimTrackBlendColor:
                        mobj->sub.blendcolor = color;
                        break;

                    case nOMObjAnimTrackLight1Color:
                        mobj->sub.light1color = color;
                        break;

                    case nOMObjAnimTrackLight2Color:
                        mobj->sub.light2color = color;
                        break;
                    }
                }
            }
            aobj = aobj->next;
        }
        if(mobj->anim_remain == -1.1342745e38F)
        {
            mobj->anim_remain = F32_MIN;
        }
    }
}

void gcPlayAnimAll(GObj *gobj)
{
    DObj *dobj = DObjGetStruct(gobj);
    MObj *mobj;

    while (dobj != NULL) 
    {
        gcParseDObjAnimJoint(dobj);
        gcPlayDObjAnim(dobj);

        mobj = dobj->mobj;

        while (mobj != NULL) 
        {
            gcParseMObjMatAnimJoint(mobj);
            gcPlayMObjMatAnim(mobj);

            mobj = mobj->next;
        }
        if (dobj->child != NULL) 
        {
            dobj = dobj->child;
        } 
        else if (dobj->sib_next != NULL) 
        {
            dobj = dobj->sib_next;
        } 
        else while (TRUE) 
        {
            if (dobj->parent == DOBJ_PARENT_NULL)
            {
                dobj = NULL;

                break;
            }
            else if (dobj->parent->sib_next != NULL)
            {
                dobj = dobj->parent->sib_next;

                break;
            }
            else dobj = dobj->parent;
        }
    }
}

AObj* gcGetTrackAObj(AObj *aobj, u8 track)
{
    while (aobj != NULL) 
    {
        if (aobj->track == track) 
        { 
            return aobj; 
        }
        aobj = aobj->next;
    }
    return NULL;
}

void gcSetDObjAnimLength(DObj *dobj, f32 length)
{
    AObj *aobj = dobj->aobj;
    dobj->anim_remain = dobj->anim_rate + length;

    while (aobj != NULL) 
    {
        aobj->length_invert = 1.0F / length;
        aobj = aobj->next;
    }
}

f32 gcGetDObjAxisTrack(DObj *dobj, s32 track)
{
    switch (track) 
    {
    case nOMObjAnimTrackRotX: 
        return dobj->rotate.vec.f.x;

    case nOMObjAnimTrackRotY: 
        return dobj->rotate.vec.f.y;

    case nOMObjAnimTrackRotZ: 
        return dobj->rotate.vec.f.z;

    case nOMObjAnimTrackTraX: 
        return dobj->translate.vec.f.x;

    case nOMObjAnimTrackTraY: 
        return dobj->translate.vec.f.y;

    case nOMObjAnimTrackTraZ: 
        return dobj->translate.vec.f.z;

    case nOMObjAnimTrackScaX: 
        return dobj->scale.vec.f.x;

    case nOMObjAnimTrackScaY: 
        return dobj->scale.vec.f.y;

    case nOMObjAnimTrackScaZ: 
        return dobj->scale.vec.f.z;
    }
#if defined (AVOID_UB)
    // todo: return NaN?
    return 0.0F;
#endif
}

f32 gcGetDObjDescAxisTrack(DObjDesc *dobj_desc, s32 track)
{
    switch (track) 
    {
    case nOMObjAnimTrackRotX: 
        return dobj_desc->rotate.x;

    case nOMObjAnimTrackRotY: 
        return dobj_desc->rotate.y;

    case nOMObjAnimTrackRotZ: 
        return dobj_desc->rotate.z;

    case nOMObjAnimTrackTraX: 
        return dobj_desc->translate.x;

    case nOMObjAnimTrackTraY: 
        return dobj_desc->translate.y;

    case nOMObjAnimTrackTraZ: 
        return dobj_desc->translate.z;

    case nOMObjAnimTrackScaX: 
        return dobj_desc->scale.x;

    case nOMObjAnimTrackScaY: 
        return dobj_desc->scale.y;

    case nOMObjAnimTrackScaZ: 
        return dobj_desc->scale.z;
    }
#if defined (AVOID_UB)
    // todo: return NaN?
    return 0.0F;
#endif
}

sb32 gcCheckGetDObjNoAxisTrack
(
    sb32 is_desc_or_dobj,
    DObj *dobj,
    f32 *axis_value,
    f32 *rate,
    AObj *seek_aobj,
    DObjDesc *dobj_desc,
    s32 track,
    sb32 is_get_rate,
    Vec3f *translate,
    sb32 *is_get_axis_value
)
{
    AObj *aobj = gcGetTrackAObj(seek_aobj, track);

    if ((aobj != NULL) && (aobj->kind != nOMObjAnimKindNone))
    {
        if ((is_desc_or_dobj == 0) && (dobj->anim_remain != -1.1342745e38F))
        {
            aobj->length += dobj->anim_rate;
        }
        *axis_value = gcGetAObjValue(aobj);

        if (is_get_rate != FALSE)
        {
            *rate = gcGetAObjRate(aobj);
        }
    }
    else if ((track == nOMObjAnimTrackTraX) || (track == nOMObjAnimTrackTraY) || (track == nOMObjAnimTrackTraZ))
    {
        if (*is_get_axis_value != FALSE)
        {
            switch (track)
            {
            case nOMObjAnimTrackTraX:
                *axis_value = translate->x;
                break;

            case nOMObjAnimTrackTraY:
                *axis_value = translate->y;
                break;

            case nOMObjAnimTrackTraZ:
                *axis_value = translate->z;
                break;
            }
        }
        else
        {
            aobj = gcGetTrackAObj(seek_aobj, nOMObjAnimTrackTraL);

            if ((aobj != NULL) && (aobj->kind != nOMObjAnimKindNone))
            {
                if ((is_desc_or_dobj == 0) && (dobj->anim_remain != -1.1342745e38F))
                {
                    aobj->length += dobj->anim_rate;
                }
                *axis_value = gcGetAObjValue(aobj);

                if (*axis_value < 0.0F)
                {
                    *axis_value = 0.0F;
                }
                else if (*axis_value > 1.0F)
                {
                    *axis_value = 1.0F;
                }
                hal_interpolation_cubic(translate, aobj->interpolate, *axis_value);

                switch (track)
                {
                case nOMObjAnimTrackTraX:
                    *axis_value = translate->x;
                    break;

                case nOMObjAnimTrackTraY:
                    *axis_value = translate->y;
                    break;

                case nOMObjAnimTrackTraZ:
                    *axis_value = translate->z;
                    break;
                }
                *is_get_axis_value = TRUE;
            }
            else if (is_desc_or_dobj == 0)
            {
                if (dobj_desc == NULL)
                {
                    return TRUE;
                }
                else *axis_value = gcGetDObjDescAxisTrack(dobj_desc, track);
            }
            else *axis_value = gcGetDObjAxisTrack(dobj, track);
        }
    }
    else if (is_desc_or_dobj == 0)
    {
        if (dobj_desc == NULL)
        {
            return TRUE;
        }
        *axis_value = gcGetDObjDescAxisTrack(dobj_desc, track);
    }
    else *axis_value = gcGetDObjAxisTrack(dobj, track);

    return FALSE;
}

void func_8000E428_F028(s32 track, f32 translate, f32 rotate, f32 scale, f32 *arg4, AObj *aobj)
{
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 unused;
    f32 value;
    
    switch (track)
    {
    case nOMObjAnimTrackRotX:
    case nOMObjAnimTrackRotY:
    case nOMObjAnimTrackRotZ:
        value = rotate;
        break;

    case nOMObjAnimTrackTraX:
    case nOMObjAnimTrackTraY:
    case nOMObjAnimTrackTraZ:
        value = translate;
        break;

    case nOMObjAnimTrackScaX:
    case nOMObjAnimTrackScaY:
    case nOMObjAnimTrackScaZ:
        value = scale;
        break;
    }
    if (value != 0.0F)
    {
        if (TRUE);

        sp3C = (2.0F * aobj->rate_base) + aobj->rate_target;
        sp38 = (-6.0F * value) * (aobj->value_target - aobj->value_base);
        
        if (sp38 < SQUARE(sp3C))
        {
            sp34 = (sqrtf(SQUARE(sp3C) - sp38) + -sp3C) / value;
            
            TAKE_MAX(*arg4, sp34);
            
            sp34 = (-sp3C - sqrtf(SQUARE(sp3C) - sp38)) / value;
            
            TAKE_MAX(*arg4, sp34);
        }
        else if ((SQUARE(sp3C) + -sp38) == (0, 0.0F))
        {
            sp34 = -sp3C / value;
            
            TAKE_MAX(*arg4, sp34);
        }
        if ((SQUARE(sp3C) + sp38) > 0.0F)
        {
            sp34 = (sqrtf(SQUARE(sp3C) + sp38) + -sp3C) / -value;

            TAKE_MAX(*arg4, sp34);
            
            sp34 = (-sp3C - sqrtf(SQUARE(sp3C) + sp38)) / -value;

            TAKE_MAX(*arg4, sp34);
        }
        else if ((SQUARE(sp3C) + sp38) == (0, 0.0F))
        {
            sp34 = -sp3C / -value;
            
            TAKE_MAX(*arg4, sp34);
        }
        sp3C = -(aobj->rate_base + (2.0F * aobj->rate_target));
        sp38 = (-6.0F * value) * (aobj->value_base - aobj->value_target);
        
        if (sp38 < SQUARE(sp3C))
        {
            sp34 = (sqrtf(SQUARE(sp3C) - sp38) + -sp3C) / value;
            
            TAKE_MAX(*arg4, sp34);
            
            sp34 = (-sp3C - sqrtf(SQUARE(sp3C) - sp38)) / value;
            
            TAKE_MAX(*arg4, sp34);
        }
        else if ((SQUARE(sp3C) + -sp38) == (0, 0.0F))
        {
            sp34 = -sp3C / value;
            
            TAKE_MAX(*arg4, sp34);
        }
        if ((SQUARE(sp3C) + sp38) > 0.0F)
        {
            sp34 = (sqrtf(SQUARE(sp3C) + sp38) + -sp3C) / -value;
            
            TAKE_MAX(*arg4, sp34);
            
            sp34 = (-sp3C - sqrtf(sp38 + SQUARE(sp3C))) / -value;
            
            TAKE_MAX(*arg4, sp34);
        }
        else if ((SQUARE(sp3C) + sp38) == (0, 0.0F))
        {
            sp34 = -sp3C / -value;
            
            TAKE_MAX(*arg4, sp34);
        }
    }
}

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

// 0x8000F590
void gcSetupCommonDObjs(GObj *gobj, DObjDesc *dobj_desc, DObj **dobjs, u8 tk1, u8 tk2, u8 arg5)
{
    s32 i;
    DObj *dobj;
    s32 id;
    DObj *array_dobjs[DOBJ_ARRAY_MAX];

    for (i = 0; i < ARRAY_COUNT(array_dobjs); i++)
    {
        array_dobjs[i] = NULL;
    }
    while (dobj_desc->index != ARRAY_COUNT(array_dobjs)) 
    {
        id = dobj_desc->index & 0xFFF;

        if (id != 0)
        {
            dobj = array_dobjs[id] = omAddChildForDObj(array_dobjs[id - 1], dobj_desc->display_list);
        } 
        else dobj = array_dobjs[0] = omAddDObjForGObj(gobj, dobj_desc->display_list);
        
        if (dobj_desc->index & 0xF000) 
        {
            func_8000F364_FF64(dobj, tk1, tk2, arg5, dobj_desc->index & 0xF000);
        } 
        else func_8000F2FC_FEFC(dobj, tk1, tk2, arg5);
        
        dobj->translate.vec.f = dobj_desc->translate;
        dobj->rotate.vec.f = dobj_desc->rotate;
        dobj->scale.vec.f = dobj_desc->scale;

        if (dobjs != NULL) 
        {
            *dobjs++ = dobj;
        }
        dobj_desc++;
    }
}

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
