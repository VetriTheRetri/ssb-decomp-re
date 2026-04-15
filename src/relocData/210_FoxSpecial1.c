/* relocData file 210: FoxSpecial1 — Fox Blaster shot WPAttributes.
 *
 * One 64-byte `WPAttributes` struct (see src/wp/wptypes.h) describing the
 * Fox Blaster shot hitbox. Used by src/wp/wpfox/wpfoxblaster.c via the `WPDesc` at
 *   &gFTDataFoxSpecial1 + llFoxSpecial1BlasterWeaponAttributes (= 0x0),
 * which `lbRelocGetFileData(WPAttributes*, ...)` casts into a typed view.
 * Pointer fields (`data`, `anim_joints`) are chain-encoded; fixRelocChain
 * patches them at link time to symbols inside the owning fighter's *Main file.
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

WPAttributes dFoxSpecial1_Blaster_WeaponAttributes = {
    (void *)0xFFFF0010,  /* data */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    10, 0, -10, 10,  /* map_coll top/center/bottom/width */
    40,  /* size */
    10,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
    6,  /* damage           :  8 */
    0,  /* element          :  4 */
    1,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    0,  /* can_setoff       :  1 */
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
    0,  /* knockback_base   : 10 */
};
