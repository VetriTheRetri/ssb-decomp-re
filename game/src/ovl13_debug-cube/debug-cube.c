#include <sys/develop.h>
#include <gm/gmsound.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <debug-cube.h>

// ?
extern void func_8000B1C4();

// ovl0
extern void func_ovl0_800D4248();
extern void func_ovl0_800D42C8();

// ovl9
extern void func_ovl9_80369D78(s32, s32, s32, void*, s32);
extern func_ovl9_80369EC0();

// ovl13 stuff

// 0x80132B68
extern Gfx dMNDebugCubeKirbyCubeDisplayList[/* */] = {
    gsDPPipeSync(),
    0xDB0A0000, 0xB3B3B300,
    0xDB0A0004, 0xB3B3B300,
    0xDB0A0018, 0x4C4C4C00,
    0xDB0A001C, 0x4C4C4C00,
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0,  TEXEL0, 0, SHADE, 0,  TEXEL0, 0, SHADE, 0,  TEXEL0, 0, SHADE, 0), // 0xFC121824, 0xFF33FFFF,
    gsSPTexture(0x7FFF, 0xFFFF, 1, 0, FALSE), // 0xD7000002, 0xFFFFFFFF,
    0xFD100000, 0x801321E8,
    0xF5100000, 0x07014050,
    0xE6000000, 0x00000000,
    0xF3000000, 0x073FF100,
    0xF5101000, 0x00094250,
    0xF2000000, 0x0007C07C,
    0x01008010, 0x801329E8,
    0x06000204, 0x00000406,
    0x06080A0C, 0x00080C0E,
    0x01008010, 0x80132A68,
    0x06000204, 0x00000602,
    0x06080A0C, 0x00080C0E,
    0x01008010, 0x80132AE8,
    0x06000204, 0x00000406,
    0x06080A0C, 0x00080C0E,
    gsSPEndDisplayList()
};

// 0x80132CD8
extern Lights1 dMNDebugCubeLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80132CF0
extern Gfx dMNDebugCubeDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNDebugCubeLights1),
    gsSPEndDisplayList()
};

// 0x80132D18
extern f32 dMNDebugCubeRotateVelX = 0.5F;

// 0x80132D1C
extern f32 dMNDebugCubeRotateVelY = 0.7F;

// 0x80132D20
extern f32 dMNDebugCubeRotateVelZ = 0.2F;

// 0x80132D2C
extern s32 gMNDebugCubeMenuValueCall = 0; // "call"

// 0x80132D30
extern s32 gMNDebugCubeMenuValueFGM = 0; // "fgm"

// 0x80132D34
extern s32 gMNDebugCubeMenuValueBGM = 0; // "bgm"

// 0x80132D38
extern s32 gMNDebugCubeMenuValueEffect = 0; // "effect"

// 0x80132D3C
extern s32 gMNDebugCubeBGMInterrupt = 0;

// 0x80132D40
extern s32 gMNDebugCubeMenuValueRumble = 0; // "rumble" (rumble_id)

// 0x80132D44
extern s32 gMNDebugCubeMenuValueFrame = 0; // "frame" (duration)

// 0x80132D48
extern s32 gMNDebugCubeQueuedFGM = 0;

// 0x80132D4C
extern alSoundEffect* gMNDebugCubeSFX;

// 0x80132D50
extern s32 gMNDebugCubeCurrentSFX = 0;

// 0x80132D54
extern s32 dMNDebugCubeCallFGMs[12] = {
    0x0261, 0x025D, 0x025B, 0x0265,
    0x0260, 0x025F, 0x0266, 0x025C,
    0x025E, 0x0263, 0x0264, 0x0262
};

// 80132D84
extern s32 gMNDebugCubeMenuValueTransition = 0; // transition id

// 0x80132D9C
extern char (*dMNDebugCubeTransitionStrings[11])[] = {
    dMNDebugCubeStrAeroplane,
    dMNDebugCubeStrCheck,
    dMNDebugCubeStrGakubuthi,
    dMNDebugCubeStrKannon,
    dMNDebugCubeStrStar,
    dMNDebugCubeStrSudare1,
    dMNDebugCubeStrSudare2,
    dMNDebugCubeStrCamera,
    dMNDebugCubeStrBlock,
    dMNDebugCubeStrRotScale,
    dMNDebugCubeStrCurtain
};

// 0x80132DC8
extern dbMenuItem dMNDebugCubeMenuItems[15] = {
    { dbMenuItemKindExitLabel,          0,                       dMNDebugCubeStrContinue,         0,                                0.0F, 0.0F,    0 },
    { dbMenuItemKindNumeric,            mnDebugCubeStartRumble,  dMNDebugCubeStrRumble,           &gMNDebugCubeMenuValueRumble,     0.0F, 10.0F,   0 },
    { dbMenuItemKindNumeric,            mnDebugCubeStartRumble,  dMNDebugCubeStrFrame,            &gMNDebugCubeMenuValueFrame,      0.0F, 8000.0F, 0 },
    { dbMenuItemKindLabel,              mnDebugCubeStopRumble,   dMNDebugCubeStrStopRumble,       0,                                0.0F, 0.0F,    0 },
    { dbMenuItemKindNumeric,            mnDebugCubePlayCall,     dMNDebugCubeStrCall,             &gMNDebugCubeMenuValueCall,       0.0F, 11.0F,   0 },
    { dbMenuItemKindNumeric,            mnDebugCubePlayFGM,      dMNDebugCubeStrFGM,              &gMNDebugCubeMenuValueFGM,        0.0F, 695.0F,  0 },
    { dbMenuItemKindLabel,              mnDebugCubeStopFGM,      dMNDebugCubeStrStopFGM,          0,                                0.0F, 0.0F,    0 },
    { dbMenuItemKindNumeric,            mnDebugCubePlayBGM,      dMNDebugCubeStrBGM,              &gMNDebugCubeMenuValueBGM,        0.0F, 46.0F,   0 },
    { dbMenuItemKindNumeric,            mnDebugCubePlayBGM,      dMNDebugCubeStrEffect,           &gMNDebugCubeMenuValueEffect,     0.0F, 6.0F,    0 },
    { dbMenuItemKindLabel,              mnDebugCubeStopBGM,      dMNDebugCubeStrStopBGM,          0,                                0.0F, 0.0F,    0 },
    { dbMenuItemKindString,             mnDebugCubeDoTransition, dMNDebugCubeTransitionStrings,   &gMNDebugCubeMenuValueTransition, 0.0F, 10.0F,   0 },
    { dbMenuItemKindNumericNoSelect,    0,                       dMNDebugCubeStrCIC,              0x800A50EC,                       0.0F, 255.0F,  0 },
    { dbMenuItemKindNumericNoSelect,    0,                       dMNDebugCubeStrBoot,             0x800A4AC3,                       0.0F, 255.0F,  0 },
    { dbMenuItemKindNumeric,            0,                       dMNDebugCubeStrTvType,           0x80000300,                       0.0F, 255.0F,  0 },
    { dbMenuItemKindExitLabel,          mnDebugCubeExit,         dMNDebugCubeStrExit,             0,                                0.0F, 0.0F,    0 }
};

extern scUnkDataBounds D_ovl13_80132F6C;
extern scRuntimeInfo D_ovl13_80132F88;

// 0x80133034
extern char dMNDebugCubeStrAeroplane[] = "Aeroplane";

// 0x80133040
extern char dMNDebugCubeStrCheck[] = "Check";

// 0x80133048
extern char dMNDebugCubeStrGakubuthi[] = "Gakubuthi";

// 0x80133054
extern char dMNDebugCubeStrKannon[] = "Kannon";

// 0x8013305C
extern char dMNDebugCubeStrStar[] = "Star";

// 0x80133064
extern char dMNDebugCubeStrSudare1[] = "Sudare1";

// 0x8013306C
extern char dMNDebugCubeStrSudare2[] = "Sudare2";

// 0x80133074
extern char dMNDebugCubeStrCamera[] = "Camera";

// 0x8013307C
extern char dMNDebugCubeStrBlock[] = "Block";

// 0x80133084
extern char dMNDebugCubeStrRotScale[] = "RotScale";

// 0x80133090
extern char dMNDebugCubeStrCurtain[] = "Curtain";

// 0x80133098
extern char dMNDebugCubeStrContinue[] = "Continue";

// 0x80133098
extern char dMNDebugCubeStrRumble[] = "rumble %3d";

// 0x80133098
extern char dMNDebugCubeStrFrame[] = "frame %4d";

// 0x80133098
extern char dMNDebugCubeStrStopRumble[] = "STOP RUMBLE";

// 0x80133098
extern char dMNDebugCubeStrCall[] = "call %3d";

// 0x80133098
extern char dMNDebugCubeStrFGM[] = "fgm %3d";

// 0x80133098
extern char dMNDebugCubeStrStopFGM[] = "STOP FGM";

// 0x80133098
extern char dMNDebugCubeStrBGM[] = "bgm %3d";

// 0x80133098
extern char dMNDebugCubeStrEffect[] = "effect %3d";

// 0x80133098
extern char dMNDebugCubeStrStopBGM[] = "STOP BGM";

// 0x80133098
extern char dMNDebugCubeStrContinue[] = "";

// 0x80133098
extern char dMNDebugCubeStrCIC[] = "cic %3d";

// 0x80133098
extern char dMNDebugCubeStrBoot[] = "boot %3d";

// 0x80133098
extern char dMNDebugCubeStrTvType[] = "TvType %3d";

// 0x80133098
extern char dMNDebugCubeStrExit[] = "Exit";

// 0x80133138
extern s32 dMNDebugCubeExitInterrupt;

// 0x8013313C
extern s32 dMNDebugCubeTransitionInterrupt;

extern u32 D_ovl13_80133140[5];

extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;


// 0x80131B00
void mnDebugCubeSetLighting(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dMNDebugCubeDisplayList);
}

// 0x80131B24
void mnDebugCubeRotateKirbyCube(GObj* cube_gobj)
{
    DObj* cube_dobj = DObjGetStruct(cube_gobj);

    while (TRUE)
    {
        cube_dobj->rotate.vec.f.x += dMNDebugCubeRotateVelX;
        cube_dobj->rotate.vec.f.y += dMNDebugCubeRotateVelY;
        cube_dobj->rotate.vec.f.z += dMNDebugCubeRotateVelZ;

        gsStopCurrentProcess(1);
    }
}

// 0x80131BBC
void mnDebugCubeExit()
{
    dMNDebugCubeExitInterrupt = 1;
}

// 0x80131BCC - Unused?
void func_ovl13_80131BCC()
{
    return;
}

// 0x80131BD4
void mnDebugCubeStartRumble()
{
    func_ovl2_80115530(0, gMNDebugCubeMenuValueRumble, gMNDebugCubeMenuValueFrame);
}

// 0x80131C04
void mnDebugCubeStopRumble()
{
    func_ovl2_80115630(0, gMNDebugCubeMenuValueRumble);
}

// 0x80131C2C
void mnDebugCubePlayFGM()
{
    func_80020D88(gMNDebugCubeMenuValueFGM);
}

// 0x80131C50
void mnDebugCubeStopFGM()
{
    func_80020E28();
}

// 0x80131C70
void mnDebugCubePlayCall()
{
    gMNDebugCubeQueuedFGM = dMNDebugCubeCallFGMs[gMNDebugCubeMenuValueCall];
}

// 0x80131C94
void mnDebugCubeStopBGM()
{
    func_80020B08(0);
}

// 0x80131CB4
void mnDebugCubePlayBGM()
{
    func_80020B08(0);
    func_80020A40(gMNDebugCubeMenuValueEffect);

    gMNDebugCubeBGMInterrupt = 1;
}

// 0x80131CE8
void mnDebugCubeDoTransition()
{
    dMNDebugCubeExitInterrupt = 1;
    dMNDebugCubeTransitionInterrupt = 1;
}

// 0x80131D00
void mnDebugCubeCheckAudioChange(s32 arg0)
{
    while (TRUE)
    {
        if ((gMNDebugCubeBGMInterrupt != 0) && (func_80021048() == 0))
        {
            func_80020AB4(0, gMNDebugCubeMenuValueBGM);

            gMNDebugCubeBGMInterrupt = 0;
        }

        if
        (
            (
                (gMNDebugCubeSFX == NULL) ||
                (gMNDebugCubeSFX->sfx_id == 0) ||
                (gMNDebugCubeCurrentSFX != gMNDebugCubeSFX->sfx_id)
            ) &&
            (
                (gMNDebugCubeQueuedFGM != 0)
            )
        )
        {
            gMNDebugCubeSFX = func_800269C0(gMNDebugCubeQueuedFGM);

            if (gMNDebugCubeSFX != NULL)
            {
                gMNDebugCubeCurrentSFX = gMNDebugCubeSFX->sfx_id;
                gMNDebugCubeQueuedFGM = 0;
            }
        }

        gsStopCurrentProcess(1);
    }
}

// 0x80131E00
void mnDebugCubeMain(GObj* arg0)
{
    if (gSysController.button_new & START_BUTTON)
    {
        func_ovl9_80369D78(0x32, 0x32, 0x50, &dMNDebugCubeMenuItems, 0xF);
    }

    if (gSysController.button_new & Z_TRIG)
    {
        func_80022368(0, 0x80000000, 0);
    }

    if (dMNDebugCubeExitInterrupt != 0)
    {
        func_ovl9_80369EC0();

        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = 1U;

        func_80005C74();
    }
}

// 0x80131EA0
GObj* mnDebugCubeCreateGObj(void* ptr, void* dvar)
{
    GObj* gobj = func_8000B824(0x10000000, func_8000B1C4, 0, 0x80000000, odRenderDObjDLHead0, 0, 0x80000000, -1, dvar, 1, 0, ptr, 1);

    return (gobj != NULL) ? gobj : NULL;
}

// 0x80131F28
GObj* mnDebugCubeCreateViewport(void (*proc)(GObj*))
{
    GObj *camera_gobj = func_8000B93C(0x10000002, func_8000B1C4, 0, 0x80000000U, func_80017DBC, 0x32, 0x00000001, -1, 1, 0, proc, 1, 0);

    if (camera_gobj == NULL)
    {
        return NULL;
    }

    CameraGetStruct(camera_gobj)->vec.eye.z = 700.0f;
    CameraGetStruct(camera_gobj)->flags = 5;

    return camera_gobj;
}

// 0x80131FDC
void mnDebugCubeInit()
{
    s32 unused1;
    s32 unused2;
    rdSetup rldmSetup;
    s32 unused3;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl13_80133140;
    rldmSetup.statusBufSize = 5;
    rldmSetup.forceBuf = 0;
    rldmSetup.forceBufSize = 0;
    rdManagerInitSetup(&rldmSetup);

    omMakeGObjSPAfter(0, mnDebugCubeMain, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 2, (lbRandom_GetIntRange(0x80) << 0x18) | (lbRandom_GetIntRange(0x80) << 0x10) | (lbRandom_GetIntRange(0x80) << 0x8) | 0xFF);
    mnDebugCubeCreateViewport(0);
    mnDebugCubeCreateGObj(mnDebugCubeRotateKirbyCube, &dMNDebugCubeKirbyCubeDisplayList);
    func_ovl0_800D4404();
    func_ovl0_800D4130(0x20000002, 0, 0x32, 0x00000002);
    gcSetDObjAnimPlaybackRate(func_ovl0_800D430C(gMNDebugCubeMenuValueTransition, 0x20000000, 0, func_ovl0_800D4248, 1, func_ovl0_800D42C8), 0.25F);
    gmRumble_SetPlayerRumble();
    func_ovl9_80369EE0();
    mnDebugCubeCreateGObj(mnDebugCubeCheckAudioChange, NULL);
}

// 0x8013214C
void mnDebugCubeStartScene()
{
    D_ovl13_80132F6C.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl13_80132F6C);
    D_ovl13_80132F88.arena_size = (u32) ((uintptr_t)&lOverlay13ArenaHi - (uintptr_t)&lOverlay13ArenaLo);

    do
    {
        dMNDebugCubeExitInterrupt = 0;
        dMNDebugCubeTransitionInterrupt = 0;
        gsGTLSceneInit(&D_ovl13_80132F88);
    }
    while (dMNDebugCubeTransitionInterrupt != 0);
}
