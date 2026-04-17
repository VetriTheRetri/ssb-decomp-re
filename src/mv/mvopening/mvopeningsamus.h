#ifndef _MVOPENINGSAMUS_H_
#define _MVOPENINGSAMUS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningSamusSetupFiles();
extern void mvOpeningSamusInitName(SObj *sobj);
extern void mvOpeningSamusMakeName();
extern void mvOpeningSamusMotionCameraProcUpdate(GObj *camera_gobj);
extern void mvOpeningSamusMakeMotionCamera(Vec3f vec);
extern void mvOpeningSamusMakeMotionWindow();
extern void mvOpeningSamusPosedWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningSamusMakePosedWallpaper();
extern void mvOpeningSamusPosedFighterProcUpdate(GObj *fighter_gobj);
extern void mvOpeningSamusMakePosedFighter();
extern void mvOpeningSamusMakeNameCamera();
extern void mvOpeningSamusMakePosedFighterCamera();
extern void mvOpeningSamusMakePosedWallpaperCamera();
extern void mvOpeningSamusFuncRun(GObj *gobj);
extern void mvOpeningSamusInitVars();
extern void mvOpeningSamusFuncStart();
extern void mvOpeningSamusFuncLights(Gfx **dls);
extern void mvOpeningSamusStartScene();

#endif
