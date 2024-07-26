#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80131870
gmRumbleEvent sGMRumbleEvents[GMMATCH_PLAYERS_MAX * GMRUMBLE_ARRAY_COLS];

// 0x80131960
gmRumbleLink sGMRumbleLinks[GMMATCH_PLAYERS_MAX * GMRUMBLE_ARRAY_COLS];

// 0x801319F0
gmRumblePlayer sGMRumblePlayers[GMMATCH_PLAYERS_MAX];

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x8012F1A0
gmRumbleEventDefault dGMRumbleEvent0[/* */] =
{
    { gmRumbleEvent_Kind_StartRumble, 8000 }
};

// 0x8012F1A4
gmRumbleEventDefault dGMRumbleEvent1[/* */] = 
{ 
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  2 },
    { gmRumbleEvent_Kind_StopRumble,   2 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_End,          0 } // Needed for 0-pad?
};

// 0x8012F1B0
gmRumbleEventDefault dGMRumbleEvent2[/* */] =
{
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  2 },
    { gmRumbleEvent_Kind_StopRumble,   4 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_End,    0 }
};

// 0x8012F1BC
gmRumbleEventDefault dGMRumbleEvent3[/* */] =
{
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  2 },
    { gmRumbleEvent_Kind_StopRumble,   8 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_End,          0 }
};

// 0x8012F1C8
gmRumbleEventDefault dGMRumbleEvent4[/* */] =
{
    { gmRumbleEvent_Kind_StartRumble, 12 }
};

// 0x8012F1CC
gmRumbleEventDefault dGMRumbleEvent5[/* */] =
{
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  2 },
    { gmRumbleEvent_Kind_StopRumble,   1 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_End,          0 }
};

// 0x8012F1D8
gmRumbleEventDefault dGMRumbleEvent6[/* */] =
{
    { gmRumbleEvent_Kind_StartRumble, 3 }
};

// 0x8012F1DC
gmRumbleEventDefault dGMRumbleEvent7[/* */] =
{
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  2 },
    { gmRumbleEvent_Kind_StopRumble,   3 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_End,          0 }
};

// 0x8012F1E8
gmRumbleEventDefault dGMRumbleEvent8[/* */] =
{
    { gmRumbleEvent_Kind_LoopBegin, 8000 },
    { gmRumbleEvent_Kind_StartRumble,  1 },
    { gmRumbleEvent_Kind_StopRumble,   3 },
    { gmRumbleEvent_Kind_LoopEnd,      0 },
    { gmRumbleEvent_Kind_End,          0 }
};

// 0x8012F1F4
gmRumbleEventDefault dGMRumbleEvent9[/* */] =
{
    { gmRumbleEvent_Kind_StartRumble,  8 }
};

// 0x8012F1F8
gmRumbleEventDefault dGMRumbleEvent10[/* */] =
{
    { gmRumbleEvent_Kind_StartRumble, 16 }
};

// 0x8012F1FC - padding?
gmRumbleEventDefault dGMRumbleEvent11[/* */] =
{
    { gmRumbleEvent_Kind_End,          0 }
};

// 0x8012F200
gmRumbleEventDefault *dGMRumbleEventList[/* */] =
{
    dGMRumbleEvent0,
    dGMRumbleEvent1,
    dGMRumbleEvent2,
    dGMRumbleEvent3,
    dGMRumbleEvent4,
    dGMRumbleEvent5,
    dGMRumbleEvent6,
    dGMRumbleEvent7,
    dGMRumbleEvent8,
    dGMRumbleEvent9,
    dGMRumbleEvent10
};

// 0x8012F22C
u8 dGMRumblePriorities[/* */] = 
{
    10, 9, 
    5,  5, 
    6,  5, 
    3,  3, 
    3,  3, 
    3
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80114E30
sb32 gmRumbleUpdateEventExecute(ub8 *is_active, gmRumbleEvent *p_event, s32 player)
{
    while (p_event->rumble_status == 0)
    {
        switch (gmRumbleEventCast(p_event->p_script, gmRumbleEventDefault)->opcode)
        {
        case gmRumbleEvent_Kind_End:
            p_event->p_script = dGMRumbleEventList[p_event->rumble_id];
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
    return FALSE;
}

// 0x80114F98
sb32 gmRumbleUpdateEventQueue(ub8 *is_active, gmRumbleEvent *p_event)
{
    while (p_event->rumble_status == 0)
    {
        switch (gmRumbleEventCast(p_event->p_script, gmRumbleEventDefault)->opcode)
        {
        case gmRumbleEvent_Kind_End:
            p_event->p_script = dGMRumbleEventList[p_event->rumble_id];
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
    return FALSE;
}

// 0x80115090 - I suck at linked lists, this name might be wrong
void gmRumbleAddLinkAfter(gmRumblePlayer *rplayer, gmRumbleLink *rlink)
{
    gmRumbleLink *rprev = rplayer->rlink->rprev;
    gmRumbleLink *rnext = rlink->rnext;

    rlink->p_event->p_script = NULL;

    if (rnext != NULL)
    {
        if (rlink->rprev->rnext == NULL)
        {
            rplayer->rlink = rlink->rnext;
        }
        else
        {
            rlink->rprev->rnext = rnext;
            rnext->rprev = rlink->rprev;
        }
        rlink->rnext = rprev->rnext;
        rprev->rnext = rlink;
        rlink->rprev = rprev;
        rplayer->rlink->rprev = rlink;
    }
}

// 0x801150F0
sb32 gmRumbleUpdateEventCheckEnd(gmRumbleEvent *p_event)
{
    void *p_script = p_event->p_script;
    ub32 is_terminate = p_event->rumble_status;

    while (is_terminate == FALSE)
    {
        switch (gmRumbleEventCast(p_script, gmRumbleEventDefault)->opcode)
        {
        case gmRumbleEvent_Kind_End:
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
void gmRumbleUpdateEventLinks(gmRumblePlayer *rplayer)
{
    gmRumbleLink *rlink = rplayer->rlink;

    while (rlink != NULL)
    {
        gmRumbleEvent *p_event = rlink->p_event;

        if (p_event->p_script == NULL) break;

        if ((p_event->rumble_timer == 0) || ((p_event->rumble_timer < 0) && (gmRumbleUpdateEventCheckEnd(p_event) != FALSE)))
        {
            gmRumbleAddLinkAfter(rplayer, rlink);

            rlink = rplayer->rlink;
        }
        else rlink = rlink->rnext;
    }
}

// 0x801151F4
sb32 gmRumbleGetMotorUpdateStatus(ub8 *is_active, gmRumbleEvent *p_event, s32 player)
{
    if (p_event->p_script == NULL)
    {
        func_800044B4(player);
        func_80004494(player);

        if (*is_active != FALSE)
        {
            *is_active = FALSE;
        }
        return TRUE;
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
    return FALSE;
}

// 0x80115298
void gmRumbleActorProcUpdate(GObj *rumble_gobj)
{
    s32 player;
    gmRumbleEvent *p_event;
    gmRumbleLink *rlink;

    for (player = 0; player < ARRAY_COUNT(sGMRumblePlayers); player++)
    {
        rlink = sGMRumblePlayers[player].rlink;

        if (rlink->p_event->p_script != NULL)
        {
            gmRumbleUpdateEventLinks(&sGMRumblePlayers[player]);

            rlink = sGMRumblePlayers[player].rlink;
            p_event = rlink->p_event;

            if (gmRumbleGetMotorUpdateStatus(&sGMRumblePlayers[player].is_active, p_event, player) == FALSE)
            {
                if (gmRumbleUpdateEventExecute(&sGMRumblePlayers[player].is_active, p_event, player) == FALSE)
                {
                    p_event->rumble_status--;

                    if (p_event->rumble_timer > 0)
                    {
                        p_event->rumble_timer--;
                    }
                }
                rlink = rlink->rnext;

                while (rlink != NULL)
                {
                    p_event = rlink->p_event;

                    if (p_event->p_script == NULL) break;

                    if (gmRumbleUpdateEventQueue(&sGMRumblePlayers[player].is_active, p_event) == FALSE)
                    {
                        p_event->rumble_status--;

                        if (p_event->rumble_timer > 0)
                        {
                            p_event->rumble_timer--;
                        }
                    }
                    rlink = rlink->rnext;
                }
            }
        }
    }
}

// 0x801153B8
sb32 gmRumbleCheckSetEventID(gmRumblePlayer *rplayer, s32 rumble_id, s32 rumble_timer)
{
    gmRumbleLink *rlink = rplayer->rlink;

    while (rlink != NULL)
    {
        if (rlink->p_event != NULL)
        {
            gmRumbleEvent *p_event = rlink->p_event;

            if ((p_event->p_script != NULL) && (p_event->rumble_id == rumble_id))
            {
                if (rumble_timer != 0)
                {
                    if ((p_event->rumble_timer > 0) && (p_event->rumble_timer < rumble_timer))
                    {
                        p_event->rumble_timer = rumble_timer;

                        return TRUE;
                    }
                }
                else
                {
                    p_event->rumble_status = p_event->loop_count = 0;
                    p_event->p_script = dGMRumbleEventList[rumble_id];

                    return TRUE;
                }
            }
        }
        else return FALSE;

        rlink = rlink->rnext;
    }
    return FALSE;
}

// 0x80115458
gmRumbleEvent* gmRumbleGetEventPriorityRelink(gmRumblePlayer *rplayer, s32 rumble_id)
{
    gmRumbleEvent *p_event;
    gmRumbleLink *rlink_main;
    gmRumbleLink *rprev;
    gmRumbleLink *rlink_current;

    rlink_main = rplayer->rlink;
    rprev = rlink_main->rprev;
    rlink_current = rlink_main;

    while (rlink_current != NULL)
    {
        p_event = rlink_current->p_event;

        if (p_event->p_script != NULL)
        {
            if (dGMRumblePriorities[rumble_id] >= dGMRumblePriorities[p_event->rumble_id])
            {
                if (rlink_current == rlink_main)
                {
                    rprev->rprev->rnext = rprev->rnext;

                    rplayer->rlink = rprev;

                    rprev->rnext = rlink_current;
                    rlink_current->rprev = rprev;

                    return rprev->p_event;
                }
                else if (rlink_current != rprev)
                {
                    rprev->rprev->rnext = rprev->rnext;

                    rplayer->rlink->rprev = rprev->rprev;

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
void gmRumbleSetPlayerRumbleParams(s32 player, s32 rumble_id, s32 rumble_timer)
{
    s32 unused[4];

    if (gmRumbleCheckSetEventID(&sGMRumblePlayers[player], rumble_id, rumble_timer) == FALSE)
    {
        gmRumbleEvent *p_event = gmRumbleGetEventPriorityRelink(&sGMRumblePlayers[player], rumble_id);

        if (p_event != NULL)
        {
            if (rumble_timer == 0)
            {
                p_event->rumble_timer = -1;
            }
            else p_event->rumble_timer = rumble_timer;

            p_event->rumble_id = rumble_id;

            p_event->is_rumble_active = FALSE;

            p_event->rumble_status = p_event->loop_count = 0;

            p_event->p_goto = NULL;

            p_event->p_script = dGMRumbleEventList[rumble_id];
        }
    }
}

// 0x801155C4 - Unused?
void func_ovl2_801155C4(s32 player)
{
    gmRumbleLink *rlink;

    func_800044B4(player);
    func_80004494(player);

    if (sGMRumblePlayers[player].is_active != FALSE)
    {
        sGMRumblePlayers[player].is_active = FALSE;
    }
    rlink = sGMRumblePlayers[player].rlink;

    while (rlink != NULL)
    {
        rlink->p_event->p_script = NULL;

        rlink = rlink->rnext;
    }
}

// 0x80115630
void gmRumbleSetRumbleID(s32 player, s32 rumble_id)
{
    gmRumbleLink *rlink = sGMRumblePlayers[player].rlink;

    if (rlink->p_event->p_script != NULL)
    {
        while (rlink != NULL)
        {
            gmRumbleEvent *p_event = rlink->p_event;

            if (p_event->p_script == NULL) 
            {
                break;
            }
            if (rumble_id == p_event->rumble_id)
            {
                gmRumbleAddLinkAfter(&sGMRumblePlayers[player], rlink);

                rlink = sGMRumblePlayers[player].rlink;
            }
            else rlink = rlink->rnext;
        }
        gmRumbleGetMotorUpdateStatus(&sGMRumblePlayers[player].is_active, sGMRumblePlayers[player].rlink->p_event, player);
    }
}

// 0x801156E4
void gmRumbleMakeActor(void)
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

    omAddGObjCommonProc(omMakeGObjSPAfter(nOMObjKindRumble, NULL, GObj_LinkID_Rumble, GOBJ_LINKORDER_DEFAULT), gmRumbleActorProcUpdate, nOMObjProcessKindProc, 0);

    /* DEBUGGER NOTES */

    // This is all the memory stores in order viewed from Project 64.

    // Ignoring the above function calls, this starts by setting the i's rumble status to OFF in 0x801319F0. All good so far.
    // Then it stores the first gmRumbleLink to 0x801319F0.
    // Then 0x80131960's p_event is set to 0x80131870. (rumble_id 0)
    // Then 0x80131870's p_goto and p_script are set to NULL one after another. (rumble_id 0)

    // 0x80131870 + 0x14, so now we're onto the next column
    // 0x80131960 + 0xC, also next column (rumble_id 1)

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

    for (j = i = player = 0; i < (ARRAY_COUNT(sGMRumbleEvents) + ARRAY_COUNT(sGMRumbleLinks)) / 2; j += GMRUMBLE_ARRAY_COLS, i += GMRUMBLE_ARRAY_COLS, player++)
    {
        if (TRUE)
        {
            rplayer = &sGMRumblePlayers[player];
        }
        rlink = &sGMRumbleLinks[j];
        p_event = &sGMRumbleEvents[i];

        rplayer->is_active = FALSE;
        rplayer->rlink = rlink;

        rlink->p_event = p_event;
        p_event->p_goto = NULL;
        p_event->p_script = NULL;

        if (TRUE)
        {
            rlink = &sGMRumbleLinks[j];
        }
        for (k = 1, l = j + 1; k < GMRUMBLE_ARRAY_COLS; k++, l++)
        {
            rlink->rnext = &sGMRumbleLinks[l];
            sGMRumbleLinks[l].rprev = rlink;

            rlink_end = &sGMRumbleLinks[l];

            sGMRumbleLinks[l].p_event = &sGMRumbleEvents[l];
            sGMRumbleEvents[l].p_goto = NULL;
            sGMRumbleEvents[l].p_script = NULL;

            rlink = &sGMRumbleLinks[l];
        }
        rlink_end->rnext = NULL;
        sGMRumblePlayers[player].rlink->rprev = rlink_end;
    }
}

// 0x801157EC
void gmRumbleInitPlayers(void)
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
        if (rumble_gobj->gobj_id == nOMObjKindRumble)
        {
            func_8000B2B8(rumble_gobj);
        }
        rumble_gobj = rumble_gobj->link_next;
    }
}
