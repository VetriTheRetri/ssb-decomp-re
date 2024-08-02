#ifndef _WPMANAGER_H_
#define _WPMANAGER_H_

#include "wptypes.h"

// Allocate memory for weapon structs
void wpManagerAllocWeapons(void);

// Get memory region for weapon struct and advance global region pointer
wpStruct* wpManagerGetNextStructAlloc(void);

// Roll back local and global weapon struct pointer by one unit
void wpManagerSetPrevStructAlloc(wpStruct* wp);

// Get group index for weapon and increment global group count
u32 wpManagerGetGroupID();

// Create new weapon
GObj* wpManagerMakeWeapon(GObj* spawn_gobj, wpCreateDesc* wp_desc, Vec3f* spawn_pos, u32 flags);

#endif
