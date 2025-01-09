#include "common.h"

// 0x8002FDE0
u8 alSeqpGetChlVol(ALSeqPlayer* seqp, u8 chan)
{
    return (seqp->chanState[chan].vol * seqp->chanState[chan].vol2) / 127;
}