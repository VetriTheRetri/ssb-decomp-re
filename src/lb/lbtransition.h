#ifndef _LBTRANSITION_H_
#define _LBTRANSITION_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <lb/lbdef.h>

extern LBTransitionDesc dLBTransitionDescs[11];

extern intptr_t lLBTransitionAeroplaneDObjDesc;        // 0x0000B3F8
extern intptr_t lLBTransitionAeroplaneAnimJoint;       // 0x0000B710

extern intptr_t lLBTransitionCheckDObjDesc;            // 0x00003E80
extern intptr_t lLBTransitionCheckAnimJoint;           // 0x00004038

extern intptr_t lLBTransitionGakubuthiDObjDesc;        // 0x00000F98
extern intptr_t lLBTransitionGakubuthiAnimJoint;       // 0x0000101C

extern intptr_t lLBTransitionKannonDObjDesc;           // 0x00001F00
extern intptr_t lLBTransitionKannonAnimJoint;          // 0x00001FB0

extern intptr_t lLBTransitionStarDObjDesc;             // 0x00002450
extern intptr_t lLBTransitionStarAnimJoint;            // 0x000024D4

extern intptr_t lLBTransitionSudare1DObjDesc;          // 0x000074A8
extern intptr_t lLBTransitionSudare1AnimJoint;         // 0x00007660

extern intptr_t lLBTransitionSudare2DObjDesc;          // 0x00003EA0
extern intptr_t lLBTransitionSudare2AnimJoint;         // 0x00003F50

extern intptr_t lLBTransitionCameraDObjDesc;           // 0x00003F90
extern intptr_t lLBTransitionCameraAnimJoint;          // 0x00003F50

extern intptr_t lLBTransitionBlockDObjDesc;            // 0x00004E18
extern intptr_t lLBTransitionBlockAnimJoint;           // 0x0000536C

extern intptr_t lLBTransitionRotScaleDObjDesc;         // 0x00000F98
extern intptr_t lLBTransitionRotScaleAnimJoint;        // 0x0000101C

extern intptr_t lLBTransitionCurtainDObjDesc;          // 0x00007AE8
extern intptr_t lLBTransitionCurtainAnimJoint;         // 0x00007C98

extern GObj* lbTransitionMakeCamera(u32 id, s32 link, u32 link_priority, u64 camera_mask);
extern void lbTransitionProcDisplay(GObj *gobj);
extern void lbTransitionProcUpdate(GObj *gobj);
extern GObj* lbTransitionMakeTransition(s32 transition_id, u32 id, s32 link, void (*proc_display)(GObj*), u8 dl_link_id, void (*func)(GObj*));
extern void lbTransitionSetupTransition(void);

#endif
