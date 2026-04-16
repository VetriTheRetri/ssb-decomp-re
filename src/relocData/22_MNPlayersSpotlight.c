/* relocData file 22: MNPlayersSpotlight */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dMNPlayersSpotlight_gap_0x0480[];

/* Raw data from file offset 0x0000 to 0x0408 (1032 bytes) */
u8 dMNPlayersSpotlight_gap_0x0000[1032] = {
	#include <MNPlayersSpotlight/gap_0x0000.data.inc.c>
};

/* MObjSub: - @ 0x408 */
MObjSub dMNPlayersSpotlight_MObjSub_0x0408 = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dMNPlayersSpotlight_gap_0x0480 + 0x8),
	0x0000, 0x0402, 0x0000, 0x0000,
	2097152,
	2.938780718606577e-39f, 0.0f,
	0.0f, 0.0f,
	1.0f, 1.0f,
	(void**)0x00000000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x0200, 0x0401,
	2.938780718606577e-39f, 2.938780718606577e-39f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x22, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	-256, -256,
	0, 0,
};

/* Raw data from file offset 0x0480 to 0x0568 (232 bytes) */
u8 dMNPlayersSpotlight_gap_0x0480[232] = {
	#include <MNPlayersSpotlight/gap_0x0480.data.inc.c>
};

/* DObjDesc: - @ 0x568 (3 entries) */
DObjDesc dMNPlayersSpotlight_DObjDesc_0x0568[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMNPlayersSpotlight_gap_0x0480 + 0xD8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

