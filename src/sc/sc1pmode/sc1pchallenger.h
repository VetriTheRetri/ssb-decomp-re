#ifndef _SC1PCHALLENGER_H_
#define _SC1PCHALLENGER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>

extern intptr_t lSC1PChallengerTextChallengerSprite;            // 0x000001F8
extern intptr_t lSC1PChallengerTextApproachingSprite;           // 0x00000488
extern intptr_t lSC1PChallengerTextWarningSprite;               // 0x00000968
extern intptr_t lSC1PChallengerDecalExclaimSprite;              // 0x00000DB0

extern void sc1PChallengerProcLights(Gfx **dls);
extern void sc1PChallengerDecalsProcDisplay(GObj *gobj);
extern void sc1PChallengerMakeDecals(void);
extern void sc1PChallengerFighterProcUpdate(GObj *fighter_gobj);
extern void sc1PChallengerMakeFighter(s32 ft_kind);
extern void sc1PChallengerMakeFighterCamera(void);
extern void sc1PChallengerMakeDecalsCamera(void);
extern void sc1PChallengerInitVars(void);
extern void sc1PChallengerProcRun(GObj *gobj);
extern void sc1PChallengerProcStart(void);
extern void sc1PChallengerStartScene(void);

#endif