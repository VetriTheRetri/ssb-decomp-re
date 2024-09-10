#include "common.h"

// Equivalent file in pokemon snap: seqplayer.c

/*
 Calculates the delta time in ticks until the next sequence
 event taking into account loop points, and posts a
 sequence reference event with the time in usecs.

 Does nothing if the sequence player is not playing or there
 is no target sequence.

 sct 11/7/95
*/
// 8002DC70
void __postNextSeqEvent(ALSeqPlayer *seqp)
{
	ALEvent evt;
	s32 deltaTicks;
	ALSeq *seq = seqp->target;

	/* sct 1/5/96 - Do nothing if we're not playing or don't have a target sequence. */
	if ((seqp->state != AL_PLAYING) || (seq == NULL))
		return;

	/* Get the next event time in ticks. */
	/* If false is returned, then there is no next delta (ie. end of sequence reached). */
	if (!__alSeqNextDelta(seq, &deltaTicks))
		return;

	/* Handle loops. */
	if (seqp->loopCount)
	{
		/* Assume that the loop end falls on a MIDI event. Delta time
		   will be correct even if we loop */
		if (alSeqGetTicks(seq) + deltaTicks >= seqp->loopEnd->curTicks)
		{
			alSeqSetLoc(seq, seqp->loopStart);

			if (seqp->loopCount != -1)
			seqp->loopCount--;
		}
	}

	evt.type = AL_SEQ_REF_EVT;
	alEvtqPostEvent(&seqp->evtq, &evt, deltaTicks * seqp->uspt);
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/__setInstChanState.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/__n_resetPerfChanState.s")

// 8002DE68
void __initFromBank(ALSeqPlayer* seqp, ALBank *b)
{
	/*
	 * init the chanState with the default instrument
	 */
	s32 i;
	ALInstrument* inst = 0;

	/* set to the first available instrument. */
	for(i = 0; !inst ; i++)
		inst = b->instArray[i];

	/* sct 11/6/95 - Setup the channel state for the given instrument. */
	/* There is some wasted effort here since both calls the same state vars */
	/* but it's safer. */
	for (i = 0; i < seqp->maxChannels; i++)
	{
		__n_resetPerfChanState(seqp, i);
		__setInstChanState(seqp, inst, i);
	}

	if (b->percussion)
	{
		__n_resetPerfChanState(seqp, i);
		__setInstChanState(seqp, b->percussion, 9);
	}
}


void func_8002DF1C_2EB1C() {}

// 8002DF24
ALMicroTime __n_vsDelta(ALVoiceState *vs, ALMicroTime t)
{
	/*
	 * If we are interrupting a previously set envelope segment, we
	 * need to recalculate the segment end time given the current
	 * time. Note: this routine assumes that the voice is currently
	 * playing.
	 */

	s32 delta = vs->envEndTime - t;

	if (delta >= 0)
		return delta;
	else
		return AL_GAIN_CHANGE_TIME;
}


#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/__n_vsVol.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/__n_seqpReleaseVoice.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/func_8002E11C_2ED1C.s")

// 8002E1C4
void __n_unmapVoice(ALSeqPlayer *seqp, ALVoice *voice)
{
	ALVoiceState *prev = 0;
	ALVoiceState *vs;

	/*
	 * we could use doubly linked lists here and save some code and
	 * execution time, but time spent here in negligible, so it won't
	 * make much difference.
	 */
	for (vs = seqp->vAllocHead; vs != 0; vs = vs->next)
	{
		if (&vs->voice == voice)
		{
			if (prev)
				prev->next = vs->next;
			else
				seqp->vAllocHead = vs->next;

			if (vs == seqp->vAllocTail)
				seqp->vAllocTail = prev;

			vs->next = seqp->vFreeList;
			seqp->vFreeList = vs;
			return;
		}
		prev = vs;
	}
#ifdef _DEBUG
	__osError(ERR_ALSEQPUNMAP, 1, voice);
#endif
}


#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/func_8002E234_2EE34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/__n_setInstChanState.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/__n_vsPan.s")

// 8002E348
ALVoiceState *__n_lookupVoice(ALSeqPlayer *seqp, u8 key, u8 channel)
{
	ALVoiceState  *vs;

	for (vs = seqp->vAllocHead; vs != 0; vs = vs->next)
	{
		if ((vs->key == key) && (vs->channel == channel) &&
			(vs->phase != AL_PHASE_RELEASE) && (vs->phase != AL_PHASE_SUSTREL))
			return vs;
	}

	return 0;
}

// 8002E3B8
ALVoiceState* __n_mapVoice(ALSeqPlayer *seqp, u8 key, u8 vel, u8 channel)
{
	ALVoiceState  *vs = seqp->vFreeList;

	if (vs)
	{
		seqp->vFreeList = vs->next;

		vs->next = 0;

		if (!seqp->vAllocHead)
			seqp->vAllocHead = vs;
		else
			seqp->vAllocTail->next = vs;

		seqp->vAllocTail = vs;

		vs->channel             = channel;
		vs->key                 = key;
		vs->velocity            = vel;
		vs->voice.clientPrivate = vs;
	}

	return vs;
}


#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/__n_lookupSoundQuick.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/func_8002E520_2F120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/func_8002ED54_2F954.s")

// 8002F39C
void __n_seqpStopOsc(ALSeqPlayer *seqp, ALVoiceState *vs)
{
	ALEventListItem *thisNode, *nextNode;
	s16 evtType;

	thisNode = (ALEventListItem*)seqp->evtq.allocList.next;
	while (thisNode)
	{
		nextNode = (ALEventListItem*)thisNode->node.next;
		evtType = thisNode->evt.type;
		if (evtType == AL_TREM_OSC_EVT || evtType == AL_VIB_OSC_EVT)
		{
			if (thisNode->evt.msg.osc.vs == vs)
			{
				(*seqp->stopOsc)(thisNode->evt.msg.osc.oscState);
				alUnlink((ALLink*)thisNode);
				if (nextNode)
					nextNode->delta += thisNode->delta;
				alLink((ALLink*)thisNode, &seqp->evtq.freeList);
				if (evtType == AL_TREM_OSC_EVT)
					vs->flags = vs->flags & 0xFE;
				else /* must be a AL_VIB_OSC_EVT */
					vs->flags = vs->flags & 0xFD;
				if (!vs->flags)
					return;  /* there should be no more events */
			}
		}

		thisNode = nextNode;
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/__n_initChanState.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/audio09/func_8002F51C_3011C.s")
