#include "common.h"
#include "n_synthInternals.h"

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
    u16 unk_0x1C;
    u16 unk_0x1E;
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


extern alSoundEffect D_8009EDD0_406D0;
extern Unk8009EE0C* D_8009EE0C_4070C;
//extern D_8009EE10_40710;
extern u16 D_8009EE1E_4071E;
extern u16 D_8009EE20_40720;
extern u8 unref8009EE22[0x8];
extern u8 D_8009EE2A_4072A;

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

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_800269C0_275C0.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80027390_27F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_800273F4_27FF4.s")

void func_80027458_28058(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80027460_28060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80028468_29068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002852C_2912C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002858C_2918C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80028884_29484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/alCSeqNewMarker.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__alCSeqNextDelta.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80028CB4_298B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/alEvtqPostEvent.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80028EC0_29AC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80028F70_29B70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002909C_29C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_800290AC_29CAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80029100_29D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_80029170_29D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_800291AC_29DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_800293A8_29FA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/_getRate.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/_decodeChunk.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alAdpcmPull.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alResamplePull.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/_pullSubFrame.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/_n_freeParam.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alLoadParam.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alEnvmixerParam.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002A2D0_2AED0.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alFxPull.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002B308_2BF08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002BD2C_2C92C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002C3D0_2CFD0.s")

void func_8002C544_2D144(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002C54C_2D14C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002C598_2D198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__n_allocParam.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alMainBusPull.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alSavePull.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002C708_2D308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/alN_PVoiceNew.s")

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

void n_alClose(N_ALGlobals *g)
{
	if (n_alGlobals) {
		n_alSynDelete();
		n_alGlobals = NULL;
		n_syn = NULL;
	}
}

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
