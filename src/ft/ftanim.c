#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800EC160
f32 func_ovl2_800EC160(s16 arg0, s32 arg1, s32 arg2)
{
    f32 frac;
    s32 id;
    f32 ret;

    // 0x8012B910
    f32 f[/* */] =
    {
        1.0F / 512.0F,
        1.0F / 4.0F,
        1.0F / 4096.0F,
        6.1035152612e-05F, // Huh
        1.0F / 512.0F,
        1.0F / 32.0F,
        1.0F / 8192.0F,
        6.1035152612e-05F // ???
    };

    switch (arg1)
    {
    case 1:
    case 2:
    case 3:
        id = 0;
        break;

    case 5:
    case 6:
    case 7:
        id = 1;
        break;

    case 8:
    case 9:
    case 10:
        id = 2;
        break;

    case 4:
        id = 3;
        break;
    }
    if (arg2 != 0)
    {
        id += 4;
    }
    ret = arg0;

    ret *= f[id];

    return ret;
}

// 0x800EC238
void ftAnimParseAnimJoint(DObj *root_dobj)
{
    AObj *setup_aobj[nOMObjAnimTrackMeshEnd];
    AObj *current_aobj;
    f32 var_f20;
    s32 i;
    u16 command_kind;
    u16 aflags;

    if (root_dobj->anim_remain != AOBJ_FRAME_NULL)
    {
        if (root_dobj->anim_remain == -F32_HALF)
        {
            root_dobj->anim_remain = -root_dobj->anim_frame;
        }
        else
        {
            root_dobj->anim_remain -= root_dobj->anim_rate;
            root_dobj->anim_frame += root_dobj->anim_rate;
            root_dobj->parent_gobj->anim_frame = root_dobj->anim_frame;

            if (root_dobj->anim_remain > 0.0F)
            {
                return;
            }
        }

        for (i = 0; i < ARRAY_COUNT(setup_aobj); i++)
        {
            setup_aobj[i] = NULL;
        }
        current_aobj = root_dobj->aobj;

        while (current_aobj != NULL)
        {
            if ((current_aobj->track >= nOMObjAnimTrackMeshStart) && (current_aobj->track <= ARRAY_COUNT(setup_aobj)))
            {
                setup_aobj[current_aobj->track - nOMObjAnimTrackMeshStart] = current_aobj;
            }
            current_aobj = current_aobj->next;
        }
        do
        {
            if (root_dobj->actor.acommand == NULL)
            {
                current_aobj = root_dobj->aobj;

                while (current_aobj != NULL)
                {
                    if (current_aobj->kind != 0)
                    {
                        current_aobj->length += root_dobj->anim_rate + root_dobj->anim_remain;
                    }
                    current_aobj = current_aobj->next;
                }
                root_dobj->anim_frame = root_dobj->anim_remain;
                root_dobj->parent_gobj->anim_frame = root_dobj->anim_remain;
                root_dobj->anim_remain = -1.1342745e38F;

                return;
            }
            command_kind = root_dobj->actor.acommand->command.opcode;

            switch (command_kind)
            {
            case nOMObjAnimCommandSetTargetRate:
            case nOMObjAnimCommandSetVal0RateLast:
                aflags = root_dobj->actor.acommand->command.flags;

                var_f20 = (ACommandAdvance(root_dobj->actor.acommand)->command.toggle) ? ACommandAdvance(root_dobj->actor.acommand)->uhalf : 0.0F;

                for (i = 0; i < ARRAY_COUNT(setup_aobj); i++, aflags = aflags >> 1)
                {
                    if (!aflags) break;

                    if (aflags & 1)
                    {
                        if (setup_aobj[i] == NULL)
                        {
                            setup_aobj[i] = omAddAObjForDObj(root_dobj, i + 1);
                        }
                        setup_aobj[i]->value_base = setup_aobj[i]->value_target;

                        setup_aobj[i]->value_target = func_ovl2_800EC160(ACommandAdvance(root_dobj->actor.acommand)->shalf, i + 1, 0);

                        setup_aobj[i]->rate_base = setup_aobj[i]->rate_target;
                        setup_aobj[i]->rate_target = 0.0F;
                        setup_aobj[i]->kind = 3;

                        if (var_f20 != 0.0F)
                        {
                            setup_aobj[i]->length_invert = 1.0F / var_f20;
                        }
                        setup_aobj[i]->length = -root_dobj->anim_remain - root_dobj->anim_rate;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetTargetRate)
                {
                    root_dobj->anim_remain += var_f20;
                }
                break;

            case nOMObjAnimCommandWait:
            case nOMObjAnimCommandSetValLast:
                aflags = root_dobj->actor.acommand->command.flags;

                var_f20 = (ACommandAdvance(root_dobj->actor.acommand)->command.toggle) ? ACommandAdvance(root_dobj->actor.acommand)->uhalf : 0.0F;

                for (i = 0; i < ARRAY_COUNT(setup_aobj); i++, aflags = aflags >> 1)
                {
                    if (!aflags) break;

                    if (aflags & 1)
                    {
                        if (setup_aobj[i] == NULL)
                        {
                            setup_aobj[i] = omAddAObjForDObj(root_dobj, i + 1);
                        }
                        setup_aobj[i]->value_base = setup_aobj[i]->value_target;

                        setup_aobj[i]->value_target = func_ovl2_800EC160(ACommandAdvance(root_dobj->actor.acommand)->shalf, i + 1, 0);

                        setup_aobj[i]->kind = 2;

                        if (var_f20 != 0.0F)
                        {
                            setup_aobj[i]->rate_base = (setup_aobj[i]->value_target - setup_aobj[i]->value_base) / var_f20;
                        }
                        setup_aobj[i]->length = -root_dobj->anim_remain - root_dobj->anim_rate;
                        setup_aobj[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nOMObjAnimCommandWait)
                {
                    root_dobj->anim_remain += var_f20;
                }
                break;

            case nOMObjAnimCommandSetVal:
            case nOMObjAnimCommandSetValRateLast:
                aflags = root_dobj->actor.acommand->command.flags;

                var_f20 = (ACommandAdvance(root_dobj->actor.acommand)->command.toggle) ? ACommandAdvance(root_dobj->actor.acommand)->uhalf : 0.0F;

                for (i = 0; i < ARRAY_COUNT(setup_aobj); i++, aflags = aflags >> 1)
                {
                    if (!aflags) break;

                    if (aflags & 1)
                    {
                        if (setup_aobj[i] == NULL)
                        {
                            setup_aobj[i] = omAddAObjForDObj(root_dobj, i + 1);
                        }
                        setup_aobj[i]->value_base = setup_aobj[i]->value_target;

                        setup_aobj[i]->value_target = func_ovl2_800EC160(ACommandAdvance(root_dobj->actor.acommand)->shalf, i + 1, 0);

                        setup_aobj[i]->rate_base = setup_aobj[i]->rate_target;

                        setup_aobj[i]->rate_target = func_ovl2_800EC160(ACommandAdvance(root_dobj->actor.acommand)->shalf, i + 1, 1);

                        setup_aobj[i]->kind = 3;

                        if (var_f20 != 0.0F)
                        {
                            setup_aobj[i]->length_invert = 1.0F / var_f20;
                        }
                        setup_aobj[i]->length = -root_dobj->anim_remain - root_dobj->anim_rate;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetVal)
                {
                    root_dobj->anim_remain += var_f20;
                }
                break;

            case nOMObjAnimCommandSetValRate:
                aflags = root_dobj->actor.acommand->command.flags;

                var_f20 = (ACommandAdvance(root_dobj->actor.acommand)->command.toggle) ? ACommandAdvance(root_dobj->actor.acommand)->uhalf : 0.0F;

                for (i = 0; i < ARRAY_COUNT(setup_aobj); i++, aflags = aflags >> 1)
                {
                    if (!aflags) break;

                    if (aflags & 1)
                    {
                        if (setup_aobj[i] == NULL)
                        {
                            setup_aobj[i] = omAddAObjForDObj(root_dobj, i + 1);
                        }
                        setup_aobj[i]->rate_target = func_ovl2_800EC160(ACommandAdvance(root_dobj->actor.acommand)->shalf, i + 1, 1);
                    }
                }
                break;

            case nOMObjAnimCommandJump:
                if (ACommandAdvance(root_dobj->actor.acommand)->command.toggle)
                {
                    root_dobj->anim_remain += ACommandAdvance(root_dobj->actor.acommand)->uhalf;
                }
                break;

            case nOMObjAnimCommandSetVal0Rate:
            case nOMObjAnimCommandSetValAfterLast:
                aflags = root_dobj->actor.acommand->command.flags;

                var_f20 = (ACommandAdvance(root_dobj->actor.acommand)->command.toggle) ? ACommandAdvance(root_dobj->actor.acommand)->uhalf : 0.0F;

                for (i = 0; i < ARRAY_COUNT(setup_aobj); i++, aflags = aflags >> 1)
                {
                    if (!aflags) break;

                    if (aflags & 1)
                    {
                        if (setup_aobj[i] == NULL)
                        {
                            setup_aobj[i] = omAddAObjForDObj(root_dobj, i + 1);
                        }
                        setup_aobj[i]->value_base = setup_aobj[i]->value_target;

                        setup_aobj[i]->value_target = func_ovl2_800EC160(ACommandAdvance(root_dobj->actor.acommand)->shalf, i + 1, 0);

                        setup_aobj[i]->kind = 1;

                        setup_aobj[i]->length_invert = var_f20;

                        setup_aobj[i]->length = -root_dobj->anim_remain - root_dobj->anim_rate;

                        setup_aobj[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == nOMObjAnimCommandSetVal0Rate)
                {
                    root_dobj->anim_remain += var_f20;
                }
                break;

            case ANIM_CMD_13:
                ACommandAdvance(root_dobj->actor.acommand);

                root_dobj->actor.acommand += root_dobj->actor.acommand->shalf / 2;

                root_dobj->anim_frame = -root_dobj->anim_remain;
                root_dobj->parent_gobj->anim_frame = -root_dobj->anim_remain;

                if (root_dobj->unk_dobj_0x55 != 0)
                {
                    if (root_dobj->parent_gobj->dobjproc != NULL)
                    {
                        root_dobj->parent_gobj->dobjproc(root_dobj, -2, 0);
                    }
                }
                break;

            case nOMObjAnimCommandSetValAfter:
                aflags = root_dobj->actor.acommand->command.flags;

                var_f20 = (ACommandAdvance(root_dobj->actor.acommand)->command.toggle) ? ACommandAdvance(root_dobj->actor.acommand)->uhalf : 0.0F;

                for (i = 0; i < ARRAY_COUNT(setup_aobj); i++, aflags = aflags >> 1)
                {
                    if (!aflags) break;

                    if (aflags & 1)
                    {
                        if (setup_aobj[i] == NULL)
                        {
                            setup_aobj[i] = omAddAObjForDObj(root_dobj, i + 1);
                        }
                        setup_aobj[i]->length += var_f20;
                    }
                }
                break;

            case ANIM_CMD_12:
                ACommandAdvance(root_dobj->actor.acommand);

                if (setup_aobj[3] == NULL)
                {
                    setup_aobj[3] = omAddAObjForDObj(root_dobj, 4);
                }
                setup_aobj[3]->interpolate = root_dobj->actor.acommand + (root_dobj->actor.acommand->shalf / 2);

                ACommandAdvance(root_dobj->actor.acommand);
                break;

            case nOMObjAnimCommandEnd:
                current_aobj = root_dobj->aobj;

                while (current_aobj != NULL)
                {
                    if (current_aobj->kind != 0)
                    {
                        current_aobj->length += root_dobj->anim_rate + root_dobj->anim_remain;
                    }
                    current_aobj = current_aobj->next;
                }
                root_dobj->anim_frame = root_dobj->anim_remain;
                root_dobj->parent_gobj->anim_frame = root_dobj->anim_remain;
                root_dobj->anim_remain = -1.1342745e38F;

                if (root_dobj->unk_dobj_0x55 != 0)
                {
                    if (root_dobj->parent_gobj->dobjproc != NULL)
                    {
                        root_dobj->parent_gobj->dobjproc(root_dobj, -1, 0);
                    }
                }
                return;

            case nOMObjAnimCommandSetAnim:
                root_dobj->flags = root_dobj->actor.acommand->command.flags;

                if (ACommandAdvance(root_dobj->actor.acommand)->command.toggle)
                {
                    root_dobj->anim_remain += ACommandAdvance(root_dobj->actor.acommand)->uhalf;
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
        ftAnimParseAnimJoint(main_dobj);
        func_8000CCBC_D8BC(main_dobj);

        mobj = main_dobj->mobj;

        while (mobj != NULL)
        {
            func_8000CF6C_DB6C(mobj);
            func_8000DA40_E640(mobj);

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