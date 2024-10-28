#ifndef _GRTYPES_H_
#define _GRTYPES_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <mp/map.h>
#include <cm/camera.h>
#include <gm/generic.h>

#include <gr/grdef.h>
#include <gr/grvars.h>

struct GRDisplayDesc
{
	void *func_displaypri;
	void *func_displaysec;
	u8 dl_link;
	void *proc_update;
};

struct GRAttackColl
{
	s32 kind;
	s32 damage;
	s32 angle;
	s32 knockback_scale;
	s32 knockback_weight;
	s32 knockback_base;
	s32 element;
};

struct GRObstacle
{
	GObj *gobj;
	sb32 (*proc_update)(GObj*, GObj*, s32*);
};

struct GRHazard
{
	GObj *gobj;
	sb32 (*proc_update)(GObj*, GObj*, GRAttackColl**, s32*);
};

struct GRFileInfo
{
	intptr_t file_id, offset;
};

union GRStruct
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
