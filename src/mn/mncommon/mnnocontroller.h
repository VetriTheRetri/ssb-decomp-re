#ifndef _MNNOCONTROLLER_H_
#define _MNNOCONTROLLER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <mn/mndef.h>

extern void *gMNNoControllerFiles[];

extern GObj* mnNoControllerMakeCamera();
extern void mnNoControllerMakeImage();
extern void mnNoControllerFuncStart();
extern void mnNoControllerStartScene();
extern void mnNoControllerSetupFiles();

#endif
