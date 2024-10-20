#include <sys/obj.h>

extern void hal_interpolation_cubic(Vec3f*, void*, f32);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

DObj* gcGetTreeDObjNext(DObj *dobj)
{
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
    return dobj;
}

void gcSetAnimSpeed(GObj *gobj, f32 anim_speed)
{
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        dobj->anim_speed = anim_speed;
        dobj = gcGetTreeDObjNext(dobj);
    }
}

void gcSetAllAnimSpeed(GObj *gobj, f32 anim_speed)
{
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        MObj *mobj = dobj->mobj;

        dobj->anim_speed = anim_speed;

        while (mobj != NULL)
        {
            mobj->anim_speed = anim_speed;
            mobj = mobj->next;
        }
        dobj = gcGetTreeDObjNext(dobj);
    }
}

void gcSetMatAnimJointSpeed(GObj *gobj, f32 anim_speed)
{
    MObj *mobj;
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        mobj = dobj->mobj;

        while (mobj != NULL)
        {
            mobj->anim_speed = anim_speed;
            mobj = mobj->next;
        }
        dobj = gcGetTreeDObjNext(dobj);
    }
}

void gcRemoveAnimJointAll(GObj *gobj)
{
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL) 
    {
        gcRemoveAObjFromDObj(dobj);
        dobj = gcGetTreeDObjNext(dobj);
    }
}

void gcRemoveAnimAll(GObj *gobj)
{
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        MObj *mobj;

        gcRemoveAObjFromDObj(dobj);

        mobj = dobj->mobj;

        while (mobj != NULL) 
        {
            gcRemoveAObjFromMObj(mobj);
            mobj = mobj->next;
        }
        dobj = gcGetTreeDObjNext(dobj);
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
            gcRemoveAObjFromMObj(mobj);
            mobj = mobj->next;
        }
        dobj = gcGetTreeDObjNext(dobj);
    }
}

void gcAddDObjAnimJoint(DObj *dobj, AObjEvent32 *anim_joint, f32 anim_frame) 
{
    AObj *aobj = dobj->aobj;

    while (aobj != NULL) 
    {
        aobj->kind = nOMObjAnimKindNone;
        aobj = aobj->next;
    }
    dobj->anim_joint.event32 = anim_joint;
    dobj->anim_wait = AOBJ_ANIM_CHANGED;
    dobj->anim_frame = anim_frame;
}

void gcAddMObjMatAnimJoint(MObj *mobj, AObjEvent32 *matanim_joint, f32 anim_frame) 
{
    AObj *aobj = mobj->aobj;

    while (aobj != NULL) 
    {
        aobj->kind = nOMObjAnimKindNone;
        aobj = aobj->next;
    }
    mobj->matanim_joint.event32 = matanim_joint;
    mobj->anim_wait = AOBJ_ANIM_CHANGED;
    mobj->anim_frame = anim_frame;
}

void gcAddAnimJointAll(GObj *gobj, AObjEvent32 **anim_joints, f32 anim_frame) 
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
            dobj->anim_wait = F32_MIN;
            dobj->is_anim_root = FALSE;
        }
        anim_joints++;
        dobj = gcGetTreeDObjNext(dobj);
    }
}

void gcAddMatAnimJointAll(GObj *gobj, AObjEvent32 ***p_matanim_joints, f32 anim_frame)
{
    DObj *dobj = DObjGetStruct(gobj);
    
    gobj->anim_frame = anim_frame;

    while (dobj != NULL)
    {
        if (p_matanim_joints != NULL)
        {
            if (*p_matanim_joints != NULL)
            {
                AObjEvent32 **matanim_joints = *p_matanim_joints;
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
        dobj = gcGetTreeDObjNext(dobj);
    }
}

void gcAddAnimAll(GObj *gobj, AObjEvent32 **anim_joints, AObjEvent32 ***p_matanim_joints, f32 anim_frame)
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
                dobj->anim_wait = F32_MIN;
                dobj->is_anim_root = FALSE;
            }
            anim_joints++;
        }
        if (p_matanim_joints != NULL) 
        {
            if (*p_matanim_joints != NULL) 
            {
                AObjEvent32 **matanim_joints = *p_matanim_joints;
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
        dobj = gcGetTreeDObjNext(dobj);
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

    if (dobj->anim_wait != AOBJ_ANIM_NULL)
    {
        if (dobj->anim_wait == AOBJ_ANIM_CHANGED)
        {
            dobj->anim_wait = -dobj->anim_frame;
        }
        else
        {
            dobj->anim_wait -= dobj->anim_speed;
            dobj->anim_frame += dobj->anim_speed;
            dobj->parent_gobj->anim_frame = dobj->anim_frame;

            if (dobj->anim_wait > 0.0F)
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
            if (dobj->anim_joint.event32 == NULL)
            {
                aobj = dobj->aobj;

                while (aobj != NULL)
                {
                    if (aobj->kind)
                    {
                        aobj->length += dobj->anim_speed + dobj->anim_wait;
                    }
                    aobj = aobj->next;
                }
                dobj->anim_frame = dobj->anim_wait;
                dobj->parent_gobj->anim_frame = dobj->anim_wait;
                dobj->anim_wait = AOBJ_ANIM_END;

                return;
            }
            command_kind = dobj->anim_joint.event32->command.opcode;

            switch (command_kind)
            {
            case nOMObjAnimCommandSetVal0RateBlock:
            case nOMObjAnimCommandSetVal0Rate:
                payload = dobj->anim_joint.event32->command.payload;
                flags = AObjAnimAdvance(dobj->anim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = dobj->anim_joint.event32->f;

                        AObjAnimAdvance(dobj->anim_joint.event32);

                        track_aobjs[i]->rate_base = track_aobjs[i]->rate_target;
                        track_aobjs[i]->rate_target = 0.0F;
                        track_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        track_aobjs[i]->length = -dobj->anim_wait - dobj->anim_speed;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetVal0RateBlock)
                {
                    dobj->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetValBlock:
            case nOMObjAnimCommandSetVal:
                payload = dobj->anim_joint.event32->command.payload;
                flags = AObjAnimAdvance(dobj->anim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = dobj->anim_joint.event32->f;

                        AObjAnimAdvance(dobj->anim_joint.event32);

                        track_aobjs[i]->kind = 2;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->rate_base = (track_aobjs[i]->value_target - track_aobjs[i]->value_base) / payload;
                        }
                        track_aobjs[i]->length = -dobj->anim_wait - dobj->anim_speed;
                        track_aobjs[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValBlock)
                {
                    dobj->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetValRateBlock:
            case nOMObjAnimCommandSetValRate:
                payload = dobj->anim_joint.event32->command.payload;
                flags = AObjAnimAdvance(dobj->anim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = dobj->anim_joint.event32->f;

                        AObjAnimAdvance(dobj->anim_joint.event32);

                        track_aobjs[i]->rate_base = track_aobjs[i]->rate_target;
                        track_aobjs[i]->rate_target = dobj->anim_joint.event32->f;

                        AObjAnimAdvance(dobj->anim_joint.event32);

                        track_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        track_aobjs[i]->length = -dobj->anim_wait - dobj->anim_speed;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValRateBlock)
                {
                    dobj->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetTargetRate:
                flags = AObjAnimAdvance(dobj->anim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->rate_target = dobj->anim_joint.event32->f;

                        AObjAnimAdvance(dobj->anim_joint.event32);
                    }
                }
                break;

            case nOMObjAnimCommandWait:
                dobj->anim_wait += AObjAnimAdvance(dobj->anim_joint.event32)->command.payload;
                break;

            case nOMObjAnimCommandSetValAfterBlock:
            case nOMObjAnimCommandSetValAfter:
                payload = dobj->anim_joint.event32->command.payload;
                flags = AObjAnimAdvance(dobj->anim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = dobj->anim_joint.event32->f;

                        AObjAnimAdvance(dobj->anim_joint.event32);

                        track_aobjs[i]->kind = 1;
                        track_aobjs[i]->length_invert = payload;
                        track_aobjs[i]->length = -dobj->anim_wait - dobj->anim_speed;
                        track_aobjs[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValAfterBlock)
                {
                    dobj->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetAnim:
                AObjAnimAdvance(dobj->anim_joint.event32);
                dobj->anim_joint.event32 = dobj->anim_joint.event32->p;
                dobj->anim_frame = -dobj->anim_wait;
                dobj->parent_gobj->anim_frame = -dobj->anim_wait;

                if ((dobj->is_anim_root != FALSE) && (dobj->parent_gobj->proc_anim != NULL))
                {
                    dobj->parent_gobj->proc_anim(dobj, -2, 0);
                }
                break;

            case nOMObjAnimCommandJump:
                AObjAnimAdvance(dobj->anim_joint.event32);
                dobj->anim_joint.event32 = dobj->anim_joint.event32->p;

                if ((dobj->is_anim_root != FALSE) && (dobj->parent_gobj->proc_anim != NULL)) 
                {
                    dobj->parent_gobj->proc_anim(dobj, -2, 0);
                }
                break;

            case ANIM_CMD_12:
                payload = dobj->anim_joint.event32->command.payload;
                flags = AObjAnimAdvance(dobj->anim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForDObj(dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->length += payload;
                    }
                }
                break;

            case nOMObjAnimCommandSetInterp:
                AObjAnimAdvance(dobj->anim_joint.event32);

                if (track_aobjs[nOMObjAnimTrackTraI - nOMObjAnimTrackJointStart] == NULL) 
                { 
                    track_aobjs[nOMObjAnimTrackTraI - nOMObjAnimTrackJointStart] = gcAddAObjForDObj(dobj, nOMObjAnimTrackTraI); 
                }
                track_aobjs[nOMObjAnimTrackTraI - nOMObjAnimTrackJointStart]->interpolate = dobj->anim_joint.event32->p;

                AObjAnimAdvance(dobj->anim_joint.event32);
                break;

            case nOMObjAnimCommandEnd:
                aobj = dobj->aobj;

                while (aobj != NULL)
                {
                    if (aobj->kind != nOMObjAnimKindNone)
                    {
                        aobj->length += dobj->anim_speed + dobj->anim_wait;
                    }
                    aobj = aobj->next;
                }
                dobj->anim_frame = dobj->anim_wait;
                dobj->parent_gobj->anim_frame = dobj->anim_wait;
                dobj->anim_wait = AOBJ_ANIM_END;

                if ((dobj->is_anim_root != FALSE) && (dobj->parent_gobj->proc_anim != NULL))
                {
                    dobj->parent_gobj->proc_anim(dobj, -1, 0);
                }
                return; // not break

            case nOMObjAnimCommandSetFlags:
                dobj->flags = dobj->anim_joint.event32->command.flags;
                dobj->anim_wait += AObjAnimAdvance(dobj->anim_joint.event32)->command.payload;
                break;

            case ANIM_CMD_16:
                if (dobj->parent_gobj->proc_anim != NULL)
                {
                    // only seems to match when spelled out...
                    dobj->parent_gobj->proc_anim
                    (
                        dobj,
                        dobj->anim_joint.event32->command.flags >> 8,
                        (u8)dobj->anim_joint.event32->command.flags
                    );
                }
                dobj->anim_wait += AObjAnimAdvance(dobj->anim_joint.event32)->command.payload;
                break;

            case ANIM_CMD_17:
                flags = dobj->anim_joint.event32->command.flags;
                dobj->anim_wait += AObjAnimAdvance(dobj->anim_joint.event32)->command.payload;

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
                            dobj->parent_gobj->proc_anim(dobj, i, dobj->anim_joint.event32->f);
                        }
                        AObjAnimAdvance(dobj->anim_joint.event32);
                    }
                }
                break;

                // empty, but necessary
            default:
                break;
            }
        } 
        while (dobj->anim_wait <= 0.0F);
    }
}

f32 gcGetInterpValueCubic(f32 length_invert, f32 length, f32 value_base, f32 value_target, f32 rate_base, f32 rate_target) 
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

f32 gcGetInterpRateCubic(f32 length_invert, f32 length, f32 value_base, f32 value_target, f32 rate_base, f32 rate_target) 
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
        return gcGetInterpValueCubic
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
        return gcGetInterpRateCubic
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

    if (dobj->anim_wait != AOBJ_ANIM_NULL) 
    {
        aobj = dobj->aobj;

        while (aobj != NULL)
        {
            if (aobj->kind != nOMObjAnimKindNone)
            {
                if (dobj->anim_wait != AOBJ_ANIM_END) 
                { 
                    aobj->length += dobj->anim_speed; 
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

                    case nOMObjAnimTrackTraI:
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
        if (dobj->anim_wait == AOBJ_ANIM_END) 
        { 
            dobj->anim_wait = F32_MIN; 
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

    if (mobj->anim_wait != AOBJ_ANIM_NULL)
    {
        if (mobj->anim_wait == AOBJ_ANIM_CHANGED)
        {
            mobj->anim_wait = -mobj->anim_frame;
        }
        else
        {
            mobj->anim_wait -= mobj->anim_speed;
            mobj->anim_frame += mobj->anim_speed;

            if (mobj->anim_wait > 0.0F)
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
            if (mobj->matanim_joint.event32 == NULL)
            {
                aobj = mobj->aobj;

                while (aobj != NULL)
                {
                    if (aobj->kind != nOMObjAnimKindNone)
                    {
                        aobj->length += mobj->anim_speed + mobj->anim_wait;
                    }
                    aobj = aobj->next;
                }
                mobj->anim_frame = mobj->anim_wait;
                mobj->anim_wait = AOBJ_ANIM_END;

                break; // or return?
            }
            command_kind = mobj->matanim_joint.event32->command.opcode;

            switch (command_kind)
            {
            case nOMObjAnimCommandSetVal0RateBlock:
            case nOMObjAnimCommandSetVal0Rate:
                payload = mobj->matanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint.event32)->command.flags;

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
                            mat_aobjs[i] = gcAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
                        }
                        mat_aobjs[i]->value_base = mat_aobjs[i]->value_target;
                        mat_aobjs[i]->value_target = mobj->matanim_joint.event32->f;

                        AObjAnimAdvance(mobj->matanim_joint.event32);

                        mat_aobjs[i]->rate_base = mat_aobjs[i]->rate_target;
                        mat_aobjs[i]->rate_target = 0.0F;

                        mat_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            mat_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        mat_aobjs[i]->length = -mobj->anim_wait - mobj->anim_speed;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetVal0RateBlock)
                {
                    mobj->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetValBlock:
            case nOMObjAnimCommandSetVal:
                payload = mobj->matanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint.event32)->command.flags;

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
                            mat_aobjs[i] = gcAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
                        }
                        mat_aobjs[i]->value_base = mat_aobjs[i]->value_target;
                        mat_aobjs[i]->value_target = mobj->matanim_joint.event32->f;

                        AObjAnimAdvance(mobj->matanim_joint.event32);

                        mat_aobjs[i]->kind = 2;

                        if (payload != 0.0F)
                        {
                            mat_aobjs[i]->rate_base = (mat_aobjs[i]->value_target - mat_aobjs[i]->value_base) / payload;
                        }
                        mat_aobjs[i]->length = -mobj->anim_wait - mobj->anim_speed;
                        mat_aobjs[i]->rate_target = 0.0F;
                    }
                }

                if (command_kind == nOMObjAnimCommandSetValBlock)
                {
                    mobj->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetValRateBlock:
            case nOMObjAnimCommandSetValRate:
                payload = mobj->matanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint.event32)->command.flags;

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
                            mat_aobjs[i] = gcAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
                        }
                        mat_aobjs[i]->value_base = mat_aobjs[i]->value_target;
                        mat_aobjs[i]->value_target = mobj->matanim_joint.event32->f;

                        AObjAnimAdvance(mobj->matanim_joint.event32);

                        mat_aobjs[i]->rate_base = mat_aobjs[i]->rate_target;
                        mat_aobjs[i]->rate_target = mobj->matanim_joint.event32->f;

                        AObjAnimAdvance(mobj->matanim_joint.event32);

                        mat_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            mat_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        mat_aobjs[i]->length = -mobj->anim_wait - mobj->anim_speed;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValRateBlock)
                {
                    mobj->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetTargetRate:
                flags = AObjAnimAdvance(mobj->matanim_joint.event32)->command.flags;

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
                            mat_aobjs[i] = gcAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
                        }
                        mat_aobjs[i]->rate_target = mobj->matanim_joint.event32->f;

                        AObjAnimAdvance(mobj->matanim_joint.event32);
                    }
                }
                break;

            case nOMObjAnimCommandWait:
                mobj->anim_wait += mobj->matanim_joint.event32->command.payload;

                AObjAnimAdvance(mobj->matanim_joint.event32);
                break;

            case nOMObjAnimCommandSetValAfterBlock:
            case nOMObjAnimCommandSetValAfter:
                payload = mobj->matanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint.event32)->command.flags;

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
                            mat_aobjs[i] = gcAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
                        }
                        mat_aobjs[i]->value_base = mat_aobjs[i]->value_target;
                        mat_aobjs[i]->value_target = mobj->matanim_joint.event32->f;

                        AObjAnimAdvance(mobj->matanim_joint.event32);

                        mat_aobjs[i]->kind = 1;

                        mat_aobjs[i]->length_invert = payload;
                        mat_aobjs[i]->length = -mobj->anim_wait - mobj->anim_speed;

                        mat_aobjs[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValAfterBlock)
                {
                    mobj->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetAnim:
                AObjAnimAdvance(mobj->matanim_joint.event32);

                mobj->matanim_joint.event32 = mobj->matanim_joint.event32->p;
                mobj->anim_frame = -mobj->anim_wait;
                break;

            case nOMObjAnimCommandJump:
                AObjAnimAdvance(mobj->matanim_joint.event32);

                mobj->matanim_joint.event32 = mobj->matanim_joint.event32->p;
                break;

            case ANIM_CMD_12:
                payload = mobj->matanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint.event32)->command.flags;

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
                            mat_aobjs[i] = gcAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialStart);
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
                        aobj->length += mobj->anim_speed + mobj->anim_wait;
                    }
                    aobj = aobj->next;
                }
                mobj->anim_frame = mobj->anim_wait;
                mobj->anim_wait = AOBJ_ANIM_END;
                return; // not break

            case nOMObjAnimCommandSetExtValAfterBlock:
            case nOMObjAnimCommandSetExtValAfter:
                payload = mobj->matanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint.event32)->command.flags;

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
                            matspecial_aobjs[i] = gcAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialSubStart);
                        }
                        matspecial_aobjs[i]->value_base = matspecial_aobjs[i]->value_target;
                        matspecial_aobjs[i]->value_target = mobj->matanim_joint.event32->f;

                        AObjAnimAdvance(mobj->matanim_joint.event32);

                        matspecial_aobjs[i]->kind = 1;

                        matspecial_aobjs[i]->length_invert = payload;
                        matspecial_aobjs[i]->length = -mobj->anim_wait - mobj->anim_speed;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetExtValAfterBlock)
                {
                    mobj->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetExtValBlock:
            case nOMObjAnimCommandSetExtVal:
                payload = mobj->matanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint.event32)->command.flags;

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
                            matspecial_aobjs[i] = gcAddAObjForMObj(mobj, i + nOMObjAnimTrackMaterialSubStart);
                        }
                        matspecial_aobjs[i]->value_base = matspecial_aobjs[i]->value_target;
                        matspecial_aobjs[i]->value_target = mobj->matanim_joint.event32->f;

                        AObjAnimAdvance(mobj->matanim_joint.event32);

                        matspecial_aobjs[i]->kind = 2;

                        if (payload != 0.0F)
                        {
                            matspecial_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        matspecial_aobjs[i]->length = -mobj->anim_wait - mobj->anim_speed;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetExtValBlock)
                {
                    mobj->anim_wait += payload;
                }
                break;

            case ANIM_CMD_22:
                mobj->anim_wait = mobj->matanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(mobj->matanim_joint.event32)->command.flags;

                if (flags & 0x01)
                {
                    mobj->sub.unk4C = mobj->matanim_joint.event32->u;
                    AObjAnimAdvance(mobj->matanim_joint.event32);
                }
                if (flags & 0x02)
                {
                    mobj->sub.unk6C = mobj->matanim_joint.event32->u;
                    AObjAnimAdvance(mobj->matanim_joint.event32);
                }
                if (flags & 0x04)
                {
                    mobj->sub.unk68 = mobj->matanim_joint.event32->u;
                    AObjAnimAdvance(mobj->matanim_joint.event32);
                }
                if (flags & 0x08)
                {
                    mobj->sub.unk74 = mobj->matanim_joint.event32->u;
                    AObjAnimAdvance(mobj->matanim_joint.event32);
                }
                if (flags & 0x10)
                {
                    mobj->sub.unk70 = mobj->matanim_joint.event32->u;
                    AObjAnimAdvance(mobj->matanim_joint.event32);
                }
                break;

            default:
                break;
            }
        } 
        while (mobj->anim_wait <= 0.0F);
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
    syColorPack color; // color
    f32 temp_f24;
    s32 interp;
    syColorPack sp38; // sp38
    syColorPack sp34; // sp34

    if (mobj->anim_wait != AOBJ_ANIM_NULL) 
    {
        aobj = mobj->aobj;
        
        while (aobj != NULL)
        {
            if (aobj->kind != nOMObjAnimKindNone) 
            {
                if (mobj->anim_wait != AOBJ_ANIM_END) 
                { 
                    aobj->length += mobj->anim_speed; 
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
                        mobj->palette_id = value; 
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
                        interp = (aobj->length * aobj->length_invert * 256.0F);
                    
                        if (interp < 0)
                        { 
                            interp = 0; 
                        }
                        if (interp > 256) 
                        { 
                            interp = 256; 
                        }
                        sp34.pack = 0;
                        sp38.pack = 0;

                        sp38.s.g = ((u8*)&aobj->value_base)[0];
                        sp38.s.a = ((u8*)&aobj->value_base)[1];
                        
                        sp34.s.g = ((u8*)&aobj->value_target)[0];
                        sp34.s.a = ((u8*)&aobj->value_target)[1];

                        sp38.pack = (256 - interp) * sp38.pack + sp34.pack * interp;

                        color.s.r = sp38.s.r;
                        color.s.g = sp38.s.b;

                        sp38.pack = 0;
                    
                        sp38.s.g = ((u8*)&aobj->value_base)[2];
                        sp38.s.a = ((u8*)&aobj->value_base)[3];
                    
                        sp34.s.g = ((u8*)&aobj->value_target)[2];
                        sp34.s.a = ((u8*)&aobj->value_target)[3];

                        sp38.pack = (256 - interp) * sp38.pack + sp34.pack * interp;

                        color.s.b = sp38.s.r;
                        color.s.a = sp38.s.b;
                        break;
                    
                    case nOMObjAnimKindStep:
                        color = (aobj->length_invert <= aobj->length) ? *(syColorPack*)&aobj->value_target : *(syColorPack*)&aobj->value_base;
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
        if(mobj->anim_wait == AOBJ_ANIM_END)
        {
            mobj->anim_wait = F32_MIN;
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
    dobj->anim_wait = dobj->anim_speed + length;

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

f32 gcGetDObjDescAxisTrack(DObjDesc *dobjdesc, s32 track)
{
    switch (track) 
    {
    case nOMObjAnimTrackRotX: 
        return dobjdesc->rotate.x;

    case nOMObjAnimTrackRotY: 
        return dobjdesc->rotate.y;

    case nOMObjAnimTrackRotZ: 
        return dobjdesc->rotate.z;

    case nOMObjAnimTrackTraX: 
        return dobjdesc->translate.x;

    case nOMObjAnimTrackTraY: 
        return dobjdesc->translate.y;

    case nOMObjAnimTrackTraZ: 
        return dobjdesc->translate.z;

    case nOMObjAnimTrackScaX: 
        return dobjdesc->scale.x;

    case nOMObjAnimTrackScaY: 
        return dobjdesc->scale.y;

    case nOMObjAnimTrackScaZ: 
        return dobjdesc->scale.z;
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
    DObjDesc *dobjdesc,
    s32 track,
    s32 rate_kind,
    Vec3f *translate,
    sb32 *is_axis_ready
)
{
    AObj *aobj = gcGetTrackAObj(seek_aobj, track);

    if ((aobj != NULL) && (aobj->kind != nOMObjAnimKindNone))
    {
        if ((is_desc_or_dobj == 0) && (dobj->anim_wait != AOBJ_ANIM_END))
        {
            aobj->length += dobj->anim_speed;
        }
        *axis_value = gcGetAObjValue(aobj);

        if (rate_kind != 0)
        {
            *rate = gcGetAObjRate(aobj);
        }
    }
    else if ((track == nOMObjAnimTrackTraX) || (track == nOMObjAnimTrackTraY) || (track == nOMObjAnimTrackTraZ))
    {
        if (*is_axis_ready != FALSE)
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
            aobj = gcGetTrackAObj(seek_aobj, nOMObjAnimTrackTraI);

            if ((aobj != NULL) && (aobj->kind != nOMObjAnimKindNone))
            {
                if ((is_desc_or_dobj == 0) && (dobj->anim_wait != AOBJ_ANIM_END))
                {
                    aobj->length += dobj->anim_speed;
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
                *is_axis_ready = TRUE;
            }
            else if (is_desc_or_dobj == 0)
            {
                if (dobjdesc == NULL)
                {
                    return TRUE;
                }
                else *axis_value = gcGetDObjDescAxisTrack(dobjdesc, track);
            }
            else *axis_value = gcGetDObjAxisTrack(dobj, track);
        }
    }
    else if (is_desc_or_dobj == 0)
    {
        if (dobjdesc == NULL)
        {
            return TRUE;
        }
        *axis_value = gcGetDObjDescAxisTrack(dobjdesc, track);
    }
    else *axis_value = gcGetDObjAxisTrack(dobj, track);

    return FALSE;
}

void gcGetAObjTrackAnimTimeMax(s32 track, f32 translate, f32 rotate, f32 scale, f32 *anim_time_max, AObj *aobj)
{
    f32 rate_combine;
    f32 value_diff;
    f32 temp;
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

        rate_combine = (2.0F * aobj->rate_base) + aobj->rate_target;
        value_diff = (-6.0F * value) * (aobj->value_target - aobj->value_base);
        
        if (value_diff < SQUARE(rate_combine))
        {
            temp = (sqrtf(SQUARE(rate_combine) - value_diff) + -rate_combine) / value;
            
            TAKE_MAX(*anim_time_max, temp);
            
            temp = (-rate_combine - sqrtf(SQUARE(rate_combine) - value_diff)) / value;
            
            TAKE_MAX(*anim_time_max, temp);
        }
        else if ((SQUARE(rate_combine) + -value_diff) == (0, 0.0F))
        {
            temp = -rate_combine / value;
            
            TAKE_MAX(*anim_time_max, temp);
        }
        if ((SQUARE(rate_combine) + value_diff) > 0.0F)
        {
            temp = (sqrtf(SQUARE(rate_combine) + value_diff) + -rate_combine) / -value;

            TAKE_MAX(*anim_time_max, temp);
            
            temp = (-rate_combine - sqrtf(SQUARE(rate_combine) + value_diff)) / -value;

            TAKE_MAX(*anim_time_max, temp);
        }
        else if ((SQUARE(rate_combine) + value_diff) == (0, 0.0F))
        {
            temp = -rate_combine / -value;
            
            TAKE_MAX(*anim_time_max, temp);
        }
        rate_combine = -(aobj->rate_base + (2.0F * aobj->rate_target));
        value_diff = (-6.0F * value) * (aobj->value_base - aobj->value_target);
        
        if (value_diff < SQUARE(rate_combine))
        {
            temp = (sqrtf(SQUARE(rate_combine) - value_diff) + -rate_combine) / value;
            
            TAKE_MAX(*anim_time_max, temp);
            
            temp = (-rate_combine - sqrtf(SQUARE(rate_combine) - value_diff)) / value;
            
            TAKE_MAX(*anim_time_max, temp);
        }
        else if ((SQUARE(rate_combine) + -value_diff) == (0, 0.0F))
        {
            temp = -rate_combine / value;
            
            TAKE_MAX(*anim_time_max, temp);
        }
        if ((SQUARE(rate_combine) + value_diff) > 0.0F)
        {
            temp = (sqrtf(SQUARE(rate_combine) + value_diff) + -rate_combine) / -value;
            
            TAKE_MAX(*anim_time_max, temp);
            
            temp = (-rate_combine - sqrtf(value_diff + SQUARE(rate_combine))) / -value;
            
            TAKE_MAX(*anim_time_max, temp);
        }
        else if ((SQUARE(rate_combine) + value_diff) == (0, 0.0F))
        {
            temp = -rate_combine / -value;
            
            TAKE_MAX(*anim_time_max, temp);
        }
    }
}

f32 gcGetDObjTempAnimTimeMax
(
    DObj *dobj,
    AObjEvent32 **anim_joints,
    f32 anim_frame,
    DObjDesc *dobjdesc,
    s32 rate_kind,
    f32 length,
    f32 translate,
    f32 rotate,
    f32 scale
)
{
    AObj *root_aobj;
    AObj *parse_aobj;
    AObj *new_aobj;
    AObj *origin_aobj;
    f32 value_old;
    f32 value_new;
    f32 rate_old;
    f32 rate_new;
    f32 time_max;
    s32 i;
    sb32 is_dobj_axis_ready;
    sb32 is_desc_axis_ready;
    Vec3f dobj_translate;
    Vec3f desc_translate;

    parse_aobj = NULL;

    is_dobj_axis_ready = FALSE;
    is_desc_axis_ready = FALSE;

    time_max = 0.0F;

    if ((anim_joints == NULL) || (*anim_joints == NULL))
    {
        if (dobjdesc == NULL)
        {
            gcRemoveAObjFromDObj(dobj);

            return 0;
        }
    }
    root_aobj = dobj->aobj;
    dobj->aobj = NULL;

    if ((anim_joints != NULL) && (*anim_joints != NULL))
    {
        dobj->anim_joint.event32 = *anim_joints;
        dobj->anim_wait = AOBJ_ANIM_CHANGED;
        dobj->anim_frame = anim_frame;

        gcParseDObjAnimJoint(dobj);

        parse_aobj = dobj->aobj;
        dobj->aobj = NULL;
    }
    for (i = nOMObjAnimTrackJointStart; i <= nOMObjAnimTrackJointEnd; i++)
    {
        if (i == nOMObjAnimTrackTraI)
        {
            continue;
        }
        rate_new = 0.0F;
        rate_old = 0.0F;

        if (gcCheckGetDObjNoAxisTrack(0, dobj, &value_new, &rate_new, parse_aobj, dobjdesc, i, rate_kind, &desc_translate, &is_desc_axis_ready))
        {
            continue;
        }
        gcCheckGetDObjNoAxisTrack(1, dobj, &value_old, &rate_old, root_aobj, dobjdesc, i, rate_kind, &dobj_translate, &is_dobj_axis_ready);

        if ((value_new != value_old) || (rate_new != rate_old))
        {
            new_aobj = gcAddAObjForDObj(dobj, i);

            if ((i == nOMObjAnimTrackRotX) || (i == nOMObjAnimTrackRotY) || (i == nOMObjAnimTrackRotZ))
            {
                if (ABS(value_new - value_old) > ABS(value_new - (value_old + F_CST_DTOR32(360.0F))))
                {
                    value_old += F_CST_DTOR32(360.0F);
                }
                if (ABS(value_new - value_old) > ABS(value_new - (value_old - F_CST_DTOR32(360.0F))))
                {
                    value_old -= F_CST_DTOR32(360.0F);
                }
            }
            switch (rate_kind)
            {
            case 0:
                new_aobj->value_base = value_old;
                new_aobj->value_target = value_new;

                new_aobj->kind = nOMObjAnimKindLinear;

                new_aobj->length_invert = 1.0F / length;
                new_aobj->length = -dobj->anim_speed;

                new_aobj->rate_base = (new_aobj->value_target - new_aobj->value_base) / length;
                new_aobj->rate_target = 0.0F;
                break;

            case 1:
            case 2:
                new_aobj->value_base = value_old;
                new_aobj->value_target = value_new;

                new_aobj->kind = nOMObjAnimKindCubic;

                new_aobj->length_invert = 1.0F / length;
                new_aobj->length = -dobj->anim_speed;

                new_aobj->rate_base = rate_old;
                new_aobj->rate_target = rate_new;

                if (rate_kind == nOMObjAnimKindLinear)
                {
                    gcGetAObjTrackAnimTimeMax(i, translate, rotate, scale, &time_max, new_aobj);
                }
                break;

            default:
                break;
            }
        }
    }
    origin_aobj = dobj->aobj;
    dobj->aobj = root_aobj;

    gcRemoveAObjFromDObj(dobj);

    dobj->aobj = parse_aobj;

    gcRemoveAObjFromDObj(dobj);

    dobj->aobj = origin_aobj;
    dobj->anim_joint.event32 = NULL;

    dobj->anim_wait = dobj->anim_speed + length;
    dobj->anim_frame = -dobj->anim_speed;

    return time_max;
}

// Thanks, inspect!
f32 func_8000EC64_F864
(
    GObj *gobj,
    AObjEvent32 **anim_joints,
    f32 anim_frame,
    DObjDesc *dobjdesc,
    s32 rate_kind,
    f32 length_max,
    f32 length_min,
    f32 translate,
    f32 rotate,
    f32 scale
) 
{
    DObj *dobj;
    f32 temp;
    f32 length_current;
    f32 length_max_old;

    dobj = DObjGetStruct(gobj);
    gobj->anim_frame = anim_frame;
    
    if (rate_kind == 2)
    {
        length_max_old = length_max;
        
        length_max = 0.0F;
        
        while (dobj != NULL)
        {
            temp = gcGetDObjTempAnimTimeMax(dobj, anim_joints, anim_frame, dobjdesc, rate_kind, length_max, translate, rotate, scale);
            
            if (length_max < temp) 
            {
                length_max = temp;
            }
            if (anim_joints != NULL)
            {
                anim_joints++;
            }
            if (dobjdesc != NULL)
            {
                dobjdesc++;
            }
            dobj = gcGetTreeDObjNext(dobj);
        }
        dobj = DObjGetStruct(gobj);

        if (length_max < length_max_old)
        {
            length_max = length_max_old;
        } 
        else if (length_max > length_min)
        {
            length_max = length_min;
        }
        while (dobj != NULL)
        {
            gcSetDObjAnimLength(dobj, length_max);

            dobj = gcGetTreeDObjNext(dobj);
        }
    } 
    else while (dobj != NULL)
    {
        gcGetDObjTempAnimTimeMax(dobj, anim_joints, anim_frame, dobjdesc, rate_kind, length_max, translate, rotate, scale);

        if (anim_joints != NULL)
        {
            anim_joints++;
        }
        if (dobjdesc != NULL)
        {
            dobjdesc++;
        }
        dobj = gcGetTreeDObjNext(dobj);
    }
    gobj->anim_frame = 0.0F;
    
    return length_max;
}

void func_8000EE40_FA40(GObj *gobj, AObjEvent32 **anim_joints, f32 anim_frame, DObjDesc *dobjdesc)
{
    s32 i;
    DObj *dobj;
    f32 axis_value;
    sb32 unused;
    sb32 is_axis_ready;
    Vec3f translate;
    sb32 is_anim_root;

    dobj = DObjGetStruct(gobj);
    
    is_axis_ready = FALSE;
    is_anim_root = TRUE;
    
    gobj->anim_frame = anim_frame;

    while (dobj != NULL) 
    {
        if (*anim_joints != NULL)
        {
            gcAddDObjAnimJoint(dobj, *anim_joints, anim_frame);
            
            dobj->is_anim_root = is_anim_root;
            is_anim_root = FALSE;

            for (i = nOMObjAnimTrackJointStart; i <= nOMObjAnimTrackJointEnd; i++)
            {
                if (i != nOMObjAnimTrackTraI)
                {
                    gcCheckGetDObjNoAxisTrack
                    (
                        0, 
                        dobj,
                        &axis_value, 
                        NULL, 
                        dobj->aobj, 
                        dobjdesc, 
                        i, 
                        0, 
                        &translate, 
                        &is_axis_ready
                    );
                    switch (i) 
                    {
                    case nOMObjAnimTrackRotX:
                        dobj->rotate.vec.f.x = axis_value;
                        break;
                    
                    case nOMObjAnimTrackRotY:
                        dobj->rotate.vec.f.y = axis_value; 
                        break;
                    
                    case nOMObjAnimTrackRotZ:
                        dobj->rotate.vec.f.z = axis_value; 
                        break;
                    
                    case nOMObjAnimTrackTraX:
                        dobj->translate.vec.f.x = axis_value; 
                        break;
                    
                    case nOMObjAnimTrackTraY:
                        dobj->translate.vec.f.y = axis_value; 
                        break;
                    
                    case nOMObjAnimTrackTraZ:
                        dobj->translate.vec.f.z = axis_value; 
                        break;
                    
                    case nOMObjAnimTrackScaX:
                        dobj->scale.vec.f.x = axis_value; 
                        break;
                    
                    case nOMObjAnimTrackScaY:
                        dobj->scale.vec.f.y = axis_value; 
                        break;
                    
                    case nOMObjAnimTrackScaZ:
                        dobj->scale.vec.f.z = axis_value; 
                        break;
                    }
                }
            }
        }
        else
        {
            dobj->anim_wait = AOBJ_ANIM_NULL;
            dobj->is_anim_root = FALSE;
            
            if (dobjdesc != NULL)
            {
                dobj->translate.vec.f = dobjdesc->translate;
                dobj->rotate.vec.f = dobjdesc->rotate;
                dobj->scale.vec.f = dobjdesc->scale;
            }
        }
        anim_joints++;

        if (dobjdesc != NULL)
        {
            dobjdesc++;
        }
        dobj = gcGetTreeDObjNext(dobj);
    }
}

void gcAddDObjTransformTraRotSca(DObj *dobj)
{
    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyR, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformSca, 0);
}

DObj* gcAddDObjForGObjTraRotSca(GObj *gobj, void *dvar)
{
    DObj *dobj = gcAddDObjForGObj(gobj, dvar);

    gcAddDObjTransformTraRotSca(dobj);

    return dobj;
}

DObj* gcAddSiblingForDObjTraRotSca(DObj *dobj, void *dvar)
{
    DObj *sibling_dobj = gcAddSiblingForDObj(dobj, dvar);
    gcAddDObjTransformTraRotSca(sibling_dobj);

    return sibling_dobj;
}

DObj* gcAddChildForDObjTraRotSca(DObj *dobj, void *dvar)
{
    DObj *child_dobj = gcAddChildForDObj(dobj, dvar);
    gcAddDObjTransformTraRotSca(child_dobj);

    return child_dobj;
}

void gcSetupCommonDObjs(GObj *gobj, DObjDesc *dobjdesc, DObj **dobjs)
{
    s32 i;
    DObj* dobj;
    s32 id;
    DObj* array_dobjs[DOBJ_ARRAY_MAX];

    for (i = 0; i < ARRAY_COUNT(array_dobjs); i++)
    {
        array_dobjs[i] = NULL;
    }
    while (dobjdesc->index != ARRAY_COUNT(array_dobjs))
    {
        id = dobjdesc->index & 0xFFF;

        if (id != 0)
        {
            dobj = array_dobjs[id] = gcAddChildForDObj(array_dobjs[id - 1], dobjdesc->display_list);
        }
        else dobj = array_dobjs[0] = gcAddDObjForGObj(gobj, dobjdesc->display_list);
        
        if (dobjdesc->index & 0xF000)
        {
            gcAddOMMtxForDObjFixed(dobj, nOMTransformTra, 0);
        }
        if (dobjdesc->index & 0x8000)
        {
            gcAddOMMtxForDObjFixed(dobj, nOMTransformRecalcRotRpyRSca, 0);
        } 
        else if (dobjdesc->index & 0x4000)
        {
            gcAddOMMtxForDObjFixed(dobj, nOMTransform46, 0);
        }
        else if (dobjdesc->index & 0x2000)
        {
            gcAddOMMtxForDObjFixed(dobj, nOMTransform48, 0);
        }
        else if (dobjdesc->index & 0x1000)
        {
            gcAddOMMtxForDObjFixed(dobj, nOMTransform50, 0);
        }
        else gcAddDObjTransformTraRotSca(dobj);
        
        dobj->translate.vec.f = dobjdesc->translate;
        dobj->rotate.vec.f = dobjdesc->rotate;
        dobj->scale.vec.f = dobjdesc->scale;

        if (dobjs != NULL)
        {
            *dobjs++ = dobj;
        }
        dobjdesc++;
    }
}

void gcAddDObjTriTransformKind(DObj *dobj, u8 tk1, u8 tk2, u8 tk3)
{
    if (tk1 != nOMTransformNull) 
    {
        gcAddOMMtxForDObjFixed(dobj, tk1, 0);
    }
    if (tk2 != nOMTransformNull) 
    {
        gcAddOMMtxForDObjFixed(dobj, tk2, 0);
    }
    if (tk3 != nOMTransformNull) 
    {
        gcAddOMMtxForDObjFixed(dobj, tk3, 0);
    }
}

void gcDecideDObjTriTransformKind(DObj *dobj, u8 tk1, u8 tk2, u8 tk3, s32 flags)
{
    s32 tra_mode = 0;
    s32 sca_mode = 0;
    s32 rot_mode = 0;

    switch (tk1)
    {
    case nOMTransformTra:
        tra_mode = 1;
        break;

    case nOMTransformRotRpyR: 
        rot_mode = 1;
        break;

    case nOMTransformTraRotRpyR:
        rot_mode = 1;
        tra_mode = 1;
        break;
            
    case nOMTransformTraRotRpyRSca:
        sca_mode = 1;
        rot_mode = 1;
        tra_mode = 1;
        break;

    case nOMTransformRotPyrR: 
        rot_mode = 2; 
        break;

    case nOMTransformTraRotPyrR:
        rot_mode = 2;
        tra_mode = 1;
        break;
            
    case nOMTransformTraRotPyrRSca:
        rot_mode = 2;
        sca_mode = 1;
        tra_mode = 1;
        break;

    case nOMTransformSca: 
        sca_mode = 1;
        break;
    }
    switch (tk2)
    {
    case nOMTransformRotRpyR:
        rot_mode = 1; 
        break;

    case nOMTransformRotPyrR:
        rot_mode = 2;
        break;

    case nOMTransformSca:
        sca_mode = 1;
        break;
    }
    if (tk3 == nOMTransformSca)
    {
        sca_mode = 1;
    }
    if (tra_mode != 0)
    {
        gcAddOMMtxForDObjFixed(dobj, nOMTransformTra, 0);
    }
    if (flags & 0x4000)
    {
        if (rot_mode == 1)
        {
            gcAddOMMtxForDObjFixed(dobj, nOMTransform46, 0);
        } 
        else gcAddOMMtxForDObjFixed(dobj, nOMTransform45, 0);
    }
    else if (flags & 0x2000)
    {
        if (rot_mode == 1)
        {
            gcAddOMMtxForDObjFixed(dobj, nOMTransform48, 0);
        }
        else gcAddOMMtxForDObjFixed(dobj, nOMTransform47, 0);
    } 
    else if (flags & 0x1000)
    {
        if (rot_mode == 1)
        {
            gcAddOMMtxForDObjFixed(dobj, nOMTransform50, 0);
        }
        else gcAddOMMtxForDObjFixed(dobj, nOMTransform49, 0);
    } 
    else if (sca_mode != 0)
    {
        if (rot_mode == 1)
        {
            gcAddOMMtxForDObjFixed(dobj, nOMTransformRecalcRotRpyRSca, 0);
        }
        else gcAddOMMtxForDObjFixed(dobj, nOMTransformRecalcRotPyrRSca, 0);
    }
    else if (rot_mode == 1)
    {
        gcAddOMMtxForDObjFixed(dobj, nOMTransformRecalcRotRpyR, 0);
    }
    else gcAddOMMtxForDObjFixed(dobj, nOMTransformRecalcRotPyrR, 0);
}

// 0x8000F590
void gcSetupCustomDObjs(GObj *gobj, DObjDesc *dobjdesc, DObj **dobjs, u8 tk1, u8 tk2, u8 tk3)
{
    s32 i;
    DObj *dobj;
    s32 id;
    DObj *array_dobjs[DOBJ_ARRAY_MAX];

    for (i = 0; i < ARRAY_COUNT(array_dobjs); i++)
    {
        array_dobjs[i] = NULL;
    }
    while (dobjdesc->index != ARRAY_COUNT(array_dobjs)) 
    {
        id = dobjdesc->index & 0xFFF;

        if (id != 0)
        {
            dobj = array_dobjs[id] = gcAddChildForDObj(array_dobjs[id - 1], dobjdesc->display_list);
        } 
        else dobj = array_dobjs[0] = gcAddDObjForGObj(gobj, dobjdesc->display_list);
        
        if (dobjdesc->index & 0xF000) 
        {
            gcDecideDObjTriTransformKind(dobj, tk1, tk2, tk3, dobjdesc->index & 0xF000);
        } 
        else gcAddDObjTriTransformKind(dobj, tk1, tk2, tk3);
        
        dobj->translate.vec.f = dobjdesc->translate;
        dobj->rotate.vec.f = dobjdesc->rotate;
        dobj->scale.vec.f = dobjdesc->scale;

        if (dobjs != NULL) 
        {
            *dobjs++ = dobj;
        }
        dobjdesc++;
    }
}

// 0x8000F720
void gcSetupCustomDObjsWithMObj(GObj *gobj, DObjDesc *dobjdesc, MObjSub ***p_mobjsubs, DObj **dobjs, u8 tk1, u8 tk2, u8 tk3)
{
    s32 i;
    DObj *dobj;
    s32 id;
    DObj *array_dobjs[DOBJ_ARRAY_MAX];

    for (i = 0; i < ARRAY_COUNT(array_dobjs); i++)
    {
        array_dobjs[i] = NULL;
    }
    while (dobjdesc->index != ARRAY_COUNT(array_dobjs)) 
    {
        id = dobjdesc->index & 0xFFF;

        if (id != 0)
        {
            dobj = array_dobjs[id] = gcAddChildForDObj(array_dobjs[id - 1], dobjdesc->display_list);
        } 
        else dobj = array_dobjs[0] = gcAddDObjForGObj(gobj, dobjdesc->display_list);
        
        if (dobjdesc->index & 0xF000) 
        {
            gcDecideDObjTriTransformKind(dobj, tk1, tk2, tk3, dobjdesc->index & 0xF000);
        } 
        else gcAddDObjTriTransformKind(dobj, tk1, tk2, tk3);
        
        dobj->translate.vec.f = dobjdesc->translate;
        dobj->rotate.vec.f = dobjdesc->rotate;
        dobj->scale.vec.f = dobjdesc->scale;

        if (p_mobjsubs != NULL)
        {
            if (*p_mobjsubs != NULL)
            {
                MObjSub **mobjsubs = *p_mobjsubs;
                MObjSub *mobjsub = *mobjsubs;

                while (mobjsub != NULL)
                {
                    gcAddMObjForDObj(dobj, mobjsub);

                    mobjsubs++;

                    mobjsub = *mobjsubs;
                }
            }
            p_mobjsubs++;
        }
        if (dobjs != NULL)
        {
            *dobjs++ = dobj;
        }
        dobjdesc++;
    }
}

void gcAddMObjAll(GObj *gobj, MObjSub ***p_mobjsubs)
{
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        if (p_mobjsubs != NULL)
        {
            if (*p_mobjsubs != NULL)
            {
                MObjSub **mobjsubs = *p_mobjsubs;
                MObjSub *mobjsub = *mobjsubs;

                while (mobjsub != NULL)
                {
                    gcAddMObjForDObj(dobj, mobjsub);

                    mobjsubs++;

                    mobjsub = *mobjsubs;
                }
            }
            p_mobjsubs++;
        }
        dobj = gcGetTreeDObjNext(dobj);
    }
}

void gcSetDObjTransformsForGObj(GObj *gobj, DObjDesc *dobjdesc)
{
    DObj *dobj = DObjGetStruct(gobj);

    while ((dobj != NULL) && (dobjdesc->index != DOBJ_ARRAY_MAX))
    {
        dobj->translate.vec.f = dobjdesc->translate;
        dobj->rotate.vec.f = dobjdesc->rotate;
        dobj->scale.vec.f = dobjdesc->scale;

        dobjdesc++;

        dobj = gcGetTreeDObjNext(dobj);
    }
}

void gcAddCameraCamAnimJoint(Camera *cam, AObjEvent32 *camanim_joint, f32 anim_frame)
{
    AObj *aobj = cam->aobj;

    while (aobj != NULL)
    {
        aobj->kind = nOMObjAnimKindNone;
        aobj = aobj->next;
    }
    cam->camanim_joint.event32 = camanim_joint;
    
    cam->anim_wait = AOBJ_ANIM_CHANGED;
    cam->anim_frame = anim_frame;
}

void gcParseCameraCamAnimJoint(Camera *cam)
{
    AObj *track_aobjs[nOMObjAnimTrackCameraEnd - nOMObjAnimTrackCameraStart + 1];
    AObj *aobj;
    s32 i;
    u32 command_kind;
    u32 flags;
    f32 payload;

    if (cam->anim_wait != AOBJ_ANIM_NULL)
    {
        if (cam->anim_wait == AOBJ_ANIM_CHANGED)
        {
            cam->anim_wait = -cam->anim_frame;
        }
        else
        {
            cam->anim_wait -= cam->anim_speed;
            cam->anim_frame += cam->anim_speed;
            cam->parent_gobj->anim_frame = cam->anim_frame;

            if (cam->anim_wait > 0.0F)
            {
                return;
            }
        }
        for (i = 0; i < ARRAY_COUNT(track_aobjs); i++)
        {
            track_aobjs[i] = NULL;
        }
        aobj = cam->aobj;

        while (aobj != NULL)
        {
            if ((aobj->track >= nOMObjAnimTrackCameraStart) && (aobj->track <= nOMObjAnimTrackCameraEnd))
            {
                track_aobjs[aobj->track - nOMObjAnimTrackCameraStart] = aobj;
            }
            aobj = aobj->next;
        }
        do
        {
            if (cam->camanim_joint.event32 == NULL)
            {
                aobj = cam->aobj;

                while (aobj != NULL)
                {
                    if (aobj->kind)
                    {
                        aobj->length += cam->anim_speed + cam->anim_wait;
                    }
                    aobj = aobj->next;
                }
                cam->anim_frame = cam->anim_wait;
                cam->anim_wait = AOBJ_ANIM_END;

                return;
            }
            command_kind = cam->camanim_joint.event32->command.opcode;

            switch (command_kind)
            {
            case nOMObjAnimCommandSetVal0RateBlock:
            case nOMObjAnimCommandSetVal0Rate:
                payload = cam->camanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(cam->camanim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForCamera(cam, i + nOMObjAnimTrackCameraStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = cam->camanim_joint.event32->f;

                        AObjAnimAdvance(cam->camanim_joint.event32);

                        track_aobjs[i]->rate_base = track_aobjs[i]->rate_target;
                        track_aobjs[i]->rate_target = 0.0F;
                        track_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        track_aobjs[i]->length = -cam->anim_wait - cam->anim_speed;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetVal0RateBlock)
                {
                    cam->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetValBlock:
            case nOMObjAnimCommandSetVal:
                payload = cam->camanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(cam->camanim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForCamera(cam, i + nOMObjAnimTrackCameraStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = cam->camanim_joint.event32->f;

                        AObjAnimAdvance(cam->camanim_joint.event32);

                        track_aobjs[i]->kind = 2;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->rate_base = (track_aobjs[i]->value_target - track_aobjs[i]->value_base) / payload;
                        }
                        track_aobjs[i]->length = -cam->anim_wait - cam->anim_speed;
                        track_aobjs[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValBlock)
                {
                    cam->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetValRateBlock:
            case nOMObjAnimCommandSetValRate:
                payload = cam->camanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(cam->camanim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForCamera(cam, i + nOMObjAnimTrackCameraStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = cam->camanim_joint.event32->f;

                        AObjAnimAdvance(cam->camanim_joint.event32);

                        track_aobjs[i]->rate_base = track_aobjs[i]->rate_target;
                        track_aobjs[i]->rate_target = cam->camanim_joint.event32->f;

                        AObjAnimAdvance(cam->camanim_joint.event32);

                        track_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        track_aobjs[i]->length = -cam->anim_wait - cam->anim_speed;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValRateBlock)
                {
                    cam->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetTargetRate:
                flags = AObjAnimAdvance(cam->camanim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForCamera(cam, i + nOMObjAnimTrackCameraStart);
                        }
                        track_aobjs[i]->rate_target = cam->camanim_joint.event32->f;

                        AObjAnimAdvance(cam->camanim_joint.event32);
                    }
                }
                break;

            case nOMObjAnimCommandWait:
                cam->anim_wait += AObjAnimAdvance(cam->camanim_joint.event32)->command.payload;
                break;

            case nOMObjAnimCommandSetValAfterBlock:
            case nOMObjAnimCommandSetValAfter:
                payload = cam->camanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(cam->camanim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForCamera(cam, i + nOMObjAnimTrackCameraStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;
                        track_aobjs[i]->value_target = cam->camanim_joint.event32->f;

                        AObjAnimAdvance(cam->camanim_joint.event32);

                        track_aobjs[i]->kind = 1;
                        track_aobjs[i]->length_invert = payload;
                        track_aobjs[i]->length = -cam->anim_wait - cam->anim_speed;
                        track_aobjs[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetValAfterBlock)
                {
                    cam->anim_wait += payload;
                }
                break;

            case nOMObjAnimCommandSetAnim:
                AObjAnimAdvance(cam->camanim_joint.event32);
                cam->camanim_joint.event32 = cam->camanim_joint.event32->p;
                cam->anim_frame = -cam->anim_wait;
                cam->parent_gobj->anim_frame = -cam->anim_wait;
                break;

            case nOMObjAnimCommandJump:
                AObjAnimAdvance(cam->camanim_joint.event32);
                cam->camanim_joint.event32 = cam->camanim_joint.event32->p;
                break;

            case ANIM_CMD_12:
                payload = cam->camanim_joint.event32->command.payload;
                flags = AObjAnimAdvance(cam->camanim_joint.event32)->command.flags;

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
                            track_aobjs[i] = gcAddAObjForCamera(cam, i + nOMObjAnimTrackCameraStart);
                        }
                        track_aobjs[i]->length += payload;
                    }
                }
                break;

            case nOMObjAnimCommandSetInterp:
                flags = AObjAnimAdvance(cam->camanim_joint.event32)->command.flags;

                if (flags & 0x08)
                {
                    if (track_aobjs[nOMObjAnimTrackEyeI - nOMObjAnimTrackCameraStart] == NULL)
                    {
                        track_aobjs[nOMObjAnimTrackEyeI - nOMObjAnimTrackCameraStart] = gcAddAObjForCamera
                        (
                            cam, 
                            nOMObjAnimTrackEyeI
                        );
                    }
                    track_aobjs[nOMObjAnimTrackEyeI - nOMObjAnimTrackCameraStart]->interpolate = cam->camanim_joint.event32->p;

                    AObjAnimAdvance(cam->camanim_joint.event32);
                }
                if (flags & 0x80)
                {
                    if (track_aobjs[nOMObjAnimTrackAtI - nOMObjAnimTrackCameraStart] == NULL)
                    {
                        track_aobjs[nOMObjAnimTrackAtI - nOMObjAnimTrackCameraStart] = gcAddAObjForCamera
                        (
                            cam, 
                            nOMObjAnimTrackAtI
                        );
                    }
                    track_aobjs[nOMObjAnimTrackAtI - nOMObjAnimTrackCameraStart]->interpolate = cam->camanim_joint.event32->p;

                    AObjAnimAdvance(cam->camanim_joint.event32);
                }
                break;

            case nOMObjAnimCommandEnd:
                aobj = cam->aobj;

                while (aobj != NULL)
                {
                    if (aobj->kind != nOMObjAnimKindNone)
                    {
                        aobj->length += cam->anim_speed + cam->anim_wait;
                    }
                    aobj = aobj->next;
                }
                cam->anim_frame = cam->anim_wait;
                cam->anim_wait = AOBJ_ANIM_END;
                return;

            case ANIM_CMD_23:
                cam->anim_wait += AObjAnimAdvance(cam->camanim_joint.event32)->command.payload;
                cam->camanim_joint.event32 += 2;
                break;

                // empty, but necessary
            default:
                break;
            }
        }
        while (cam->anim_wait <= 0.0F);
    }
}

void gcPlayCameraCamAnim(Camera *cam)
{
    if (cam->anim_wait != AOBJ_ANIM_NULL)
    {
        AObj *aobj = cam->aobj;
        f32 value;

        while (aobj != NULL)
        {
            if (aobj->kind != nOMObjAnimKindNone)
            {
                if (cam->anim_wait != AOBJ_ANIM_END)
                {
                    aobj->length += cam->anim_speed;
                }
                if (!(cam->parent_gobj->flags & GOBJ_FLAG_NOANIM))
                {
                    switch (aobj->track)
                    {
                    case nOMObjAnimTrackEyeX:
                        cam->vec.eye.x = gcGetAObjValue(aobj);
                        break;

                    case nOMObjAnimTrackEyeY:
                        cam->vec.eye.y = gcGetAObjValue(aobj);
                        break;

                    case nOMObjAnimTrackEyeZ:
                        cam->vec.eye.z = gcGetAObjValue(aobj);
                        break;

                    case nOMObjAnimTrackEyeI:
                        value = gcGetAObjValue(aobj);

                        if (value < 0.0F)
                        {
                            value = 0.0F;
                        }
                        else if (value > 1.0F)
                        {
                            value = 1.0F;
                        }
                        hal_interpolation_cubic(&cam->vec.eye, aobj->interpolate, value);
                        break;
                    
                    case nOMObjAnimTrackAtX:
                        cam->vec.at.x = gcGetAObjValue(aobj);
                        break;

                    case nOMObjAnimTrackAtY:
                        cam->vec.at.y = gcGetAObjValue(aobj);
                        break;

                    case nOMObjAnimTrackAtZ:
                        cam->vec.at.z = gcGetAObjValue(aobj);
                        break;

                    case nOMObjAnimTrackAtI:
                        value = gcGetAObjValue(aobj);

                        if (value < 0.0F)
                        {
                            value = 0.0F;
                        }
                        else if (value > 1.0F)
                        {
                            value = 1.0F;
                        }
                        hal_interpolation_cubic(&cam->vec.at, aobj->interpolate, value);
                        break;

                    case nOMObjAnimTrackUpX:
                        cam->vec.up.x = gcGetAObjValue(aobj);
                        break;

                    case nOMObjAnimTrackFovY:
                        cam->projection.persp.fovy = gcGetAObjValue(aobj);
                        break;
                    }
                }
            }
            aobj = aobj->next;
        }
        if (cam->anim_wait == AOBJ_ANIM_END)
        {
            cam->anim_wait = AOBJ_ANIM_NULL;
        }
    }
}

void gcPlayCamAnim(GObj *gobj)
{
    Camera *cam = CameraGetStruct(gobj);

    gcParseCameraCamAnimJoint(cam);
    gcPlayCameraCamAnim(cam);
}

s32 gcGetAnimTotalLength(AObjEvent32 **anim_joints)
{
    AObjEvent32 *anim_joint;
    u32 flags;
    s32 total = 0;
    s32 i;

    while (*anim_joints == NULL)
    {
        anim_joints++;
    }
    anim_joint = *anim_joints;

    while (TRUE)
    {
        switch (anim_joint->command.opcode)
        {
            case nOMObjAnimCommandSetValBlock:
            case nOMObjAnimCommandSetVal0RateBlock:
            case nOMObjAnimCommandSetValAfterBlock:
                total += anim_joint->command.payload;

                /* fallthrough */

            case nOMObjAnimCommandSetVal:
            case nOMObjAnimCommandSetTargetRate:
            case nOMObjAnimCommandSetVal0Rate:
            case nOMObjAnimCommandSetValAfter:
                flags = AObjAnimAdvance(anim_joint)->command.flags;

                for (i = 0; i < 10; i++, flags = flags >> 1)
                {
                    if (flags == 0)
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        AObjAnimAdvance(anim_joint);
                    }
                }
                break;

            case nOMObjAnimCommandSetValRateBlock:
                total += anim_joint->command.payload;

                /* fallthrough */

            case nOMObjAnimCommandSetValRate:
                flags = AObjAnimAdvance(anim_joint)->command.flags;

                for (i = 0; i < 10; i++, flags = flags >> 1)
                {
                    if (flags == 0)
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        anim_joint += 2;
                    }
                }
                break;

            case nOMObjAnimCommandWait:
            case nOMObjAnimCommandSetFlags:
                total += AObjAnimAdvance(anim_joint)->command.payload;
                break;

            case ANIM_CMD_12:
                AObjAnimAdvance(anim_joint);
                break;

            case nOMObjAnimCommandSetInterp:
                anim_joint += 2;
                break;

            case ANIM_CMD_17:
                total += anim_joint->command.payload;
                flags = AObjAnimAdvance(anim_joint)->command.flags;

                for (i = 4; i < 14; i++, flags = flags >> 1)
                {
                    if (flags == 0)
                    {
                        break;
                    }
                    if (flags & 1)
                    {
                        AObjAnimAdvance(anim_joint);
                    }
                }
                break;

            case nOMObjAnimCommandEnd:
                return total;

            case nOMObjAnimCommandJump:
            case nOMObjAnimCommandSetAnim:
                return -total;

            case ANIM_CMD_16:
                break;
        }
    }
}
