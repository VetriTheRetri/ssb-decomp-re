#ifndef _ITMANAGER_H_
#define _ITMANAGER_H_

#include "ittypes.h"
#include <wp/wptypes.h>
#include <ft/fttypes.h>

// Allocate memory for item structs and initialize global item-related data
void itManagerInitItems();

// Get memory region for item struct and advance global region pointer
itStruct* itManagerGetItemSetNextAlloc();

// Roll back local and global item struct pointer by one unit
void itManagerSetPrevAlloc(itStruct* ip);

// Unknown, something to do with setting up item models?
void itManagerDObjSetup(GObj* gobj, DObjDesc* dobj_desc, DObj** p_ptr_dobj, u8 transform_kind);

// Create new item
GObj* itManagerMakeItem(GObj* spawn_gobj, itCreateDesc* item_desc, Vec3f* pos, Vec3f* vel, u32 flags);

// Create item and init spawn GFX + spin rotation if common item (indexes 0 - 19)
GObj* itManagerMakeItemSetupCommon(GObj* spawn_gobj, s32 index, Vec3f* pos, Vec3f* vel, u32 spawn_flags);

// Get current item user_data to see if != NULL
itStruct* itManagerGetAllocFree();

// Set wait timer for next item spawn
void itManagerSetItemSpawnWait();

// GObj process for hidden object that randomly spawns items - argument is unused
void itManagerMakeRandomItem(GObj* item_gobj);

// Set up item spawn positions?
GObj* itManagerMakeItemSpawnActor();

// Set up item spawn positions part 2?
void itManagerSetupContainerDrops();

// Set up global Pokémon spawn variables
void itManagerInitMonsterVars();

// Make immediate item with index
GObj* itManagerMakeItemID(GObj* spawn_gobj, s32 index, Vec3f* pos, Vec3f* vel, u32 flags);

// Update positions of item hitboxes
void itProcessUpdateHitPositions(GObj* item_gobj);

// Update item's record of interacted targets (Decrement rehit timer if available, clear targets if timer reaches 0)
void itProcessUpdateHitRecord(GObj* item_gobj);

// Main item logic GObj process (animation, physics, collision, blastzone check)
void itProcessProcItemMain(GObj* item_gobj);

#endif
