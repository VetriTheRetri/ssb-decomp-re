#ifndef _MNMESSAGE_H_
#define _MNMESSAGE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnMessageFuncLights(Gfx **dls);
extern void mnMessageMakeWallpaper();
extern void mnMessageTintProcDisplay(GObj *gobj);
extern void mnMessageMakeTint();
extern void mnMessageMakeExclaim();
extern void mnMessageMakeMessage(s32 message);
extern void mnMessageMakeTintCamera();
extern void mnMessageMakeMessageCamera();
extern void mnMessageMakeWallpaperCamera();
extern void mnMessageMakeExclaimCamera();
extern void mnMessageInitVars();
extern void mnMessageApplyUnlock();
extern void mnMessageFuncRun(GObj *gobj);
extern void mnMessageFuncStart();
extern void mnMessageStartScene();

#endif
