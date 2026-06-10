/* relocData file 226: LinkSpecial1 — Link Boomerang WPAttributes.
 *
 * One 64-byte `WPAttributes` struct (see src/wp/wptypes.h) describing the
 * Link Boomerang hitbox. Used by src/wp/wplink/wplinkboomerang.c via the `WPDesc` at
 *   &gFTDataLinkSpecial1 + llLinkSpecial1BoomerangWeaponAttributes (= 0x0),
 * which `lbRelocGetFileData(WPAttributes*, ...)` casts into a typed view.
 *
 * `data` and `anim_joints` point into LinkSpecial3. The u16 target-file
 * IDs are in the post-compression trailer (see tools/vpk0_excess_bytes.txt);
 * fixRelocChain.py overwrites each slot at build time with the chain-encoded
 * pair from the .reloc file, so the symbolic references below are purely
 * for source readability.
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern u8 dLinkSpecial3_BoomerangDL_post[];  /* file 325 */
extern DObjDesc dLinkSpecial3_BoomerangDL_post_DObjDesc[];
extern AObjEvent32 *dLinkSpecial3_BoomerangDL_post_anim_ptrs[];

WPAttributes dLinkSpecial1_Boomerang_WeaponAttributes = {
    (void *)dLinkSpecial3_BoomerangDL_post_DObjDesc,                /* data (325+0x610) */
    NULL,  /* p_mobjsubs */
    (AObjEvent32 **)dLinkSpecial3_BoomerangDL_post_anim_ptrs,        /* anim_joints (325+0x6C0) */
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
#if defined(REGION_JP)
    30,  /* sfx              : 10 */
#else
    31,  /* sfx              : 10 */
#endif
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
