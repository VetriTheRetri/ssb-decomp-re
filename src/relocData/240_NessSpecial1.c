/* relocData file 240: NessSpecial1 — PK Fire weapon + item attributes.
 *
 * Layout:
 *   0x00..0x34 (52 B): `WPAttributes` for the PK Fire spark weapon
 *                      (wp/wpness/wpnesspkfire.c)
 *   0x34..0x80 (76 B): raw bytes for the PK Fire flame `ITAttributes` —
 *                      kept as a u8 array because ITAttributes has the
 *                      same bitfield-packing quirks as WPAttributes and
 *                      is not yet covered by a struct-level fix.
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

WPAttributes dNessSpecial1_PKFire_WeaponAttributes = {
    (void *)0x0001005A,  /* data */
    (MObjSub ***)0x00030000,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    (AObjEvent32 ***)0x000D0078,  /* p_matanim_joints */
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
