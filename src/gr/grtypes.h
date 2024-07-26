#ifndef _GRTYPES_H_
#define _GRTYPES_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <mp/map.h>
#include <cm/camera.h>
#include <gm/battle.h>
#include <gm/gmmisc.h>

#include "grdef.h"
#include "groundvars.h"

struct grGeometryDesc
{
	void *proc_renderpri;
	void *proc_rendersec;
	u8 dl_link;
	void *proc_update;
};

struct grHitbox
{
	s32 env_kind; // Not actually UpdateState, no idea what this is; something
				  // to do with sound effects?
	s32 damage;
	s32 angle;
	s32 knockback_scale;
	s32 knockback_weight;
	s32 knockback_base;
	s32 element;
};

struct grMapObject
{
	GObj* ogobj;
	sb32 (*proc_update)(GObj*, GObj*, s32*);
};

struct grMapEnvironment
{
	GObj* egobj;
	sb32 (*proc_update)(GObj*, GObj*, grHitbox*, s32*);
};

struct grFileInfo
{
	intptr_t size, offset;
};

union grStruct
{
	// Common stages
	grCommon_GroundVars_Pupupu pupupu;
	grCommon_GroundVars_Sector sector;
	grCommon_GroundVars_Zebes zebes;
	grCommon_GroundVars_Yoster yoster;
	grCommon_GroundVars_Inishie inishie;
	grCommon_GroundVars_Jungle jungle;
	grCommon_GroundVars_Hyrule hyrule;
	grCommon_GroundVars_Yamabuki yamabuki;
	grCommon_GroundVars_Castle castle;

	// Bonus stages
	grBonus_GroundVars_Bonus1 bonus1;
	grBonus_GroundVars_Bonus2 bonus2;
	grBonus_GroundVars_Bonus3 bonus3;
};

#endif
