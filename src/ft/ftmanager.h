#ifndef _FTMANAGER_H_
#define _FTMANAGER_H_

#include "ftdef.h"
#include <ssb_types.h>
#include <sys/objdef.h>

void ftManagerSetupFileSize();
void ftManagerAllocFighter(u32 data_flags, s32 allocs_num);
ftStruct* ftManagerGetNextStructAlloc();
void ftManagerSetPrevStructAlloc(ftStruct* fp);
ftParts* ftManagerGetNextPartsAlloc();
void ftManagerSetPrevPartsAlloc(ftParts* ft_parts);
void ftManagerSetupFilesMainKind(s32 ft_kind);
void func_ovl2_800D7710(s32 ft_kind);
void ftManagerSetupFilesPlayablesAll();
void ftManagerSetupFilesAllKind(s32 ft_kind);
void* ftManagerAllocAnimHeapKind(s32 ft_kind);
void ftManagerDestroyFighter(GObj* fighter_gobj);
void ftManagerDestroyFighterWeapons(GObj* fighter_gobj);
void func_ovl2_800D79F0(GObj* fighter_gobj, ftCreateDesc* spawn);
GObj* ftManagerMakeFighter(ftCreateDesc* spawn);

#endif
