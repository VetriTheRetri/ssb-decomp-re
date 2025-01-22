#include "common.h"
#include <n_audio/n_synthInternals.h>
#include <n_audio/n_seqp.h>

typedef struct alSoundEffect
{
	void *unk_0x0;
	void *unk_0x4;
	void *unk_0x8;
	void *unk_0xC;
	u16 unk_0x10;
	u16 unk_0x12;
	u16 unk_0x14;
	u16 unk_0x16;
	u16 unk_0x18;
	u16 unk_0x1A;
	s32* unk_0x1C;
	u16 unk_0x20;
	u16 unk_0x22;
	u16 unk_0x24;
	u16 sfx_id;
	u16 sfx_max;    // End of SFX index list

} alSoundEffect;

typedef struct Unk8009EE0C {
	struct Unk8009EE0C* unk0;
	u8 pad4[0x24];
	s16 unk28;
	u8 unk2A;
	u8 pad2B[0x1C];
	s16 unk48;
} Unk8009EE0C;

typedef struct UnkS32Wrapper {
	s32 value;
} UnkS32Wrapper;


extern alSoundEffect D_8009EDD0_406D0;
extern Unk8009EE0C* D_8009EE0C_4070C;
//extern D_8009EE10_40710;
extern u16 D_8009EE1E_4071E;
extern u16 D_8009EE20_40720;
extern u8 unref8009EE22[0x8];
extern u8 D_8009EE2A_4072A;
extern u16 D_8003D31C_3DF1C;

void func_80026070_26C70(u8 arg0) {
	if (arg0 > 0x7F) {
		arg0 = 0x7F;
	}
	D_8009EE2A_4072A = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026094_26C94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026104_26D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026174_26D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026204_26E04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_800264A4_270A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026594_27194.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002668C_2728C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_800266A0_272A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026738_27338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_800267F4_273F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026844_27444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026958_27558.s")

s32 func_800269C0_275C0(UnkS32Wrapper arg0) {
		arg0.value = arg0.value & 0xFFFF;
		if (arg0.value >= (s32) D_8009EDD0_406D0.sfx_max)
				return 0;
		return func_80026958_27558(D_8009EDD0_406D0.unk_0x1C[arg0.value], arg0.value);
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026A10_27610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026A6C_2766C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026B40_27740.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80026B90_27790.s")

void func_80027338_27F38(void) {
	OSIntMask mask;
	Unk8009EE0C* var_v1;

	mask = osSetIntMask(OS_IM_NONE);
	var_v1 = D_8009EE0C_4070C;
	while (var_v1 != NULL) {
		var_v1->unk28 = 0;
		var_v1->unk2A = 2;
		var_v1->unk48 = 0;
		var_v1 = var_v1->unk0;
	}
	osSetIntMask(mask);
}

extern s32 sRandomSeed1;
extern s32 sRandomSeed2;

//split 0x27F90?
f32 randFloat1(void) {
	sRandomSeed2 = (sRandomSeed2 * 0x343FD) + 0x269EC3;
	return ((sRandomSeed2 >> 16) & 0xFFFF) / 65536.0f;
}


f32 randFloat2(void) {
	sRandomSeed1 = (sRandomSeed1 * 0x343FD) + 0x269EC3;
	return ((sRandomSeed1 >> 16) & 0xFFFF) / 65536.0f;
}

void func_80027458_28058(void) {
}

//split 0x28060?

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80027460_28060.s")

// This should be a file split, and compiled with -O3. File: n_csq.c
#if 0
static u32 __readVarLen(ALCSeq *s,u32 track);
static u8  __getTrackByte(ALCSeq *s,u32 track);
static u32 __n_alCSeqGetTrackEvent(ALCSeq *seq, u32 track, N_ALEvent *event);

void n_alCSeqNew(ALCSeq *seq, u8 *ptr)
{
	u32         i,tmpOff,flagTmp;

	/* load the seqence pointed to by ptr   */
	seq->base = (ALCMidiHdr*)ptr;
	seq->validTracks = 0;
	seq->lastDeltaTicks = 0;
	seq->lastTicks = 0;
	seq->deltaFlag = 1;

	for(i = 0; i < 16; i++)
	{
		seq->lastStatus[i] = 0;
		seq->curBUPtr[i] = 0;
		seq->curBULen[i] = 0;
		tmpOff = seq->base->trackOffset[i];
		if(tmpOff) /* if the track is valid */
		{
			flagTmp = 1 << i;
			seq->validTracks |= flagTmp;
			seq->curLoc[i] = (u8*)((u32)ptr + tmpOff);
			seq->evtDeltaTicks[i] = __readVarLen(seq,i);
			/*__n_alCSeqGetTrackEvent(seq,i); prime the event buffers  */
		}
		else
			seq->curLoc[i] = 0;
	}

	seq->qnpt = 1.0f/(f32)seq->base->division;
}

void n_alCSeqNextEvent(ALCSeq *seq,N_ALEvent *evt)
{
	u32     i;
	u32     firstTime = 0xFFFFFFFF;
	u32     firstTrack;
	u32     lastTicks = seq->lastDeltaTicks;

#ifdef _DEBUG
	/* sct 1/17/96 - Warn if we are beyond the end of sequence. */
	if (!seq->validTracks)
	__osError(ERR_ALSEQOVERRUN, 0);
#endif


	for(i = 0; i < 16 ; i++)
	{
	if((seq->validTracks >> i) & 1)
		{
		if(seq->deltaFlag)
		seq->evtDeltaTicks[i] -= lastTicks;
		if(seq->evtDeltaTicks[i] < firstTime)
			{
		firstTime = seq->evtDeltaTicks[i];
		firstTrack = i;
			}
		}
	}

	__n_alCSeqGetTrackEvent(seq,firstTrack,evt);

	evt->msg.midi.ticks = firstTime;
	seq->lastTicks += firstTime;
	seq->lastDeltaTicks = firstTime;
	if(evt->type != AL_TRACK_END)
	seq->evtDeltaTicks[firstTrack] += __readVarLen(seq,firstTrack);
	seq->deltaFlag = 1;

}


/* only call n_alCSeqGetTrackEvent with a valid track !! */
static u32 __n_alCSeqGetTrackEvent(ALCSeq *seq, u32 track, N_ALEvent *event)
{
	u32     offset;
	u8      status, loopCt, curLpCt, *tmpPtr;


	status = __getTrackByte(seq,track);     /* read the status byte */

	if (status == AL_MIDI_Meta) /* running status not allowed on meta events!! */
	{
		u8 type = __getTrackByte(seq,track);

		if (type == AL_MIDI_META_TEMPO)
		{
			event->type = AL_TEMPO_EVT;
			event->msg.tempo.status = status;
			event->msg.tempo.type = type;
			event->msg.tempo.byte1 = __getTrackByte(seq,track);
			event->msg.tempo.byte2 = __getTrackByte(seq,track);
			event->msg.tempo.byte3 = __getTrackByte(seq,track);
			seq->lastStatus[track] = 0;  /* lastStatus not supported after meta */
		}
		else if (type == AL_MIDI_META_EOT)
		{
			u32     flagMask;

			flagMask = 0x01 << track;
			seq->validTracks = seq->validTracks ^ flagMask;

			if(seq->validTracks) /* there is music left don't end */
				event->type = AL_TRACK_END;
			else         /* no more music send AL_SEQ_END_EVT msg */
				event->type = AL_SEQ_END_EVT;
		}
		else if (type == AL_CMIDI_LOOPSTART_CODE)
		{
			status = __getTrackByte(seq,track); /* get next two bytes, ignore them */
			status = __getTrackByte(seq,track);
			seq->lastStatus[track] = 0;
			event->type = AL_CSP_LOOPSTART;
		}
		else if (type == AL_CMIDI_LOOPEND_CODE)
		{
			tmpPtr = seq->curLoc[track];
			loopCt = *tmpPtr++;
			curLpCt = *tmpPtr;
			if(curLpCt == 0) /* done looping */
			{
				*tmpPtr = loopCt; /* reset current loop count */
				seq->curLoc[track] = tmpPtr + 5; /* move pointer to end of event */
			}
			else
			{
				if(curLpCt != 0xFF) /* not a loop forever */
					*tmpPtr = curLpCt - 1;   /* decrement current loop count */
				tmpPtr++;                    /* get offset from end of event */
				offset = (*tmpPtr++) << 24;
				offset += (*tmpPtr++) << 16;
				offset += (*tmpPtr++) << 8;
				offset += *tmpPtr++;
				seq->curLoc[track] = tmpPtr - offset;
			}
			seq->lastStatus[track] = 0;
			event->type = AL_CSP_LOOPEND;
		}

#ifdef _DEBUG
		else
			__osError(ERR_ALSEQMETA, 1, type);
#endif

	}
	else
	{
		event->type = AL_SEQ_MIDI_EVT;
		if (status & 0x80)  /* if high bit is set, then new status */
		{
			event->msg.midi.status = status;
			event->msg.midi.byte1 = __getTrackByte(seq,track);
			seq->lastStatus[track] = status;
		}
		else     /* running status */
		{
#ifdef _DEBUG
			if(seq->lastStatus[track] == 0)
				__osError(ERR_ALCSEQZEROSTATUS, 1, track);
#endif
			event->msg.midi.status = seq->lastStatus[track];
			event->msg.midi.byte1 = status;
		}

		if (((event->msg.midi.status & 0xf0) != AL_MIDI_ProgramChange) &&
			((event->msg.midi.status & 0xf0) != AL_MIDI_ChannelPressure))
		{
			event->msg.midi.byte2 = __getTrackByte(seq,track);
			if((event->msg.midi.status & 0xf0) == AL_MIDI_NoteOn)
			{
				event->msg.midi.duration = __readVarLen(seq,track);
#ifdef _DEBUG
				if(event->msg.midi.byte2 == 0)
					__osError( ERR_ALCSEQZEROVEL, 1, track);
#endif
			}
		}
		else
			event->msg.midi.byte2 = 0;
	}
	return TRUE;
}


void n_alCSeqNewMarker(ALCSeq *seq, ALCSeqMarker *m, u32 ticks)
{
	N_ALEvent     evt;
	ALCSeq      tempSeq;
	s32         i;


	n_alCSeqNew(&tempSeq, (u8*)seq->base);

	do {
		m->validTracks    = tempSeq.validTracks;
		m->lastTicks      = tempSeq.lastTicks;
		m->lastDeltaTicks = tempSeq.lastDeltaTicks;

		for(i=0;i<16;i++)
		{
			m->curLoc[i]        = tempSeq.curLoc[i];
			m->curBUPtr[i]      = tempSeq.curBUPtr[i];
			m->curBULen[i]      = tempSeq.curBULen[i];
			m->lastStatus[i]    = tempSeq.lastStatus[i];
			m->evtDeltaTicks[i] = tempSeq.evtDeltaTicks[i];
		}

		n_alCSeqNextEvent(&tempSeq, &evt);

		if (evt.type == AL_SEQ_END_EVT)
			break;

	} while (tempSeq.lastTicks < ticks);

}


/* non-aligned byte reading routines */
static u8 __getTrackByte(ALCSeq *seq,u32 track)
{
	u8      theByte;


	if(seq->curBULen[track])
	{
		theByte = *seq->curBUPtr[track];
		seq->curBUPtr[track]++;
		seq->curBULen[track]--;
	}
	else  /* need to handle backup mode */
	{
		theByte = *seq->curLoc[track];
		seq->curLoc[track]++;
		if(theByte == AL_CMIDI_BLOCK_CODE)
		{
			u8   loBackUp,hiBackUp,theLen,nextByte;
			u32  backup;

			nextByte = *seq->curLoc[track];
			seq->curLoc[track]++;
			if(nextByte != AL_CMIDI_BLOCK_CODE)
			{
				/* if here, then got a backup section. get the amount of
				   backup, and the len of the section. Subtract the amount of
				   backup from the curLoc ptr, and subtract four more, since
				   curLoc has been advanced by four while reading the codes. */
				hiBackUp = nextByte;
				loBackUp = *seq->curLoc[track];
				seq->curLoc[track]++;
				theLen = *seq->curLoc[track];
				seq->curLoc[track]++;
				backup = (u32)hiBackUp;
				backup = backup << 8;
				backup += loBackUp;
				seq->curBUPtr[track] = seq->curLoc[track] - (backup + 4);
				seq->curBULen[track] = (u32)theLen;

				/* now get the byte */
				theByte = *seq->curBUPtr[track];
				seq->curBUPtr[track]++;
				seq->curBULen[track]--;
			}
		}
	}

	return theByte;
}

static u32 __readVarLen(ALCSeq *seq,u32 track)
{
	u32 value;
	u32 c;

	value = (u32)__getTrackByte(seq,track);
	if ( value & 0x00000080 )
	{
		value &= 0x7f;
		do
		{
			c = (u32)__getTrackByte(seq,track);
			value = (value << 7) + (c & 0x7f);
		} while (c & 0x80);
	}
	return (value);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__getTrackByte.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__readVarLen.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alCSeqNextEvent.s")
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alCSeqNew.s")

void n_alCSeqNewMarker(ALCSeq *seq, ALCSeqMarker *m, u32 ticks)
{
	N_ALEvent     evt;
	ALCSeq      tempSeq;
	s32         i;


	n_alCSeqNew(&tempSeq, (u8*)seq->base);

	do {
		m->validTracks    = tempSeq.validTracks;
		m->lastTicks      = tempSeq.lastTicks;
		m->lastDeltaTicks = tempSeq.lastDeltaTicks;

		for(i=0;i<16;i++)
		{
			m->curLoc[i]        = tempSeq.curLoc[i];
			m->curBUPtr[i]      = tempSeq.curBUPtr[i];
			m->curBULen[i]      = tempSeq.curBULen[i];
			m->lastStatus[i]    = tempSeq.lastStatus[i];
			m->evtDeltaTicks[i] = tempSeq.evtDeltaTicks[i];
		}

		n_alCSeqNextEvent(&tempSeq, &evt);

		if (evt.type == AL_SEQ_END_EVT)
			break;

	} while (tempSeq.lastTicks < ticks);

}
#endif

// NEEDS -O3 to match - https://decomp.me/scratch/9Ao34
// 0x296F8
#ifdef NON_MATCHING
/*
  Note: If there are no valid tracks (ie. all tracks have
  reached the end of their data stream), then return FALSE
  to indicate that there is no next event.
*/
char __alCSeqNextDelta(ALCSeq *seq, s32 *pDeltaTicks)
{
	u32     i;
	u32	    firstTime = 0xFFFFFFFF;
	u32     lastTicks = seq->lastDeltaTicks;

	if (!seq->validTracks)
	return FALSE;

	for(i = 0; i < 16 ; i++)
	{
	if((seq->validTracks >> i) & 1)
		{
		if(seq->deltaFlag)
		seq->evtDeltaTicks[i] -= lastTicks;

		if(seq->evtDeltaTicks[i] < firstTime)
		firstTime = seq->evtDeltaTicks[i];
		}
	}

	seq->deltaFlag = 0;
	*pDeltaTicks = firstTime;

	return TRUE;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__alCSeqNextDelta.s")
#endif

//split 0x29860

/* might want to make these macros */
void alLink(ALLink *ln, ALLink *to)
{					
	ln->next = to->next;
	ln->prev = to;
	if (to->next)
		to->next->prev = ln;
	to->next = ln;
}
// They DID make this a macro and it's used in n_alSynNew
#define alLinkMacro(ln, to)       \
{                                 \
	ALLink *_ln = (ALLink *)(ln); \
	ALLink *_to = (ALLink *)(to); \
	_ln->next = _to->next;        \
	_ln->prev = _to;              \
								  \
	if (_to->next) {              \
		_to->next->prev = _ln;    \
	}                             \
								  \
	_to->next = _ln;              \
}

void alUnlink(ALLink *ln)			
{					
	if (ln->next)
		ln->next->prev = ln->prev;
	if (ln->prev)
		ln->prev->next = ln->next;
}

//0x298B4
/*
  This routine flushes events according their type.
*/
void alEvtqFlushType(ALEventQueue *evtq, s16 type)
{
	ALLink      	*thisNode;
	ALLink      	*nextNode;
	ALEventListItem     *thisItem, *nextItem;
	OSIntMask   	mask;

	mask = osSetIntMask(OS_IM_NONE);

	thisNode = evtq->allocList.next;
	while( thisNode != 0 )
	{
	nextNode = thisNode->next;
	thisItem = (ALEventListItem *)thisNode;
	nextItem = (ALEventListItem *)nextNode;
	if (thisItem->evt.type == type)
	{
		if (nextItem)
		nextItem->delta += thisItem->delta;
		alUnlink(thisNode);
		alLinkMacro(thisNode, &evtq->freeList);
	}
	thisNode = nextNode;
	}

	osSetIntMask(mask);
}

//split 0x29970

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/alEvtqPostEvent.s")

// 0x29AC0
#ifdef NON_MATCHING
// Stack issues
ALMicroTime alEvtqNextEvent(ALEventQueue *evtq, ALEvent *evt)
{
	ALEventListItem *item;
	ALMicroTime delta;
	OSIntMask mask;

	mask = osSetIntMask(OS_IM_NONE);

	item = (ALEventListItem *)evtq->allocList.next;

	if (item)
	{
		alUnlink((ALLink *)item);
		alCopy(&item->evt, evt, sizeof(*evt));
		alLinkMacro((ALLink *)item, &evtq->freeList);
	delta = item->delta;
	}
	else
	{
		/* sct 11/28/95 - If we get here, most like we overflowed the event queue */
	/* with non-self-perpetuating events.  Eg. if we filled the evtq with volume */
	/* events, then when the seqp is told to play it will handle all the events */
	/* at once completely emptying out the queue.  At this point this problem */
	/* must be treated as an out of resource error and the evtq should be increased. */
	evt->type = -1;
	delta = 0;	
	}

	osSetIntMask(mask);

	return delta;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/alEvtqNextEvent.s")
#endif

//0x29B70
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/alEvtqNew.s")

//0x29C9C
void func_8002909C_29C9C(u16 arg0) {
	D_8003D31C_3DF1C = arg0;
}

//0x29CAC
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_800290AC_29CAC.s")

//0x29D00 80029100
/*
 __CSPPostNextSeqEvent:
 Calculates the delta time in ticks until the next sequence
 event and posts a sequence reference event with the time in usecs.
 Loops are handled automatically by the compact sequence.

 Does nothing if the sequence player is not playing or if there
 is no target sequence.

 sct 11/7/95
*/
void func_80029100_29D00(ALCSPlayer *seqp)
{
	ALEvent     evt;
	s32     deltaTicks;

	if (seqp->state != AL_PLAYING || seqp->target == NULL)
		return;

	/* Get the next event time in ticks. */
	/* If false is returned, then there is no next delta (ie. end of sequence reached). */
	if (!__alCSeqNextDelta(seqp->target, &deltaTicks))
	return;

	evt.type = AL_SEQ_REF_EVT;
	alEvtqPostEvent(&seqp->evtq, &evt, deltaTicks * seqp->uspt);
}

void __setUsptFromTempo (ALCSPlayer *seqp, f32 tempo);
#if 0
// Needs -O3
/*
  This routine safely calculates the sequence player's
  uspt value based on the given tempo.  It does this safely
  by making sure that the player has a target sequence and
  therefore a qnpt value which is needed for the calculation.
  Compact sequence player needs its own version of this routine
  since the ALCSeq's qnpt field is at a different offset.
*/
static void __setUsptFromTempo (ALCSPlayer *seqp, f32 tempo)
{
	if (seqp->target)
	seqp->uspt = (s32)((f32)tempo * seqp->target->qnpt);
	else
	seqp->uspt = 488;		/* This is the initial value set by alSeqpNew. */
}

// static?
void func_800291A4_29DA4() {
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__setUsptFromTempo.s")
#endif

static void __CSPHandleMetaMsg(ALCSPlayer *seqp, ALEvent *event);
// 0x29DAC
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__CSPHandleMetaMsg.s")

// Uses sRandomSeed2
// 0x29FA8
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_800293A8_29FA8.s")

#if 0
// Close to matching, but not quite
//static
s16 __n_getRate(f32 vol, f32 tgt, s32 count, u16* ratel)
{
	s16 s;
	s16 tmp;
	f32 invn;
	f32 a;
	f32 f;

	if (count == 0) {
		if (tgt >= vol) {
			*ratel = 0xffff;
			return 0x7fff;
		} else {
			*ratel = -0;
			return 0;
		}
	}

	invn = 1.0f / count;

	if (tgt < 1.0f) {
		tgt = 1.0f;
	}

	if (vol <= 0.0f) {
		vol = 1.0f;
	}

	a = (tgt - vol) * invn * 8.0f;
	s = a;

	f = a - s;
	//s--;
	f += 1.0f;

	tmp = f;
	s += tmp;
	f -= tmp;

	*ratel = 65535.0f * f;

	return s;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__n_getRate.s")
#endif

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/_decodeChunk.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alAdpcmPull.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alResamplePull.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/_pullSubFrame.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/_n_freeParam.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alLoadParam.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alEnvmixerParam.s")

// 0x8002A2D0 - 0x4260 split?
void _n_freePVoice(N_PVoice *pvoice)
{
	/*
	 * move the voice from the allocated list to the lame list
	 */
	alUnlink((ALLink *)pvoice);
	alLinkMacro((ALLink *)pvoice, &n_syn->pLameList);
}

static  s16 __n_getVol(s16 ivol, s32 samples, s16 ratem, u16 ratel);
#ifdef NON_MATCHING
static
s16 __n_getVol(s16 ivol, s32 samples, s16 ratem, u16 ratel)
{
	s32 r;
	s32 m;
	s32 l;

	samples >>= 3;
	if (samples == 0) {
		return (s16) ivol;
	}
	m = ((ratel * samples));
	m >>= 0x10;
	m += (ratem * samples);
	ivol += m;
	return (s16) ivol;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__n_getVol.s")
#endif

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alEnvmixerPull.s")

Acmd *n_alAuxBusPull(s32 sampleOffset, Acmd *p)
{
  Acmd        *ptr = p;
  N_ALAuxBus   *m = (N_ALAuxBus *)n_syn->auxBus;
  N_PVoice    **sources = m->sources;
  s32         i;

#ifndef N_MICRO
  aClearBuffer(ptr++, AL_AUX_L_OUT, FIXED_SAMPLE<<1);
  aClearBuffer(ptr++, AL_AUX_R_OUT, FIXED_SAMPLE<<1);
#else
  aClearBuffer(ptr++, N_AL_AUX_L_OUT, N_AL_DIVIDED<<1);
#endif

  for (i = 0; i < m->sourceCount; i++)
	ptr = n_alEnvmixerPull(sources[i],sampleOffset,ptr);
  return ptr;
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002AA68_2B668.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/_n_filterBuffer.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002AC48_2B848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002AD90_2B990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002AE1C_2BA1C.s")

// 0x2BC28
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alFxPull.s")

// 0x2BF08
static void __n_CSPHandleMIDIMsg(N_ALCSPlayer *seqp, ALEvent *event);
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__n_CSPHandleMIDIMsg.s")

// 0x2C92C
ALMicroTime __n_CSPVoiceHandler(void *node);
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__n_CSPVoiceHandler.s")

//n_alCSPNew?
// Split? 0x2CFD0 Splittable on Rodata here as well. 3FA50
void func_8002C3D0_2CFD(N_ALCSPlayer *seqp, ALSeqpConfig *c);
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002C3D0_2CFD0.s")

// Needs -O3
#if 0
static s32 _n_timeToSamplesNoRound(s32 micros);
/*
  Add 0.5 to adjust the average affect of
  the truncation error produced by casting
  a float to an int.
*/
s32 _n_timeToSamplesNoRound(s32 micros)
{
	f32 tmp = ((f32)micros) * n_syn->outputRate / 1000000.0f + 0.5f;

	return (s32)tmp;
}

s32 _n_timeToSamples(s32 micros) {
	return _n_timeToSamplesNoRound(micros) & ~0xF;
}
#else
// 0x2D144
void _n_timeToSamplesNoRound(void) {
}
// 0x2D14C
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/_n_timeToSamples.s")
#endif

void _n_collectPVoices()
{
	ALLink       *dl;
	N_PVoice      *pv;

	while ((dl = n_syn->pLameList.next) != 0) {
		pv = (N_PVoice *)dl;

		/* ### remove from mixer */

		alUnlink(dl);
		alLinkMacro(dl, &n_syn->pFreeList);
	}
}

// 0x2D218
/***********************************************************************
 * Synthesis driver private interfaces
 ***********************************************************************/

ALParam *__n_allocParam(void)
{
	ALParam *update = 0;

	if (n_syn->paramList) {
		update = n_syn->paramList;
		n_syn->paramList = n_syn->paramList->next;
		update->next = 0;
	}
	return update;
}

//0x2D248
Acmd *n_alMainBusPull( s32 sampleOffset, Acmd *p)
{
  Acmd        *ptr = p;

#ifndef N_MICRO
  aClearBuffer(ptr++, AL_MAIN_L_OUT, FIXED_SAMPLE<<1);
  aClearBuffer(ptr++, AL_MAIN_R_OUT, FIXED_SAMPLE<<1);
#else
  aClearBuffer(ptr++, N_AL_MAIN_L_OUT, N_AL_DIVIDED<<1);
#endif

  ptr = (n_syn->mainBus->filter.handler)(sampleOffset,ptr);

#ifndef N_MICRO
  aSetBuffer(ptr++, 0, 0, 0, FIXED_SAMPLE<<1);
  aMix(ptr++, 0, 0x7fff, AL_AUX_L_OUT, AL_MAIN_L_OUT);
  aMix(ptr++, 0, 0x7fff, AL_AUX_R_OUT, AL_MAIN_R_OUT);
#else
  aMix(ptr++, 0, 0x7fff, N_AL_AUX_L_OUT, N_AL_MAIN_L_OUT);
  aMix(ptr++, 0, 0x7fff, N_AL_AUX_R_OUT, N_AL_MAIN_R_OUT);
#endif

  return ptr;
}

// 0x2D2BC
Acmd *n_alSavePull( s32 sampleOffset, Acmd *p)
{
	Acmd        *ptr = p;

	ptr = n_alMainBusPull(sampleOffset, ptr);

#ifndef N_MICRO
	aSetBuffer (ptr++, 0, 0, 0, FIXED_SAMPLE<<1);
	aInterleave(ptr++, AL_MAIN_L_OUT, AL_MAIN_R_OUT);
	aSetBuffer (ptr++, 0, 0, 0, FIXED_SAMPLE<<2);
	aSaveBuffer(ptr++, n_syn->sv_dramout);
#else
	// Oneliner
	n_aInterleave(ptr++); \
	n_aSaveBuffer(ptr++, FIXED_SAMPLE<<2, 0, n_syn->sv_dramout);
#endif
	return ptr;
}

// split 0x2D300?

// Static func?
void func_8002C700_2D300() {
}

// Modified n_alAudioFrame?
// Maybe has static inline func_8025C370 from BK?
#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002C708_2D308.s")

// 0x8002CA20
void alN_PVoiceNew(N_PVoice *mv, ALDMANew dmaNew, ALHeap *hp)
{
  mv->dc_state = alHeapAlloc(hp, 1, sizeof(ADPCM_STATE));
  mv->dc_lstate = alHeapAlloc(hp, 1, sizeof(ADPCM_STATE));
  mv->dc_dma = dmaNew(&mv->dc_dmaState);
  mv->dc_lastsam = 0;
  mv->dc_first = 1;
  mv->dc_memin = 0;

  mv->rs_state = alHeapAlloc(hp, 1, sizeof(RESAMPLE_STATE));
  mv->rs_delta  = 0.0;
  mv->rs_first  = 1;
  mv->rs_ratio = 1.0;
  mv->rs_upitch = 0;

  mv->em_state = alHeapAlloc(hp, 1, sizeof(ENVMIX_STATE));
  mv->em_first = 1;
  mv->em_motion = AL_STOPPED;
  mv->em_volume = 1;
  mv->em_ltgt = 1;
  mv->em_rtgt = 1;
  mv->em_cvolL = 1;
  mv->em_cvolR = 1;
  mv->em_dryamt = 0;
  mv->em_wetamt = 0;
  mv->em_lratm = 1;
  mv->em_lratl = 0;
  mv->em_lratm = 1;
  mv->em_lratl = 0;
  mv->em_delta = 0;
  mv->em_segEnd = 0;
  mv->em_pan = 0;
  mv->em_ctrlList = 0;
  mv->em_ctrlTail = 0;
}

// 0x8002CB48
/***********************************************************************
 * Synthesis driver public interfaces
 ***********************************************************************/
void n_alSynNew(ALSynConfig *c)
{
	s32         i;
	N_ALVoice  *vv;
	N_PVoice   *pv;
	N_ALVoice  *vvoices;
	N_PVoice   *pvoices;
	ALHeap      *hp = c->heap;
	ALSave      *save;
	ALFilter    *sources;
	N_PVoice   *m_sources;
	ALParam     *params;
	ALParam     *paramPtr;

	n_syn->head            = NULL;
	n_syn->n_seqp1         = NULL;
	n_syn->n_seqp2         = NULL;
	n_syn->n_sndp          = NULL;
	n_syn->numPVoices      = c->maxPVoices;
	n_syn->curSamples      = 0;
	n_syn->paramSamples    = 0;
	n_syn->outputRate      = c->outputRate;
#ifndef N_MICRO
	n_syn->maxOutSamples   = AL_MAX_RSP_SAMPLES;
#else
	n_syn->maxOutSamples   = FIXED_SAMPLE;
#endif
	n_syn->dma             = (ALDMANew) c->dmaproc;

/******* save new *******************************/
	n_syn->sv_dramout = 0;
	n_syn->sv_first = 1;

/******* aux new *******************************/
	n_syn->auxBus = (N_ALAuxBus *)alHeapAlloc(hp, 1, sizeof(N_ALAuxBus));

	n_syn->auxBus->sourceCount = 0;
	n_syn->auxBus->maxSources = c->maxPVoices;
	n_syn->auxBus->sources = (N_PVoice **)
	  alHeapAlloc(hp, c->maxPVoices, sizeof(N_PVoice *));

/******* main new *******************************/
	n_syn->mainBus = (N_ALMainBus *)alHeapAlloc(hp, 1, sizeof(N_ALMainBus));

/******* fx new *******************************/

	if (c->fxType != AL_FX_NONE){
	  n_syn->auxBus->fx = n_alSynAllocFX(0, c, hp);
	  n_syn->mainBus->filter.handler = (N_ALCmdHandler)n_alFxPull;
	} else {
	  n_syn->mainBus->filter.handler = (N_ALCmdHandler)n_alAuxBusPull;
	}

	n_syn->pFreeList.next = 0;
	n_syn->pFreeList.prev = 0;
	n_syn->pLameList.next = 0;
	n_syn->pLameList.prev = 0;
	n_syn->pAllocList.next = 0;
	n_syn->pAllocList.prev = 0;

	pvoices = alHeapAlloc(hp, c->maxPVoices, sizeof(N_PVoice));
	for (i = 0; i < c->maxPVoices; i++) {
	  pv = &pvoices[i];
	  alLinkMacro((ALLink *)pv, &n_syn->pFreeList);
	  pv->vvoice = 0;
	  alN_PVoiceNew(pv, n_syn->dma, hp);
	  n_syn->auxBus->sources[n_syn->auxBus->sourceCount++] = pv;
	}

	params = alHeapAlloc(hp, c->maxUpdates, sizeof(ALParam));
	n_syn->paramList = 0;
	for (i = 0; i < c->maxUpdates; i++) {
		paramPtr= &params[i];
		paramPtr->next = n_syn->paramList;
		n_syn->paramList = paramPtr;
	}
	n_syn->heap = hp;
}

// 0x0x8002CE48
void n_alClose(N_ALGlobals *g)
{
	if (n_alGlobals) {
		n_alSynDelete();
		n_alGlobals = NULL;
		n_syn = NULL;
	}
}

// 0x8002CE88
void n_alInit(N_ALGlobals *g, ALSynConfig *c)
{
	if (!n_alGlobals) {
		n_alGlobals = g;

		if (!n_syn) {
			n_syn = &n_alGlobals->drvr;
			n_alSynNew(c);
		}
	}
}

/*
 * WARNING: THE FOLLOWING CONSTANT MUST BE KEPT IN SYNC
 * WITH SCALING IN MICROCODE!!!
 */
#define	SCALE 16384.0f


void _init_lpfilter(ALLowPass *lp)
{
	s32		i, temp;
	s16		fc;
	f64		ffc, fcoef;

	temp = lp->fc * SCALE;
	fc = temp >> 15;
	lp->fgain = SCALE - fc;

	lp->first = 1;
	for (i=0; i<8; i++)
	lp->fcvec.fccoef[i] = 0;

	lp->fcvec.fccoef[i++] = fc;
	fcoef = ffc = (f64)fc/SCALE;

	for (; i<16; i++){
	fcoef *= ffc;
	lp->fcvec.fccoef[i] = (s16)(fcoef * SCALE);
	}
}

#define RANGE 2
/*
 * This routine gets called by alSynSetFXParam. No checking takes place to
 * verify the validity of the paramID or the param value. input and output
 * values must be 8 byte aligned, so round down any param passed.
 */
s32 n_alFxParamHdl(void *filter, s32 paramID, void *param)
{
	ALFx   *f = (ALFx *) filter;
	s32    p = (paramID - 2) % 8;
	s32    s = (paramID - 2) / 8;
	s32    val = *(s32*)param;

#define INPUT_PARAM         0
#define OUTPUT_PARAM        1
#define FBCOEF_PARAM        2
#define FFCOEF_PARAM        3
#define GAIN_PARAM          4
#define CHORUSRATE_PARAM    5
#define CHORUSDEPTH_PARAM   6
#define LPFILT_PARAM        7

	switch(p)
	{
		case INPUT_PARAM:
			f->delay[s].input = (u32)val & 0xFFFFFFF8;
			break;
		case OUTPUT_PARAM:
			f->delay[s].output = (u32)val & 0xFFFFFFF8;
			break;
		case FFCOEF_PARAM:
			f->delay[s].ffcoef = (s16)val;
			break;
		case FBCOEF_PARAM:
			f->delay[s].fbcoef = (s16)val;
			break;
		case GAIN_PARAM:
			f->delay[s].gain = (s16)val;
			break;
		case CHORUSRATE_PARAM:
			/* f->delay[s].rsinc = ((f32)val)/0xffffff; */
			f->delay[s].rsinc = ((((f32)val)/1000) * RANGE)/n_syn->outputRate;
			break;

/*
 * the following constant is derived from:
 *
 *      ratio = 2^(cents/1200)
 *
 * and therefore for hundredths of a cent
 *                     x
 *      ln(ratio) = ---------------
 *              (120,000)/ln(2)
 * where
 *      120,000/ln(2) = 173123.40...
 */
#define CONVERT 173123.404906676f
#define LENGTH  (f->delay[s].output - f->delay[s].input)

		case CHORUSDEPTH_PARAM:
			/*f->delay[s].rsgain = (((f32)val) / CONVERT) * LENGTH; */
			f->delay[s].rsgain = (((f32)val) / CONVERT) * LENGTH;
			break;
		case LPFILT_PARAM:
			if(f->delay[s].lp)
			{
				f->delay[s].lp->fc = (s16)val;
				_init_lpfilter(f->delay[s].lp);
			}
			break;
	}
	return 0;
}

#undef RANGE
#undef CONVERT
#undef LENGTH

// 0x8002D1F4
s32 func_8002D1F4_2DDF4(N_PVoice* filter, s32 paramID, void* param) {
	n_alLoadParam(filter, paramID, param);
	return 0;
}

extern s32 SMALLROOM_PARAMS_N[26];
extern s32 BIGROOM_PARAMS_N[34];
extern s32 ECHO_PARAMS_N[10];
extern s32 CHORUS_PARAMS_N[10];
extern s32 FLANGE_PARAMS_N[10];
extern s32 NULL_PARAMS_N[10];

// 0x8002D218
void n_alFxNew(ALFx **fx_ar, ALSynConfig *c, ALHeap *hp)
{
	u16		i, j, k;
	s32		*param = 0;
	ALDelay	*d;
	ALFx *r;

	*fx_ar = r = (ALFx *)alHeapAlloc(hp, 1, sizeof(ALFx));

	switch (c->fxType) {
	  case AL_FX_SMALLROOM:	param = SMALLROOM_PARAMS_N;	break;
	  case AL_FX_BIGROOM:	param = BIGROOM_PARAMS_N;	break;
	  case AL_FX_ECHO:		param = ECHO_PARAMS_N;		break;
	  case AL_FX_CHORUS:	param = CHORUS_PARAMS_N;	break;
	  case AL_FX_FLANGE:	param = FLANGE_PARAMS_N;	break;
	  case AL_FX_CUSTOM:	param = c->params;		break;
	  default:			    param = NULL_PARAMS_N;		break;
	}


	j = 0;

	r->section_count = param[j++];
	r->length 	     = param[j++];

	r->delay = alHeapAlloc(hp, r->section_count, sizeof(ALDelay));
	r->base = alHeapAlloc(hp, r->length, sizeof(s16));
	r->input = r->base;

	for ( k=0; k < r->length; k++)
	r->base[k] = 0;

	for ( i=0; i<r->section_count; i++ ){
	d = &r->delay[i];
	d->input  = param[j++];
	d->output = param[j++];
	d->fbcoef = param[j++];
	d->ffcoef = param[j++];
	d->gain   = param[j++];

	if (param[j]) {
#define RANGE 2.0f
/*	    d->rsinc     = ((f32) param[j++])/0xffffff; */
		d->rsinc = ((((f32)param[j++])/1000) * RANGE)/c->outputRate;

		/*
		 * the following constant is derived from:
		 *
		 *		ratio = 2^(cents/1200)
		 *
		 * and therefore for hundredths of a cent
		 *			           x
		 *		ln(ratio) = ---------------
		 *			    (120,000)/ln(2)
		 * where
		 *		120,000/ln(2) = 173123.40...
		 */
#define CONVERT 173123.404906676f
#define LENGTH	(d->output - d->input)
		d->rsgain 	 = (((f32) param[j++])/CONVERT) * LENGTH;
		d->rsval	 = 1.0;
		d->rsdelta	 = 0.0;
		d->rs 	 = alHeapAlloc(hp, 1, sizeof(ALResampler));
		d->rs->state = alHeapAlloc(hp, 1, sizeof(RESAMPLE_STATE));
		d->rs->delta = 0.0;
		d->rs->first = 1;
	} else {
		d->rs = 0;
		j++;
		j++;
	}

	if (param[j]) {
		d->lp = alHeapAlloc(hp, 1, sizeof(ALLowPass));
		d->lp->fstate = alHeapAlloc(hp, 1, sizeof(POLEF_STATE));
		d->lp->fc = param[j++];
		_init_lpfilter(d->lp);
	} else {
		d->lp = 0;
		j++;
	}
	}
}
