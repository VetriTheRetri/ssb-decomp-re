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

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/alLink.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/alUnlink.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002A320_2AF20.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002B028_2BC28.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002CB48_2D748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alClose.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/n_alInit.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002CED4_2DAD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002CFA0_2DBA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/__leoSetReset.s")

#pragma GLOBAL_ASM("asm/nonmatchings/libultra/n_audio/n_env/func_8002D218_2DE18.s")
