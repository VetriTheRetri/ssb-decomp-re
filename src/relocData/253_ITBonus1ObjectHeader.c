/* relocData file 253: ITBonus1ObjectHeader — the Break the Targets
 * target's ITAttributes (dITTargetItemDesc reads it at offset 0 of
 * this file via gSC1PBonusStageItemFile; data -> the target model's
 * DObjDesc in ITBonus1Object). The US/JP byte differences are all
 * region-aware FGM enum values — no guards needed. */

#include <it/ittypes.h>
#include <gm/gmsound.h>
#include "relocdata_types.h"

extern DObjDesc dITBonus1Object_DObjDesc[];

ITAttributes dITBonus1ObjectHeader[1] = {{
	(void *)dITBonus1Object_DObjDesc, /* data */
	NULL,                             /* p_mobjsubs */
	NULL,                             /* anim_joints */
	NULL,                             /* p_matanim_joints */
	1, 1, 0, 1, 1, /* xlu, item_dobjs, colanim, hitlag, weight */
	0, 0, 0, 0, 0, 0,                 /* attack offsets */
	{ 0, 0, 0 },                      /* damage_coll_offset */
	{ 300, 300, 300 },                /* damage_coll_size */
	180, 0, -180, 180,                /* map_coll */
	200,                              /* size */
	361, 100, 1,                      /* angle (sakurai), ks, dmg */
	0, 400, 0, 1, 1,                  /* elem, kw, sd, ac, cso */
	nSYAudioFGMBumperHit, 1, 1, 1, 1, 1, 1, /* hit_sfx, prio, rehits, hop, refl, shield */
	10, 6, 1, 0, 0,                   /* kb, type, hitstatus */
	nSYAudioFGMItemThrow, nSYAudioFGMItemThrow, nSYAudioFGMItemThrow,
	100, 0,                           /* vel_scale, spin */
}};
