#ifndef _LBTRANSITION_H_
#define _LBTRANSITION_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <lb/lbdef.h>

extern uintptr_t lLBTransitionAeroplaneFileID;          // 0x00000028
extern intptr_t  lLBTransitionAeroplaneDObjDesc;        // 0x0000B3F8
extern intptr_t  lLBTransitionAeroplaneAnimJoint;       // 0x0000B710

extern uintptr_t lLBTransitionCheckFileID;              // 0x00000029
extern intptr_t  lLBTransitionCheckDObjDesc;            // 0x00003E80
extern intptr_t  lLBTransitionCheckAnimJoint;           // 0x00004038

extern uintptr_t lLBTransitionGakubuthiFileID;          // 0x0000002A
extern intptr_t  lLBTransitionGakubuthiDObjDesc;        // 0x00000F98
extern intptr_t  lLBTransitionGakubuthiAnimJoint;       // 0x0000101C

extern uintptr_t lLBTransitionKannonFileID;             // 0x0000002B
extern intptr_t  lLBTransitionKannonDObjDesc;           // 0x00001F00
extern intptr_t  lLBTransitionKannonAnimJoint;          // 0x00001FB0

extern uintptr_t lLBTransitionStarFileID;               // 0x0000002C
extern intptr_t  lLBTransitionStarDObjDesc;             // 0x00002450
extern intptr_t  lLBTransitionStarAnimJoint;            // 0x000024D4

extern uintptr_t lLBTransitionSudare1FileID;            // 0x0000002D
extern intptr_t  lLBTransitionSudare1DObjDesc;          // 0x000074A8
extern intptr_t  lLBTransitionSudare1AnimJoint;         // 0x00007660

extern uintptr_t lLBTransitionSudare2FileID;            // 0x0000002E
extern intptr_t  lLBTransitionSudare2DObjDesc;          // 0x00003EA0
extern intptr_t  lLBTransitionSudare2AnimJoint;         // 0x00003F50

extern uintptr_t lLBTransitionCameraFileID;             // 0x00000033
extern intptr_t  lLBTransitionCameraDObjDesc;           // 0x00003F90
extern intptr_t  lLBTransitionCameraAnimJoint;          // 0x00003F50

extern uintptr_t lLBTransitionBlockFileID;              // 0x00000030
extern intptr_t  lLBTransitionBlockDObjDesc;            // 0x00004E18
extern intptr_t  lLBTransitionBlockAnimJoint;           // 0x0000536C

extern uintptr_t lLBTransitionRotScaleFileID;           // 0x00000031
extern intptr_t  lLBTransitionRotScaleDObjDesc;         // 0x00000F98
extern intptr_t  lLBTransitionRotScaleAnimJoint;        // 0x0000101C

extern uintptr_t lLBTransitionCurtainFileID;            // 0x00000032
extern intptr_t  lLBTransitionCurtainDObjDesc;          // 0x00007AE8
extern intptr_t  lLBTransitionCurtainAnimJoint;         // 0x00007C98

extern GObj* lbTransitionMakeCamera(u32 id, s32 link, u32 link_priority, u64 cobj_mask);
extern void lbTransitionFuncDisplay(GObj *gobj);
extern void lbTransitionProcUpdate(GObj *gobj);
extern GObj* lbTransitionMakeTransition(s32 transition_id, u32 id, s32 link, void (*func_display)(GObj*), u8 dl_link_id, void (*func)(GObj*));
extern void lbTransitionSetupTransition(void);

#endif
