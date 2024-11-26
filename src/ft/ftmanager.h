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

extern FTDesc dFTManagerDefaultFighterDesc;
extern FTData *dFTManagerDataFiles[/* */];

extern void ftManagerSetupFileSize();
extern void ftManagerAllocFighter(u32 data_flags, s32 allocs_num);
extern FTStruct* ftManagerGetNextStructAlloc();
extern void ftManagerSetPrevStructAlloc(FTStruct* fp);
extern FTParts* ftManagerGetNextPartsAlloc();
extern void ftManagerSetPrevPartsAlloc(FTParts* parts);
extern void ftManagerSetupFilesMainKind(s32 fkind);
extern void func_ovl2_800D7710(s32 fkind);
extern void ftManagerSetupFilesPlayablesAll();
extern void ftManagerSetupFilesAllKind(s32 fkind);
extern void* ftManagerAllocFigatreeHeapKind(s32 fkind);
extern void ftManagerDestroyFighter(GObj* fighter_gobj);
extern void ftManagerDestroyFighterWeapons(GObj* fighter_gobj);
extern void func_ovl2_800D79F0(GObj* fighter_gobj, FTDesc *ft_desc);
extern GObj* ftManagerMakeFighter(FTDesc *ft_desc);

#endif
