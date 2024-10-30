#ifndef _LBPARTICLE_H_
#define _LBPARTICLE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <lb/lbdef.h>

extern u16 gLBParticleStructsUsedNum;
extern u16 gLBParticleGeneratorsUsedNum;
extern u16 gLBParticleTransformsUsedNum;

extern s32 lbParticleAllocTransforms(s32 num, size_t size);
extern LBTransform* lbParticleGetTransform(u8 status, u16 generator_id);
extern void lbParticleEjectTransform(LBTransform *tfrm);
extern LBTransform* lbParticleAddTransformForStruct(LBParticle *ptcl, u8 status);
extern LBTransform* lbParticleAddTransformForGenerator(LBGenerator* gtor, u8 status);
extern void lbParticleSetupBankID(s32 bank_id, LBScriptDesc *script_desc, LBTextureDesc *texture_desc);
extern GObj* lbParticleAllocStructs(s32 num);
extern LBParticle* lbParticleMakeStruct
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
);
extern LBParticle* lbParticleMakeChildScriptID(LBParticle *ptcl, s32 bank_id, s32 script_id);
extern LBParticle* lbParticleMakeParam
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
);
extern LBParticle* lbParticleMakeCommon(s32 bank_id, s32 script_id);
extern LBParticle* lbParticleMakePosVel(s32 bank_id, s32 script_id, f32 pos_x, f32 pos_y, f32 pos_z, f32 vel_x, f32 vel_y, f32 vel_z);
extern LBParticle* lbParticleMakeScriptID(s32 bank_id, s32 script_id);
extern void LBParticleProcessStruct(LBParticle *ptcl);
extern void lbParticleEjectStruct(LBParticle *this_ptcl);
extern void lbParticleEjectStructAll(void);
extern u8* lbParticleReadFloatBigEnd(u8 *csr, f32 *f);
extern u8* lbParticleReadUShort(u8 *csr, u16 *s);
extern void lbParticleRotateVel(LBParticle *ptcl, f32 angle);
extern void lbParticleSetDistVelDObj(LBParticle *ptcl, DObj *dobj);
extern void lbParticleAddDistVelMagDObj(LBParticle *ptcl, DObj *dobj, f32 magnitude);
extern LBParticle* lbParticleUpdateStruct(LBParticle *this_ptcl, LBParticle *other_ptcl, s32 bank_id);
extern void lbParticleStructFuncRun(GObj *gobj);
extern void LBParticleDrawTextures(GObj *gobj);
extern void lbParticleAddAttachDObj(s32 bank_id, DObj *dobj);
extern void lbParticleSetDitherModes(s32 colordither_mode, s32 alphadither_mode);
extern GObj* lbParticleAllocGenerators(s32 num);
extern void lbParticleGetPosVelDObj(Vec3f *pos, Vec3f *vel, DObj *dobj);
extern void lbParticleGeneratorFuncRun(GObj *gobj);
extern LBGenerator* lbParticleGetGenerator(void);
extern LBGenerator* lbParticleMakeGenerator(s32 bank_id, s32 script_id);
extern void lbParticleEjectGenerator(LBGenerator *this_gtor);
extern void lbParticleEjectGeneratorAll(void);
extern void lbParticleSetGeneratorProcs(void (*proc_setup)(LBGenerator*), void (*proc_base)(LBGenerator*, Vec3f*));
extern void lbParticleEjectStructID(u16 generator_id, s32 link_id);
extern void lbParticleEjectStructSelf(LBParticle *ptcl);
extern void lbParticleEjectStructGenerator(LBGenerator *gtor);
extern void lbParticleEjectGeneratorDObj(GObj *gobj);
extern void lbParticleSetStructPosAll(f32 pos_x, f32 pos_y, f32 pos_z);
extern void lbParticlePauseAllID(u16 generator_id, s32 link_id);
extern void lbParticleResumeAllID(u16 generator_id, s32 link_id);

#endif
