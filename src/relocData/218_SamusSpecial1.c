/* relocData file 218: SamusSpecial1 — Samus Charge Shot WPAttributes.
 *
 * One 64-byte `WPAttributes` struct (see src/wp/wptypes.h) describing the
 * Samus Charge Shot hitbox. Used by src/wp/wpsamus/wpsamuschargeshot.c via the `WPDesc` at
 *   &gFTDataSamusSpecial1 + llSamusSpecial1ChargeShotWeaponAttributes (= 0x0),
 * which `lbRelocGetFileData(WPAttributes*, ...)` casts into a typed view.
 * Pointer fields (`data`, `anim_joints`) are chain-encoded; fixRelocChain
 * patches them at link time to symbols inside the owning fighter's *Main file.
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

WPAttributes dSamusSpecial1_ChargeShot_WeaponAttributes = {
    (void *)0xFFFF009C,  /* data */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    0, 0, 0, 0,  /* map_coll top/center/bottom/width */
    0,  /* size */
    361,  /* angle            : 10 */
    100,  /* knockback_scale  : 10 */
    0,  /* damage           :  8 */
    2,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    0,  /* sfx              : 10 */
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
