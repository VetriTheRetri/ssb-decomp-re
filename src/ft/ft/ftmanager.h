#ifndef _FTMANAGER_H_
#define _FTMANAGER_H_

#include "ftdef.h"
#include <ssb_types.h>
#include <sys/objdef.h>

void func_ovl2_800D6FE0(void);
void ftManager_AllocFighterData(u32 data_flags, s32 alloc_count);
ftStruct* ftManager_GetStructSetNextAlloc(void);
void ftManager_SetPrevAlloc(ftStruct* fp);
ftParts* ftManager_GetFighterPartsSetNextAlloc(void);
void ftManager_SetFighterPartsPrevAlloc(ftParts* ft_parts);
void ftManager_SetMainFileData(s32 ft_kind);
void func_ovl2_800D7710(s32 ft_kind);
void ftManager_SetFileDataPlayables(void);
void ftManager_SetFileDataKind(s32 ft_kind);
void* ftManager_AllocAnimHeapKind(s32 ft_kind);
void func_ovl2_800D78E8(GObj* fighter_gobj);
void func_ovl2_800D7994(GObj* fighter_gobj);
void func_ovl2_800D79F0(GObj* fighter_gobj, ftCreateDesc* spawn);
GObj* ftManager_MakeFighter(ftCreateDesc* spawn);

#endif