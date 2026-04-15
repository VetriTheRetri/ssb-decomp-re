/* relocData file 218: SamusSpecial1 — weapon attributes (hitbox config).
 *
 * Contains a single 64-byte `WPAttributes` struct (see src/wp/wptypes.h)
 * describing Samus Charge Shot. Used by src/wp/wpsamus/wpsamuschargeshot.c via the `WPDesc` at
 *   &gFTDataSamusSpecial1 + llSamusSpecial1ChargeShotWeaponAttributes (= 0x0)
 * which `lbRelocGetFileData(WPAttributes*, ...)` casts into a typed
 * view. Pointer fields (`data`, `anim_joints`) are chain-encoded and
 * get patched at load time to symbols inside the owning fighter's
 * `*Main` file via the shared relocation chain.
 *
 * The struct's bitfield-packed tail (angle, knockback_scale, damage,
 * element, knockback_weight, shield_damage, attack_count, can_setoff,
 * sfx, priority, can_rehit_*, can_hop/reflect/absorb/shield, unused,
 * knockback_base) doesn't initialize cleanly as an IDO-compiled
 * `WPAttributes = { ... }`: the declared bit widths in wp/wptypes.h
 * don't quite match the packing IDO produces for the last u32 word.
 * Leaving the bytes as a raw u8 array keeps the file byte-equivalent
 * to the baserom — the .inc.c companion is regenerated from the
 * extracted binary by extractRelocInc at build time.
 */

#include "relocdata_types.h"

u8 dSamusSpecial1_ChargeShot_WeaponAttributes[64] = {
	#include <SamusSpecial1/ChargeShot_WeaponAttributes.data.inc.c>
};
