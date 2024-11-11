#ifndef _MNNOCONTROLLER_H_
#define _MNNOCONTROLLER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <mn/mndef.h>

extern u32 lMNNoControllerFileID;                                   // 0x000000A9
extern intptr_t lMNNoControllerImageSprite; 				        // 0x00008460

extern void *gMNNoControllerFiles[/* */];

extern GObj* mnNoControllerMakeCamera(void);
extern void mnNoControllerMakeImage(void);
extern void mnNoControllerFuncStart(void);
extern void mnNoControllerStartScene(void);
extern void mnNoControllerSetupFiles(void);

#endif
