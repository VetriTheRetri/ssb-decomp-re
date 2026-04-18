/* relocData file 252: SCExplainMain — "How to Play" tutorial data.
 * KeyEvent arrays are input-replay scripts for the demo sequences;
 * JP has shorter demos. ExplainPhase is the phase descriptor table
 * with extern pointers into SCExplainGraphics. */

#include "relocdata_types.h"

/* KeyEvent replay scripts — JP has shorter tutorial demos */
#if defined(REGION_JP)
u32 dSCExplainMain_0_KeyEvent[541] = {
#else
u32 dSCExplainMain_0_KeyEvent[629] = {
#endif
	#include <SCExplainMain/0_KeyEvent.data.inc.c>
};

#if defined(REGION_JP)
u32 dSCExplainMain_1_KeyEvent[533] = {
#else
u32 dSCExplainMain_1_KeyEvent[650] = {
#endif
	#include <SCExplainMain/1_KeyEvent.data.inc.c>
};

u32 dSCExplainMain_2_KeyEvent[1] = {
	#include <SCExplainMain/2_KeyEvent.data.inc.c>
};

u32 dSCExplainMain_3_KeyEvent[1] = {
	#include <SCExplainMain/3_KeyEvent.data.inc.c>
};

/* ExplainPhase — JP has 4 more bytes of phase descriptor data */
#if defined(REGION_JP)
u8 dSCExplainMain_ExplainPhase_0x1404[976] = {
#else
u8 dSCExplainMain_ExplainPhase_0x1404[972] = {
#endif
	#include <SCExplainMain/ExplainPhase_0x1404.data.inc.c>
};
