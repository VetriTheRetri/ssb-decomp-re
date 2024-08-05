#ifndef _OBJFUNCTIONS_H_
#define _OBJFUNCTIONS_H_

#include <sys/objmanager.h>
#include <sys/objdraw.h>

// Orphan functions (no header yet / header not cleaned up yet)

// Add animation script to specific DObj
extern void gcAddDObjAnimJoint(DObj*, AObjAnimJoint*, f32);

// Add material animation script to specific MObj
extern void gcAddMObjMatAnimJoint(MObj*, AObjAnimJoint*, f32);

// Add animation script to all DObjs on a GObj
extern void gcAddAnimJointAll(GObj *gobj, AObjAnimJoint **anim_joints, f32 anim_frame);

#endif
