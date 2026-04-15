/* relocData file 204: MarioSpecial1 — Mario Fireball WPAttributes.
 *
 * One 64-byte `WPAttributes` struct (see src/wp/wptypes.h) describing the
 * Mario Fireball hitbox. Used by src/wp/wpmario/wpmariofireball.c via the `WPDesc` at
 *   &gFTDataMarioSpecial1 + llMarioSpecial1FireballWeaponAttributes (= 0x0),
 * which `lbRelocGetFileData(WPAttributes*, ...)` casts into a typed view.
 * Pointer fields (`data`, `anim_joints`) are chain-encoded; fixRelocChain
 * patches them at link time to symbols inside the owning fighter's *Main file.
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

WPAttributes dMarioSpecial1_Fireball_WeaponAttributes = {
    (void *)0x0001006A,  /* data */
    (MObjSub ***)0xFFFF0036,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    50, 0, -50, 50,  /* map_coll top/center/bottom/width */
    200,  /* size */
    361,  /* angle            : 10 */
    25,  /* knockback_scale  : 10 */
    7,  /* damage           :  8 */
    1,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    28,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    0,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    10,  /* knockback_base   : 10 */
};
