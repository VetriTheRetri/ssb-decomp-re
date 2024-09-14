#include "common.h"
#include <ef/effect.h>

#define LBPARTICLE_BANKS_NUM_MAX 8

// Equivalent file in pokemon snap: 4D880.c

#define TAU 2.0f * M_PI

typedef struct UnkGreenLeopard
{
	/* 0x00 */ s32 unk_00[7];
	/* 0x1C */ Vec3f unk_1C;
} UnkGreenLeopard;

typedef struct UnkAsphaltLeopard
{
	/* 0x00 */ u16 unk_00;
	/* 0x02 */ u16 unk_02;
	/* 0x04 */ u16 unk_04;
	/* 0x06 */ u16 unk_06;
	/* 0x08 */ s32 unk_08;
	/* 0x0C */ f32 unk_0C;
	/* 0x10 */ f32 unk_10;
	/* 0x14 */ Vec3f unk_14;
	/* 0x20 */ f32 unk_20;
	/* 0x24 */ f32 unk_24;
	/* 0x28 */ f32 unk_28;
	/* 0x2C */ f32 unk_2C;
	/* 0x30 */ u8 unk_30[1]; // variable length
} UnkAsphaltLeopard;

// Texture bank header?
typedef struct UnkPinkLeopard {
	/* 0x00 */ u32 unk_00;
	/* 0x04 */ s32 unk_04;
	/* 0x08 */ s32 unk_08;
	/* 0x0C */ s32 unk_0C;
	/* 0x10 */ s32 unk_10;
	/* 0x14 */ s32 unk_14;
	/* 0x18 */ u32 unk_18[1]; // variable length
} UnkPinkLeopard;

typedef struct {
	/* 0x0 */ u8 r;
	/* 0x1 */ u8 g;
	/* 0x2 */ u8 b;
	/* 0x3 */ u8 a;
} ucolor;

typedef struct Unk_800A7114 {
	/* 0x00 */ char unk_00[4];
	/* 0x04 */ u16 unk_04;
	/* 0x06 */ u16 unk_06;
	/* 0x08 */ u8 unk_08;
	/* 0x09 */ u8 unk_09;
} Unk_800A7114; // size >= 0xC

typedef union UnkPinkRatSub {
	Vec3f data1;
	struct {
		f32 unk_00;
		u16 unk_04;
	} data2;
} UnkPinkRatSub; // size = 0xC

// efGenerator
typedef struct UnkPinkRat {
	/* 0x00 */ struct UnkPinkRat* next;
	/* 0x04 */ u16 unk_04;
	/* 0x06 */ u16 unk_06;
	/* 0x08 */ u8 unk_08;
	/* 0x09 */ u8 unk_09;
	/* 0x0A */ s16 unk_0A;
	/* 0x0C */ u16 unk_0C;
	/* 0x0E */ u16 unk_0E;
	/* 0x10 */ u8* unk_10;
	/* 0x14 */ Vec3f unk_14;
	/* 0x20 */ Vec3f unk_20;
	/* 0x2C */ f32 unk_2C;
	/* 0x30 */ f32 unk_30;
	/* 0x34 */ f32 unk_34;
	/* 0x38 */ f32 unk_38;
	/* 0x3C */ f32 unk_3C;
	/* 0x40 */ f32 unk_40;
	/* 0x44 */ f32 unk_44;
	/* 0x48 */ DObj* dobj;
	/* 0x4C */ UnkPinkRatSub unk_4C;
} UnkPinkRat; // size = 0x58

// efParticle
typedef struct UnkRustRat {
	/* 0x00 */ struct UnkRustRat* next;
	/* 0x04 */ u16 unk_04;
	/* 0x06 */ u16 flags;
	/* 0x08 */ u8 unk_08;
	/* 0x09 */ u8 unk_09;
	/* 0x0A */ u8 unk_0A;
	/* 0x0B */ u8 unk_0B;
	/* 0x0C */ u16 unk_0C;
	/* 0x0E */ u16 unk_0E;
	/* 0x10 */ u16 unk_10;
	/* 0x12 */ u16 unk_12;
	/* 0x14 */ u8* scriptPtr;
	/* 0x18 */ u16 unk_18;
	/* 0x1A */ u16 unk_1A;
	/* 0x1C */ u16 unk_1C;
	/* 0x1E */ u16 unk_1E;
	/* 0x20 */ Vec3f unk_20;
	/* 0x2C */ Vec3f unk_2C;
	/* 0x38 */ f32 unk_38;
	/* 0x3C */ f32 unk_3C;
	/* 0x40 */ f32 unk_40;
	/* 0x44 */ f32 unk_44;
	/* 0x48 */ ucolor unk_48;
	/* 0x4C */ ucolor unk_4C;
	/* 0x50 */ ucolor unk_50;
	/* 0x54 */ ucolor unk_54;
	/* 0x58 */ UnkPinkRat* unk_58;
} UnkRustRat; // size = 0x5C

// extern UnkPinkRat D_800D639C[5];
extern UnkPinkRat* D_800D639C[9];

// 0x800D6350
efParticle *sLBParticleStructsAllocFree;

// 0x800D6358
efParticle *sLBParticleStructsAllocBuf[16];

// 0x800D639C
efGenerator *sLBParticleGeneratorsAllocBuf[9];

// 0x800D63C0
s32 sLBParticleScriptBanksNum[LBPARTICLE_BANKS_NUM_MAX];

// 0x800D63E0
s32 sLBParticleTextureBanksNum[LBPARTICLE_BANKS_NUM_MAX];

// 0x800D6400
efScript **sLBParticleScriptBanks[LBPARTICLE_BANKS_NUM_MAX];

// 0x800D6420
efTexture **sLBParticleTextureBanks[LBPARTICLE_BANKS_NUM_MAX];

// 0x800D6448
u16 sLBParticleStructsUsedNum;

// 0x800D644C
u16 sLBParticleTransformsUsedNum;

// 0x800D644E
u16 D_ovl0_800D644E;

// 0x800D6452
u16 D_ovl0_800D6452;

// 0x800D6454
efTransform *sLBParticleTransformsAllocFree;

// 0x800D5D50
u8 dLBParticleColorDitherModes[/* */] = { G_CD_MAGICSQ, G_CD_MAGICSQ, G_CD_MAGICSQ, G_CD_MAGICSQ };

// 0x800D5D54
u8 dLBParticleAlphaDitherModes[/* */] = { G_AD_PATTERN, G_AD_PATTERN, G_AD_PATTERN, G_AD_PATTERN };

// 0x800D5D58
u16 D_ovl0_800D5D58[/* */] = { 0, 0 };

// 0x800D5D5C
u8 D_ovl0_800D5D5C[/* */] = { 0x7B, 0x00 };

// 0x800CE040
s32 lbParticleAllocTransforms(s32 num, size_t size)
{
    efTransform *tfrm;
    s32 i;

    sLBParticleTransformsAllocFree = NULL;
	
    for (i = 0; i < num; i++)
	{
        tfrm = gsMemoryAlloc(size, 0x4);

        if (tfrm == NULL)
		{
			return i;
		}
        tfrm->next = sLBParticleTransformsAllocFree;
        sLBParticleTransformsAllocFree = tfrm;
    }
    sLBParticleTransformsUsedNum = 0;
    D_ovl0_800D6452 = 0;

    return i;
}

// 0x800CE0D8
efTransform* lbParticleGetNextTransformAlloc(u8 arg0, u16 arg1)
{
    efTransform *tfrm = sLBParticleTransformsAllocFree;

    if (tfrm != NULL)
	{
        sLBParticleTransformsAllocFree = tfrm->next;
        tfrm->users_num = 1;
        tfrm->unk_tfrm_0x29 = D_ovl0_800D5D5C[0];
        tfrm->proc_dead = NULL;

        tfrm->translate.x = tfrm->translate.y = tfrm->translate.z = 0.0F;
        tfrm->rotate.x = tfrm->rotate.y = tfrm->rotate.z = 0.0F;
        tfrm->scale.x = tfrm->scale.y = tfrm->scale.z = 1.0F;

        tfrm->unk_tfrm_0x28 = arg0;
        tfrm->unk_tfrm_0xB8 = arg1;

        sLBParticleTransformsUsedNum++;

        if (D_ovl0_800D6452 < sLBParticleTransformsUsedNum)
		{
			D_ovl0_800D6452 = sLBParticleTransformsUsedNum;
		}
    }
    return tfrm;
}

// 0x800CE188
void lbParticleSetPrevTransformAlloc(efTransform *tfrm)
{
    if (tfrm->proc_dead != NULL)
	{ 
		tfrm->proc_dead(tfrm);
	}
    tfrm->next = sLBParticleTransformsAllocFree;
    sLBParticleTransformsAllocFree = tfrm;

    sLBParticleTransformsUsedNum--;
}

// 0x800CE1DC
efTransform* lbParticleAddTransformForParticle(efParticle *ptcl, u8 arg1)
{
    ptcl->tfrm = lbParticleGetNextTransformAlloc(arg1, ptcl->unk_ptcl_0x4);

    return ptcl->tfrm;
}

// 0x800CE218
efTransform* lbParticleAddTransformForGenerator(efGenerator *gtor, u8 arg1)
{
    gtor->tfrm = lbParticleGetNextTransformAlloc(arg1, gtor->unk_gtor_0x4);

    return gtor->tfrm;
}

// 0x800CE254
void lbParticleSetupBankID(s32 bank_id, efScriptDesc *script_desc, efTextureDesc *texture_desc)
{
	s32 i, j;

	if (bank_id >= LBPARTICLE_BANKS_NUM_MAX)
	{
		return;
	}
	sLBParticleScriptBanksNum[bank_id] = script_desc->scripts_num;
	sLBParticleTextureBanksNum[bank_id] = texture_desc->textures_num;

	sLBParticleScriptBanks[bank_id] = script_desc->scripts;
	sLBParticleTextureBanks[bank_id] = texture_desc->textures;

	for (i = 1; i <= sLBParticleScriptBanksNum[bank_id]; i++)
	{
		/* By default, the scripts array is populated with the offsets of the scripts
		 * in their respective file, so this is essentially making them into valid RAM pointers.
		 */
		script_desc->scripts[i - 1] = gcGetDataFromFile(efScript*, script_desc, script_desc->scripts[i - 1]);
	}
	for (i = 1; i <= sLBParticleTextureBanksNum[bank_id]; i++)
	{
		// Much like scripts, textures from the file are also being "pointerized" here.
		texture_desc->textures[i - 1] = gcGetDataFromFile(efTexture*, texture_desc, texture_desc->textures[i - 1]); 
	}
	for (i = 0; i < sLBParticleTextureBanksNum[bank_id]; i++)
	{
		for (j = 0; j < sLBParticleTextureBanks[bank_id][i]->count; j++)
		{
			sLBParticleTextureBanks[bank_id][i]->data[j] = gcGetDataFromFile(void*, texture_desc, sLBParticleTextureBanks[bank_id][i]->data[j]);
		}
		if (sLBParticleTextureBanks[bank_id][i]->format == G_IM_FMT_CI)
		{
			if (sLBParticleTextureBanks[bank_id][i]->flags & 1)
			{
				// One palette after the images
				j = sLBParticleTextureBanks[bank_id][i]->count;

				sLBParticleTextureBanks[bank_id][i]->data[j] = gcGetDataFromFile(void*, texture_desc, sLBParticleTextureBanks[bank_id][i]->data[j]);
			}
			else for (j = sLBParticleTextureBanks[bank_id][i]->count; j < sLBParticleTextureBanks[bank_id][i]->count * 2; j++)
			{
				sLBParticleTextureBanks[bank_id][i]->data[j] = gcGetDataFromFile(void*, texture_desc, sLBParticleTextureBanks[bank_id][i]->data[j]);
			}
		}
	}
}

// Temporary
extern void lbParticleStructProcRun(GObj*);

// 0x800CE418
GObj* lbParticleAllocStructs(s32 num)
{
    s32 i;
    efParticle *ptcl;

    sLBParticleStructsAllocFree = NULL;

    for (i = 0; i < ARRAY_COUNT(sLBParticleStructsAllocBuf); i++)
	{
		sLBParticleStructsAllocBuf[i] = NULL;
	}
    for (i = num - 1; i >= 0; i--)
	{
        ptcl = gsMemoryAlloc(sizeof(*ptcl), 4);

        if (ptcl == NULL)
		{
			return NULL;
		}
        ptcl->next = sLBParticleStructsAllocFree;
        sLBParticleStructsAllocFree = ptcl;
    }
    sLBParticleStructsUsedNum = 0;
    D_ovl0_800D644E = 0;

    if (gcFindGObjByID(-6) != NULL)
	{
		return NULL;
	}
    return gcMakeGObjSPAfter(-6, lbParticleStructProcRun, 0, GOBJ_LINKORDER_DEFAULT);
}

// 0x800CE4E4
efParticle* lbParticleMakeStruct
(
    efParticle *this_ptcl,
    s32 bank_id,
    u32 flags,
    u16 arg3,
    u8 *bytecode,
    s32 arg5,
    f32 pos_x,
    f32 pos_y,
    f32 pos_z,
    f32 vel_x,
    f32 vel_y,
    f32 vel_z,
    f32 argC,
    f32 argD,
    f32 argE,
    u32 argF,
    efGenerator *gtor
)
{
    efParticle *new_ptcl;
    s32 i;

    new_ptcl = sLBParticleStructsAllocFree;
    
    if (new_ptcl == NULL)
    {
        return NULL;
    }
    sLBParticleStructsUsedNum++;
    
    if (D_ovl0_800D644E < sLBParticleStructsUsedNum) 
    {
        D_ovl0_800D644E = sLBParticleStructsUsedNum;
    }
    if (gtor != NULL)
    {
        new_ptcl->unk_ptcl_0x4 = gtor->unk_gtor_0x4;
    } 
    else new_ptcl->unk_ptcl_0x4 = ++D_ovl0_800D5D58[0];

    if (gtor != NULL)
    {
        new_ptcl->tfrm = gtor->tfrm;
        
        if (new_ptcl->tfrm != NULL)
        {
            new_ptcl->tfrm->users_num++;
        }
    }
    else new_ptcl->tfrm = NULL;
    
    sLBParticleStructsAllocFree = new_ptcl->next;
    
    if (this_ptcl == NULL) 
    {
        new_ptcl->next = sLBParticleStructsAllocBuf[bank_id >> 3];
        sLBParticleStructsAllocBuf[bank_id >> 3] = new_ptcl;
    } 
    else 
    {
        new_ptcl->next = this_ptcl->next;
        this_ptcl->next = new_ptcl;
    }
    new_ptcl->bank_id = bank_id;
    new_ptcl->flags = flags;
    new_ptcl->unk_ptcl_0xA = arg3;

    new_ptcl->pos.x = pos_x;
    new_ptcl->pos.y = pos_y;
    new_ptcl->pos.z = pos_z;

    new_ptcl->vel.x = vel_x;
    new_ptcl->vel.y = vel_y;
    new_ptcl->vel.z = vel_z;
    
    new_ptcl->unk_ptcl_0x40 = argC;
    new_ptcl->unk_ptcl_0x38 = argD;
    new_ptcl->unk_ptcl_0x3C = argE;

    new_ptcl->unk_ptcl_0x1E = arg5 + 1;
    new_ptcl->unk_ptcl_0x18 = new_ptcl->unk_ptcl_0x1A = 0;
    
    new_ptcl->bytecode = bytecode;

    if (argF != FALSE) 
    { 
        new_ptcl->flags |= 0x10;
    }
    new_ptcl->is_have_bytecode = (bytecode != NULL) ? TRUE : FALSE;
    
    new_ptcl->unk_ptcl_0xB = 0;
    
    new_ptcl->color1.r = new_ptcl->color1.g = new_ptcl->color1.b = new_ptcl->color1.a = 0xFF;
    new_ptcl->color2.r = new_ptcl->color2.g = new_ptcl->color2.b = new_ptcl->color2.a = 0x00;
    
    new_ptcl->unk_ptcl_0xE = new_ptcl->unk_ptcl_0x10 = new_ptcl->unk_ptcl_0x12 = 0;
    
    new_ptcl->gtor = gtor;

    return new_ptcl;
}

// 0x800CE6B8
efParticle* lbParticleMakeDefault(efParticle *ptcl, s32 bank_id, s32 script_bank_id)
{
	efScript *efscript;
	s32 id = bank_id & 7;

	if (id >= LBPARTICLE_BANKS_NUM_MAX)
	{
		return NULL;
	}
	if (script_bank_id >= sLBParticleScriptBanksNum[id])
	{
		return NULL;
	}
	efscript = sLBParticleScriptBanks[id][script_bank_id];

	return lbParticleMakeStruct
	(
		ptcl,
		bank_id,
		efscript->flags,
		efscript->texture_id,
		efscript->bytecode,
		efscript->unk_efscript_0x6,
		0.0F, 0.0F, 0.0F,
		efscript->vel.x, efscript->vel.y, efscript->vel.z,
		efscript->unk_efscript_0x2C,
		efscript->unk_efscript_0xC,
		efscript->unk_efscript_0x10,
		sLBParticleTextureBanks[id][efscript->texture_id]->flags,
		NULL
	);
}

// 0x800CE7A8
efParticle* lbParticleMakeParam
(
	s32 bank_id,
	u32 flags,
	u16 texture_id,
	u8 *bytecode,
	s32 arg4,
	f32 pos_x,
	f32 pos_y,
	f32 pos_z,
	f32 vel_x,
	f32 vel_y,
	f32 vel_z,
	f32 argB,
	f32 argC,
	f32 argD,
	u32 argE,
	efGenerator* gtor
)
{
	efParticle *ptcl = lbParticleMakeStruct
	(
		NULL,
		bank_id,
		flags,
		texture_id,
		bytecode,
		arg4,
		pos_x, pos_y, pos_z,
		vel_x, vel_y, vel_z,
		argB,
		argC,
		argD,
		argE,
		gtor
	);
	if (ptcl != NULL)
	{
		func_ovl0_800CEF4C(ptcl, 0, bank_id >> 3);
	}
	return ptcl;
}

// 0x800CE870
efParticle* func_ovl0_800CE870(s32 bank_id, s32 script_bank_id)
{
	efParticle *ptcl = lbParticleMakeDefault(NULL, bank_id, script_bank_id);

	if (ptcl != NULL)
	{
		func_ovl0_800CEF4C(ptcl, 0, bank_id >> 3);
	}
	return ptcl;
}

// 0x800CE8C0
efParticle* lbParticleMakePosVel(s32 bank_id, s32 script_bank_id, f32 pos_x, f32 pos_y, f32 pos_z, f32 vel_x, f32 vel_y, f32 vel_z)
{
	efParticle *ptcl;
	efScript *efscript;
	s32 id = bank_id & 7;

	if (id >= LBPARTICLE_BANKS_NUM_MAX)
	{
		return NULL;
	}
	if (script_bank_id >= sLBParticleScriptBanksNum[id])
	{
		return NULL;
	}
	efscript = sLBParticleScriptBanks[id][script_bank_id];

	ptcl = lbParticleMakeStruct
	(
		NULL,
		bank_id,
		efscript->flags,
		efscript->texture_id,
		efscript->bytecode,
		efscript->unk_efscript_0x6,
		pos_x, pos_y, pos_z,
		vel_x, vel_y, vel_z,
		efscript->unk_efscript_0x2C,
		efscript->unk_efscript_0xC,
		efscript->unk_efscript_0x10,
		sLBParticleTextureBanks[id][efscript->texture_id]->flags,
		NULL
	);
	if (ptcl != NULL)
	{
		func_ovl0_800CEF4C(ptcl, 0, bank_id >> 3);
	}
	return ptcl;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CE9E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CEA14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CEA40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CEB50.s")

u8* lbParticleParseFloatBE(u8 *csr, f32 *f)
{
	u8 bytes[4];

	bytes[0] = *csr++;
	bytes[1] = *csr++;
	bytes[2] = *csr++;
	bytes[3] = *csr++;

	*f = *(f32*)bytes;

	return csr;
}

// 0x800CEBF8
u8* lbParticleParseShortBE(u8 *csr, u16 *s)
{
	u16 value = *csr++;

	if (value & 0x80)
	{
		value = ((value & 0x7F) << 8) + *csr++;
	}
	*s = value + 1;

	return csr;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CEC34.s")
// void func_ovl0_800CEC34(UnkRustRat* arg0, f32 arg1)
// {
// 	f32 unused;
// 	f32 x, y, z;
// 	f32 sp5C;
// 	f32 sp58;
// 	f32 sp54;
// 	f32 temp_f26, sp4C;
// 	f32 sp48, sp44;
// 	f32 temp_f20_2;
// 	f32 temp_f2;

// 	x = arg0->unk_2C.x;
// 	y = arg0->unk_2C.y;
// 	z = unused = arg0->unk_2C.z;

// 	sp58 = atan2f(y, z);
// 	temp_f26 = __sinf(sp58);
// 	sp4C = __cosf(sp58);

// 	sp54 = atan2f(x, y * temp_f26 + z * sp4C);
// 	sp48 = __sinf(sp54);
// 	sp44 = __cosf(sp54);
// 	sp5C = sqrtf(SQUARE(x) + SQUARE(y) + SQUARE(z));

// 	temp_f20_2 = mtTrigGetRandomFloat() * TAU;
// 	z = __sinf(arg1) * sp5C;
// 	x = __cosf(temp_f20_2) * z;
// 	y = __sinf(temp_f20_2) * z;
// 	temp_f2 = __cosf(arg1) * sp5C;

// 	arg0->unk_2C.x = x * sp44 + temp_f2 * sp48;
// 	arg0->unk_2C.y = -x * temp_f26 * sp48 + y * sp4C + temp_f2 * temp_f26 * sp44;
// 	arg0->unk_2C.z = -x * sp4C * sp48 - y * temp_f26 + temp_f2 * sp4C * sp44;
// }

void func_ovl0_800CEDBC(efParticle *ptcl, UnkGreenLeopard* arg1)
{
	f32 dx, dy, dz, dist;

	if (arg1 == NULL)
	{
		return;
	}
	dx = arg1->unk_1C.x - ptcl->pos.x;
	dy = arg1->unk_1C.y - ptcl->pos.y;
	dz = arg1->unk_1C.z - ptcl->pos.z;

	dist = sqrtf(SQUARE(ptcl->vel.x) + SQUARE(ptcl->vel.y) + SQUARE(ptcl->vel.z));

	if ((SQUARE(dx) + SQUARE(dy) + SQUARE(dz)) != 0.0F)
	{
		dist /= sqrtf(SQUARE(dx) + SQUARE(dy) + SQUARE(dz));

		ptcl->vel.x = dx * dist;
		ptcl->vel.y = dy * dist;
		ptcl->vel.z = dz * dist;
	}
}

void func_ovl0_800CEEB8(efParticle *ptcl, UnkGreenLeopard* arg1, f32 magnitude)
{
	f32 dx, dy, dz, dist;

	if (arg1 == NULL)
	{
		return;
	}
	dx = arg1->unk_1C.x - ptcl->pos.x;
	dy = arg1->unk_1C.y - ptcl->pos.y;
	dz = arg1->unk_1C.z - ptcl->pos.z;

	dist = SQUARE(dx) + SQUARE(dy) + SQUARE(dz);

	if (dist != 0.0F)
	{
		dist = magnitude / dist;

		ptcl->vel.x += dist * dx;
		ptcl->vel.y += dist * dy;
		ptcl->vel.z += dist * dz;
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800CEF4C.s")

// 0x800D0C74
void lbParticleStructProcRun(GObj *gobj)
{
	u32 flags = gobj->flags;
	s32 i;
	efParticle *prev_ptcl;
	efParticle *current_ptcl;
	efParticle *next_ptcl;

	for (i = 0; i < ARRAY_COUNT(sLBParticleStructsAllocBuf); i++, flags >>= 1)
	{
		if (flags & 0x10000)
		{
			continue;
		}
		prev_ptcl = NULL;

		current_ptcl = sLBParticleStructsAllocBuf[i];

		while (current_ptcl != NULL)
		{
			next_ptcl = func_ovl0_800CEF4C(current_ptcl, prev_ptcl, i);

			if (current_ptcl->next == next_ptcl)
			{
				prev_ptcl = current_ptcl;
				current_ptcl = next_ptcl;
			}
			else current_ptcl = next_ptcl;
		}
	}
}
#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D0D34.s")

// 0x800D2720
void func_ovl0_800D2720(s32 gtor_id, efGenerator *gtor)
{
	if ((gtor_id > 0) && (gtor_id < ARRAY_COUNT(sLBParticleGeneratorsAllocBuf)))
	{
		sLBParticleGeneratorsAllocBuf[gtor_id] = gtor;
	}
}

// 0x800D2744
void func_ovl0_800D2744(s32 colordither_mode, s32 alphadither_mode)
{
	dLBParticleColorDitherModes[0] = colordither_mode;
	dLBParticleAlphaDitherModes[0] = alphadither_mode;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D2758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D27F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D2C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D353C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D35DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D3884.s")

// 0x800D3978
void func_ovl0_800D3978(void)
{
	efGenerator *current_gtor = sLBParticleGeneratorsAllocBuf[0];

	while (current_gtor != NULL)
	{
		efGenerator *next_gtor = current_gtor->next;

		func_ovl0_800D3884(current_gtor);

		current_gtor = next_gtor;
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D39C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D39D4.s")

void func_ovl0_800D3BFC(Unk_800A7114* arg0)
{
	func_ovl0_800D39D4(arg0->unk_04, arg0->unk_08 >> 3);
}

void func_ovl0_800D3C28(Unk_800A7114* arg0)
{
	func_ovl0_800D39D4(arg0->unk_04, arg0->unk_09 >> 3);
}

// 0x800D3C54
void func_ovl0_800D3C54(GObj *gobj)
{
	DObj *dobj;
	efGenerator *current_gtor, *next_gtor;

	if (gobj->obj_kind == nOMObjCommonAppendDObj)
	{
		for (dobj = DObjGetStruct(gobj); dobj != NULL; dobj = gcGetTreeDObjNext(dobj))
		{
			for (current_gtor = sLBParticleGeneratorsAllocBuf[0]; current_gtor != NULL; current_gtor = next_gtor)
			{
				next_gtor = current_gtor->next;

				if (current_gtor->dobj == dobj)
				{
					func_ovl0_800D3884(current_gtor);
				}
			}
		}
	}
}


#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D3CE0.s")

void func_ovl0_800D3D64(u16 arg0, s32 buf_id)
{
	efParticle *ptcl;
	efGenerator *gtor;

	for (ptcl = sLBParticleStructsAllocBuf[buf_id]; ptcl != NULL; ptcl = ptcl->next)
	{
		if (ptcl->unk_ptcl_0x4 == arg0)
		{
			ptcl->flags |= 0x800;
		}
	}

	for (gtor = sLBParticleGeneratorsAllocBuf[0]; gtor != NULL; gtor = gtor->next)
	{
		if (gtor->unk_gtor_0x4 == arg0)
		{
			gtor->flags |= 0x800;
		}
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl0/halsprite/func_ovl0_800D3DE8.s")
