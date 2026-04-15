/* relocData file 226: LinkSpecial1 — Link Boomerang WPAttributes.
 *
 * One 64-byte `WPAttributes` struct (see src/wp/wptypes.h) describing the
 * Link Boomerang hitbox. Used by src/wp/wplink/wplinkboomerang.c via the `WPDesc` at
 *   &gFTDataLinkSpecial1 + llLinkSpecial1BoomerangWeaponAttributes (= 0x0),
 * which `lbRelocGetFileData(WPAttributes*, ...)` casts into a typed view.
 * Pointer fields (`data`, `anim_joints`) are chain-encoded; fixRelocChain
 * patches them at link time to symbols inside the owning fighter's *Main file.
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

WPAttributes dLinkSpecial1_Boomerang_WeaponAttributes = {
    (void *)0x00020184,  /* data */
    NULL,  /* p_mobjsubs */
    (AObjEvent32 **)0xFFFF01B0,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    150, 0, -150, 150,  /* map_coll top/center/bottom/width */
    200,  /* size */
    70,  /* angle            : 10 */
    30,  /* knockback_scale  : 10 */
    9,  /* damage           :  8 */
    0,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    2,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    31,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    1,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    0,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    55,  /* knockback_base   : 10 */
};
