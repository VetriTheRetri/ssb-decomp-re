#include <sys/develop.h>
#include <ft/fighter.h>
#include <gm/gmsound.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <debug-menu.h>

// // ?
// extern void func_8000B1C4();

// ovl8
dbMenuPosition* func_ovl8_803749BC();                           /* extern */
void func_ovl8_80374A54(s32, dbMenuPosition*);                      /* extern */
void func_ovl8_80377AEC(dbMenuPosition*, dbMenuPosition*, dbMenuPosition*, s32);            /* extern */
extern void func_ovl8_8037DD60(dbMenuPosition*, char*);                      /* extern */
extern void func_ovl8_80386BE0(char*, const char*);                       /* extern */

// // ovl9 stuff

// 0x80369F7C
extern dbMenuPosition D_ovl9_80369F7C;

// 0x8036A3B0
extern char D_ovl9_8036A3B0[] = ">";

// 0x80371428
extern char D_ovl9_80371428[0x38]; // string buffer?


// // 0x800D66E0
// extern Lights1 dMNDebugFallsLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// // 0x800D66F8
// extern Gfx dMNDebugFallsDisplayList[/* */] =
// {
//     gsSPSetGeometryMode(G_LIGHTING),
//     gsSPSetLights1(dMNDebugFallsLights1),
//     gsSPEndDisplayList()
// };

// // 0x800D6720
// extern s32 gMNDebugFallsExitInterrupt;

// // 0x800D6724
// // UB: Menu expects 27 like in debug-battle.c but here only 5 are defined
// extern char (*dMNDebugFallsFighterKindStrings[5])[] = {
//     dMNDebugBattleMario,
//     dMNDebugBattleFox,
//     dMNDebugBattleDonkey,
//     dMNDebugBattleSamus,
//     dMNDebugBattleLuigi
// };

// // 0x800D6738
// extern dbMenuItem dMNDebugFallsMenuItems[15] = {
//     { dbMenuItemKindExitLabel,      mnDebugFallsExit,   dMNDebugFallsExit,                  0,                                                      0.0F, 0.0F,     0 },
//     { dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.player_block[0].character_kind,   0.0F, 26.0F,    0 },
//     { dbMenuItemKindNumeric,        0,                  dMNDebugFallsDead,                  &gTransferBattleState.player_block[0].falls,            0.0F, 65536.0F, 0 },
//     { dbMenuItemKindNumeric,        0,                  dMNDebugFallsFinish,                &gTransferBattleState.player_block[0].score,            0.0F, 65536.0F, 0 },
//     { dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.player_block[1].character_kind,   0.0F, 26.0F,    0 },
//     { dbMenuItemKindNumeric,        0,                  dMNDebugFallsDead,                  &gTransferBattleState.player_block[1].falls,            0.0F, 65536.0F, 0 },
//     { dbMenuItemKindNumeric,        0,                  dMNDebugFallsFinish,                &gTransferBattleState.player_block[1].score,            0.0F, 65536.0F, 0 },
//     { dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.player_block[2].character_kind,   0.0F, 26.0F,    0 },
//     { dbMenuItemKindNumeric,        0,                  dMNDebugFallsDead,                  &gTransferBattleState.player_block[2].falls,            0.0F, 65536.0F, 0 },
//     { dbMenuItemKindNumeric,        0,                  dMNDebugFallsFinish,                &gTransferBattleState.player_block[2].score,            0.0F, 65536.0F, 0 },
//     { dbMenuItemKindStringByte,     0,                  dMNDebugFallsFighterKindStrings,    &gTransferBattleState.player_block[3].character_kind,   0.0F, 26.0F,    0 },
//     { dbMenuItemKindNumeric,        0,                  dMNDebugFallsDead,                  &gTransferBattleState.player_block[3].falls,            0.0F, 65536.0F, 0 },
//     { dbMenuItemKindNumeric,        0,                  dMNDebugFallsFinish,                &gTransferBattleState.player_block[3].score,            0.0F, 65536.0F, 0 }
// };

// extern scUnkDataBounds D_ovl15_800D68A4;
// extern scRuntimeInfo D_ovl15_800D68C0;

// // 0x800D6950
// extern char dMNDebugBattleMario[] = "Mario";

// // 0x800D6958
// extern char dMNDebugBattleFox[] = "Fox";

// // 0x800D695C
// extern char dMNDebugBattleDonkey[] = "Donkey";

// // 0x800D6964
// extern char dMNDebugBattleSamus[] = "Samus";

// // 0x800D696C
// extern char dMNDebugBattleLuigi[] = "Luigi";

// // 0x800D6974
// extern char dMNDebugFallsExit[] = "Exit";

// // 0x800D697C
// extern char dMNDebugFallsDead[] = " Dead : %3d";

// // 0x800D6988
// extern char dMNDebugFallsFinish[] = " Finish : %3d";

// 0x80369240
void func_ovl9_80369240()
{
    gsController *controller = &gSysController;
    u16 var_v0 = 0;

    if (gSysController.stick_range.x >= 0x29)
    {
        var_v0 = 0x100;
    }

    if (gSysController.stick_range.x <= -0x29)
    {
        var_v0 |= 0x200;
    }

    if (controller->stick_range.y >= 0x29)
    {
        var_v0 |= 0x800;
    }

    if (controller->stick_range.y <= -0x29)
    {
        var_v0 |= 0x400;
    }

    D_ovl9_80369FD0 = (var_v0 ^ D_ovl9_80369FCC) & var_v0;

    if ((var_v0 ^ D_ovl9_80369FCC) != 0)
    {
        D_ovl9_80369FD4 = D_ovl9_80369FD0;
        D_ovl9_80369FD8 = 0x1E;
    }
    else
    {
        D_ovl9_80369FD8--;

        if (D_ovl9_80369FD8 > 0)
        {
            D_ovl9_80369FD4 = 0;
        }
        else
        {
            D_ovl9_80369FD4 = var_v0;
            D_ovl9_80369FD8 = 5;
        }
    }

    D_ovl9_80369FCC = var_v0;
}

// 0x80369310
void func_ovl9_80369310(dbMenuPosition *arg0, const char *str, ...)
{
    func_ovl8_80386BE0(D_ovl9_80371428, &str);
    func_ovl8_8037DD60(arg0, D_ovl9_80371428);
}

// 0x80369358
void func_ovl9_80369358(s32 arg0, dbMenuPosition* arg1)
{
    dbMenuPosition* temp_s0;
    dbMenuPosition menu_position;

    temp_s0 = func_ovl8_803749BC(arg0);

    func_ovl8_80374A54(arg0, &D_ovl9_80369F7C);

    menu_position.x = 0;
    menu_position.y = 0;
    menu_position.w = 1;
    menu_position.h = D_ovl9_80369F7C.h;
    func_ovl8_80377AEC(temp_s0, &menu_position, arg1, 4);

    menu_position.w = D_ovl9_80369F7C.w;
    menu_position.h = 1;
    func_ovl8_80377AEC(temp_s0, &menu_position, arg1, 4);

    menu_position.y = D_ovl9_80369F7C.h - 1;
    menu_position.h = 1;
    func_ovl8_80377AEC(temp_s0, &menu_position, arg1, 4);

    menu_position.x = D_ovl9_80369F7C.w - 1;
    menu_position.y = 0;
    menu_position.w = 1;
    menu_position.h = D_ovl9_80369F7C.h;
    func_ovl8_80377AEC(temp_s0, &menu_position, arg1, 4);
}

// 0x8036944C
void func_ovl9_8036944C(s32 arg0, s32 arg1)
{
    dbMenuPosition *sp24;
    dbMenuPosition sp1C;

    sp24 = func_ovl8_803749BC(arg0);

    func_ovl8_80374A54(arg0, &D_ovl9_80369F7C);

    sp1C.x = 1;
    sp1C.y = 1;
    sp1C.w = D_ovl9_80369F7C.w - 2;
    sp1C.h = D_ovl9_80369F7C.h - 2;
    func_ovl8_80377AEC(sp24, &sp1C, arg1, 4);
}

// 0x803694C8
void func_ovl9_803694C8(void* arg0, dbMenuItem* menu_item)
{
    switch (menu_item->type)
    {
        case dbMenuItemKindExitLabel:
        case dbMenuItemKindLabel:
            func_ovl9_80369310(func_ovl8_803749BC(arg0), menu_item->label);
            break;
        case dbMenuItemKindNumeric:
            func_ovl9_80369310(func_ovl8_803749BC(arg0), menu_item->label, *menu_item->value.w);
            break;
        case dbMenuItemKindNumericByte:
            func_ovl9_80369310(func_ovl8_803749BC(arg0), menu_item->label, *menu_item->value.b);
            break;
        case dbMenuItemKindDouble:
            func_ovl9_80369310(func_ovl8_803749BC(arg0), menu_item->label, (f64) *menu_item->value.f);
            break;
        case dbMenuItemKindString:
            func_ovl9_80369310(func_ovl8_803749BC(arg0), ((uintptr_t*) menu_item->label)[*menu_item->value.w]);
            break;
        case dbMenuItemKindStringByte:
            func_ovl9_80369310(func_ovl8_803749BC(arg0), ((uintptr_t*) menu_item->label)[*menu_item->value.b]);
            break;
    }
}

// 0x80369600
void func_ovl9_80369600(void* arg0, dbMenuItem *arg1, s32 arg2)
{
    s32 i;

    for (i = 0; i < arg2; i++, arg1++)
    {
        func_ovl8_8037DFCC(12, 2 + 9 * i);
        func_ovl9_803694C8(arg0, arg1);
    }
}

// 0x80369680
void func_ovl9_80369680(void* arg0, s32 arg1)
{
    func_ovl8_8037DFCC(3, (arg1 * 9) + 2, arg1);
    func_ovl9_80369310(func_ovl8_803749BC(arg0), &D_ovl9_8036A3B0);
}

// 0x803696D4
void func_ovl9_803696D4(s32 arg0)
{
    if (D_ovl9_8037141C != 0)
    {
        D_ovl9_8037141C = 0;
        func_ovl9_8036944C(D_ovl9_80371404, &D_ovl9_80369F64);
        func_ovl9_80369600(D_ovl9_80371404, D_ovl9_8037140C, D_ovl9_80371410);
        func_ovl9_80369680(D_ovl9_80371404, D_ovl9_80371414);
    }

    D_ovl9_80371418(arg0);
}

// func_ovl9_8036975C

// 0x80369D78
void func_ovl9_80369D78(s32 arg0, s32 arg1, s32 arg2, dbMenuItem *arg3, s32 arg4)
{
    if (D_ovl9_80371420 == 0)
    {
        D_ovl9_80371420 = 1;
        D_ovl9_8037140C = arg3;
        D_ovl9_80371410 = arg4;
        D_ovl9_8037141C = 0;
        D_ovl9_80371414 = D_ovl9_8037141C;
        D_ovl9_80371400 = -1;

        D_ovl9_80369F7C.x = arg0;
        D_ovl9_80369F7C.y = arg1;
        D_ovl9_80369F7C.w = arg2;
        D_ovl9_80369F7C.h = (arg4 * 9) + 3;

        D_ovl9_80371404 = func_ovl8_80381C80(&D_ovl9_80369F7C);
        D_ovl9_80371408 = func_ovl8_80374910(D_ovl9_80371404);

        func_ovl9_80369358(D_ovl9_80371404, &D_ovl9_80369F68);
        func_ovl9_80369600(D_ovl9_80371404, arg3, arg4);
        func_ovl9_80369680(D_ovl9_80371404, D_ovl9_80371414);

        D_ovl9_80371418 = D_ovl9_80371408->renderer;
        D_ovl9_80371408->renderer = func_ovl9_803696D4;

        omAddGObjCommonProc(D_ovl9_80371408, func_ovl9_8036975C, 1, 1);

        D_ovl9_80371424 = sGSGTLNumTasks;
        sGSGTLNumTasks = 1;
    }
}

// 0x80369EC0
void func_ovl9_80369EC0()
{
    func_ovl8_8037BB78();
}

// func_ovl9_80369EE0
