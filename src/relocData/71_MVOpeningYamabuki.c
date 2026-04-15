/* relocData file 71: MVOpeningYamabuki — the opening scene where the
 * Pikachu figure topples onto the carpet in the yellow room.
 *
 * First-pass typing: split the 257 KB blob into named `u8` blocks at
 * the known `llMVOpeningYamabuki*` symbol boundaries so each DObjDesc
 * / AnimJoint / Sprite landmark gets its own declaration. The block
 * BYTES are still raw and live under `build/src/relocData/` —
 * `tools/extractRelocInc.py` pulls them straight out of the baserom
 * on every `make extract`. Future refinement can further break each
 * block down into typed `DObjDesc[]` / `Gfx[]` / `Vtx[]` / `Sprite`
 * declarations, carved out of the intervening pre-data and tail
 * pool of vertex / display-list / texture data.
 *
 * The symbol offsets below come from
 * `symbols/reloc_data_symbols.us.txt` (which `genRelocSymbols.py`
 * builds from `tools/relocFileDescriptions.us.txt`), and are
 * referenced by `mv/mvopening/mvopeningyamabuki.c` via
 * `lbRelocGetFileData` on each `ll*` extern.
 */

#include "relocdata_types.h"

/* Pre-LegsDObjDesc pool (0x0000..0x9548, 37192 bytes).
 * Contains the raw Vtx / Gfx / Tex / Lut pools that the Legs,
 * LegsShadow, and MBall DObjDesc trees' display lists reference. */
u8 dMVOpeningYamabuki_data_0x0000[0x9548] = {
	#include <MVOpeningYamabuki/data_0x0000.data.inc.c>
};

/* Legs DObjDesc array @ 0x9548..0x98c0, 888 bytes.
 * `llMVOpeningYamabukiLegsDObjDesc`. Pikachu's jointed leg model
 * built by `mvOpeningYamabukiMakeLegs()` via `gcSetupCustomDObjs`. */
u8 dMVOpeningYamabuki_LegsDObjDesc[0x378] = {
	#include <MVOpeningYamabuki/LegsDObjDesc.data.inc.c>
};

/* Legs AnimJoint scripts @ 0x98c0..0xb2b0, 6640 bytes.
 * `llMVOpeningYamabukiLegsAnimJoint`. AObjEvent32 tracks driving the
 * leg joints — fed to `gcAddAnimJointAll` in `MakeLegs`. */
u8 dMVOpeningYamabuki_LegsAnimJoint[0x19F0] = {
	#include <MVOpeningYamabuki/LegsAnimJoint.data.inc.c>
};

/* LegsShadow DObjDesc @ 0xb2b0..0xb390, 224 bytes.
 * `llMVOpeningYamabukiLegsShadowDObjDesc`. Projected shadow geometry
 * for the Pikachu legs; drawn by `MakeLegsShadow`. */
u8 dMVOpeningYamabuki_LegsShadowDObjDesc[0xE0] = {
	#include <MVOpeningYamabuki/LegsShadowDObjDesc.data.inc.c>
};

/* LegsShadow AnimJoint @ 0xb390..0xc9e0, 5712 bytes.
 * `llMVOpeningYamabukiLegsShadowAnimJoint`. */
u8 dMVOpeningYamabuki_LegsShadowAnimJoint[0x1650] = {
	#include <MVOpeningYamabuki/LegsShadowAnimJoint.data.inc.c>
};

/* MBall DObjDesc @ 0xc9e0..0xcac0, 224 bytes.
 * `llMVOpeningYamabukiMBallDObjDesc`. The Master Ball model that sits
 * on the carpet next to Pikachu; `MakeMBall()`. */
u8 dMVOpeningYamabuki_MBallDObjDesc[0xE0] = {
	#include <MVOpeningYamabuki/MBallDObjDesc.data.inc.c>
};

/* MBall AnimJoint @ 0xcac0..0xd330, 2160 bytes.
 * `llMVOpeningYamabukiMBallAnimJoint`. */
u8 dMVOpeningYamabuki_MBallAnimJoint[0x870] = {
	#include <MVOpeningYamabuki/MBallAnimJoint.data.inc.c>
};

/* Cam AnimJoint + wallpaper resource pool @ 0xd330..0x3ee58,
 * 203048 bytes.
 *
 * Starts with `llMVOpeningYamabukiCamAnimJoint` — a single AObjEvent32
 * script driving the scene camera (`MakeMainCamera`). The rest is the
 * wallpaper sprite's texture / palette / bitmap / DL pool that the
 * sprite at the end of the file points back into via its reloc chain.
 * Keeping this as one block for the first cut; can split into
 * `Cam_AnimJoint` + `Wallpaper_tex` + `Wallpaper_bitmaps` later. */
u8 dMVOpeningYamabuki_CamAnimJoint_and_wallpaper[0x31B28] = {
	#include <MVOpeningYamabuki/CamAnimJoint_and_wallpaper.data.inc.c>
};

/* Wallpaper sprite struct @ 0x3ee58..0x3ee9c, 68 bytes.
 * `llMVOpeningYamabukiWallpaperSprite`. Drawn by `MakeWallpaper()`
 * as the background layer. Its `Bitmap*` field points back into the
 * pool above. */
u8 dMVOpeningYamabuki_WallpaperSprite[0x44] = {
	#include <MVOpeningYamabuki/WallpaperSprite.data.inc.c>
};

/* Trailing 4-byte pad @ 0x3ee9c..0x3eea0. */
PAD(4);
