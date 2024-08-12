#ifndef _GRTYPES_H_
#define _GRTYPES_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <mp/map.h>
#include <cm/camera.h>
#include <gm/generic.h>

#include <gr/grdef.h>
#include <gr/grvars.h>

struct grGeometryDesc
{
	void *proc_renderpri;
	void *proc_rendersec;
	u8 dl_link;
	void *proc_update;
};

struct grHitbox
{
	s32 kind;
	s32 damage;
	s32 angle;
	s32 knockback_scale;
	s32 knockback_weight;
	s32 knockback_base;
	s32 element;
};

struct grObstacle
{
	GObj *gobj;
	sb32 (*proc_update)(GObj*, GObj*, s32*);
};

struct grHazard
{
	GObj *gobj;
	sb32 (*proc_update)(GObj*, GObj*, grHitbox**, s32*);
};

struct grFileInfo
{
	intptr_t file_id, offset;
};

union grStruct
{
	// Common stages
	grCommonGroundVarsPupupu pupupu;
	grCommonGroundVarsSector sector;
	grCommonGroundVarsZebes zebes;
	grCommonGroundVarsYoster yoster;
	grCommonGroundVarsInishie inishie;
	grCommonGroundVarsJungle jungle;
	grCommonGroundVarsHyrule hyrule;
	grCommonGroundVarsYamabuki yamabuki;
	grCommonGroundVarsCastle castle;

	// Bonus stages
	grBonusGroundVarsBonus1 bonus1;
	grBonusGroundVarsBonus2 bonus2;
	grBonusGroundVarsBonus3 bonus3;
};

#endif
