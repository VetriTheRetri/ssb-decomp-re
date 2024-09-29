#ifndef _GMSTAFFROLL_H_
#define _GMSTAFFROLL_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <gm/gmdef.h>

extern sb32 gmStaffrollCheckUnpause(void);
extern void func_ovl59_80131BB0(Mtx44f mtx, Vec3f *vec, f32 *width, f32 *height);
extern void func_ovl59_80131C88(Camera *cam);
extern void func_ovl59_80131D30(DObj *dobj, Vec3f *vec, f32 *width, f32 *height);
extern void func_ovl59_80131DD0(GObj *gobj, gmStaffrollProjection *proj);
extern void func_ovl59_80131E70(Vec3f *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
extern sb32 gmStaffrollCheckCursorNameOverlap(Vec3f *vec);
extern void func_ovl59_80131F34(GObj *arg0);
extern void func_ovl59_8013202C(GObj *arg0);
extern s32 gmStaffrollGetLockOnPositionX(s32 posx);
extern s32 gmStaffrollGetLockOnPositionY(s32 posy);
extern void gmStaffrollHighlightProcDisplay(GObj *gobj);
extern void gmStaffrollHighlightThreadUpdate(GObj *gobj);
extern void gmStaffrollMakeHighlightGObj(GObj *gobj);
extern void gmStaffrollSetTextQuetions(s32 *characters, s32 character_count);
extern void gmStaffrollTryHideUnlocks(void);
extern void gmStaffrollMakeStaffRoleTextSObjs(GObj *text_gobj, GObj *staff_gobj);
extern void gmStaffrollMakeStaffRoleTextGObj(GObj *staff_gobj);
extern void gmStaffrollMakeCompanyTextSObjs(GObj *text_gobj, GObj *staff_gobj);
extern void gmStaffrollMakeCompanyTextGObj(GObj *staff_gobj);
extern sb32 gmStaffrollCheckCursorHighlightPrompt(GObj *gobj, gmStaffrollProjection *proj);
extern void func_ovl59_8013330C(void);
extern sb32 gmStaffrollCheckPause(void);
extern void func_ovl59_801334E4(GObj *gobj);
extern gmStaffrollName* gmStaffrollNameUpdateAlloc(GObj *gobj);
extern void gmStaffrollNameSetPrevAlloc(gmStaffrollName *cn);
extern void gmStaffrollJobAndNameThreadUpdate(GObj *gobj);
extern void gmStaffrollJobProcDisplay(GObj *gobj);
extern void gmStaffrollNameProcDisplay(GObj *gobj);
extern void gmStaffrollJobAndNameInitStruct(GObj *gobj, DObj *first_dobj, DObj *second_dobj, sb32 job_or_name);
extern gmStaffrollSetup* gmStaffrollMakeJobDObjs(gmStaffrollSetup *name_setup, DObj *dobj, s32 name_id, f32 wbase);
extern GObj* gmStaffrollMakeJobGObj(gmStaffrollJob *job);
extern GObj* gmStaffrollMakeNameGObjAndDObjs(void);
extern void gmStaffrollCrosshairThreadUpdate(GObj *gobj);
extern void gmStaffrollMakeCrosshairGObj(void);
extern void gmStaffrollMakeTextBoxBracketSObjs(void);
extern void gmStaffrollMakeTextBoxGObj(void);
extern void gmStaffrollStaffrollThreadUpdate(GObj *gobj);
extern void gmStaffrollMakeStaffrollGObj(void);
extern void gmStaffrollSetupFiles(void);
extern void gmStaffrollInitNameAndJobDisplayLists(void);
extern void gmStaffrollInitVars(void);
extern void gmStaffrollUpdateCameraAt(GObj *gobj);
extern void gmStaffrollMakeCamera(void);
extern void gmStaffrollProcStart(void);
extern void gmStaffrollProcLights(Gfx **dls);
extern void func_ovl59_80135118(void);
extern void gmStaffrollStartScene(void);

#endif
