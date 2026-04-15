/* relocData file 244: PikachuSpecial1 — Thunder Jolt hitbox attributes.
 *
 * Two back-to-back `WPAttributes` structs (air and ground variants of
 * Thunder Jolt) used by src/wp/wppikachu/wppikachuthunderjolt.c:
 *   llPikachuSpecial1ThunderJoltAirWeaponAttributes    (= 0x00)
 *   llPikachuSpecial1ThunderJoltGroundWeaponAttributes (= 0x34)
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

WPAttributes dPikachuSpecial1_ThunderJoltAir_WeaponAttributes = {
    (void *)0x0002009C,  /* data */
    NULL,  /* p_mobjsubs */
    (AObjEvent32 **)0x000D00D8,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    50, 0, -50, 50,  /* map_coll top/center/bottom/width */
    200,  /* size */
    361,  /* angle            : 10 */
    30,  /* knockback_scale  : 10 */
    10,  /* damage           :  8 */
    2,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    23,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    0,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    50,  /* knockback_base   : 10 */
};

WPAttributes dPikachuSpecial1_ThunderJoltGround_WeaponAttributes = {
    (void *)0x000E0622,  /* data */
    (MObjSub ***)0x000F0406,  /* p_mobjsubs */
    (AObjEvent32 **)0x00100688,  /* anim_joints */
    (AObjEvent32 ***)0xFFFF06B8,  /* p_matanim_joints */
    { { 0, 100, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    200, 100, 0, 50,  /* map_coll top/center/bottom/width */
    200,  /* size */
    361,  /* angle            : 10 */
    20,  /* knockback_scale  : 10 */
    7,  /* damage           :  8 */
    2,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    23,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    0,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    0,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    10,  /* knockback_base   : 10 */
};

PAD(8);  /* trail to 16-byte file alignment (2 * sizeof(WPAttributes) = 104, +8 = 112) */
