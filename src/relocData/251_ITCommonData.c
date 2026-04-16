/* relocData file 251: ITCommonData
 *
 * Common-item attribute + weapon-attribute pool. Every `*_ItemAttributes`
 * block is a 72-byte ITAttributes (see src/it/ittypes.h) and every
 * `*_WeaponAttributes` block is a 52-byte WPAttributes (see src/wp/wptypes.h).
 * Both struct definitions now use `u32 size : 16` (not `u16 size`) so that
 * future work can promote any of these u8 blobs to typed initializers —
 * see the comment above struct ITAttributes for the verified IDO bitfield
 * layout (Vec3h damage_coll_* at 0x1E/0x24, map_coll at 0x2A, size :16 at
 * 0x32, then packed bitfield tail at 0x34+).
 *
 * Inlined block layout - edit this file directly. The .inc.c files
 * referenced below live under build/src/relocData/ and are regenerated
 * from the baserom by tools/extractRelocInc.py at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0050 (80 bytes) */
u8 dITCommonData_Container_VelocitiesY[80] = {
	#include <ITCommonData/Container_VelocitiesY.data.inc.c>
};

/* ItemAttributes @ 0x0050 — Capsule */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=120 center=0 bottom=-100 width=60
 *   size: 200
 *   bitfield_tail u32s: 0x5A450050, 0x0000184A, 0x27050C40, 0x0E4390E4, 0x28000078
 */
u8 dITCommonData_Capsule_ItemAttributes[72] = {
	#include <ITCommonData/Capsule_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0098 to 0x00B8 (32 bytes) */
u32 dITCommonData_Capsule_AttackEvents[8] = {
	#include <ITCommonData/Capsule_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x00B8 — Tomato */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=180 center=0 bottom=-180 width=180
 *   size: 200
 *   bitfield_tail u32s: 0x5A464010, 0x00001850, 0x37001400, 0x0E4390E4, 0x32000064
 */
u8 dITCommonData_Tomato_ItemAttributes[72] = {
	#include <ITCommonData/Tomato_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0100 — Heart */
/* Decoded (visible fields):
 *   flags: is_display_xlu, is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=165 center=0 bottom=-165 width=180
 *   size: 200
 *   bitfield_tail u32s: 0x5A464010, 0x00001850, 0x37001400, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Heart_ItemAttributes[72] = {
	#include <ITCommonData/Heart_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0148 — Star */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=30 center=0 bottom=-30 width=30
 *   size: 200
 *   bitfield_tail u32s: 0x5A464010, 0x0000104A, 0x30001000, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Star_ItemAttributes[72] = {
	#include <ITCommonData/Star_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0190 — Sword */
/* Decoded (visible fields):
 *   flags: is_display_xlu, is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 700, 150}
 *   map_coll: top=422 center=0 bottom=-422 width=72
 *   size: 300
 *   bitfield_tail u32s: 0x5A4500A3, 0x00001A0A, 0x270F0400, 0x0E4390E4, 0x32000064
 */
u8 dITCommonData_Sword_ItemAttributes[72] = {
	#include <ITCommonData/Sword_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x01D8 — Bat */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=240 center=0 bottom=-240 width=27
 *   size: 200
 *   bitfield_tail u32s: 0x5A4500C0, 0x0000184A, 0x270F0400, 0x0E4390E4, 0x37000064
 */
u8 dITCommonData_Bat_ItemAttributes[72] = {
	#include <ITCommonData/Bat_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0220 — Harisen */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=210 center=0 bottom=-210 width=90
 *   size: 200
 *   bitfield_tail u32s: 0x18064010, 0x00001866, 0x27118400, 0x0E4390E4, 0x23000032
 */
u8 dITCommonData_Harisen_ItemAttributes[72] = {
	#include <ITCommonData/Harisen_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0268 — LGun */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {60, 60, 60}
 *   map_coll: top=100 center=0 bottom=-100 width=100
 *   size: 200
 *   bitfield_tail u32s: 0x5A46E020, 0x00001840, 0x27028800, 0x0E4390E4, 0x3200008C
 */
u8 dITCommonData_LGun_ItemAttributes[72] = {
	#include <ITCommonData/LGun_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x02B0 to 0x02E4 (52 bytes) */
u8 dITCommonData_LGunAmmo_WeaponAttributes[52] = {
	#include <ITCommonData/LGunAmmo_WeaponAttributes.data.inc.c>
};

/* ItemAttributes @ 0x02E4 — FFlower */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {60, 60, 60}
 *   map_coll: top=127 center=0 bottom=-107 width=107
 *   size: 200
 *   bitfield_tail u32s: 0x5A464021, 0x00001836, 0x27078800, 0x0E4390E4, 0x28000000
 */
u8 dITCommonData_FFlower_ItemAttributes[72] = {
	#include <ITCommonData/FFlower_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x032C to 0x0360 (52 bytes) */
u8 dITCommonData_FFlowerFlame_WeaponAttributes[52] = {
	#include <ITCommonData/FFlowerFlame_WeaponAttributes.data.inc.c>
};

/* Raw data from file offset 0x0360 to 0x0374 (20 bytes) */
u8 dITCommonData_FFlowerFlame_Angles[20] = {
	#include <ITCommonData/FFlowerFlame_Angles.data.inc.c>
};

/* ItemAttributes @ 0x0374 — Hammer */
/* Decoded (visible fields):
 *   flags: is_display_colanim, is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=258 center=0 bottom=-249 width=105
 *   size: 200
 *   bitfield_tail u32s: 0x5A4640A0, 0x00001850, 0x25079400, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Hammer_ItemAttributes[72] = {
	#include <ITCommonData/Hammer_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x03BC — MSBomb */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=60 center=0 bottom=-60 width=60
 *   size: 200
 *   bitfield_tail u32s: 0x5A464050, 0x00001850, 0x27028C00, 0x0E4390E4, 0x2D000078
 */
u8 dITCommonData_MSBomb_ItemAttributes[72] = {
	#include <ITCommonData/MSBomb_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0404 to 0x0424 (32 bytes) */
u32 dITCommonData_MSBomb_AttackEvents[8] = {
	#include <ITCommonData/MSBomb_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x0424 — BombHei */
/* Decoded (visible fields):
 *   flags: is_display_colanim, is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=150 center=0 bottom=-150 width=150
 *   size: 200
 *   bitfield_tail u32s: 0x5A464010, 0x00001802, 0x27078C00, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_BombHei_ItemAttributes[72] = {
	#include <ITCommonData/BombHei_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x046C to 0x048C (32 bytes) */
u32 dITCommonData_BombHei_AttackEvents[8] = {
	#include <ITCommonData/BombHei_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x048C — StarRod */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {60, 60, 60}
 *   map_coll: top=195 center=0 bottom=-195 width=90
 *   size: 200
 *   bitfield_tail u32s: 0x00046060, 0x0000184A, 0x27050400, 0x0E4390E4, 0x3200006E
 */
u8 dITCommonData_StarRod_ItemAttributes[72] = {
	#include <ITCommonData/StarRod_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x04D4 to 0x0508 (52 bytes) */
u8 dITCommonData_StarRod_WeaponAttributes[52] = {
	#include <ITCommonData/StarRod_WeaponAttributes.data.inc.c>
};

/* Raw data from file offset 0x0508 to 0x053C (52 bytes) */
u8 dITCommonData_StarRodSmash_WeaponAttributes[52] = {
	#include <ITCommonData/StarRodSmash_WeaponAttributes.data.inc.c>
};

/* ItemAttributes @ 0x053C — GShell */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=150 center=0 bottom=-150 width=150
 *   size: 200
 *   bitfield_tail u32s: 0x5A450120, 0x00001070, 0x270F0C00, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_GShell_ItemAttributes[72] = {
	#include <ITCommonData/GShell_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0584 — RShell */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=150 center=0 bottom=-150 width=150
 *   size: 200
 *   bitfield_tail u32s: 0x5A4500A0, 0x16801070, 0x2F0F0C00, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_RShell_ItemAttributes[72] = {
	#include <ITCommonData/RShell_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x05CC — Box */
/* Decoded (visible fields):
 *   flags: is_give_hitlag
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {450, 450, 450}
 *   map_coll: top=225 center=0 bottom=-225 width=225
 *   size: 200
 *   bitfield_tail u32s: 0x5A4640F0, 0x0000184A, 0x230A0040, 0x0E4390E4, 0x32000028
 */
u8 dITCommonData_Box_ItemAttributes[72] = {
	#include <ITCommonData/Box_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0614 to 0x0634 (32 bytes) */
u32 dITCommonData_Box_AttackEvents[8] = {
	#include <ITCommonData/Box_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x0634 — Taru */
/* Decoded (visible fields):
 *   flags: is_give_hitlag
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {294, 316, 294}
 *   map_coll: top=236 center=0 bottom=-236 width=221
 *   size: 290
 *   bitfield_tail u32s: 0x5A4640C0, 0x0000184A, 0x230A0040, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Taru_ItemAttributes[72] = {
	#include <ITCommonData/Taru_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x067C to 0x069C (32 bytes) */
u32 dITCommonData_Taru_AttackEvents[8] = {
	#include <ITCommonData/Taru_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x069C — NBumper */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=180 center=0 bottom=-180 width=180
 *   size: 200
 *   bitfield_tail u32s: 0x5A832010, 0x3E80105E, 0x2F000C00, 0x0E4390E4, 0x32000046
 */
u8 dITCommonData_NBumper_ItemAttributes[72] = {
	#include <ITCommonData/NBumper_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x06E4 — MBall */
/* Decoded (visible fields):
 *   flags: is_item_dobjs, is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=109 center=0 bottom=-109 width=164
 *   size: 200
 *   bitfield_tail u32s: 0x5A4500C0, 0x0000184A, 0x270F0C00, 0x0E4390E4, 0x28000014
 */
u8 dITCommonData_MBall_ItemAttributes[72] = {
	#include <ITCommonData/MBall_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x072C — Wark */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=324 center=0 bottom=-324 width=459
 *   size: 600
 *   bitfield_tail u32s: 0x16864150, 0x0000104A, 0x310F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Wark_ItemAttributes[72] = {
	#include <ITCommonData/Wark_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0774 to 0x07A8 (52 bytes) */
u8 dITCommonData_WarkRock_WeaponAttributes[52] = {
	#include <ITCommonData/WarkRock_WeaponAttributes.data.inc.c>
};

/* ItemAttributes @ 0x07A8 — Kabigon */
/* Decoded (visible fields):
 *   flags: is_item_dobjs, is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {580, 580, 780}
 *   map_coll: top=585 center=0 bottom=-585 width=780
 *   size: 800
 *   bitfield_tail u32s: 0x5A446160, 0x00001002, 0x310F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Kabigon_ItemAttributes[72] = {
	#include <ITCommonData/Kabigon_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x07F0 — Tosakinto */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=135 center=0 bottom=-135 width=195
 *   size: 200
 *   bitfield_tail u32s: 0x5A4500C0, 0x0000184A, 0x390F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Tosakinto_ItemAttributes[72] = {
	#include <ITCommonData/Tosakinto_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0838 — Mew */
/* Decoded (visible fields):
 *   flags: is_item_dobjs, is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=218 center=0 bottom=-218 width=218
 *   size: 300
 *   bitfield_tail u32s: 0x5A4500C0, 0x0000184A, 0x390F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Mew_ItemAttributes[72] = {
	#include <ITCommonData/Mew_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0880 — Nyars */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=244 center=0 bottom=-244 width=244
 *   size: 300
 *   bitfield_tail u32s: 0x5A4500C0, 0x0000104A, 0x390F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Nyars_ItemAttributes[72] = {
	#include <ITCommonData/Nyars_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x08C8 to 0x08FC (52 bytes) */
u8 dITCommonData_NyarsCoin_WeaponAttributes[52] = {
	#include <ITCommonData/NyarsCoin_WeaponAttributes.data.inc.c>
};

/* ItemAttributes @ 0x08FC — Lizardon */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=400 center=0 bottom=-390 width=420
 *   size: 600
 *   bitfield_tail u32s: 0x5A450120, 0x0000104A, 0x390F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Lizardon_ItemAttributes[72] = {
	#include <ITCommonData/Lizardon_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0944 to 0x098C (72 bytes) */
u8 dITCommonData_LizardonFlame_WeaponAttributes[72] = {
	#include <ITCommonData/LizardonFlame_WeaponAttributes.data.inc.c>
};

/* ItemAttributes @ 0x098C — Spear */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=244 center=0 bottom=-244 width=244
 *   size: 300
 *   bitfield_tail u32s: 0x16864120, 0x0000104A, 0x310F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Spear_ItemAttributes[72] = {
	#include <ITCommonData/Spear_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x09D4 to 0x0A08 (52 bytes) */
u8 dITCommonData_SpearSwarm_WeaponAttributes[52] = {
	#include <ITCommonData/SpearSwarm_WeaponAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0A08 — Kamex */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=317 center=0 bottom=-300 width=300
 *   size: 400
 *   bitfield_tail u32s: 0x2083C0D0, 0x0000104A, 0x390F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Kamex_ItemAttributes[72] = {
	#include <ITCommonData/Kamex_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0A50 to 0x0A84 (52 bytes) */
u8 dITCommonData_KamexHydro_WeaponAttributes[52] = {
	#include <ITCommonData/KamexHydro_WeaponAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0A84 — MLucky */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {250, 250, 250}
 *   map_coll: top=300 center=0 bottom=-200 width=240
 *   size: 500
 *   bitfield_tail u32s: 0x5A4500C0, 0x0000184A, 0x390F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_MLucky_ItemAttributes[72] = {
	#include <ITCommonData/MLucky_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0ACC — Egg */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=200 center=0 bottom=-140 width=280
 *   size: 200
 *   bitfield_tail u32s: 0x5A450030, 0x0000184A, 0x270F0C40, 0x0E4390E4, 0x32000064
 */
u8 dITCommonData_Egg_ItemAttributes[72] = {
	#include <ITCommonData/Egg_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0B14 to 0x0B34 (32 bytes) */
u32 dITCommonData_Egg_AttackEvents[8] = {
	#include <ITCommonData/Egg_AttackEvents.data.inc.c>
};

/* ItemAttributes @ 0x0B34 — Starmie */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=300 center=0 bottom=-220 width=300
 *   size: 400
 *   bitfield_tail u32s: 0x5A4500C0, 0x0000104A, 0x390F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Starmie_ItemAttributes[72] = {
	#include <ITCommonData/Starmie_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0B7C to 0x0BB0 (52 bytes) */
u8 dITCommonData_StarmieSwift_WeaponAttributes[52] = {
	#include <ITCommonData/StarmieSwift_WeaponAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0BB0 — Sawamura */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=317 center=0 bottom=-317 width=195
 *   size: 300
 *   bitfield_tail u32s: 0x16864180, 0x0007904A, 0x31051800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Sawamura_ItemAttributes[72] = {
	#include <ITCommonData/Sawamura_ItemAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0BF8 — Dogas */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=240 center=0 bottom=-240 width=240
 *   size: 50
 *   bitfield_tail u32s: 0x5A4500C0, 0x0000104A, 0x390F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Dogas_ItemAttributes[72] = {
	#include <ITCommonData/Dogas_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0C40 to 0x0C74 (52 bytes) */
u8 dITCommonData_DogasSmog_WeaponAttributes[52] = {
	#include <ITCommonData/DogasSmog_WeaponAttributes.data.inc.c>
};

/* ItemAttributes @ 0x0C74 — Pippi */
/* Decoded (visible fields):
 *   flags: is_give_hitlag, weight
 *   damage_coll_offset: {0, 0, 0}
 *   damage_coll_size:   {150, 150, 150}
 *   map_coll: top=192 center=0 bottom=-192 width=192
 *   size: 300
 *   bitfield_tail u32s: 0x5A4500C0, 0x0000184A, 0x390F1800, 0x0E4390E4, 0x32000000
 */
u8 dITCommonData_Pippi_ItemAttributes[72] = {
	#include <ITCommonData/Pippi_ItemAttributes.data.inc.c>
};

/* Raw data from file offset 0x0CBC to 0x0CF0 (52 bytes) */
u8 dITCommonData_PippiSwarm_WeaponAttributes[52] = {
	#include <ITCommonData/PippiSwarm_WeaponAttributes.data.inc.c>
};

/* Raw data from file offset 0x0CF0 to 0x0D40 (80 bytes) */
u8 dITCommonData_GBumper_ItemAttributes[80] = {
	#include <ITCommonData/GBumper_ItemAttributes.data.inc.c>
};

