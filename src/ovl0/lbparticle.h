#ifndef _LBPARTICLE_H_
#define _LBPARTICLE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern u16 gLBParticleStructsUsedNum;
extern u16 gLBParticleGeneratorsUsedNum;
extern u16 gLBParticleTransformsUsedNum;

extern s32 lbParticleAllocTransforms(s32 num, size_t size);
extern efTransform* lbParticleGetTransform(u8 status, u16 generator_id);
extern void lbParticleEjectTransform(efTransform *tfrm);
extern efTransform* lbParticleAddTransformForStruct(efParticle *ptcl, u8 status);
extern efTransform* lbParticleAddTransformForGenerator(efGenerator* gtor, u8 status);
extern void lbParticleSetupBankID(s32 bank_id, efScriptDesc *script_desc, efTextureDesc *texture_desc);
extern GObj* lbParticleAllocStructs(s32 num);
extern efParticle* lbParticleMakeStruct
(
	efParticle *this_ptcl,
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
	f32 mscale,
	f32 gravity,
	f32 friction,
	u32 argF,
	efGenerator *gtor
);
extern efParticle* lbParticleMakeChildScriptID(efParticle *ptcl, s32 bank_id, s32 script_id);
extern efParticle* lbParticleMakeParam
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
	f32 mscale,
	f32 gravity,
	f32 friction,
	u32 argE,
	efGenerator *gtor
);
extern efParticle* lbParticleMakeCommon(s32 bank_id, s32 script_id);
extern efParticle* lbParticleMakePosVel(s32 bank_id, s32 script_id, f32 pos_x, f32 pos_y, f32 pos_z, f32 vel_x, f32 vel_y, f32 vel_z);
extern efParticle* lbParticleMakeScriptID(s32 bank_id, s32 script_id);
extern void lbParticleProcessStruct(efParticle *ptcl);
extern void lbParticleEjectStruct(efParticle *this_ptcl);
extern void lbParticleEjectStructAll(void);
extern u8* lbParticleReadUShort(u8 *csr, u16 *s);
extern void lbParticleRotateVel(efParticle *ptcl, f32 angle);
extern void lbParticleSetDistVelDObj(efParticle *ptcl, DObj *dobj);
extern void lbParticleAddDistVelMagDObj(efParticle *ptcl, DObj *dobj, f32 magnitude);
extern efParticle* lbParticleUpdateStruct(efParticle *this_ptcl, efParticle *other_ptcl, s32 bank_id);
extern void lbParticleStructProcRun(GObj *gobj);
extern void lbParticleDrawTextures(GObj *gobj);
extern void lbParticleAddAttachDObj(s32 bank_id, DObj *dobj);
extern void lbParticleSetDitherModes(s32 colordither_mode, s32 alphadither_mode);
extern GObj* lbParticleAllocGenerators(s32 num);
extern void lbParticleGetPosVelDObj(Vec3f *pos, Vec3f *vel, DObj *dobj);
extern void lbParticleGeneratorProcRun(GObj *gobj);
extern efGenerator* lbParticleGetGenerator(void);
extern efGenerator* lbParticleMakeGenerator(s32 bank_id, s32 script_id);
extern void lbParticleEjectGenerator(efGenerator *this_gtor);
extern void lbParticleEjectGeneratorAll(void);
extern void lbParticleSetGeneratorProcs(void (*proc_setup)(efGenerator*), void (*proc_default)(efGenerator*, Vec3f*));
extern void lbParticleEjectStructID(u16 generator_id, s32 link_id);
extern void lbParticleEjectStructSelf(efParticle *ptcl);
extern void lbParticleEjectStructGenerator(efGenerator *gtor);
extern void lbParticleEjectGeneratorDObj(GObj *gobj);
extern void lbParticleSetStructPosAll(f32 pos_x, f32 pos_y, f32 pos_z);
extern void lbParticlePauseAllID(u16 generator_id, s32 link_id);
extern void lbParticleResumeAllID(u16 generator_id, s32 link_id);

#endif
