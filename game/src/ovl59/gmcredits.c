#include <gm/battle.h>
#include <gm/gmsound.h>
#include <sys/thread6.h>
#include <sys/obj_renderer.h>

#define GMCREDITS_CHARACTER_COLON(c)        0x34 // Colon
#define GMCREDITS_CHARACTER_PERIOD(c)       0x3F // Period
#define GMCREDITS_CHARACTER_DASH(c)         0x40 // Dash
#define GMCREDITS_CHARACTER_COMMA(c)        0x41 // Comma
#define GMCREDITS_CHARACTER_AMPERS(c)       0x42 // Ampersand (&)
#define GMCREDITS_CHARACTER_QUOTE(c)        0x43 // Quotation mark
#define GMCREDITS_CHARACTER_SLASH(c)        0x44 // Slash
#define GMCREDITS_CHARACTER_APOSTROPHE(c)   0x45 // Apostrophe
#define GMCREDITS_CHARACTER_QMARK(c)        0x46 // Question Mark
#define GMCREDITS_CHARACTER_OBRACKET(c)     0x47 // Open bracket
#define GMCREDITS_CHARACTER_CBRACKET(c)     0x48 // Close bracket
#define GMCREDITS_CHARACTER_EACCENT(c)      0x49 // Letter 'é'

// Convert hexadecimal character to alphabetical equivalent starting from capital A
#define GMCREDITS_HEX_TO_LETTER(c) ((c) > 'Z' ? ((c) - 0x47) : ((c) - 0x41))

// Convert hexadecimal character to number
#define GMCREDITS_HEX_TO_NUMBER(c) (0x35 + ('9' - (c)))

// GLOBALS

// 0x8013A8B8
s32 gCreditsNameID;

// 0x8013A8BC
f32 gCreditsRollSpeed;

// 0x8013A8C0
s32 gCreditsStatus;

// 0x8013A8C4
gmCreditsName *gCreditsNameAllocFree;

// 0x8013A8C8
GObj *D_ovl59_8013A8C8;

// 0x8013A8CC
GObj *gCreditsCrosshairGObj;

// 0x8013A8D0
sb32 gCreditsIsPaused;

// 0x8013A8DC
ATrack *gCreditsNameATrack;

// 0x8013A8E0
void *gCreditsNameInterpolation;

// 0x8013A8E4
cmMatrixTemp *D_ovl59_8013A8E4;

// 0x8013A8E8
void *D_ovl59_8013A8E8;

// 0x8013A8EC
s32 gCreditsHighlightSize;

// 0x8013A8F0
f32 gCreditsHighlightPositionX;

// 0x8013A8F4
f32 gCreditsHighlightPositionY;

// 0x8013A8F8
GObj *gCreditsStaffRoleTextGObj;

// 0x8013A8FC
GObj *gCreditsCompanyTextGObj;

// 0x8013A900
s32 gCreditsRollBeginWait;

// 0x8013A904 - controller port to use for credits sequence
u8 gCreditsPlayer;

// 0x8013A908
s32 gCreditsRollEndWait;

// 0x8013AA10
void *D_ovl59_8013AA10;

// 0x8013AA18
Mtx44f D_ovl59_8013AA18;

// DATA

// 0x80136BA0 - Literally every character from credits roles all at once. Should convert from .txt into .inc.c
s32 dCreditsStaffRoleCharacters[/* */] = { #include "assets/credits/credits.inc.c" };

// 0x80139B68
gmCreditsText dCreditsStaffRoleTextInfo[84];

// 0x80139E08
s32 dCreditsCompanyCharacters[/* */] = { #include "assets/credits/companies.inc.c" };

// 0x80139FD4
gmCreditsText dCreditsCompanyTextInfo[84];

// 0x8013A034
s32 dCreditsCompanyIDs[/* */] =
{
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    -1,
    -1,
    -1,
    -1,
    -1,
    gmCredits_Company_Creatures,
    gmCredits_Company_Creatures,
    gmCredits_Company_Creatures,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    -1,
    gmCredits_Company_ARTSVISION,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_AONIProd,
    gmCredits_Company_AONIProd,
    gmCredits_Company_EZAKIProd,
    gmCredits_Company_AONIProd,
    -1,
    gmCredits_Company_Mickeys,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_NINTENDO,
    -1, 
    gmCredits_Company_NINTENDO,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_HAL,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_GAMEFREAK,
    gmCredits_Company_Creatures,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_HAL,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_Creatures,
    -1,
    gmCredits_Company_NOA,
    gmCredits_Company_NOA,
    gmCredits_Company_NOA,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_Creatures,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_NINTENDO,
    -1,
    -1,
    -1,
    gmCredits_Company_HAL,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_HAL,
    gmCredits_Company_HAL,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_NINTENDO,
    -1,
    -1
};

// 0x8013A348
gmCreditsSprite D_ovl59_8013A348[/* */] = { #include "assets/credits/spriteinfo.inc.c" };

// 0x8013A5E0
s32 dCreditsTextLuigi[/* */] = 
{
    GMCREDITS_HEX_TO_LETTER('L'),
    GMCREDITS_HEX_TO_LETTER('u'),
    GMCREDITS_HEX_TO_LETTER('i'),
    GMCREDITS_HEX_TO_LETTER('g'),
    GMCREDITS_HEX_TO_LETTER('i')
};

// 0x8013A5F4
s32 dCreditsTextJigglypuff[/* */] =
{
    GMCREDITS_HEX_TO_LETTER('J'),
    GMCREDITS_HEX_TO_LETTER('i'),
    GMCREDITS_HEX_TO_LETTER('g'),
    GMCREDITS_HEX_TO_LETTER('g'),
    GMCREDITS_HEX_TO_LETTER('l'),
    GMCREDITS_HEX_TO_LETTER('y'),
    GMCREDITS_HEX_TO_LETTER('p'),
    GMCREDITS_HEX_TO_LETTER('u'),
    GMCREDITS_HEX_TO_LETTER('f'),
    GMCREDITS_HEX_TO_LETTER('f')
};

// 0x8013A61C
s32 dCreditsTextCFalcon[/* */] = 
{
    GMCREDITS_HEX_TO_LETTER('C'),
    GMCREDITS_CHARACTER_PERIOD('.'),
    GMCREDITS_HEX_TO_LETTER('F'),
    GMCREDITS_HEX_TO_LETTER('a'),
    GMCREDITS_HEX_TO_LETTER('l'),
    GMCREDITS_HEX_TO_LETTER('c'),
    GMCREDITS_HEX_TO_LETTER('o'),
    GMCREDITS_HEX_TO_LETTER('n')
};

// 0x8013A63C
s32 dCreditsTextNess[/* */] =
{
    GMCREDITS_HEX_TO_LETTER('N'),
    GMCREDITS_HEX_TO_LETTER('e'),
    GMCREDITS_HEX_TO_LETTER('s'),
    GMCREDITS_HEX_TO_LETTER('s')
};

// 0x8013A64C
s32 dCreditsTextEarthBound[/* */] =
{
    GMCREDITS_HEX_TO_LETTER('E'),
    GMCREDITS_HEX_TO_LETTER('a'),
    GMCREDITS_HEX_TO_LETTER('r'),
    GMCREDITS_HEX_TO_LETTER('t'),
    GMCREDITS_HEX_TO_LETTER('h'),
    GMCREDITS_HEX_TO_LETTER('B'),
    GMCREDITS_HEX_TO_LETTER('o'),
    GMCREDITS_HEX_TO_LETTER('u'),
    GMCREDITS_HEX_TO_LETTER('n'),
    GMCREDITS_HEX_TO_LETTER('d')
};

// 0x8013A674
s32 dCreditsTextFZero[/* */] =
{
    GMCREDITS_HEX_TO_LETTER('F'),
    GMCREDITS_CHARACTER_DASH('-'),
    GMCREDITS_HEX_TO_LETTER('Z'),
    GMCREDITS_HEX_TO_LETTER('E'),
    GMCREDITS_HEX_TO_LETTER('R'),
    GMCREDITS_HEX_TO_LETTER('O'),
    GMCREDITS_HEX_TO_LETTER(' '),
    GMCREDITS_HEX_TO_LETTER('X')
};

// 0x8013A694
s32 dCreditsTextClassicMario[/* */] =
{
    GMCREDITS_HEX_TO_LETTER('C'),
    GMCREDITS_HEX_TO_LETTER('l'),
    GMCREDITS_HEX_TO_LETTER('a'),
    GMCREDITS_HEX_TO_LETTER('s'),
    GMCREDITS_HEX_TO_LETTER('s'),
    GMCREDITS_HEX_TO_LETTER('i'),
    GMCREDITS_HEX_TO_LETTER('c'),
    GMCREDITS_HEX_TO_LETTER('M'),
    GMCREDITS_HEX_TO_LETTER('a'),
    GMCREDITS_HEX_TO_LETTER('r'),
    GMCREDITS_HEX_TO_LETTER('i'),
    GMCREDITS_HEX_TO_LETTER('o')
};

// 0x80131B00
sb32 gmCreditsCheckUnpause(void)
{
    sb32 var_v1 = TRUE;
    u16 button_new = gPlayerControllers[gCreditsPlayer].button_new;

    if (button_new & (A_BUTTON | B_BUTTON | Z_TRIG | START_BUTTON))
    {
        GObj *fighter_gobj;
        GObj *item_gobj;

        if (D_ovl59_8013A8C8 != NULL)
        {
            func_8000B2B8(D_ovl59_8013A8C8);
        }
        fighter_gobj = gOMObjCommonLinks[3];

        while (fighter_gobj != NULL)
        {
            func_8000B2B8(fighter_gobj);

            fighter_gobj = fighter_gobj->group_gobj_next;
        }
        item_gobj = gOMObjCommonLinks[4];

        while (item_gobj != NULL)
        {
            func_8000B2B8(item_gobj);
            item_gobj = item_gobj->group_gobj_next;
        }
        var_v1 = FALSE;
    }
    return var_v1;
}

// 0x80131BB0
void func_ovl59_80131BB0(Mtx44f mtx, Vec3f *vec, f32 *width, f32 *height)
{
    f32 x = vec->x;
    f32 y = vec->y;
    f32 z = vec->z;

    f32 w = (mtx[0][0] * x) + (mtx[1][0] * y) + (mtx[2][0] * z) + mtx[3][0];
    f32 h = (mtx[0][1] * x) + (mtx[1][1] * y) + (mtx[2][1] * z) + mtx[3][1];
    f32 i = (mtx[0][3] * x) + (mtx[1][3] * y) + (mtx[2][3] * z) + mtx[3][3];

    i = (1.0F / i);

    *width = w * i * 640.0F * 0.5F;
    *height = h * i * 480.0F * 0.5F;
}

// 0x80131C88
void func_ovl59_80131C88(cmMatrixTemp *arg0)
{
    Mtx44f m, n;

    hal_perspective_fast_f(n, &arg0->perspnorm, arg0->fovy, arg0->aspect, arg0->near, arg0->far, arg0->scale);
    hal_look_at_f(m, arg0->xeye, arg0->yeye, arg0->zeye, arg0->xat, arg0->yat, arg0->zat, arg0->xup, arg0->yup, arg0->zup);
    guMtxCatF(m, n, D_ovl59_8013AA18);
}

// 0x80131D30
void func_ovl59_80131D30(DObj *dobj, Vec3f *vec, f32 *width, f32 *height)
{
    Mtx44f m, r;

    hal_rotate_rpy_translate_scale_f
    (
        m,
        dobj->translate.vec.f.x,
        dobj->translate.vec.f.y,
        dobj->translate.vec.f.z,
        dobj->rotate.vec.f.x,
        dobj->rotate.vec.f.y,
        dobj->rotate.vec.f.z,
        dobj->scale.vec.f.x,
        dobj->scale.vec.f.y,
        dobj->scale.vec.f.z
    );
    guMtxCatF(m, D_ovl59_8013AA18, r);
    func_ovl59_80131BB0(r, vec, width, height);
}

// 0x80131DD0
void func_ovl59_80131DD0(GObj *gobj, Mtx44f mtx)
{
    gmCreditsMatrix *credits = gobj->user_data.p;

    mtx[0][2] = mtx[1][1] = mtx[2][0] = mtx[2][3] = 0.0F;
    mtx[0][1] = mtx[1][3] = 28.0F;

    mtx[1][0] = mtx[2][2] = -(credits->unk_gmcreditsmtx_0x10 + 4.0F);
    mtx[0][0] = mtx[0][3] = -22.0F;

    mtx[1][2] = mtx[2][1] = (ABS(credits->unk_gmcreditsmtx_0xC) * 2) + 18.0F;
}

// 0x80131E70
void func_ovl59_80131E70(Vec3f *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    arg0->x = arg2 - arg4;
    arg0->y = arg3 - arg1;
    arg0->z = (arg1 * arg4) - (arg3 * arg2);
}

// 0x80131EB8
sb32 gmCreditsCheckCursorNameOverlap(Vec3f *vec)
{
    SObj *sobj = SObjGetStruct(gCreditsCrosshairGObj);
    f32 x = (sobj->pos.x + 29.0F) - 320.0F;
    f32 y = 240.0F - (sobj->pos.y + 29.0F);
    f32 v = (vec->x * x) + (vec->y * y) + vec->z;
    sb32 ret = TRUE;

    if (v < 0.0F)
    {
        ret = FALSE;
    }
    return ret;
}

// 0x80131F34
void func_ovl59_80131F34(GObj *arg0)
{
    GObj *ugobj = arg0->user_data.p;
    gmCreditsMatrix *credits = ugobj->user_data.p;

    if ((credits->unk_gmcreditsmtx_0x14 + gCreditsRollSpeed) >= 1.0F)
    {
        omEjectGObjCommon(NULL);
        omEjectGObjCommon(gCreditsStaffRoleTextGObj);
        omEjectGObjCommon(gCreditsCompanyTextGObj);
    }
    else
    {
        DObj *dobj = DObjGetStruct(arg0)->child;

        DObjGetStruct(arg0)->translate.vec.f = DObjGetStruct(ugobj)->translate.vec.f;
        DObjGetStruct(arg0)->rotate.vec.f = DObjGetStruct(ugobj)->rotate.vec.f;

        dobj->translate.vec.f.x = (ABS(credits->unk_gmcreditsmtx_0xC) * 2) + 18.0F;
    }
}

// 0x8013202C
void func_ovl59_8013202C(GObj *arg0)
{
    GObj *gobj = gOMObjCommonLinks[omGObj_LinkIndex_02];
    GObj *ugobj = arg0->user_data.p;

    if (gobj == NULL)
    {
        gobj = omMakeGObjCommon(8, NULL, 2, 0x80000000);
        omAddGObjRenderProc(gobj, func_80014038, 3, 0x80000000, -1);
        func_8000F590(gobj, D_ovl59_8013A8E8, NULL, 0x1C, 0, 0);
        omAddGObjCommonProc(gobj, func_ovl59_80131F34, 1, 1);

        gobj->user_data.p = arg0;
        ugobj->unk_0x1C = gobj;
    }
    else
    {
        gobj->user_data.p = arg0;
        ugobj->unk_0x1C = gobj;
    }
}

// 0x801320F4
s32 gmCreditsGetLockOnPosX(s32 posx)
{
    s32 boundx = posx;

    if (posx < 20)
    {
        boundx = 20;
    }
    if (posx > 620)
    {
        boundx = 620;
    }
    return boundx;
}

// 0x8013211C
s32 gmCreditsGetLockOnPosY(s32 posy)
{
    s32 boundy = posy;

    if (posy < 20)
    {
        boundy = 20;
    }
    if (posy > 460)
    {
        boundy = 460;
    }
    return boundy;
}

// 0x80132144
void gmCreditsHighlightProcRender(GObj *gobj)
{
    s32 unused;

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gDisplayListHead[0]++, G_COMBINE32_RGBA5551(GPACK_RGBA5551(0x80, 0x00, 0x00, 0x01)));
    gDPFillRectangle
    (
        gDisplayListHead[0]++,
        gmCreditsGetLockOnPosX((gCreditsHighlightSize * -30) + gCreditsHighlightPositionX),
        gmCreditsGetLockOnPosY((gCreditsHighlightSize * -25) + gCreditsHighlightPositionY),
        gmCreditsGetLockOnPosX(((gCreditsHighlightSize * -30) + 2) + gCreditsHighlightPositionX),
        gmCreditsGetLockOnPosY(((gCreditsHighlightSize * 45) + 2) + gCreditsHighlightPositionY)
    );
    gDPFillRectangle
    (
        gDisplayListHead[0]++,
        gmCreditsGetLockOnPosX((gCreditsHighlightSize * -30) + gCreditsHighlightPositionX),
        gmCreditsGetLockOnPosY((gCreditsHighlightSize * -25) + gCreditsHighlightPositionY),
        gmCreditsGetLockOnPosX(((gCreditsHighlightSize * 65) + 2) + gCreditsHighlightPositionX),
        gmCreditsGetLockOnPosY(((gCreditsHighlightSize * -25) + 2) + gCreditsHighlightPositionY)
    );
    gDPFillRectangle
    (
        gDisplayListHead[0]++,
        gmCreditsGetLockOnPosX((gCreditsHighlightSize * -30) + gCreditsHighlightPositionX),
        gmCreditsGetLockOnPosY((gCreditsHighlightSize * 25) + gCreditsHighlightPositionY),
        gmCreditsGetLockOnPosX(((gCreditsHighlightSize * 65) + 2) + gCreditsHighlightPositionX),
        gmCreditsGetLockOnPosY(((gCreditsHighlightSize * 45) + 2) + gCreditsHighlightPositionY)
    );
    gDPFillRectangle
    (
        gDisplayListHead[0]++,
        gmCreditsGetLockOnPosX((gCreditsHighlightSize * 65) + gCreditsHighlightPositionX),
        gmCreditsGetLockOnPosY((gCreditsHighlightSize * -25) + gCreditsHighlightPositionY),
        gmCreditsGetLockOnPosX(((gCreditsHighlightSize * 65) + 2) + gCreditsHighlightPositionX),
        gmCreditsGetLockOnPosY(((gCreditsHighlightSize * 45) + 2) + gCreditsHighlightPositionY)
    );
}

// 0x8013270C
void gmCreditsHighlightProcUpdate(GObj *gobj)
{
    s32 i;

    for (i = 0; i < 3; i++)
    {
        gCreditsHighlightSize = 6;

        while (gCreditsHighlightSize != 0)
        {
            gCreditsHighlightSize--;
            stop_current_process(1);
        }
    }
    omEjectGObjCommon(NULL);
    stop_current_process(1);
}

// 0x801327A4
void gmCreditsMakeHighlightGObj(GObj *gobj)
{
    GObj *highlight_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Highlight];
    s32 unused;
    SObj *sobj = SObjGetStruct(gCreditsCrosshairGObj);

    if (highlight_gobj == NULL)
    {
        highlight_gobj = omMakeGObjCommon(9, NULL, 9, 0x80000000);

        omAddGObjRenderProc(highlight_gobj, gmCreditsHighlightProcRender, 8, 0x80000000, -1);
        omAddGObjCommonProc(highlight_gobj, gmCreditsHighlightProcUpdate, 0, 1);

        gCreditsHighlightPositionX = sobj->pos.x + 8.0F;
        gCreditsHighlightPositionY = sobj->pos.y + 20.0F;
    }
}

// 0x80132860
void func_ovl59_80132860(s32 *characters, s32 character_count)
{
    s32 i, j, k;
    s32 *cadd, *cbase = &dCreditsStaffRoleCharacters[0];

    for (i = 0; i < ARRAY_COUNT(dCreditsStaffRoleTextInfo); i++)
    {
        for (cadd = cbase, j = 0, k = 0; j < dCreditsStaffRoleTextInfo[i].character_count; j++, cbase++)
        {
            if (*cbase == characters[k])
            {
                if (k == 0)
                {
                    cadd = cbase;
                }
                k++;
            }
            else k = 0;

            if (k == character_count)
            {
                while (k != 0)
                {
                    *cadd++ = GMCREDITS_CHARACTER_QMARK('?');

                    k--;

                    continue;
                }
                cadd = cbase;
                k = 0;
            }
        }
    }
}

// 0x80132958
void func_ovl59_80132958(void)
{
    s32 unused[5];
    s32 luigi[ARRAY_COUNT(dCreditsTextLuigi)] = dCreditsTextLuigi;
    s32 purin[ARRAY_COUNT(dCreditsTextJigglypuff)] = dCreditsTextJigglypuff;
    s32 captain[ARRAY_COUNT(dCreditsTextCFalcon)] = dCreditsTextCFalcon;
    s32 ness[ARRAY_COUNT(dCreditsTextNess)] = dCreditsTextNess;
    s32 earthbound[ARRAY_COUNT(dCreditsTextEarthBound)] = dCreditsTextEarthBound;
    s32 fzero[ARRAY_COUNT(dCreditsTextFZero)] = dCreditsTextFZero;
    s32 classicmario[ARRAY_COUNT(dCreditsTextClassicMario)] = dCreditsTextClassicMario;

    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_LUIGI))
    {
        func_ovl59_80132860(luigi, ARRAY_COUNT(luigi));
    }
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_PURIN))
    {
        func_ovl59_80132860(purin, ARRAY_COUNT(purin));
    }
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_CAPTAIN))
    {
        func_ovl59_80132860(captain, ARRAY_COUNT(captain));
        func_ovl59_80132860(fzero, ARRAY_COUNT(fzero));
    }
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_NESS))
    {
        func_ovl59_80132860(ness, ARRAY_COUNT(ness));
        func_ovl59_80132860(earthbound, ARRAY_COUNT(earthbound));
    }
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_INISHIE))
    {
        func_ovl59_80132860(classicmario, ARRAY_COUNT(classicmario));
    }
}

// 0x80132BB8
void gmCreditsMakeStaffRoleTextSObjs(GObj *text_gobj, GObj *staff_gobj)
{
    s32 character_id;
    SObj *sobj;
    s32 i;
    f32 hvar;
    s32 character_count;
    f32 wbase;
    f32 hbase;
    gmCreditsStaff *staff = staff_gobj->user_data.p;

    wbase = 350.0F;
    hbase = 40.0F;

    character_count = dCreditsStaffRoleTextInfo[staff->staff_id].character_count;

    for (i = 0, character_id = dCreditsStaffRoleTextInfo[staff->staff_id].character_start; i < character_count; i++, character_id++)
    {
        if ((dCreditsStaffRoleCharacters[character_id] != GMCREDITS_HEX_TO_LETTER(' ')) && (dCreditsStaffRoleCharacters[character_id] != GMCREDITS_HEX_TO_LETTER('\n')))
        {
            hvar = 0.0F;

            sobj = gcAppendSObjWithSprite(text_gobj, spGetSpriteFromFile(D_ovl59_8013AA10, D_ovl59_8013A348[dCreditsStaffRoleCharacters[character_id]].offset));

            sobj->sprite.attr = SP_TRANSPARENT;

            sobj->sprite.red   = 0xB7;
            sobj->sprite.green = 0xBC;
            sobj->sprite.blue  = 0xEC;

            sobj->pos.x = wbase;

            sobj->sprite.scalex = sobj->sprite.scaley = 1;

            if (dCreditsStaffRoleCharacters[character_id] >= GMCREDITS_HEX_TO_LETTER('a'))
            {
                hvar = 3.0F;

                if
                (
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('b')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('d')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('f')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('h')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('i')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('k')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('l')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('t')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_CHARACTER_COLON(':')     ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('9')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('8')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('7')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('6')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('5')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('4')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('3')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('2')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('1')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('0')       ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_CHARACTER_AMPERS('&')    ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_CHARACTER_QMARK('?')     ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_CHARACTER_EACCENT('é')   ||
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_CHARACTER_QUOTE('"')
                )
                {
                    hvar = 1.0F;
                }
            }
            if (dCreditsStaffRoleCharacters[character_id] == GMCREDITS_CHARACTER_PERIOD('.'))
            {
                hvar += 6.0F;
            }
            if (dCreditsStaffRoleCharacters[character_id] == GMCREDITS_CHARACTER_DASH('-'))
            {
                hvar += 2.0F;
            }
            if (dCreditsStaffRoleCharacters[character_id] == GMCREDITS_CHARACTER_COMMA(','))
            {
                hvar += 7.0F;
            }
            sobj->pos.y = hbase + hvar;

            wbase += D_ovl59_8013A348[dCreditsStaffRoleCharacters[character_id]].width;
        }
        else if (dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_LETTER(' '))
        {
            wbase += 3.0F;
        }
        else
        {
            wbase = 350.0F;
            hbase += 20.0F;
        }
    }
}

// 0x80132E74
void gmCreditsMakeStaffRoleTextGObj(GObj *staff_gobj)
{
    GObj *text_gobj;

    if (gOMObjCommonLinks[10] != NULL)
    {
        omEjectGObjCommon(gOMObjCommonLinks[10]);
    }
    text_gobj = omMakeGObjCommon(6, NULL, 0xA, 0x80000000);

    omAddGObjRenderProc(text_gobj, func_ovl0_800CCF00, 5, 0x80000000, -1);

    gCreditsStaffRoleTextGObj = text_gobj;

    gmCreditsMakeStaffRoleTextSObjs(text_gobj, staff_gobj);
}

// 0x80132EF0
void gmCreditsMakeCompanyTextSObjs(GObj *text_gobj, GObj *staff_gobj)
{
    SObj *sobj;
    f32 hvar;
    f32 wbase;
    s32 character_id;
    s32 character_count;
    gmCreditsStaff *staff = staff_gobj->user_data.p;
    s32 i;

    if (dCreditsCompanyIDs[staff->staff_id] != -1)
    {
        wbase = 350.0F;

        character_count = dCreditsCompanyTextInfo[dCreditsCompanyIDs[staff->staff_id]].character_count;
        character_id = dCreditsCompanyTextInfo[dCreditsCompanyIDs[staff->staff_id]].character_start;

        for (i = 0; i < character_count; i++, character_id++)
        {
            if (dCreditsCompanyCharacters[character_id] != GMCREDITS_HEX_TO_LETTER(' '))
            {
                sobj = gcAppendSObjWithSprite(text_gobj, spGetSpriteFromFile(D_ovl59_8013AA10, D_ovl59_8013A348[dCreditsCompanyCharacters[character_id]].offset));

                hvar = 0.0F;

                sobj->sprite.attr = SP_TRANSPARENT;

                sobj->sprite.scalex = sobj->sprite.scaley = 1;

                sobj->sprite.red   = 0x80;
                sobj->sprite.green = 0x40;
                sobj->sprite.blue  = 0x80;

                sobj->pos.x = wbase;

                if (dCreditsCompanyCharacters[character_id] >= GMCREDITS_HEX_TO_LETTER('a'))
                {
                    hvar = 3.0F;

                    if
                    (
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('b')) ||
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('d')) ||
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('f')) ||
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('h')) ||
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('i')) ||
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('j')) ||
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('k')) ||
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('l')) ||
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('t')) ||
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_CHARACTER_COLON(':')) ||
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_CHARACTER_AMPERS('&')) ||
                        (dCreditsCompanyCharacters[character_id] == GMCREDITS_CHARACTER_QUOTE('"'))
                    )
                    {
                        hvar = 1.0F;
                    }
                }
                if ((dCreditsCompanyCharacters[character_id] == GMCREDITS_CHARACTER_OBRACKET('(')) || (dCreditsCompanyCharacters[character_id] == GMCREDITS_CHARACTER_OBRACKET(')')))
                {
                    hvar = 0.0F;
                }
                if (dCreditsCompanyCharacters[character_id] == GMCREDITS_CHARACTER_PERIOD('.'))
                {
                    hvar += 6.0F;
                }
                if (dCreditsCompanyCharacters[character_id] == GMCREDITS_CHARACTER_DASH('-'))
                {
                    hvar += 2.0F;
                }
                if (dCreditsCompanyCharacters[character_id] == GMCREDITS_CHARACTER_COMMA(','))
                {
                    hvar += 7.0F;
                }
                sobj->pos.y = 140.0F + hvar;

                wbase += D_ovl59_8013A348[dCreditsCompanyCharacters[character_id]].width;
            }
            else wbase += 3.0F;
        }
    }
    if (text_gobj); // idk just take it
}

// 0x80133184
void gmCreditsMakeCompanyTextGObj(GObj *staff_gobj)
{
    GObj *text_gobj;

    if (gOMObjCommonLinks[11] != NULL)
    {
        omEjectGObjCommon(gOMObjCommonLinks[11]);
    }
    text_gobj = omMakeGObjCommon(7, NULL, 0xB, 0x80000000);

    omAddGObjRenderProc(text_gobj, func_ovl0_800CCF00, 6, 0x80000000, -1);

    gCreditsCompanyTextGObj = text_gobj;

    gmCreditsMakeCompanyTextSObjs(text_gobj, staff_gobj);
}

// 0x80133200
sb32 gmCreditsCheckCursorHighlightPrompt(GObj *gobj, f32 *f)
{
    sb32 b;
    s32 unused;
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f sp34;
    Vec3f sp28;

    b = TRUE;

    func_ovl59_80131E70(&sp4C, f[12], f[13], f[16], f[17]);
    func_ovl59_80131E70(&sp40, f[14], f[15], f[18], f[19]);
    func_ovl59_80131E70(&sp34, f[12], f[13], f[14], f[15]);
    func_ovl59_80131E70(&sp28, f[16], f[17], f[18], f[19]);

    if 
    (
        (gmCreditsCheckCursorNameOverlap(&sp4C) == FALSE) && 
        (gmCreditsCheckCursorNameOverlap(&sp40) != FALSE) && 
        (gmCreditsCheckCursorNameOverlap(&sp34) != FALSE) && 
        (gmCreditsCheckCursorNameOverlap(&sp28) == FALSE)
    )
    {
        func_800269C0(alSound_SFX_TModeSel);

        b = FALSE;

        func_ovl59_8013202C(gobj);
        gmCreditsMakeHighlightGObj(gobj);
        gmCreditsMakeStaffRoleTextGObj(gobj);
        gmCreditsMakeCompanyTextGObj(gobj);
    }
    return b;
}

// 0x8013330C
void func_ovl59_8013330C(void)
{
    GObj *gobj;
    DObj *dobj;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    Vec3f sp6C;
    Vec3f sp60;
    Vec3f sp54;
    Vec3f sp48;
    sb32 b;

    func_ovl59_80131C88(D_ovl59_8013A8E4);

    gobj = gOMObjCommonLinks[3];

    if (gobj != NULL)
    {
        do
        {
            dobj = DObjGetStruct(gobj);

            func_ovl59_80131DD0(gobj, &sp48);
            func_ovl59_80131D30(dobj, &sp48, &sp78, &sp7C);
            func_ovl59_80131D30(dobj, &sp54, &sp80, &sp84);
            func_ovl59_80131D30(dobj, &sp60, &sp88, &sp8C);
            func_ovl59_80131D30(dobj, &sp6C, &sp90, &sp94);

            b = gmCreditsCheckCursorHighlightPrompt(gobj, &sp48);

            gobj = gobj->group_gobj_next;
        } 
        while ((gobj != NULL) && (b != FALSE));
    }
}

// 0x8013341C
sb32 gmCreditsCheckPause(void)
{
    GObj *gobj;
    u16 button_new = gPlayerControllers[gCreditsPlayer].button_new;
    sb32 b = FALSE;

    if (button_new & (A_BUTTON | B_BUTTON))
    {
        func_ovl59_8013330C();

        if (button_new & B_BUTTON)
        {
            if (D_ovl59_8013A8C8 != NULL)
            {
                func_8000B284(D_ovl59_8013A8C8);
            }
            gobj = gOMObjCommonLinks[3];

            while (gobj != NULL)
            {
                func_8000B284(gobj);

                gobj = gobj->group_gobj_next;
            }
            gobj = gOMObjCommonLinks[4];

            while (gobj != NULL)
            {
                func_8000B284(gobj);

                gobj = gobj->group_gobj_next;
            }
            b = TRUE;
        }
    }
    return b;
}

// 0x801334E4
void func_ovl59_801334E4(GObj *gobj)
{
    sb32 is_paused;
    u16 button_new;

    if ((gCreditsRollEndWait == 0) || (gCreditsStatus != -1) && (gCreditsStatus != -2))
    {
        button_new = gPlayerControllers[gCreditsPlayer].button_new;

        if (gCreditsStatus == 1)
        {
            if (gCreditsRollBeginWait < 120)
            {
                gCreditsRollBeginWait++;
            }
            else
            {
                func_ovl59_801346B4();
                func_ovl59_801347F4();
                gCreditsStatus = 0;
            }
        }
        is_paused = gCreditsIsPaused;

        if (gCreditsIsPaused == FALSE)
        {
            is_paused = gmCreditsCheckPause();
        }
        if (gCreditsIsPaused == TRUE)
        {
            is_paused = gmCreditsCheckUnpause();
        }
        gCreditsIsPaused = is_paused;

        if (button_new & START_BUTTON)
        {
            if (gCreditsRollSpeed == 0.0037500001F)
            {
                gCreditsRollSpeed = 0.049999997F;
            }
            else gCreditsRollSpeed = 0.0037500001F;
        }
    }
}

// 0x80133618
gmCreditsName* gmCreditsNameUpdateAlloc(GObj *gobj)
{
    gmCreditsName *cn;

    if (gCreditsNameAllocFree == NULL)
    {
        cn = hal_alloc(sizeof(gmCreditsName), 0x4);
    }
    else
    {
        cn = gCreditsNameAllocFree;
        gCreditsNameAllocFree = cn->next;
    }
    cn->offset_x = cn->unkgmcreditsstruct0x10 = cn->interpolation = cn->status = 0;

    gobj->user_data.p = cn;

    return cn;
}

// 0x80133684
void gmCreditsNameSetPrevAlloc(gmCreditsName *cn)
{
    cn->next = gCreditsNameAllocFree;
    gCreditsNameAllocFree = cn;
}

// 0x8013369C
void func_ovl59_8013369C(GObj *gobj)
{
    gmCreditsName *cn;
    Vec3f pos;
    DObj *dobj;
    s32 unused[3];

    cn = gobj->user_data.p;
    dobj = gobj->obj;

    cn->interpolation = 0.0F;

    gobj->obj_renderflags = GOBJ_RENDERFLAG_HIDDEN;

    while (gCreditsStatus != 0)
    {
        stop_current_process(1);
    }
    gobj->obj_renderflags = GOBJ_RENDERFLAG_NONE;

    while (cn->interpolation != 1.0F)
    {
        omAddDObjAnimAll(dobj, gCreditsNameATrack, cn->interpolation * 99.0F);

        hal_interpolation_cubic(&pos, gCreditsNameInterpolation, cn->interpolation);

        dobj->translate.vec.f.x = pos.x + cn->offset_x;
        dobj->translate.vec.f.y = pos.y + 12.0F;
        dobj->translate.vec.f.z = pos.z;

        cn->interpolation += gCreditsRollSpeed;

        if (cn->interpolation > 1.0F)
        {
            cn->interpolation = 1.0F;
        }
        func_8000DF34(gobj);
        stop_current_process(1);
    }
    if (cn->status == -1)
    {
        gCreditsStatus = -1;
    }
    gmCreditsNameSetPrevAlloc(cn);
    omEjectGObjCommon(NULL);
    stop_current_process(1);
}

// 0x80133854
void func_ovl59_80133854(GObj *gobj)
{
    if (gobj == gOMObjCommonLinks[omGObj_LinkIndex_CreditsJob])
    {
        gSPTexture(gDisplayListHead[0]++, 0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON);
        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
        gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);
        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x7F, 0x7F, 0x89, 0xFF);
        gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0);
    }
    func_80014038(gobj);
}

// 0x80133930
void func_ovl59_80133930(GObj *gobj)
{
    if (gobj == gOMObjCommonLinks[omGObj_LinkIndex_CreditsName])
    {
        gSPTexture(gDisplayListHead[0]++, 0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON);
        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
        gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);
        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x88, 0x93, 0xFF, 0xFF);
        gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0);
    }
    func_80014038(gobj);
}

// 0x80133A0C
void func_ovl59_80133A0C(GObj *gobj, DObj *first_dobj, DObj *second_dobj, sb32 job_or_name)
{
    gmCreditsName *cn = gmCreditsNameUpdateAlloc(gobj);

    cn->offset_x = (first_dobj->translate.vec.f.x - second_dobj->translate.vec.f.x) * 0.5F;

    cn->unkgmcreditsstruct0x10 = 26.0F;

    cn->name_id = gCreditsNameID;
    cn->job_or_name = job_or_name;
}
