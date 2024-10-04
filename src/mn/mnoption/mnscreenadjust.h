#ifndef _MNSCREENADJUST_H_
#define _MNSCREENADJUST_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern intptr_t lMNScreenAdjustInstructionSprite;           // 0x00000918
extern intptr_t lMNScreenAdjustGuideSprite;                 // 0x000098A0

extern void mnScreenAdjustFuncLights(Gfx **dls);
extern void mnScreenAdjustFrameProcDisplay(GObj *gobj);
extern void mnScreenAdjustMakeFrame(void);
extern void mnScreenAdjustMakeGuide(void);
extern void mnScreenAdjustMakeInstruction(void);
extern void mnScreenAdjustMakeFrameCamera(void);
extern void mnScreenAdjustMakeSpriteCamera(void);
extern void mnScreenAdjustApplyCenterOffsets(s16 h, s16 v);
extern void mnScreenAdjustInitVars(void);
extern void mnScreenAdjustBackupOffsets(void);
extern void mnScreenAdjustProcRun(GObj *gobj);
extern void mnScreenAdjustFuncStart(void);
extern void mnScreenAdjustStartScene(void);

#endif
