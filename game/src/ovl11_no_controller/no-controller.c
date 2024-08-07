#include <sys/develop.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <no-controller.h>

// Offsets
extern intptr_t FILE_0A9_NO_CONTROLLER_IMAGE_OFFSET = 0x8460; // file 0x0A9 image offset for no controller texture

// ovl0
extern void func_ovl0_800CCF00();
extern void func_ovl0_800CD2CC();

// ovl11 stuff
extern scUnkDataBounds D_ovl11_800D6700;
extern scRuntimeInfo D_ovl11_800D671C;

extern RldmFileId D_ovl11_800D67B0[1] = { 0x00A9 };

extern u32 D_ovl11_800D67D8[100];
extern rdFileNode D_ovl11_800D6AF8;

extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern s32 gMNNoControllerFilesArray[1]; // 0x800D67D0[1]
// gMNNoControllerFilesArray[0] - D_ovl11_800D67D0; // file 0x01F pointer

// 0x800D6490
GObj* mnNoControllerCreateViewport()
{
    GObj *camera_gobj = func_8000B93C(0x3E8, NULL, 0, 0x80000000U, func_ovl0_800CD2CC, 0x64, 0x00000001, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    return camera_gobj;
}

// 0x800D6538
void mnNoControllerCreateNoControllerImage()
{
    GObj* gobj;
    SObj* sobj;

    gobj = omMakeGObjSPAfter(0x3E9, 0, 1, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0, 0x80000000, -1);

    sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMNNoControllerFilesArray[0], &FILE_0A9_NO_CONTROLLER_IMAGE_OFFSET));
    sobj->pos.x = 10.0f;
    sobj->pos.y = 10.0f;
}

// 0x800D65B8
void mnNoControllerInit()
{
    mnNoControllerLoadFiles();
    func_8000B9FC(0, 0x80000000, 0x64, 0, 0xFF);
    mnNoControllerCreateViewport();
    mnNoControllerCreateNoControllerImage();
}

// n64_entry
void mnNoControllerStartScene()
{
    D_ovl11_800D6700.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl11_800D6700);
    D_ovl11_800D671C.arena_size = (u32) ((uintptr_t)&lOverlay11ArenaHi - (uintptr_t)&lOverlay11ArenaLo);
    gsGTLSceneInit(&D_ovl11_800D671C);
}

// # Likely start of new file
// 0x800D6660
void mnNoControllerLoadFiles()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl11_800D67D8;
    rldmSetup.statusBufSize = 0x64;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl11_800D6AF8;
    rldmSetup.forceBufSize = 7;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl11_800D67B0, ARRAY_COUNT(D_ovl11_800D67B0), gMNNoControllerFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl11_800D67B0, ARRAY_COUNT(D_ovl11_800D67B0)), 0x10U));
}