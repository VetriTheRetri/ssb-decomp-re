#include <lb/library.h>
#include <sys/matrix.h>

extern u16 gSYSinTable[0x800];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x800D5D50
u8 dLBParticleColorDitherMode = G_CD_MAGICSQ;

// 0x800D5D54
u8 dLBParticleAlphaDitherMode = G_AD_PATTERN;

// 0x800D5D58
u16 dLBParticleCurrentGeneratorID = 0;

// 0x800D5D5C
u8 dLBParticleCurrentTransformID = 123;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x800D6350
LBParticle *sLBParticleStructsAllocFree;

// 0x800D6354
s32 sLBParticlePad0x800D6354;

// 0x800D6358
LBParticle *sLBParticleStructsAllocLinks[16];

// 0x800D6398
LBGenerator *sLBParticleGeneratorsAllocFree;

// 0x800D639C
LBGenerator *sLBParticleGeneratorsQueued;

// 0x800D63A0
DObj *sLBParticleAttachDObjs[LBPARTICLE_ATTACH_DOBJ_NUM_MAX];

// 0x800D63C0
s32 sLBParticleScriptBanksNum[LBPARTICLE_BANKS_NUM_MAX];

// 0x800D63E0
s32 sLBParticleTextureBanksNum[LBPARTICLE_BANKS_NUM_MAX];

// 0x800D6400
LBScript **sLBParticleScriptBanks[LBPARTICLE_BANKS_NUM_MAX];

// 0x800D6420
LBTexture **sLBParticleTextureBanks[LBPARTICLE_BANKS_NUM_MAX];

// 0x800D6440
void (*sLBParticleGeneratorProcDefault)(LBGenerator*, Vec3f*);

// 0x800D6444
void (*sLBParticleGeneratorProcSetup)(LBGenerator*);

// 0x800D6448
u16 gLBParticleStructsUsedNum;

// 0x800D644A
u16 gLBParticleGeneratorsUsedNum;

// 0x800D644C
u16 gLBParticleTransformsUsedNum;

// 0x800D644E
u16 D_ovl0_800D644E;

// 0x800D6450
u16 D_ovl0_800D6450;

// 0x800D6452
u16 D_ovl0_800D6452;

// 0x800D6454
LBTransform *sLBParticleTransformsAllocFree;

// 0x800D6458
LBGenerator *sLBParticleGeneratorsLastProcessed;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800CE040
s32 lbParticleAllocTransforms(s32 num, size_t size)
{
	LBTransform *tfm;
	s32 i;

	sLBParticleTransformsAllocFree = NULL;
	
	for (i = 0; i < num; i++)
	{
		tfm = syTaskmanMalloc(size, 0x4);

		if (tfm == NULL)
		{
			return i;
		}
		tfm->next = sLBParticleTransformsAllocFree;
		sLBParticleTransformsAllocFree = tfm;
	}
	gLBParticleTransformsUsedNum = 0;
	D_ovl0_800D6452 = 0;

	return i;
}

// 0x800CE0D8
LBTransform* lbParticleGetTransform(u8 status, u16 generator_id)
{
	LBTransform *tfm = sLBParticleTransformsAllocFree;

	if (tfm != NULL)
	{
        sLBParticleTransformsAllocFree = tfm->next;
        tfm->users_num = 1;
        tfm->transform_id = dLBParticleCurrentTransformID;
        tfm->proc_dead = NULL;

		tfm->translate.x = tfm->translate.y = tfm->translate.z = 0.0F;
		tfm->rotate.x = tfm->rotate.y = tfm->rotate.z = 0.0F;
		tfm->scale.x = tfm->scale.y = tfm->scale.z = 1.0F;

		tfm->transform_status = status;
		tfm->generator_id = generator_id;

		gLBParticleTransformsUsedNum++;

		if (D_ovl0_800D6452 < gLBParticleTransformsUsedNum)
		{
			D_ovl0_800D6452 = gLBParticleTransformsUsedNum;
		}
	}
	return tfm;
}

// 0x800CE188
void lbParticleEjectTransform(LBTransform *tfm)
{
	if (tfm->proc_dead != NULL)
	{
		tfm->proc_dead(tfm);
	}
	tfm->next = sLBParticleTransformsAllocFree;
	sLBParticleTransformsAllocFree = tfm;

	gLBParticleTransformsUsedNum--;
}

// 0x800CE1DC
LBTransform* lbParticleAddTransformForStruct(LBParticle *ptc, u8 status)
{
    ptc->tfm = lbParticleGetTransform(status, ptc->generator_id);

	return ptc->tfm;
}

// 0x800CE218
LBTransform* lbParticleAddTransformForGenerator(LBGenerator* gen, u8 status)
{
	gen->tfm = lbParticleGetTransform(status, gen->generator_id);

	return gen->tfm;
}

// 0x800CE254
void lbParticleSetupBankID(s32 bank_id, LBScriptDesc *script_desc, LBTextureDesc *texture_desc)
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
		/* 
         * By default, the scripts array is populated with the offsets of the scripts
		 * in their respective file, so this is essentially making them into valid RAM pointers.
		 */
		script_desc->scripts[i - 1] = lbRelocGetFileData(LBScript*, script_desc, script_desc->scripts[i - 1]);
	}
	for (i = 1; i <= sLBParticleTextureBanksNum[bank_id]; i++)
	{
		// Much like scripts, textures from the file are also being "pointerized" here.
		texture_desc->textures[i - 1] = lbRelocGetFileData(LBTexture*, texture_desc, texture_desc->textures[i - 1]);
	}
	for (i = 0; i < sLBParticleTextureBanksNum[bank_id]; i++)
	{
		for (j = 0; j < sLBParticleTextureBanks[bank_id][i]->count; j++)
		{
			sLBParticleTextureBanks[bank_id][i]->data[j] = lbRelocGetFileData(void*, texture_desc, sLBParticleTextureBanks[bank_id][i]->data[j]);
		}
		if (sLBParticleTextureBanks[bank_id][i]->fmt == G_IM_FMT_CI)
		{
			if (sLBParticleTextureBanks[bank_id][i]->flags & 1)
			{
				// One palette after the images
				j = sLBParticleTextureBanks[bank_id][i]->count;

				sLBParticleTextureBanks[bank_id][i]->data[j] = lbRelocGetFileData(void*, texture_desc, sLBParticleTextureBanks[bank_id][i]->data[j]);
			}
			else for (j = sLBParticleTextureBanks[bank_id][i]->count; j < sLBParticleTextureBanks[bank_id][i]->count * 2; j++)
			{
				sLBParticleTextureBanks[bank_id][i]->data[j] = lbRelocGetFileData(void*, texture_desc, sLBParticleTextureBanks[bank_id][i]->data[j]);
			}
		}
	}
}

// 0x800CE418
GObj* lbParticleAllocStructs(s32 num)
{
	s32 i;
	LBParticle *ptc;

	sLBParticleStructsAllocFree = NULL;

	for (i = 0; i < ARRAY_COUNT(sLBParticleStructsAllocLinks); i++)
	{
		sLBParticleStructsAllocLinks[i] = NULL;
	}
	for (i = num - 1; i >= 0; i--)
	{
		ptc = syTaskmanMalloc(sizeof(*ptc), 0x4);

		if (ptc == NULL)
		{
			return NULL;
		}
		ptc->next = sLBParticleStructsAllocFree;
		sLBParticleStructsAllocFree = ptc;
	}
	gLBParticleStructsUsedNum = 0;
	D_ovl0_800D644E = 0;

	if (gcFindGObjByID(~0x5) != NULL)
	{
		return NULL;
	}
	return gcMakeGObjSPAfter(~0x5, lbParticleStructFuncRun, 0, GOBJ_PRIORITY_DEFAULT);
}

// 0x800CE4E4
LBParticle* lbParticleMakeStruct
(
	LBParticle *this_ptc,
	s32 bank_id,
	u32 flags,
	u16 texture_id,
	u8 *bytecode,
	s32 lifetime,
	f32 pos_x,
	f32 pos_y,
	f32 pos_z,
	f32 vel_x,
	f32 vel_y,
	f32 vel_z,
	f32 size,
	f32 gravity,
	f32 friction,
	u32 argF,
	LBGenerator *gen
)
{
	LBParticle *new_ptc;
	s32 i;

    new_ptc = sLBParticleStructsAllocFree;
    
    if (new_ptc == NULL)
    {
        return NULL;
    }
    gLBParticleStructsUsedNum++;
    
    if (D_ovl0_800D644E < gLBParticleStructsUsedNum) 
    {
        D_ovl0_800D644E = gLBParticleStructsUsedNum;
    }
    if (gen != NULL)
    {
        new_ptc->generator_id = gen->generator_id;
    } 
    else new_ptc->generator_id = ++dLBParticleCurrentGeneratorID;

    if (gen != NULL)
    {
        new_ptc->tfm = gen->tfm;
        
        if (new_ptc->tfm != NULL)
        {
            new_ptc->tfm->users_num++;
        }
    }
    else new_ptc->tfm = NULL;
    
    sLBParticleStructsAllocFree = new_ptc->next;
    
    if (this_ptc == NULL) 
    {
        new_ptc->next = sLBParticleStructsAllocLinks[bank_id >> 3];
        sLBParticleStructsAllocLinks[bank_id >> 3] = new_ptc;
    } 
    else 
    {
        new_ptc->next = this_ptc->next;
        this_ptc->next = new_ptc;
    }
    new_ptc->bank_id = bank_id;
    new_ptc->flags = flags;
    new_ptc->texture_id = texture_id;

	new_ptc->pos.x = pos_x;
	new_ptc->pos.y = pos_y;
	new_ptc->pos.z = pos_z;

    new_ptc->vel.x = vel_x;
    new_ptc->vel.y = vel_y;
    new_ptc->vel.z = vel_z;
    
    new_ptc->size = size;
    new_ptc->gravity = gravity;
    new_ptc->friction = friction;

    new_ptc->lifetime = lifetime + 1;
    new_ptc->bytecode_csr = new_ptc->return_ptr = 0;
    
    new_ptc->bytecode = bytecode;

    if (argF != FALSE) 
    { 
        new_ptc->flags |= 0x10;
    }
    new_ptc->bytecode_timer = (bytecode != NULL) ? 1 : 0;
    
    new_ptc->data_id = 0;
    
    new_ptc->primcolor.r = new_ptc->primcolor.g = new_ptc->primcolor.b = new_ptc->primcolor.a = 0xFF;
    new_ptc->envcolor.r = new_ptc->envcolor.g = new_ptc->envcolor.b = new_ptc->envcolor.a = 0x00;
    
    new_ptc->size_target_length = new_ptc->target_primcolor_length = new_ptc->target_envcolor_length = 0;
    
    new_ptc->gen = gen;

	return new_ptc;
}

// 0x800CE6B8
LBParticle* lbParticleMakeChildScriptID(LBParticle *ptc, s32 bank_id, s32 script_id)
{
	LBScript *script;
	s32 id = bank_id & 7;

	if (id >= LBPARTICLE_BANKS_NUM_MAX)
	{
		return NULL;
	}
	if (script_id >= sLBParticleScriptBanksNum[id])
	{
		return NULL;
	}
	script = sLBParticleScriptBanks[id][script_id];

	return lbParticleMakeStruct
	(
		ptc,
		bank_id,
		script->flags,
		script->texture_id,
		script->bytecode,
		script->particle_lifetime,
		0.0F, 0.0F, 0.0F,
		script->vel.x, script->vel.y, script->vel.z,
		script->size,
		script->gravity,
		script->friction,
		sLBParticleTextureBanks[id][script->texture_id]->flags,
		NULL
	);
}

// 0x800CE7A8
LBParticle* lbParticleMakeParam
(
	s32 bank_id,
	u32 flags,
	u16 texture_id,
	u8 *bytecode,
	s32 lifetime,
	f32 pos_x,
	f32 pos_y,
	f32 pos_z,
	f32 vel_x,
	f32 vel_y,
	f32 vel_z,
	f32 size,
	f32 gravity,
	f32 friction,
	u32 argE,
	LBGenerator *gen
)
{
	LBParticle *ptc = lbParticleMakeStruct
	(
		NULL,
		bank_id,
		flags,
		texture_id,
		bytecode,
		lifetime,
		pos_x, pos_y, pos_z,
		vel_x, vel_y, vel_z,
		size,
		gravity,
		friction,
		argE,
		gen
	);
	if (ptc != NULL)
	{
		lbParticleUpdateStruct(ptc, 0, bank_id >> 3);
	}
	return ptc;
}

// 0x800CE870
LBParticle* lbParticleMakeCommon(s32 bank_id, s32 script_id)
{
	LBParticle *ptc = lbParticleMakeChildScriptID(NULL, bank_id, script_id);

	if (ptc != NULL)
	{
		lbParticleUpdateStruct(ptc, NULL, bank_id >> 3);
	}
	return ptc;
}

// 0x800CE8C0
LBParticle* lbParticleMakePosVel(s32 bank_id, s32 script_id, f32 pos_x, f32 pos_y, f32 pos_z, f32 vel_x, f32 vel_y, f32 vel_z)
{
	LBParticle *ptc;
	LBScript *script;
	s32 id = bank_id & 7;

	if (id >= LBPARTICLE_BANKS_NUM_MAX)
	{
		return NULL;
	}
	if (script_id >= sLBParticleScriptBanksNum[id])
	{
		return NULL;
	}
	script = sLBParticleScriptBanks[id][script_id];

	ptc = lbParticleMakeStruct
	(
		NULL,
		bank_id,
		script->flags,
		script->texture_id,
		script->bytecode,
		script->particle_lifetime,
		pos_x, pos_y, pos_z,
		vel_x, vel_y, vel_z,
		script->size,
		script->gravity,
		script->friction,
		sLBParticleTextureBanks[id][script->texture_id]->flags,
		NULL
	);
	if (ptc != NULL)
	{
		lbParticleUpdateStruct(ptc, 0, bank_id >> 3);
	}
	return ptc;
}

// 0x800CE9E8
LBParticle* lbParticleMakeScriptID(s32 bank_id, s32 script_id)
{
	return lbParticleMakeChildScriptID(NULL, bank_id, script_id);
}

// 0x800CEA14
void LBParticleProcessStruct(LBParticle *ptc)
{
	if (ptc != NULL)
	{
		lbParticleUpdateStruct(ptc, NULL, ptc->bank_id >> 3);
	}
}

// 0x800CEA40
void lbParticleEjectStruct(LBParticle *this_ptc)
{
	LBParticle *prev_ptc, *current_ptc;
	LBGenerator *gen;
	s32 bank_id;

	bank_id = this_ptc->bank_id >> 3;
	current_ptc = sLBParticleStructsAllocLinks[bank_id];
	prev_ptc = NULL;

	while (current_ptc != NULL)
	{
		if (current_ptc == this_ptc)
		{
			if (prev_ptc == NULL)
			{
				sLBParticleStructsAllocLinks[bank_id] = current_ptc->next;
			}
			else prev_ptc->next = current_ptc->next;

			gen = this_ptc->gen;

			if ((gen != NULL) && (this_ptc->flags & 4) && (gen->kind == 2))
			{
				gen->generator_vars.unk_gen_vars.halfword--;
			}
			if (this_ptc->tfm != NULL)
			{
				this_ptc->tfm->users_num--;

				if (this_ptc->tfm->users_num == 0)
				{
					lbParticleEjectTransform(this_ptc->tfm);
				}
			}
			current_ptc->next = sLBParticleStructsAllocFree;
			sLBParticleStructsAllocFree = current_ptc;
			gLBParticleStructsUsedNum--;

			break;
		}
		prev_ptc = current_ptc;
		current_ptc = current_ptc->next;
	}
}

// 0x800CEB50 - unused? Eject all LBParticle structs
void lbParticleEjectStructAll(void)
{
	LBParticle *current_ptc, *next_ptc;
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sLBParticleStructsAllocLinks); i++)
	{
		current_ptc = sLBParticleStructsAllocLinks[i];

		while (current_ptc != NULL)
		{
			next_ptc = current_ptc->next;

			lbParticleEjectStruct(current_ptc);

			current_ptc = next_ptc;
		}
	}
}

// 0x800CEBC0 - WARNING: Big Endian only!
u8* lbParticleReadFloatBigEnd(u8 *csr, f32 *f)
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
u8* lbParticleReadUShort(u8 *csr, u16 *s)
{
	u16 value = *csr++;

	if (value & 0x80)
	{
		value = ((value & 0x7F) << 8) + *csr++;
	}
	*s = value + 1;

	return csr;
}

// 0x800CEC34
void lbParticleRotateVel(LBParticle *ptc, f32 angle)
{
	Vec3f vel;
	f32 sin_angle;
	f32 magnitude;
	f32 pitch;
	f32 yaw;
	f32 sin_pitch;
	f32 cos_pitch;
	f32 sin_yaw;
	f32 cos_yaw;
	f32 cos_angle;
	
	vel.x = ptc->vel.x;
	vel.y = ptc->vel.y;
	vel.z = ptc->vel.z;
	
	pitch = atan2f(vel.y, vel.z);
	sin_pitch = __sinf(pitch);
	cos_pitch = __cosf(pitch);
	
	yaw = atan2f(vel.x, (vel.y * sin_pitch) + (vel.z * cos_pitch));
	sin_yaw = __sinf(yaw);
	cos_yaw = __cosf(yaw);
	
	magnitude = sqrtf(SQUARE(vel.x) + SQUARE(vel.y) + SQUARE(vel.z));
	
	vel.y = mtTrigGetRandomFloat() * F_CST_DTOR32(360.0F);
	
	sin_angle = __sinf(angle) * magnitude;
	
	vel.z = sin_yaw;
	vel.x = __cosf(vel.y) * sin_angle;
	vel.y = __sinf(vel.y) * sin_angle;
	
	cos_angle = __cosf(angle) * magnitude;
	
	ptc->vel.x = (vel.x * cos_yaw) + (cos_angle * sin_yaw);
	ptc->vel.y = (((-vel.x * sin_pitch) * sin_yaw) + (vel.y * cos_pitch)) + ((cos_angle * sin_pitch) * cos_yaw);
	ptc->vel.z = (((-vel.x * cos_pitch) * vel.z) - (vel.y * sin_pitch)) + ((cos_angle * cos_pitch) * cos_yaw);
}

// 0x800CEDBC
void lbParticleSetDistVelDObj(LBParticle *ptc, DObj *dobj)
{
	f32 dx, dy, dz, dist;

	if (dobj == NULL)
	{
		return;
	}
	dx = dobj->translate.vec.f.x - ptc->pos.x;
	dy = dobj->translate.vec.f.y - ptc->pos.y;
	dz = dobj->translate.vec.f.z - ptc->pos.z;

	dist = sqrtf(SQUARE(ptc->vel.x) + SQUARE(ptc->vel.y) + SQUARE(ptc->vel.z));

	if ((SQUARE(dx) + SQUARE(dy) + SQUARE(dz)) != 0.0F)
	{
		dist /= sqrtf(SQUARE(dx) + SQUARE(dy) + SQUARE(dz));

		ptc->vel.x = dx * dist;
		ptc->vel.y = dy * dist;
		ptc->vel.z = dz * dist;
	}
}

// 0x800CEEB8
void lbParticleAddDistVelMagDObj(LBParticle *ptc, DObj *dobj, f32 magnitude)
{
	f32 dx, dy, dz, dist;

	if (dobj == NULL)
	{
		return;
	}
	dx = dobj->translate.vec.f.x - ptc->pos.x;
	dy = dobj->translate.vec.f.y - ptc->pos.y;
	dz = dobj->translate.vec.f.z - ptc->pos.z;

	dist = SQUARE(dx) + SQUARE(dy) + SQUARE(dz);

	if (dist != 0.0F)
	{
		dist = magnitude / dist;

		ptc->vel.x += dist * dx;
		ptc->vel.y += dist * dy;
		ptc->vel.z += dist * dz;
	}
}

#ifdef NON_MATCHING
// 0x800CEF4C - NONMATCHING: v0 VS v1 regswap in switch statement initialization + floats are a mess near the end of the function
LBParticle* lbParticleUpdateStruct(LBParticle *this_ptc, LBParticle *other_ptc, s32 bank_id)
{
    LBParticle *current_ptc;
    LBParticle *next_ptc;
    LBGenerator *gen;
    u8 *csr; // s1
    u8 command; // s0
    u16 bytecode_timer;
    u16 angle_id;
    u16 bytecode_csr;
    s32 svar1;  // sp88?
    s32 svar2;
    u8 opcode;
    f32 fvar1; // s3
    f32 fvar2;
    f32 unused1[2];
    f32 sp70;
    f32 unused2[2];
    f32 f0, f1;
    f32 sx1, sx2; // sp5C, sp58
    f32 cx1, cx2; // f16=>sp54, f12=>sp50
    u16 angle_id_2;
    f32 sx4, cx4; 
    f32 sx3, cx3; // f18, f0=>sp44
    
    if (this_ptc->flags & LBPARTICLE_FLAG_PAUSE)
    {
        return this_ptc->next;
    }
    if (this_ptc->bytecode_timer != 0)
    {
        this_ptc->bytecode_timer--;
        
        if (this_ptc->bytecode_timer == 0)
        {
            csr = &this_ptc->bytecode[this_ptc->bytecode_csr];
            
            do
            {
                command = *csr++;
                
                if (command >= 0x80)
                {
                    bytecode_timer = 0;

                    opcode = (command & 0xF8);
                    
                    if (opcode > 0x98)
                    {
                        opcode = (command & 0xF0);

                        if ((opcode != 0xC0) && (opcode != 0xD0))
                        {
                            opcode = command;
                        }
                    }
                    // Even if you DO manage to fix the floats near the end, how do you deal with the v0 vs v1 regswap up here!?

                    switch (opcode)
                    {
                    case LBPARTICLE_OPCODE_SETPOS:
                        if (command & 1) 
                        { 
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptc->pos.x);
                        }
                        if (command & 2) 
                        { 
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptc->pos.y);
                        }
                        if (command & 4)
                        { 
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptc->pos.z);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ADDPOS:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptc->pos.x += fvar1;
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptc->pos.y += fvar1;
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptc->pos.z += fvar1;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETVEL:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptc->vel.x);
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptc->vel.y);
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptc->vel.z);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ADDVEL:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptc->vel.x += fvar1;
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptc->vel.y += fvar1;
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptc->vel.z += fvar1;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETSIZELERP:
                        csr = lbParticleReadUShort(csr, &this_ptc->size_target_length);
                        csr = lbParticleReadFloatBigEnd(csr, &this_ptc->size_target);

                        if (this_ptc->size_target_length == 1)
                        {
                            this_ptc->size = this_ptc->size_target;
                            this_ptc->size_target_length = 0;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETFLAG:
                        this_ptc->flags = *csr++;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETGRAVITY:
                        csr = lbParticleReadFloatBigEnd(csr, &this_ptc->gravity);
                        
                        if (this_ptc->gravity == 0.0F)
                        {
                            this_ptc->flags &= ~LBPARTICLE_FLAG_GRAVITY;
                        }
                        else this_ptc->flags |= LBPARTICLE_FLAG_GRAVITY;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETFRICTION:
                        csr = lbParticleReadFloatBigEnd(csr, &this_ptc->friction);
                            
                        if (this_ptc->friction == 1.0F)
                        {
                            this_ptc->flags &= ~LBPARTICLE_FLAG_FRICTION;
                        }
                        else this_ptc->flags |= LBPARTICLE_FLAG_FRICTION;
                        break;
                        
                    case LBPARTICLE_OPCODE_MAKESCRIPT:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        current_ptc = lbParticleMakeChildScriptID(this_ptc, this_ptc->bank_id, svar1);
                            
                        if (current_ptc != NULL)
                        {
                            current_ptc->pos.x = this_ptc->pos.x;
                            current_ptc->pos.y = this_ptc->pos.y;
                            current_ptc->pos.z = this_ptc->pos.z;
                            current_ptc->generator_id = this_ptc->generator_id;
                            current_ptc->gen = this_ptc->gen;
                            current_ptc->tfm = this_ptc->tfm;
                                
                            if (current_ptc->tfm != NULL)
                            {
                                current_ptc->tfm->users_num++;
                            }
                            lbParticleUpdateStruct(current_ptc, this_ptc, this_ptc->bank_id >> 3);
                        }  
                        break;
                
                    case LBPARTICLE_OPCODE_MAKEGENERATOR:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        gen = lbParticleMakeGenerator(this_ptc->bank_id, svar1);
                            
                        if (gen != NULL)
                        {
                            gen->pos.x = this_ptc->pos.x;
                            gen->pos.y = this_ptc->pos.y;
                            gen->pos.z = this_ptc->pos.z;
                            gen->generator_id = this_ptc->generator_id;
                            gen->tfm = this_ptc->tfm;
                                
                            if (gen->tfm != NULL)
                            {
                                gen->tfm->users_num++;
                            }
                        }    
                        break;
                        
                    case LBPARTICLE_OPCODE_SETLIFERAND:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        svar2 = *csr++;
                        svar2 <<= 8;
                        svar2 += *csr++;

                        this_ptc->lifetime = svar1 + (s32) (svar2 * mtTrigGetRandomFloat());
                        break;
                        
                    case LBPARTICLE_OPCODE_TRYDEADRAND:
                        svar1 = *csr++;
                        svar2 = mtTrigGetRandomFloat() * 100.0F;

                        if (svar1 < svar2)
                        {
                            break;
                        }
                        else this_ptc->lifetime = 1;
                        goto loop_break;
                        
                    case LBPARTICLE_OPCODE_ADDVELRAND:    
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptc->pos.x += fvar1 * mtTrigGetRandomFloat();

                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptc->pos.y += fvar1 * mtTrigGetRandomFloat();

                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptc->pos.z += fvar1 * mtTrigGetRandomFloat();
                        break;
                        
                    case LBPARTICLE_OPCODE_SETVELANGLE:
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        lbParticleRotateVel(this_ptc, fvar1);
                        break;
                        
                    case LBPARTICLE_OPCODE_MAKERAND:                        
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        svar2 = *csr++;
                        svar2 <<= 8;
                        svar2 += *csr++;

                        svar1 += (s32) (svar2 * mtTrigGetRandomFloat());

                        current_ptc = lbParticleMakeChildScriptID(this_ptc, this_ptc->bank_id, svar1);
                            
                        if (current_ptc != NULL)
                        {
                            current_ptc->pos.x = this_ptc->pos.x;
                            current_ptc->pos.y = this_ptc->pos.y;
                            current_ptc->pos.z = this_ptc->pos.z;
                            current_ptc->generator_id = this_ptc->generator_id;
                            current_ptc->gen = this_ptc->gen;
                            current_ptc->tfm = this_ptc->tfm;

                            if (current_ptc->tfm != NULL)
                            {
                                current_ptc->tfm->users_num++;
                            }
                            lbParticleUpdateStruct(current_ptc, this_ptc, this_ptc->bank_id >> 3);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_MULVEL: 
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            
                        this_ptc->vel.x *= fvar1;
                        this_ptc->vel.y *= fvar1;
                        this_ptc->vel.z *= fvar1;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETSIZERAND:    
                        csr = lbParticleReadUShort(csr, &this_ptc->size_target_length);
                        csr = lbParticleReadFloatBigEnd(csr, &this_ptc->size_target);
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            
                        this_ptc->size_target += fvar1 * mtTrigGetRandomFloat();
                            
                        if (this_ptc->size_target_length == 1) 
                        {
                            this_ptc->size = this_ptc->size_target;
                            this_ptc->size_target_length = 0;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ENVCOLOR:
                        this_ptc->flags |= LBPARTICLE_FLAG_ENVCOLOR;
                        break;
                        
                    case LBPARTICLE_OPCODE_NOMASKST:
                        this_ptc->flags &= ~(LBPARTICLE_FLAG_MASKT | LBPARTICLE_FLAG_MASKS);
                        break;
                        
                    case LBPARTICLE_OPCODE_MASKS:            
                        this_ptc->flags &= ~LBPARTICLE_FLAG_MASKT;
                        this_ptc->flags |= LBPARTICLE_FLAG_MASKS;
                        break;
                        
                    case LBPARTICLE_OPCODE_MASKT:
                        this_ptc->flags &= ~LBPARTICLE_FLAG_MASKS;
                        this_ptc->flags |= LBPARTICLE_FLAG_MASKT;
                        break;
                            
                    case LBPARTICLE_OPCODE_MASKST:
                        this_ptc->flags |= (LBPARTICLE_FLAG_MASKT | LBPARTICLE_FLAG_MASKS);
                        break;
                        
                    case LBPARTICLE_OPCODE_ALPHABLEND:
                        this_ptc->flags |= LBPARTICLE_FLAG_ALPHABLEND;
                        break;
                        
                    case LBPARTICLE_OPCODE_NODITHER:
                        this_ptc->flags &= ~LBPARTICLE_FLAG_DITHER;
                        break;
                        
                    case LBPARTICLE_OPCODE_DITHER:
                        this_ptc->flags |= LBPARTICLE_FLAG_DITHER;
                        break;
                    
                    case LBPARTICLE_OPCODE_NONOISE:
                        this_ptc->flags |= LBPARTICLE_FLAG_NOISE;
                        break;
                        
                    case LBPARTICLE_OPCODE_NOISE:
                        this_ptc->flags &= ~LBPARTICLE_FLAG_NOISE;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETDISTVEL:
                        svar1 = *csr++;
                        lbParticleSetDistVelDObj(this_ptc, sLBParticleAttachDObjs[svar1 - 1]);
                        break;
                        
                    case LBPARTICLE_OPCODE_ADDDISTVELMAG:
                        svar1 = *csr++;
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        lbParticleAddDistVelMagDObj(this_ptc, sLBParticleAttachDObjs[svar1 - 1], fvar1);
                        break;
                        
                    case LBPARTICLE_OPCODE_MAKEID:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        current_ptc = lbParticleMakeChildScriptID(this_ptc, this_ptc->bank_id, svar1);

                        if (current_ptc != NULL)
                        {
                            current_ptc->pos.x = this_ptc->pos.x;
                            current_ptc->pos.y = this_ptc->pos.y;
                            current_ptc->pos.z = this_ptc->pos.z;
                            current_ptc->vel.x = this_ptc->vel.x;
                            current_ptc->vel.y = this_ptc->vel.y;
                            current_ptc->vel.z = this_ptc->vel.z;
                            current_ptc->generator_id = this_ptc->generator_id;
                            current_ptc->gen = this_ptc->gen;
                            current_ptc->tfm = this_ptc->tfm;
                                
                            if (current_ptc->tfm != NULL)
                            {
                                current_ptc->tfm->users_num++;
                            }
                            lbParticleUpdateStruct(current_ptc, this_ptc, this_ptc->bank_id >> 3);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_PRIMBLENDRAND:
                        fvar1 = *csr++;
                        this_ptc->target_primcolor.r += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptc->target_primcolor.g += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptc->target_primcolor.b += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptc->target_primcolor.a += fvar1 * mtTrigGetRandomFloat();
                            
                        if (this_ptc->target_primcolor_length == 0)
                        {
                            // this has lwl and lwr, so maybe it's a struct?
                            this_ptc->primcolor = this_ptc->target_primcolor;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ENVBLENDRAND:
                        fvar1 = *csr++;
                        this_ptc->target_envcolor.r += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptc->target_envcolor.g += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptc->target_envcolor.b += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptc->target_envcolor.a += fvar1 * mtTrigGetRandomFloat();

                        if (this_ptc->target_envcolor_length == 0)
                        {
                            // this has lwl and lwr, so maybe it's a struct?
                            this_ptc->envcolor = this_ptc->target_envcolor;
                        }
                        break;
                        
                    case 0xBC:    
                        this_ptc->data_id = *csr++;
                        fvar1 = *csr++;
                        this_ptc->data_id += fvar1 * mtTrigGetRandomFloat();
                        break;
                        
                    case LBPARTICLE_OPCODE_SETVELMAG:
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        csr = lbParticleReadFloatBigEnd(csr, &fvar2);

                        fvar1 += fvar2 * mtTrigGetRandomFloat();

                        fvar2 = sqrtf(SQUARE(this_ptc->vel.x) + SQUARE(this_ptc->vel.y) + SQUARE(this_ptc->vel.z));
                        
                        fvar1 /= fvar2;

                        this_ptc->vel.x *= fvar1;
                        this_ptc->vel.y *= fvar1;
                        this_ptc->vel.z *= fvar1;
                        break;
                        
                    case LBPARTICLE_OPCODE_MULVELAXIS:    
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptc->vel.x *= fvar1;
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptc->vel.y *= fvar1;
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptc->vel.z *= fvar1;
                        break;
                        
                        case LBPARTICLE_OPCODE_SETATTACHID:
                        svar1 = *csr++ - 1;
                        this_ptc->flags |= LBPARTICLE_SET_ATTACH_ID(svar1);
                        break;
                        
                    case LBPARTICLE_OPCODE_SETPRIMBLEND:
                        csr  = lbParticleReadUShort(csr, &this_ptc->target_primcolor_length);
                        this_ptc->target_primcolor = this_ptc->primcolor;
                            
                        if (command & 1)
                        {
                            this_ptc->target_primcolor.r = *csr++;
                        }
                        if (command & 2)
                        {
                            this_ptc->target_primcolor.g = *csr++;
                        }
                        if (command & 4)
                        {
                            this_ptc->target_primcolor.b = *csr++;
                        }
                        if (command & 8)
                        {
                            this_ptc->target_primcolor.a = *csr++;
                        }
                        if (this_ptc->target_primcolor_length == 1)
                        {
                            this_ptc->primcolor = this_ptc->target_primcolor;
                            
                            this_ptc->target_primcolor_length = 0;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETENVBLEND:
                        csr = lbParticleReadUShort(csr, &this_ptc->target_envcolor_length);
                        this_ptc->target_envcolor = this_ptc->envcolor;
                            
                        if (command & 1)
                        {
                            this_ptc->target_envcolor.r = *csr++;
                        }
                        if (command & 2)
                        {
                            this_ptc->target_envcolor.g = *csr++;
                        }
                        if (command & 4)
                        {
                            this_ptc->target_envcolor.b = *csr++;
                        }
                        if (command & 8)
                        {
                            this_ptc->target_envcolor.a = *csr++;
                        }
                        if (this_ptc->target_envcolor_length == 1)
                        {
                            this_ptc->envcolor = this_ptc->target_envcolor;
                            this_ptc->target_envcolor_length = 0;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETLOOP:    
                        this_ptc->loop_count = *csr++;
                        this_ptc->loop_ptr = (u16) ((uintptr_t)csr - (uintptr_t)this_ptc->bytecode);
                        break;
                        
                    case LBPARTICLE_OPCODE_LOOP:    
                        this_ptc->loop_count--;
                            
                        if (this_ptc->loop_count != 0)
                        {
                            csr = (u8*) (this_ptc->bytecode + this_ptc->loop_ptr);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETRETURN:            
                        this_ptc->return_ptr = (u16) ((uintptr_t)csr - (uintptr_t)this_ptc->bytecode);
                        break;
                        
                    case LBPARTICLE_OPCODE_RETURN:
                        csr = (u8*) (this_ptc->bytecode + this_ptc->return_ptr);
                        break;
                        
                    case LBPARTICLE_OPCODE_DEAD:
                    case LBPARTICLE_OPCODE_END:
                        this_ptc->lifetime = 1;
                        goto loop_break;
                    }
                }
                else
                {
                    bytecode_timer = command & 0x1F;
                    
                    if (command & 0x20)
                    {
                        bytecode_timer = *csr++ + (bytecode_timer << 8);
                    }
                    if ((command & 0xC0) && ((command & 0xC0) == 0x40))
                    {
                        this_ptc->data_id = *csr++;
                    }
                }
            }
            while (bytecode_timer == 0);
            
        loop_break:
            bytecode_csr = (u8*) ((uintptr_t)csr - (uintptr_t)this_ptc->bytecode);
            
            this_ptc->bytecode_csr = bytecode_csr;
            this_ptc->bytecode_timer = bytecode_timer;
        }
    }
    if (this_ptc->size_target_length)
    {
        this_ptc->size += (this_ptc->size_target - this_ptc->size) / this_ptc->size_target_length;

        this_ptc->size_target_length--;
    }
    if (this_ptc->target_primcolor_length) 
    {
        this_ptc->primcolor.r =
        ((this_ptc->primcolor.r << 16) + ((this_ptc->target_primcolor.r - this_ptc->primcolor.r) * (65536 / this_ptc->target_primcolor_length))) >> 16;

        this_ptc->primcolor.g =
        ((this_ptc->primcolor.g << 16) + ((this_ptc->target_primcolor.g - this_ptc->primcolor.g) * (65536 / this_ptc->target_primcolor_length))) >> 16;

        this_ptc->primcolor.b =
        ((this_ptc->primcolor.b << 16) + ((this_ptc->target_primcolor.b - this_ptc->primcolor.b) * (65536 / this_ptc->target_primcolor_length))) >> 16;

        this_ptc->primcolor.a =
        ((this_ptc->primcolor.a << 16) + ((this_ptc->target_primcolor.a - this_ptc->primcolor.a) * (65536 / this_ptc->target_primcolor_length))) >> 16;

        this_ptc->target_primcolor_length--;
    }
    if (this_ptc->target_envcolor_length) 
    {
        this_ptc->envcolor.r =
        ((this_ptc->envcolor.r << 16) + ((this_ptc->target_envcolor.r - this_ptc->envcolor.r) * (65536 / this_ptc->target_envcolor_length))) >> 16;

        this_ptc->envcolor.g =
        ((this_ptc->envcolor.g << 16) + ((this_ptc->target_envcolor.g - this_ptc->envcolor.g) * (65536 / this_ptc->target_envcolor_length))) >> 16;

        this_ptc->envcolor.b =
        ((this_ptc->envcolor.b << 16) + ((this_ptc->target_envcolor.b - this_ptc->envcolor.b) * (65536 / this_ptc->target_envcolor_length))) >> 16;

        this_ptc->envcolor.a =
        ((this_ptc->envcolor.a << 16) + ((this_ptc->target_envcolor.a - this_ptc->envcolor.a) * (65536 / this_ptc->target_envcolor_length))) >> 16;
            
        this_ptc->target_envcolor_length--;        
    }
    this_ptc->lifetime--;
    
    if (this_ptc->lifetime == 0)
    {
        if (other_ptc == NULL)
        {
            sLBParticleStructsAllocLinks[bank_id] = this_ptc->next;
        }
        else other_ptc->next = this_ptc->next;
        
        next_ptc = this_ptc->next;
        
        if ((this_ptc->gen != NULL) && (this_ptc->flags & 0x4) && (this_ptc->gen->kind == 2))
        {
            this_ptc->gen->generator_vars.unk_gen_vars.halfword--;
        }
        if (this_ptc->tfm != NULL) 
        {
            this_ptc->tfm->users_num--;
            
            if (this_ptc->tfm->users_num == 0) 
            {
                lbParticleEjectTransform(this_ptc->tfm);

                if (other_ptc == NULL) 
                {
                    if (next_ptc != sLBParticleStructsAllocLinks[bank_id])
                    {
                        next_ptc = sLBParticleStructsAllocLinks[bank_id];
                    }
                }
            }
        }
        this_ptc->next = sLBParticleStructsAllocFree;
        sLBParticleStructsAllocFree = this_ptc;
        gLBParticleStructsUsedNum--;

        return next_ptc;
    }
    if (this_ptc->flags & 4)
    {
        gen = this_ptc->gen;

        syGetSinCosUShort(sx1, cx1, this_ptc->gravity, angle_id);
        syGetSinCosUShort(sx2, cx2, this_ptc->friction, angle_id);
        
        sx1 *= (1.0F / 32768.0F);
        cx1 *= (1.0F / 32768.0F);
        sx2 *= (1.0F / 32768.0F);
        cx2 *= (1.0F / 32768.0F);

        this_ptc->vel.z += gen->generator_vars.unk_gen_vars.f;

        sp70 = ABSF(gen->unk_gen_0x38);
        
        syGetSinCosUShort(sx3, cx3, ABSF(gen->unk_gen_0x3C), angle_id_2);
        
        sp70 += this_ptc->vel.z * (sx3 / cx3);
        sp70 *= this_ptc->vel.y;
        
        this_ptc->vel.x += gen->gravity;

        syGetSinCosUShort(sx4, cx4, this_ptc->vel.x, angle_id);
        
        sp70 *= (1.0F / 32768.0F);

        /*
        f32 sp6C;     // f2
        f32 sx1, sx2; // sp5C, sp58
        f32 cx1, cx2; // f16=>sp54, f12=>sp50 
        f32 sx3, cx3; // f18, f0=>sp44
        */

        // Lots of trouble here...

        f0 = sp70 * cx4;
        f1 = sp70 * sx4;
        
        this_ptc->pos.x = ((f0 * cx2) + (this_ptc->vel.z * sx2)) + gen->pos.x;
        this_ptc->pos.y = ((-f0 * sx1 * sx2) + (f1 * cx1)) + (this_ptc->vel.z * sx1 * cx2) + gen->pos.y;
        this_ptc->pos.z = ((-f0 * cx1 * sx2) - (f1 * sx1)) + (this_ptc->vel.z * cx1 * cx2) + gen->pos.z;
    }
    else
    {
        if (this_ptc->flags & 1)
        {
            this_ptc->vel.y -= this_ptc->gravity;
        }
        if (this_ptc->flags & 2)
        {
            this_ptc->vel.x *= this_ptc->friction;
            this_ptc->vel.y *= this_ptc->friction;
            this_ptc->vel.z *= this_ptc->friction;
        }
        this_ptc->pos.x += this_ptc->vel.x;
        this_ptc->pos.y += this_ptc->vel.y;
        this_ptc->pos.z += this_ptc->vel.z;
    }
    if (this_ptc->flags & LBPARTICLE_FLAG_ATTACH)
    {
        svar1 = LBPARTICLE_GET_ATTACH_ID(this_ptc->flags);

        if (sLBParticleAttachDObjs[svar1] != NULL)
        {
            sLBParticleAttachDObjs[svar1]->translate.vec.f.x = this_ptc->pos.x;
            sLBParticleAttachDObjs[svar1]->translate.vec.f.y = this_ptc->pos.y;
            sLBParticleAttachDObjs[svar1]->translate.vec.f.z = this_ptc->pos.z;
        }
    }
    return this_ptc->next;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/lb/lbparticle/lbParticleUpdateStruct.s")
#endif

// 0x800D0C74
void lbParticleStructFuncRun(GObj *gobj)
{
	u32 flags = gobj->flags;
	s32 i;
	LBParticle *prev_ptc;
	LBParticle *current_ptc;
	LBParticle *next_ptc;

	for (i = 0; i < ARRAY_COUNT(sLBParticleStructsAllocLinks); i++, flags >>= 1)
	{
		if (flags & 0x10000)
		{
			continue;
		}
		prev_ptc = NULL;

		current_ptc = sLBParticleStructsAllocLinks[i];

		while (current_ptc != NULL)
		{
			next_ptc = lbParticleUpdateStruct(current_ptc, prev_ptc, i);

			if (current_ptc->next == next_ptc)
			{
				prev_ptc = current_ptc;
				current_ptc = next_ptc;
			}
			else current_ptc = next_ptc;
		}
	}
}

#ifdef NON_MATCHING
/* 
 * NONMATCHING: xh, xl, yh, yl, pos_x, pos_y and pos_z float reg and/or order swaps
 * This is likely related to control flow, because xl and yl are supposed to go into saved regs,
 * but they are instead placed in fv0 and fv1 (f0 and f2 respectively). xh and yh are however
 * correctly placed into the registers they belong in. The empty brackets are also suspicious.
 */

// 0x800D0D34
void LBParticleDrawTextures(GObj *gobj)
{
    LBParticle *ptc;
    void *prev_image, *prev_palette;
    s32 prev_ac, prev_alpha;
    s32 tlut;
    Mtx44f look_at_f;
    Mtx44f projection_f;
    u8 ac, alpha;
    s32 bank_id;
    void **p_palette;
    f32 pos_x, pos_y, pos_z;
    f32 tx, ty, tz;
    f32 pc0_magnitude;  // var_f14?
    f32 pc1_magnitude;  // var_f16?
    f32 tm;
    CObj *cobj;
    s32 s;              // sp210
    s32 t;              // sp20C
    f32 vscale0;        // sp208
    f32 vtrans0;        // sp204
    f32 vscale1;        // sp200
    f32 vtrans1;        // sp1FC
    f32 vscale2;        // sp1F8
    f32 vtrans2;        // sp1F4    
    s32 dsdx;           // sp1F0
    s32 dtdy;           // sp1EC
    s32 cms, cmt;
    s32 fmt, siz;
    s32 i;              // s2
    u32 j;              // sp1D4
    s32 width, height;
    f32 xh, yh;
    f32 xl, yl;
    void *image, *palette;
    u8 masks, maskt;
    f32 mx, my;

    cobj = CObjGetStruct(gGCCurrentCamera);

    for (i = 0; i < cobj->xobjs_num; i++)
    {
        switch (cobj->xobjs[i]->kind)
        {
            case nGCMatrixKindPerspFastF:
                syMatrixPerspFastF
                (
                    &projection_f,
                    NULL,
                    cobj->projection.persp.fovy,
                    cobj->projection.persp.aspect,
                    cobj->projection.persp.near,
                    cobj->projection.persp.far,
                    cobj->projection.persp.scale
                );
                break;
                
            case nGCMatrixKindPerspF:
                syMatrixPerspF
                (
                    &projection_f,
                    NULL,
                    cobj->projection.persp.fovy,
                    cobj->projection.persp.aspect,
                    cobj->projection.persp.near,
                    cobj->projection.persp.far,
                    cobj->projection.persp.scale
                );
                break;

			case nGCMatrixKindOrtho:
				syMatrixOrthoF
                (
                    &projection_f,
                    cobj->projection.ortho.l,
                    cobj->projection.ortho.r,
                    cobj->projection.ortho.b,
                    cobj->projection.ortho.t,
                    cobj->projection.ortho.n,
                    cobj->projection.ortho.f,
                    cobj->projection.ortho.scale
                );
                break;
                
            case 6:
            case 7:
            case 12:
            case 13:
                syMatrixLookAtF
                (
                    &look_at_f,
                    cobj->vec.eye.x,
                    cobj->vec.eye.y,
                    cobj->vec.eye.z,
                    cobj->vec.at.x,
                    cobj->vec.at.y,
                    cobj->vec.at.z,
                    cobj->vec.up.x,
                    cobj->vec.up.y,
                    cobj->vec.up.z
                );
                break;
                
            case 8:
            case 9:
            case 14:
            case 15:
                syMatrixModLookAtF
                (
                    &look_at_f,
                    cobj->vec.eye.x,
                    cobj->vec.eye.y,
                    cobj->vec.eye.z,
                    cobj->vec.at.x,
                    cobj->vec.at.y,
                    cobj->vec.at.z,
                    cobj->vec.up.x,
                    0.0F,
                    1.0F,
                    0.0F
                );
                break;
                
            case 10:
            case 11:
            case 16:
            case 17:
                syMatrixModLookAtF
                (
                    &look_at_f,
                    cobj->vec.eye.x,
                    cobj->vec.eye.y,
                    cobj->vec.eye.z,
                    cobj->vec.at.x,
                    cobj->vec.at.y,
                    cobj->vec.at.z,
                    cobj->vec.up.x,
                    0.0F,
                    0.0F,
                    1.0F
                );
                break;
                
            default:
                syMatrixPerspFastF
                (
                    &projection_f,
                    NULL,
                    cobj->projection.persp.fovy,
                    cobj->projection.persp.aspect,
                    cobj->projection.persp.near,
                    cobj->projection.persp.far,
                    cobj->projection.persp.scale
                );
                syMatrixLookAtF
                (
                    &look_at_f,
                    cobj->vec.eye.x,
                    cobj->vec.eye.y,
                    cobj->vec.eye.z,
                    cobj->vec.at.x,
                    cobj->vec.at.y,
                    cobj->vec.at.z,
                    cobj->vec.up.x,
                    cobj->vec.up.y,
                    cobj->vec.up.z
                );
                break;
        }
    }
    if (cobj->xobjs_num != 0)
    {
        guMtxCatF(look_at_f, projection_f, projection_f);
        
        vscale0 = cobj->viewport.vp.vscale[0];
        vscale1 = -cobj->viewport.vp.vscale[1];
        vscale2 = cobj->viewport.vp.vscale[2];
        
        vtrans0 = cobj->viewport.vp.vtrans[0];
        vtrans1 = cobj->viewport.vp.vtrans[1];
        vtrans2 = cobj->viewport.vp.vtrans[2];
    }
    else
    {
        vscale0 = cobj->viewport.vp.vscale[0];
        vscale1 = -cobj->viewport.vp.vscale[1];
        vscale2 = cobj->viewport.vp.vscale[2];
        
        vtrans0 = cobj->viewport.vp.vtrans[0];
        vtrans1 = cobj->viewport.vp.vtrans[1];
        vtrans2 = cobj->viewport.vp.vtrans[2];
        
        guMtxIdentF(projection_f);

        projection_f[0][0] = 1.0F / vscale0;
        projection_f[1][1] = 1.0F / vscale1;
        projection_f[2][2] = -1.0F / vscale2;

        projection_f[3][0] = -vtrans0 / vscale0;
        projection_f[3][1] = -vtrans1 / vscale1;
        projection_f[3][2] = vtrans2 / vscale2;
    }
    pc0_magnitude = sqrtf(SQUARE(projection_f[0][0]) + SQUARE(projection_f[1][0]) + SQUARE(projection_f[2][0]));
    pc1_magnitude = sqrtf(SQUARE(projection_f[0][1]) + SQUARE(projection_f[1][1]) + SQUARE(projection_f[2][1]));
    
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gDPSetTexturePersp(gSYTaskmanDLHeads[0]++, G_TP_NONE);
    gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PRIM);
    gDPSetColorDither(gSYTaskmanDLHeads[0]++, G_CD_MAGICSQ | dLBParticleColorDitherMode);
    gDPSetAlphaDither(gSYTaskmanDLHeads[0]++, G_AD_PATTERN | dLBParticleAlphaDitherMode);

    prev_image = NULL;
    prev_palette = NULL;

    prev_ac = -1;
    prev_alpha = -1;
    tlut = -1;
    
    dLBParticleCurrentTransformID++;
    
    for (j = 0; j < ARRAY_COUNT(sLBParticleStructsAllocLinks); j++)
    {
        if (gobj->camera_mask & (1 << j))
        {
            for (ptc = sLBParticleStructsAllocLinks[j]; ptc != NULL; ptc = ptc->next)
            {
                if (ptc->size != 0.0F)
                {
                    pos_x = ptc->pos.x;
                    pos_y = ptc->pos.y;
                    pos_z = ptc->pos.z;
                    
                    if (ptc->tfm != NULL)
                    {
                        if (ptc->tfm->transform_id != dLBParticleCurrentTransformID)
                        {
							if (ptc->tfm->transform_status != nLBTransformStatusFinished)
							{
                                syMatrixTraRotRpyRScaF
                                (
                                    &ptc->tfm->affine,
                                    ptc->tfm->translate.x,
                                    ptc->tfm->translate.y,
                                    ptc->tfm->translate.z,
                                    ptc->tfm->rotate.x,
                                    ptc->tfm->rotate.y,
                                    ptc->tfm->rotate.z,
                                    ptc->tfm->scale.x,
                                    ptc->tfm->scale.y,
                                    ptc->tfm->scale.z
                                );
                            }
							if (ptc->tfm->transform_status == nLBTransformStatusReady)
							{
								ptc->tfm->transform_status = nLBTransformStatusFinished;
							}
                            guMtxCatF(ptc->tfm->affine, projection_f, ptc->tfm->projection);
                            
                            ptc->tfm->pc0_magnitude = sqrtf
                            (
                                SQUARE(ptc->tfm->projection[0][0]) +
                                SQUARE(ptc->tfm->projection[1][0]) +
                                SQUARE(ptc->tfm->projection[2][0])
                            );
                            ptc->tfm->pc1_magnitude = sqrtf
                            (
                                SQUARE(ptc->tfm->projection[0][1]) +
                                SQUARE(ptc->tfm->projection[1][1]) +
                                SQUARE(ptc->tfm->projection[2][1])
                            );
                            ptc->tfm->transform_id = dLBParticleCurrentTransformID;
                        }
                        s = (ptc->tfm->affine[0][0] >= 0.0F) ? 0 : -1;
                        t = (ptc->tfm->affine[1][1] >= 0.0F) ? 0 : -1;
                        
                        mx = ptc->tfm->pc0_magnitude;
                        my = ptc->tfm->pc1_magnitude;
                        
                        tx = ((ptc->tfm->projection[0][0] * pos_x) + (ptc->tfm->projection[1][0] * pos_y) + (ptc->tfm->projection[2][0] * pos_z)) + ptc->tfm->projection[3][0];
                        ty = ((ptc->tfm->projection[0][1] * pos_x) + (ptc->tfm->projection[1][1] * pos_y) + (ptc->tfm->projection[2][1] * pos_z)) + ptc->tfm->projection[3][1];
                        tz = ((ptc->tfm->projection[0][2] * pos_x) + (ptc->tfm->projection[1][2] * pos_y) + (ptc->tfm->projection[2][2] * pos_z)) + ptc->tfm->projection[3][2];
                        tm = ((ptc->tfm->projection[0][3] * pos_x) + (ptc->tfm->projection[1][3] * pos_y) + (ptc->tfm->projection[2][3] * pos_z)) + ptc->tfm->projection[3][3];
                    }
                    else
                    {
                        s = t = 0;
                        
                        mx = pc0_magnitude;
                        my = pc1_magnitude;
                        
                        tx = ((projection_f[0][0] * pos_x) + (projection_f[1][0] * pos_y) + (projection_f[2][0] * pos_z)) + projection_f[3][0];
                        ty = ((projection_f[0][1] * pos_x) + (projection_f[1][1] * pos_y) + (projection_f[2][1] * pos_z)) + projection_f[3][1];
                        tz = ((projection_f[0][2] * pos_x) + (projection_f[1][2] * pos_y) + (projection_f[2][2] * pos_z)) + projection_f[3][2];
                        tm = ((projection_f[0][3] * pos_x) + (projection_f[1][3] * pos_y) + (projection_f[2][3] * pos_z)) + projection_f[3][3];
                    }
                    if (tm == 0.0F)
                    {
                        // uh huh
                    }
                    else
                    {
                        tm = 1.0F / tm;
                
                        tx *= tm;
                        ty *= tm;
                        tz *= tm;
                        
                        if
                        (
                            (tx < -1.0F) || (tx > 1.0F) ||
                            (ty < -1.0F) || (ty > 1.0F) ||
                            (tz < +0.0F) || (tz > 1.0F)
                        )
                        {
                            // uh huh
                        }
                        else
                        {
                            tm *= ptc->size;

                            mx = tm * mx;
                            xh = mx + tx;
                            
                            my = tm * my;
                            yh = my + ty;

                            tx = tx * vscale0 + vtrans0;
                            xh = xh * vscale0 + vtrans0;
                            
                            if (tx < xh)
                            {
                                xh = xh;
                                xl = tx - (xh - tx);
                            }
                            else
                            {
                                xl = xh;
                                xh = tx - (xh - tx);
                            }
                            ty = ty * vscale1 + vtrans1;
                            yh = yh * vscale1 + vtrans1;
                            
                            if (ty < yh)
                            {
                                yh = yh;
                                yl = ty - (yh - ty);
                            }
                            else
                            {
                                yl = yh;
                                yh = ty - (yh - ty);
                            }
                            tz = tz * vscale2 + vtrans2;
                            
                            bank_id = ptc->bank_id & 7;

                            fmt = sLBParticleTextureBanks[bank_id][ptc->texture_id]->fmt;
                            siz = sLBParticleTextureBanks[bank_id][ptc->texture_id]->siz;
                            
                            width = sLBParticleTextureBanks[bank_id][ptc->texture_id]->width;
                            height = sLBParticleTextureBanks[bank_id][ptc->texture_id]->height;
                            
                            image = sLBParticleTextureBanks[bank_id][ptc->texture_id]->data[ptc->data_id];
                            
                            if (fmt == G_IM_FMT_CI)
                            {
                                p_palette = &sLBParticleTextureBanks[bank_id][ptc->texture_id]->data[sLBParticleTextureBanks[bank_id][ptc->texture_id]->count];
                                
                                palette = (!(ptc->flags & 0x10)) ? p_palette[ptc->data_id] : p_palette[0];
                            }
                            dsdx = (width * 4096.0F) / (xh - xl);
                            dtdy = (height * 4096.0F) / (yh - yl);
                
                            if (s < 0)
                            {
                                s = width * 32;
                                dsdx = -dsdx;
                            }
                            if (t < 0)
                            {
                                t = height * 32;
                                dtdy = -dtdy;
                            }
							if (ptc->flags & LBPARTICLE_FLAG_MASKS)
							{
                                dsdx *= 2;
                                cms = 1;
                                
                                switch (width)
                                {
                                case 2:
                                    masks = 1;
                                    break;
                                    
                                case 4:
                                    masks = 2;
                                    break;
                                    
                                case 8:
                                    masks = 3;
                                    break;
                                    
                                case 16:
                                    masks = 4;
                                    break;
                                    
                                case 32:
                                    masks = 5;
                                    break;
                                    
                                case 64:
                                    masks = 6;
                                    break;
                                    
                                case 128:
                                    masks = 7;
                                    break;
                                    
                                case 256:
                                    masks = 8;
                                    break;

                                default:
                                    masks = 0;
                                    break;
                                }
                            }
                            else
                            {
                                cms = 2;
                                masks = 0;
                            }
                            if (ptc->flags & LBPARTICLE_FLAG_MASKT)
                            {
                                dtdy *= 2;
                                cmt = 1;
                                
                                switch (height)
                                {
                                case 2:
                                    maskt = 1;
                                    break;
                                    
                                case 4:
                                    maskt = 2;
                                    break;
                                    
                                case 8:
                                    maskt = 3;
                                    break;
                                    
                                case 16:
                                    maskt = 4;
                                    break;
                                    
                                case 32:
                                    maskt = 5;
                                    break;
                                    
                                case 64:
                                    maskt = 6;
                                    break;
                                    
                                case 128:
                                    maskt = 7;
                                    break;
                                    
                                case 256:
                                    maskt = 8;
                                    break;
                                    
                                default: 
                                    maskt = 0;
                                    break;
                                }
                            }
                            else
                            {
                                cmt = 2;
                                maskt = 0;
                            }
                            if (fmt == G_IM_FMT_CI)
                            {
                                if (palette != prev_palette)
                                {
                                    gDPLoadTLUT_pal256(gSYTaskmanDLHeads[0]++, palette);
                                    
                                    prev_palette = palette;
                                }
                                if (tlut != 1)
                                {
                                    gDPSetTextureLUT(gSYTaskmanDLHeads[0]++, G_TT_RGBA16);
                                    
                                    tlut = 1;
                                }
                            }
                            else if (tlut != 0)
                            {
                                gDPSetTextureLUT(gSYTaskmanDLHeads[0]++, G_TT_NONE);
                                
                                tlut = 0;
                            }
                            if (image != prev_image)
                            {
                                switch (siz)
                                {
                                case G_IM_SIZ_4b:
                                    gDPLoadTextureBlock_4b
                                    (
                                        gSYTaskmanDLHeads[0]++,
                                        image,
                                        fmt,
                                        width,
                                        height,
                                        0,
                                        cms,
                                        cmt,
                                        masks,
                                        maskt,
                                        G_TX_NOLOD,
                                        G_TX_NOLOD
                                    );
                                    if ((width * height) >= 4096)
                                    {
                                        prev_palette = NULL;
                                    }
                                    break;
                                    
                                case G_IM_SIZ_8b:
                                    gDPLoadTextureBlock
                                    (
                                        gSYTaskmanDLHeads[0]++,
                                        image,
                                        fmt,
                                        G_IM_SIZ_8b,
                                        width,
                                        height,
                                        0,
                                        cms,
                                        cmt,
                                        masks,
                                        maskt,
                                        G_TX_NOLOD,
                                        G_TX_NOLOD
                                    );
                                    if ((width * height) >= 2048)
                                    {
                                        prev_palette = NULL;
                                    }
                                    break;
                                    
                                case G_IM_SIZ_16b:
                                    gDPLoadTextureBlock
                                    (
                                        gSYTaskmanDLHeads[0]++,
                                        image,
                                        fmt,
                                        G_IM_SIZ_16b,
                                        width,
                                        height,
                                        0,
                                        cms,
                                        cmt,
                                        masks,
                                        maskt,
                                        G_TX_NOLOD,
                                        G_TX_NOLOD
                                    );
                                    if ((width * height) >= 1024)
                                    {
                                        prev_palette = NULL;
                                    }
                                    break;
                                    
                                case G_IM_SIZ_32b:
                                    gDPLoadTextureBlock
                                    (
                                        gSYTaskmanDLHeads[0]++,
                                        image,
                                        fmt,
                                        G_IM_SIZ_32b,
                                        width,
                                        height,
                                        0,
                                        cms,
                                        cmt,
                                        masks,
                                        maskt,
                                        G_TX_NOLOD,
                                        G_TX_NOLOD
                                    );
                                    if ((width * height) >= 512)
                                    {
                                        prev_palette = NULL;
                                    }
                                    break;
                                    
                                default:
                                    break;
                                }
                                prev_image = image;
                            }
                            gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, ptc->primcolor.r, ptc->primcolor.g, ptc->primcolor.b, ptc->primcolor.a);
                
                            if (ptc->flags & LBPARTICLE_FLAG_ENVCOLOR)
                            {
                                gDPSetEnvColor(gSYTaskmanDLHeads[0]++, ptc->envcolor.r, ptc->envcolor.g, ptc->envcolor.b, ptc->envcolor.a);
                                
                                gDPSetCombineLERP
                                (
                                    gSYTaskmanDLHeads[0]++,
                                    PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,
                                    PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT
                                );
                            }
                            else if (ptc->flags & LBPARTICLE_FLAG_NOISE)
                            {
                                gDPSetCombineLERP
                                (
                                    gSYTaskmanDLHeads[0]++,
                                    NOISE, 0, TEXEL0, 0, TEXEL0, 0, PRIMITIVE, 0,
                                    NOISE, 0, TEXEL0, 0, TEXEL0, 0, PRIMITIVE, 0
                                );
                            }
                            else gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
                            
                            if (ptc->flags & LBPARTICLE_FLAG_DITHER)
                            {
                                ac = G_AC_DITHER;
                            }
                            else
                            {
                                ac = G_AC_THRESHOLD;

								if (ptc->flags & LBPARTICLE_FLAG_ALPHABLEND)
								{
                                    alpha = ptc->envcolor.a;
                                }
                                else alpha = 0x08;
                                
                                if (prev_alpha != alpha)
                                {
                                    gDPSetBlendColor(gSYTaskmanDLHeads[0]++, 0x00, 0x00, 0x00, alpha);
                
                                    prev_alpha = alpha;
                                }
                            }
                            if (prev_ac != ac)
                            {
                                gDPSetAlphaCompare(gSYTaskmanDLHeads[0]++, ac);
                                
                                prev_ac = ac;
                            }
                            gDPSetPrimDepth(gSYTaskmanDLHeads[0]++, (s32) (tz * 32.0F), 0);
                
                            gSPScisTextureRectangle(gSYTaskmanDLHeads[0]++, xl, yl, xh, yh, G_TX_RENDERTILE, s, t, dsdx, dtdy);
                        }
                    }
                }
            }
        }
    }
    if (tlut != 0)
    {
        gDPSetTextureLUT(gSYTaskmanDLHeads[0]++, G_TT_NONE);
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/lb/lbparticle/LBParticleDrawTextures.s")
#endif

// 0x800D2720
void lbParticleAddAttachDObj(s32 bank_id, DObj *dobj)
{
	if ((bank_id >= 1) && (bank_id <= ARRAY_COUNT(sLBParticleAttachDObjs)))
	{
		sLBParticleAttachDObjs[bank_id - 1] = dobj;
	}
}

// 0x800D2744
void lbParticleSetDitherModes(s32 colordither_mode, s32 alphadither_mode)
{
	dLBParticleColorDitherMode = colordither_mode;
	dLBParticleAlphaDitherMode = alphadither_mode;
}

// 0x800D2758
GObj* lbParticleAllocGenerators(s32 num)
{
	s32 i;

	sLBParticleGeneratorsAllocFree = sLBParticleGeneratorsQueued = NULL;

	for (i = num - 1; i >= 0; i--)
	{
		LBGenerator *gen = syTaskmanMalloc(sizeof(*gen), 0x4);

		if (gen == NULL)
		{
			return NULL;
		}
		gen->next = sLBParticleGeneratorsAllocFree;

		sLBParticleGeneratorsAllocFree = gen;
	}
	gLBParticleGeneratorsUsedNum = 0;
	D_ovl0_800D6450 = 0;

	return gcMakeGObjSPAfter(~0x6, lbParticleGeneratorFuncRun, 0, GOBJ_PRIORITY_DEFAULT);
}

// 0x800D27F8
void lbParticleGetPosVelDObj(Vec3f *pos, Vec3f *vel, DObj *dobj)
{
	Mtx44f dst;
	Mtx44f tmp;
	f32 x, y, z;

	guMtxIdentF(dst);

	do
	{
		if ((dobj->scale.vec.f.x != 1.0F) || (dobj->scale.vec.f.y != 1.0F) || (dobj->scale.vec.f.z != 1.0F))
		{
			syMatrixScaF(&tmp, dobj->scale.vec.f.x, dobj->scale.vec.f.y, dobj->scale.vec.f.z);
			guMtxCatF(dst, tmp, dst);
		}
		if ((dobj->rotate.vec.f.x != 0.0F) || (dobj->rotate.vec.f.y != 0.0F) || (dobj->rotate.vec.f.z != 0.0F))
		{
			syMatrixRotRpyRF(&tmp, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
			guMtxCatF(dst, tmp, dst);
		}
		if ((dobj->translate.vec.f.x != 0.0F) || (dobj->translate.vec.f.y != 0.0F) || (dobj->translate.vec.f.z != 0.0F))
		{
			syMatrixTraF(&tmp, dobj->translate.vec.f.x, dobj->translate.vec.f.y, dobj->translate.vec.f.z);
			guMtxCatF(dst, tmp, dst);
		}
		if (dobj->vec != NULL)
		{
			GCTranslate *translate = NULL;
			GCRotate *rotate = NULL;
			GCScale *scale = NULL;
			uintptr_t csr = (uintptr_t)dobj->vec->data;
			s32 i;

			for (i = 0; i < ARRAY_COUNT(dobj->vec->kinds); i++)
			{
				switch (dobj->vec->kinds[i])
				{
				case nGCDrawVecKindNone:
                    break;

				case nGCDrawVecKindTranslate:
					translate = (GCTranslate*)csr;
					csr += sizeof(*translate);
					break;

				case nGCDrawVecKindRotate:
					rotate = (GCRotate*)csr;
					csr += sizeof(*rotate);
					break;

				case nGCDrawVecKindScale:
					scale = (GCScale*)csr;
					csr += sizeof(*scale);
					break;
				}
			}
			if (scale != NULL)
			{
				if ((scale->vec.f.x != 1.0F) || (scale->vec.f.y != 1.0F) || (scale->vec.f.z != 1.0F))
				{
					syMatrixScaF(&tmp, scale->vec.f.x, scale->vec.f.y, scale->vec.f.z);
					guMtxCatF(dst, tmp, dst);
				}
			}
			if (rotate != NULL)
			{
				if ((rotate->vec.f.x != 0.0F) || (rotate->vec.f.y != 0.0F) || (rotate->vec.f.z != 0.0F))
				{
					syMatrixRotRpyRF(&tmp, rotate->vec.f.x, rotate->vec.f.y, rotate->vec.f.z);
					guMtxCatF(dst, tmp, dst);
				}
			}
			if (translate != NULL)
			{
				if ((translate->vec.f.x != 0.0F) || (translate->vec.f.y != 0.0F) || (translate->vec.f.z != 0.0F))
				{
					syMatrixTraF(&tmp, translate->vec.f.x, translate->vec.f.y, translate->vec.f.z);
					guMtxCatF(dst, tmp, dst);
				}
			}
		}
		dobj = dobj->parent;
	}
    while (dobj != DOBJ_PARENT_NULL);

	pos->x = dst[3][0];
	pos->y = dst[3][1];
	pos->z = dst[3][2];

	x = vel->x, y = vel->y, z = vel->z;

	guNormalize(&dst[0][0], &dst[1][0], &dst[2][0]);
	guNormalize(&dst[0][1], &dst[1][1], &dst[2][1]);
	guNormalize(&dst[0][2], &dst[1][2], &dst[2][2]);

	vel->x = (dst[0][0] * x) + (dst[1][0] * y) + (dst[2][0] * z);
	vel->y = (dst[0][1] * x) + (dst[1][1] * y) + (dst[2][1] * z);
	vel->z = (dst[0][2] * x) + (dst[1][2] * y) + (dst[2][2] * z);
}

#ifdef NON_MATCHING
/* 
 * NONMATCHING: move $a0, $s0 and move $a1, $s1 order swap around sLBParticleGeneratorProcDefault
 */

// 0x800D2C4C
void lbParticleGeneratorFuncRun(GObj *gobj)
{
    LBGenerator *gen, *next_gen;
    f32 pos_random;
    Vec3f pos;
    Vec3f vel;
    f32 zero;
    f32 temp_vel_x;
    f32 temp_vel_y;
    f32 temp_vel_z;
    f32 magnitude;
    f32 angle1;
    f32 angle2;
    f32 sin_angle1;
    f32 cos_angle1;
    f32 sin_angle2;
    f32 cos_angle2;
    f32 spEC;
    f32 vel_x;
    f32 vel_y;
    f32 vel_z;
    f32 pv0;
    s32 unused;
    f32 temp_f26;
    f32 pos_x;
    f32 pos_y;
    f32 pos_z;
    f32 pm1;
    f32 var_f20;
    f32 pv1;
    f32 spB8;
    f32 vmag;
    
    gen = sLBParticleGeneratorsQueued;
    sLBParticleGeneratorsLastProcessed = NULL;
    
    while (gen != NULL)
    {
            if (gobj->flags & (1 << ((gen->bank_id >> 3) + 0x10)))
            {
                sLBParticleGeneratorsLastProcessed = gen;

                gen = gen->next;

                continue;
            }
            if (gen->flags & LBPARTICLE_FLAG_PAUSE)
            {
                sLBParticleGeneratorsLastProcessed = gen;

                gen = gen->next;

                continue;
            }
            if (gen->unk_gen_0x40 < 0.0F)
            {
                gen->unk_gen_0x44 -= gen->unk_gen_0x40;
            }
            else gen->unk_gen_0x44 += (mtTrigGetRandomFloat() * gen->unk_gen_0x40);

            if (gen->unk_gen_0x44 >= 1.0F)
            {
                vel.x = gen->vel.x;
                vel.y = gen->vel.y;
                vel.z = gen->vel.z;

                if (gen->dobj != NULL)
                {
                    lbParticleGetPosVelDObj(&pos, &vel, gen->dobj);
                    
                    gen->pos.x = pos.x;
                    gen->pos.y = pos.y;
                    gen->pos.z = pos.z;
                }
                switch (gen->kind)
                {
                case 0:
                case 3:
                case 4:
                    pv0 = gen->generator_vars.rotate.base + (mtTrigGetRandomFloat() * (gen->generator_vars.rotate.target - gen->generator_vars.rotate.base));
                    spB8 = (gen->generator_vars.rotate.target - gen->generator_vars.rotate.base) / (s32) gen->unk_gen_0x44;
                    break;

                default:
                    pv0 = F_CST_DTOR32(360.0F) * mtTrigGetRandomFloat();
                    spB8 = F_CST_DTOR32(360.0F) / (s32) gen->unk_gen_0x44;
                    break;
                }
            }
            while (gen->unk_gen_0x44 >= 1.0F)
            {
                    switch (gen->kind)
                    {
                    case 0:
                    case 3:
                    case 4:
                        vel_x = vel.x;
                        vel_y = vel.y;
                        vel_z = vel.z;
                        
                        angle1 = atan2f(vel_y, vel_z);
                        
                        sin_angle1 = __sinf(angle1); // spFC
                        cos_angle1 = __cosf(angle1); // spF8

                        angle2 = atan2f(vel_x, (vel_y * sin_angle1) + (vel_z * cos_angle1));
                        
                        sin_angle2 = __sinf(angle2); // spF4
                        cos_angle2 = __cosf(angle2); // spF0
                        // spFC = sin_angle1;
                        magnitude = sqrtf(SQUARE(vel_x) + SQUARE(vel_y) + SQUARE(vel_z)); // sp108
                        
                        if (gen->unk_gen_0x38 < 0.0F)
                        {
                            vmag = pv1 = 1.0F;
                            var_f20 = -gen->unk_gen_0x38;
                        }
                        else
                        {
                            pv1 = vmag = mtTrigGetRandomFloat();

                            if (gen->kind != 0)
                            {
                                vmag = pv1 = sqrtf(pv1);
                            }
                            var_f20 = gen->unk_gen_0x38 * pv1;
                        }
                        if (gen->unk_gen_0x3C < 0.0F)
                        {
                            pv0 += spB8;
                            pv1 = -gen->unk_gen_0x3C;
                        }
                        else
                        {
                            pv0 = gen->generator_vars.rotate.base + (mtTrigGetRandomFloat() * (gen->generator_vars.rotate.target - gen->generator_vars.rotate.base));
                            pv1 *= gen->unk_gen_0x3C;
                        }
                        zero = 0.0F;
                        
                        spEC = __cosf(pv0) * var_f20;
                        temp_f26 = __sinf(pv0) * var_f20;
                        pm1 = __sinf(pv1) * magnitude;

                        vel_x = __cosf(pv0) * pm1;
                        vel_y = __sinf(pv0) * pm1;
                        vel_z = __cosf(pv1) * magnitude;

                        pos_x = (spEC * cos_angle2) + zero + gen->pos.x;
                        pos_y = (-spEC * sin_angle1 * sin_angle2) + (temp_f26 * cos_angle1) + zero + gen->pos.y;
                        pos_z = (-spEC * cos_angle1 * sin_angle2) - (temp_f26 * sin_angle1) + zero + gen->pos.z;

                        temp_vel_x = (vel_x * cos_angle2) + (vel_z * sin_angle2);
                        temp_vel_y = (-vel_x * sin_angle1 * sin_angle2) + (vel_y * cos_angle1) + (vel_z * sin_angle1 * cos_angle2);
                        temp_vel_z = (-vel_x * cos_angle1 * sin_angle2) - (vel_y * sin_angle1) + (vel_z * cos_angle1 * cos_angle2);

                        if (gen->kind == 3)
                        {
                            temp_vel_x *= vmag;
                            temp_vel_y *= vmag;
                            temp_vel_z *= vmag;
                        }
                        lbParticleMakeParam
                        (
                            gen->bank_id,
                            gen->flags,
                            gen->texture_id,
                            gen->bytecode,
                            gen->particle_lifetime,
                            pos_x,
                            pos_y,
                            pos_z,
                            temp_vel_x,
                            temp_vel_y,
                            temp_vel_z,
                            gen->size,
                            gen->gravity,
                            gen->friction,
                            0,
                            gen
                        );
                        break;
                        
                    case 1:
                        vel_x = vel.x;
                        vel_y = vel.y;
                        vel_z = vel.z;
                        
                        pos_random = mtTrigGetRandomFloat();

                        pos_x = gen->pos.x + (pos_random * (gen->generator_vars.move.x - gen->pos.x));
                        pos_y = gen->pos.y + (pos_random * (gen->generator_vars.move.y - gen->pos.y));
                        pos_z = gen->pos.z + (pos_random * (gen->generator_vars.move.z - gen->pos.z));
                        
                        lbParticleMakeParam
                        (
                            gen->bank_id,
                            gen->flags,
                            gen->texture_id,
                            gen->bytecode,
                            gen->particle_lifetime,
                            pos_x,
                            pos_y,
                            pos_z,
                            vel.x,
                            vel.y,
                            vel.z,
                            gen->size,
                            gen->gravity,
                            gen->friction,
                            0,
                            gen
                        );
                        break;
                        
                    case 2:
                        vel_x = vel.x;
                        vel_y = vel.y;
                        vel_z = vel.z;
                        
                        angle1 = atan2f(vel_y, vel_z);
                        sin_angle1 = __sinf(angle1);
                        cos_angle1 = __cosf(angle1);
                        // spF8 = cos_angle1;
                        angle2 = atan2f(vel_x, (vel_y * sin_angle1) + (vel_z * cos_angle1));
                        
                        magnitude = sqrtf(SQUARE(vel_x) + SQUARE(vel_y) + SQUARE(vel_z));
                        
                        pv1 = (gen->unk_gen_0x38 < 0.0F) ? 1.0F : mtTrigGetRandomFloat();

                        pv0 = (gen->unk_gen_0x3C < 0.0F) ? pv0 + spB8 : mtTrigGetRandomFloat() * F_CST_DTOR32(360.0F);

                        gen->generator_vars.unk_gen_vars.f = magnitude;

                        if
                        (
                            lbParticleMakeParam
                            (
                                gen->bank_id,
                                gen->flags | 0x4,
                                gen->texture_id,
                                gen->bytecode,
                                gen->particle_lifetime,
                                0,
                                0,
                                0,
                                pv0,
                                pv1,
                                0,
                                gen->size,
                                angle1,
                                angle2,
                                0,
                                gen
                            ) != NULL
                        )
                        {
                            gen->generator_vars.unk_gen_vars.halfword++;
                        }
                        break;
                        
                    default:
                        // OK seriously this order swap is ridiculous
                        if (sLBParticleGeneratorProcDefault != NULL)
                        {
                            sLBParticleGeneratorProcDefault(gen, &vel);
                        }
                        break;
                    }
                    gen->unk_gen_0x44 -= 1.0F;
            }
            if (gen->generator_lifetime != 0)
            {
                gen->generator_lifetime--;

                if (gen->generator_vars.rotate.target); // bruh
    
                if (gen->generator_lifetime == 0)
                {
                    if ((gen->kind == 2) && (gen->generator_vars.unk_gen_vars.halfword != 0))
                    {
                        gen->unk_gen_0x40 = 0.0F;
                        gen->generator_lifetime = 1;
                    }
                    else
                    {
                        if (sLBParticleGeneratorsLastProcessed == NULL)
                        {
                            sLBParticleGeneratorsQueued = gen->next;
                        }
                        else sLBParticleGeneratorsLastProcessed->next = gen->next;
                
                        next_gen = gen->next;
                
                        if (gen->tfm != NULL)
                        {
                            gen->tfm->users_num--;
                    
                            if (gen->tfm->users_num == 0)
                            {
                                lbParticleEjectTransform(gen->tfm);
                            }
                        }
                        gen->next = sLBParticleGeneratorsAllocFree;
                        sLBParticleGeneratorsAllocFree = gen;
                
                        gen = next_gen;
                
                        gLBParticleGeneratorsUsedNum--;

                        continue;
                    }
                }
            }
            sLBParticleGeneratorsLastProcessed = gen;

            gen = gen->next;
        }
    
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/lb/lbparticle/lbParticleGeneratorFuncRun.s")
#endif

// 0x800D353C
LBGenerator* lbParticleGetGenerator(void)
{
    LBGenerator *gen = sLBParticleGeneratorsAllocFree;
    
    if (sLBParticleGeneratorsAllocFree == NULL)
    {
        return NULL;
    }
    gLBParticleGeneratorsUsedNum++;
    
    if (D_ovl0_800D6450 < gLBParticleGeneratorsUsedNum)
    {
        D_ovl0_800D6450 = gLBParticleGeneratorsUsedNum;
    }
    sLBParticleGeneratorsAllocFree = gen->next;
    gen->next = sLBParticleGeneratorsQueued;
    sLBParticleGeneratorsQueued = gen;
    
    if (sLBParticleGeneratorsLastProcessed == NULL)
    {
        sLBParticleGeneratorsLastProcessed = gen;
    }
    gen->generator_id = ++dLBParticleCurrentGeneratorID;
    gen->tfm = NULL;
    
    return gen;
}

// 0x800D35DC
LBGenerator* lbParticleMakeGenerator(s32 bank_id, s32 script_id)
{
    LBGenerator *gen;
    s32 id = bank_id & 7;  
    s32 unused;
    
    if (id >= LBPARTICLE_BANKS_NUM_MAX)
    {
        return NULL;
    }
    if (script_id >= sLBParticleScriptBanksNum[id])
    {
        return NULL;
    }
    gen = lbParticleGetGenerator();

    if (gen != NULL)
    {   
        gen->kind = sLBParticleScriptBanks[id][script_id]->kind;
        gen->bank_id = bank_id;
        gen->flags = sLBParticleScriptBanks[id][script_id]->flags;
        gen->texture_id = sLBParticleScriptBanks[id][script_id]->texture_id;
        gen->particle_lifetime = sLBParticleScriptBanks[id][script_id]->particle_lifetime;
        gen->generator_lifetime = sLBParticleScriptBanks[id][script_id]->generator_lifetime;
        
        gen->pos.x = 0.0F;
        gen->pos.y = 0.0F;
        gen->pos.z = 0.0F;
        
        gen->vel.x = sLBParticleScriptBanks[id][script_id]->vel.x;
        gen->vel.y = sLBParticleScriptBanks[id][script_id]->vel.y;
        gen->vel.z = sLBParticleScriptBanks[id][script_id]->vel.z;
        
        gen->gravity = sLBParticleScriptBanks[id][script_id]->gravity;
        gen->friction = sLBParticleScriptBanks[id][script_id]->friction;
        gen->size = sLBParticleScriptBanks[id][script_id]->size;
        
        gen->bytecode = sLBParticleScriptBanks[id][script_id]->bytecode;
        
        gen->unk_gen_0x38 = sLBParticleScriptBanks[id][script_id]->unk_script_0x20;
        gen->unk_gen_0x3C = sLBParticleScriptBanks[id][script_id]->unk_script_0x24;
        gen->unk_gen_0x40 = sLBParticleScriptBanks[id][script_id]->unk_script_0x28;
        
        gen->unk_gen_0x44 = 0.0F;
        
        if (sLBParticleTextureBanks[id][sLBParticleScriptBanks[id][script_id]->texture_id]->flags != 0)
        {
            gen->flags |= 0x10;
        }
        gen->dobj = NULL;
        
        switch (gen->kind)
        {
        case 0:
        case 3:
        case 4:
            gen->generator_vars.rotate.base = 0;
            gen->generator_vars.rotate.target = F_CST_DTOR32(360.0F);
            break;
            
        case 1:
            gen->generator_vars.move.x = gen->pos.x + gen->vel.x;
            gen->generator_vars.move.y = gen->pos.y + gen->vel.y;
            gen->generator_vars.move.z = gen->pos.z + gen->vel.z;
            break;
            
        case 2:
            gen->generator_vars.unk_gen_vars.halfword = 0;
            break;
            
        default:
            if (sLBParticleGeneratorProcSetup != NULL)
            {
                sLBParticleGeneratorProcSetup(gen);
            }
            break;
        }
    }
    return gen;
}

// 0x800D3884
void lbParticleEjectGenerator(LBGenerator *this_gen)
{
    LBGenerator *prev_gen = NULL, *current_gen = sLBParticleGeneratorsQueued;
    
    while (current_gen != NULL)
    {
        if (current_gen == this_gen)
        {
            if ((this_gen->kind == 2) && (this_gen->generator_vars.unk_gen_vars.halfword != 0))
            {
                this_gen->unk_gen_0x40 = 0.0F;
                this_gen->generator_lifetime = 1;
                
                break;
            }
            if (prev_gen == NULL)
            {
                sLBParticleGeneratorsQueued = current_gen->next;
            }
            else prev_gen->next = current_gen->next;
            
            if (this_gen->tfm != NULL)
            {
                this_gen->tfm->users_num--;
                
                if (this_gen->tfm->users_num == 0)
                {
                    lbParticleEjectTransform(this_gen->tfm);
                }
            }
            current_gen->next = sLBParticleGeneratorsAllocFree;
            sLBParticleGeneratorsAllocFree = current_gen;
            gLBParticleGeneratorsUsedNum--;
            
            break;
        }
        prev_gen = current_gen;
        current_gen = current_gen->next;
    }
}

// 0x800D3978
void lbParticleEjectGeneratorAll(void)
{
	LBGenerator *current_gen = sLBParticleGeneratorsQueued;

	while (current_gen != NULL)
	{
		LBGenerator *next_gen = current_gen->next;

		lbParticleEjectGenerator(current_gen);

		current_gen = next_gen;
	}
}

// 0x800D39C0
void lbParticleSetGeneratorProcs(void (*proc_setup)(LBGenerator*), void (*proc_base)(LBGenerator*, Vec3f*))
{
	sLBParticleGeneratorProcSetup = proc_setup;
	sLBParticleGeneratorProcDefault = proc_base;
}

// 0x800D39D4
void lbParticleEjectStructID(u16 generator_id, s32 link_id)
{
    LBParticle *next_ptc;
    LBParticle *current_ptc;
    LBParticle *prev_ptc;

    LBGenerator *next_gen;
    LBGenerator *current_gen;
    LBGenerator *prev_gen;

    prev_ptc = NULL;
    current_ptc = sLBParticleStructsAllocLinks[link_id];
    
    while (current_ptc != NULL)
    {
        next_ptc = current_ptc->next;
            
        if (current_ptc->generator_id == generator_id)
        {
            if (prev_ptc == NULL)
            {
                sLBParticleStructsAllocLinks[link_id] = current_ptc->next;
            }
            else prev_ptc->next = current_ptc->next;
                
            if ((current_ptc->gen != NULL) && (current_ptc->flags & 0x4) && (current_ptc->gen->kind == 2))
            {
                current_ptc->gen->generator_vars.unk_gen_vars.halfword--;
            }
            if (current_ptc->tfm != NULL)
            {
                current_ptc->tfm->users_num--;
                    
                if (current_ptc->tfm->users_num == 0)
                {
                    lbParticleEjectTransform(current_ptc->tfm);
                }
            }
            current_ptc->next = sLBParticleStructsAllocFree;
            sLBParticleStructsAllocFree = current_ptc;
            gLBParticleStructsUsedNum--;
        }
        else prev_ptc = current_ptc;
            
        current_ptc = next_ptc;
    }
    prev_gen = NULL;
    current_gen = sLBParticleGeneratorsQueued;
    
    while (current_gen != NULL)
    {
        next_gen = current_gen->next;
        
        if (current_gen->generator_id == generator_id)
        {
            if ((current_gen->kind == 2) && (current_gen->generator_vars.unk_gen_vars.halfword != 0))
            {
                current_gen->unk_gen_0x40 = 0.0F;
                current_gen->generator_lifetime = 1;
                
                prev_gen = current_gen;
            }
            else
            {
                if (prev_gen == NULL)
                {
                    sLBParticleGeneratorsQueued = current_gen->next;
                }
                else prev_gen->next = current_gen->next;
            
                if (current_gen->tfm != NULL)
                {
                    current_gen->tfm->users_num--;
                
                    if (current_gen->tfm->users_num == 0)
                    {
                        lbParticleEjectTransform(current_gen->tfm);
                    }
                }
                current_gen->next = sLBParticleGeneratorsAllocFree;
                sLBParticleGeneratorsAllocFree = current_gen;
                gLBParticleGeneratorsUsedNum--;
            }
        }
        else prev_gen = current_gen;
        
        current_gen = next_gen;
    }
}

// 0x800D3BFC
void lbParticleEjectStructSelf(LBParticle *ptc)
{
	lbParticleEjectStructID(ptc->generator_id, ptc->bank_id >> 3);
}

// 0x800D3C28
void lbParticleEjectStructGenerator(LBGenerator *gen)
{
	lbParticleEjectStructID(gen->generator_id, gen->bank_id >> 3);
}

// 0x800D3C54
void lbParticleEjectGeneratorDObj(GObj *gobj)
{
	DObj *dobj;
	LBGenerator *current_gen, *next_gen;

	if (gobj->obj_kind == nGCCommonAppendDObj)
	{
		for (dobj = DObjGetStruct(gobj); dobj != NULL; dobj = gcGetTreeDObjNext(dobj))
		{
			for (current_gen = sLBParticleGeneratorsQueued; current_gen != NULL; current_gen = next_gen)
			{
				next_gen = current_gen->next;

				if (current_gen->dobj == dobj)
				{
					lbParticleEjectGenerator(current_gen);
				}
			}
		}
	}
}

// 0x800D3CE0
void lbParticleSetStructPosAll(f32 pos_x, f32 pos_y, f32 pos_z)
{
    LBGenerator *gen;
    s32 i;
    
    for (i = 0; i < ARRAY_COUNT(sLBParticleStructsAllocLinks); i++)
    {
        LBParticle *ptc = sLBParticleStructsAllocLinks[i];
        
        while (ptc != NULL)
        {
            ptc->pos.x = pos_x;
            ptc->pos.y = pos_y;
            ptc->pos.z = pos_z;

            ptc = ptc->next;
        }
    }
    gen = sLBParticleGeneratorsQueued;
    
    while (gen != NULL)
    {
        gen->pos.x = pos_x;
        gen->pos.y = pos_y;
        gen->pos.z = pos_z;

        gen = gen->next;
    }
}

// 0x800D3D64
void lbParticlePauseAllID(u16 generator_id, s32 link_id)
{
	LBParticle *ptc;
	LBGenerator *gen;

	for (ptc = sLBParticleStructsAllocLinks[link_id]; ptc != NULL; ptc = ptc->next)
	{
		if (ptc->generator_id == generator_id)
		{
			ptc->flags |= LBPARTICLE_FLAG_PAUSE;
		}
	}
	for (gen = sLBParticleGeneratorsQueued; gen != NULL; gen = gen->next)
	{
		if (gen->generator_id == generator_id)
		{
			gen->flags |= LBPARTICLE_FLAG_PAUSE;
		}
	}
}

// 0x800D3DE8
void lbParticleResumeAllID(u16 generator_id, s32 link_id)
{
	LBParticle *ptc;
	LBGenerator *gen;

	for (ptc = sLBParticleStructsAllocLinks[link_id]; ptc != NULL; ptc = ptc->next)
	{
		if (ptc->generator_id == generator_id)
		{
			ptc->flags &= ~LBPARTICLE_FLAG_PAUSE;
		}
	}
	for (gen = sLBParticleGeneratorsQueued; gen != NULL; gen = gen->next)
	{
		if (gen->generator_id == generator_id)
		{
			gen->flags &= ~LBPARTICLE_FLAG_PAUSE;
		}
	}
}
