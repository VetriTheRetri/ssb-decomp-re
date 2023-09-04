#include "gmscript.h"

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

// 0x80114E30
bool32 func_ovl2_80114E30(u8 *is_active, gmRumbleEvent *p_event, s32 player)
{
    while (p_event->rumble_status == 0)
    {
        switch (gmRumbleEventCast(p_event, gmRumbleEventDefault)->opcode)
        {
        case gmRumbleEvent_Kind_SetScript:
            p_event->p_script = (u16*)D_ovl2_8012F200[p_event->index];
            break;

        case gmRumbleEvent_Kind_StartRumble:
            p_event->rumble_status = gmRumbleEventCast(p_event, gmRumbleEventDefault)->param;

            gmRumbleEventAdvance(p_event, gmRumbleEventDefault);

            if (*is_active == FALSE)
            {
                func_80004474(player);

                *is_active = p_event->is_rumble_active = TRUE;
            }
            break;

        case gmRumbleEvent_Kind_StopRumble:
            p_event->rumble_status = gmRumbleEventCast(p_event, gmRumbleEventDefault)->param;

            gmRumbleEventAdvance(p_event, gmRumbleEventDefault);

            if (*is_active != FALSE)
            {
                func_80004494(player);

                *is_active = p_event->is_rumble_active = FALSE;
            }
            break;

        case gmRumbleEvent_Kind_LoopBegin:
            p_event->loop_count = gmRumbleEventCast(p_event, gmRumbleEventDefault)->param;

            gmRumbleEventAdvance(p_event, gmRumbleEventDefault);

            p_event->p_goto = p_event->p_script;
            break;

        case gmRumbleEvent_Kind_LoopEnd:
            if (--p_event->loop_count != 0)
            {
                p_event->p_script = p_event->p_goto;
            }
            else gmRumbleEventAdvance(p_event, gmRumbleEventDefault);
        }
    }
    return 0;
}