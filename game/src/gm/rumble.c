#include "rumble.h"

// 0x801319F0
gmRumblePlayer D_ovl2_801319F0[4];

gmRumbleEventDefault D_ovl2_8012F1A0[/* */] =
{
    { gmRumbleEvent_Kind_StartRumble, 8000 }
};

gmRumbleEventDefault D_ovl2_8012F1A4[/* */] = 
{ 
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  2 },
    { gmRumbleEvent_Kind_StopRumble,   2 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_SetScript,    0 } // Needed for 0-pad?
};

gmRumbleEventDefault D_ovl2_8012F1B0[/* */] =
{
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  2 },
    { gmRumbleEvent_Kind_StopRumble,   4 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_SetScript,    0 }
};

gmRumbleEventDefault D_ovl2_8012F1BC[/* */] =
{
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  2 },
    { gmRumbleEvent_Kind_StopRumble,   8 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_SetScript,    0 }
};

gmRumbleEventDefault D_ovl2_8012F1C8[/* */] =
{
    { gmRumbleEvent_Kind_StartRumble, 12 }
};

gmRumbleEventDefault D_ovl2_8012F1CC[/* */] =
{
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  2 },
    { gmRumbleEvent_Kind_StopRumble,   1 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_SetScript,    0 }
};

gmRumbleEventDefault D_ovl2_8012F1D8[/* */] =
{
    { gmRumbleEvent_Kind_StartRumble, 3 }
};

gmRumbleEventDefault D_ovl2_8012F1DC[/* */] =
{
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  2 },
    { gmRumbleEvent_Kind_StopRumble,   3 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_SetScript,    0 }
};

gmRumbleEventDefault D_ovl2_8012F1E8[/* */] =
{
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  1 },
    { gmRumbleEvent_Kind_StopRumble,   3 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_SetScript,    0 }
};

gmRumbleEventDefault D_ovl2_8012F1F4[/* */] =
{
    { gmRumbleEvent_Kind_StartRumble,  8 }
};

gmRumbleEventDefault D_ovl2_8012F1F8[/* */] =
{
    { gmRumbleEvent_Kind_StartRumble, 16 }
};

gmRumbleEventDefault *D_ovl2_8012F200[/* */] =
{
    D_ovl2_8012F1A0,
    D_ovl2_8012F1A4,
    D_ovl2_8012F1B0,
    D_ovl2_8012F1BC,
    D_ovl2_8012F1C8,
    D_ovl2_8012F1CC,
    D_ovl2_8012F1D8,
    D_ovl2_8012F1DC,
    D_ovl2_8012F1E8,
    D_ovl2_8012F1F4,
    D_ovl2_8012F1F8
};

u8 D_ovl2_8012F22C[/* */] = 
{
    0xA, 0x9, 
    0x5, 0x5, 
    0x6, 0x5, 
    0x3, 0x3, 
    0x3, 0x3, 
    0x3
};

// 0x80114E30
bool32 func_ovl2_80114E30(u8 *is_active, gmRumbleEvent *p_event, s32 player)
{
    while (p_event->rumble_status == 0)
    {
        switch (gmRumbleEventCast(p_event->p_script, gmRumbleEventDefault)->opcode)
        {
        case gmRumbleEvent_Kind_SetScript:
            p_event->p_script = D_ovl2_8012F200[p_event->index];
            break;

        case gmRumbleEvent_Kind_StartRumble:
            p_event->rumble_status = gmRumbleEventCast(p_event->p_script, gmRumbleEventDefault)->param;

            gmRumbleEventAdvance(p_event->p_script, gmRumbleEventDefault);

            if (*is_active == FALSE)
            {
                func_80004474(player);

                *is_active = p_event->is_rumble_active = TRUE;
            }
            break;

        case gmRumbleEvent_Kind_StopRumble:
            p_event->rumble_status = gmRumbleEventCast(p_event->p_script, gmRumbleEventDefault)->param;

            gmRumbleEventAdvance(p_event->p_script, gmRumbleEventDefault);

            if (*is_active != FALSE)
            {
                func_80004494(player);

                *is_active = p_event->is_rumble_active = FALSE;
            }
            break;

        case gmRumbleEvent_Kind_LoopBegin:
            p_event->loop_count = gmRumbleEventCast(p_event->p_script, gmRumbleEventDefault)->param;

            gmRumbleEventAdvance(p_event->p_script, gmRumbleEventDefault);

            p_event->p_goto = p_event->p_script;
            break;

        case gmRumbleEvent_Kind_LoopEnd:
            if (--p_event->loop_count != 0)
            {
                p_event->p_script = p_event->p_goto;
            }
            else gmRumbleEventAdvance(p_event->p_script, gmRumbleEventDefault);
        }
    }
    return 0;
}

// 0x80114F98
bool32 func_ovl2_80114F98(s32 player, gmRumbleEvent *p_event)
{
    while (p_event->rumble_status == 0)
    {
        switch (gmRumbleEventCast(p_event->p_script, gmRumbleEventDefault)->opcode)
        {
        case gmRumbleEvent_Kind_SetScript:
            p_event->p_script = D_ovl2_8012F200[p_event->index];
            break;

        case gmRumbleEvent_Kind_StartRumble:
            p_event->rumble_status = gmRumbleEventCast(p_event->p_script, gmRumbleEventDefault)->param;

            gmRumbleEventAdvance(p_event->p_script, gmRumbleEventDefault);

            p_event->is_rumble_active = TRUE;
            break;

        case gmRumbleEvent_Kind_StopRumble:
            p_event->rumble_status = gmRumbleEventCast(p_event->p_script, gmRumbleEventDefault)->param;

            gmRumbleEventAdvance(p_event->p_script, gmRumbleEventDefault);

            p_event->is_rumble_active = FALSE;
            break;

        case gmRumbleEvent_Kind_LoopBegin:
            p_event->loop_count = gmRumbleEventCast(p_event->p_script, gmRumbleEventDefault)->param;

            gmRumbleEventAdvance(p_event->p_script, gmRumbleEventDefault);

            p_event->p_goto = p_event->p_script;
            break;

        case gmRumbleEvent_Kind_LoopEnd:
            if (--p_event->loop_count != 0)
            {
                p_event->p_script = p_event->p_goto;
            }
            else gmRumbleEventAdvance(p_event->p_script, gmRumbleEventDefault);
        }
    }
    return 0;
}

// 0x80115090
void func_ovl2_80115090(gmRumblePlayer *arg0, gmRumbleGlobal *arg1)
{
    gmRumbleGlobal *temp_v0;
    gmRumbleGlobal *temp_v1;

    temp_v0 = arg0->unk_prumble_0x4->grumble_prev;
    temp_v1 = arg1->grumble_next;

    arg1->p_event->p_script = NULL;

    if (temp_v1 != NULL)
    {
        if (arg1->grumble_prev->grumble_next == NULL)
        {
            arg0->unk_prumble_0x4 = arg1->grumble_next;
        }
        else
        {
            arg1->grumble_prev->grumble_next = temp_v1;
            temp_v1->grumble_prev = arg1->grumble_prev;
        }
        arg1->grumble_next = temp_v0->grumble_next;
        temp_v0->grumble_next = arg1;
        arg1->grumble_prev = temp_v0;
        arg0->unk_prumble_0x4->grumble_prev = arg1;
    }
}

// 0x801150F0
bool32 func_ovl2_801150F0(gmRumbleEvent *p_event)
{
    void *p_script = p_event->p_script;
    u32 is_terminate = p_event->rumble_status;

    while (is_terminate == FALSE)
    {
        switch (gmRumbleEventCast(p_script, gmRumbleEventDefault)->opcode)
        {
        case gmRumbleEvent_Kind_SetScript:
            return TRUE;

            break;

        case gmRumbleEvent_Kind_StartRumble:
        case gmRumbleEvent_Kind_StopRumble:
            is_terminate = TRUE;
            break;

        case gmRumbleEvent_Kind_LoopBegin:
            gmRumbleEventAdvance(p_script, gmRumbleEventDefault);
            break;

        case gmRumbleEvent_Kind_LoopEnd:
            if (p_event->loop_count == 1)
            {
                gmRumbleEventAdvance(p_script, gmRumbleEventDefault);
            }
            else p_script = p_event->p_goto;

            break;
        }
    }
    return FALSE;
}

// 0x80115170
void func_ovl2_80115170(gmRumblePlayer *arg0)
{
    gmRumbleGlobal *var_s0 = arg0->unk_prumble_0x4;

    while (var_s0 != NULL)
    {
        gmRumbleEvent *p_event = var_s0->p_event;

        if (p_event->p_script == NULL) break;

        if ((p_event->unk_rumble_0x8 == 0) || ((p_event->unk_rumble_0x8 < 0) && (func_ovl2_801150F0(p_event) != 0)))
        {
            func_ovl2_80115090(arg0, var_s0);

            var_s0 = arg0->unk_prumble_0x4;
        }
        else var_s0 = var_s0->grumble_next;
    }
}

// 0x801151F4
bool32 func_ovl2_801151F4(u8 *is_active, gmRumbleEvent *p_event, s32 player)
{
    if (p_event->p_script == NULL)
    {
        func_800044B4(player);
        func_80004494(player);

        if (*is_active != FALSE)
        {
            *is_active = FALSE;
        }
        return 1;
    }
    else if (p_event->is_rumble_active != *is_active)
    {
        if (*is_active != FALSE)
        {
            func_80004494(player);

            *is_active = FALSE;
        }
        else
        {
            func_80004474(player);

            *is_active = TRUE;
        }
    }
    return 0;
}

// 0x80115298
void func_ovl2_80115298(GObj *rumble_gobj)
{
    s32 player;
    gmRumbleEvent *p_event;
    gmRumbleGlobal *grumble;

    for (player = 0; player < ARRAY_COUNT(D_ovl2_801319F0); player++)
    {
        grumble = D_ovl2_801319F0[player].unk_prumble_0x4;

        if (grumble->p_event->p_script != NULL)
        {
            func_ovl2_80115170(&D_ovl2_801319F0[player]);

            grumble = D_ovl2_801319F0[player].unk_prumble_0x4;
            p_event = grumble->p_event;

            if (func_ovl2_801151F4(&D_ovl2_801319F0[player].is_active, p_event, player) == 0)
            {
                if (func_ovl2_80114E30(&D_ovl2_801319F0[player].is_active, p_event, player) == 0)
                {
                    p_event->rumble_status--;

                    if (p_event->unk_rumble_0x8 > 0)
                    {
                        p_event->unk_rumble_0x8--;
                    }
                }
                grumble = grumble->grumble_next;

                while (grumble != NULL)
                {
                    p_event = grumble->p_event;

                    if (p_event->p_script == NULL) break;

                    if (func_ovl2_80114F98(&D_ovl2_801319F0[player].is_active, p_event) == 0)
                    {
                        p_event->rumble_status--;

                        if (p_event->unk_rumble_0x8 > 0)
                        {
                            p_event->unk_rumble_0x8--;
                        }
                    }
                    grumble = grumble->grumble_next;
                }
            }
        }
    }
}

// 0x801153B8
bool32 func_ovl2_801153B8(gmRumblePlayer *prumble, s32 index, s32 rumble_timer)
{
    gmRumbleGlobal *grumble = prumble->unk_prumble_0x4;

    while (grumble != NULL)
    {
        if (grumble->p_event != NULL)
        {
            gmRumbleEvent *p_event = grumble->p_event;

            if ((p_event->p_script != NULL) && (p_event->index == index))
            {
                if (rumble_timer != 0)
                {
                    if ((p_event->unk_rumble_0x8 > 0) && (p_event->unk_rumble_0x8 < rumble_timer))
                    {
                        p_event->unk_rumble_0x8 = rumble_timer;

                        return 1;
                    }
                }
                else
                {
                    p_event->rumble_status = p_event->loop_count = 0;
                    p_event->p_script = D_ovl2_8012F200[index];

                    return 1;
                }
            }
        }
        else return 0;

        grumble = grumble->grumble_next;
    }
    return 0;
}

// 0x80115458
gmRumbleEvent* func_ovl2_80115458(gmRumblePlayer *prumble, s32 index)
{
    gmRumbleEvent *p_event;
    gmRumbleGlobal *grumble_main;
    gmRumbleGlobal *grumble_prev;
    gmRumbleGlobal *grumble_current;

    grumble_main = prumble->unk_prumble_0x4;
    grumble_prev = grumble_main->grumble_prev;
    grumble_current = grumble_main;

    while (grumble_current != NULL)
    {
        p_event = grumble_current->p_event;

        if (p_event->p_script != NULL)
        {
            if (D_ovl2_8012F22C[index] >= D_ovl2_8012F22C[p_event->index])
            {
                if (grumble_current == grumble_main)
                {
                    grumble_prev->grumble_prev->grumble_next = grumble_prev->grumble_next;

                    prumble->unk_prumble_0x4 = grumble_prev;

                    grumble_prev->grumble_next = grumble_current;
                    grumble_current->grumble_prev = grumble_prev;

                    return grumble_prev->p_event;
                }
                else if (grumble_current != grumble_prev)
                {
                    grumble_prev->grumble_prev->grumble_next = grumble_prev->grumble_next;

                    prumble->unk_prumble_0x4->grumble_prev = grumble_prev->grumble_prev;

                    grumble_prev->grumble_prev = grumble_current->grumble_prev;
                    grumble_prev->grumble_prev->grumble_next = grumble_prev;

                    grumble_prev->grumble_next = grumble_current;
                    grumble_current->grumble_prev = grumble_prev;

                    return grumble_prev->p_event;
                }
                else return grumble_prev->p_event;
            }
        }
        else return p_event;

        grumble_current = grumble_current->grumble_next;
    }
    return NULL;
}

// 0x80115530
void func_ovl2_80115530(s32 player, s32 index, s32 rumble_timer)
{
    s32 unused[4];

    if (func_ovl2_801153B8(&D_ovl2_801319F0[player], index, rumble_timer) == 0)
    {
        gmRumbleEvent *p_event = func_ovl2_80115458(&D_ovl2_801319F0[player], index);

        if (p_event != NULL)
        {
            if (rumble_timer == 0)
            {
                p_event->unk_rumble_0x8 = -1;
            }
            else p_event->unk_rumble_0x8 = rumble_timer;

            p_event->index = index;

            p_event->is_rumble_active = FALSE;

            p_event->rumble_status = p_event->loop_count = 0;

            p_event->p_goto = NULL;

            p_event->p_script = D_ovl2_8012F200[index];
        }
    }
}

// 0x801155C4 - Unused?
void func_ovl2_801155C4(s32 player)
{
    gmRumbleGlobal *grumble;

    func_800044B4(player);
    func_80004494(player);

    if (D_ovl2_801319F0[player].is_active != FALSE)
    {
        D_ovl2_801319F0[player].is_active = FALSE;
    }
    grumble = D_ovl2_801319F0[player].unk_prumble_0x4;

    while (grumble != NULL)
    {
        grumble->p_event->p_script = NULL;

        grumble = grumble->grumble_next;
    }
}

// 0x80115630
void func_ovl2_80115630(s32 player, s32 index)
{
    gmRumbleGlobal *grumble = D_ovl2_801319F0[player].unk_prumble_0x4;

    if (grumble->p_event->p_script != NULL)
    {
        while (grumble != NULL)
        {
            gmRumbleEvent *p_event = grumble->p_event;

            if (p_event->p_script == NULL) break;

            if (index == p_event->index)
            {
                func_ovl2_80115090(&D_ovl2_801319F0[player], grumble);

                grumble = D_ovl2_801319F0[player].unk_prumble_0x4;
            }
            else grumble = grumble->grumble_next;
        }
        func_ovl2_801151F4(&D_ovl2_801319F0[player].is_active, D_ovl2_801319F0[player].unk_prumble_0x4->p_event, player);
    }
}
