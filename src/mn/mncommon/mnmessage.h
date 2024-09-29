#ifndef _MNMESSAGE_H_
#define _MNMESSAGE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern intptr_t lMNMessageDecalExclaimSprite;               // 0x00005300

extern intptr_t lMNMessageUnlockLuigiSprite;                // 0x000009E0
extern intptr_t lMNMessageUnlockNessSprite;                 // 0x00001148
extern intptr_t lMNMessageUnlockCaptainSprite;              // 0x00001F50
extern intptr_t lMNMessageUnlockPurinSprite;                // 0x00002E58
extern intptr_t lMNMessageUnlockInishieSprite;              // 0x00003458
extern intptr_t lMNMessageUnlockSoundTestSprite;            // 0x00004180
extern intptr_t lMNMessageUnlockItemSwitchSprite;           // 0x00004EB0

extern void mnMessageProcLights(Gfx **dls);
extern void mnMessageMakeWallpaper(void);
extern void mnMessageTintProcDisplay(GObj *gobj);
extern void mnMessageMakeTint(void);
extern void mnMessageMakeExclaim(void);
extern void mnMessageMakeMessage(s32 message);
extern void mnMessageMakeTintCamera(void);
extern void mnMessageMakeMessageCamera(void);
extern void mnMessageMakeWallpaperCamera(void);
extern void mnMessageMakeExclaimCamera(void);
extern void mnMessageInitVars(void);
extern void mnMessageApplyUnlock(void);
extern void mnMessageProcRun(GObj *gobj);
extern void mnMessageProcStart(void);
extern void mnMessageStartScene(void);

#endif
