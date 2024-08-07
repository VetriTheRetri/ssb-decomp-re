#include <sys/develop.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <debug-sss.h>

// ovl9
extern s32 D_ovl9_80371420;
extern void func_ovl9_80369D78(s32, s32, s32, void*, s32);
extern func_ovl9_80369EC0();

// ovl12 stuff
extern s32 dMNDebugStageSelectInterrupt; // 0x800D6680
extern s32 dMNDebugStageSelectGrKind; // 0x800D6684

extern void* D_ovl12_800D672C;

extern scUnkDataBounds D_ovl12_800D6764;
extern scRuntimeInfo D_ovl12_800D6780;

// 0x800D6490
void mnDebugStageSelectTriggerInterrupt()
{
    dMNDebugStageSelectInterrupt = 1;
}

// 0x800D64A0
void mnDebugStageSelectMain(GObj* arg0)
{
    if (gSysController.button_new & START_BUTTON)
    {
        if (D_ovl9_80371420 != 0)
        {
            mnDebugStageSelectTriggerInterrupt();
        }
        else
        {
            func_ovl9_80369D78(0x32, 0x32, 0x64, &D_ovl12_800D672C, 2);
        }
    }

    if (dMNDebugStageSelectInterrupt != 0)
    {
        func_ovl9_80369EC0();

        gSceneData.gr_kind = dMNDebugStageSelectGrKind;
        gSceneData.scene_previous = gSceneData.scene_current;

        if (gSceneData.gr_kind >= Gr_Kind_BonusGameStart)
        {
            D_800A4B18 = gTransferBattleState;
            D_800A4B18.gr_kind = gSceneData.gr_kind;
            gSceneData.scene_current = scMajor_Kind_1PBonusGame;
        }
        else
        {
            gSceneData.scene_current = scMajor_Kind_VSBattle;
        }

        func_80005C74();
    }
}

// 0x800D65AC
void mnDebugStageSelectInit()
{
    omMakeGObjSPAfter(0, mnDebugStageSelectMain, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 2, 0xFF);
    func_ovl9_80369EE0();
    func_ovl9_80369D78(0x32, 0x32, 0x64, &D_ovl12_800D672C, 2);
}

// 0x800D6620
void mnDebugStageSelectStartScene()
{
    D_ovl12_800D6764.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl12_800D6764);
    D_ovl12_800D6780.arena_size = (u32) ((uintptr_t)&lOverlay12ArenaHi - (uintptr_t)&lOverlay12ArenaLo);
    gsGTLSceneInit(&D_ovl12_800D6780);
}
