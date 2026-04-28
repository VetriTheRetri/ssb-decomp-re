/*
 * Particle script bank for grYoster (Yoshi's Story stage).
 * ROM: 0xB22980..0xB22A00 -- see smashbrothers.us.yaml.
 * Loaded via efParticleGetLoadBankID at grYosterInit (src/gr/grcommon/gryoster.c:256),
 * pointerized by lbParticleSetupBankID (src/lb/lbparticle.c:181).
 *
 * Layout, top to bottom in the file (matches the runtime's expectations):
 *   s32  scripts_num               count of LBScript entries
 *   u32  script_offsets[N]         file-relative offsets to each LBScript
 *   { LBScriptHeader; u8 bc[N]; }  per script, packed back-to-back
 *
 * Sizing the bytecode arrays:
 *   Each per-script `bc[N]` is sized as the natural byte count up to and
 *   including the terminating END opcode. We don't write the trailing 4-byte
 *   alignment pad or the file's tail pad explicitly: C struct alignment pads
 *   each script's struct out to a multiple of 4 (since LBScriptHeader has
 *   u32 alignment), and the .rodata section's 16-byte alignment pads the
 *   final file size out to the next 16-byte boundary -- which happens to
 *   match every original .scb's size on the dot. So `bc[61]` here, not 72.
 *
 *   IDO 7.1 (C89) doesn't accept `bc[]` (flexible array members) cleanly,
 *   doesn't allow sizeof of an extern array without an explicit size, and
 *   doesn't allow compound literals or designated initializers in static
 *   init -- so the array length is the one piece that has to be a literal.
 *   The number is the visible byte count of the initializer, so easy to
 *   eyeball; trying to remove this last hardcoded value pulls in either
 *   multiple compilation units (with sizes redeclared in extern decls) or
 *   a build-time tool, neither of which seems worth it.
 *
 * Float literals in the bytecode initializer: same constraint -- there's no
 * way in C89 IDO to bit-cast `300.0f` into 4 u8 bytes for a static u8[]
 * initializer, so we use `LBP_F32(0x43960000) // 300.0` (hex pattern + decimal
 * comment). The header struct fields are typed f32 so they take decimal
 * literals normally.
 */

#include <ssb_types.h>
#include <stddef.h>
#include <lb/lbtypes.h>
#include <lb/lbparticle_script.h>

typedef struct gryosterScript_0
{
	LBScriptHeader hdr;
	u8             bytecode[61];
} gryosterScript_0;

typedef struct gryosterScb
{
	s32              scripts_num;
	u32              script_offsets[1];
	gryosterScript_0 script_0;
} gryosterScb;

const gryosterScb dGRYosterScb = {
	1,                                              /* scripts_num */
	{                                               /* script_offsets[] */
		offsetof(gryosterScb, script_0),
	},
	{                                               /* script_0 */
		{                                           /* hdr */
			0,                                      /*   kind */
			0,                                      /*   texture_id */
			100,                                    /*   generator_lifetime */
			10,                                     /*   particle_lifetime */
			LBPARTICLE_FLAG_FRICTION,               /*   flags */
			1.0f,                                   /*   gravity */
			1.0f,                                   /*   friction */
			{ 0.0f, 0.0f, 5.0f },                   /*   vel */
			5.0f,                                   /*   unk_script_0x20 */
			1.5707963f,                             /*   unk_script_0x24 (pi/2; bit pattern 0x3FC90FDA) */
			-0.5f,                                  /*   update_rate */
			100.0f,                                 /*   size */
		},
		{                                           /* bytecode -- exact END-inclusive length */
			lbpSetSizeRand, LBP_USHORT_S(1),
				LBP_F32(0x43960000),                /* target = 300.0 */
				LBP_F32(0x42C80000),                /* random = 100.0 */

			lbpAddPosRand,
				LBP_F32(0x44BB8000),                /* rx = 1500.0 */
				LBP_F32(0x442F0000),                /* ry = 700.0 */
				LBP_F32(0x00000000),                /* rz = 0.0 */

			lbpMaskST(),
			lbpEnvColor(),

			lbpSetPrimBlend(LBP_R | LBP_G | LBP_B), LBP_USHORT_S(1),
				0xFF, 0xFF, 0xFF,                   /* primcolor white, immediately */

			lbpSetEnvBlend(LBP_R | LBP_G | LBP_B), LBP_USHORT_S(1),
				0x61, 0x88, 0xFF,                   /* envcolor (0x61, 0x88, 0xFF), immediately */

			lbpWaitFrame(0, 0),                     /* advance frame_id to 0, no wait */

			lbpSetSizeRand, LBP_USHORT_S(11),
				LBP_F32(0x42480000),                /* lerp size toward 50.0 ... */
				LBP_F32(0x42C80000),                /* ... + rand*100.0, over 11 frames */

			lbpSetPrimBlend(LBP_R | LBP_G | LBP_B | LBP_A), LBP_USHORT_S(16),
				0x70, 0xBA, 0xFF, 0x00,             /* lerp primcolor to (0x70,0xBA,0xFF,0x00) over 16f */

			lbpSetEnvBlend(LBP_R | LBP_G | LBP_B | LBP_A), LBP_USHORT_S(11),
				0xFF, 0xFF, 0xFF, 0x00,             /* lerp envcolor to (0xFF,0xFF,0xFF,0x00) over 11f */

			lbpWait(10),
			lbpEnd(),
		},
	},
};
