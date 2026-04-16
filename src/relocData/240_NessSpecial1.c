/* relocData file 240: NessSpecial1 — PK Fire weapon + item attributes.
 *
 * Layout:
 *   0x00..0x34 (52 B): `WPAttributes` for the PK Fire spark weapon
 *                      (wp/wpness/wpnesspkfire.c)
 *   0x34..0x80 (76 B): raw bytes for the PK Fire flame `ITAttributes`
 *                      (72 B struct + 4 B pad). Still held as a u8 array
 *                      pending field-by-field decoding; the ITAttributes
 *                      struct now uses the same `u32 size : 16` fix as
 *                      WPAttributes (see src/it/ittypes.h) so this blob
 *                      can be promoted to a typed initializer later.
 *
 * Both blocks carry cross-file reloc chain entries that point into
 * NessSpecial3 (file 336). The u16 target-file IDs live in the
 * post-compression trailer (see tools/vpk0_excess_bytes.txt); fixRelocChain.py
 * overwrites each slot at build time with the chain-encoded pair from the
 * .reloc file. The symbolic references in the WPAttributes initializer are
 * purely for source readability; the two chain entries inside the raw
 * ItemAttributes blob at u8 offsets 0x00 and 0x08 are overwritten the same
 * way (their current byte values are don't-cares).
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern u8 dNessSpecial3_gap_0x0000[];  /* file 336 */

WPAttributes dNessSpecial1_PKFire_WeaponAttributes = {
    (void *)(dNessSpecial3_gap_0x0000 + 0x168),                    /* data (336+0x168) */
    (MObjSub ***)dNessSpecial3_gap_0x0000,                         /* p_mobjsubs (336+0x000) */
    NULL,  /* anim_joints */
    (AObjEvent32 ***)(dNessSpecial3_gap_0x0000 + 0x1E0),           /* p_matanim_joints (336+0x1E0) */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    10, 0, -10, 10,  /* map_coll top/center/bottom/width */
    200,  /* size */
    80,  /* angle            : 10 */
    50,  /* knockback_scale  : 10 */
    4,  /* damage           :  8 */
    1,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    2,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    0,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    40,  /* knockback_base   : 10 */
};

u8 dNessSpecial1_PKFire_ItemAttributes[76] = {
    0x00, 0x0F, 0x02, 0x82, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x02, 0xBC, 0x00, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x5E, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xC8, 0x00, 0x00, 0x00, 0xC8, 0x01, 0x90,
    0x00, 0xC8, 0x01, 0x90, 0x00, 0xC8, 0x00, 0x00,
    0x00, 0x64, 0x00, 0xC8, 0x11, 0x80, 0xA0, 0x31,
    0x00, 0x00, 0x20, 0x36, 0x39, 0x01, 0x18, 0x40,
    0x0E, 0x43, 0x90, 0xE4, 0x32, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
};
