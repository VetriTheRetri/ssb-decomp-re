/* relocData file 222: LuigiSpecial1 — Luigi Fireball WPAttributes.
 *
 * One 64-byte `WPAttributes` struct (see src/wp/wptypes.h) describing the
 * Luigi Fireball hitbox. Used by src/wp/wpmario/wpmariofireball.c via the `WPDesc` at
 *   &gFTDataLuigiSpecial1 + llLuigiSpecial1FireballWeaponAttributes (= 0x0),
 * which `lbRelocGetFileData(WPAttributes*, ...)` casts into a typed view.
 *
 * `data` and `p_mobjsubs` point into MarioSpecial3 (Luigi shares Mario's
 * fireball asset file). The u16 target-file IDs are in the post-compression
 * trailer (see tools/vpk0_excess_bytes.txt); fixRelocChain.py overwrites
 * each slot with the chain-encoded (next_word << 16 | target_word) pair
 * from the .reloc file, so the symbolic references below are purely for
 * source readability.
 */

#include "relocdata_types.h"
#include <wp/wptypes.h>

/* Cross-file references resolved by fixRelocChain.py — see .reloc */
extern Vtx dMarioSpecial3_JointVerts_Vtx[];  /* file 297 */
extern u8  dMarioSpecial3_Tex_0x0058[];      /* file 297 */

WPAttributes dLuigiSpecial1_Fireball_WeaponAttributes = {
    (void *)&dMarioSpecial3_JointVerts_Vtx[4],                   /* data (297+0x1A8) */
    (MObjSub ***)((u8 *)dMarioSpecial3_Tex_0x0058 + 0x80),       /* p_mobjsubs (297+0xD8) */
    NULL,  /* anim_joints */
    NULL,  /* p_matanim_joints */
    { { 0, 0, 0 }, { 0, 0, 0 } },  /* attack_offsets */
    50, 0, -50, 50,  /* map_coll top/center/bottom/width */
    200,  /* size */
    361,  /* angle            : 10 */
    25,  /* knockback_scale  : 10 */
    6,  /* damage           :  8 */
    1,  /* element          :  4 */
    0,  /* knockback_weight : 10 */
    1,  /* shield_damage    :  8 */
    1,  /* attack_count     :  2 */
    1,  /* can_setoff       :  1 */
    28,  /* sfx              : 10 */
    1,  /* priority         :  3 */
    1,  /* can_rehit_item   :  1 */
    0,  /* can_rehit_fighter:  1 */
    1,  /* can_hop          :  1 */
    1,  /* can_reflect      :  1 */
    1,  /* can_absorb       :  1 */
    1,  /* can_shield       :  1 */
    0,  /* unused_0x2F_b6   :  1 */
    0,  /* unused_0x2F_b7   :  1 */
    10,  /* knockback_base   : 10 */
};
