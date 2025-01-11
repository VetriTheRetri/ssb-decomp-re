#include "common.h"

// 0x8002F6C0
s16 alSeqpGetVol(ALSeqPlayer* seqp)
{
    return (seqp->vol * seqp->masterVol) >> 7;
}