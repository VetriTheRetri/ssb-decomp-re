#include <ft/fighter.h>
#include <mn/menu.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

// MACROS
#define gmContinueCheckGetOptionButtonInput(is_button, mask) mnCommonCheckGetOptionButtonInput(sGMContinueOptionChangeWait, is_button, mask)
#define gmContinueCheckGetOptionStickInputUD(stick_range, min, b) mnCommonCheckGetOptionStickInputUD(sGMContinueOptionChangeWait, stick_range, min, b)
#define gmContinueCheckGetOptionStickInputLR(stick_range, min, b) mnCommonCheckGetOptionStickInputLR(sGMContinueOptionChangeWait, stick_range, min, b)
#define gmContinueSetOptionChangeWaitP(stick_range) (sGMContinueOptionChangeWait = (160 - (stick_range)) / 5)
#define gmContinueSetOptionChangeWaitN(stick_range) (sGMContinueOptionChangeWait = ((stick_range) + 160) / 5)

// EXTERN
extern f32 D_ovl1_80390D90[];
extern u32 gFTAnimHeapSize;

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_800A5240;

extern intptr_t D_NF_80134540;

extern intptr_t lGMContinueSpriteTextScore;                 // 0x00000408
extern intptr_t lGMContinueSpriteTextContinue;              // 0x000018F0
extern intptr_t lGMContinueSpriteTextYes;                   // 0x00001E08
extern intptr_t lGMContinueSpriteTextNo;                    // 0x00002318
extern intptr_t lGMContinueSpriteCursor;                    // 0x00002DF8
extern intptr_t lGMContinueSpriteRoom;                      // 0x0001E3D8
extern intptr_t lGMContinueSpriteSpotlight;                 // 0x00021900
extern intptr_t lGMContinueSpriteShadow;                    // 0x000224F8

// GLOBAL / STATIC

// 0x801342F8
void *sGMContinueFighterAnimHeap;

// 0x801342FC
s32 sGMContinueFramesPassed;

// 0x80134300
GObj *sGMContinueFighterGObj;

// 0x80134304
GObj *sGMContinueContinueGObj;

// 0x80134308
GObj *sGMContinueShadowGObj;

// 0x8013430C
GObj *sGMContinueSpotlightGObj;

// 0x80134310
GObj *sGMContinueCursorGObj;

// 0x80134314
GObj *sGMContinueOptionGObj;

// 0x80134318
GObj *sGMContinueRoomGObj;

// 0x8013431C
s32 sGMContinueRoomFadeInAlpha;

// 0x80134320
GObj *sGMContinueRoomFadeInGObj;

// 0x80134324
s32 sGMContinueSpotlightFadeAlpha;

// 0x80134328
GObj *sGMContinueSpotlightFadeGObj;

// 0x8013432C
s32 sGMContinueRoomFadeOutAlpha;

// 0x80134330
GObj *sGMContinueRoomFadeOutGObj;

// 0x80134334
GObj *sGMContinueGameOverGObj;

// 0x80134338
s32 sGMContinueOptionSelect;

// 0x8013433C
s32 sGMContinueStatus;

// 0x80134340
f32 sGMContinueGameOverFadeOutScale;

// 0x80134344
f32 sGMContinueGameOverColorStep;

// 0x80134348
mvFighterDesc sGMContinueFighterDesc;

// 0x80134354 - ??? set but never used?
s32 D_ovl55_80134354;

// 0x80134358
s32 sGMContinueOptionNoGameOverInputWait;

// 0x8013435C
s32 sGMContinueOptionYesRetryWait;

// 0x80134360
s32 sGMContinueIsSelectContinue;

// 0x80134364
s32 sGMContinueOptionNoGameOverAutoWait;

// 0x80134368
GObj *sGMContinueScoreGObj;

// 0x8013436C
s32 sGMContinueOptionChangeWait;

// 0x80134370
rdFileNode sGMContinueStatusBuf[48];

// 0x801344F0
rdFileNode sGMContinueForceBuf[7];

// 0x80134528
void *sGMContinueFiles[5];

// DATA

// 0x80134160
u32 dGMContinueFileIDs[/* */] = { 0x4F, 0x51, 0x25, 0xA4, 0x50 };

// 0x80134178
Lights1 dGMContinueLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x80134190
Lights1 dGMContinueLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// 0x80131B00
void func_ovl55_80131B00(Gfx **dl)
{
    gSPSetGeometryMode(dl[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(dl, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
s32 func_ovl55_80131B58(s32 arg0, s32 arg1)
{
    s32 var_v1 = arg0;
    s32 var_v0;

    if (arg1 == 0)
    {
        return 1;
    }
    var_v0 = arg1;

    while (var_v0 > 1)
    {
        var_v0--;
        var_v1 *= arg0;
    }
    return var_v1;
}

// 0x80131BF8
void gmContinueScoreDigitInitSprite(SObj *sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->shadow_color.r = 0x00;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0x00;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xEC;
    sobj->sprite.blue = 0x00;
}

// 0x80131C30
s32 gmContinueGetScoreDigitCount(s32 points, s32 digit_count_max)
{
    s32 digit_count_current = digit_count_max;

    while (digit_count_current > 0)
    {
        s32 digit = (func_ovl55_80131B58(10, digit_count_current - 1) != 0) ? points / func_ovl55_80131B58(10, digit_count_current - 1) : 0;

        if (digit != 0)
        {
            return digit_count_current;
        }
        else digit_count_current--;
    }
    return 0;
}

// 0x80131CDC
Sprite* gmContinueScoreDigitGetSprite(s32 digit)
{
    // 0x80134534
    intptr_t offsets[/* */] =
    {
        0x148,
        0x2D8,
        0x500,
        0x698,
        0x8C0,
        0xA58,
        0xC80,
        0xE18,
        0x1040,
        0x1270
    };
    return spGetSpriteFromFile(sGMContinueFiles[3], offsets[digit]);
}

// 0x80131D40
void gmContinueMakeScoreDigitSObjs(GObj *gobj, s32 points, f32 x, f32 y, f32 offset_x, s32 sub, s32 digit_count, sb32 is_fixed_digit_count)
{
    SObj *sobj;
    f32 calc_x;
    s32 digit;
    s32 i;

    if (points < 0)
    {
        points = 0;
    }
    sobj = gcAppendSObjWithSprite(gobj, gmContinueScoreDigitGetSprite(points % 10));
    gmContinueScoreDigitInitSprite(sobj);

    calc_x = (sub != 0) ? x - sub : x - (sobj->sprite.width + offset_x);

    sobj->pos.x = calc_x;
    sobj->pos.y = y;

    for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count : gmContinueGetScoreDigitCount(points, digit_count)); i++)
    {
        digit = (func_ovl55_80131B58(10, i) != 0) ? points / func_ovl55_80131B58(10, i) : 0;

        sobj = gcAppendSObjWithSprite(gobj, gmContinueScoreDigitGetSprite(digit % 10));
        gmContinueScoreDigitInitSprite(sobj);

        calc_x = (sub != 0) ? calc_x - sub : calc_x - (sobj->sprite.width + offset_x);

        sobj->pos.x = calc_x;
        sobj->pos.y = y;
    }
}

// 0x80131F98
void gmContinueMakeScoreDisplay(s32 points)
{
    GObj *gobj;
    SObj *sobj;

    sGMContinueScoreGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x14, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1C, GOBJ_DLLINKORDER_DEFAULT, -1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMContinueFiles[1], &lGMContinueSpriteTextScore));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->shadow_color.r = 0xFF;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0x00;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xC8;
    sobj->sprite.blue = 0x00;

    sobj->pos.x = 90.0F;
    sobj->pos.y = 200.0F;

    gmContinueMakeScoreDigitSObjs(gobj, points, 295.0F, 197.0F, 0.0F, 16, 8, TRUE);
}

// 0x80132094 - Unused?
void func_ovl55_80132094(void)
{
    return;
}

// 0x8013209C
void gmContinueSetFighterScale(GObj *gobj, s32 ft_kind)
{
    DObjGetStruct(gobj)->scale.vec.f.x = D_ovl1_80390D90[ft_kind];
    DObjGetStruct(gobj)->scale.vec.f.y = D_ovl1_80390D90[ft_kind];
    DObjGetStruct(gobj)->scale.vec.f.z = D_ovl1_80390D90[ft_kind];
}

// 0x801320D4
void gmContinueMakeFighter(s32 ft_kind)
{
    GObj *fighter_gobj;
    ftCreateDesc player_spawn;

    player_spawn = dFTDefaultFighterDesc;

    player_spawn.ft_kind = ft_kind;

    player_spawn.pos.x = 90.0F;

    player_spawn.costume = sGMContinueFighterDesc.costume;
    player_spawn.shade = sGMContinueFighterDesc.shade;
    player_spawn.anim_heap = sGMContinueFighterAnimHeap;

    player_spawn.pos.y = 2070.0F;
    player_spawn.pos.z = 0.0F;

    sGMContinueFighterGObj = fighter_gobj = ftManager_MakeFighter(&player_spawn);

    func_ovl1_803905CC(fighter_gobj, 0x10009);

    gmContinueSetFighterScale(fighter_gobj, sGMContinueFighterDesc.ft_kind);
}

// 0x801321A8
void gmContinueRoomFadeOutProcRender(GObj *gobj)
{
    if (sGMContinueRoomFadeOutAlpha < 0xFF)
    {
        sGMContinueRoomFadeOutAlpha += 5;

        if (sGMContinueRoomFadeOutAlpha > 0xFF)
        {
            sGMContinueRoomFadeOutAlpha = 0xFF;
        }
    }
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x00, 0x00, 0x00, sGMContinueRoomFadeOutAlpha);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x801322DC
void gmContinueMakeRoomFadeOut(void)
{
    GObj *gobj;

    sGMContinueRoomFadeOutAlpha = 0x00;
    sGMContinueRoomFadeOutGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x17, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, gmContinueRoomFadeOutProcRender, 0x20, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x80132338
void gmContinueRoomFadeInProcRender(GObj *gobj)
{
    if (sGMContinueRoomFadeInAlpha > 0)
    {
        sGMContinueRoomFadeInAlpha -= 5;

        if (sGMContinueRoomFadeInAlpha < 0)
        {
            sGMContinueRoomFadeInAlpha = 0;
        }
    }
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x00, 0x00, 0x00, sGMContinueRoomFadeInAlpha);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132460
void gmContinueMakeRoomFadeIn(void)
{
    GObj *gobj;

    sGMContinueRoomFadeInAlpha = 0xFF;
    sGMContinueRoomFadeInGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, gmContinueRoomFadeInProcRender, 0x1A, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x801324C0
void gmContinueSpotlightFadeProcRender(GObj *gobj)
{
    if (sGMContinueSpotlightFadeAlpha > 0)
    {
        sGMContinueSpotlightFadeAlpha -= 5;

        if (sGMContinueSpotlightFadeAlpha < 0)
        {
            sGMContinueSpotlightFadeAlpha = 0;
        }
    }
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x00, 0x00, 0x00, sGMContinueSpotlightFadeAlpha);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x801325E8
void gmContinueMakeSpotlightFadeSObjs(void)
{
    GObj *gobj;

    sGMContinueSpotlightFadeAlpha = 0xFF;
    sGMContinueSpotlightFadeGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x16, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, gmContinueSpotlightFadeProcRender, 0x1F, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x80132648
void gmContinueMakeRoom(void)
{
    GObj *gobj;
    SObj *sobj;

    sGMContinueRoomGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x13, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1D, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMContinueFiles[0], &lGMContinueSpriteRoom));

    sobj->pos.x = 30.0F;
    sobj->pos.y = 28.0F;
}

// 0x801326D4
void gmContinueMakeSpotlightSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    sGMContinueShadowGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x15, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1E, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMContinueFiles[0], &lGMContinueSpriteShadow));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xBE;
    sobj->sprite.green = 0xBE;
    sobj->sprite.blue = 0xFF;

    sobj->pos.x = 80.0F;
    sobj->pos.y = 156.0F;

    sGMContinueSpotlightGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x15, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1E, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMContinueFiles[0], &lGMContinueSpriteSpotlight));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xBE;
    sobj->sprite.green = 0xBE;
    sobj->sprite.blue = 0xFF;

    sobj->pos.x = 80.0F;
    sobj->pos.y = 28.0F;
}

// 0x80132824
void gmContinueMakeContinueSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    sGMContinueContinueGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x14, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1C, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMContinueFiles[0], &lGMContinueSpriteTextContinue));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->shadow_color.r = 0x00;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0x00;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;

    sobj->pos.x = 64.0F;
    sobj->pos.y = 64.0F;
}

// 0x801328D8
void gmContinueOptionSetHighlightColors(GObj *gobj, s32 option)
{
    SObj *sobj;

    // 0x801341D0
    gsColorRGBPair not = { { 0x00, 0x00, 0x00 }, { 0x4C, 0x47, 0x5F } };

    // 0x801341D8
    gsColorRGBPair highlight = { { 0x00, 0x00, 0x00 }, { 0xFF, 0x00, 0x00 } };

    gsColorRGBPair *color;

    sobj = SObjGetStruct(gobj);

    color = (option == gmContinue_Option_Yes) ? &not : &highlight;

    sobj->shadow_color.r = color->prim.r;
    sobj->shadow_color.g = color->prim.g;
    sobj->shadow_color.b = color->prim.b;

    sobj->sprite.red = color->env.r;
    sobj->sprite.green = color->env.g;
    sobj->sprite.blue = color->env.b;

    sobj = SObjGetStruct(gobj)->next;

    color = (option == gmContinue_Option_No) ? &not : &highlight;

    sobj->shadow_color.r = color->prim.r;
    sobj->shadow_color.g = color->prim.g;
    sobj->shadow_color.b = color->prim.b;

    sobj->sprite.red = color->env.r;
    sobj->sprite.green = color->env.g;
    sobj->sprite.blue = color->env.b;
}

// 0x801329AC
void gmContinueOptionProcUpdate(GObj *gobj)
{
    gmContinueOptionSetHighlightColors(gobj, sGMContinueOptionSelect);
}

// 0x801329D0
void gmContinueMakeOptionSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    sGMContinueOptionGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x14, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1C, GOBJ_DLLINKORDER_DEFAULT, -1);
    omAddGObjCommonProc(gobj, gmContinueOptionProcUpdate, 1, 1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMContinueFiles[0], &lGMContinueSpriteTextYes));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 84.0F;
    sobj->pos.y = 129.0F;

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMContinueFiles[0], &lGMContinueSpriteTextNo));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 189.0F;
    sobj->pos.y = 129.0F;

    gmContinueOptionSetHighlightColors(gobj, sGMContinueOptionSelect);
}

// 0x80132AE8
void gmContinueCursorSetPosition(GObj *gobj, s32 option)
{
    SObj *sobj = SObjGetStruct(gobj);

    if (option == gmContinue_Option_Yes)
    {
        sobj->pos.x = 76.0F;
        sobj->pos.y = 120.0F;
    }
    else
    {
        sobj->pos.x = 177.0F;
        sobj->pos.y = 120.0F;
    }
}

// 0x80132B2C
void gmContinueCursorProcUpdate(GObj *gobj)
{
    gmContinueCursorSetPosition(gobj, sGMContinueOptionSelect);
}

// 0x80132B50
void gmContinueMakeCursorSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    sGMContinueCursorGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x14, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1C, GOBJ_DLLINKORDER_DEFAULT, -1);
    omAddGObjCommonProc(gobj, gmContinueCursorProcUpdate, 1, 1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMContinueFiles[0], &lGMContinueSpriteCursor));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->shadow_color.r = 0x00;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0x00;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;

    gmContinueCursorSetPosition(gobj, sGMContinueOptionSelect);
}

// 0x80132C1C
void gmContinueGameOverInitSprites(SObj *sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->shadow_color.r = 0x1A;
    sobj->shadow_color.g = 0x00;
    sobj->shadow_color.b = 0xE6;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
}

// 0x80132C58
void gmContinueGameOverStepColors(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(gobj);

    // 0x801341E0
    f32 values[/* */] = { 26.0F, 0.0F, 230.0F, 255.0F, 255.0F, 255.0F };

    if (sGMContinueGameOverColorStep < 1.0F)
    {
        sGMContinueGameOverColorStep += F_PCT_TO_DEC(1.0F);

        if (sGMContinueGameOverColorStep > 1.0F)
        {
            sGMContinueGameOverColorStep = 1.0F;
        }
        while (sobj != NULL)
        {
            sobj->shadow_color.r = values[0] * sGMContinueGameOverColorStep;
            sobj->shadow_color.g = values[1] * sGMContinueGameOverColorStep;
            sobj->shadow_color.b = values[2] * sGMContinueGameOverColorStep;

            sobj->sprite.red = values[3] * sGMContinueGameOverColorStep;
            sobj->sprite.green = values[4] * sGMContinueGameOverColorStep;
            sobj->sprite.blue = values[5] * sGMContinueGameOverColorStep;

            sobj = sobj->next;
        }
    }
}

// 0x8013307C
void gmContinueMakeGameOverSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    // 0x801341F8
    intptr_t letters[/* */] = { 0x1F08, 0x5E0, 0x3980, 0x1628, 0x44B0, 0x665D8, 0x1628, 0x5418 };

    // 0x80134218
    f32 positions_x[/* */] = { 30.0F, 60.0F, 95.0F, 133.0F, 166.0F, 200.0F, 230.0F, 254.0F };
    s32 i;

    sGMContinueGameOverColorStep = 0.0F;

    sGMContinueGameOverGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x14, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1C, GOBJ_DLLINKORDER_DEFAULT, -1);
    omAddGObjCommonProc(gobj, gmContinueGameOverStepColors, 1, 1);

    for (i = 0; i < (ARRAY_COUNT(letters) + ARRAY_COUNT(positions_x)) / 2; i++)
    {
        sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMContinueFiles[2], letters[i]));

        sobj->pos.x = positions_x[i];
        sobj->pos.y = 50.0F;

        gmContinueGameOverInitSprites(sobj);
    }
}

// 0x80133210
void gmContinueGameOverProcUpdate(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(sGMContinueRoomGObj);

    if (sGMContinueGameOverFadeOutScale > F_PCT_TO_DEC(1.0F))
    {
        sGMContinueGameOverFadeOutScale -= F_PCT_TO_DEC(1.0F);

        if (sGMContinueGameOverFadeOutScale < F_PCT_TO_DEC(1.0F))
        {
            sGMContinueGameOverFadeOutScale = F_PCT_TO_DEC(1.0F);
        }
        sobj->sprite.scalex = sGMContinueGameOverFadeOutScale;
        sobj->sprite.scaley = sGMContinueGameOverFadeOutScale;

        sobj->pos.x = 160.0F - ((260.0F * sGMContinueGameOverFadeOutScale) / 2);
        sobj->pos.y = 120.0F - ((184.0F * sGMContinueGameOverFadeOutScale) / 2);

        DObjGetStruct(sGMContinueFighterGObj)->translate.vec.f.y += 3.0F;

        DObjGetStruct(sGMContinueFighterGObj)->scale.vec.f.x = D_ovl1_80390D90[sGMContinueFighterDesc.ft_kind] * sGMContinueGameOverFadeOutScale;
        DObjGetStruct(sGMContinueFighterGObj)->scale.vec.f.y = D_ovl1_80390D90[sGMContinueFighterDesc.ft_kind] * sGMContinueGameOverFadeOutScale;
        DObjGetStruct(sGMContinueFighterGObj)->scale.vec.f.z = D_ovl1_80390D90[sGMContinueFighterDesc.ft_kind] * sGMContinueGameOverFadeOutScale;
    }
}

// 0x80133368
void gmContinueMakeGameOver(void)
{
    GObj *gobj;

    sGMContinueGameOverFadeOutScale = 1.0F;
    sGMContinueGameOverGObj = gobj = omMakeGObjSPAfter(0, NULL, 0x14, GOBJ_LINKORDER_DEFAULT);

    omAddGObjCommonProc(gobj, gmContinueGameOverProcUpdate, 1, 1);
}

// 0x801333C4
void func_ovl55_801333C4(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x50, CAMERA_MASK_DLLINK(26), -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->flags = 4;
}

// 0x80133474
void func_ovl55_80133474(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x3C, CAMERA_MASK_DLLINK(31), -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->flags = 4;
}

// 0x80133524
void func_ovl55_80133524(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x28, CAMERA_MASK_DLLINK(32), -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->flags = 4;
}

// 0x801335D4
void func_ovl55_801335D4(Camera *cam)
{
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->vec.eye.y = 1000.0F;
    cam->vec.eye.z = 2000.0F;
    cam->vec.at.y = 400.0F;

    cam->vec.eye.x = 0.0F;
    cam->vec.at.x = 0.0F;
    cam->vec.at.z = 0.0F;
    cam->vec.up.x = 0.0F;
    cam->vec.up.z = 0.0F;

    cam->vec.up.y = 1.0F;

    cam->projection.persp.fovy = 30.0F;
    cam->projection.persp.near = 100.0F;
    cam->projection.persp.far = 5000.0F;

    cam->flags = 4;
}

// 0x80133694
void func_ovl55_80133694(void)
{
    // 0x08048600
    Camera *cam = CameraGetStruct
    (
        func_8000B93C
        (
            0x401,
            NULL,
            0x10,
            0x80000000,
            func_80017EC0,
            0x32,
            CAMERA_MASK_DLLINK(27) | CAMERA_MASK_DLLINK(18) | CAMERA_MASK_DLLINK(15) | CAMERA_MASK_DLLINK(10) | CAMERA_MASK_DLLINK(9),
            -1,
            1,
            1,
            0,
            1,
            0
        )
    );
    func_ovl55_801335D4(cam);
}

// 0x80133718
void func_ovl55_80133718(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x5A, CAMERA_MASK_DLLINK(29), -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801337B8
void func_ovl55_801337B8(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x46, CAMERA_MASK_DLLINK(30), -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->flags = 4;
}

// 0x80133868
void func_ovl55_80133868(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x1E, CAMERA_MASK_DLLINK(28), -1, 0, 1, 0, 1, 0));
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->flags = 4;
}

// 0x80133918
void func_ovl55_80133918(void)
{
    sGMContinueFramesPassed = 0;
    sGMContinueFighterDesc.ft_kind = D_800A4B18.player_block[gSceneData.spgame_player].character_kind;
    sGMContinueFighterDesc.costume = D_800A4B18.player_block[gSceneData.spgame_player].costume_index;
    sGMContinueFighterDesc.shade = D_800A4B18.player_block[gSceneData.spgame_player].shade_index;
    sGMContinueOptionSelect = 0;
    sGMContinueStatus = 0;
    D_ovl55_80134354 = 0;
    sGMContinueOptionNoGameOverAutoWait = -1;
}

// 0x80133990 - real
void gmContinueAbsolutelyNothingWhichSmartassLeftThisInHereBruh(void)
{
    return;
}

// 0x80133998
void gmContinueActorProcUpdate(GObj *gobj)
{
    s32 unused;
    s32 stick_range;

    sGMContinueFramesPassed++;

    if (sGMContinueFramesPassed >= 10)
    {
        if (sGMContinueFramesPassed == sGMContinueOptionYesRetryWait)
        {
            // Why though?
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Title;

            sGMContinueIsSelectContinue = TRUE;

            func_80005C74();
        }
        if (D_ovl55_80134354 != 0)
        {
            D_ovl55_80134354--;
        }
        if (sGMContinueOptionChangeWait != 0)
        {
            sGMContinueOptionChangeWait--;
        }
        if ((func_ovl1_80390A04(-15, 15) != FALSE) && (func_ovl1_80390AC0(-15, 15) != FALSE))
        {
            sGMContinueOptionChangeWait = 0;
        }
        if ((sGMContinueFramesPassed == I_SEC_TO_FRAMES(40)) && (sGMContinueStatus == 0))
        {
            omEjectGObj(sGMContinueShadowGObj);
            omEjectGObj(sGMContinueSpotlightGObj);
            omEjectGObj(sGMContinueContinueGObj);
            omEjectGObj(sGMContinueOptionGObj);
            omEjectGObj(sGMContinueCursorGObj);

            gmContinueMakeRoomFadeOut();
            gmContinueMakeGameOverSObjs();
            gmContinueMakeGameOver();

            sGMContinueStatus = 2;
            sGMContinueOptionNoGameOverInputWait = sGMContinueFramesPassed + I_SEC_TO_FRAMES(1.5);
            sGMContinueOptionNoGameOverAutoWait = sGMContinueFramesPassed + I_SEC_TO_FRAMES(30);

            func_80020AB4(0, 0x20);
            func_800269C0(0x1E7);
        }
        if (sGMContinueStatus == 0)
        {
            if ((sGMContinueFramesPassed > I_SEC_TO_FRAMES(2.5)) && (func_ovl1_8039076C(A_BUTTON | START_BUTTON) != FALSE))
            {
                switch (sGMContinueOptionSelect)
                {
                case gmContinue_Option_Yes:
                    omEjectGObj(sGMContinueShadowGObj);
                    omEjectGObj(sGMContinueSpotlightGObj);
                    omEjectGObj(sGMContinueContinueGObj);
                    omEjectGObj(sGMContinueOptionGObj);
                    omEjectGObj(sGMContinueCursorGObj);

                    gSceneData.spgame_score *= 0.5F;

                    omEjectGObj(sGMContinueScoreGObj);
                    gmContinueMakeScoreDisplay(gSceneData.spgame_score);
                    func_ovl1_803905CC(sGMContinueFighterGObj, 0x1000A);

                    sGMContinueStatus = 1;
                    sGMContinueOptionYesRetryWait = sGMContinueFramesPassed + I_SEC_TO_FRAMES(4);

                    func_800269C0(0xA0);
                    break;

                case gmContinue_Option_No:
                    omEjectGObj(sGMContinueShadowGObj);
                    omEjectGObj(sGMContinueSpotlightGObj);
                    omEjectGObj(sGMContinueContinueGObj);
                    omEjectGObj(sGMContinueOptionGObj);
                    omEjectGObj(sGMContinueCursorGObj);
                    gmContinueMakeRoomFadeOut();
                    gmContinueMakeGameOverSObjs();
                    gmContinueMakeGameOver();

                    sGMContinueStatus = 2;
                    sGMContinueOptionNoGameOverInputWait = sGMContinueFramesPassed + I_SEC_TO_FRAMES(1.5);
                    sGMContinueOptionNoGameOverAutoWait = sGMContinueFramesPassed + I_SEC_TO_FRAMES(30);

                    func_80020AB4(0, 0x20);
                    func_800269C0(0x1E7);
                    break;
                }
            }
            if (sGMContinueFramesPassed > 120)
            {
                if (((func_ovl1_8039076C(L_TRIG | L_JPAD | L_CBUTTONS) != FALSE) || gmContinueCheckGetOptionStickInputLR(stick_range, -15, FALSE)) && (sGMContinueOptionSelect == gmContinue_Option_No))
                {
                    func_800269C0(0xA3);
                    sGMContinueOptionSelect = gmContinue_Option_Yes;
                    gmContinueSetOptionChangeWaitN(stick_range);
                }
                if (((func_ovl1_8039076C(R_TRIG | R_JPAD | R_CBUTTONS) != FALSE) || gmContinueCheckGetOptionStickInputLR(stick_range, 15, TRUE)) && (sGMContinueOptionSelect == gmContinue_Option_Yes))
                {
                    func_800269C0(0xA3);
                    sGMContinueOptionSelect = gmContinue_Option_No;
                    gmContinueSetOptionChangeWaitP(stick_range);
                }
            }
        }
        if ((sGMContinueStatus == 2) && (sGMContinueOptionNoGameOverInputWait < sGMContinueFramesPassed) && (func_ovl1_8039076C(A_BUTTON | START_BUTTON) != FALSE))
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Title;

        #if !defined(DAIRANTOU_OPT0)
            gmContinueAbsolutelyNothingWhichSmartassLeftThisInHereBruh();
        #endif
            sGMContinueIsSelectContinue = FALSE;
            func_80005C74();
        }
        if (sGMContinueFramesPassed == sGMContinueOptionNoGameOverAutoWait)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = scMajor_Kind_Title;

        #if !defined(DAIRANTOU_OPT0)
            gmContinueAbsolutelyNothingWhichSmartassLeftThisInHereBruh();
        #endif
            sGMContinueIsSelectContinue = FALSE;
            func_80005C74();
        }
        if (sGMContinueFramesPassed == 40)
        {
            gmContinueMakeSpotlightSObjs();
            gmContinueMakeSpotlightFadeSObjs();
        }
        if (sGMContinueFramesPassed == 60)
        {
            gmContinueMakeRoomFadeIn();
            gmContinueMakeRoom();
            gmContinueMakeContinueSObj();
            func_800269C0(0x1E1);
        }
        if (sGMContinueFramesPassed == 120)
        {
            gmContinueMakeOptionSObjs();
            gmContinueMakeCursorSObj();
        }
    }
}

// 0x80133F58
void gmContinueInitAll(void)
{
    s32 unused;
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = &D_NF_001AC870;
    rldm_setup.tableFileCount = &D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = sGMContinueStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(sGMContinueStatusBuf);
    rldm_setup.forceBuf = sGMContinueForceBuf;
    rldm_setup.forceBufSize = ARRAY_COUNT(sGMContinueForceBuf);

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dGMContinueFileIDs, ARRAY_COUNT(dGMContinueFileIDs), sGMContinueFiles, gsMemoryAlloc(rdManagerGetAllocSize(dGMContinueFileIDs, ARRAY_COUNT(dGMContinueFileIDs)), 0x10));
    omMakeGObjSPAfter(0, gmContinueActorProcUpdate, 0, GOBJ_LINKORDER_DEFAULT);
    func_8000B9FC(0, 0x80000000, 0x64, 3, 0xFF);
    func_ovl2_80115890();
    func_ovl55_80133918();
    efManager_AllocUserData();
    ftManager_AllocFighterData(1, 1);
    ftManager_SetFileDataKind(sGMContinueFighterDesc.ft_kind);
    sGMContinueFighterAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    func_ovl55_80133694();
    func_ovl55_801333C4();
    func_ovl55_80133474();
    func_ovl55_80133524();
    func_ovl55_80133718();
    func_ovl55_801337B8();
    func_ovl55_80133868();
    gmContinueMakeFighter(sGMContinueFighterDesc.ft_kind);
    gmContinueMakeScoreDisplay(gSceneData.spgame_score);
    func_ovl1_803904E0(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
    func_80020A74();
    func_80020AB4(0, 0x1F);
}

// 0x80134238
scUnkDataBounds D_ovl55_80134238;

// 0x80134254
scRuntimeInfo D_ovl55_80134254;

// 0x801340FC
void gmContinueStartScene(void)
{
    D_ovl55_80134238.unk_scdatabounds_0xC = ((uintptr_t)&D_NF_800A5240 - 0x1900);

    func_80007024(&D_ovl55_80134238);

    D_ovl55_80134254.arena_size = ((uintptr_t)&func_ovl1_803903E0 - (uintptr_t)&D_NF_80134540);

    func_800A2698(&D_ovl55_80134254);

    gSceneData.is_select_continue = sGMContinueIsSelectContinue;
}
