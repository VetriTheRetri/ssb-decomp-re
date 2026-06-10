/* relocData file 210: FoxSpecial1 — Fox Blaster shot WPAttributes.
 *
 * One 64-byte `WPAttributes` struct (see src/wp/wptypes.h) describing the
 * Fox Blaster shot hitbox. Used by src/wp/wpfox/wpfoxblaster.c via the `WPDesc` at
 *   &gFTDataFoxSpecial1 + llFoxSpecial1BlasterWeaponAttributes (= 0x0),
 * which `lbRelocGetFileData(WPAttributes*, ...)` casts into a typed view.
 *
 * `data` carries a cross-file reloc chain entry whose u16 target-file ID
 * is stored in the post-compression trailer (see tools/vpk0_excess_bytes.txt).
 * fixRelocChain.py overwrites the slot at build time with the chain-encoded
 * pair from the .reloc file; the symbolic reference below is purely for
 * source readability.
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Gfx dFoxSpecial4_ReflectorDL_DisplayList[];  /* file 316 */

WPAttributes dFoxSpecial1_Blaster_WeaponAttributes = {
    (void *)dFoxSpecial4_ReflectorDL_DisplayList,  /* data (316+0x40 = symbol start) */
    NULL,  /* p_mobjsubs */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    10, 0, -10, 10,  /* map_coll top/center/bottom/width */
    40,  /* size */
#if defined(REGION_JP)
    361,  /* angle            : 10 */
#else
    10,  /* angle            : 10 */
#endif
    100,  /* knockback_scale  : 10 */
#if defined(REGION_JP)
    5,  /* damage           :  8 */
    0,  /* element          :  4 */
    5,  /* knockback_weight : 10 */
#else
    6,  /* damage           :  8 */
    0,  /* element          :  4 */
    1,  /* knockback_weight : 10 */
#endif
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
