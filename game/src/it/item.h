#ifndef _ITEM_H_
#define _ITEM_H_

#include "ittypes.h"
#include "itfunctions.h"

// Global variables declared here as extern for easy access

// 0x8018D040
extern void *gItemFileData;

// 0x8018D044
extern void *gItemEffectBank;

// 0x8018D048
extern Unk_8018D048 D_ovl3_8018D048;

// 0x8018D060
extern itMonsterInfo gMonsterData;

// 0x8018D090
extern s32 gItemDisplayMode;

// 0x8018D094
extern itStruct *gItemStructCurrent;

// Linker variable, points to base of animation bank in item file? 0x00013624
extern intptr_t lMonsterAnimBankStart;

#define itGetStruct(item_gobj) \
((itStruct*) (item_gobj)->user_data) \

// Points to all sorts of data
#define itGetPData(ip, off1, off2) \
( (void*) ( ( (uintptr_t)(ip)->attributes->model_desc - (intptr_t)&(off1) ) + (intptr_t)&(off2) ) ) \

#define itGetMonsterAnimNode(ip, off) \
( (void*) ( ( (uintptr_t)(ip)->attributes->model_desc - (intptr_t)&(off) ) + (intptr_t)&lMonsterAnimBankStart ) ) \

#define itGetHitEvent(it_desc, off) \
( (itHitEvent*) ( (uintptr_t)*(it_desc).p_file + (intptr_t)&(off) ) ) \

#define itGetHitParty(it_desc, off) \
( (itHitParty*) ( (uintptr_t)*(it_desc).p_file + (intptr_t)&(off) ) ) \

#endif
