/*====================================================================
 * cspsetbank.c
 *
 * Copyright 1995, Silicon Graphics, Inc.
 * All Rights Reserved.
 *
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Silicon Graphics,
 * Inc.; the contents of this file may not be disclosed to third
 * parties, copied or duplicated in any form, in whole or in part,
 * without the prior written permission of Silicon Graphics, Inc.
 *
 * RESTRICTED RIGHTS LEGEND:
 * Use, duplication or disclosure by the Government is subject to
 * restrictions as set forth in subdivision (c)(1)(ii) of the Rights
 * in Technical Data and Computer Software clause at DFARS
 * 252.227-7013, and/or in similar or successor clauses in the FAR,
 * DOD or NASA FAR Supplement. Unpublished - rights reserved under the
 * Copyright Laws of the United States.
 *====================================================================*/

#include <libaudio.h>

#if 0
// Needs -O3
// ALCSPlayer Needs 8 bytes of padding before evtq to match
void alCSPSetBank(ALCSPlayer *seqp, ALBank *b)
{
    ALEvent evt;

    evt.type = AL_SEQP_BANK_EVT;
    evt.msg.spbank.bank = b;

    alEvtqPostEvent(&seqp->evtq, &evt, 0);
}

void alCSPSetBank_Alt(ALCSPlayer *seqp, ALBank *b, u8 arg2)
{
    ALEvent evt;

    if (arg2 == 0) {
        evt.type = AL_SEQP_BANK_EVT;
        evt.msg.spbank.bank = b;
        alEvtqPostEvent(&seqp->evtq, &evt, 0);
    } else if (arg2 == 1) {
        evt.type = 0x18;
        evt.msg.spbank.bank = b;
        alEvtqPostEvent(&seqp->evtq, &evt, 0);
    } else if (arg2 == 2) {
        evt.type = 0x19;
        evt.msg.spbank.bank = b;
        alEvtqPostEvent(&seqp->evtq, &evt, 0);
    }

}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/cspsetbank/alCSPSetBank_Alt.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/cspsetbank/alCSPSetBank.s")
#endif
