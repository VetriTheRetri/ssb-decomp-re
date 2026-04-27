/* relocData file 22: MNPlayersSpotlight */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern MObjSub *dMNPlayersSpotlight_gap_0x0480_sub_0x8[];

PAD(8);

/* gap sub-block @ 0x0008 (was gap+0x8, 1024 bytes) */
u8 dMNPlayersSpotlight_gap_0x0000_sub_0x8[1024] = {
	#include <MNPlayersSpotlight/gap_0x0000_sub_0x8.tex.inc.c>
};

/* MObjSub-list head @ 0x408 — referenced by `&llMNPlayersSpotlightMObjSub`
 * cast to `MObjSub***` in mnplayers*. Each entry feeds one DObj in the
 * GObj's tree (`gcAddMObjAll`). Entry [0] is NULL (root DObj has no
 * MObjSubs); entry [1] points to gap_0x0480_sub_0x8, the per-DObj
 * MObjSub-pointer list whose single non-NULL entry is the real spotlight
 * MObjSub at MObjSub_0x0410 below. */
MObjSub **dMNPlayersSpotlight_MObjSub_0x0408[2] = {
	NULL,
	(MObjSub **)dMNPlayersSpotlight_gap_0x0480_sub_0x8,
};

/* The real spotlight MObjSub @ 0x410 (the byte range previously folded into
 * MObjSub_0x0408 + the trailing gap_0x0480). 32×32 RGBA16 surface with
 * NULL sprites/palettes — the runtime fills sprites[] from elsewhere or
 * the spotlight is procedurally generated. */
MObjSub dMNPlayersSpotlight_MObjSub_0x0410 = {
	0x0000,
	G_IM_FMT_I, G_IM_SIZ_16b,                     /* fmt, siz */
	(void**)0x00000000,                           /* sprites */
	0x0020, 0x0000, 0x0020, 0x0020,               /* unk08, unk0A, w=32, h=32 */
	0,                                            /* unk10 */
	0.0f, 0.0f,                                   /* trau, trav */
	1.0f, 1.0f,                                   /* scau, scav */
	0.0f, 1.0f,                                   /* unk24, unk28 */
	(void**)0x00000000,                           /* palettes */
	0x0200,                                       /* flags */
	G_IM_FMT_I, G_IM_SIZ_8b,                      /* block_fmt, block_siz */
	0x0020,                                       /* block_dxt */
	0x0020, 0x0020, 0x0020,                       /* unk36, unk38, unk3A */
	0.0f, 0.0f,                                   /* scrollu, scrollv */
	0.0f, 0.0f,                                   /* unk44, unk48 */
	0x00002205,                                   /* unk4C */
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },               /* primcolor */
	0x00, 0x00, { 0x00, 0x00 },                   /* prim_l, prim_m, prim_pad */
	{ { 0x00, 0x00, 0x00, 0xFF } },               /* envcolor */
	{ { 0x00, 0x00, 0x00, 0x08 } },               /* blendcolor */
	{ { 0xFF, 0xFF, 0xFF, 0x00 } },               /* light1color */
	{ { 0xFF, 0xFF, 0xFF, 0x00 } },               /* light2color */
	0, 0,                                         /* unk68, unk6C */
	0, 0,                                         /* unk70, unk74 */
};

/* Raw data from file offset 0x0488 to 0x0568 (224 bytes) */
/* MObjSub-pointer list @ 0x0488 — NULL-terminated array of MObjSub*
 * walked by gcAddMObjAll for the second DObj. The single entry points to
 * the real spotlight MObjSub above. */
MObjSub *dMNPlayersSpotlight_gap_0x0480_sub_0x8[2] = {
	&dMNPlayersSpotlight_MObjSub_0x0410,
	NULL,
};

/* gap sub-block @ 0x0490 (was gap+0x10, 64 bytes) */
Vtx dMNPlayersSpotlight_gap_0x0480_sub_0x10[4] = {
	#include <MNPlayersSpotlight/gap_0x0480_sub_0x10.vtx.inc.c>
};

/* gap sub-block @ 0x04D0 (was gap+0x50, 136 bytes) */
Gfx dMNPlayersSpotlight_DL_0x04D0[17] = {
	#include <MNPlayersSpotlight/DL_0x04D0.dl.inc.c>
};

/* DObjDLLink @ 0xD8 (2 entries) */
DObjDLLink dMNPlayersSpotlight_DLLink_0x0558[] = {
	{ 1, dMNPlayersSpotlight_DL_0x04D0 },
	{ 4, NULL },
};

/* DObjDesc: - @ 0x568 (3 entries) */
DObjDesc dMNPlayersSpotlight_DObjDesc_0x0568[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMNPlayersSpotlight_DLLink_0x0558, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

