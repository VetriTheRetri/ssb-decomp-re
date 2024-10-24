#ifndef _FTRENDERMAIN_H_
#define _FTRENDERMAIN_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>

extern Vec2f dFTDisplayMainShufflePositions[/* */][4];

extern void ftDisplayMainDrawAfterImage(ftStruct *fp);
extern void ftDisplayMainCalcFogColor(ftStruct *fp);
extern void ftDisplayMainSetFogColor(ftStruct *fp);
extern void ftDisplayMainDecideFogColor(ftStruct *fp);
extern void ftDisplayMainDecideFogDraw(u8 flags, ftStruct *fp);
extern void ftDisplayMainDrawAccessory(ftStruct *fp, DObj *dobj, ftParts *ft_parts);
extern void ftDisplayMainDrawDefault(DObj *dobj);
extern void ftDisplayMainDrawSkeleton(DObj *dobj);
extern void ftDisplayMainDrawAll(GObj *fighter_gobj);
extern void ftDisplayMainDrawParts(DObj *dobj);
extern void ftDisplayMainFuncDisplay(GObj *fighter_gobj);

#endif
