#ifndef _FTMANAGER_H_
#define _FTMANAGER_H_

#include "ftdef.h"
#include <ssb_types.h>
#include <sys/objdef.h>

void ftManagerSetupFileSize(void);
void ftManagerAllocFighter(u32 data_flags, s32 alloc_count);
ftStruct* ftManagerGetStructSetNextAlloc(void);
void ftManager_SetPrevAlloc(ftStruct *fp);
ftParts* ftManager_GetFighterPartsSetNextAlloc(void);
void ftManager_SetFighterPartsPrevAlloc(ftParts *ft_parts);
void ftManagerSetupDataMain(s32 ft_kind);
void ftManagerSetupDataFiles(s32 ft_kind);
void ftManagerSetupDataPlayables(void);
void ftManagerSetupDataKind(s32 ft_kind);
void *ftManagerAllocAnimHeapKind(s32 ft_kind);
void ftManagerDestroyFighter(GObj *fighter_gobj);
void func_ovl2_800D7994(GObj *fighter_gobj);
void ftManagerInitFighter(GObj *fighter_gobj, ftCreateDesc *spawn);
GObj* ftManagerMakeFighter(ftCreateDesc *spawn);

#endif