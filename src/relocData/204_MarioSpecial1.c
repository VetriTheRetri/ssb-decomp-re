/* relocData file 204: MarioSpecial1 — Mario Fireball WPAttributes.
 *
 * One 64-byte `WPAttributes` struct (see src/wp/wptypes.h) describing the
 * Mario Fireball hitbox. Used by src/wp/wpmario/wpmariofireball.c via the `WPDesc` at
 *   &gFTDataMarioSpecial1 + llMarioSpecial1FireballWeaponAttributes (= 0x0),
 * which `lbRelocGetFileData(WPAttributes*, ...)` casts into a typed view.
 *
 * `data` and `p_mobjsubs` carry cross-file reloc chain entries whose u16
 * target-file IDs are stored in the post-compression trailer (see
 * tools/vpk0_excess_bytes.txt). The source-level symbolic references below
 * are placeholders — fixRelocChain.py overwrites each slot at build time
 * with the chain-encoded (next_word << 16 | target_word) pair taken from
 * the .reloc file, so the final bytes are byte-identical regardless of the
 * symbolic form.
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Vtx dMarioSpecial3_JointVerts_Vtx[];        /* file 297 */
extern u8  dMarioSpecial3_Tex_0x0058[];            /* file 297 */

WPAttributes dMarioSpecial1_Fireball_WeaponAttributes = {
    (void *)&dMarioSpecial3_JointVerts_Vtx[4],                   /* data (297+0x1A8) */
    (MObjSub ***)((u8 *)dMarioSpecial3_Tex_0x0058 + 0x80),       /* p_mobjsubs (297+0xD8) */
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
