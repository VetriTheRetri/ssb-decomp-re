#ifndef _GMSTAFFROLL_H_
#define _GMSTAFFROLL_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <gm/gmdef.h>

extern sb32 scStaffrollGetPauseStatusResume(void);
extern void scStaffrollProjectVertex(Mtx44f mtx, Vec3f *vec, f32 *width, f32 *height);
extern void scStaffrollSetupProjectionMatrix(CObj *cobj);
extern void scStaffrollProjectDObjVertex(DObj *dobj, Vec3f *vec, f32 *width, f32 *height);
extern void scStaffrollGetCreditProjection(GObj *gobj, SCStaffrollProjection *proj);
extern void scStaffrollInterpolateEdge(Vec3f *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
extern sb32 scStaffrollCheckCursorNameOverlap(Vec3f *vec);
extern void scStaffrollHighlightProcUpdate(GObj *arg0);
extern void scStaffrollMakeOrUpdateHighlight(GObj *arg0);
extern s32 scStaffrollGetLockOnPositionX(s32 pos_x);
extern s32 scStaffrollGetLockOnPositionY(s32 pos_y);
extern void scStaffrollHighlightProcDisplay(GObj *gobj);
extern void scStaffrollHighlightThreadUpdate(GObj *gobj);
extern void scStaffrollMakeHighlightGObj(GObj *gobj);
extern void scStaffrollSetTextQuetions(s32 *characters, s32 character_count);
extern void scStaffrollTryHideUnlocks(void);
extern void scStaffrollMakeStaffRoleTextSObjs(GObj *text_gobj, GObj *staff_gobj);
extern void scStaffrollMakeStaffRoleTextGObj(GObj *staff_gobj);
extern void scStaffrollMakeCompanyTextSObjs(GObj *text_gobj, GObj *staff_gobj);
extern void scStaffrollMakeCompanyTextGObj(GObj *staff_gobj);
extern sb32 scStaffrollCheckCursorHighlightPrompt(GObj *gobj, SCStaffrollProjection *proj);
extern void scStaffrollCheckAllCreditsHighlight(void);
extern sb32 scStaffrollGetPauseStatusHighlight(void);
extern void scStaffrollFuncRun(GObj *gobj);
extern SCStaffrollName* SCStaffrollNameUpdateAlloc(GObj *gobj);
extern void SCStaffrollNameSetPrevAlloc(SCStaffrollName *cn);
extern void scStaffrollJobAndNameThreadUpdate(GObj *gobj);
extern void scStaffrollJobProcDisplay(GObj *gobj);
extern void scStaffrollNameProcDisplay(GObj *gobj);
extern void scStaffrollJobAndNameInitStruct(GObj *gobj, DObj *first_dobj, DObj *second_dobj, sb32 job_or_name);
extern SCStaffrollSetup* scStaffrollMakeJobDObjs(SCStaffrollSetup *name_setup, DObj *dobj, s32 name_id, f32 wbase);
extern GObj* scStaffrollMakeJobGObj(SCStaffrollJob *job);
extern GObj* scStaffrollMakeNameGObjAndDObjs(void);
extern void scStaffrollCrosshairThreadUpdate(GObj *gobj);
extern void scStaffrollMakeCrosshairGObj(void);
extern void scStaffrollMakeTextBoxBracketSObjs(void);
extern void scStaffrollMakeTextBoxGObj(void);
extern void SCStaffrollStaffrollThreadUpdate(GObj *gobj);
extern void scStaffrollMakeStaffrollGObj(void);
extern void scStaffrollSetupFiles(void);
extern void scStaffrollInitNameAndJobDisplayLists(void);
extern void scStaffrollInitVars(void);
extern void scStaffrollUpdateCameraAt(GObj *gobj);
extern void scStaffrollMakeCamera(void);
extern void scStaffrollFuncStart(void);
extern void scStaffrollFuncLights(Gfx **dls);
extern void scStaffrollFuncDraw(void);
extern void scStaffrollStartScene(void);

#endif
