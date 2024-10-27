#ifndef _LBPARTICLE_H_
#define _LBPARTICLE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <lb/lbdef.h>

extern u16 gLBParticleStructsUsedNum;
extern u16 gLBParticleGeneratorsUsedNum;
extern u16 gLBParticleTransformsUsedNum;

extern s32 LBParticleAllocTransforms(s32 num, size_t size);
extern LBTransform* LBParticleGetTransform(u8 status, u16 generator_id);
extern void LBParticleEjectTransform(LBTransform *tfrm);
extern LBTransform* LBParticleAddTransformForStruct(LBParticle *ptcl, u8 status);
extern LBTransform* LBParticleAddTransformForGenerator(LBGenerator* gtor, u8 status);
extern void LBParticleSetupBankID(s32 bank_id, LBScriptDesc *script_desc, LBTextureDesc *texture_desc);
extern GObj* LBParticleAllocStructs(s32 num);
extern LBParticle* LBParticleMakeStruct
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
extern LBParticle* LBParticleMakeChildScriptID(LBParticle *ptcl, s32 bank_id, s32 script_id);
extern LBParticle* LBParticleMakeParam
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
extern LBParticle* LBParticleMakeCommon(s32 bank_id, s32 script_id);
extern LBParticle* LBParticleMakePosVel(s32 bank_id, s32 script_id, f32 pos_x, f32 pos_y, f32 pos_z, f32 vel_x, f32 vel_y, f32 vel_z);
extern LBParticle* LBParticleMakeScriptID(s32 bank_id, s32 script_id);
extern void LBParticleProcessStruct(LBParticle *ptcl);
extern void LBParticleEjectStruct(LBParticle *this_ptcl);
extern void LBParticleEjectStructAll(void);
extern u8* LBParticleReadUShort(u8 *csr, u16 *s);
extern void LBParticleRotateVel(LBParticle *ptcl, f32 angle);
extern void LBParticleSetDistVelDObj(LBParticle *ptcl, DObj *dobj);
extern void LBParticleAddDistVelMagDObj(LBParticle *ptcl, DObj *dobj, f32 magnitude);
extern LBParticle* LBParticleUpdateStruct(LBParticle *this_ptcl, LBParticle *other_ptcl, s32 bank_id);
extern void LBParticleStructFuncRun(GObj *gobj);
extern void LBParticleDrawTextures(GObj *gobj);
extern void LBParticleAddAttachDObj(s32 bank_id, DObj *dobj);
extern void LBParticleSetDitherModes(s32 colordither_mode, s32 alphadither_mode);
extern GObj* LBParticleAllocGenerators(s32 num);
extern void LBParticleGetPosVelDObj(Vec3f *pos, Vec3f *vel, DObj *dobj);
extern void LBParticleGeneratorFuncRun(GObj *gobj);
extern LBGenerator* LBParticleGetGenerator(void);
extern LBGenerator* LBParticleMakeGenerator(s32 bank_id, s32 script_id);
extern void LBParticleEjectGenerator(LBGenerator *this_gtor);
extern void LBParticleEjectGeneratorAll(void);
extern void LBParticleSetGeneratorProcs(void (*proc_setup)(LBGenerator*), void (*proc_default)(LBGenerator*, Vec3f*));
extern void LBParticleEjectStructID(u16 generator_id, s32 link_id);
extern void LBParticleEjectStructSelf(LBParticle *ptcl);
extern void LBParticleEjectStructGenerator(LBGenerator *gtor);
extern void LBParticleEjectGeneratorDObj(GObj *gobj);
extern void LBParticleSetStructPosAll(f32 pos_x, f32 pos_y, f32 pos_z);
extern void LBParticlePauseAllID(u16 generator_id, s32 link_id);
extern void LBParticleResumeAllID(u16 generator_id, s32 link_id);

#endif
