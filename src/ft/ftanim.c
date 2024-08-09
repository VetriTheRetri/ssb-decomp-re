#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800EC160
f32 ftAnimGetTargetFrac(s16 arg, s32 track, sb32 value_or_step)
{
    f32 unused;
    s32 id;
    f32 ret;

    // 0x8012B910
    f32 fracs[/* */] =
    {
        1.0F / 512.0F,
        1.0F / 4.0F,
        1.0F / 4096.0F,
        1.0F / 16384.0F - (3.0F / 1000000000000.0F), // why tho
        1.0F / 512.0F,
        1.0F / 32.0F,
        1.0F / 8192.0F,
        1.0F / 16384.0F - (3.0F / 1000000000000.0F)  // ???
    };

    switch (track)
    {
    case nOMObjAnimTrackRotX:
    case nOMObjAnimTrackRotY:
    case nOMObjAnimTrackRotZ:
        id = 0;
        break;

    case nOMObjAnimTrackTraX:
    case nOMObjAnimTrackTraY:
    case nOMObjAnimTrackTraZ:
        id = 1;
        break;

    case nOMObjAnimTrackScaX:
    case nOMObjAnimTrackScaY:
    case nOMObjAnimTrackScaZ:
        id = 2;
        break;

    case nOMObjAnimTrackTraI:
        id = 3;
        break;
    }
    if (value_or_step != 0)
    {
        id += 4;
    }
    ret = arg;

    ret *= fracs[id];

    return ret;
}

// 0x800EC238
void ftAnimParseDObjFigatree(DObj *root_dobj)
{
    AObj *track_aobjs[nOMObjAnimTrackJointEnd - nOMObjAnimTrackJointStart + 1];
    AObj *current_aobj;
    f32 payload;
    s32 i;
    u16 command_kind;
    u16 flags;

    if (root_dobj->anim_remain != AOBJ_ANIM_NULL)
    {
        if (root_dobj->anim_remain == -F32_HALF)
        {
            root_dobj->anim_remain = -root_dobj->anim_frame;
        }
        else
        {
            root_dobj->anim_remain -= root_dobj->anim_speed;
            root_dobj->anim_frame += root_dobj->anim_speed;
            root_dobj->parent_gobj->anim_frame = root_dobj->anim_frame;

            if (root_dobj->anim_remain > 0.0F)
            {
                return;
            }
        }

        for (i = 0; i < ARRAY_COUNT(track_aobjs); i++)
        {
            track_aobjs[i] = NULL;
        }
        current_aobj = root_dobj->aobj;

        while (current_aobj != NULL)
        {
            if ((current_aobj->track >= nOMObjAnimTrackJointStart) && (current_aobj->track <= ARRAY_COUNT(track_aobjs)))
            {
                track_aobjs[current_aobj->track - nOMObjAnimTrackJointStart] = current_aobj;
            }
            current_aobj = current_aobj->next;
        }
        do
        {
            if (root_dobj->figatree == NULL)
            {
                current_aobj = root_dobj->aobj;

                while (current_aobj != NULL)
                {
                    if (current_aobj->kind != nOMObjAnimKindNone)
                    {
                        current_aobj->length += root_dobj->anim_speed + root_dobj->anim_remain;
                    }
                    current_aobj = current_aobj->next;
                }
                root_dobj->anim_frame = root_dobj->anim_remain;
                root_dobj->parent_gobj->anim_frame = root_dobj->anim_remain;
                root_dobj->anim_remain = AOBJ_ANIM_END;

                return;
            }
            command_kind = root_dobj->figatree->command.opcode;

            switch (command_kind)
            {
            case nFTFigatreeCommandSetVal0RateBlock:
            case nFTFigatreeCommandSetVal0Rate:
                flags = root_dobj->figatree->command.flags;
                payload = (AObjAnimAdvance(root_dobj->figatree)->command.toggle) ? AObjAnimAdvance(root_dobj->figatree)->uhalf : 0.0F;

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
                            track_aobjs[i] = gcAddAObjForDObj(root_dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;

                        track_aobjs[i]->value_target = ftAnimGetTargetFrac(AObjAnimAdvance(root_dobj->figatree)->shalf, i + nOMObjAnimTrackJointStart, 0);

                        track_aobjs[i]->rate_base = track_aobjs[i]->rate_target;
                        track_aobjs[i]->rate_target = 0.0F;
                        track_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        track_aobjs[i]->length = -root_dobj->anim_remain - root_dobj->anim_speed;
                    }
                }
                if (command_kind == nFTFigatreeCommandSetVal0RateBlock)
                {
                    root_dobj->anim_remain += payload;
                }
                break;

            case nFTFigatreeCommandSetValBlock:
            case nFTFigatreeCommandSetVal:
                flags = root_dobj->figatree->command.flags;
                payload = (AObjAnimAdvance(root_dobj->figatree)->command.toggle) ? AObjAnimAdvance(root_dobj->figatree)->uhalf : 0.0F;

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
                            track_aobjs[i] = gcAddAObjForDObj(root_dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;

                        track_aobjs[i]->value_target = ftAnimGetTargetFrac(AObjAnimAdvance(root_dobj->figatree)->shalf, i + nOMObjAnimTrackJointStart, 0);

                        track_aobjs[i]->kind = 2;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->rate_base = (track_aobjs[i]->value_target - track_aobjs[i]->value_base) / payload;
                        }
                        track_aobjs[i]->length = -root_dobj->anim_remain - root_dobj->anim_speed;
                        track_aobjs[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nFTFigatreeCommandSetValBlock)
                {
                    root_dobj->anim_remain += payload;
                }
                break;

            case nFTFigatreeCommandSetValRateBlock:
            case nFTFigatreeCommandSetValRate:
                flags = root_dobj->figatree->command.flags;
                payload = (AObjAnimAdvance(root_dobj->figatree)->command.toggle) ? AObjAnimAdvance(root_dobj->figatree)->uhalf : 0.0F;

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
                            track_aobjs[i] = gcAddAObjForDObj(root_dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;

                        track_aobjs[i]->value_target = ftAnimGetTargetFrac(AObjAnimAdvance(root_dobj->figatree)->shalf, i + nOMObjAnimTrackJointStart, 0);

                        track_aobjs[i]->rate_base = track_aobjs[i]->rate_target;

                        track_aobjs[i]->rate_target = ftAnimGetTargetFrac(AObjAnimAdvance(root_dobj->figatree)->shalf, i + nOMObjAnimTrackJointStart, 1);

                        track_aobjs[i]->kind = 3;

                        if (payload != 0.0F)
                        {
                            track_aobjs[i]->length_invert = 1.0F / payload;
                        }
                        track_aobjs[i]->length = -root_dobj->anim_remain - root_dobj->anim_speed;
                    }
                }
                if (command_kind == nFTFigatreeCommandSetValRateBlock)
                {
                    root_dobj->anim_remain += payload;
                }
                break;

            case nFTFigatreeCommandSetTargetRate:
                flags = root_dobj->figatree->command.flags;

                payload = (AObjAnimAdvance(root_dobj->figatree)->command.toggle) ? AObjAnimAdvance(root_dobj->figatree)->uhalf : 0.0F;

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
                            track_aobjs[i] = gcAddAObjForDObj(root_dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->rate_target = ftAnimGetTargetFrac(AObjAnimAdvance(root_dobj->figatree)->shalf, i + nOMObjAnimTrackJointStart, 1);
                    }
                }
                break;

            case nFTFigatreeCommandBlock:
                if (AObjAnimAdvance(root_dobj->figatree)->command.toggle)
                {
                    root_dobj->anim_remain += AObjAnimAdvance(root_dobj->figatree)->uhalf;
                }
                break;

            case nFTFigatreeCommandSetValAfterBlock:
            case nFTFigatreeCommandSetValAfter:
                flags = root_dobj->figatree->command.flags;
                payload = (AObjAnimAdvance(root_dobj->figatree)->command.toggle) ? AObjAnimAdvance(root_dobj->figatree)->uhalf : 0.0F;

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
                            track_aobjs[i] = gcAddAObjForDObj(root_dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->value_base = track_aobjs[i]->value_target;

                        track_aobjs[i]->value_target = ftAnimGetTargetFrac(AObjAnimAdvance(root_dobj->figatree)->shalf, i + nOMObjAnimTrackJointStart, 0);

                        track_aobjs[i]->kind = 1;

                        track_aobjs[i]->length_invert = payload;

                        track_aobjs[i]->length = -root_dobj->anim_remain - root_dobj->anim_speed;

                        track_aobjs[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nFTFigatreeCommandSetValAfterBlock)
                {
                    root_dobj->anim_remain += payload;
                }
                break;

            case nFTFigatreeCommandLoop:
                AObjAnimAdvance(root_dobj->figatree);

                root_dobj->figatree += root_dobj->figatree->shalf / 2;

                root_dobj->anim_frame = -root_dobj->anim_remain;
                root_dobj->parent_gobj->anim_frame = -root_dobj->anim_remain;

                if (root_dobj->is_anim_root != FALSE)
                {
                    if (root_dobj->parent_gobj->proc_anim != NULL)
                    {
                        root_dobj->parent_gobj->proc_anim(root_dobj, -2, 0);
                    }
                }
                break;

            case nFTFigatreeCommand11:
                flags = root_dobj->figatree->command.flags;

                payload = (AObjAnimAdvance(root_dobj->figatree)->command.toggle) ? AObjAnimAdvance(root_dobj->figatree)->uhalf : 0.0F;

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
                            track_aobjs[i] = gcAddAObjForDObj(root_dobj, i + nOMObjAnimTrackJointStart);
                        }
                        track_aobjs[i]->length += payload;
                    }
                }
                break;

            case nFTFigatreeCommandSetTranslateInterp:
                AObjAnimAdvance(root_dobj->figatree);

                if (track_aobjs[nOMObjAnimTrackTraI - nOMObjAnimTrackJointStart] == NULL)
                {
                    track_aobjs[nOMObjAnimTrackTraI - nOMObjAnimTrackJointStart] = gcAddAObjForDObj(root_dobj, nOMObjAnimTrackTraI);
                }
                track_aobjs[nOMObjAnimTrackTraI - nOMObjAnimTrackJointStart]->interpolate = root_dobj->figatree + (root_dobj->figatree->shalf / 2);

                AObjAnimAdvance(root_dobj->figatree);
                break;

            case nOMObjAnimCommandEnd:
                current_aobj = root_dobj->aobj;

                while (current_aobj != NULL)
                {
                    if (current_aobj->kind != nOMObjAnimKindNone)
                    {
                        current_aobj->length += root_dobj->anim_speed + root_dobj->anim_remain;
                    }
                    current_aobj = current_aobj->next;
                }
                root_dobj->anim_frame = root_dobj->anim_remain;
                root_dobj->parent_gobj->anim_frame = root_dobj->anim_remain;
                root_dobj->anim_remain = AOBJ_ANIM_END;

                if (root_dobj->is_anim_root != FALSE)
                {
                    if (root_dobj->parent_gobj->proc_anim != NULL)
                    {
                        root_dobj->parent_gobj->proc_anim(root_dobj, -1, 0);
                    }
                }
                return;

            case nFTFigatreeCommandSetFlags:
                root_dobj->flags = root_dobj->figatree->command.flags;

                if (AObjAnimAdvance(root_dobj->figatree)->command.toggle)
                {
                    root_dobj->anim_remain += AObjAnimAdvance(root_dobj->figatree)->uhalf;
                }
                break;

            default:
                break;
            }
        } 
        while (root_dobj->anim_remain <= 0.0F);
    }
}

// 0x800ECCA4 - Unused?
void func_ovl2_800ECCA4(GObj *gobj)
{
    DObj *main_dobj = DObjGetStruct(gobj);
    MObj *mobj;

    while (main_dobj != NULL)
    {
        ftAnimParseDObjFigatree(main_dobj);
        gcPlayDObjAnim(main_dobj);

        mobj = main_dobj->mobj;

        while (mobj != NULL)
        {
            gcParseMObjMatAnimJoint(mobj);
            gcPlayMObjMatAnim(mobj);

            mobj = mobj->next;
        }
        if (main_dobj->child != NULL)
        {
            main_dobj = main_dobj->child;
        }
        else if (main_dobj->sib_next != NULL)
        {
            main_dobj = main_dobj->sib_next;
        }
        else while (TRUE)
        {
            if (main_dobj->parent == DOBJ_PARENT_NULL)
            {
                main_dobj = NULL;

                break;
            }
            else if (main_dobj->parent->sib_next != NULL)
            {
                main_dobj = main_dobj->parent->sib_next;

                break;
            }
            else main_dobj = main_dobj->parent;
        }
    }
}
