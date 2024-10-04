#ifndef _MVOPENINGNEWCOMERS_H_
#define _MVOPENINGNEWCOMERS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mv/movie.h>

extern intptr_t lMVOpeningNewcomersPurinShowDisplayList;        // 0x00005C28
extern intptr_t lMVOpeningNewcomersPurinAnimJoint;              // 0x00005E44
extern intptr_t lMVOpeningNewcomersPurinHiddenDisplayList;      // 0x000203A8

extern intptr_t lMVOpeningNewcomersLuigiShowDisplayList;        // 0x0001C838
extern intptr_t lMVOpeningNewcomersLuigiAnimJoint;              // 0x0001CE94
extern intptr_t lMVOpeningNewcomersLuigiHiddenDisplayList;      // 0x00028C28

extern intptr_t lMVOpeningNewcomersCaptainShowDisplayList;      // 0x0002C238
extern intptr_t lMVOpeningNewcomersCaptainAnimJoint;            // 0x0002C9D4
extern intptr_t lMVOpeningNewcomersCaptainHiddenDisplayList;    // 0x000355C0

extern intptr_t lMVOpeningNewcomersNessShowDisplayList;         // 0x0002A448
extern intptr_t lMVOpeningNewcomersNessAnimJoint;               // 0x0002A864
extern intptr_t lMVOpeningNewcomersNessHiddenDisplayList;       // 0x0003BAF8

extern void mvOpeningNewcomersFuncLights(Gfx **dls);
extern sb32 mvOpeningNewcomersCheckLocked(s32 ft_kind);
extern void mvOpeningNewcomersMakePurin(void);
extern void mvOpeningNewcomersMakeCaptain(void);
extern void mvOpeningNewcomersMakeLuigi(void);
extern void mvOpeningNewcomersMakeNess(void);
extern void mvOpeningNewcomersMakeAll(void);
extern void mvOpeningNewcomersHideProcDisplay(GObj *gobj);
extern void mvOpeningNewcomersMakeHide(void);
extern void mvOpeningNewcomersMakeNewcomersCamera(void);
extern void mvOpeningNewcomersMakeHideCamera(void);
extern void mvOpeningNewcomersInitVars(void);
extern void mvOpeningNewcomersFuncRun(GObj *gobj);
extern void mvOpeningNewcomersFuncStart(void);
extern void mvOpeningNewcomersStartScene(void);

#endif
