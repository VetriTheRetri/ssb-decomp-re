/* relocData file 252: SCExplainMain */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time.
 *
 * The JP binary (5280 B) has a different layout than the US one
 * (6096 B), so REGION_JP folds in the JP file as a single chain-
 * encoded raw u8 block (see jp_raw.data.inc.c under
 * build/src/relocData/). The companion 252_SCExplainMain.jp.reloc is
 * empty — fixRelocChain leaves the pre-baked JP chain bytes alone.
 */

#include "relocdata_types.h"

#if defined(REGION_JP)

/* JP binary has a different layout; fold in its chain-encoded
 * bytes as a single raw u8 block. extractRelocInc regenerates
 * the inc.c below from the JP binary whenever JP assets are
 * extracted, and the companion .jp.reloc is empty so
 * fixRelocChain leaves the pre-baked chain bytes alone. */
u8 dSCExplainMain[5280] = {
	#include <SCExplainMain/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* Raw data from file offset 0x0000 to 0x09D4 (2516 bytes) */
u32 dSCExplainMain_0_KeyEvent[629] = {
	#include <SCExplainMain/0_KeyEvent.data.inc.c>
};

/* Raw data from file offset 0x09D4 to 0x13FC (2600 bytes) */
u32 dSCExplainMain_1_KeyEvent[650] = {
	#include <SCExplainMain/1_KeyEvent.data.inc.c>
};

/* Raw data from file offset 0x13FC to 0x1400 (4 bytes) */
u32 dSCExplainMain_2_KeyEvent[1] = {
	#include <SCExplainMain/2_KeyEvent.data.inc.c>
};

/* Raw data from file offset 0x1400 to 0x1404 (4 bytes) */
u32 dSCExplainMain_3_KeyEvent[1] = {
	#include <SCExplainMain/3_KeyEvent.data.inc.c>
};

/* Raw data from file offset 0x1404 to 0x17D0 (972 bytes) */
u8 dSCExplainMain_ExplainPhase_0x1404[972] = {
	#include <SCExplainMain/ExplainPhase_0x1404.data.inc.c>
};

#endif
