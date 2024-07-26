#ifndef _CAMERA_H_
#define _CAMERA_H_

#include "cmtypes.h"
#include "cmfunctions.h"

// 0x80131460
extern GObj* gCMManagerCameraGObj;

// 0x80131464
extern f32 gCMManagerPauseCameraEyeX;

// 0x80131468
extern f32 gCMManagerPauseCameraEyeY; // Also from .bss

// 0x80131470
extern Mtx44f gCMManagerMtx; // Mtx44f?

// 0x801314B0
extern cmStruct gCMManagerCameraStruct;

#endif
