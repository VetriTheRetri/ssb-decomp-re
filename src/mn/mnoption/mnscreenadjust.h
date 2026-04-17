#ifndef _MNSCREENADJUST_H_
#define _MNSCREENADJUST_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnScreenAdjustFuncLights(Gfx **dls);
extern void mnScreenAdjustFrameProcDisplay(GObj *gobj);
extern void mnScreenAdjustMakeFrame();
extern void mnScreenAdjustMakeGuide();
extern void mnScreenAdjustMakeInstruction();
extern void mnScreenAdjustMakeFrameCamera();
extern void mnScreenAdjustMakeSpriteCamera();
extern void mnScreenAdjustApplyCenterOffsets(s16 h, s16 v);
extern void mnScreenAdjustInitVars();
extern void mnScreenAdjustBackupOffsets();
extern void mnScreenAdjustFuncRun(GObj *gobj);
extern void mnScreenAdjustFuncStart();
extern void mnScreenAdjustStartScene();

#endif
