#ifndef _FTMANAGER_H_
#define _FTMANAGER_H_

#include "ftdef.h"
#include <ssb_types.h>
#include <sys/objdef.h>

extern u32 gFTManagerPlayersNum;
extern u16 gFTManagerMotionCount;
extern u16 gFTManagerStatUpdateCount;
extern void *gFTManagerCommonFile;
extern size_t gFTManagerFigatreeHeapSize;

extern ftCreateDesc dFTManagerDefaultFighterDesc;
extern ftData *dFTManagerDataFiles[/* */];

extern void ftManagerSetupFileSize();
extern void ftManagerAllocFighter(u32 data_flags, s32 allocs_num);
extern ftStruct* ftManagerGetNextStructAlloc();
extern void ftManagerSetPrevStructAlloc(ftStruct* fp);
extern ftParts* ftManagerGetNextPartsAlloc();
extern void ftManagerSetPrevPartsAlloc(ftParts* ft_parts);
extern void ftManagerSetupFilesMainKind(s32 ft_kind);
extern void func_ovl2_800D7710(s32 ft_kind);
extern void ftManagerSetupFilesPlayablesAll();
extern void ftManagerSetupFilesAllKind(s32 ft_kind);
extern void* ftManagerAllocFigatreeHeapKind(s32 ft_kind);
extern void ftManagerDestroyFighter(GObj* fighter_gobj);
extern void ftManagerDestroyFighterWeapons(GObj* fighter_gobj);
extern void func_ovl2_800D79F0(GObj* fighter_gobj, ftCreateDesc *ft_desc);
extern GObj* ftManagerMakeFighter(ftCreateDesc *ft_desc);

#endif
