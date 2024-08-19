#ifndef _GMCREDITS_H_
#define _GMCREDITS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <gm/gmdef.h>

extern sb32 gmCreditsCheckUnpause(void);
extern void func_ovl59_80131BB0(Mtx44f mtx, Vec3f *vec, f32 *width, f32 *height);
extern void func_ovl59_80131C88(Camera *cam);
extern void func_ovl59_80131D30(DObj *dobj, Vec3f *vec, f32 *width, f32 *height);
extern void func_ovl59_80131DD0(GObj *gobj, gmCreditsProjection *proj);
extern void func_ovl59_80131E70(Vec3f *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
extern sb32 gmCreditsCheckCursorNameOverlap(Vec3f *vec);
extern void func_ovl59_80131F34(GObj *arg0);
extern void func_ovl59_8013202C(GObj *arg0);
extern s32 gmCreditsGetLockOnPositionX(s32 posx);
extern s32 gmCreditsGetLockOnPositionY(s32 posy);
extern void gmCreditsHighlightProcRender(GObj *gobj);
extern void gmCreditsHighlightThreadUpdate(GObj *gobj);
extern void gmCreditsMakeHighlightGObj(GObj *gobj);
extern void gmCreditsSetTextQuetions(s32 *characters, s32 character_count);
extern void gmCreditsTryHideUnlocks(void);
extern void gmCreditsMakeStaffRoleTextSObjs(GObj *text_gobj, GObj *staff_gobj);
extern void gmCreditsMakeStaffRoleTextGObj(GObj *staff_gobj);
extern void gmCreditsMakeCompanyTextSObjs(GObj *text_gobj, GObj *staff_gobj);
extern void gmCreditsMakeCompanyTextGObj(GObj *staff_gobj);
extern sb32 gmCreditsCheckCursorHighlightPrompt(GObj *gobj, gmCreditsProjection *proj);
extern void func_ovl59_8013330C(void);
extern sb32 gmCreditsCheckPause(void);
extern void func_ovl59_801334E4(GObj *gobj);
extern gmCreditsName* gmCreditsNameUpdateAlloc(GObj *gobj);
extern void gmCreditsNameSetPrevAlloc(gmCreditsName *cn);
extern void gmCreditsJobAndNameThreadUpdate(GObj *gobj);
extern void gmCreditsJobProcRender(GObj *gobj);
extern void gmCreditsNameProcRender(GObj *gobj);
extern void gmCreditsJobAndNameInitStruct(GObj *gobj, DObj *first_dobj, DObj *second_dobj, sb32 job_or_name);
extern gmCreditsSetup* gmCreditsMakeJobDObjs(gmCreditsSetup *name_setup, DObj *dobj, s32 name_id, f32 wbase);
extern GObj* gmCreditsMakeJobGObj(gmCreditsJob *job);
extern GObj* gmCreditsMakeNameGObjAndDObjs(void);
extern void gmCreditsCrosshairThreadUpdate(GObj *gobj);
extern void gmCreditsMakeCrosshairGObj(void);
extern void gmCreditsMakeTextBoxBracketSObjs(void);
extern void gmCreditsMakeTextBoxGObj(void);
extern void gmCreditsStaffRollThreadUpdate(GObj *gobj);
extern void gmCreditsMakeStaffRollGObj(void);
extern void gmCreditsSetupFiles(void);
extern void gmCreditsInitNameAndJobDisplayLists(void);
extern void gmCreditsInitVars(void);
extern void gmCreditsUpdateCameraAt(GObj *gobj);
extern void gmCreditsMakeCamera(void);
extern void gmCreditsProcStart(void);
extern void gmCreditsProcLights(Gfx **dls);
extern void func_ovl59_80135118(void);
extern void gmCreditsStartScene(void);

#endif
