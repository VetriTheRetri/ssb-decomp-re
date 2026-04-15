/* relocData file 244: PikachuSpecial1 — Thunder Jolt weapon attributes.
 *
 * Contains two `WPAttributes`-shaped blocks (one each for the
 * airborne and grounded variants of Thunder Jolt), used by
 * src/wp/wppikachu/wppikachuthunderjolt.c:
 *   0x00..0x34 (52 B): Thunder Jolt (air) — falls and bounces on landing
 *   0x34..0x70 (60 B): Thunder Jolt (ground) — travels along the stage
 *
 * Both blocks' bitfield-packed tails don't initialize cleanly as
 * IDO-compiled structs, so the bytes stay as raw u8 arrays.
 */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0034 (52 bytes) */
u8 dPikachuSpecial1_ThunderJoltAir_WeaponAttributes[52] = {
	#include <PikachuSpecial1/ThunderJoltAir_WeaponAttributes.data.inc.c>
};

/* Raw data from file offset 0x0034 to 0x0070 (60 bytes) */
u8 dPikachuSpecial1_ThunderJoltGround_WeaponAttributes[60] = {
	#include <PikachuSpecial1/ThunderJoltGround_WeaponAttributes.data.inc.c>
};
