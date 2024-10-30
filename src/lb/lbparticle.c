#include <lb/library.h>
#include <sys/hal_gu.h>

// Equivalent file in Pokémon Snap: 4D880.c

extern u16 gSinTable[0x800];

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
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800CE040
s32 lbParticleAllocTransforms(s32 num, size_t size)
{
	LBTransform *tfrm;
	s32 i;

	sLBParticleTransformsAllocFree = NULL;
	
	for (i = 0; i < num; i++)
	{
		tfrm = syTaskmanMalloc(size, 0x4);

		if (tfrm == NULL)
		{
			return i;
		}
		tfrm->next = sLBParticleTransformsAllocFree;
		sLBParticleTransformsAllocFree = tfrm;
	}
	gLBParticleTransformsUsedNum = 0;
	D_ovl0_800D6452 = 0;

	return i;
}

// 0x800CE0D8
LBTransform* lbParticleGetTransform(u8 status, u16 generator_id)
{
	LBTransform *tfrm = sLBParticleTransformsAllocFree;

	if (tfrm != NULL)
	{
        sLBParticleTransformsAllocFree = tfrm->next;
        tfrm->users_num = 1;
        tfrm->transform_id = dLBParticleCurrentTransformID;
        tfrm->proc_dead = NULL;

		tfrm->translate.x = tfrm->translate.y = tfrm->translate.z = 0.0F;
		tfrm->rotate.x = tfrm->rotate.y = tfrm->rotate.z = 0.0F;
		tfrm->scale.x = tfrm->scale.y = tfrm->scale.z = 1.0F;

		tfrm->transform_status = status;
		tfrm->generator_id = generator_id;

		gLBParticleTransformsUsedNum++;

		if (D_ovl0_800D6452 < gLBParticleTransformsUsedNum)
		{
			D_ovl0_800D6452 = gLBParticleTransformsUsedNum;
		}
	}
	return tfrm;
}

// 0x800CE188
void lbParticleEjectTransform(LBTransform *tfrm)
{
	if (tfrm->proc_dead != NULL)
	{
		tfrm->proc_dead(tfrm);
	}
	tfrm->next = sLBParticleTransformsAllocFree;
	sLBParticleTransformsAllocFree = tfrm;

	gLBParticleTransformsUsedNum--;
}

// 0x800CE1DC
LBTransform* lbParticleAddTransformForStruct(LBParticle *ptcl, u8 status)
{
    ptcl->tfrm = lbParticleGetTransform(status, ptcl->generator_id);

	return ptcl->tfrm;
}

// 0x800CE218
LBTransform* lbParticleAddTransformForGenerator(LBGenerator* gtor, u8 status)
{
	gtor->tfrm = lbParticleGetTransform(status, gtor->generator_id);

	return gtor->tfrm;
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
		/* By default, the scripts array is populated with the offsets of the scripts
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
	LBParticle *ptcl;

	sLBParticleStructsAllocFree = NULL;

	for (i = 0; i < ARRAY_COUNT(sLBParticleStructsAllocLinks); i++)
	{
		sLBParticleStructsAllocLinks[i] = NULL;
	}
	for (i = num - 1; i >= 0; i--)
	{
		ptcl = syTaskmanMalloc(sizeof(*ptcl), 4);

		if (ptcl == NULL)
		{
			return NULL;
		}
		ptcl->next = sLBParticleStructsAllocFree;
		sLBParticleStructsAllocFree = ptcl;
	}
	gLBParticleStructsUsedNum = 0;
	D_ovl0_800D644E = 0;

	if (gcFindGObjByID(-6) != NULL)
	{
		return NULL;
	}
	return gcMakeGObjSPAfter(-6, lbParticleStructFuncRun, 0, GOBJ_LINKORDER_DEFAULT);
}

// 0x800CE4E4
LBParticle* lbParticleMakeStruct
(
	LBParticle *this_ptcl,
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
	LBGenerator *gtor
)
{
	LBParticle *new_ptcl;
	s32 i;

    new_ptcl = sLBParticleStructsAllocFree;
    
    if (new_ptcl == NULL)
    {
        return NULL;
    }
    gLBParticleStructsUsedNum++;
    
    if (D_ovl0_800D644E < gLBParticleStructsUsedNum) 
    {
        D_ovl0_800D644E = gLBParticleStructsUsedNum;
    }
    if (gtor != NULL)
    {
        new_ptcl->generator_id = gtor->generator_id;
    } 
    else new_ptcl->generator_id = ++dLBParticleCurrentGeneratorID;

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
        new_ptcl->next = sLBParticleStructsAllocLinks[bank_id >> 3];
        sLBParticleStructsAllocLinks[bank_id >> 3] = new_ptcl;
    } 
    else 
    {
        new_ptcl->next = this_ptcl->next;
        this_ptcl->next = new_ptcl;
    }
    new_ptcl->bank_id = bank_id;
    new_ptcl->flags = flags;
    new_ptcl->texture_id = texture_id;

	new_ptcl->pos.x = pos_x;
	new_ptcl->pos.y = pos_y;
	new_ptcl->pos.z = pos_z;

    new_ptcl->vel.x = vel_x;
    new_ptcl->vel.y = vel_y;
    new_ptcl->vel.z = vel_z;
    
    new_ptcl->size = size;
    new_ptcl->gravity = gravity;
    new_ptcl->friction = friction;

    new_ptcl->lifetime = lifetime + 1;
    new_ptcl->bytecode_csr = new_ptcl->return_ptr = 0;
    
    new_ptcl->bytecode = bytecode;

    if (argF != FALSE) 
    { 
        new_ptcl->flags |= 0x10;
    }
    new_ptcl->bytecode_timer = (bytecode != NULL) ? 1 : 0;
    
    new_ptcl->data_id = 0;
    
    new_ptcl->primcolor.r = new_ptcl->primcolor.g = new_ptcl->primcolor.b = new_ptcl->primcolor.a = 0xFF;
    new_ptcl->envcolor.r = new_ptcl->envcolor.g = new_ptcl->envcolor.b = new_ptcl->envcolor.a = 0x00;
    
    new_ptcl->size_target_length = new_ptcl->target_primcolor_length = new_ptcl->target_envcolor_length = 0;
    
    new_ptcl->gtor = gtor;

	return new_ptcl;
}

// 0x800CE6B8
LBParticle* lbParticleMakeChildScriptID(LBParticle *ptcl, s32 bank_id, s32 script_id)
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
		ptcl,
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
	LBGenerator *gtor
)
{
	LBParticle *ptcl = lbParticleMakeStruct
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
		gtor
	);
	if (ptcl != NULL)
	{
		lbParticleUpdateStruct(ptcl, 0, bank_id >> 3);
	}
	return ptcl;
}

// 0x800CE870
LBParticle* lbParticleMakeCommon(s32 bank_id, s32 script_id)
{
	LBParticle *ptcl = lbParticleMakeChildScriptID(NULL, bank_id, script_id);

	if (ptcl != NULL)
	{
		lbParticleUpdateStruct(ptcl, NULL, bank_id >> 3);
	}
	return ptcl;
}

// 0x800CE8C0
LBParticle* lbParticleMakePosVel(s32 bank_id, s32 script_id, f32 pos_x, f32 pos_y, f32 pos_z, f32 vel_x, f32 vel_y, f32 vel_z)
{
	LBParticle *ptcl;
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

	ptcl = lbParticleMakeStruct
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
	if (ptcl != NULL)
	{
		lbParticleUpdateStruct(ptcl, 0, bank_id >> 3);
	}
	return ptcl;
}

// 0x800CE9E8
LBParticle* lbParticleMakeScriptID(s32 bank_id, s32 script_id)
{
	return lbParticleMakeChildScriptID(NULL, bank_id, script_id);
}

// 0x800CEA14
void LBParticleProcessStruct(LBParticle *ptcl)
{
	if (ptcl != NULL)
	{
		lbParticleUpdateStruct(ptcl, NULL, ptcl->bank_id >> 3);
	}
}

// 0x800CEA40
void lbParticleEjectStruct(LBParticle *this_ptcl)
{
	LBParticle *prev_ptcl, *current_ptcl;
	LBGenerator *gtor;
	s32 bank_id;

	bank_id = this_ptcl->bank_id >> 3;
	current_ptcl = sLBParticleStructsAllocLinks[bank_id];
	prev_ptcl = NULL;

	while (current_ptcl != NULL)
	{
		if (current_ptcl == this_ptcl)
		{
			if (prev_ptcl == NULL)
			{
				sLBParticleStructsAllocLinks[bank_id] = current_ptcl->next;
			}
			else prev_ptcl->next = current_ptcl->next;

			gtor = this_ptcl->gtor;

			if ((gtor != NULL) && (this_ptcl->flags & 4) && (gtor->kind == 2))
			{
				gtor->generator_vars.unk_gtor_vars.halfword--;
			}
			if (this_ptcl->tfrm != NULL)
			{
				this_ptcl->tfrm->users_num--;

				if (this_ptcl->tfrm->users_num == 0)
				{
					lbParticleEjectTransform(this_ptcl->tfrm);
				}
			}
			current_ptcl->next = sLBParticleStructsAllocFree;
			sLBParticleStructsAllocFree = current_ptcl;
			gLBParticleStructsUsedNum--;

			break;
		}
		prev_ptcl = current_ptcl;
		current_ptcl = current_ptcl->next;
	}
}

// 0x800CEB50 - unused? Eject all LBParticle structs
void lbParticleEjectStructAll(void)
{
	LBParticle *current_ptcl, *next_ptcl;
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sLBParticleStructsAllocLinks); i++)
	{
		current_ptcl = sLBParticleStructsAllocLinks[i];

		while (current_ptcl != NULL)
		{
			next_ptcl = current_ptcl->next;

			lbParticleEjectStruct(current_ptcl);

			current_ptcl = next_ptcl;
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
void lbParticleRotateVel(LBParticle *ptcl, f32 angle)
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
	
	vel.x = ptcl->vel.x;
	vel.y = ptcl->vel.y;
	vel.z = ptcl->vel.z;
	
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
	
	ptcl->vel.x = (vel.x * cos_yaw) + (cos_angle * sin_yaw);
	ptcl->vel.y = (((-vel.x * sin_pitch) * sin_yaw) + (vel.y * cos_pitch)) + ((cos_angle * sin_pitch) * cos_yaw);
	ptcl->vel.z = (((-vel.x * cos_pitch) * vel.z) - (vel.y * sin_pitch)) + ((cos_angle * cos_pitch) * cos_yaw);
}

// 0x800CEDBC
void lbParticleSetDistVelDObj(LBParticle *ptcl, DObj *dobj)
{
	f32 dx, dy, dz, dist;

	if (dobj == NULL)
	{
		return;
	}
	dx = dobj->translate.vec.f.x - ptcl->pos.x;
	dy = dobj->translate.vec.f.y - ptcl->pos.y;
	dz = dobj->translate.vec.f.z - ptcl->pos.z;

	dist = sqrtf(SQUARE(ptcl->vel.x) + SQUARE(ptcl->vel.y) + SQUARE(ptcl->vel.z));

	if ((SQUARE(dx) + SQUARE(dy) + SQUARE(dz)) != 0.0F)
	{
		dist /= sqrtf(SQUARE(dx) + SQUARE(dy) + SQUARE(dz));

		ptcl->vel.x = dx * dist;
		ptcl->vel.y = dy * dist;
		ptcl->vel.z = dz * dist;
	}
}

// 0x800CEEB8
void lbParticleAddDistVelMagDObj(LBParticle *ptcl, DObj *dobj, f32 magnitude)
{
	f32 dx, dy, dz, dist;

	if (dobj == NULL)
	{
		return;
	}
	dx = dobj->translate.vec.f.x - ptcl->pos.x;
	dy = dobj->translate.vec.f.y - ptcl->pos.y;
	dz = dobj->translate.vec.f.z - ptcl->pos.z;

	dist = SQUARE(dx) + SQUARE(dy) + SQUARE(dz);

	if (dist != 0.0F)
	{
		dist = magnitude / dist;

		ptcl->vel.x += dist * dx;
		ptcl->vel.y += dist * dy;
		ptcl->vel.z += dist * dz;
	}
}

#ifdef NON_MATCHING
// 0x800CEF4C - NONMATCHING: v0 VS v1 regswap in switch statement initialization + floats are a mess near the end of the function
LBParticle* lbParticleUpdateStruct(LBParticle *this_ptcl, LBParticle *other_ptcl, s32 bank_id)
{
    LBParticle *current_ptcl;
    LBParticle *next_ptcl;
    LBGenerator *gtor;
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
    
    if (this_ptcl->flags & LBPARTICLE_FLAG_PAUSE)
    {
        return this_ptcl->next;
    }
    if (this_ptcl->bytecode_timer != 0)
    {
        this_ptcl->bytecode_timer--;
        
        if (this_ptcl->bytecode_timer == 0)
        {
            csr = &this_ptcl->bytecode[this_ptcl->bytecode_csr];
            
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
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptcl->pos.x);
                        }
                        if (command & 2) 
                        { 
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptcl->pos.y);
                        }
                        if (command & 4)
                        { 
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptcl->pos.z);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ADDPOS:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptcl->pos.x += fvar1;
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptcl->pos.y += fvar1;
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptcl->pos.z += fvar1;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETVEL:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptcl->vel.x);
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptcl->vel.y);
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &this_ptcl->vel.z);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ADDVEL:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptcl->vel.x += fvar1;
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptcl->vel.y += fvar1;
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_ptcl->vel.z += fvar1;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETSIZELERP:
                        csr = lbParticleReadUShort(csr, &this_ptcl->size_target_length);
                        csr = lbParticleReadFloatBigEnd(csr, &this_ptcl->size_target);

                        if (this_ptcl->size_target_length == 1)
                        {
                            this_ptcl->size = this_ptcl->size_target;
                            this_ptcl->size_target_length = 0;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETFLAG:
                        this_ptcl->flags = *csr++;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETGRAVITY:
                        csr = lbParticleReadFloatBigEnd(csr, &this_ptcl->gravity);
                        
                        if (this_ptcl->gravity == 0.0F)
                        {
                            this_ptcl->flags &= ~LBPARTICLE_FLAG_GRAVITY;
                        }
                        else this_ptcl->flags |= LBPARTICLE_FLAG_GRAVITY;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETFRICTION:
                        csr = lbParticleReadFloatBigEnd(csr, &this_ptcl->friction);
                            
                        if (this_ptcl->friction == 1.0F)
                        {
                            this_ptcl->flags &= ~LBPARTICLE_FLAG_FRICTION;
                        }
                        else this_ptcl->flags |= LBPARTICLE_FLAG_FRICTION;
                        break;
                        
                    case LBPARTICLE_OPCODE_MAKESCRIPT:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        current_ptcl = lbParticleMakeChildScriptID(this_ptcl, this_ptcl->bank_id, svar1);
                            
                        if (current_ptcl != NULL)
                        {
                            current_ptcl->pos.x = this_ptcl->pos.x;
                            current_ptcl->pos.y = this_ptcl->pos.y;
                            current_ptcl->pos.z = this_ptcl->pos.z;
                            current_ptcl->generator_id = this_ptcl->generator_id;
                            current_ptcl->gtor = this_ptcl->gtor;
                            current_ptcl->tfrm = this_ptcl->tfrm;
                                
                            if (current_ptcl->tfrm != NULL)
                            {
                                current_ptcl->tfrm->users_num++;
                            }
                            lbParticleUpdateStruct(current_ptcl, this_ptcl, this_ptcl->bank_id >> 3);
                        }  
                        break;
                
                    case LBPARTICLE_OPCODE_MAKEGENERATOR:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        gtor = lbParticleMakeGenerator(this_ptcl->bank_id, svar1);
                            
                        if (gtor != NULL)
                        {
                            gtor->pos.x = this_ptcl->pos.x;
                            gtor->pos.y = this_ptcl->pos.y;
                            gtor->pos.z = this_ptcl->pos.z;
                            gtor->generator_id = this_ptcl->generator_id;
                            gtor->tfrm = this_ptcl->tfrm;
                                
                            if (gtor->tfrm != NULL)
                            {
                                gtor->tfrm->users_num++;
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

                        this_ptcl->lifetime = svar1 + (s32) (svar2 * mtTrigGetRandomFloat());
                        break;
                        
                    case LBPARTICLE_OPCODE_TRYDEADRAND:
                        svar1 = *csr++;
                        svar2 = mtTrigGetRandomFloat() * 100.0F;

                        if (svar1 < svar2)
                        {
                            break;
                        }
                        else this_ptcl->lifetime = 1;
                        goto loop_break;
                        
                    case LBPARTICLE_OPCODE_ADDVELRAND:    
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptcl->pos.x += fvar1 * mtTrigGetRandomFloat();

                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptcl->pos.y += fvar1 * mtTrigGetRandomFloat();

                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptcl->pos.z += fvar1 * mtTrigGetRandomFloat();
                        break;
                        
                    case LBPARTICLE_OPCODE_SETVELANGLE:
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        lbParticleRotateVel(this_ptcl, fvar1);
                        break;
                        
                    case LBPARTICLE_OPCODE_MAKERAND:                        
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        svar2 = *csr++;
                        svar2 <<= 8;
                        svar2 += *csr++;

                        svar1 += (s32) (svar2 * mtTrigGetRandomFloat());

                        current_ptcl = lbParticleMakeChildScriptID(this_ptcl, this_ptcl->bank_id, svar1);
                            
                        if (current_ptcl != NULL)
                        {
                            current_ptcl->pos.x = this_ptcl->pos.x;
                            current_ptcl->pos.y = this_ptcl->pos.y;
                            current_ptcl->pos.z = this_ptcl->pos.z;
                            current_ptcl->generator_id = this_ptcl->generator_id;
                            current_ptcl->gtor = this_ptcl->gtor;
                            current_ptcl->tfrm = this_ptcl->tfrm;

                            if (current_ptcl->tfrm != NULL)
                            {
                                current_ptcl->tfrm->users_num++;
                            }
                            lbParticleUpdateStruct(current_ptcl, this_ptcl, this_ptcl->bank_id >> 3);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_MULVEL: 
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            
                        this_ptcl->vel.x *= fvar1;
                        this_ptcl->vel.y *= fvar1;
                        this_ptcl->vel.z *= fvar1;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETSIZERAND:    
                        csr = lbParticleReadUShort(csr, &this_ptcl->size_target_length);
                        csr = lbParticleReadFloatBigEnd(csr, &this_ptcl->size_target);
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            
                        this_ptcl->size_target += fvar1 * mtTrigGetRandomFloat();
                            
                        if (this_ptcl->size_target_length == 1) 
                        {
                            this_ptcl->size = this_ptcl->size_target;
                            this_ptcl->size_target_length = 0;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ENVCOLOR:
                        this_ptcl->flags |= LBPARTICLE_FLAG_ENVCOLOR;
                        break;
                        
                    case LBPARTICLE_OPCODE_NOMASKST:
                        this_ptcl->flags &= ~(LBPARTICLE_FLAG_MASKT | LBPARTICLE_FLAG_MASKS);
                        break;
                        
                    case LBPARTICLE_OPCODE_MASKS:            
                        this_ptcl->flags &= ~LBPARTICLE_FLAG_MASKT;
                        this_ptcl->flags |= LBPARTICLE_FLAG_MASKS;
                        break;
                        
                    case LBPARTICLE_OPCODE_MASKT:
                        this_ptcl->flags &= ~LBPARTICLE_FLAG_MASKS;
                        this_ptcl->flags |= LBPARTICLE_FLAG_MASKT;
                        break;
                            
                    case LBPARTICLE_OPCODE_MASKST:
                        this_ptcl->flags |= (LBPARTICLE_FLAG_MASKT | LBPARTICLE_FLAG_MASKS);
                        break;
                        
                    case LBPARTICLE_OPCODE_ALPHABLEND:
                        this_ptcl->flags |= LBPARTICLE_FLAG_ALPHABLEND;
                        break;
                        
                    case LBPARTICLE_OPCODE_NODITHER:
                        this_ptcl->flags &= ~LBPARTICLE_FLAG_DITHER;
                        break;
                        
                    case LBPARTICLE_OPCODE_DITHER:
                        this_ptcl->flags |= LBPARTICLE_FLAG_DITHER;
                        break;
                    
                    case LBPARTICLE_OPCODE_NONOISE:
                        this_ptcl->flags |= LBPARTICLE_FLAG_NOISE;
                        break;
                        
                    case LBPARTICLE_OPCODE_NOISE:
                        this_ptcl->flags &= ~LBPARTICLE_FLAG_NOISE;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETDISTVEL:
                        svar1 = *csr++;
                        lbParticleSetDistVelDObj(this_ptcl, sLBParticleAttachDObjs[svar1 - 1]);
                        break;
                        
                    case LBPARTICLE_OPCODE_ADDDISTVELMAG:
                        svar1 = *csr++;
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        lbParticleAddDistVelMagDObj(this_ptcl, sLBParticleAttachDObjs[svar1 - 1], fvar1);
                        break;
                        
                    case LBPARTICLE_OPCODE_MAKEID:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        current_ptcl = lbParticleMakeChildScriptID(this_ptcl, this_ptcl->bank_id, svar1);

                        if (current_ptcl != NULL)
                        {
                            current_ptcl->pos.x = this_ptcl->pos.x;
                            current_ptcl->pos.y = this_ptcl->pos.y;
                            current_ptcl->pos.z = this_ptcl->pos.z;
                            current_ptcl->vel.x = this_ptcl->vel.x;
                            current_ptcl->vel.y = this_ptcl->vel.y;
                            current_ptcl->vel.z = this_ptcl->vel.z;
                            current_ptcl->generator_id = this_ptcl->generator_id;
                            current_ptcl->gtor = this_ptcl->gtor;
                            current_ptcl->tfrm = this_ptcl->tfrm;
                                
                            if (current_ptcl->tfrm != NULL)
                            {
                                current_ptcl->tfrm->users_num++;
                            }
                            lbParticleUpdateStruct(current_ptcl, this_ptcl, this_ptcl->bank_id >> 3);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_PRIMBLENDRAND:
                        fvar1 = *csr++;
                        this_ptcl->target_primcolor.r += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptcl->target_primcolor.g += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptcl->target_primcolor.b += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptcl->target_primcolor.a += fvar1 * mtTrigGetRandomFloat();
                            
                        if (this_ptcl->target_primcolor_length == 0)
                        {
                            // this has lwl and lwr, so maybe it's a struct?
                            this_ptcl->primcolor = this_ptcl->target_primcolor;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ENVBLENDRAND:
                        fvar1 = *csr++;
                        this_ptcl->target_envcolor.r += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptcl->target_envcolor.g += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptcl->target_envcolor.b += fvar1 * mtTrigGetRandomFloat();
                        fvar1 = *csr++;
                        this_ptcl->target_envcolor.a += fvar1 * mtTrigGetRandomFloat();

                        if (this_ptcl->target_envcolor_length == 0)
                        {
                            // this has lwl and lwr, so maybe it's a struct?
                            this_ptcl->envcolor = this_ptcl->target_envcolor;
                        }
                        break;
                        
                    case 0xBC:    
                        this_ptcl->data_id = *csr++;
                        fvar1 = *csr++;
                        this_ptcl->data_id += fvar1 * mtTrigGetRandomFloat();
                        break;
                        
                    case LBPARTICLE_OPCODE_SETVELMAG:
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        csr = lbParticleReadFloatBigEnd(csr, &fvar2);

                        fvar1 += fvar2 * mtTrigGetRandomFloat();

                        fvar2 = sqrtf(SQUARE(this_ptcl->vel.x) + SQUARE(this_ptcl->vel.y) + SQUARE(this_ptcl->vel.z));
                        
                        fvar1 /= fvar2;

                        this_ptcl->vel.x *= fvar1;
                        this_ptcl->vel.y *= fvar1;
                        this_ptcl->vel.z *= fvar1;
                        break;
                        
                    case LBPARTICLE_OPCODE_MULVELAXIS:    
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptcl->vel.x *= fvar1;
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptcl->vel.y *= fvar1;
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_ptcl->vel.z *= fvar1;
                        break;
                        
                        case LBPARTICLE_OPCODE_SETATTACHID:
                        svar1 = *csr++ - 1;
                        this_ptcl->flags |= LBPARTICLE_SET_ATTACH_ID(svar1);
                        break;
                        
                    case LBPARTICLE_OPCODE_SETPRIMBLEND:
                        csr  = lbParticleReadUShort(csr, &this_ptcl->target_primcolor_length);
                        this_ptcl->target_primcolor = this_ptcl->primcolor;
                            
                        if (command & 1)
                        {
                            this_ptcl->target_primcolor.r = *csr++;
                        }
                        if (command & 2)
                        {
                            this_ptcl->target_primcolor.g = *csr++;
                        }
                        if (command & 4)
                        {
                            this_ptcl->target_primcolor.b = *csr++;
                        }
                        if (command & 8)
                        {
                            this_ptcl->target_primcolor.a = *csr++;
                        }
                        if (this_ptcl->target_primcolor_length == 1)
                        {
                            this_ptcl->primcolor = this_ptcl->target_primcolor;
                            
                            this_ptcl->target_primcolor_length = 0;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETENVBLEND:
                        csr = lbParticleReadUShort(csr, &this_ptcl->target_envcolor_length);
                        this_ptcl->target_envcolor = this_ptcl->envcolor;
                            
                        if (command & 1)
                        {
                            this_ptcl->target_envcolor.r = *csr++;
                        }
                        if (command & 2)
                        {
                            this_ptcl->target_envcolor.g = *csr++;
                        }
                        if (command & 4)
                        {
                            this_ptcl->target_envcolor.b = *csr++;
                        }
                        if (command & 8)
                        {
                            this_ptcl->target_envcolor.a = *csr++;
                        }
                        if (this_ptcl->target_envcolor_length == 1)
                        {
                            this_ptcl->envcolor = this_ptcl->target_envcolor;
                            this_ptcl->target_envcolor_length = 0;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETLOOP:    
                        this_ptcl->loop_count = *csr++;
                        this_ptcl->loop_ptr = (u16) ((uintptr_t)csr - (uintptr_t)this_ptcl->bytecode);
                        break;
                        
                    case LBPARTICLE_OPCODE_LOOP:    
                        this_ptcl->loop_count--;
                            
                        if (this_ptcl->loop_count != 0)
                        {
                            csr = (u8*) (this_ptcl->bytecode + this_ptcl->loop_ptr);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETRETURN:            
                        this_ptcl->return_ptr = (u16) ((uintptr_t)csr - (uintptr_t)this_ptcl->bytecode);
                        break;
                        
                    case LBPARTICLE_OPCODE_RETURN:
                        csr = (u8*) (this_ptcl->bytecode + this_ptcl->return_ptr);
                        break;
                        
                    case LBPARTICLE_OPCODE_DEAD:
                    case LBPARTICLE_OPCODE_END:
                        this_ptcl->lifetime = 1;
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
                        this_ptcl->data_id = *csr++;
                    }
                }
            }
            while (bytecode_timer == 0);
            
        loop_break:
            bytecode_csr = (u8*) ((uintptr_t)csr - (uintptr_t)this_ptcl->bytecode);
            
            this_ptcl->bytecode_csr = bytecode_csr;
            this_ptcl->bytecode_timer = bytecode_timer;
        }
    }
    if (this_ptcl->size_target_length)
    {
        this_ptcl->size += (this_ptcl->size_target - this_ptcl->size) / this_ptcl->size_target_length;

        this_ptcl->size_target_length--;
    }
    if (this_ptcl->target_primcolor_length) 
    {
        this_ptcl->primcolor.r =
        ((this_ptcl->primcolor.r << 16) + ((this_ptcl->target_primcolor.r - this_ptcl->primcolor.r) * (65536 / this_ptcl->target_primcolor_length))) >> 16;

        this_ptcl->primcolor.g =
        ((this_ptcl->primcolor.g << 16) + ((this_ptcl->target_primcolor.g - this_ptcl->primcolor.g) * (65536 / this_ptcl->target_primcolor_length))) >> 16;

        this_ptcl->primcolor.b =
        ((this_ptcl->primcolor.b << 16) + ((this_ptcl->target_primcolor.b - this_ptcl->primcolor.b) * (65536 / this_ptcl->target_primcolor_length))) >> 16;

        this_ptcl->primcolor.a =
        ((this_ptcl->primcolor.a << 16) + ((this_ptcl->target_primcolor.a - this_ptcl->primcolor.a) * (65536 / this_ptcl->target_primcolor_length))) >> 16;

        this_ptcl->target_primcolor_length--;
    }
    if (this_ptcl->target_envcolor_length) 
    {
        this_ptcl->envcolor.r =
        ((this_ptcl->envcolor.r << 16) + ((this_ptcl->target_envcolor.r - this_ptcl->envcolor.r) * (65536 / this_ptcl->target_envcolor_length))) >> 16;

        this_ptcl->envcolor.g =
        ((this_ptcl->envcolor.g << 16) + ((this_ptcl->target_envcolor.g - this_ptcl->envcolor.g) * (65536 / this_ptcl->target_envcolor_length))) >> 16;

        this_ptcl->envcolor.b =
        ((this_ptcl->envcolor.b << 16) + ((this_ptcl->target_envcolor.b - this_ptcl->envcolor.b) * (65536 / this_ptcl->target_envcolor_length))) >> 16;

        this_ptcl->envcolor.a =
        ((this_ptcl->envcolor.a << 16) + ((this_ptcl->target_envcolor.a - this_ptcl->envcolor.a) * (65536 / this_ptcl->target_envcolor_length))) >> 16;
            
        this_ptcl->target_envcolor_length--;        
    }
    this_ptcl->lifetime--;
    
    if (this_ptcl->lifetime == 0)
    {
        if (other_ptcl == NULL)
        {
            sLBParticleStructsAllocLinks[bank_id] = this_ptcl->next;
        }
        else other_ptcl->next = this_ptcl->next;
        
        next_ptcl = this_ptcl->next;
        
        if ((this_ptcl->gtor != NULL) && (this_ptcl->flags & 0x4) && (this_ptcl->gtor->kind == 2))
        {
            this_ptcl->gtor->generator_vars.unk_gtor_vars.halfword--;
        }
        if (this_ptcl->tfrm != NULL) 
        {
            this_ptcl->tfrm->users_num--;
            
            if (this_ptcl->tfrm->users_num == 0) 
            {
                lbParticleEjectTransform(this_ptcl->tfrm);

                if (other_ptcl == NULL) 
                {
                    if (next_ptcl != sLBParticleStructsAllocLinks[bank_id])
                    {
                        next_ptcl = sLBParticleStructsAllocLinks[bank_id];
                    }
                }
            }
        }
        this_ptcl->next = sLBParticleStructsAllocFree;
        sLBParticleStructsAllocFree = this_ptcl;
        gLBParticleStructsUsedNum--;

        return next_ptcl;
    }
    if (this_ptcl->flags & 4)
    {
        gtor = this_ptcl->gtor;

        lbGetSinCosUShort(sx1, cx1, this_ptcl->gravity, angle_id);
        lbGetSinCosUShort(sx2, cx2, this_ptcl->friction, angle_id);
        
        sx1 *= (1.0F / 32768.0F);
        cx1 *= (1.0F / 32768.0F);
        sx2 *= (1.0F / 32768.0F);
        cx2 *= (1.0F / 32768.0F);

        this_ptcl->vel.z += gtor->generator_vars.unk_gtor_vars.f;

        sp70 = ABSF(gtor->unk_gtor_0x38);
        
        lbGetSinCosUShort(sx3, cx3, ABSF(gtor->unk_gtor_0x3C), angle_id_2);
        
        sp70 += this_ptcl->vel.z * (sx3 / cx3);
        sp70 *= this_ptcl->vel.y;
        
        this_ptcl->vel.x += gtor->gravity;

        lbGetSinCosUShort(sx4, cx4, this_ptcl->vel.x, angle_id);
        
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
        
        this_ptcl->pos.x = ((f0 * cx2) + (this_ptcl->vel.z * sx2)) + gtor->pos.x;
        this_ptcl->pos.y = ((-f0 * sx1 * sx2) + (f1 * cx1)) + (this_ptcl->vel.z * sx1 * cx2) + gtor->pos.y;
        this_ptcl->pos.z = ((-f0 * cx1 * sx2) - (f1 * sx1)) + (this_ptcl->vel.z * cx1 * cx2) + gtor->pos.z;
    }
    else
    {
        if (this_ptcl->flags & 1)
        {
            this_ptcl->vel.y -= this_ptcl->gravity;
        }
        if (this_ptcl->flags & 2)
        {
            this_ptcl->vel.x *= this_ptcl->friction;
            this_ptcl->vel.y *= this_ptcl->friction;
            this_ptcl->vel.z *= this_ptcl->friction;
        }
        this_ptcl->pos.x += this_ptcl->vel.x;
        this_ptcl->pos.y += this_ptcl->vel.y;
        this_ptcl->pos.z += this_ptcl->vel.z;
    }
    if (this_ptcl->flags & LBPARTICLE_FLAG_ATTACH)
    {
        svar1 = LBPARTICLE_GET_ATTACH_ID(this_ptcl->flags);

        if (sLBParticleAttachDObjs[svar1] != NULL)
        {
            sLBParticleAttachDObjs[svar1]->translate.vec.f.x = this_ptcl->pos.x;
            sLBParticleAttachDObjs[svar1]->translate.vec.f.y = this_ptcl->pos.y;
            sLBParticleAttachDObjs[svar1]->translate.vec.f.z = this_ptcl->pos.z;
        }
    }
    return this_ptcl->next;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/lb/lbparticle/lbParticleUpdateStruct.s")
#endif

// 0x800D0C74
void lbParticleStructFuncRun(GObj *gobj)
{
	u32 flags = gobj->flags;
	s32 i;
	LBParticle *prev_ptcl;
	LBParticle *current_ptcl;
	LBParticle *next_ptcl;

	for (i = 0; i < ARRAY_COUNT(sLBParticleStructsAllocLinks); i++, flags >>= 1)
	{
		if (flags & 0x10000)
		{
			continue;
		}
		prev_ptcl = NULL;

		current_ptcl = sLBParticleStructsAllocLinks[i];

		while (current_ptcl != NULL)
		{
			next_ptcl = lbParticleUpdateStruct(current_ptcl, prev_ptcl, i);

			if (current_ptcl->next == next_ptcl)
			{
				prev_ptcl = current_ptcl;
				current_ptcl = next_ptcl;
			}
			else current_ptcl = next_ptcl;
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
    LBParticle *ptcl;
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
            case nGCTransformPerspFastF:
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
                
            case nGCTransformPerspF:
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

			case nGCTransformOrtho:
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
        if (gobj->cobj_mask & (1 << j))
        {
            for (ptcl = sLBParticleStructsAllocLinks[j]; ptcl != NULL; ptcl = ptcl->next)
            {
                if (ptcl->size != 0.0F)
                {
                    pos_x = ptcl->pos.x;
                    pos_y = ptcl->pos.y;
                    pos_z = ptcl->pos.z;
                    
                    if (ptcl->tfrm != NULL)
                    {
                        if (ptcl->tfrm->transform_id != dLBParticleCurrentTransformID)
                        {
							if (ptcl->tfrm->transform_status != nLBTransformStatusFinished)
							{
                                syMatrixTraRotRpyRScaF
                                (
                                    &ptcl->tfrm->affine,
                                    ptcl->tfrm->translate.x,
                                    ptcl->tfrm->translate.y,
                                    ptcl->tfrm->translate.z,
                                    ptcl->tfrm->rotate.x,
                                    ptcl->tfrm->rotate.y,
                                    ptcl->tfrm->rotate.z,
                                    ptcl->tfrm->scale.x,
                                    ptcl->tfrm->scale.y,
                                    ptcl->tfrm->scale.z
                                );
                            }
							if (ptcl->tfrm->transform_status == nLBTransformStatusReady)
							{
								ptcl->tfrm->transform_status = nLBTransformStatusFinished;
							}
                            guMtxCatF(ptcl->tfrm->affine, projection_f, ptcl->tfrm->projection);
                            
                            ptcl->tfrm->pc0_magnitude = sqrtf
                            (
                                SQUARE(ptcl->tfrm->projection[0][0]) +
                                SQUARE(ptcl->tfrm->projection[1][0]) +
                                SQUARE(ptcl->tfrm->projection[2][0])
                            );
                            ptcl->tfrm->pc1_magnitude = sqrtf
                            (
                                SQUARE(ptcl->tfrm->projection[0][1]) +
                                SQUARE(ptcl->tfrm->projection[1][1]) +
                                SQUARE(ptcl->tfrm->projection[2][1])
                            );
                            ptcl->tfrm->transform_id = dLBParticleCurrentTransformID;
                        }
                        s = (ptcl->tfrm->affine[0][0] >= 0.0F) ? 0 : -1;
                        t = (ptcl->tfrm->affine[1][1] >= 0.0F) ? 0 : -1;
                        
                        mx = ptcl->tfrm->pc0_magnitude;
                        my = ptcl->tfrm->pc1_magnitude;
                        
                        tx = ((ptcl->tfrm->projection[0][0] * pos_x) + (ptcl->tfrm->projection[1][0] * pos_y) + (ptcl->tfrm->projection[2][0] * pos_z)) + ptcl->tfrm->projection[3][0];
                        ty = ((ptcl->tfrm->projection[0][1] * pos_x) + (ptcl->tfrm->projection[1][1] * pos_y) + (ptcl->tfrm->projection[2][1] * pos_z)) + ptcl->tfrm->projection[3][1];
                        tz = ((ptcl->tfrm->projection[0][2] * pos_x) + (ptcl->tfrm->projection[1][2] * pos_y) + (ptcl->tfrm->projection[2][2] * pos_z)) + ptcl->tfrm->projection[3][2];
                        tm = ((ptcl->tfrm->projection[0][3] * pos_x) + (ptcl->tfrm->projection[1][3] * pos_y) + (ptcl->tfrm->projection[2][3] * pos_z)) + ptcl->tfrm->projection[3][3];
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
                            tm *= ptcl->size;

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
                            
                            bank_id = ptcl->bank_id & 7;

                            fmt = sLBParticleTextureBanks[bank_id][ptcl->texture_id]->fmt;
                            siz = sLBParticleTextureBanks[bank_id][ptcl->texture_id]->siz;
                            
                            width = sLBParticleTextureBanks[bank_id][ptcl->texture_id]->width;
                            height = sLBParticleTextureBanks[bank_id][ptcl->texture_id]->height;
                            
                            image = sLBParticleTextureBanks[bank_id][ptcl->texture_id]->data[ptcl->data_id];
                            
                            if (fmt == G_IM_FMT_CI)
                            {
                                p_palette = &sLBParticleTextureBanks[bank_id][ptcl->texture_id]->data[sLBParticleTextureBanks[bank_id][ptcl->texture_id]->count];
                                
                                palette = (!(ptcl->flags & 0x10)) ? p_palette[ptcl->data_id] : p_palette[0];
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
							if (ptcl->flags & LBPARTICLE_FLAG_MASKS)
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
                            if (ptcl->flags & LBPARTICLE_FLAG_MASKT)
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
                            gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, ptcl->primcolor.r, ptcl->primcolor.g, ptcl->primcolor.b, ptcl->primcolor.a);
                
                            if (ptcl->flags & LBPARTICLE_FLAG_ENVCOLOR)
                            {
                                gDPSetEnvColor(gSYTaskmanDLHeads[0]++, ptcl->envcolor.r, ptcl->envcolor.g, ptcl->envcolor.b, ptcl->envcolor.a);
                                
                                gDPSetCombineLERP
                                (
                                    gSYTaskmanDLHeads[0]++,
                                    PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,
                                    PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT
                                );
                            }
                            else if (ptcl->flags & LBPARTICLE_FLAG_NOISE)
                            {
                                gDPSetCombineLERP
                                (
                                    gSYTaskmanDLHeads[0]++,
                                    NOISE, 0, TEXEL0, 0, TEXEL0, 0, PRIMITIVE, 0,
                                    NOISE, 0, TEXEL0, 0, TEXEL0, 0, PRIMITIVE, 0
                                );
                            }
                            else gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
                            
                            if (ptcl->flags & LBPARTICLE_FLAG_DITHER)
                            {
                                ac = G_AC_DITHER;
                            }
                            else
                            {
                                ac = G_AC_THRESHOLD;

								if (ptcl->flags & LBPARTICLE_FLAG_ALPHABLEND)
								{
                                    alpha = ptcl->envcolor.a;
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
		LBGenerator *gtor = syTaskmanMalloc(sizeof(*gtor), 0x4);

		if (gtor == NULL)
		{
			return NULL;
		}
		gtor->next = sLBParticleGeneratorsAllocFree;

		sLBParticleGeneratorsAllocFree = gtor;
	}
	gLBParticleGeneratorsUsedNum = 0;
	D_ovl0_800D6450 = 0;

	return gcMakeGObjSPAfter(-7, lbParticleGeneratorFuncRun, 0, GOBJ_LINKORDER_DEFAULT);
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
    LBGenerator *gtor, *next_gtor;
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
    
    gtor = sLBParticleGeneratorsQueued;
    sLBParticleGeneratorsLastProcessed = NULL;
    
    while (gtor != NULL)
    {
            if (gobj->flags & (1 << ((gtor->bank_id >> 3) + 0x10)))
            {
                sLBParticleGeneratorsLastProcessed = gtor;

                gtor = gtor->next;

                continue;
            }
            if (gtor->flags & LBPARTICLE_FLAG_PAUSE)
            {
                sLBParticleGeneratorsLastProcessed = gtor;

                gtor = gtor->next;

                continue;
            }
            if (gtor->unk_gtor_0x40 < 0.0F)
            {
                gtor->unk_gtor_0x44 -= gtor->unk_gtor_0x40;
            }
            else gtor->unk_gtor_0x44 += (mtTrigGetRandomFloat() * gtor->unk_gtor_0x40);

            if (gtor->unk_gtor_0x44 >= 1.0F)
            {
                vel.x = gtor->vel.x;
                vel.y = gtor->vel.y;
                vel.z = gtor->vel.z;

                if (gtor->dobj != NULL)
                {
                    lbParticleGetPosVelDObj(&pos, &vel, gtor->dobj);
                    
                    gtor->pos.x = pos.x;
                    gtor->pos.y = pos.y;
                    gtor->pos.z = pos.z;
                }
                switch (gtor->kind)
                {
                case 0:
                case 3:
                case 4:
                    pv0 = gtor->generator_vars.rotate.base + (mtTrigGetRandomFloat() * (gtor->generator_vars.rotate.target - gtor->generator_vars.rotate.base));
                    spB8 = (gtor->generator_vars.rotate.target - gtor->generator_vars.rotate.base) / (s32) gtor->unk_gtor_0x44;
                    break;

                default:
                    pv0 = F_CST_DTOR32(360.0F) * mtTrigGetRandomFloat();
                    spB8 = F_CST_DTOR32(360.0F) / (s32) gtor->unk_gtor_0x44;
                    break;
                }
            }
            while (gtor->unk_gtor_0x44 >= 1.0F)
            {
                    switch (gtor->kind)
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
                        
                        if (gtor->unk_gtor_0x38 < 0.0F)
                        {
                            vmag = pv1 = 1.0F;
                            var_f20 = -gtor->unk_gtor_0x38;
                        }
                        else
                        {
                            pv1 = vmag = mtTrigGetRandomFloat();

                            if (gtor->kind != 0)
                            {
                                vmag = pv1 = sqrtf(pv1);
                            }
                            var_f20 = gtor->unk_gtor_0x38 * pv1;
                        }
                        if (gtor->unk_gtor_0x3C < 0.0F)
                        {
                            pv0 += spB8;
                            pv1 = -gtor->unk_gtor_0x3C;
                        }
                        else
                        {
                            pv0 = gtor->generator_vars.rotate.base + (mtTrigGetRandomFloat() * (gtor->generator_vars.rotate.target - gtor->generator_vars.rotate.base));
                            pv1 *= gtor->unk_gtor_0x3C;
                        }
                        zero = 0.0F;
                        
                        spEC = __cosf(pv0) * var_f20;
                        temp_f26 = __sinf(pv0) * var_f20;
                        pm1 = __sinf(pv1) * magnitude;

                        vel_x = __cosf(pv0) * pm1;
                        vel_y = __sinf(pv0) * pm1;
                        vel_z = __cosf(pv1) * magnitude;

                        pos_x = (spEC * cos_angle2) + zero + gtor->pos.x;
                        pos_y = (-spEC * sin_angle1 * sin_angle2) + (temp_f26 * cos_angle1) + zero + gtor->pos.y;
                        pos_z = (-spEC * cos_angle1 * sin_angle2) - (temp_f26 * sin_angle1) + zero + gtor->pos.z;

                        temp_vel_x = (vel_x * cos_angle2) + (vel_z * sin_angle2);
                        temp_vel_y = (-vel_x * sin_angle1 * sin_angle2) + (vel_y * cos_angle1) + (vel_z * sin_angle1 * cos_angle2);
                        temp_vel_z = (-vel_x * cos_angle1 * sin_angle2) - (vel_y * sin_angle1) + (vel_z * cos_angle1 * cos_angle2);

                        if (gtor->kind == 3)
                        {
                            temp_vel_x *= vmag;
                            temp_vel_y *= vmag;
                            temp_vel_z *= vmag;
                        }
                        lbParticleMakeParam
                        (
                            gtor->bank_id,
                            gtor->flags,
                            gtor->texture_id,
                            gtor->bytecode,
                            gtor->particle_lifetime,
                            pos_x,
                            pos_y,
                            pos_z,
                            temp_vel_x,
                            temp_vel_y,
                            temp_vel_z,
                            gtor->size,
                            gtor->gravity,
                            gtor->friction,
                            0,
                            gtor
                        );
                        break;
                        
                    case 1:
                        vel_x = vel.x;
                        vel_y = vel.y;
                        vel_z = vel.z;
                        
                        pos_random = mtTrigGetRandomFloat();

                        pos_x = gtor->pos.x + (pos_random * (gtor->generator_vars.move.x - gtor->pos.x));
                        pos_y = gtor->pos.y + (pos_random * (gtor->generator_vars.move.y - gtor->pos.y));
                        pos_z = gtor->pos.z + (pos_random * (gtor->generator_vars.move.z - gtor->pos.z));
                        
                        lbParticleMakeParam
                        (
                            gtor->bank_id,
                            gtor->flags,
                            gtor->texture_id,
                            gtor->bytecode,
                            gtor->particle_lifetime,
                            pos_x,
                            pos_y,
                            pos_z,
                            vel.x,
                            vel.y,
                            vel.z,
                            gtor->size,
                            gtor->gravity,
                            gtor->friction,
                            0,
                            gtor
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
                        
                        pv1 = (gtor->unk_gtor_0x38 < 0.0F) ? 1.0F : mtTrigGetRandomFloat();

                        pv0 = (gtor->unk_gtor_0x3C < 0.0F) ? pv0 + spB8 : mtTrigGetRandomFloat() * F_CST_DTOR32(360.0F);

                        gtor->generator_vars.unk_gtor_vars.f = magnitude;

                        if
                        (
                            lbParticleMakeParam
                            (
                                gtor->bank_id,
                                gtor->flags | 0x4,
                                gtor->texture_id,
                                gtor->bytecode,
                                gtor->particle_lifetime,
                                0,
                                0,
                                0,
                                pv0,
                                pv1,
                                0,
                                gtor->size,
                                angle1,
                                angle2,
                                0,
                                gtor
                            ) != NULL
                        )
                        {
                            gtor->generator_vars.unk_gtor_vars.halfword++;
                        }
                        break;
                        
                    default:
                        // OK seriously this order swap is ridiculous
                        if (sLBParticleGeneratorProcDefault != NULL)
                        {
                            sLBParticleGeneratorProcDefault(gtor, &vel);
                        }
                        break;
                    }
                    gtor->unk_gtor_0x44 -= 1.0F;
            }
            if (gtor->generator_lifetime != 0)
            {
                gtor->generator_lifetime--;

                if (gtor->generator_vars.rotate.target); // bruh
    
                if (gtor->generator_lifetime == 0)
                {
                    if ((gtor->kind == 2) && (gtor->generator_vars.unk_gtor_vars.halfword != 0))
                    {
                        gtor->unk_gtor_0x40 = 0.0F;
                        gtor->generator_lifetime = 1;
                    }
                    else
                    {
                        if (sLBParticleGeneratorsLastProcessed == NULL)
                        {
                            sLBParticleGeneratorsQueued = gtor->next;
                        }
                        else sLBParticleGeneratorsLastProcessed->next = gtor->next;
                
                        next_gtor = gtor->next;
                
                        if (gtor->tfrm != NULL)
                        {
                            gtor->tfrm->users_num--;
                    
                            if (gtor->tfrm->users_num == 0)
                            {
                                lbParticleEjectTransform(gtor->tfrm);
                            }
                        }
                        gtor->next = sLBParticleGeneratorsAllocFree;
                        sLBParticleGeneratorsAllocFree = gtor;
                
                        gtor = next_gtor;
                
                        gLBParticleGeneratorsUsedNum--;

                        continue;
                    }
                }
            }
            sLBParticleGeneratorsLastProcessed = gtor;

            gtor = gtor->next;
        }
    
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/lb/lbparticle/lbParticleGeneratorFuncRun.s")
#endif

// 0x800D353C
LBGenerator* lbParticleGetGenerator(void)
{
    LBGenerator *gtor = sLBParticleGeneratorsAllocFree;
    
    if (sLBParticleGeneratorsAllocFree == NULL)
    {
        return NULL;
    }
    gLBParticleGeneratorsUsedNum++;
    
    if (D_ovl0_800D6450 < gLBParticleGeneratorsUsedNum)
    {
        D_ovl0_800D6450 = gLBParticleGeneratorsUsedNum;
    }
    sLBParticleGeneratorsAllocFree = gtor->next;
    gtor->next = sLBParticleGeneratorsQueued;
    sLBParticleGeneratorsQueued = gtor;
    
    if (sLBParticleGeneratorsLastProcessed == NULL)
    {
        sLBParticleGeneratorsLastProcessed = gtor;
    }
    gtor->generator_id = ++dLBParticleCurrentGeneratorID;
    gtor->tfrm = NULL;
    
    return gtor;
}

// 0x800D35DC
LBGenerator* lbParticleMakeGenerator(s32 bank_id, s32 script_id)
{
    LBGenerator *gtor;
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
    gtor = lbParticleGetGenerator();

    if (gtor != NULL)
    {   
        gtor->kind = sLBParticleScriptBanks[id][script_id]->kind;
        gtor->bank_id = bank_id;
        gtor->flags = sLBParticleScriptBanks[id][script_id]->flags;
        gtor->texture_id = sLBParticleScriptBanks[id][script_id]->texture_id;
        gtor->particle_lifetime = sLBParticleScriptBanks[id][script_id]->particle_lifetime;
        gtor->generator_lifetime = sLBParticleScriptBanks[id][script_id]->generator_lifetime;
        
        gtor->pos.x = 0.0F;
        gtor->pos.y = 0.0F;
        gtor->pos.z = 0.0F;
        
        gtor->vel.x = sLBParticleScriptBanks[id][script_id]->vel.x;
        gtor->vel.y = sLBParticleScriptBanks[id][script_id]->vel.y;
        gtor->vel.z = sLBParticleScriptBanks[id][script_id]->vel.z;
        
        gtor->gravity = sLBParticleScriptBanks[id][script_id]->gravity;
        gtor->friction = sLBParticleScriptBanks[id][script_id]->friction;
        gtor->size = sLBParticleScriptBanks[id][script_id]->size;
        
        gtor->bytecode = sLBParticleScriptBanks[id][script_id]->bytecode;
        
        gtor->unk_gtor_0x38 = sLBParticleScriptBanks[id][script_id]->unk_script_0x20;
        gtor->unk_gtor_0x3C = sLBParticleScriptBanks[id][script_id]->unk_script_0x24;
        gtor->unk_gtor_0x40 = sLBParticleScriptBanks[id][script_id]->unk_script_0x28;
        
        gtor->unk_gtor_0x44 = 0.0F;
        
        if (sLBParticleTextureBanks[id][sLBParticleScriptBanks[id][script_id]->texture_id]->flags != 0)
        {
            gtor->flags |= 0x10;
        }
        gtor->dobj = NULL;
        
        switch (gtor->kind)
        {
        case 0:
        case 3:
        case 4:
            gtor->generator_vars.rotate.base = 0;
            gtor->generator_vars.rotate.target = F_CST_DTOR32(360.0F);
            break;
            
        case 1:
            gtor->generator_vars.move.x = gtor->pos.x + gtor->vel.x;
            gtor->generator_vars.move.y = gtor->pos.y + gtor->vel.y;
            gtor->generator_vars.move.z = gtor->pos.z + gtor->vel.z;
            break;
            
        case 2:
            gtor->generator_vars.unk_gtor_vars.halfword = 0;
            break;
            
        default:
            if (sLBParticleGeneratorProcSetup != NULL)
            {
                sLBParticleGeneratorProcSetup(gtor);
            }
            break;
        }
    }
    return gtor;
}

// 0x800D3884
void lbParticleEjectGenerator(LBGenerator *this_gtor)
{
    LBGenerator *prev_gtor = NULL, *current_gtor = sLBParticleGeneratorsQueued;
    
    while (current_gtor != NULL)
    {
        if (current_gtor == this_gtor)
        {
            if ((this_gtor->kind == 2) && (this_gtor->generator_vars.unk_gtor_vars.halfword != 0))
            {
                this_gtor->unk_gtor_0x40 = 0.0F;
                this_gtor->generator_lifetime = 1;
                
                break;
            }
            if (prev_gtor == NULL)
            {
                sLBParticleGeneratorsQueued = current_gtor->next;
            }
            else prev_gtor->next = current_gtor->next;
            
            if (this_gtor->tfrm != NULL)
            {
                this_gtor->tfrm->users_num--;
                
                if (this_gtor->tfrm->users_num == 0)
                {
                    lbParticleEjectTransform(this_gtor->tfrm);
                }
            }
            current_gtor->next = sLBParticleGeneratorsAllocFree;
            sLBParticleGeneratorsAllocFree = current_gtor;
            gLBParticleGeneratorsUsedNum--;
            
            break;
        }
        prev_gtor = current_gtor;
        current_gtor = current_gtor->next;
    }
}

// 0x800D3978
void lbParticleEjectGeneratorAll(void)
{
	LBGenerator *current_gtor = sLBParticleGeneratorsQueued;

	while (current_gtor != NULL)
	{
		LBGenerator *next_gtor = current_gtor->next;

		lbParticleEjectGenerator(current_gtor);

		current_gtor = next_gtor;
	}
}

// 0x800D39C0
void lbParticleSetGeneratorProcs(void (*proc_setup)(LBGenerator*), void (*proc_default)(LBGenerator*, Vec3f*))
{
	sLBParticleGeneratorProcSetup = proc_setup;
	sLBParticleGeneratorProcDefault = proc_default;
}

// 0x800D39D4
void lbParticleEjectStructID(u16 generator_id, s32 link_id)
{
    LBParticle *next_ptcl;
    LBParticle *current_ptcl;
    LBParticle *prev_ptcl;

    LBGenerator *next_gtor;
    LBGenerator *current_gtor;
    LBGenerator *prev_gtor;

    prev_ptcl = NULL;
    current_ptcl = sLBParticleStructsAllocLinks[link_id];
    
    while (current_ptcl != NULL)
    {
        next_ptcl = current_ptcl->next;
            
        if (current_ptcl->generator_id == generator_id)
        {
            if (prev_ptcl == NULL)
            {
                sLBParticleStructsAllocLinks[link_id] = current_ptcl->next;
            }
            else prev_ptcl->next = current_ptcl->next;
                
            if ((current_ptcl->gtor != NULL) && (current_ptcl->flags & 0x4) && (current_ptcl->gtor->kind == 2))
            {
                current_ptcl->gtor->generator_vars.unk_gtor_vars.halfword--;
            }
            if (current_ptcl->tfrm != NULL)
            {
                current_ptcl->tfrm->users_num--;
                    
                if (current_ptcl->tfrm->users_num == 0)
                {
                    lbParticleEjectTransform(current_ptcl->tfrm);
                }
            }
            current_ptcl->next = sLBParticleStructsAllocFree;
            sLBParticleStructsAllocFree = current_ptcl;
            gLBParticleStructsUsedNum--;
        }
        else prev_ptcl = current_ptcl;
            
        current_ptcl = next_ptcl;
    }
    prev_gtor = NULL;
    current_gtor = sLBParticleGeneratorsQueued;
    
    while (current_gtor != NULL)
    {
        next_gtor = current_gtor->next;
        
        if (current_gtor->generator_id == generator_id)
        {
            if ((current_gtor->kind == 2) && (current_gtor->generator_vars.unk_gtor_vars.halfword != 0))
            {
                current_gtor->unk_gtor_0x40 = 0.0F;
                current_gtor->generator_lifetime = 1;
                
                prev_gtor = current_gtor;
            }
            else
            {
                if (prev_gtor == NULL)
                {
                    sLBParticleGeneratorsQueued = current_gtor->next;
                }
                else prev_gtor->next = current_gtor->next;
            
                if (current_gtor->tfrm != NULL)
                {
                    current_gtor->tfrm->users_num--;
                
                    if (current_gtor->tfrm->users_num == 0)
                    {
                        lbParticleEjectTransform(current_gtor->tfrm);
                    }
                }
                current_gtor->next = sLBParticleGeneratorsAllocFree;
                sLBParticleGeneratorsAllocFree = current_gtor;
                gLBParticleGeneratorsUsedNum--;
            }
        }
        else prev_gtor = current_gtor;
        
        current_gtor = next_gtor;
    }
}

// 0x800D3BFC
void lbParticleEjectStructSelf(LBParticle *ptcl)
{
	lbParticleEjectStructID(ptcl->generator_id, ptcl->bank_id >> 3);
}

// 0x800D3C28
void lbParticleEjectStructGenerator(LBGenerator *gtor)
{
	lbParticleEjectStructID(gtor->generator_id, gtor->bank_id >> 3);
}

// 0x800D3C54
void lbParticleEjectGeneratorDObj(GObj *gobj)
{
	DObj *dobj;
	LBGenerator *current_gtor, *next_gtor;

	if (gobj->obj_kind == nGCCommonAppendDObj)
	{
		for (dobj = DObjGetStruct(gobj); dobj != NULL; dobj = gcGetTreeDObjNext(dobj))
		{
			for (current_gtor = sLBParticleGeneratorsQueued; current_gtor != NULL; current_gtor = next_gtor)
			{
				next_gtor = current_gtor->next;

				if (current_gtor->dobj == dobj)
				{
					lbParticleEjectGenerator(current_gtor);
				}
			}
		}
	}
}

// 0x800D3CE0
void lbParticleSetStructPosAll(f32 pos_x, f32 pos_y, f32 pos_z)
{
    LBGenerator *gtor;
    s32 i;
    
    for (i = 0; i < ARRAY_COUNT(sLBParticleStructsAllocLinks); i++)
    {
        LBParticle *ptcl = sLBParticleStructsAllocLinks[i];
        
        while (ptcl != NULL)
        {
            ptcl->pos.x = pos_x;
            ptcl->pos.y = pos_y;
            ptcl->pos.z = pos_z;

            ptcl = ptcl->next;
        }
    }
    gtor = sLBParticleGeneratorsQueued;
    
    while (gtor != NULL)
    {
        gtor->pos.x = pos_x;
        gtor->pos.y = pos_y;
        gtor->pos.z = pos_z;

        gtor = gtor->next;
    }
}

// 0x800D3D64
void lbParticlePauseAllID(u16 generator_id, s32 link_id)
{
	LBParticle *ptcl;
	LBGenerator *gtor;

	for (ptcl = sLBParticleStructsAllocLinks[link_id]; ptcl != NULL; ptcl = ptcl->next)
	{
		if (ptcl->generator_id == generator_id)
		{
			ptcl->flags |= LBPARTICLE_FLAG_PAUSE;
		}
	}
	for (gtor = sLBParticleGeneratorsQueued; gtor != NULL; gtor = gtor->next)
	{
		if (gtor->generator_id == generator_id)
		{
			gtor->flags |= LBPARTICLE_FLAG_PAUSE;
		}
	}
}

// 0x800D3DE8
void lbParticleResumeAllID(u16 generator_id, s32 link_id)
{
	LBParticle *ptcl;
	LBGenerator *gtor;

	for (ptcl = sLBParticleStructsAllocLinks[link_id]; ptcl != NULL; ptcl = ptcl->next)
	{
		if (ptcl->generator_id == generator_id)
		{
			ptcl->flags &= ~LBPARTICLE_FLAG_PAUSE;
		}
	}
	for (gtor = sLBParticleGeneratorsQueued; gtor != NULL; gtor = gtor->next)
	{
		if (gtor->generator_id == generator_id)
		{
			gtor->flags &= ~LBPARTICLE_FLAG_PAUSE;
		}
	}
}
