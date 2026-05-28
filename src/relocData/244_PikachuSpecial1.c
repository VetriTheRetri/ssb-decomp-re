/* relocData file 244: PikachuSpecial1 — Thunder Jolt hitbox attributes.
 *
 * Two back-to-back `WPAttributes` structs (air and ground variants of
 * Thunder Jolt) used by src/wp/wppikachu/wppikachuthunderjolt.c:
 *   llPikachuSpecial1ThunderJoltAirWeaponAttributes    (= 0x00)
 *   llPikachuSpecial1ThunderJoltGroundWeaponAttributes (= 0x34)
 *
 * Both structs carry cross-file reloc chain entries into PikachuSpecial3
 * (file 342). The u16 target-file IDs live in the post-compression trailer
 * (see tools/vpk0_excess_bytes.txt); fixRelocChain.py overwrites each slot
 * at build time with the chain-encoded (next_word << 16 | target_word)
 * pair from the .reloc file, so the symbolic references below are purely
 * for source readability.
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern u8 dPikachuSpecial3_gap_0x0000[];                         /* file 342 */
extern u8 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint[];    /* file 342 */
extern u8 dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint[]; /* file 342 */

WPAttributes dPikachuSpecial1_ThunderJoltAir_WeaponAttributes = {
    (void *)(dPikachuSpecial3_gap_0x0000 + 0x270),                  /* data (342+0x270) */
    NULL,  /* p_mobjsubs */
    (AObjEvent32 **)(dPikachuSpecial3_gap_0x0000 + 0x360),          /* anim_joints (342+0x360) */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    50, 0, -50, 50,  /* map_coll top/center/bottom/width */
    200,  /* size */
    361,  /* angle            : 10 */
#if defined(REGION_JP)
    50,  /* knockback_scale  : 10 */
    8,  /* damage           :  8 */
#else
    30,  /* knockback_scale  : 10 */
    10,  /* damage           :  8 */
#endif
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
#if defined(REGION_JP)
    30,  /* knockback_base   : 10 */
#else
    50,  /* knockback_base   : 10 */
#endif
};

WPAttributes dPikachuSpecial1_ThunderJoltGround_WeaponAttributes = {
    (void *)(dPikachuSpecial3_gap_0x0000 + 0x1888),                       /* data (342+0x1888) */
    (MObjSub ***)(dPikachuSpecial3_gap_0x0000 + 0x1018),                  /* p_mobjsubs (342+0x1018) */
    (AObjEvent32 **)dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint,     /* anim_joints (342+0x1A20) */
    (AObjEvent32 ***)dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint, /* p_matanim_joints (342+0x1AE0) */
    { { 0, 100, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    200, 100, 0, 50,  /* map_coll top/center/bottom/width */
    200,  /* size */
    361,  /* angle            : 10 */
#if defined(REGION_JP)
    50,  /* knockback_scale  : 10 */
#else
    20,  /* knockback_scale  : 10 */
#endif
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
#if defined(REGION_JP)
    20,  /* knockback_base   : 10 */
#else
    10,  /* knockback_base   : 10 */
#endif
};
