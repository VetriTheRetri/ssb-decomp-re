/* relocData file 230: KirbySpecial1 — Kirby copy-ability weapon table.
 *
 * 9 chain-encoded pointers, one per fighter whose neutral special Kirby
 * can copy. Each slot resolves at load time (via the extern reloc chain
 * patched by fixRelocChain) to the target fighter's projectile
 * `WPAttributes` — or, for Captain Falcon and Yoshi (whose neutral
 * specials aren't WPAttributes-based projectiles), to the specific
 * Special3 sub-block the copy-ability runtime expects.
 *
 * Loaded by `sc1pgame.c` during the Kirby 1P stage so Kirby has access
 * to every other fighter's copy-ability descriptor in one place.
 *
 * The trailing `_pad` u32 array backfills the 12 bytes that follow the
 * 36-byte pointer table, keeping the file's 48-byte total intact.
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

extern WPAttributes dMarioSpecial1_Fireball_WeaponAttributes;
extern WPAttributes dFoxSpecial1_Blaster_WeaponAttributes;
extern WPAttributes dSamusSpecial1_ChargeShot_WeaponAttributes;
extern WPAttributes dLinkSpecial1_Boomerang_WeaponAttributes;
extern WPAttributes dPikachuSpecial1_ThunderJoltAir_WeaponAttributes;
extern u8 dCaptainSpecial3_gap_0x0760[];
extern WPAttributes dNessSpecial1_PKFire_WeaponAttributes;
extern WPAttributes dLuigiSpecial1_Fireball_WeaponAttributes;
extern u8 dYoshiSpecial3_EggLay[];

void *dKirbySpecial1[9] = {
	&dMarioSpecial1_Fireball_WeaponAttributes,             /* -> file 204 (MarioSpecial1) */
	&dFoxSpecial1_Blaster_WeaponAttributes,                /* -> file 210 (FoxSpecial1) */
	&dSamusSpecial1_ChargeShot_WeaponAttributes,           /* -> file 218 (SamusSpecial1) */
	&dLinkSpecial1_Boomerang_WeaponAttributes,             /* -> file 226 (LinkSpecial1) */
	&dPikachuSpecial1_ThunderJoltAir_WeaponAttributes,     /* -> file 244 (PikachuSpecial1) */
	dCaptainSpecial3_gap_0x0760,                           /* -> file 333 (CaptainSpecial3) @ 0x760 */
	&dNessSpecial1_PKFire_WeaponAttributes,                /* -> file 240 (NessSpecial1) */
	&dLuigiSpecial1_Fireball_WeaponAttributes,             /* -> file 222 (LuigiSpecial1) */
	dYoshiSpecial3_EggLay,                                 /* -> file 339 (YoshiSpecial3) @ 0x960 */
};

/* Trailing padding (12 bytes) — the file is 48 bytes total. */
u32 dKirbySpecial1_pad[3] = { 0x00000000, 0x00000000, 0x00000000 };
