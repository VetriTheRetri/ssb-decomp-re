#include <ef/effect.h>

// 0x8012CA90 - ColAnim Script 1
u32 dGMColAnimScript1[/* */] =
{
	gmColCommandSetColor1(0xFF, 0xFF, 0xFF, 0x30),
	gmColCommandWait(65535),
	gmColCommandGoto(dGMColAnimScript1)
};

// 0x8012CAA4 - ColAnim Script 2
u32 dGMColAnimScript2[/* */] =
{
	gmColCommandToggleColorOff(),
	gmColCommandEnd()
};

// 0x8012CAAC - ColAnim Script 3
u32 dGMColAnimScript3[/* */] =
{
	gmColCommandSetColor1(0xFF, 0xFF, 0xFF, 0x82),
	gmColCommandBlendColor1(3, 0xFF, 0xFF, 0xFF, 0x32),
	gmColCommandWait(3),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandGoto(dGMColAnimScript3)
};

// 0x8012CAD0 - ColAnim Script 4
u32 dGMColAnimScript4[/* */] =
{
	gmColCommandSetColor1(0x80, 0xFF, 0x80, 0x50),
	gmColCommandBlendColor1(3, 0x80, 0xFF, 0x80, 0x14),
	gmColCommandWait(3),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandGoto(dGMColAnimScript4)
};

// 0x8012CAF4 - ColAnim Script 5
u32 dGMColAnimScript5[/* */] =
{
	gmColCommandSetLight(90, 0),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandSetColor1(0xFF, 0xFF, 0xFF, 0xE6),
	gmColCommandWait(1),
	gmColCommandBlendColor1(6, 0xFF, 0xFF, 0xFF, 0x1E),
	gmColCommandWait(6),
	gmColCommandToggleColorOff(),
	gmColCommandEnd()
};

// 0x8012CB20 - ColAnim Script 6
u32 dGMColAnimScript6[/* */] =
{
	gmColCommandEffect(0, nEFKindChargeSparkle, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandLoopBegin(2),
	gmColCommandSetColor1(0xFF, 0xFF, 0xFF, 0x30),
	gmColCommandWait(1),
	gmColCommandBlendColor1(4, 0xFF, 0xFF, 0xFF, 0x00),
	gmColCommandWait(4),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandLoopEnd(),
	gmColCommandGoto(dGMColAnimScript6)
};

// 0x8012CB60 - ColAnim Script 7
u32 dGMColAnimScript7[/* */] =
{
	gmColCommandSetColor1(0x00, 0x00, 0x00, 0x5A),
	gmColCommandWait(2),
	gmColCommandToggleColorOff(),
	gmColCommandWait(2),
	gmColCommandGoto(dGMColAnimScript7)
};

// 0x8012CB7C - ColAnim Script 8
u32 dGMColAnimScript8[/* */] =
{
	gmColCommandEffect(0, nEFKindSparkleWhiteScale, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSetColor1(0x00, 0x00, 0x00, 0x80),
	gmColCommandWait(2),
	gmColCommandEnd()
};

// 0x8012CB9C
u32 dGMColAnimScript9[/* */] =
{
	gmColCommandSetColor1(0xFF, 0xFF, 0x40, 0x96),
	gmColCommandEffect(0, nEFKindHealSparkles, 0, 0, 0, 0, 300, 300, 300),
	gmColCommandWait(2),
	gmColCommandSetColor1(0xFF, 0xFF, 0x40, 0x14),
	gmColCommandEffect(0, nEFKindHealSparkles, 0, 0, 0, 0, 300, 300, 300),
	gmColCommandWait(2),
	gmColCommandGoto(dGMColAnimScript9)
};

// 0x8012CBDC
u32 dGMColAnimScript10[/* */] =
{
	gmColCommandSetColor1(0xFF, 0xFF, 0xFF, 0x80),
	gmColCommandWait(1),
	gmColCommandBlendColor1(6, 0xFF, 0xC8, 0xA0, 0x1E),
	gmColCommandWait(6),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandBlendColor1(3, 0xFF, 0xFF, 0xFF, 0xA0),
	gmColCommandWait(3),
	gmColCommandGoto(dGMColAnimScript10)
};

// 0x8012CC10
u32 dGMColAnimScript11[/* */] =
{
	gmColCommandSetLight(0, -70),
	gmColCommandSetColor1(0xFF, 0xFF, 0xFF, 0xFF),
	gmColCommandWait(2),
	gmColCommandBlendColor1(36, 0xFF, 0xFF, 0xFF, 0x0A),
	gmColCommandWait(36),
	gmColCommandBlendColor1(18, 0xFF, 0xFF, 0xFF, 0xB4),
	gmColCommandWait(18),
	gmColCommandGoto(dGMColAnimScript11)
};

// 0x8012CC40
u32 dGMColAnimScript12[/* */] =
{
	gmColCommandSetColor1(0xFF, 0xF0, 0x78, 0xAA),
	gmColCommandWait(1),
	gmColCommandSetColor1(0xDC, 0x6E, 0x1E, 0x96),
	gmColCommandWait(1),
	gmColCommandReturn()
};

// 0x8012CC5C
u32 dGMColAnimScript13[/* */] =
{
	gmColCommandLoopBegin(2),
	gmColCommandSetColor1(0xB4, 0x64, 0x00, 0x64),
	gmColCommandWait(1),
	gmColCommandSetColor1(0x3C, 0x00, 0x00, 0xD2),
	gmColCommandWait(1),
	gmColCommandLoopEnd(),
	gmColCommandReturn()
};

// 0x8012CC80
u32 dGMColAnimScript14[/* */] =
{
	gmColCommandLoopBegin(4),
	gmColCommandEffect(-1, nEFKindFlameLR, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript12),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(4),
	gmColCommandEffect(-1, nEFKindFlameRandom, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript13),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CCC4
u32 dGMColAnimScript15[/* */] =
{
	gmColCommandLoopBegin(8),
	gmColCommandEffect(-1, nEFKindFlameLR, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript12),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(8),
	gmColCommandEffect(-1, nEFKindFlameRandom, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript13),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CD08
u32 dGMColAnimScript16[/* */] =
{
	gmColCommandLoopBegin(16),
	gmColCommandEffect(-1, nEFKindFlameLR, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript12),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(16),
	gmColCommandEffect(-1, nEFKindFlameRandom, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript13),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CD4C
u32 dGMColAnimScript17[/* */] =
{
	gmColCommandLoopBegin(24),
	gmColCommandEffect(-1, nEFKindFlameLR, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript12),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(20),
	gmColCommandEffect(-1, nEFKindFlameRandom, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript13),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CD90
u32 dGMColAnimScript18[/* */] =
{
	gmColCommandLoopBegin(2),
	gmColCommandSetColor1(0x00, 0x00, 0x94, 0x5A),
	gmColCommandWait(1),
	gmColCommandSetColor1(0xFF, 0xFF, 0xFF, 0x96),
	gmColCommandWait(1),
	gmColCommandLoopEnd(),
	gmColCommandReturn()
};

// 0x8012CDB4
u32 dGMColAnimScript19[/* */] =
{
	gmColCommandLoopBegin(4),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CDD8
u32 dGMColAnimScript20[/* */] =
{
	gmColCommandLoopBegin(8),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CDFC
u32 dGMColAnimScript21[/* */] =
{
	gmColCommandLoopBegin(12),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CE20
u32 dGMColAnimScript22[/* */] =
{
	gmColCommandLoopBegin(16),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CE44
u32 dGMColAnimScript23[/* */] =
{
	gmColCommandLoopBegin(1),
	gmColCommandSetColor1(0x14, 0x14, 0x14, 0xFF),
	gmColCommandWait(2),
	gmColCommandToggleColorOff(),
	gmColCommandSetSkeletonID(1),
	gmColCommandWait(2),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandLoopEnd(),
	gmColCommandReturn()
};

// 0x8012CE70
u32 dGMColAnimScript24[/* */] =
{
	gmColCommandLoopBegin(2),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript23),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(2),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CEB4
u32 dGMColAnimScript25[/* */] =
{
	gmColCommandLoopBegin(3),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript23),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(5),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CEF8
u32 dGMColAnimScript26[/* */] =
{
	gmColCommandLoopBegin(4),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript23),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(8),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CF3C
u32 dGMColAnimScript27[/* */] =
{
	gmColCommandLoopBegin(5),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript23),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(11),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CF80
u32 dGMColAnimScript28[/* */] =
{
	gmColCommandLoopBegin(1),
	gmColCommandSetColor1(0x14, 0x14, 0x14, 0xFF),
	gmColCommandWait(2),
	gmColCommandToggleColorOff(),
	gmColCommandSetSkeletonID(1),
	gmColCommandWait(3),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandLoopEnd(),
	gmColCommandReturn()
};

// 0x8012CFAC
u32 dGMColAnimScript29[/* */] =
{
	gmColCommandLoopBegin(2),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript28),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(2),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012CFF0
u32 dGMColAnimScript30[/* */] =
{
	gmColCommandLoopBegin(3),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript28),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(5),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012D034
u32 dGMColAnimScript31[/* */] =
{
	gmColCommandLoopBegin(4),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript28),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(8),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012D078
u32 dGMColAnimScript32[/* */] =
{
	gmColCommandLoopBegin(5),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript28),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(11),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012D0BC
u32 dGMColAnimScript33[/* */] =
{
	gmColCommandLoopBegin(1),
	gmColCommandSetColor1(0x14, 0x14, 0x14, 0xFF),
	gmColCommandSetSkeletonID(2),
	gmColCommandWait(2),
	gmColCommandToggleColorOff(),
	gmColCommandSetSkeletonID(1),
	gmColCommandWait(2),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandLoopEnd(),
	gmColCommandReturn()
};

// 0x8012D0EC
u32 dGMColAnimScript34[/* */] =
{
	gmColCommandLoopBegin(2),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript33),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(2),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012D130
u32 dGMColAnimScript35[/* */] =
{
	gmColCommandLoopBegin(3),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript33),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(5),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012D174
u32 dGMColAnimScript36[/* */] =
{
	gmColCommandLoopBegin(4),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript33),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(8),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012D1B8
u32 dGMColAnimScript37[/* */] =
{
	gmColCommandLoopBegin(5),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript33),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(11),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandSubroutine(dGMColAnimScript18),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

// 0x8012D1FC
u32 dGMColAnimScript38[/* */] =
{
	gmColCommandSetColor1(0x00, 0x00, 0xFF, 0x80),
	gmColCommandWait(1),
	gmColCommandSetColor1(0xFF, 0xFF, 0xFF, 0x80),
	gmColCommandWait(1),
	gmColCommandEnd()
};

// 0x8012D1FC
u32 dGMColAnimScript39[/* */] =
{
	gmColCommandEnd()
};

// 0x8012D1FC
u32 dGMColAnimScript40[/* */] =
{
	gmColCommandEnd()
};

// 0x8012D1FC
u32 dGMColAnimScript41[/* */] =
{
	gmColCommandEnd()
};

// 0x8012D224
u32 dGMColAnimScript42[/* */] =
{
	gmColCommandSetColor1(0x80, 0x00, 0x00, 0x80),
	gmColCommandWait(2),
	gmColCommandBlendColor1(10, 0x80, 0x00, 0x00, 0x14),
	gmColCommandWait(10),
	gmColCommandToggleColorOff(),
	gmColCommandWait(2),
	gmColCommandGoto(dGMColAnimScript42)
};

// 0x8012D24C
u32 dGMColAnimScript43[/* */] =
{
	gmColCommandSetColor1(0x80, 0x00, 0x00, 0x80),
	gmColCommandWait(2),
	gmColCommandBlendColor1(12, 0x80, 0x00, 0x00, 0x14),
	gmColCommandWait(12),
	gmColCommandBlendColor1(6, 0x80, 0x00, 0x00, 0x80),
	gmColCommandWait(6),
	gmColCommandGoto(dGMColAnimScript43)
};

u32 D_ovl2_8012D278[] =
{
	gmColCommandSetColor1S1(),
	0x80506446,
	0x2800000C,
	0xF03C8C82,
	gmColCommandWait(12),
	0x2800000C,
	0xF03C8C3C,
	gmColCommandWait(12),
	gmColCommandToggleColorOff(),
	gmColCommandWait(6),
	gmColCommandGoto(D_ovl2_8012D278)
};

u32 D_ovl2_8012D2A8[] =
{
	0x3C097FF6,
	0x24000000,
	0xFF0000FF,
	gmColCommandWait(1),
	0x24000000,
	0xFF000080,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(20),
	0x40000000,
	gmColCommandEnd()
};

u32 D_ovl2_8012D2D4[] =
{
	gmColCommandSetColor1S1(),
	0xFFFF80AA,
	gmColCommandWait(1),
	0x28000003,
	0x5050505A,
	gmColCommandWait(3),
	0x28000003,
	0x50505000,
	gmColCommandWait(3),
	0x28000004,
	0xFFFF80AA,
	gmColCommandWait(3),
	gmColCommandGoto(D_ovl2_8012D2D4),
	gmColCommandEnd()
};

u32 D_ovl2_8012D310[] =
{
	gmColCommandSetColor1S1(),
	0xFFFF8046,
	gmColCommandWait(2),
	0x24000000,
	0xFFFF8028,
	gmColCommandWait(2),
	0x24000000,
	0x3C3C0064,
	gmColCommandWait(2),
	gmColCommandEnd()
};

u32 D_ovl2_8012D338[] =
{
	gmColCommandSetColor1S1(),
	0xFFFF80B4,
	gmColCommandWait(1),
	0x28000005,
	0xFFFF8000,
	gmColCommandWait(5),
	gmColCommandToggleColorOff(),
	gmColCommandWait(2),
	gmColCommandEnd()
};

u32 D_ovl2_8012D35C[] =
{
	gmColCommandEnd()
};

u32 D_ovl2_8012D360[] =
{
	0x3C096000,
	gmColCommandSetColor1S1(),
	0xFFFFFF80,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(8),
	0x40000000,
	gmColCommandEnd()
};

u32 D_ovl2_8012D380[] =
{
	gmColCommandSetColor1S1(),
	0x80FFAABE,
	gmColCommandWait(1),
	0x24000000,
	0x96FFC88C,
	gmColCommandWait(1),
	0x24000000,
	0xFFFFFF64,
	gmColCommandWait(2),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandGoto(D_ovl2_8012D380),
	gmColCommandEnd()
};

u32 D_ovl2_8012D3B8[] =
{
	0x3C001FB0,
	0x24000000,
	0x00FFFF50,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandGoto(D_ovl2_8012D3B8)
};

u32 D_ovl2_8012D3D8[] =
{
	0x3C001FB0,
	gmColCommandLoopBegin(4),
	0x24000000,
	0xFFFFFF1E,
	gmColCommandWait(1),
	0x24000000,
	0xFFFF001E,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandLoopEnd(),
	gmColCommandLoopBegin(3),
	0x24000000,
	0xFFFFFF64,
	gmColCommandWait(1),
	0x24000000,
	0xFFFF0064,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandLoopEnd()
};

u32 D_ovl2_8012D42C[] =
{
	gmColCommandSetColor1S1(),
	0xFFFFFFB4,
	gmColCommandWait(1),
	0x24000000,
	0xFFFF00B4,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandGoto(D_ovl2_8012D42C)
};

u32 D_ovl2_8012D454[] =
{
	gmColCommandSetColor1S1(),
	0xFFFF00DC,
	gmColCommandWait(1),
	0x2800001E,
	0xA03C3C8C,
	gmColCommandWait(30),
	0x28000014,
	0x80000000,
	gmColCommandWait(20),
	gmColCommandToggleColorOff(),
	gmColCommandEnd()
};

u32 D_ovl2_8012D480[] =
{
	0x3C001FB0,
	0x24000000,
	0xFFAA0046,
	gmColCommandWait(4),
	0x24000000,
	0xD28C0046,
	gmColCommandWait(4),
	0x34003400,
	0x00000000,
	0x00000000,
	0x00000000,
	gmColCommandGoto(D_ovl2_8012D480)
};

u32 D_ovl2_8012D4B4[] =
{
	0x3C001FB0,
	gmColCommandLoopBegin(20),
	0x24000000,
	0xFFF07878,
	gmColCommandWait(1),
	0x24000000,
	0xDC6E1E50,
	gmColCommandWait(1),
	gmColCommandLoopEnd(),
	gmColCommandToggleColorOff(),
	0x3C097FF6,
	gmColCommandLoopBegin(6),
	0x37F81800,
	0x00000000,
	0x00000000,
	0x00000000,
	gmColCommandWait(4),
	gmColCommandLoopEnd(),
	0x40000000,
	0x00000000
};

u32 D_ovl2_8012D504[] =
{
	gmColCommandSetColor1S1(),
	0xFFFFFF28,
	0x28000008,
	0xFFFFFF00,
	gmColCommandWait(8),
	0x28000008,
	0xFFFFFF28,
	gmColCommandWait(8),
	gmColCommandGoto(D_ovl2_8012D504)
};

u32 D_ovl2_8012D52C[] =
{
	gmColCommandSetColor1S1(),
	0xFFFFFF3C,
	0x28000006,
	0xFFFFFF0A,
	gmColCommandWait(6),
	0x28000006,
	0xFFFFFF3C,
	gmColCommandWait(6),
	gmColCommandGoto(D_ovl2_8012D52C)
};

u32 D_ovl2_8012D554[] =
{
	gmColCommandSetColor1S1(),
	0xFFFFFF5A,
	0x28000004,
	0xFFFFFF0A,
	gmColCommandWait(4),
	0x28000004,
	0xFFFFFF5A,
	gmColCommandWait(4),
	gmColCommandGoto(D_ovl2_8012D554)
};

u32 D_ovl2_8012D57C[] =
{
	gmColCommandWait(2),
	0x24000000,
	0xB480640A,
	gmColCommandWait(5),
	0x24000000,
	0x503C2814,
	gmColCommandWait(2),
	0x24000000,
	0xB4806428,
	gmColCommandWait(5),
	0x24000000,
	0x503C283C,
	gmColCommandWait(2),
	0x24000000,
	0xB4806450,
	gmColCommandWait(5),
	0x24000000,
	0x503C2864,
	gmColCommandWait(2),
	0x24000000,
	0xB4806478,
	gmColCommandWait(5),
	0x24000000,
	0x503C288C,
	gmColCommandWait(2),
	0x24000000,
	0xB48064A0,
	gmColCommandWait(5),
	0x24000000,
	0x503C28B4,
	0x00000000
};

u32 D_ovl2_8012D5F8[] =
{
	gmColCommandWait(2),
	0x24000000,
	0xB48064B4,
	gmColCommandWait(5),
	0x24000000,
	0x503C28A0,
	gmColCommandWait(2),
	0x24000000,
	0xB480648C,
	gmColCommandWait(5),
	0x24000000,
	0x503C2878,
	gmColCommandWait(2),
	0x24000000,
	0xB4806464,
	gmColCommandWait(5),
	0x24000000,
	0x503C2850,
	gmColCommandWait(2),
	0x24000000,
	0xB480643C,
	gmColCommandWait(5),
	0x24000000,
	0x503C2828,
	gmColCommandWait(2),
	0x24000000,
	0xB4806414,
	gmColCommandWait(5),
	0x24000000,
	0x503C280A,
	gmColCommandEnd()
};

u32 D_ovl2_8012D674[] =
{
	gmColCommandLoopBegin(4),
	0x24000000,
	0xFFFFFF64,
	gmColCommandWait(1),
	0x28000006,
	0x0000FF00,
	gmColCommandWait(6),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandLoopEnd(),
	gmColCommandGoto(D_ovl2_8012D674)
};

u32 D_ovl2_8012D6AC[] =
{
	0x440000E7
};

u32 D_ovl2_8012D6B0[] =
{
	gmColCommandSetColor1S1(),
	0xFFFFFF40,
	gmColCommandWait(1),
	0x24000000,
	0x00FFFF40,
	gmColCommandWait(1),
	gmColCommandGoto(D_ovl2_8012D6B0)
};

u32 D_ovl2_8012D6D0[] =
{
	0x37F82800,
	0x00000000,
	0x00000096,
	0x00960096,
	gmColCommandWait(2),
	gmColCommandGoto(D_ovl2_8012D6D0)
};

u32 D_ovl2_8012D6EC[] =
{
	gmColCommandLoopBegin(4),
	gmColCommandLoopBegin(3),
	0x24000000,
	0x0000FF32,
	gmColCommandWait(1),
	0x24000000,
	0xFFFFFF5A,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandLoopEnd(),
	gmColCommandEffect(-1, nEFKindShockSmall, 0, 0, 0, 0, 0, 0, 0),
	gmColCommandLoopEnd(),
	gmColCommandGoto(D_ovl2_8012D6EC)
};

u32 D_ovl2_8012D734[] =
{
	gmColCommandLoopBegin(4),
	gmColCommandLoopBegin(2),
	0x24000000,
	0x0000FF5A,
	gmColCommandWait(1),
	0x24000000,
	0xFFFFFF64,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandLoopEnd(),
	0x37F82800,
	0x00000000,
	0x00000064,
	0x00640064,
	0x34007C00,
	0x00000096,
	0x00000190,
	0x01900190,
	gmColCommandLoopEnd(),
	gmColCommandGoto(D_ovl2_8012D734)
};

u32 D_ovl2_8012D78C[] =
{
	gmColCommandSetColor1S1(),
	0xFFFFFF50,
	gmColCommandWait(1),
	0x24000000,
	0x00000050,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(2),
	gmColCommandGoto(D_ovl2_8012D78C)
};

u32 D_ovl2_8012D7B4[] =
{
	gmColCommandLoopBegin(11),
	0x24000000,
	0xFFFF6464,
	gmColCommandWait(1),
	0x24000000,
	0xFF64005A,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(1),
	gmColCommandLoopEnd(),
	gmColCommandEnd()
};

u32 D_ovl2_8012D7E0[] =
{
	gmColCommandSetColor1S1(),
	0xFFFFFF8C,
	gmColCommandWait(1),
	0x24000000,
	0x00FFFF8C,
	gmColCommandWait(1),
	gmColCommandGoto(D_ovl2_8012D7E0)
};

u32 D_ovl2_8012D800[] =
{
	0x3C0B4000,
	0x24000000,
	0xFFFFFFFF,
	gmColCommandWait(1),
	0x24000000,
	0x00FFFFFF,
	gmColCommandWait(1),
	0x24000000,
	0x00FFFF8C,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(4),
	gmColCommandEnd()
};

u32 D_ovl2_8012D834[] =
{
	gmColCommandLoopBegin(2),
	0x24000000,
	0xFFFFFF30,
	gmColCommandWait(2),
	0x24000000,
	0x00FFFF30,
	gmColCommandWait(2),
	gmColCommandLoopEnd(),
	0x34002800,
	0x0000005A,
	0x00000000,
	0x00000000,
	gmColCommandGoto(D_ovl2_8012D834)
};

u32 D_ovl2_8012D86C[] =
{
	gmColCommandSetColor1S1(),
	0x7F7F7F50,
	gmColCommandWait(2),
	0x34007C00,
	0x0000005A,
	0x000000B4,
	0x00B400B4,
	0x34002800,
	0x0000005A,
	0x00000000,
	0x00000000,
	0x24000000,
	0x00FF0050,
	gmColCommandWait(2),
	0x34007C00,
	0x0000005A,
	0x000000B4,
	0x00B400B4,
	0x34002800,
	0x0000005A,
	0x00000000,
	0x00000000,
	gmColCommandGoto(D_ovl2_8012D86C)
};

u32 D_ovl2_8012D8CC[] =
{
	gmColCommandSetColor1S1(),
	0x000000FF,
	gmColCommandWait(30),
	0x28000028,
	0x00000000,
	gmColCommandWait(40),
	gmColCommandToggleColorOff(),
	0x00000000
};

u32 D_ovl2_8012D8EC[] =
{
	gmColCommandSetColor1S1(),
	0x00000096,
	gmColCommandWait(1),
	gmColCommandGoto(D_ovl2_8012D8EC),
	gmColCommandEnd()
};

u32 D_ovl2_8012D904[] =
{
	0x34007000,
	0x00000000,
	0x000000B4,
	0x00B400B4,
	gmColCommandWait(2),
	gmColCommandGoto(D_ovl2_8012D904)
};

u32 D_ovl2_8012D920[] =
{
	0x34004400,
	0x00000190,
	0x00000000,
	0x00000000,
	gmColCommandWait(1),
	gmColCommandGoto(D_ovl2_8012D920),
	0x00000000
};

u32 D_ovl2_8012D940[] =
{
	0x3C0B4000,
	0x24000000,
	0x5A000014,
	0x2800003C,
	0x5A0000A0,
	gmColCommandWait(60),
	0x24000000,
	0x5A0000A0,
	0x040001F4,
	gmColCommandEnd()
};

u32 D_ovl2_8012D968[] =
{
	0x3C0B4000,
	0x24000000,
	0xFFFFFF28,
	0x2C000000,
	0xFFFFFFFF,
	gmColCommandWait(2),
	0x24000000,
	0x5A0000A0,
	0x28000028,
	0x5A00000A,
	gmColCommandWait(40),
	gmColCommandToggleColorOff(),
	0x040001F4,
	gmColCommandEnd()
};

u32 D_ovl2_8012D9A0[] =
{
	gmColCommandSetColor1S1(),
	0x000000FF,
	gmColCommandWait(1),
	gmColCommandGoto(D_ovl2_8012D9A0),
	gmColCommandEnd()
};

u32 D_ovl2_8012D9B8[] =
{
	gmColCommandSetColor1S1(),
	0xFF000080,
	gmColCommandWait(2),
	0x24000000,
	0x80FF0064,
	gmColCommandWait(2),
	gmColCommandToggleColorOff(),
	gmColCommandWait(2),
	gmColCommandGoto(D_ovl2_8012D9B8)
};

u32 D_ovl2_8012D9E0[] =
{
	gmColCommandSetColor1S1(),
	0xFFFFFF64,
	gmColCommandWait(1),
	0x3400A400,
	0x00000064,
	0x000000B4,
	0x00B400B4,
	0x34012800,
	0x00000000,
	0x0000012C,
	0x012C012C,
	0x28000003,
	0xFFC8A08C,
	gmColCommandWait(3),
	0x34012800,
	0x00000000,
	0x0000012C,
	0x012C012C,
	0x28000003,
	0x64C8646E,
	gmColCommandWait(3),
	0x34012800,
	0x00000000,
	0x0000012C,
	0x012C012C,
	0x28000003,
	0x0000288C,
	gmColCommandWait(3),
	0x34012800,
	0x00000000,
	0x0000012C,
	0x012C012C,
	gmColCommandToggleColorOff(),
	gmColCommandWait(3),
	gmColCommandGoto(D_ovl2_8012D9E0)
};

u32 D_ovl2_8012DA70[] =
{
	0x3BF05C00,
	0x000000FA,
	0x00000064,
	0x00640064,
	gmColCommandWait(2),
	gmColCommandGoto(D_ovl2_8012DA70)
};

u32 D_ovl2_8012DA8C[] =
{
	0x3C097FF6,
	0x3BF07C00,
	0x000000C8,
	0x0000005A,
	0x005A005A,
	0x24000000,
	0xFFFF0078,
	gmColCommandWait(1),
	0x24000000,
	0x80000078,
	gmColCommandWait(1),
	gmColCommandToggleColorOff(),
	gmColCommandWait(2),
	gmColCommandGoto(D_ovl2_8012DA8C)
};

u32 D_ovl2_8012DAC8[] =
{
	gmColCommandSetColor1S1(),
	0xFFFF008C,
	0x28000008,
	0x8000008C,
	gmColCommandWait(8),
	0x24000000,
	0x8000008C,
	0x28000008,
	0xFFFF008C,
	gmColCommandWait(8),
	gmColCommandGoto(D_ovl2_8012DAC8)
};

u32 D_ovl2_8012DAF8[] =
{
	gmColCommandSetColor1S1(),
	0xFFFF008C,
	gmColCommandWait(1),
	0x24000000,
	0x8000008C,
	gmColCommandWait(1),
	gmColCommandGoto(D_ovl2_8012DAF8)
};

u32 D_ovl2_8012DB18[] =
{
	gmColCommandSetColor1S1(),
	0xFFFF008C,
	0x28000004,
	0x8000008C,
	gmColCommandWait(4),
	0x24000000,
	0x8000008C,
	0x2800000C,
	0xFFFF008C,
	gmColCommandWait(12),
	gmColCommandGoto(D_ovl2_8012DB18)
};

u32 D_ovl2_8012DB48[] =
{
	gmColCommandSetColor1S1(),
	0xFFFFFF00,
	0x28000006,
	0xFFFFFF6E,
	gmColCommandWait(6),
	0x2800001E,
	0xFFFFFF00,
	gmColCommandWait(30),
	gmColCommandToggleColorOff(),
	gmColCommandEnd()
};

u32 D_ovl2_8012DB70[] =
{
	gmColCommandSetColor1S1(),
	0xFFFFFF46,
	0x28000006,
	0xFFFFFF00,
	gmColCommandWait(6),
	gmColCommandEnd()
};

u32 D_ovl2_8012DB88[] =
{
	gmColCommandSetColor1S1(),
	0xFF8C7850,
	0x28000008,
	0xFF8C7800,
	gmColCommandWait(8),
	gmColCommandEnd()
};

u32 D_ovl2_8012DBA0[] =
{
	gmColCommandSetColor1S1(),
	0x8C8CFF50,
	0x28000008,
	0x8C8CFF00,
	gmColCommandWait(8),
	gmColCommandEnd()
};

u32 D_ovl2_8012DBB8[] =
{
	gmColCommandSetColor1S1(),
	0x0080FF8C,
	0x28000006,
	0x0080FF00,
	gmColCommandWait(6),
	gmColCommandEnd()
};

GMColDesc dGMColAnimDescs[/* */] =
{
	{ NULL, 			    0, FALSE },
	{ dGMColAnimScript1,    1, FALSE },
	{ dGMColAnimScript2,   30, FALSE },
	{ dGMColAnimScript3,   30, FALSE },
	{ dGMColAnimScript4,   30, FALSE },
	{ dGMColAnimScript5,  100, FALSE },
	{ dGMColAnimScript6,   10, FALSE },
	{ dGMColAnimScript7,   60,  TRUE },
	{ dGMColAnimScript8,   60,  TRUE },
	{ dGMColAnimScript9,   15, FALSE },
	{ dGMColAnimScript10,  11, FALSE },
	{ dGMColAnimScript11,  10,  TRUE },
	{ dGMColAnimScript14, 100, FALSE },
	{ dGMColAnimScript15, 100, FALSE },
	{ dGMColAnimScript16, 100, FALSE },
	{ dGMColAnimScript17, 100, FALSE },
	{ dGMColAnimScript19, 100, FALSE },
	{ dGMColAnimScript20, 100, FALSE },
	{ dGMColAnimScript21, 100, FALSE },
	{ dGMColAnimScript22, 100, FALSE },
	{ dGMColAnimScript24, 100, FALSE },
	{ dGMColAnimScript25, 100, FALSE },
	{ dGMColAnimScript26, 100, FALSE },
	{ dGMColAnimScript27, 100, FALSE },
	{ dGMColAnimScript34, 100, FALSE },
	{ dGMColAnimScript35, 100, FALSE },
	{ dGMColAnimScript36, 100, FALSE },
	{ dGMColAnimScript37, 100, FALSE },
	{ dGMColAnimScript29, 100, FALSE },
	{ dGMColAnimScript30, 100, FALSE },
	{ dGMColAnimScript31, 100, FALSE },
	{ dGMColAnimScript32, 100, FALSE },
	{ dGMColAnimScript38, 100, FALSE },
	{ dGMColAnimScript39, 100, FALSE },
	{ dGMColAnimScript40, 100, FALSE },
	{ dGMColAnimScript41, 100, FALSE },
	{ dGMColAnimScript42,     60,  TRUE },
	{ dGMColAnimScript43,     60,  TRUE },
	{ D_ovl2_8012D278,     60,  TRUE },
	{ D_ovl2_8012D2A8,     60,  TRUE },
	{ D_ovl2_8012D2D4,     60,  TRUE },
	{ D_ovl2_8012D3B8,     60,  TRUE },
	{ D_ovl2_8012D3D8,     60,  TRUE },
	{ D_ovl2_8012D454,     60,  TRUE },
	{ D_ovl2_8012D480,     60,  TRUE },
	{ D_ovl2_8012D380,     60,  TRUE },
	{ D_ovl2_8012D35C,     60,  TRUE },
	{ D_ovl2_8012D360,     60,  TRUE },
	{ D_ovl2_8012D310,     60,  TRUE },
	{ D_ovl2_8012D338,     60,  TRUE },
	{ D_ovl2_8012D4B4,     60,  TRUE },
	{ D_ovl2_8012D504,     60,  TRUE },
	{ D_ovl2_8012D52C,     60,  TRUE },
	{ D_ovl2_8012D554,     60,  TRUE },
	{ D_ovl2_8012D57C,     60,  TRUE },
	{ D_ovl2_8012D5F8,     60,  TRUE },
	{ D_ovl2_8012D674,     60,  TRUE },
	{ D_ovl2_8012D6AC,     60,  TRUE },
	{ D_ovl2_8012D6D0,     60,  TRUE },
	{ D_ovl2_8012D6EC,     60,  TRUE },
	{ D_ovl2_8012D734,     60,  TRUE },
	{ D_ovl2_8012D78C,     60,  TRUE },
	{ D_ovl2_8012D7B4,     60,  TRUE },
	{ D_ovl2_8012D7E0,     60,  TRUE },
	{ D_ovl2_8012D800,     60,  TRUE },
	{ D_ovl2_8012D834,     60,  TRUE },
	{ D_ovl2_8012D86C,     60,  TRUE },
	{ D_ovl2_8012D8CC,     60,  TRUE },
	{ D_ovl2_8012D8EC,     60,  TRUE },
	{ D_ovl2_8012D904,     60,  TRUE },
	{ D_ovl2_8012D920,     60,  TRUE },
	{ D_ovl2_8012D940,     60,  TRUE },
	{ D_ovl2_8012D968,     60,  TRUE },
	{ D_ovl2_8012D9B8,     12, FALSE },
	{ D_ovl2_8012D9E0, 	  100, FALSE },
	{ D_ovl2_8012DA70,     10,  TRUE },
	{ D_ovl2_8012DA8C,     60,  TRUE },
	{ D_ovl2_8012DAC8,     60,  TRUE },
	{ D_ovl2_8012DAF8,     60,  TRUE },
	{ D_ovl2_8012DB18,     60,  TRUE },
	{ D_ovl2_8012D9A0,     60,  TRUE },
	{ D_ovl2_8012DB48,     60,  TRUE },
	{ D_ovl2_8012DB70,     60,  TRUE },
	{ D_ovl2_8012DB88,     60,  TRUE },
	{ D_ovl2_8012DBA0,     60,  TRUE },
	{ D_ovl2_8012DBB8,     60,  TRUE }
};
