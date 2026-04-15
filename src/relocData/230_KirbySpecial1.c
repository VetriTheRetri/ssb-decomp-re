/* relocData file 230: KirbySpecial1 — 48 bytes of non-`WPAttributes`
 * data. Kirby's neutral special (Inhale) isn't a projectile, and
 * Kirby's Cutter hammer weapon attributes live in KirbyMain
 * (see `llKirbyMainCutterWeaponAttributes` at src/wp/wpkirby/
 * wpkirbycutter.c), not here. This file is only referenced via
 * `llKirbySpecial1FileID` by sc1pgame.c, which loads it into
 * external heap alongside Ness's PK Fire particles during the
 * Kirby 1P stage — the bytes look like a DObjDLLink-ish array
 * of (joint_id, dl_offset) pairs (ids 1..8 with most `dl_offset`
 * zero except entry 6 → 0x1D8, terminated by id=0xFFFF), likely
 * a stage-specific DObj fix-up. Typing as a real DObjDLLink[]
 * would need the declaration from sys/objtypes.h verified
 * against the bytes. */

#include "relocdata_types.h"

u8 dKirbySpecial1[0x30] = {
	#include <KirbySpecial1/KirbySpecial1.data.inc.c>
};
