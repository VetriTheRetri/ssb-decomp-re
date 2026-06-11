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
extern DObjDesc dNessSpecial3_PKFireDL_DObjDescs[];
extern AObjEvent32 *dNessSpecial3_PKFireDL_script_ptrs[];

WPAttributes dNessSpecial1_PKFire_WeaponAttributes = {
    (void *)(dNessSpecial3_gap_0x0000 + 0x168),                    /* data (336+0x168) */
    (MObjSub ***)dNessSpecial3_gap_0x0000,                         /* p_mobjsubs (336+0x000) */
    NULL,  /* anim_joints */
    (AObjEvent32 ***)(dNessSpecial3_gap_0x0000 + 0x1E0),           /* p_matanim_joints (336+0x1E0) */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    10, 0, -10, 10,  /* map_coll top/center/bottom/width */
    200,  /* size */
#if defined(REGION_JP)
    90,  /* angle            : 10 */
#else
    80,  /* angle            : 10 */
#endif
    50,  /* knockback_scale  : 10 */
#if defined(REGION_JP)
    2,  /* damage           :  8 */
#else
    4,  /* damage           :  8 */
#endif
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

ITAttributes dNessSpecial1_PKFire_ItemAttributes[1] = {{
    (void *)dNessSpecial3_PKFireDL_DObjDescs,             /* data */
    NULL,                                                 /* p_mobjsubs */
    (AObjEvent32 **)dNessSpecial3_PKFireDL_script_ptrs,   /* anim_joints */
    NULL,                                                 /* p_matanim_joints */
    1, 0, 0, 1, 1,  /* xlu,dobjs,colanim,hitlag,weight */
    0, 100, 0,  /* attack_offset0 x/y/z */
    0, 350, 0,  /* attack_offset1 x/y/z */
    { 0, 200, 0 },  /* damage_coll_offset */
    { 200, 400, 200 },  /* damage_coll_size */
    400, 200, 0, 100,  /* map_coll top/center/bottom/width */
    200,  /* size */
#if defined(REGION_JP)
    82,  /* angle */
    30,  /* ks */
    2,  /* dmg */
#else
    70,  /* angle */
    10,  /* ks */
    3,  /* dmg */
#endif
    1,  /* elem */
    0,  /* kw */
    0,  /* sd */
    2,  /* ac */
    0,  /* cso */
    nSYAudioFGMBurnM,  /* hit_sfx */
    1,  /* pri */
    1,  /* cri */
    1,  /* crf */
    0,  /* hop */
    0,  /* refl */
    1,  /* shield */
#if defined(REGION_JP)
    25,  /* kb */
#else
    4,  /* kb */
#endif
    6,  /* type */
    1,  /* hitstatus */
    0,  /* b6 */
    0,  /* b7 */
    nSYAudioFGMItemThrow,  /* drop */
    nSYAudioFGMItemThrow,  /* throw */
    nSYAudioFGMItemThrow,  /* smash */
    100,  /* vel */
    0,  /* spin */
}};
