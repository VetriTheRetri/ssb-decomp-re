#ifndef _LBPARTICLE_H_
#define _LBPARTICLE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <lb/lbdef.h>

extern u16 gLBParticleStructsUsedNum;
extern u16 gLBParticleGeneratorsUsedNum;
extern u16 gLBParticleTransformsUsedNum;

extern s32 lbParticleAllocTransforms(s32 num, size_t size);
extern lbTransform* lbParticleGetTransform(u8 status, u16 generator_id);
extern void lbParticleEjectTransform(lbTransform *tfrm);
extern lbTransform* lbParticleAddTransformForStruct(lbParticle *ptcl, u8 status);
extern lbTransform* lbParticleAddTransformForGenerator(lbGenerator* gtor, u8 status);
extern void lbParticleSetupBankID(s32 bank_id, lbScriptDesc *script_desc, lbTextureDesc *texture_desc);
extern GObj* lbParticleAllocStructs(s32 num);
extern lbParticle* lbParticleMakeStruct
(
	lbParticle *this_ptcl,
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
	lbGenerator *gtor
);
extern lbParticle* lbParticleMakeChildScriptID(lbParticle *ptcl, s32 bank_id, s32 script_id);
extern lbParticle* lbParticleMakeParam
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
	lbGenerator *gtor
);
extern lbParticle* lbParticleMakeCommon(s32 bank_id, s32 script_id);
extern lbParticle* lbParticleMakePosVel(s32 bank_id, s32 script_id, f32 pos_x, f32 pos_y, f32 pos_z, f32 vel_x, f32 vel_y, f32 vel_z);
extern lbParticle* lbParticleMakeScriptID(s32 bank_id, s32 script_id);
extern void lbParticleProcessStruct(lbParticle *ptcl);
extern void lbParticleEjectStruct(lbParticle *this_ptcl);
extern void lbParticleEjectStructAll(void);
extern u8* lbParticleReadUShort(u8 *csr, u16 *s);
extern void lbParticleRotateVel(lbParticle *ptcl, f32 angle);
extern void lbParticleSetDistVelDObj(lbParticle *ptcl, DObj *dobj);
extern void lbParticleAddDistVelMagDObj(lbParticle *ptcl, DObj *dobj, f32 magnitude);
extern lbParticle* lbParticleUpdateStruct(lbParticle *this_ptcl, lbParticle *other_ptcl, s32 bank_id);
extern void lbParticleStructFuncRun(GObj *gobj);
extern void lbParticleDrawTextures(GObj *gobj);
extern void lbParticleAddAttachDObj(s32 bank_id, DObj *dobj);
extern void lbParticleSetDitherModes(s32 colordither_mode, s32 alphadither_mode);
extern GObj* lbParticleAllocGenerators(s32 num);
extern void lbParticleGetPosVelDObj(Vec3f *pos, Vec3f *vel, DObj *dobj);
extern void lbParticleGeneratorFuncRun(GObj *gobj);
extern lbGenerator* lbParticleGetGenerator(void);
extern lbGenerator* lbParticleMakeGenerator(s32 bank_id, s32 script_id);
extern void lbParticleEjectGenerator(lbGenerator *this_gtor);
extern void lbParticleEjectGeneratorAll(void);
extern void lbParticleSetGeneratorProcs(void (*proc_setup)(lbGenerator*), void (*proc_default)(lbGenerator*, Vec3f*));
extern void lbParticleEjectStructID(u16 generator_id, s32 link_id);
extern void lbParticleEjectStructSelf(lbParticle *ptcl);
extern void lbParticleEjectStructGenerator(lbGenerator *gtor);
extern void lbParticleEjectGeneratorDObj(GObj *gobj);
extern void lbParticleSetStructPosAll(f32 pos_x, f32 pos_y, f32 pos_z);
extern void lbParticlePauseAllID(u16 generator_id, s32 link_id);
extern void lbParticleResumeAllID(u16 generator_id, s32 link_id);

#endif
