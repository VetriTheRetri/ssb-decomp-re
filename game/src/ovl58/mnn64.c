#include <sys/obj.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t D_NF_800A5240;
extern intptr_t lMNN64ArenaLo;          // 0x80132080
extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_000000C2;
extern intptr_t D_NF_000073C0;
extern uintptr_t lMNN64ArenaHi;         // 0x803903E0

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132048
rdFileNode sMNN64StatusBuf[5];

// 0x80132070 - Delay frames before N64 logo can be skipped
s32 sMNN64SkipAllowWait;

// 0x80132074 - if TRUE, proceed to the opening movie
sb32 sMNN64IsProceedOpening;

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80131F50
Unk800D4060 D_ovl58_80131F50;

// 0x80131F54
Unk800D4060 D_ovl58_80131F54;

// 0x80131F58
Lights1 dMNN64Lights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 0x80131F70
Gfx dMNN64DisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNN64Lights1),
    gsSPEndDisplayList()
};

// 0x80131F98
scUnkDataBounds D_ovl58_80131F98;

// 0x80131FB4
scRuntimeInfo D_ovl58_80131FB4;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnN64LogoProcUpdate(GObj *gobj)
{
    f32 step;
    s32 i;
    SObj *sobj;
    Unk800D4060 sp50;

    sobj = SObjGetStruct(gobj);

    i = 0;

    while (i < 16)
    {
        step = 16 - i;
        sobj->pos.y = 65.0F - ((-(38.75F / 64.0F) * step) * step);
        gsStopCurrentProcess(1);
        i++;
    }
    sobj->pos.y = 65.0F;

    i = 0;

    while (i < 24)
    {
        gsStopCurrentProcess(1);
        i++;
    }
    sp50 = D_ovl58_80131F50;

    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp50, 0xA, 0, 0);

    i = 0;

    while (i < 13)
    {
        gsStopCurrentProcess(1);
        i++;
    }
    sMNN64IsProceedOpening = TRUE;

    while (TRUE)
    {
        gsStopCurrentProcess(1);
    }
}

// 0x80131C20
void mnN64ActorProcUpdate(GObj *gobj)
{
    if (sMNN64SkipAllowWait != 0)
    {
        sMNN64SkipAllowWait--;
    }
    if ((sMNN64SkipAllowWait == 0) && (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE))
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = scMajor_Kind_Title;

        func_80005C74();
    }
    else if (sMNN64IsProceedOpening != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = scMajor_Kind_OpeningRoom;

        func_80005C74();
    }
}

// 0x80131CB8
void mnN64InitAll(void)
{
    rdSetup rldm_setup;
    Camera *cam;
    GObj *gobj;
    SObj *sobj;
    Sprite *sprite;
    Unk800D4060 sp4C;

    sMNN64SkipAllowWait = 8;

    sMNN64IsProceedOpening = FALSE;

    rldm_setup.tableRomAddr = &D_NF_001AC870;
    rldm_setup.tableFileCount = &D_NF_00000854;
    rldm_setup.fileHeap = 0;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = sMNN64StatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(sMNN64StatusBuf);
    rldm_setup.forceBuf = NULL;
    rldm_setup.forceBufSize = 0;

    rdManagerInitSetup(&rldm_setup);

    omMakeGObjCommon(0, mnN64ActorProcUpdate, 0, GOBJ_LINKORDER_DEFAULT);
    func_8000B9FC(0, 0x80000000, 0x64, 2, 0xFF);

    cam = CameraGetStruct(func_8000B93C(0x3EB, NULL, 9, 0x80000000, func_ovl0_800CD2CC, 0x50, 1, -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    gobj = omMakeGObjCommon(GObj_Kind_Wallpaper, NULL, GObj_LinkID_Wallpaper, GOBJ_LINKORDER_DEFAULT);

    omAddGObjCommonProc(gobj, mnN64LogoProcUpdate, 0, 1);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0, 0x80000000, -1);

    sprite = (Sprite*)((uintptr_t)rdManagerGetFileWithExternHeap(&D_NF_000000C2, gsMemoryAlloc(rdManagerGetFileSize(&D_NF_000000C2), 0x10)) + (intptr_t)&D_NF_000073C0);
    sobj = gcAppendSObjWithSprite(gobj, sprite);

    sobj->sprite.attr &= ~SP_FASTCOPY;

    sobj->pos.x = 96.0F;
    sobj->pos.y = 220.0F;

    sp4C = D_ovl58_80131F54;

    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &sp4C, 0x10, 1, 0);
}

// 0x80131ECC
void mnN64AddLightsDisplayList(Gfx **dl)
{
    gSPDisplayList(dl[0]++, dMNN64DisplayList);
}

// 0x80131EF0
void mnN64StartScene(void)
{
    func_80020A74();
    D_ovl58_80131F98.unk_scdatabounds_0xC = ((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl58_80131F98);
    D_ovl58_80131FB4.arena_size = ((uintptr_t)&lMNN64ArenaHi - (uintptr_t)&lMNN64ArenaLo);
    gsGTLSceneInit(&D_ovl58_80131FB4);
}
