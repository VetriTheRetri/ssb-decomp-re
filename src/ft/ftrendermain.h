#ifndef _FTRENDERMAIN_H_
#define _FTRENDERMAIN_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>

extern void ftRenderMainDrawAfterImage(ftStruct *fp);
extern void ftRenderMainCalcFogColor(ftStruct *fp);
extern void ftRenderMainSetFogColor(ftStruct *fp);
extern void ftRenderMainDecideFogColor(ftStruct *fp);
extern void ftRenderMainDecideFogDraw(u8 flags, ftStruct *fp);
extern void ftRenderMainDrawAccessory(ftStruct *fp, DObj *dobj, ftParts *ft_parts);
extern void ftRenderMainDrawDefault(DObj *dobj);
extern void ftRenderMainDrawSkeleton(DObj *dobj);
extern void ftRenderMainDrawAll(GObj *fighter_gobj);
extern void ftRenderMainDrawParts(DObj *dobj);
extern void ftRenderMainProcRender(GObj *fighter_gobj);

#endif
