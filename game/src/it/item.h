#ifndef _ITEM_H_
#define _ITEM_H_

#include "ittypes.h"
#include "itfunctions.h"

extern itMonsterInfo gMonsterData; // Static (.bss) (0x8018D060)
extern itFileData *gpItemFileData;

#define itGetStruct(item_gobj) \
((itStruct*) (item_gobj)->user_data) \

// Points to all sorts of data

#define itGetPData(ip, off1, off2) \
( (void*) ( ( (uintptr_t)(ip)->attributes->unk_0x0 - (intptr_t)&(off1) ) + (intptr_t)&(off2) ) ) \

#define itGetHitEvent(it_desc, off) \
( (itHitEvent*) ( (uintptr_t)*(it_desc).p_file + (intptr_t)&(off) ) ) \

#define itGetHitParty(it_desc, off) \
( (itHitParty*) ( (uintptr_t)*(it_desc).p_file + (intptr_t)&(off) ) ) \

#endif
