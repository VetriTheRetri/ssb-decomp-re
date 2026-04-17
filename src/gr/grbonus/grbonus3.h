#ifndef _GRBONUS3_H_
#define _GRBONUS3_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grBonus3InitHeaders();
extern void grBonus3MakeBumpers();
extern void grBonus3TaruBombProcUpdate(GObj *ground_gobj);
extern void grBonus3TaruBombMakeActor();
extern void grBonus3FinishProcUpdate(GObj *ground_gobj);
extern void grBonus3FinishMakeActor();
extern GObj* grBonus3MakeGround();

#endif
