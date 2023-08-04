#include "scenemgr/scene_manager.h"

#include "ovl0/halsprite.h"
#include "ovl0/ovl0.h"
#include "ovl2/ovl2.h"
#include "scenemgr/entries.h"
#include "sys/crash.h"
#include "sys/dma.h"
#include "sys/gtl.h"
#include "sys/hal_audio.h"
#include "sys/obj_renderer.h"
#include "sys/om.h"
#include "sys/system_00.h"
#include "sys/system_03_1.h"
#include "sys/system_04.h"
#include "sys/thread6.h"

#include <linkersegs.h>
#include <macros.h>

#include <PR/mbi.h>
#include <PR/ultratypes.h>

// bss
u8 D_800A44D0[16];
struct gmSaveInfo gSaveData;
// current screen info
struct gmSceneInfo gSceneData;

struct BattleState D_800A4B18;
struct BattleState D_800A4D08;
struct BattleState D_800A4EF8;

// pointer to battle settings
struct gmSceneInfo *gpBattleState;
u32 D_800A50EC;
u8 D_800A50F0[8];
u8 D_800A50F8[324];
u32 D_800A523C;

// data at end of file

// declarations
struct Overlay D_800A3070[65];
void crash_print_gobj_state(void);

void start_scene_manager(UNUSED u32 set) {
    u16 *csr;
    uintptr_t end;
    struct BattleState sp220;
    struct BattleState sp30;

    set_contstatus_delay(60);
    set_crash_print_fn(crash_print_gobj_state);
    start_rmon_thread5_hang();
    load_overlay(&D_800A3070[0]);
    load_overlay(&D_800A3070[2]);
    load_overlay(&D_800A3070[1]);

    gSaveData = gDefaultSaveData;
    gSceneData = D_800A3F80;
    sp30       = gDefaultBattleState;
    D_800A4EF8 = sp30;
    sp220      = sp30;
    D_800A4D08 = sp220;
    D_800A4B18 = sp220;

    func_ovl2_800D6FE0();
    D_8003CB6D = 72;

    func_8002102C();
    while (func_8002103C()) { }

    func_80020A40(6);
    while (func_80021048()) { }

    lbMemory_SaveData_CheckSaveDataValid();
    func_ovl0_800D46F4();

    // it needs to be something like this to match
    csr = (void *)_ovl1SegNoloadEnd; // 0x80392A00
    end = 0x80400000;
    while ((uintptr_t)csr < end) { *(csr++) = GPACK_RGBA5551(0, 0, 0, 1); }

    if (D_800451A0 == 0) { gSceneData.scene_current = 0; }

    while (TRUE) {
        switch (gSceneData.scene_current) {
            case 0:
                load_overlay(&D_800A3070[11]);
                n64_logo_entry();
                break;
            case 1:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[10]);
                load_overlay(&D_800A3070[8]);
                load_overlay(&D_800A3070[9]);
                title_screen_entry();
                break;
            case 2:
                load_overlay(&D_800A3070[12]);
                load_overlay(&D_800A3070[8]);
                load_overlay(&D_800A3070[9]);
                debug_sss_entry();
                break;
            case 3:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[13]);
                load_overlay(&D_800A3070[8]);
                load_overlay(&D_800A3070[9]);
                debug_system_entry();
                break;
            case 4:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[14]);
                load_overlay(&D_800A3070[8]);
                load_overlay(&D_800A3070[9]);
                debug_battle_entry();
                break;
            case 5:
                load_overlay(&D_800A3070[15]);
                debug_falls_entry();
                break;
            case 6:
                load_overlay(&D_800A3070[16]);
                debug_button_test_entry();
                break;
            case 7:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[17]);
                menu_main_entry();
                break;
            case 8:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[18]);
                menu_1p_entry();
                break;
            case 57:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[60]);
                menu_options_entry();
                break;
            case 58:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[61]);
                menu_data_entry();
                break;
            case 9:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[19]);
                menu_vs_entry();
                break;
            case 10:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[20]);
                options_vs_entry();
                break;
            case 11:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[21]);
                overlay_set11_entry();
                break;
            case 12:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[22]);
                overlay_set12_entry();
                break;
            case 13:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[23]);
                overlay_set13_entry();
                break;
            case 14:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[24]);
                classic_map_entry();
                break;
            case 15:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[25]);
                screen_adjust_entry();
                break;
            case 16:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[26]);
                vs_css_entry();
                break;
            case 21:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[30]);
                stage_select_entry();
                break;
            case 22:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[3]);
                load_overlay(&D_800A3070[4]);
                vs_battle_entry();
                break;
            case 23:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[3]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[5]);
                overlay_set23_entry();
                break;
            case 52: func_ovl2_800D67DC(); break;
            case 53:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[3]);
                load_overlay(&D_800A3070[6]);
                bonus_game_play_entry();
                break;
            case 54:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[3]);
                load_overlay(&D_800A3070[7]);
                training_mode_battle_entry();
                break;
            case 24:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[31]);
                vs_results_entry();
                break;
            case 25:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[32]);
                vs_records_entry();
                break;
            case 26:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[33]);
                char_bkg_info_entry();
                break;
            case 27:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[58]);
                overlay_set27_entry();
                break;
            case 28:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[34]);
                intro_firstscene_entry();
                break;
            case 29:
                load_overlay(&D_800A3070[35]);
                intro_portrait_wipes_entry();
                break;
            case 30:
                load_overlay(&D_800A3070[3]);
                load_overlay(&D_800A3070[36]);
                intro_focus_mario_entry();
                break;
            case 31:
                load_overlay(&D_800A3070[37]);
                intro_focus_dk_entry();
                break;
            case 32:
                load_overlay(&D_800A3070[38]);
                intro_focus_samus_entry();
                break;
            case 33:
                load_overlay(&D_800A3070[39]);
                intro_focus_fox_entry();
                break;
            case 34:
                load_overlay(&D_800A3070[40]);
                intro_focus_link_entry();
                break;
            case 35:
                load_overlay(&D_800A3070[41]);
                intro_focus_yoshi_entry();
                break;
            case 36:
                load_overlay(&D_800A3070[42]);
                intro_focus_pikachu_entry();
                break;
            case 37:
                load_overlay(&D_800A3070[43]);
                intro_focus_kirby_entry();
                break;
            case 38:
                load_overlay(&D_800A3070[44]);
                intro_chars_running_entry();
                break;
            case 39:
                load_overlay(&D_800A3070[45]);
                intro_yoshi_nest_entry();
                break;
            case 40:
                load_overlay(&D_800A3070[46]);
                intro_link_hill_entry();
                break;
            case 41:
                load_overlay(&D_800A3070[47]);
                intro_mario_vs_kirby_entry();
                break;
            case 42:
                load_overlay(&D_800A3070[48]);
                intro_pika_pokeball_entry();
                break;
            case 43:
                load_overlay(&D_800A3070[49]);
                intro_sex_kicks_entry();
                break;
            case 44:
                load_overlay(&D_800A3070[50]);
                intro_great_fox_entry();
                break;
            case 45:
                load_overlay(&D_800A3070[3]);
                load_overlay(&D_800A3070[51]);
                intro_dk_vs_samus_entry();
                break;
            case 46:
                load_overlay(&D_800A3070[52]);
                intro_hidden_chars_entry();
                break;
            case 17:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[27]);
                classic_css_entry();
                break;
            case 18:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[28]);
                training_css_entry();
                break;
            case 19:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[29]);
                bonus_css_entry();
                break;
            case 20:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[29]);
                bonus_css_entry();
                break;
            case 47:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[53]);
                menu_backup_clear_entry();
                break;
            case 48:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[54]);
                overlay_set48_entry();
                break;
            case 49:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[55]);
                overlay_set49_entry();
                break;
            case 50:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[56]);
                overlay_set50_51_entry();
                break;
            case 51:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[56]);
                overlay_set50_51_entry();
                break;
            case 56:
                load_overlay(&D_800A3070[59]);
                overlay_set56_entry();
                break;
            case 55:
                load_overlay(&D_800A3070[57]);
                overlay_set55_entry();
                break;
            case 59:
                load_overlay(&D_800A3070[1]);
                load_overlay(&D_800A3070[62]);
                overlay_set59_entry();
                break;
            case 60:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[3]);
                load_overlay(&D_800A3070[63]);
                how_to_play_entry();
                break;
            case 61:
                load_overlay(&D_800A3070[2]);
                load_overlay(&D_800A3070[3]);
                load_overlay(&D_800A3070[64]);
                demo_battle_entry();
                break;
        }
    }
}

// set up gtl and om systems
void func_800A2698(struct Wrapper683C *arg) {
    func_8000683C(arg);
}

void func_800A26B8(void) {
    func_8000A340();
}

void func_800A26D8(struct GObjCommon *arg0) {
    s32 width; // sp74
    UNUSED s32 spPad70;
    s32 barY = 203; // sp6C

    func_80016338(gpDisplayListHead, arg0->unk74, 0);
    gDPPipeSync((*gpDisplayListHead)++);
    gDPSetCycleType((*gpDisplayListHead)++, G_CYC_FILL);
    gDPSetRenderMode((*gpDisplayListHead)++, G_RM_NOOP, G_RM_NOOP2);
    width = ((D_ovl0_800D6448 / 112.0f) * 256.0f);
    if (width < 0) { width = 0; }
    if (width > 256) { width = 256; }
    gDPSetFillColor((*gpDisplayListHead)++, rgba32_to_fill_color(0x0000FFFF));
    gDPFillRectangle((*gpDisplayListHead)++, 30, barY, width + 30, barY + 1);

    barY += 2;
    gDPPipeSync((*gpDisplayListHead)++);
    width = ((D_ovl0_800D644A / 24.0f) * 256.0f);
    if (width < 0) { width = 0; }
    if (width > 256) { width = 256; }
    gDPSetFillColor((*gpDisplayListHead)++, rgba32_to_fill_color(0xFF4000FF));
    gDPFillRectangle((*gpDisplayListHead)++, 30, barY, width + 30, barY + 1);

    barY += 2;
    gDPPipeSync((*gpDisplayListHead)++);
    width = ((D_ovl0_800D644C / 80.0f) * 256.0f);
    if (width < 0) { width = 0; }
    if (width > 256) { width = 256; }
    gDPSetFillColor((*gpDisplayListHead)++, rgba32_to_fill_color(0xFFFFFFFF));
    gDPFillRectangle((*gpDisplayListHead)++, 30, barY, width + 30, barY + 1);
    gDPPipeSync((*gpDisplayListHead)++);
    // this needs to be in its own block to match. macro?
    // could explain the double sync
    {
        uintptr_t freeSpace; // sp38
        freeSpace = (uintptr_t)gGeneralHeap.end - (uintptr_t)gGeneralHeap.ptr;

        gDPSetFillColor((*gpDisplayListHead)++, rgba32_to_fill_color(0xFFFFFFFF));
        func_800218E0(0x14, 0x14, freeSpace, 7, 1);
        gDPPipeSync((*gpDisplayListHead)++);
    }
    gDPPipeSync((*gpDisplayListHead)++);
    gDPSetCycleType((*gpDisplayListHead)++, G_CYC_1CYCLE);
    gDPSetRenderMode((*gpDisplayListHead)++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

struct GObjCommon *func_800A2B18(s32 link, u32 arg1, s32 arg2) {
    if (find_gobj_with_id(0xEFFFFFFF) != NULL) { return NULL; }

    return func_8000B93C(0xEFFFFFFF, NULL, link, arg1, func_800A26D8, arg2, 0, 0, 0, 0, 0, 0, 0);
}

// set_up_debug_objs ? something like that
void unref_800A2BA8(s32 link, u32 arg1, s32 arg2) {
    struct GObjCommon *com;

    com = find_gobj_with_id(0xFFFFFFFE);
    if (com != NULL) {
        omEjectGObjCommon(com);
    } else {
        func_80022368(link, arg1, arg2);
    }

    com = find_gobj_with_id(0xEFFFFFFF);
    if (com != NULL) {
        omEjectGObjCommon(com);
    } else {
        func_800A2B18(link, arg1, arg2);
    }
}

void crash_inspect_gobj(struct GObjCommon *obj) {
    debug_printf("gobj id:%d:", obj->unk00);
    switch (obj->unk00) {
        case 0x3E8:
        {
            struct FighterInfo *f = obj->unk84;

            debug_printf("fighter\n");
            debug_printf("kind:%d, player:%d, pkind:%d\n", f->kind, f->player, f->pkind);
            debug_printf("stat:%d, mstat:%d\n", f->stat, f->mstat);
            debug_printf("ga:%d\n", f->ga);
            break;
        }
        case 0x3F4:
        {
            struct WeaponInfo *w = obj->unk84;

            debug_printf("weapon\n");
            debug_printf("kind:%d, player:%d\n", w->kind, w->player);
            debug_printf("atk stat:%d\n", w->attackStat);
            debug_printf("ga:%d\n", w->ga);
            break;
        }
        case 0x3F5:
        {
            struct ItemInfo *i = obj->unk84;

            debug_printf("item\n");
            debug_printf("kind:%d, player:%d\n", i->kind, i->player);
            debug_printf("atk stat:%d\n", i->attackStat);
            debug_printf("ga:%d\n", i->ga);
            debug_printf("proc update:%x\n", i->procUpdate);
            debug_printf("proc map:%x\n", i->procMap);
            debug_printf("proc hit:%x\n", i->procHit);
            debug_printf("proc shield:%x\n", i->procShield);
            debug_printf("proc hop:%x\n", i->procHop);
            debug_printf("proc setoff:%x\n", i->procSetoff);
            debug_printf("proc reflector:%x\n", i->procReflector);
            debug_printf("proc damage:%x\n", i->procDamage);
            break;
        }
        case 0x3F3:
        {
            struct EffectInfo *e = obj->unk84;

            if ((uintptr_t)e >= 0x80000000 && (uintptr_t)e < 0x80800000) {
                debug_printf("effect\n");
                debug_printf("fgobj:%x", e->fgObj);
                debug_printf("proc func:%x\n", e->procFunc);
            } else {
                debug_printf("\n");
            }
            break;
        }
        default:
        {
            debug_printf("\n");
            break;
        }
    }
}

void crash_print_gobj_state(void) {
    switch (D_8003B874) {
        case 0:
        {
            debug_printf("SYS\n");
            break;
        }
        case 1:
        {
            debug_printf("BF\n");
            if (D_80046A54 != NULL) {
                debug_printf("addr:%x\n", D_80046A54->unk14);
                crash_inspect_gobj(D_80046A54);
            }
            break;
        }
        case 2:
        {
            debug_printf("GP\n");
            if (D_80046A54 != NULL) {
                if (D_80046A60 != NULL) {
                    switch (D_80046A60->unk14) {
                        case 0:
                            debug_printf(
                                "thread:%x\n", D_80046A60->unk1C.thread->osThread.context.pc);
                            break;
                        case 1: debug_printf("func:%x\n", D_80046A60->unk1C.cb); break;
                    }
                }
                crash_inspect_gobj(D_80046A54);
            }
            break;
        }
        case 3:
        {
            debug_printf("DFC\n");
            if (D_80046A58 != NULL) {
                debug_printf("addr:%x\n", D_80046A58->unk2C);
                crash_inspect_gobj(D_80046A58);
            }
            break;
        }
        case 4:
        {
            debug_printf("DFO\n");
            if (D_80046A58 != NULL) { debug_printf("cam addr:%x\n", D_80046A58->unk2C); }
            if (D_80046A5C != NULL) {
                debug_printf("disp addr:%x\n", D_80046A5C->unk2C);
                crash_inspect_gobj(D_80046A5C);
            }
            break;
        }
    }
}

void scnmgr_crash_print_gobj_state(void) {
    fatal_print_func(crash_print_gobj_state);
}

// all of the data here...
struct Overlay D_800A3070[65] = {
    {
        (u32)_ovl0SegRomStart,
        (u32)_ovl0SegRomEnd,
        _ovl0SegStart,
        _ovl0TextStart,
        _ovl0TextEnd,
        _ovl0DataStart,
        _ovl0DataEnd,
        _ovl0SegNoloadStart,
        _ovl0SegNoloadEnd,
    },
    {
        (u32)_ovl1SegRomStart,
        (u32)_ovl1SegRomEnd,
        _ovl1SegStart,
        _ovl1TextStart,
        _ovl1TextEnd,
        _ovl1DataStart,
        _ovl1DataEnd,
        _ovl1SegNoloadStart,
        _ovl1SegNoloadEnd,
    },
    {
        (u32)_ovl2SegRomStart,
        (u32)_ovl2SegRomEnd,
        _ovl2SegStart,
        _ovl2TextStart,
        _ovl2TextEnd,
        _ovl2DataStart,
        _ovl2DataEnd,
        _ovl2SegNoloadStart,
        _ovl2SegNoloadEnd,
    },
    {
        (u32)_ovl3SegRomStart,
        (u32)_ovl3SegRomEnd,
        _ovl3SegStart,
        _ovl3TextStart,
        _ovl3TextEnd,
        _ovl3DataStart,
        _ovl3DataEnd,
        _ovl3SegNoloadStart,
        _ovl3SegNoloadEnd,
    },
    {
        (u32)_ovl4SegRomStart,
        (u32)_ovl4SegRomEnd,
        _ovl4SegStart,
        _ovl4TextStart,
        _ovl4TextEnd,
        _ovl4DataStart,
        _ovl4DataEnd,
        _ovl4SegNoloadStart,
        _ovl4SegNoloadEnd,
    },
    {
        (u32)_ovl5SegRomStart,
        (u32)_ovl5SegRomEnd,
        _ovl5SegStart,
        _ovl5TextStart,
        _ovl5TextEnd,
        _ovl5DataStart,
        _ovl5DataEnd,
        _ovl5SegNoloadStart,
        _ovl5SegNoloadEnd,
    },
    {
        (u32)_ovl6SegRomStart,
        (u32)_ovl6SegRomEnd,
        _ovl6SegStart,
        _ovl6TextStart,
        _ovl6TextEnd,
        _ovl6DataStart,
        _ovl6DataEnd,
        _ovl6SegNoloadStart,
        _ovl6SegNoloadEnd,
    },
    {
        (u32)_ovl7SegRomStart,
        (u32)_ovl7SegRomEnd,
        _ovl7SegStart,
        _ovl7TextStart,
        _ovl7TextEnd,
        _ovl7DataStart,
        _ovl7DataEnd,
        _ovl7SegNoloadStart,
        _ovl7SegNoloadEnd,
    },
    {
        (u32)_ovl8SegRomStart,
        (u32)_ovl8SegRomEnd,
        _ovl8SegStart,
        _ovl8TextStart,
        _ovl8TextEnd,
        _ovl8DataStart,
        _ovl8DataEnd,
        _ovl8SegNoloadStart,
        _ovl8SegNoloadEnd,
    },
    {
        (u32)_ovl9SegRomStart,
        (u32)_ovl9SegRomEnd,
        _ovl9SegStart,
        _ovl9TextStart,
        _ovl9TextEnd,
        _ovl9DataStart,
        _ovl9DataEnd,
        _ovl9SegNoloadStart,
        _ovl9SegNoloadEnd,
    },
    {
        (u32)_ovl10SegRomStart,
        (u32)_ovl10SegRomEnd,
        _ovl10SegStart,
        _ovl10TextStart,
        _ovl10TextEnd,
        _ovl10DataStart,
        _ovl10DataEnd,
        _ovl10SegNoloadStart,
        _ovl10SegNoloadEnd,
    },
    {
        (u32)_ovl11SegRomStart,
        (u32)_ovl11SegRomEnd,
        _ovl11SegStart,
        _ovl11TextStart,
        _ovl11TextEnd,
        _ovl11DataStart,
        _ovl11DataEnd,
        _ovl11SegNoloadStart,
        _ovl11SegNoloadEnd,
    },
    {
        (u32)_ovl12SegRomStart,
        (u32)_ovl12SegRomEnd,
        _ovl12SegStart,
        _ovl12TextStart,
        _ovl12TextEnd,
        _ovl12DataStart,
        _ovl12DataEnd,
        _ovl12SegNoloadStart,
        _ovl12SegNoloadEnd,
    },
    {
        (u32)_ovl13SegRomStart,
        (u32)_ovl13SegRomEnd,
        _ovl13SegStart,
        _ovl13TextStart,
        _ovl13TextEnd,
        _ovl13DataStart,
        _ovl13DataEnd,
        _ovl13SegNoloadStart,
        _ovl13SegNoloadEnd,
    },
    {
        (u32)_ovl14SegRomStart,
        (u32)_ovl14SegRomEnd,
        _ovl14SegStart,
        _ovl14TextStart,
        _ovl14TextEnd,
        _ovl14DataStart,
        _ovl14DataEnd,
        _ovl14SegNoloadStart,
        _ovl14SegNoloadEnd,
    },
    {
        (u32)_ovl15SegRomStart,
        (u32)_ovl15SegRomEnd,
        _ovl15SegStart,
        _ovl15TextStart,
        _ovl15TextEnd,
        _ovl15DataStart,
        _ovl15DataEnd,
        _ovl15SegNoloadStart,
        _ovl15SegNoloadEnd,
    },
    {
        (u32)_ovl16SegRomStart,
        (u32)_ovl16SegRomEnd,
        _ovl16SegStart,
        _ovl16TextStart,
        _ovl16TextEnd,
        _ovl16DataStart,
        _ovl16DataEnd,
        _ovl16SegNoloadStart,
        _ovl16SegNoloadEnd,
    },
    {
        (u32)_ovl17SegRomStart,
        (u32)_ovl17SegRomEnd,
        _ovl17SegStart,
        _ovl17TextStart,
        _ovl17TextEnd,
        _ovl17DataStart,
        _ovl17DataEnd,
        _ovl17SegNoloadStart,
        _ovl17SegNoloadEnd,
    },
    {
        (u32)_ovl18SegRomStart,
        (u32)_ovl18SegRomEnd,
        _ovl18SegStart,
        _ovl18TextStart,
        _ovl18TextEnd,
        _ovl18DataStart,
        _ovl18DataEnd,
        _ovl18SegNoloadStart,
        _ovl18SegNoloadEnd,
    },
    {
        (u32)_ovl19SegRomStart,
        (u32)_ovl19SegRomEnd,
        _ovl19SegStart,
        _ovl19TextStart,
        _ovl19TextEnd,
        _ovl19DataStart,
        _ovl19DataEnd,
        _ovl19SegNoloadStart,
        _ovl19SegNoloadEnd,
    },
    {
        (u32)_ovl20SegRomStart,
        (u32)_ovl20SegRomEnd,
        _ovl20SegStart,
        _ovl20TextStart,
        _ovl20TextEnd,
        _ovl20DataStart,
        _ovl20DataEnd,
        _ovl20SegNoloadStart,
        _ovl20SegNoloadEnd,
    },
    {
        (u32)_ovl21SegRomStart,
        (u32)_ovl21SegRomEnd,
        _ovl21SegStart,
        _ovl21TextStart,
        _ovl21TextEnd,
        _ovl21DataStart,
        _ovl21DataEnd,
        _ovl21SegNoloadStart,
        _ovl21SegNoloadEnd,
    },
    {
        (u32)_ovl22SegRomStart,
        (u32)_ovl22SegRomEnd,
        _ovl22SegStart,
        _ovl22TextStart,
        _ovl22TextEnd,
        _ovl22DataStart,
        _ovl22DataEnd,
        _ovl22SegNoloadStart,
        _ovl22SegNoloadEnd,
    },
    {
        (u32)_ovl23SegRomStart,
        (u32)_ovl23SegRomEnd,
        _ovl23SegStart,
        _ovl23TextStart,
        _ovl23TextEnd,
        _ovl23DataStart,
        _ovl23DataEnd,
        _ovl23SegNoloadStart,
        _ovl23SegNoloadEnd,
    },
    {
        (u32)_ovl24SegRomStart,
        (u32)_ovl24SegRomEnd,
        _ovl24SegStart,
        _ovl24TextStart,
        _ovl24TextEnd,
        _ovl24DataStart,
        _ovl24DataEnd,
        _ovl24SegNoloadStart,
        _ovl24SegNoloadEnd,
    },
    {
        (u32)_ovl25SegRomStart,
        (u32)_ovl25SegRomEnd,
        _ovl25SegStart,
        _ovl25TextStart,
        _ovl25TextEnd,
        _ovl25DataStart,
        _ovl25DataEnd,
        _ovl25SegNoloadStart,
        _ovl25SegNoloadEnd,
    },
    {
        (u32)_ovl26SegRomStart,
        (u32)_ovl26SegRomEnd,
        _ovl26SegStart,
        _ovl26TextStart,
        _ovl26TextEnd,
        _ovl26DataStart,
        _ovl26DataEnd,
        _ovl26SegNoloadStart,
        _ovl26SegNoloadEnd,
    },
    {
        (u32)_ovl27SegRomStart,
        (u32)_ovl27SegRomEnd,
        _ovl27SegStart,
        _ovl27TextStart,
        _ovl27TextEnd,
        _ovl27DataStart,
        _ovl27DataEnd,
        _ovl27SegNoloadStart,
        _ovl27SegNoloadEnd,
    },
    {
        (u32)_ovl28SegRomStart,
        (u32)_ovl28SegRomEnd,
        _ovl28SegStart,
        _ovl28TextStart,
        _ovl28TextEnd,
        _ovl28DataStart,
        _ovl28DataEnd,
        _ovl28SegNoloadStart,
        _ovl28SegNoloadEnd,
    },
    {
        (u32)_ovl29SegRomStart,
        (u32)_ovl29SegRomEnd,
        _ovl29SegStart,
        _ovl29TextStart,
        _ovl29TextEnd,
        _ovl29DataStart,
        _ovl29DataEnd,
        _ovl29SegNoloadStart,
        _ovl29SegNoloadEnd,
    },
    {
        (u32)_ovl30SegRomStart,
        (u32)_ovl30SegRomEnd,
        _ovl30SegStart,
        _ovl30TextStart,
        _ovl30TextEnd,
        _ovl30DataStart,
        _ovl30DataEnd,
        _ovl30SegNoloadStart,
        _ovl30SegNoloadEnd,
    },
    {
        (u32)_ovl31SegRomStart,
        (u32)_ovl31SegRomEnd,
        _ovl31SegStart,
        _ovl31TextStart,
        _ovl31TextEnd,
        _ovl31DataStart,
        _ovl31DataEnd,
        _ovl31SegNoloadStart,
        _ovl31SegNoloadEnd,
    },
    {
        (u32)_ovl32SegRomStart,
        (u32)_ovl32SegRomEnd,
        _ovl32SegStart,
        _ovl32TextStart,
        _ovl32TextEnd,
        _ovl32DataStart,
        _ovl32DataEnd,
        _ovl32SegNoloadStart,
        _ovl32SegNoloadEnd,
    },
    {
        (u32)_ovl33SegRomStart,
        (u32)_ovl33SegRomEnd,
        _ovl33SegStart,
        _ovl33TextStart,
        _ovl33TextEnd,
        _ovl33DataStart,
        _ovl33DataEnd,
        _ovl33SegNoloadStart,
        _ovl33SegNoloadEnd,
    },
    {
        (u32)_ovl34SegRomStart,
        (u32)_ovl34SegRomEnd,
        _ovl34SegStart,
        _ovl34TextStart,
        _ovl34TextEnd,
        _ovl34DataStart,
        _ovl34DataEnd,
        _ovl34SegNoloadStart,
        _ovl34SegNoloadEnd,
    },
    {
        (u32)_ovl35SegRomStart,
        (u32)_ovl35SegRomEnd,
        _ovl35SegStart,
        _ovl35TextStart,
        _ovl35TextEnd,
        _ovl35DataStart,
        _ovl35DataEnd,
        _ovl35SegNoloadStart,
        _ovl35SegNoloadEnd,
    },
    {
        (u32)_ovl36SegRomStart,
        (u32)_ovl36SegRomEnd,
        _ovl36SegStart,
        _ovl36TextStart,
        _ovl36TextEnd,
        _ovl36DataStart,
        _ovl36DataEnd,
        _ovl36SegNoloadStart,
        _ovl36SegNoloadEnd,
    },
    {
        (u32)_ovl37SegRomStart,
        (u32)_ovl37SegRomEnd,
        _ovl37SegStart,
        _ovl37TextStart,
        _ovl37TextEnd,
        _ovl37DataStart,
        _ovl37DataEnd,
        _ovl37SegNoloadStart,
        _ovl37SegNoloadEnd,
    },
    {
        (u32)_ovl38SegRomStart,
        (u32)_ovl38SegRomEnd,
        _ovl38SegStart,
        _ovl38TextStart,
        _ovl38TextEnd,
        _ovl38DataStart,
        _ovl38DataEnd,
        _ovl38SegNoloadStart,
        _ovl38SegNoloadEnd,
    },
    {
        (u32)_ovl39SegRomStart,
        (u32)_ovl39SegRomEnd,
        _ovl39SegStart,
        _ovl39TextStart,
        _ovl39TextEnd,
        _ovl39DataStart,
        _ovl39DataEnd,
        _ovl39SegNoloadStart,
        _ovl39SegNoloadEnd,
    },
    {
        (u32)_ovl40SegRomStart,
        (u32)_ovl40SegRomEnd,
        _ovl40SegStart,
        _ovl40TextStart,
        _ovl40TextEnd,
        _ovl40DataStart,
        _ovl40DataEnd,
        _ovl40SegNoloadStart,
        _ovl40SegNoloadEnd,
    },
    {
        (u32)_ovl41SegRomStart,
        (u32)_ovl41SegRomEnd,
        _ovl41SegStart,
        _ovl41TextStart,
        _ovl41TextEnd,
        _ovl41DataStart,
        _ovl41DataEnd,
        _ovl41SegNoloadStart,
        _ovl41SegNoloadEnd,
    },
    {
        (u32)_ovl42SegRomStart,
        (u32)_ovl42SegRomEnd,
        _ovl42SegStart,
        _ovl42TextStart,
        _ovl42TextEnd,
        _ovl42DataStart,
        _ovl42DataEnd,
        _ovl42SegNoloadStart,
        _ovl42SegNoloadEnd,
    },
    {
        (u32)_ovl43SegRomStart,
        (u32)_ovl43SegRomEnd,
        _ovl43SegStart,
        _ovl43TextStart,
        _ovl43TextEnd,
        _ovl43DataStart,
        _ovl43DataEnd,
        _ovl43SegNoloadStart,
        _ovl43SegNoloadEnd,
    },
    {
        (u32)_ovl44SegRomStart,
        (u32)_ovl44SegRomEnd,
        _ovl44SegStart,
        _ovl44TextStart,
        _ovl44TextEnd,
        _ovl44DataStart,
        _ovl44DataEnd,
        _ovl44SegNoloadStart,
        _ovl44SegNoloadEnd,
    },
    {
        (u32)_ovl45SegRomStart,
        (u32)_ovl45SegRomEnd,
        _ovl45SegStart,
        _ovl45TextStart,
        _ovl45TextEnd,
        _ovl45DataStart,
        _ovl45DataEnd,
        _ovl45SegNoloadStart,
        _ovl45SegNoloadEnd,
    },
    {
        (u32)_ovl46SegRomStart,
        (u32)_ovl46SegRomEnd,
        _ovl46SegStart,
        _ovl46TextStart,
        _ovl46TextEnd,
        _ovl46DataStart,
        _ovl46DataEnd,
        _ovl46SegNoloadStart,
        _ovl46SegNoloadEnd,
    },
    {
        (u32)_ovl47SegRomStart,
        (u32)_ovl47SegRomEnd,
        _ovl47SegStart,
        _ovl47TextStart,
        _ovl47TextEnd,
        _ovl47DataStart,
        _ovl47DataEnd,
        _ovl47SegNoloadStart,
        _ovl47SegNoloadEnd,
    },
    {
        (u32)_ovl48SegRomStart,
        (u32)_ovl48SegRomEnd,
        _ovl48SegStart,
        _ovl48TextStart,
        _ovl48TextEnd,
        _ovl48DataStart,
        _ovl48DataEnd,
        _ovl48SegNoloadStart,
        _ovl48SegNoloadEnd,
    },
    {
        (u32)_ovl49SegRomStart,
        (u32)_ovl49SegRomEnd,
        _ovl49SegStart,
        _ovl49TextStart,
        _ovl49TextEnd,
        _ovl49DataStart,
        _ovl49DataEnd,
        _ovl49SegNoloadStart,
        _ovl49SegNoloadEnd,
    },
    {
        (u32)_ovl50SegRomStart,
        (u32)_ovl50SegRomEnd,
        _ovl50SegStart,
        _ovl50TextStart,
        _ovl50TextEnd,
        _ovl50DataStart,
        _ovl50DataEnd,
        _ovl50SegNoloadStart,
        _ovl50SegNoloadEnd,
    },
    {
        (u32)_ovl51SegRomStart,
        (u32)_ovl51SegRomEnd,
        _ovl51SegStart,
        _ovl51TextStart,
        _ovl51TextEnd,
        _ovl51DataStart,
        _ovl51DataEnd,
        _ovl51SegNoloadStart,
        _ovl51SegNoloadEnd,
    },
    {
        (u32)_ovl52SegRomStart,
        (u32)_ovl52SegRomEnd,
        _ovl52SegStart,
        _ovl52TextStart,
        _ovl52TextEnd,
        _ovl52DataStart,
        _ovl52DataEnd,
        _ovl52SegNoloadStart,
        _ovl52SegNoloadEnd,
    },
    {
        (u32)_ovl53SegRomStart,
        (u32)_ovl53SegRomEnd,
        _ovl53SegStart,
        _ovl53TextStart,
        _ovl53TextEnd,
        _ovl53DataStart,
        _ovl53DataEnd,
        _ovl53SegNoloadStart,
        _ovl53SegNoloadEnd,
    },
    {
        (u32)_ovl54SegRomStart,
        (u32)_ovl54SegRomEnd,
        _ovl54SegStart,
        _ovl54TextStart,
        _ovl54TextEnd,
        _ovl54DataStart,
        _ovl54DataEnd,
        _ovl54SegNoloadStart,
        _ovl54SegNoloadEnd,
    },
    {
        (u32)_ovl55SegRomStart,
        (u32)_ovl55SegRomEnd,
        _ovl55SegStart,
        _ovl55TextStart,
        _ovl55TextEnd,
        _ovl55DataStart,
        _ovl55DataEnd,
        _ovl55SegNoloadStart,
        _ovl55SegNoloadEnd,
    },
    {
        (u32)_ovl56SegRomStart,
        (u32)_ovl56SegRomEnd,
        _ovl56SegStart,
        _ovl56TextStart,
        _ovl56TextEnd,
        _ovl56DataStart,
        _ovl56DataEnd,
        _ovl56SegNoloadStart,
        _ovl56SegNoloadEnd,
    },
    {
        (u32)_ovl57SegRomStart,
        (u32)_ovl57SegRomEnd,
        _ovl57SegStart,
        _ovl57TextStart,
        _ovl57TextEnd,
        _ovl57DataStart,
        _ovl57DataEnd,
        _ovl57SegNoloadStart,
        _ovl57SegNoloadEnd,
    },
    {
        (u32)_ovl58SegRomStart,
        (u32)_ovl58SegRomEnd,
        _ovl58SegStart,
        _ovl58TextStart,
        _ovl58TextEnd,
        _ovl58DataStart,
        _ovl58DataEnd,
        _ovl58SegNoloadStart,
        _ovl58SegNoloadEnd,
    },
    {
        (u32)_ovl59SegRomStart,
        (u32)_ovl59SegRomEnd,
        _ovl59SegStart,
        _ovl59TextStart,
        _ovl59TextEnd,
        _ovl59DataStart,
        _ovl59DataEnd,
        _ovl59SegNoloadStart,
        _ovl59SegNoloadEnd,
    },
    {
        (u32)_ovl60SegRomStart,
        (u32)_ovl60SegRomEnd,
        _ovl60SegStart,
        _ovl60TextStart,
        _ovl60TextEnd,
        _ovl60DataStart,
        _ovl60DataEnd,
        _ovl60SegNoloadStart,
        _ovl60SegNoloadEnd,
    },
    {
        (u32)_ovl61SegRomStart,
        (u32)_ovl61SegRomEnd,
        _ovl61SegStart,
        _ovl61TextStart,
        _ovl61TextEnd,
        _ovl61DataStart,
        _ovl61DataEnd,
        _ovl61SegNoloadStart,
        _ovl61SegNoloadEnd,
    },
    {
        (u32)_ovl62SegRomStart,
        (u32)_ovl62SegRomEnd,
        _ovl62SegStart,
        _ovl62TextStart,
        _ovl62TextEnd,
        _ovl62DataStart,
        _ovl62DataEnd,
        _ovl62SegNoloadStart,
        _ovl62SegNoloadEnd,
    },
    {
        (u32)_ovl63SegRomStart,
        (u32)_ovl63SegRomEnd,
        _ovl63SegStart,
        _ovl63TextStart,
        _ovl63TextEnd,
        _ovl63DataStart,
        _ovl63DataEnd,
        _ovl63SegNoloadStart,
        _ovl63SegNoloadEnd,
    },
    {
        (u32)_ovl64SegRomStart,
        (u32)_ovl64SegRomEnd,
        _ovl64SegStart,
        _ovl64TextStart,
        _ovl64TextEnd,
        _ovl64DataStart,
        _ovl64DataEnd,
        _ovl64SegNoloadStart,
        _ovl64SegNoloadEnd,
    },
};

struct gmSaveInfo gDefaultSaveData = {
    {{{0}, 0, 0, 0, 0, 0, 0, {{0, 0}}}},
    {0x01010000, 0x00000000, 0x00000102, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00034BC0,
     0x00000000, 0x00034BC0, 0x00000000, 0x00000000, 0x00000000, 0x029A0000, 0x00000000},
};

struct gmSceneInfo D_800A3F80 = {
    27,
    0x1B,
    {0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x04, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C,
     0x00, 0x1C, 0x00, 0x1C, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};

// clang-format off
struct BattleState gDefaultBattleState = {
    /* 00 */ 0, 0, 0, TIMESTOCK_TIME_ON,
    /* 04 */ 0, 0, 3, 2,
    /* 08 */ HANDICAP_MODE_OFF, FALSE, 1, 100,
    /* 0C */ 0xFFFFFFFF,
    /* 10 */ 1, 0,
    /* 14 */ 0,
    /* 18 */ 0,
    /* 1C */ ITEM_RATE_MIDDLE, 0x80, 0,
    {
        {
        /* 00 */ 3, 9, PLAYER_NOT_PRESENT, 0x1C,
        /* 04 */ 0, 0, 0,
        /* 08 */ { 1, 0x000 }, 
        /* 10 */ // rest is zero
        },
        {
        /* 00 */ 3, 9, PLAYER_NOT_PRESENT, 0x1C,
        /* 04 */ 0, 0, 0,
        /* 08 */ { 1, 0x100 },
        /* 10 */ // rest is zero
        },
        {
        /* 00 */ 3, 9, PLAYER_NOT_PRESENT, 0x1C,
        /* 04 */ 1, 0, 0,
        /* 08 */ { 1, 0x200 },
        /* 10 */ // rest is zero
        },
        {
        /* 00 */ 3, 9, PLAYER_NOT_PRESENT, 0x1C,
        /* 04 */ 1, 0, 0,
        /* 08 */ { 1, 0x300 },
        /* 10 */ // rest is zero
        },
    }
};
// clang-format on
