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
// 0x8002DC70
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

/*
  sct 11/6/95 - Call this whenever a new instrument gets assigned to a channel
  such as when changing banks or in response to a MIDI program change event.
  Currently also gets called when changing sequences.
*/
// 0x8002DD4C
void __setInstChanState(ALSeqPlayer *seqp, ALInstrument *inst, s32 chan)
{
    seqp->chanState[chan].instrument = inst;
    seqp->chanState[chan].pan = inst->pan;
    // seqp->chanState[chan].vol = inst->volume;
//////// Only in Smash Bros.
    seqp->chanState[chan].vol = 127;
////////
    seqp->chanState[chan].priority = inst->priority;
    seqp->chanState[chan].bendRange = inst->bendRange;
//////// Only in Smash Bros.
    seqp->chanState[chan].vol2 = inst->volume;
////////
}

/*
  sct 11/6/95 -- Call this whenever a new sequence is to be played or when
  initializing a sequence player.
*/
// 0x8002DDB8
void __n_resetPerfChanState(ALSeqPlayer *seqp, s32 chan)
{
  seqp->chanState[chan].fxId = AL_FX_NONE;
  seqp->chanState[chan].fxmix = AL_DEFAULT_FXMIX;
  seqp->chanState[chan].pan = AL_PAN_CENTER;
//////// Only in Smash Bros.
  seqp->chanState[chan].vol = 127;
////////
  seqp->chanState[chan].priority = AL_DEFAULT_PRIORITY;
  seqp->chanState[chan].sustain = 0;
  seqp->chanState[chan].bendRange = 200;
  seqp->chanState[chan].pitchBend = 1.0f;
//////// Only in Smash Bros.
  seqp->chanState[chan].unk_0x12 = 0;
  seqp->chanState[chan].unk_0x13 = 95;
  seqp->chanState[chan].unk_0x14 = 0;
////////
}

// 0x8002DE68
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

// 0x8002DF24
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

// 0x8002E1C4
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

// 0x8002E348
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

// 0x8002E3B8
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

// 0x8002F39C
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
