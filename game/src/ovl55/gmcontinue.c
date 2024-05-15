#include <ft/fighter.h>
#include <gm/battle.h>

// EXTERN
extern f32 D_ovl1_80390D90[];

extern intptr_t lGMContinueSpriteTextScore;                 // 0x00000408
extern intptr_t lGMContinueSpriteTextContinue;              // 0x000018F0
extern intptr_t lGMContinueSpriteTextYes;                   // 0x00001E08
extern intptr_t lGMContinueSpriteTextNo;                    // 0x00002318
extern intptr_t lGMContinueSpriteRoom;                      // 0x0001E3D8
extern intptr_t lGMContinueSpriteSpotlight;                 // 0x00021900
extern intptr_t lGMContinueSpriteShadow;                    // 0x000224F8

// GLOBAL / STATIC

// 0x801342F8
void *sGMContinueFighterAnimHeap;

// 0x80134300
GObj *sGMContinueFighterGObj;

// 0x80134304
GObj *sGMContinueContinueGObj;

// 0x80134308
GObj *sGMContinueShadowGObj;

// 0x8013430C
GObj *sGMContinueSpotlightGObj;

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

// 0x80134338
s32 sGMContinueOptionSelect;

// 0x80134348
gmContinueFighter sGMContinueFighterAttributes;

// 0x80134368
GObj *sGMContinueScoreGObj;

// 0x80134528
void *sGMContinueFiles[5];

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
void func_ovl55_80131BF8(SObj *sobj)
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
s32 gmContinueGetScoreDigitSprite(s32 digit)
{
    // 0x80134534
    intptr_t offsets[10] =
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
    sobj = gcAppendSObjWithSprite(gobj, gmContinueGetScoreDigitSprite(points % 10));
    func_ovl55_80131BF8(sobj);

    calc_x = (sub != 0) ? x - sub : x - (sobj->sprite.width + offset_x);

    sobj->pos.x = calc_x;
    sobj->pos.y = y;

    for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count : gmContinueGetScoreDigitCount(points, digit_count)); i++)
    {
        digit = (func_ovl55_80131B58(10, i) != 0) ? points / func_ovl55_80131B58(10, i) : 0;

        sobj = gcAppendSObjWithSprite(gobj, gmContinueGetScoreDigitSprite(digit % 10));
        func_ovl55_80131BF8(sobj);

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

    sGMContinueScoreGObj = gobj = omMakeGObjCommon(0, NULL, 0x14, GOBJ_LINKORDER_DEFAULT);
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

    player_spawn.costume = sGMContinueFighterAttributes.costume;
    player_spawn.shade = sGMContinueFighterAttributes.shade;
    player_spawn.anim_heap = sGMContinueFighterAnimHeap;

    player_spawn.pos.y = 2070.0F;
    player_spawn.pos.z = 0.0F;

    sGMContinueFighterGObj = fighter_gobj = ftManager_MakeFighter(&player_spawn);

    func_ovl1_803905CC(fighter_gobj, 0x10009);

    gmContinueSetFighterScale(fighter_gobj, sGMContinueFighterAttributes.ft_kind);
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
    sGMContinueRoomFadeOutGObj = gobj = omMakeGObjCommon(0, NULL, 0x17, GOBJ_LINKORDER_DEFAULT);
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
    sGMContinueRoomFadeInGObj = gobj = omMakeGObjCommon(0, NULL, 0x11, GOBJ_LINKORDER_DEFAULT);
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
void gmContinueMakeSpotlightSObjsFade(void)
{
    GObj *gobj;

    sGMContinueSpotlightFadeAlpha = 0xFF;
    sGMContinueSpotlightFadeGObj = gobj = omMakeGObjCommon(0, NULL, 0x16, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, gmContinueSpotlightFadeProcRender, 0x1F, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x80132648
void gmContinueMakeRoom(void)
{
    GObj *gobj;
    SObj *sobj;

    sGMContinueRoomGObj = gobj = omMakeGObjCommon(0, NULL, 0x13, GOBJ_LINKORDER_DEFAULT);

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

    sGMContinueShadowGObj = gobj = omMakeGObjCommon(0, NULL, 0x15, GOBJ_LINKORDER_DEFAULT);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 0x1E, GOBJ_DLLINKORDER_DEFAULT, -1);
    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(sGMContinueFiles[0], &lGMContinueSpriteShadow));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xBE;
    sobj->sprite.green = 0xBE;
    sobj->sprite.blue = 0xFF;

    sobj->pos.x = 80.0F;
    sobj->pos.y = 156.0F;

    sGMContinueSpotlightGObj = gobj = omMakeGObjCommon(0, NULL, 0x15, GOBJ_LINKORDER_DEFAULT);
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

    sGMContinueContinueGObj = gobj = omMakeGObjCommon(0, NULL, 0x14, GOBJ_LINKORDER_DEFAULT);
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

    sGMContinueOptionGObj = gobj = omMakeGObjCommon(0, NULL, 0x14, GOBJ_LINKORDER_DEFAULT);
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