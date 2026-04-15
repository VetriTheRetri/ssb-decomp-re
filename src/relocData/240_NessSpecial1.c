/* relocData file 240: NessSpecial1 — PK Fire weapon + item attributes.
 *
 * Contains two back-to-back structs:
 *   0x00..0x34 (52 B): `WPAttributes` for the PK Fire spark weapon,
 *                      used by src/wp/wpness/wpnesspkfire.c
 *   0x34..0x80 (76 B): `ITAttributes` for the PK Fire flame item,
 *                      spawned when the spark hits a surface.
 *
 * Both structs have bitfield-packed tails (hitbox params) whose IDO
 * layout doesn't cleanly match the widths declared in wp/wptypes.h
 * and it/ittypes.h, so the bytes stay as raw u8 arrays. Pointer
 * fields chain-patch to symbols inside NessMain at load time.
 */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0034 (52 bytes) */
u8 dNessSpecial1_PKFire_WeaponAttributes[52] = {
	#include <NessSpecial1/PKFire_WeaponAttributes.data.inc.c>
};

/* Raw data from file offset 0x0034 to 0x0080 (76 bytes) */
u8 dNessSpecial1_PKFire_ItemAttributes[76] = {
	#include <NessSpecial1/PKFire_ItemAttributes.data.inc.c>
};
