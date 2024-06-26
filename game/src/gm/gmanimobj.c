#include <sys/obj.h>

typedef struct ftAnimUnknown
{
    f32 floats[8];

} ftAnimUnknown;

ftAnimUnknown D_ovl2_8012B910 =
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

f32 func_ovl2_800EC160(s16 arg0, s32 arg1, s32 arg2)
{
    f32 frac;
    s32 index;
    f32 ret;
    ftAnimUnknown sp4 = D_ovl2_8012B910;

    switch (arg1)
    {
    case 1:
    case 2:
    case 3:
        index = 0;
        break;

    case 5:
    case 6:
    case 7:
        index = 1;
        break;

    case 8:
    case 9:
    case 10:
        index = 2;
        break;

    case 4:
        index = 3;
        break;
    }
    if (arg2 != 0)
    {
        index += 4;
    }
    ret = arg0;

    ret *= sp4.floats[index];

    return ret;
}

// 0x800EC238
void func_ovl2_800EC238(DObj *root_dobj)
{
    AObj *setup_aobj[10];
    AObj *current_aobj;
    f32 var_f20;
    s32 i;
    u16 command_kind;
    u16 aflags;

    if (root_dobj->dobj_f0 != AOBJ_FRAME_NULL)
    {
        if (root_dobj->dobj_f0 == -FLOAT_MAX_HALF)
        {
            root_dobj->dobj_f0 = -root_dobj->dobj_f2;
        }
        else
        {
            root_dobj->dobj_f0 -= root_dobj->dobj_f1;
            root_dobj->dobj_f2 += root_dobj->dobj_f1;
            root_dobj->parent_gobj->anim_frame = root_dobj->dobj_f2;

            if (root_dobj->dobj_f0 > 0.0F)
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
            if ((current_aobj->param > 0) && (current_aobj->param <= ARRAY_COUNT(setup_aobj)))
            {
                setup_aobj[current_aobj->param - 1] = current_aobj;
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
                        current_aobj->length += root_dobj->dobj_f1 + root_dobj->dobj_f0;
                    }
                    current_aobj = current_aobj->next;
                }
                root_dobj->dobj_f2 = root_dobj->dobj_f0;
                root_dobj->parent_gobj->anim_frame = root_dobj->dobj_f0;
                root_dobj->dobj_f0 = -1.1342745e38F;

                return;
            }
            command_kind = root_dobj->actor.acommand->command.opcode;

            switch (command_kind)
            {
            case 7:
            case 8:
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
                        setup_aobj[i]->length = -root_dobj->dobj_f0 - root_dobj->dobj_f1;
                    }
                }
                if (command_kind == 7)
                {
                    root_dobj->dobj_f0 += var_f20;
                }
                break;

            case 2:
            case 3:
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
                        setup_aobj[i]->length = -root_dobj->dobj_f0 - root_dobj->dobj_f1;
                        setup_aobj[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == 2)
                {
                    root_dobj->dobj_f0 += var_f20;
                }
                break;

            case 4:
            case 5:
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
                        setup_aobj[i]->length = -root_dobj->dobj_f0 - root_dobj->dobj_f1;
                    }
                }
                if (command_kind == 4)
                {
                    root_dobj->dobj_f0 += var_f20;
                }
                break;

            case 6:
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

            case 1:
                if (ACommandAdvance(root_dobj->actor.acommand)->command.toggle)
                {
                    root_dobj->dobj_f0 += ACommandAdvance(root_dobj->actor.acommand)->uhalf;
                }
                break;

            case 9:
            case 10:
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

                        setup_aobj[i]->length = -root_dobj->dobj_f0 - root_dobj->dobj_f1;

                        setup_aobj[i]->rate_target = 0.0F;
                    }
                }
                if (command_kind == 9)
                {
                    root_dobj->dobj_f0 += var_f20;
                }
                break;

            case 13:
                ACommandAdvance(root_dobj->actor.acommand);

                root_dobj->actor.acommand += root_dobj->actor.acommand->shalf / 2;

                root_dobj->dobj_f2 = -root_dobj->dobj_f0;
                root_dobj->parent_gobj->anim_frame = -root_dobj->dobj_f0;

                if (root_dobj->unk_dobj_0x55 != 0)
                {
                    if (root_dobj->parent_gobj->dobjproc != NULL)
                    {
                        root_dobj->parent_gobj->dobjproc(root_dobj, -2, 0);
                    }
                }
                break;

            case 11:
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

            case 12:
                ACommandAdvance(root_dobj->actor.acommand);

                if (setup_aobj[3] == NULL)
                {
                    setup_aobj[3] = omAddAObjForDObj(root_dobj, 4);
                }
                setup_aobj[3]->interpolate = root_dobj->actor.acommand + (root_dobj->actor.acommand->shalf / 2);

                ACommandAdvance(root_dobj->actor.acommand);
                break;

            case 0:
                current_aobj = root_dobj->aobj;

                while (current_aobj != NULL)
                {
                    if (current_aobj->kind != 0)
                    {
                        current_aobj->length += root_dobj->dobj_f1 + root_dobj->dobj_f0;
                    }
                    current_aobj = current_aobj->next;
                }
                root_dobj->dobj_f2 = root_dobj->dobj_f0;
                root_dobj->parent_gobj->anim_frame = root_dobj->dobj_f0;
                root_dobj->dobj_f0 = -1.1342745e38F;

                if (root_dobj->unk_dobj_0x55 != 0)
                {
                    if (root_dobj->parent_gobj->dobjproc != NULL)
                    {
                        root_dobj->parent_gobj->dobjproc(root_dobj, -1, 0);
                    }
                }
                return;

            case 14:
                root_dobj->flags = root_dobj->actor.acommand->command.flags;

                if (ACommandAdvance(root_dobj->actor.acommand)->command.toggle)
                {
                    root_dobj->dobj_f0 += ACommandAdvance(root_dobj->actor.acommand)->uhalf;
                }
                break;

            default:
                break;
            }
        } 
        while (root_dobj->dobj_f0 <= 0.0F);
    }
}

// 0x800ECCA4 - Unused?
void func_ovl2_800ECCA4(GObj *gobj)
{
    DObj *main_dobj = DObjGetStruct(gobj);
    MObj *mobj;

    while (main_dobj != NULL)
    {
        func_ovl2_800EC238(main_dobj);
        func_8000CCBC(main_dobj);

        mobj = main_dobj->mobj;

        while (mobj != NULL)
        {
            func_8000CF6C(mobj);
            func_8000DA40(mobj);

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