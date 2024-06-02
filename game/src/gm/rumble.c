#include "rumble.h"
#include "battle.h"

// 0x80131870
gmRumbleEvent gRumbleEvents[GMMATCH_PLAYERS_MAX * GMRUMBLE_ARRAY_COLS];

// 0x80131960
gmRumbleLink gRumbleLinks[GMMATCH_PLAYERS_MAX * GMRUMBLE_ARRAY_COLS];

// 0x801319F0
gmRumblePlayer gRumblePlayers[GMMATCH_PLAYERS_MAX];

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
sb32 func_ovl2_80114E30(u8 *is_active, gmRumbleEvent *p_event, s32 player)
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
sb32 func_ovl2_80114F98(s32 player, gmRumbleEvent *p_event)
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
void func_ovl2_80115090(gmRumblePlayer *arg0, gmRumbleLink *arg1)
{
    gmRumbleLink *temp_v0;
    gmRumbleLink *temp_v1;

    temp_v0 = arg0->rlink->rprev;
    temp_v1 = arg1->rnext;

    arg1->p_event->p_script = NULL;

    if (temp_v1 != NULL)
    {
        if (arg1->rprev->rnext == NULL)
        {
            arg0->rlink = arg1->rnext;
        }
        else
        {
            arg1->rprev->rnext = temp_v1;
            temp_v1->rprev = arg1->rprev;
        }
        arg1->rnext = temp_v0->rnext;
        temp_v0->rnext = arg1;
        arg1->rprev = temp_v0;
        arg0->rlink->rprev = arg1;
    }
}

// 0x801150F0
sb32 func_ovl2_801150F0(gmRumbleEvent *p_event)
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
    gmRumbleLink *var_s0 = arg0->rlink;

    while (var_s0 != NULL)
    {
        gmRumbleEvent *p_event = var_s0->p_event;

        if (p_event->p_script == NULL) break;

        if ((p_event->unk_rumble_0x8 == 0) || ((p_event->unk_rumble_0x8 < 0) && (func_ovl2_801150F0(p_event) != 0)))
        {
            func_ovl2_80115090(arg0, var_s0);

            var_s0 = arg0->rlink;
        }
        else var_s0 = var_s0->rnext;
    }
}

// 0x801151F4
sb32 func_ovl2_801151F4(u8 *is_active, gmRumbleEvent *p_event, s32 player)
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
    gmRumbleLink *rlink;

    for (player = 0; player < ARRAY_COUNT(gRumblePlayers); player++)
    {
        rlink = gRumblePlayers[player].rlink;

        if (rlink->p_event->p_script != NULL)
        {
            func_ovl2_80115170(&gRumblePlayers[player]);

            rlink = gRumblePlayers[player].rlink;
            p_event = rlink->p_event;

            if (func_ovl2_801151F4(&gRumblePlayers[player].is_active, p_event, player) == 0)
            {
                if (func_ovl2_80114E30(&gRumblePlayers[player].is_active, p_event, player) == 0)
                {
                    p_event->rumble_status--;

                    if (p_event->unk_rumble_0x8 > 0)
                    {
                        p_event->unk_rumble_0x8--;
                    }
                }
                rlink = rlink->rnext;

                while (rlink != NULL)
                {
                    p_event = rlink->p_event;

                    if (p_event->p_script == NULL) break;

                    if (func_ovl2_80114F98(&gRumblePlayers[player].is_active, p_event) == 0)
                    {
                        p_event->rumble_status--;

                        if (p_event->unk_rumble_0x8 > 0)
                        {
                            p_event->unk_rumble_0x8--;
                        }
                    }
                    rlink = rlink->rnext;
                }
            }
        }
    }
}

// 0x801153B8
sb32 func_ovl2_801153B8(gmRumblePlayer *prumble, s32 index, s32 rumble_timer)
{
    gmRumbleLink *rlink = prumble->rlink;

    while (rlink != NULL)
    {
        if (rlink->p_event != NULL)
        {
            gmRumbleEvent *p_event = rlink->p_event;

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

        rlink = rlink->rnext;
    }
    return 0;
}

// 0x80115458
gmRumbleEvent* func_ovl2_80115458(gmRumblePlayer *prumble, s32 index)
{
    gmRumbleEvent *p_event;
    gmRumbleLink *rlink_main;
    gmRumbleLink *rprev;
    gmRumbleLink *rlink_current;

    rlink_main = prumble->rlink;
    rprev = rlink_main->rprev;
    rlink_current = rlink_main;

    while (rlink_current != NULL)
    {
        p_event = rlink_current->p_event;

        if (p_event->p_script != NULL)
        {
            if (D_ovl2_8012F22C[index] >= D_ovl2_8012F22C[p_event->index])
            {
                if (rlink_current == rlink_main)
                {
                    rprev->rprev->rnext = rprev->rnext;

                    prumble->rlink = rprev;

                    rprev->rnext = rlink_current;
                    rlink_current->rprev = rprev;

                    return rprev->p_event;
                }
                else if (rlink_current != rprev)
                {
                    rprev->rprev->rnext = rprev->rnext;

                    prumble->rlink->rprev = rprev->rprev;

                    rprev->rprev = rlink_current->rprev;
                    rprev->rprev->rnext = rprev;

                    rprev->rnext = rlink_current;
                    rlink_current->rprev = rprev;

                    return rprev->p_event;
                }
                else return rprev->p_event;
            }
        }
        else return p_event;

        rlink_current = rlink_current->rnext;
    }
    return NULL;
}

// 0x80115530
void func_ovl2_80115530(s32 player, s32 index, s32 rumble_timer)
{
    s32 unused[4];

    if (func_ovl2_801153B8(&gRumblePlayers[player], index, rumble_timer) == 0)
    {
        gmRumbleEvent *p_event = func_ovl2_80115458(&gRumblePlayers[player], index);

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
    gmRumbleLink *rlink;

    func_800044B4(player);
    func_80004494(player);

    if (gRumblePlayers[player].is_active != FALSE)
    {
        gRumblePlayers[player].is_active = FALSE;
    }
    rlink = gRumblePlayers[player].rlink;

    while (rlink != NULL)
    {
        rlink->p_event->p_script = NULL;

        rlink = rlink->rnext;
    }
}

// 0x80115630
void func_ovl2_80115630(s32 player, s32 index)
{
    gmRumbleLink *rlink = gRumblePlayers[player].rlink;

    if (rlink->p_event->p_script != NULL)
    {
        while (rlink != NULL)
        {
            gmRumbleEvent *p_event = rlink->p_event;

            if (p_event->p_script == NULL) break;

            if (index == p_event->index)
            {
                func_ovl2_80115090(&gRumblePlayers[player], rlink);

                rlink = gRumblePlayers[player].rlink;
            }
            else rlink = rlink->rnext;
        }
        func_ovl2_801151F4(&gRumblePlayers[player].is_active, gRumblePlayers[player].rlink->p_event, player);
    }
}

// 0x801156E4
void gmRumble_SetPlayerRumble(void)
{
    // This is an actual brain damage function. Not only does it not match with 80131870 and 80131960 arranged as 2D arrays
    // and therefore mandating iterator gymnastics to track each player's rumble struct,
    // it also requires this exact setup seen below to match, line for line, except the second if(TRUE) hack statement. 
    // I am not sure what HAL did here... nor do I want to know at this point.

    gmRumbleEvent *p_event;
    gmRumbleLink *rlink;
    gmRumbleLink *rlink_end;
    gmRumblePlayer *rplayer;
    s32 i;
    s32 j;
    s32 k;
    s32 l;
    s32 player;

    omAddGObjCommonProc(omMakeGObjSPAfter(GObj_Kind_Rumble, NULL, 0xD, 0x80000000U), func_ovl2_80115298, 1, 0);

    /* DEBUGGER NOTES */

    // This is all the memory stores in order viewed from Project 64.

    // Ignoring the above function calls, this starts by setting the i's rumble status to OFF in 0x801319F0. All good so far.
    // Then it stores the first gmRumbleLink to 0x801319F0.
    // Then 0x80131960's p_event is set to 0x80131870. (index 0)
    // Then 0x80131870's p_goto and p_script are set to NULL one after another. (index 0)

    // 0x80131870 + 0x14, so now we're onto the next column
    // 0x80131960 + 0xC, also next column (index 1)

    // 0x8013196C gets stored to 0x80131960's rnext
    // 0x80131884 gets stored to 0x8013196C's p_event
    // 0x80131890 and 0x80131894 get set to NULL

    // Next loop iteration:
    // 0x80131978 gets stored to 0x8013196C's rnext
    // 0x8013196C gets stored to 0x80131978's rprev
    // 0x80131898 gets stored to 0x80131978's p_event
    // 0x801318A0 and 0x801318A4 get set to NULL, loop over

    // 0x8013197C gets set to NULL
    // get 0x801319F0's rlink
    // store it to 0x80131960's rprev, repeat i loop

    for (j = i = player = 0; i < (ARRAY_COUNT(gRumbleEvents) + ARRAY_COUNT(gRumbleLinks)) / 2; j += GMRUMBLE_ARRAY_COLS, i += GMRUMBLE_ARRAY_COLS, player++)
    {
        if (TRUE)
        {
            rplayer = &gRumblePlayers[player];
        }
        rlink = &gRumbleLinks[j];
        p_event = &gRumbleEvents[i];

        rplayer->is_active = FALSE;
        rplayer->rlink = rlink;

        rlink->p_event = p_event;
        p_event->p_goto = NULL;
        p_event->p_script = NULL;

        if (TRUE)
        {
            rlink = &gRumbleLinks[j];
        }
        for (k = 1, l = j + 1; k < GMRUMBLE_ARRAY_COLS; k++, l++)
        {
            rlink->rnext = &gRumbleLinks[l];
            gRumbleLinks[l].rprev = rlink;

            rlink_end = &gRumbleLinks[l];

            gRumbleLinks[l].p_event = &gRumbleEvents[l];
            gRumbleEvents[l].p_goto = NULL;
            gRumbleEvents[l].p_script = NULL;

            rlink = &gRumbleLinks[l];
        }
        rlink_end->rnext = NULL;
        gRumblePlayers[player].rlink->rprev = rlink_end;
    }
}

// 0x801157EC
void func_ovl2_801157EC(void)
{
    s32 player;

    for (player = 0; player < GMMATCH_PLAYERS_MAX; player++)
    {
        func_800044B4(player);
        func_80004494(player);
    }
}

// 0x80115834
void func_ovl2_80115834(void)
{
    GObj *rumble_gobj = gOMObjCommonLinks[GObj_LinkID_Rumble];

    while (rumble_gobj != NULL)
    {
        if (rumble_gobj->gobj_id == GObj_Kind_Rumble)
        {
            func_8000B2B8(rumble_gobj);
        }
        rumble_gobj = rumble_gobj->link_next;
    }
}
