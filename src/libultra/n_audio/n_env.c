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

