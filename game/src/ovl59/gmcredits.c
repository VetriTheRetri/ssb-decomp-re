#include <gm/battle.h>
#include <gm/gmsound.h>
#include <sys/thread6.h>
#include <sys/obj_renderer.h>
#include <ovl0/reloc_data_mgr.h>

// MACROS

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

// EXTERN

extern uintptr_t D_NF_800A5240;
extern uintptr_t lCreditsArenaLo;           // 0x8013AA60
extern uintptr_t D_NF_80392A00;             // 0x80392A00
extern intptr_t lCreditsInterpolation;      // 0x00007304
extern intptr_t lCreditsATrack;             // 0x00007338
extern intptr_t lCreditsDObjDesc;           // 0x000078C0
extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;
extern intptr_t lCreditsCrosshairSprite;    // 0x00006D58
extern intptr_t lCreditsTextBoxBracketLeft; // 0x00006F98
extern intptr_t lCreditsTextBoxBracketRight;// 0x000071D8

// GLOBALS

// 0x8013A7D8
Gfx *gCreditsNameAndJobDisplayLists[56];

// 0x8013A8B8
s32 gCreditsNameID;

// 0x8013A8BC
f32 gCreditsRollSpeed;

// 0x8013A8C0
s32 gCreditsStatus;

// 0x8013A8C4
gmCreditsName *gCreditsNameAllocFree;

// 0x8013A8C8
GObj *gCreditsStaffRollGObj;

// 0x8013A8CC
GObj *gCreditsCrosshairGObj;

// 0x8013A8D0
sb32 gCreditsIsPaused;

// 0x8013A8D4
f32 gCreditsCrosshairPositionX;

// 0x8013A8D8
f32 gCreditsCrosshairPositionY;

// 0x8013A8DC
ATrack *gCreditsNameATrack;

// 0x8013A8E0
void *gCreditsNameInterpolation;

// 0x8013A8E4
Camera *gCreditsCamera;

// 0x8013A8E8
void *gCreditsDObjDesc;

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

// 0x8013A910
rdFileNode gCreditsStatusBuf[32];

// 0x8013AA10
void *gCreditsFiles[1];

// 0x8013AA18
Mtx44f gCreditsMatrix;

// DATA

// 0x80135260
s32 dCreditsNameCharacters[/* */] = { #include "assets/credits/names.inc.c" };

// 0x801364F4
gmCreditsText dCreditsNameTextInfo[109];

// 0x8013679C
s32 dCreditsJobDescriptions[/* */] = { #include "assets/credits/jobdesc.inc.c" };

// 0x8013685C
s32 dCreditsJobCharacters[/* */] = { #include "assets/credits/jobs.inc.c" };

// 0x80136B10
gmCreditsText dCreditsJobTextInfo[18];

// 0x80136BA0 - Literally every character from credits roles all at once. Should convert from .txt into .inc.c
s32 dCreditsStaffRoleCharacters[/* */] = { #include "assets/credits/staffroles.inc.c" };

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

// 0x8013A184
u32 dCreditsFileIDs[/* */] = { 0xC3 };

// 0x8013A188
gmCreditsSprite dCreditsNameAndJobSpriteInfo[56] = { #include "assets/credits/nameandjobsprites.inc.c" };

// 0x8013A348
gmCreditsSprite dCreditsTextBoxSpriteInfo[/* */] = { #include "assets/credits/staffrolesprites.inc.c" };

// 0x8013A598
Gfx dCreditsTextBoxDisplayList[/* */] =
{
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_FILL),
    gsDPSetRenderMode(G_RM_NOOP, G_RM_NOOP2),
    gsDPSetFillColor(GCOMBINE32_RGBA5551(GPACK_RGBA5551(0x42, 0x3A, 0x31, 0x1))),
    gsDPFillRectangle(346, 35, 348, 164),
    gsDPFillRectangle(346, 35, 584,  37),
    gsDPFillRectangle(582, 35, 584, 164),
    gsDPFillRectangle(346, 162, 584, 164),
    gsSPEndDisplayList()
};

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

// 0x8013A6C8
Lights1 dCreditsLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 0x8013A6E0
Gfx dCreditsDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dCreditsLights1),
    gsSPEndDisplayList()
};

// 0x8013A708
scUnkDataBounds D_ovl59_8013A708;

// 0x8013A724
scRuntimeInfo D_ovl59_8013A724;

// 0x80131B00
sb32 gmCreditsCheckUnpause(void)
{
    sb32 var_v1 = TRUE;
    u16 button_new = gPlayerControllers[gCreditsPlayer].button_new;

    if (button_new & (A_BUTTON | B_BUTTON | Z_TRIG | START_BUTTON))
    {
        GObj *name_gobj;
        GObj *job_gobj;

        if (gCreditsStaffRollGObj != NULL)
        {
            func_8000B2B8(gCreditsStaffRollGObj);
        }
        name_gobj = gOMObjCommonLinks[GObj_LinkIndex_CreditsName];

        while (name_gobj != NULL)
        {
            func_8000B2B8(name_gobj);

            name_gobj = name_gobj->link_next;
        }
        job_gobj = gOMObjCommonLinks[GObj_LinkIndex_CreditsJob];

        while (job_gobj != NULL)
        {
            func_8000B2B8(job_gobj);
            job_gobj = job_gobj->link_next;
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
void func_ovl59_80131C88(Camera *cam)
{
    Mtx44f m, n;

    hlMtxPerspFastF(n, &cam->projection.persp.norm, cam->projection.persp.fovy, cam->projection.persp.aspect, cam->projection.persp.near, cam->projection.persp.far, cam->projection.persp.scale);
    hal_look_at_f(m, cam->vec.eye.x, cam->vec.eye.y, cam->vec.eye.z, cam->vec.at.x, cam->vec.at.y, cam->vec.at.z, cam->vec.up.x, cam->vec.up.y, cam->vec.up.z);
    guMtxCatF(m, n, gCreditsMatrix);
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
    guMtxCatF(m, gCreditsMatrix, r);
    func_ovl59_80131BB0(r, vec, width, height);
}

// 0x80131DD0
void func_ovl59_80131DD0(GObj *gobj, gmCreditsProjection *proj)
{
    gmCreditsMatrix *credits = gobj->user_data.p;

    proj->pv0.z = proj->pv1.z = proj->pv2.z = proj->pv3.z = 0.0F;
    proj->pv0.y = proj->pv2.y = 28.0F;

    proj->pv1.y = proj->pv3.y = -(credits->unk_gmcreditsmtx_0x10 + 4.0F);
    proj->pv0.x = proj->pv1.x = -22.0F;

    proj->pv2.x = proj->pv3.x = (ABS(credits->unk_gmcreditsmtx_0xC) * 2) + 18.0F;
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
    GObj *gobj = gOMObjCommonLinks[GObj_LinkIndex_02];
    GObj *ugobj = arg0->user_data.p;

    if (gobj == NULL)
    {
        gobj = omMakeGObjCommon(8, NULL, GObj_LinkIndex_02, 0x80000000);
        omAddGObjRenderProc(gobj, odRenderDObjTreeForGObj, 3, 0x80000000, -1);
        func_8000F590(gobj, gCreditsDObjDesc, NULL, 0x1C, 0, 0);
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
    gDPSetFillColor(gDisplayListHead[0]++, GCOMBINE32_RGBA5551(GPACK_RGBA5551(0x80, 0x00, 0x00, 0x01)));
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
        gmCreditsGetLockOnPosY((gCreditsHighlightSize * 45) + gCreditsHighlightPositionY),
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
            gsStopCurrentProcess(1);
        }
    }
    omEjectGObjCommon(NULL);
    gsStopCurrentProcess(1);
}

// 0x801327A4
void gmCreditsMakeHighlightGObj(GObj *gobj)
{
    GObj *highlight_gobj = gOMObjCommonLinks[GObj_LinkIndex_Highlight];
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
void gmCreditsSetTextQMarks(s32 *characters, s32 character_count)
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
        gmCreditsSetTextQMarks(luigi, ARRAY_COUNT(luigi));
    }
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_PURIN))
    {
        gmCreditsSetTextQMarks(purin, ARRAY_COUNT(purin));
    }
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_CAPTAIN))
    {
        gmCreditsSetTextQMarks(captain, ARRAY_COUNT(captain));
        gmCreditsSetTextQMarks(fzero, ARRAY_COUNT(fzero));
    }
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_NESS))
    {
        gmCreditsSetTextQMarks(ness, ARRAY_COUNT(ness));
        gmCreditsSetTextQMarks(earthbound, ARRAY_COUNT(earthbound));
    }
    if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_INISHIE))
    {
        gmCreditsSetTextQMarks(classicmario, ARRAY_COUNT(classicmario));
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
    gmCreditsName *staff = staff_gobj->user_data.p;

    wbase = 350.0F;
    hbase = 40.0F;

    character_count = dCreditsStaffRoleTextInfo[staff->name_id].character_count;

    for (i = 0, character_id = dCreditsStaffRoleTextInfo[staff->name_id].character_start; i < character_count; i++, character_id++)
    {
        if ((dCreditsStaffRoleCharacters[character_id] != GMCREDITS_HEX_TO_LETTER(' ')) && (dCreditsStaffRoleCharacters[character_id] != GMCREDITS_HEX_TO_LETTER('\n')))
        {
            hvar = 0.0F;

            sobj = gcAppendSObjWithSprite(text_gobj, spGetSpriteFromFile(gCreditsFiles[0], dCreditsTextBoxSpriteInfo[dCreditsStaffRoleCharacters[character_id]].offset));

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
                    dCreditsStaffRoleCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('j')       ||
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

            wbase += dCreditsTextBoxSpriteInfo[dCreditsStaffRoleCharacters[character_id]].width;
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
    gmCreditsName *staff = staff_gobj->user_data.p;
    s32 i;

    if (dCreditsCompanyIDs[staff->name_id] != -1)
    {
        wbase = 350.0F;

        character_count = dCreditsCompanyTextInfo[dCreditsCompanyIDs[staff->name_id]].character_count;
        character_id = dCreditsCompanyTextInfo[dCreditsCompanyIDs[staff->name_id]].character_start;

        for (i = 0; i < character_count; i++, character_id++)
        {
            if (dCreditsCompanyCharacters[character_id] != GMCREDITS_HEX_TO_LETTER(' '))
            {
                sobj = gcAppendSObjWithSprite(text_gobj, spGetSpriteFromFile(gCreditsFiles[0], dCreditsTextBoxSpriteInfo[dCreditsCompanyCharacters[character_id]].offset));

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
                if ((dCreditsCompanyCharacters[character_id] == GMCREDITS_CHARACTER_OBRACKET('(')) || (dCreditsCompanyCharacters[character_id] == GMCREDITS_CHARACTER_CBRACKET(')')))
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

                wbase += dCreditsTextBoxSpriteInfo[dCreditsCompanyCharacters[character_id]].width;
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
sb32 gmCreditsCheckCursorHighlightPrompt(GObj *gobj, gmCreditsProjection *proj)
{
    sb32 b;
    s32 unused;
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f sp34;
    Vec3f sp28;

    b = TRUE;

    func_ovl59_80131E70(&sp4C, proj->px0, proj->py0, proj->px2, proj->py2);
    func_ovl59_80131E70(&sp40, proj->px1, proj->py1, proj->px3, proj->py3);
    func_ovl59_80131E70(&sp34, proj->px0, proj->py0, proj->px1, proj->py1);
    func_ovl59_80131E70(&sp28, proj->px2, proj->py2, proj->px3, proj->py3);

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
    gmCreditsProjection proj;
    sb32 b;

    func_ovl59_80131C88(gCreditsCamera);

    gobj = gOMObjCommonLinks[GObj_LinkIndex_CreditsName];

    if (gobj != NULL)
    {
        do
        {
            dobj = DObjGetStruct(gobj);

            func_ovl59_80131DD0(gobj, &proj);
            func_ovl59_80131D30(dobj, &proj.pv0, &proj.px0, &proj.py0);
            func_ovl59_80131D30(dobj, &proj.pv1, &proj.px1, &proj.py1);
            func_ovl59_80131D30(dobj, &proj.pv2, &proj.px2, &proj.py2);
            func_ovl59_80131D30(dobj, &proj.pv3, &proj.px3, &proj.py3);

            b = gmCreditsCheckCursorHighlightPrompt(gobj, &proj);

            gobj = gobj->link_next;
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
            if (gCreditsStaffRollGObj != NULL)
            {
                func_8000B284(gCreditsStaffRollGObj);
            }
            gobj = gOMObjCommonLinks[GObj_LinkIndex_CreditsName];

            while (gobj != NULL)
            {
                func_8000B284(gobj);

                gobj = gobj->link_next;
            }
            gobj = gOMObjCommonLinks[GObj_LinkIndex_CreditsJob];

            while (gobj != NULL)
            {
                func_8000B284(gobj);

                gobj = gobj->link_next;
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
                gmCreditsMakeTextBoxBracketSObjs();
                gmCreditsMakeTextBoxGObj();
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
        cn = hlMemoryAlloc(sizeof(gmCreditsName), 0x4);
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
void gmCreditsJobAndNameProcUpdate(GObj *gobj)
{
    gmCreditsName *cn;
    Vec3f pos;
    DObj *dobj;
    s32 unused[3];

    cn = gobj->user_data.p;
    dobj = gobj->obj;

    cn->interpolation = 0.0F;

    gobj->flags = GOBJ_FLAG_NORENDER;

    while (gCreditsStatus != 0)
    {
        gsStopCurrentProcess(1);
    }
    gobj->flags = GOBJ_FLAG_NONE;

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
        gsStopCurrentProcess(1);
    }
    if (cn->status == -1)
    {
        gCreditsStatus = -1;
    }
    gmCreditsNameSetPrevAlloc(cn);
    omEjectGObjCommon(NULL);
    gsStopCurrentProcess(1);
}

// 0x80133854
void gmCreditsJobProcRender(GObj *gobj)
{
    if (gobj == gOMObjCommonLinks[GObj_LinkIndex_CreditsJob])
    {
        gSPTexture(gDisplayListHead[0]++, 0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON);
        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
        gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);
        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x7F, 0x7F, 0x89, 0xFF);
        gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0);
    }
    odRenderDObjTreeForGObj(gobj);
}

// 0x80133930
void gmCreditsNameProcRender(GObj *gobj)
{
    if (gobj == gOMObjCommonLinks[GObj_LinkIndex_CreditsName])
    {
        gSPTexture(gDisplayListHead[0]++, 0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON);
        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
        gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);
        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x88, 0x93, 0xFF, 0xFF);
        gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0);
    }
    odRenderDObjTreeForGObj(gobj);
}

// 0x80133A0C
void gmCreditsJobAndNameInitStruct(GObj *gobj, DObj *first_dobj, DObj *second_dobj, sb32 job_or_name)
{
    gmCreditsName *cn = gmCreditsNameUpdateAlloc(gobj);

    cn->offset_x = (first_dobj->translate.vec.f.x - second_dobj->translate.vec.f.x) * 0.5F;

    cn->unkgmcreditsstruct0x10 = 26.0F;

    cn->name_id = gCreditsNameID;
    cn->job_or_name = job_or_name;
}

// 0x80133A78
gmCreditsSetup* gmCreditsMakeJobDObjs(gmCreditsSetup *name_setup, DObj *dobj, s32 name_id, f32 wbase)
{
    gmCreditsSetup local_setup;
    DObj *new_dobj;
    f32 width;
    f32 height;
    s32 job_character_id;
    s32 character_id;
    s32 i;

    for
    (
        i = 0, character_id = dCreditsJobTextInfo[name_id].character_start, job_character_id = -1;
        i < dCreditsJobTextInfo[name_id].character_count;
        job_character_id = character_id, i++, character_id++
    )
    {
        if (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER(' '))
        {
            wbase += 16.0F;

            continue;
        }
        else
        {
            Gfx *dl = gCreditsNameAndJobDisplayLists[dCreditsJobCharacters[character_id]];

            width = dCreditsNameAndJobSpriteInfo[dCreditsJobCharacters[character_id]].width;
            height = dCreditsNameAndJobSpriteInfo[dCreditsJobCharacters[character_id]].height;

            new_dobj = omAddChildForDObj(dobj, dl);

            omAddOMMtxForDObjFixed(new_dobj, 0x12, 1);

            if (job_character_id != -1)
            {
                if
                (
                    (
                        (dCreditsJobCharacters[job_character_id] == GMCREDITS_HEX_TO_LETTER('K')) ||
                        (dCreditsJobCharacters[job_character_id] == GMCREDITS_HEX_TO_LETTER('T')) ||
                        (dCreditsJobCharacters[job_character_id] == GMCREDITS_HEX_TO_LETTER('V')) ||
                        (dCreditsJobCharacters[job_character_id] == GMCREDITS_HEX_TO_LETTER('W')) ||
                        (dCreditsJobCharacters[job_character_id] == GMCREDITS_HEX_TO_LETTER('Y'))
                    )
                    &&
                    (
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('a')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('c')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('e')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('g')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('m')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('n')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('o')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('p')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('q')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('r')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('s')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('u')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('v')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('w')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('x')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('y')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('z'))
                    )
                )
                {
                    wbase -= 6.0F;
                }
                else if
                (
                    (
                        (dCreditsJobCharacters[job_character_id] == GMCREDITS_HEX_TO_LETTER('k')) ||
                        (dCreditsJobCharacters[job_character_id] == GMCREDITS_HEX_TO_LETTER('r')) ||
                        (dCreditsJobCharacters[job_character_id] == GMCREDITS_HEX_TO_LETTER('y'))
                    )
                    &&
                    (
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('a')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('e')) ||
                        (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('o'))
                    )
                )
                {
                    wbase -= 6.0F;
                }
                else if ((dCreditsJobCharacters[job_character_id] == GMCREDITS_HEX_TO_LETTER('o')) && (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('s')))
                {
                    wbase -= 4.0F;
                }
                else if ((dCreditsJobCharacters[job_character_id] == GMCREDITS_HEX_TO_LETTER('S')) && (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('u')))
                {
                    wbase -= 4.0F;
                }
            }
            new_dobj->translate.vec.f.x = wbase + width;
            new_dobj->translate.vec.f.y = height - 22.0F;

            wbase = new_dobj->translate.vec.f.x + width;

            if (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('z'))
            {
                new_dobj->translate.vec.f.y += 1.0F;
            }
            if (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('j'))
            {
                new_dobj->translate.vec.f.y = 22.0F - height;
            }
            if (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('8'))
            {
                new_dobj->translate.vec.f.y += 22.0F;
            }
            if
            (
                (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('g')) ||
                (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('p')) ||
                (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('q')) ||
                (dCreditsJobCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('y'))
            )
            {
                new_dobj->translate.vec.f.y = -8.0F;
            }
        }
    }
    local_setup.spacing = wbase;
    local_setup.dobj = new_dobj;

    *name_setup = local_setup;

    return name_setup;
}

// 0x80133E68
GObj* gmCreditsMakeJobGObj(gmCreditsJob *job)
{
    gmCreditsSetup job_setup;
    s32 unused;
    GObj *gobj;
    DObj *dobj;
    f32 wbase;

    wbase = 0.0F;

    gobj = omMakeGObjCommon(1, NULL, GObj_LinkIndex_CreditsJob, 0x80000000);

    omAddGObjRenderProc(gobj, gmCreditsJobProcRender, 2, 0x80000000, -1);

    dobj = omAddDObjForGObj(gobj, NULL);

    omAddOMMtxForDObjFixed(dobj, 0x1C, 0);

    if (job->prefix_id != -1)
    {
        gmCreditsMakeJobDObjs(&job_setup, dobj, job->prefix_id, 0.0F);
        wbase = 16.0F + job_setup.spacing;
    }
    gmCreditsMakeJobDObjs(&job_setup, dobj, job->job_id, wbase);
    gmCreditsJobAndNameInitStruct(gobj, dobj, job_setup.dobj, 0);
    omAddGObjCommonProc(gobj, gmCreditsJobAndNameProcUpdate, 0, 1);

    return gobj;
}

// 0x80133F68
GObj* gmCreditsMakeNameGObjAndDObjs(void)
{
    s32 unused;
    GObj *gobj;
    Gfx *dl;
    DObj *dobj;
    DObj *new_dobj;
    f32 width;
    f32 wbase;
    f32 height;
    s32 name_character_id;
    s32 character_id;
    s32 i;

    name_character_id = -1;

    gobj = omMakeGObjCommon(1, NULL, GObj_LinkIndex_CreditsName, 0x80000000);

    omAddGObjRenderProc(gobj, gmCreditsNameProcRender, 1, 0x80000000, -1);

    new_dobj = dobj = omAddDObjForGObj(gobj, NULL);

    omAddOMMtxForDObjFixed(dobj, 0x1C, 0);

    wbase = 0.0F;

    for
    (
        i = 0, character_id = dCreditsNameTextInfo[gCreditsNameID].character_start;
        i < dCreditsNameTextInfo[gCreditsNameID].character_count;
        name_character_id = character_id, i++, character_id++
    )
    {
        if (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER(' '))
        {
            wbase += 16.0F;

            continue;
        }
        else
        {
            dl = gCreditsNameAndJobDisplayLists[dCreditsNameCharacters[character_id]];

            width = dCreditsNameAndJobSpriteInfo[dCreditsNameCharacters[character_id]].width;
            height = dCreditsNameAndJobSpriteInfo[dCreditsNameCharacters[character_id]].height;

            new_dobj = omAddChildForDObj(dobj, dl);

            omAddOMMtxForDObjFixed(new_dobj, 0x12, 1);

            if (name_character_id != -1)
            {
                if
                (
                    (
                        (dCreditsNameCharacters[name_character_id] == GMCREDITS_HEX_TO_LETTER('K')) ||
                        (dCreditsNameCharacters[name_character_id] == GMCREDITS_HEX_TO_LETTER('T')) ||
                        (dCreditsNameCharacters[name_character_id] == GMCREDITS_HEX_TO_LETTER('V')) ||
                        (dCreditsNameCharacters[name_character_id] == GMCREDITS_HEX_TO_LETTER('W')) ||
                        (dCreditsNameCharacters[name_character_id] == GMCREDITS_HEX_TO_LETTER('Y'))
                    )
                    &&
                    (
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('a')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('c')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('e')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('g')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('m')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('n')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('o')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('p')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('q')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('r')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('s')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('u')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('v')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('w')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('x')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('y')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('z'))
                    )
                )
                {
                    wbase -= 6.0F;
                }
                else if
                (
                    (
                        (dCreditsNameCharacters[name_character_id] == GMCREDITS_HEX_TO_LETTER('k')) ||
                        (dCreditsNameCharacters[name_character_id] == GMCREDITS_HEX_TO_LETTER('r')) ||
                        (dCreditsNameCharacters[name_character_id] == GMCREDITS_HEX_TO_LETTER('y'))
                    )
                    &&
                    (
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('a')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('e')) ||
                        (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('o'))
                    )
                )
                {
                    wbase -= 6.0F;
                }
                else if ((dCreditsNameCharacters[name_character_id] == GMCREDITS_HEX_TO_LETTER('o')) && (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('s')))
                {
                    wbase -= 4.0F;
                }
                else if ((dCreditsNameCharacters[name_character_id] == GMCREDITS_HEX_TO_LETTER('S')) && (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('u')))
                {
                    wbase -= 4.0F;
                }
            }
            new_dobj->translate.vec.f.x = wbase + width;
            new_dobj->translate.vec.f.y = height - 22.0F;

            wbase = new_dobj->translate.vec.f.x + width;

            if (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('z'))
            {
                new_dobj->translate.vec.f.y += 1.0F;
            }
            if (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('j'))
            {
                new_dobj->translate.vec.f.y = 22.0F - height;
            }
            if
            (
                (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('g')) ||
                (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('p')) ||
                (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('q')) ||
                (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_LETTER('y'))
            )
            {
                new_dobj->translate.vec.f.y = -8.0F;
            }
            if (dCreditsNameCharacters[character_id] == GMCREDITS_HEX_TO_NUMBER('9'))
            {
                new_dobj->translate.vec.f.y -= 4.0F;
            }
        }

    }
    gmCreditsJobAndNameInitStruct(gobj, dobj, new_dobj, 1);
    omAddGObjCommonProc(gobj, gmCreditsJobAndNameProcUpdate, 0, 1);

    return gobj;
}

// 0x801343AC
void gmCreditsCrosshairProcUpdate(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(gobj);
    s32 crosshair_center_wait = 19;

    sobj->pos.x = 291.0F;
    sobj->pos.y = 0.0F;

    do
    {
        sobj->pos.y += 10.5F;

        gsStopCurrentProcess(1);
    } 
    while (crosshair_center_wait--);

    gCreditsStatus = 1;

    while (TRUE)
    {
        s32 stick_x = gPlayerControllers[gCreditsPlayer].stick_range.x;
        s32 stick_y = gPlayerControllers[gCreditsPlayer].stick_range.y;

        f32 base_x = sobj->pos.x;
        f32 base_y = sobj->pos.y;

        sobj->pos.x += (ABS(stick_x) > 16) ? stick_x * 0.125F : 0.0F;
        sobj->pos.y -= (ABS(stick_y) > 16) ? stick_y * 0.125F : 0.0F;

        sobj->pos.x = (sobj->pos.x < 32.0F) ? 32.0F : (sobj->pos.x > 540.0F) ? 540.0F : sobj->pos.x;
        sobj->pos.y = (sobj->pos.y < 36.0F) ? 36.0F : (sobj->pos.y > 400.0F) ? 400.0F : sobj->pos.y;

        gCreditsCrosshairPositionX = sobj->pos.x - base_x;
        gCreditsCrosshairPositionY = sobj->pos.y - base_y;

        gsStopCurrentProcess(1);
    }
}

// 0x801345FC
void gmCreditsMakeCrosshairGObj(void)
{
    GObj *gobj;
    SObj *sobj;

    gobj = omMakeGObjCommon(3, NULL, 6, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 4, 0x80000000, -1);

    omAddGObjCommonProc(gobj, gmCreditsCrosshairProcUpdate, 0, 1);

    sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gCreditsFiles[0], &lCreditsCrosshairSprite));

    gCreditsCrosshairGObj = gobj;

    sobj->sprite.attr = SP_TRANSPARENT;

    sobj->sprite.red   = 0xFF;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue  = 0x00;

    sobj->sprite.scalex = 2.0F;
    sobj->sprite.scaley = 2.0F;
}

// 0x801346B4
void gmCreditsMakeTextBoxBracketSObjs(void)
{
    GObj *gobj;
    SObj *left_sobj;
    SObj *right_sobj;

    gobj = omMakeGObjCommon(3, NULL, 8, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 7, 0x80000000, -1);

    left_sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gCreditsFiles[0], &lCreditsTextBoxBracketLeft));

    gobj = omMakeGObjCommon(3, NULL, 8, 0x80000000);

    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 7, 0x80000000, -1);

    right_sobj = gcAppendSObjWithSprite(gobj, spGetSpriteFromFile(gCreditsFiles[0], &lCreditsTextBoxBracketRight));

    left_sobj->sprite.attr = right_sobj->sprite.attr = SP_TRANSPARENT;

    left_sobj->sprite.scalex = right_sobj->sprite.scalex = 2.0F;
    left_sobj->sprite.scaley = right_sobj->sprite.scaley = 2.4F;

    left_sobj->sprite.red   = right_sobj->sprite.red   = 0x78;
    left_sobj->sprite.green = right_sobj->sprite.green = 0x6E;
    left_sobj->sprite.blue  = right_sobj->sprite.blue  = 0x40;

    left_sobj->pos.y = right_sobj->pos.y = 30.0F;

    left_sobj->pos.x = 328.0F;
    right_sobj->pos.x = 588.0F;
}

// 0x801347F4
void gmCreditsMakeTextBoxGObj(void)
{
    GObj *gobj = omMakeGObjCommon(4, NULL, 7, 0x80000000);

    omAddGObjRenderProc(gobj, odRenderDObjTreeForGObj, 9, 0x80000000, -1);
    omAddDObjForGObj(gobj, dCreditsTextBoxDisplayList);
}

// 0x80134854
void gmCreditsStaffRollProcUpdate(GObj *gobj)
{
    GObj *name_gobj;
    gmCreditsJob *job;
    gmCreditsName *name;
    sb32 is_queued_name;    // Whether next block of rolling text is job or name
    f32 interpolation;

    is_queued_name = TRUE;
    job = dCreditsJobDescriptions;
    name = gmCreditsMakeJobGObj(job)->user_data.p;

    while (gCreditsNameID < ARRAY_COUNT(dCreditsStaffRoleTextInfo))
    {
        interpolation = (is_queued_name != FALSE) ? 0.15F : 0.3F;

        if (name->interpolation > interpolation)
        {
            if (is_queued_name != FALSE)
            {
                name_gobj = gmCreditsMakeNameGObjAndDObjs();

                name = name_gobj->user_data.p;

                if (++gCreditsNameID == job->staff_count)
                {
                    is_queued_name = FALSE;
                }
            }
            else
            {
                job++;

                name = gmCreditsMakeJobGObj(job)->user_data.p;

                is_queued_name = TRUE;
            }
        }
        gsStopCurrentProcess(1);
    }
    name = name_gobj->user_data.p;
    name->status = -1;

    gCreditsStaffRollGObj = NULL;

    omEjectGObjCommon(NULL);
    gsStopCurrentProcess(1);
}

// 0x8013498C
void gmCreditsMakeStaffRollGObj(void)
{
    GObj *gobj = omMakeGObjCommon(0, NULL, 1, 0x80000000);

    omAddGObjCommonProc(gobj, gmCreditsStaffRollProcUpdate, 0, 1);

    gCreditsStaffRollGObj = gobj;
}

// 0x801349DC
void func_ovl59_801349DC(void)
{
    rdSetup rldm_setup;

    rldm_setup.tableRomAddr = (intptr_t)&D_NF_001AC870;
    rldm_setup.tableFileCount = (intptr_t)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = gCreditsStatusBuf;
    rldm_setup.statusBufSize = ARRAY_COUNT(gCreditsStatusBuf);
    rldm_setup.forceBuf = NULL;
    rldm_setup.forceBufSize = 0;

    rdManagerInitSetup(&rldm_setup);
    rdManagerLoadFiles(dCreditsFileIDs, ARRAY_COUNT(dCreditsFileIDs), gCreditsFiles, hlMemoryAlloc(rdManagerGetAllocSize(dCreditsFileIDs, ARRAY_COUNT(dCreditsFileIDs)), 0x10));
}

// 0x80134A70
void gmCreditsInitNameAndJobDisplayLists(void)
{
    Gfx *dl;
    Vtx *vtx_base, *vtx_current;
    s32 i, j;

    for (i = 0; i < (ARRAY_COUNT(gCreditsNameAndJobDisplayLists) + ARRAY_COUNT(dCreditsNameAndJobSpriteInfo)) / 2; i++)
    {
        vtx_base = vtx_current = hlMemoryAlloc(sizeof(Vtx) * 4, 0x8);

        for (j = 0; j < 4; j++, vtx_current++)
        {
            vtx_current->v.ob[0] = (j & 2) ? -dCreditsNameAndJobSpriteInfo[i].width : dCreditsNameAndJobSpriteInfo[i].width;
            vtx_current->v.ob[1] = (j == 0) ? dCreditsNameAndJobSpriteInfo[i].height : (j < 3) ? -dCreditsNameAndJobSpriteInfo[i].height : dCreditsNameAndJobSpriteInfo[i].height;
            vtx_current->v.ob[2] = 0;

            vtx_current->v.flag = 0;

            vtx_current->v.tc[0] = (j & 2) ? 0 : dCreditsNameAndJobSpriteInfo[i].width * 32;
            vtx_current->v.tc[1] = (j == 0) ? 0 : (j < 3) ? dCreditsNameAndJobSpriteInfo[i].height * 32 : 0;

            vtx_current->v.cn[0] = 0x00;
            vtx_current->v.cn[1] = 0x00;
            vtx_current->v.cn[2] = 0x7F;
            vtx_current->v.cn[3] = 0x00;
        }
        gCreditsNameAndJobDisplayLists[i] = dl = hlMemoryAlloc(sizeof(Gfx) * 12, 0x8);

        gDPPipeSync(dl++);
        gDPLoadTextureBlock_4b
        (
            dl++, // pkt
            spGetSpriteFromFile(gCreditsFiles[0], dCreditsNameAndJobSpriteInfo[i].offset), // timg
            G_IM_FMT_I, // fmt
            ((dCreditsNameAndJobSpriteInfo[i].width + 15) / 16) * 16, // width
            dCreditsNameAndJobSpriteInfo[i].height, // height
            0, // pal
            G_TX_NOMIRROR | G_TX_CLAMP, // cms
            G_TX_NOMIRROR | G_TX_CLAMP, // cmt
            5, // masks
            5, // maskt
            G_TX_NOLOD, // shifts
            G_TX_NOLOD // shiftt
        );
        gDPPipeSync(dl++);
        gSPVertex(dl++, vtx_base, 4, 0);
        gSP2Triangles(dl++, 3, 2, 1, 0, 0, 3, 1, 0);
        gSPEndDisplayList(dl++);
    }
}

// 0x80134E08
void gmCreditsInitVars(void)
{
    gCreditsStatus = 2;
    gCreditsNameID = 0;
    gCreditsRollSpeed = 0.0037500001F;
    gCreditsNameAllocFree = NULL;
    gCreditsIsPaused = FALSE;
    gCreditsNameInterpolation = (void*) ((uintptr_t)gCreditsFiles[0] + (intptr_t)&lCreditsInterpolation);
    gCreditsNameATrack = (ATrack*) ((uintptr_t)gCreditsFiles[0] + (intptr_t)&lCreditsATrack);
    gCreditsDObjDesc = (DObjDesc*) ((uintptr_t)gCreditsFiles[0] + (intptr_t)&lCreditsDObjDesc);
    gCreditsRollBeginWait = 0;
    gCreditsPlayer = gSceneData.spgame_player;
    gCreditsRollEndWait = 60;
}

// 0x80134EA8
void gmCreditsUpdateCameraAt(GObj *gobj)
{
    Camera *cam = CameraGetStruct(gobj);

    cam->vec.at.x += (gCreditsCrosshairPositionX * 0.25F);
    cam->vec.at.y -= (gCreditsCrosshairPositionY * 0.25F);
}

// 0x80134EE8
void gmCreditsMakeCamera(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(5, NULL, 0xC, 0x80000000, func_ovl0_800CD2CC, 0x1E, 0xF0, -1, 0, 1, 0, 1, 0));

    func_80007080(&cam->viewport, 20.0F, 20.0F, 620.0F, 460.0F);

    gCreditsCamera = cam = CameraGetStruct(func_8000B93C(5, NULL, 0xC, 0x80000000, func_80017EC0, 0x32, 0x30E, -1, 1, 1, gmCreditsUpdateCameraAt, 1, 0));

    func_80007080(&cam->viewport, 20.0F, 20.0F, 620.0F, 460.0F);

    cam->vec.eye.y = cam->vec.at.x = cam->vec.at.y = cam->vec.at.z = 0.0F;

    cam->vec.eye.x = 0.0F;
    cam->vec.eye.z = 580.0F;

    cam->projection.persp.fovy = 50.0F;
}

// 0x8013505C
void gmCreditsInitAll(void)
{
    omMakeGObjCommon(0, func_ovl59_801334E4, 1, 0x80000000);
    func_8000B9FC(0xC, 0x80000000, 0x64, 2, 0xFF);
    func_ovl59_801349DC();
    gmCreditsInitNameAndJobDisplayLists();
    func_ovl59_80132958();
    gmCreditsInitVars();
    gmCreditsMakeCrosshairGObj();
    gmCreditsMakeStaffRollGObj();
    gmCreditsMakeCamera();
    func_80020A74();
    func_80020AB4(0, 0x27);
}

// 0x801350F4
void gmCreditsAddLightsDisplayList(Gfx **dl)
{
    gSPDisplayList(dl[0]++, dCreditsDisplayList);
}

// 0x80135118
void func_ovl59_80135118(void)
{
    func_8000A340();

    if (gCreditsRollEndWait != 0)
    {
        if ((gCreditsStatus == -1) || (gCreditsStatus == -2))
        {
            gCreditsRollEndWait--;
        }
    }
    if (gCreditsRollEndWait == 0)
    {
        func_80005C74();
    }
    if (gCreditsStatus == -1)
    {
        gSceneData.scene_current = scMajor_Kind_N64;

        func_80020A74();
        func_80006E18(0x100);

        gCreditsStatus = -2;
    }
}

// 0x801351B8
void gmCreditsStartScene(void)
{
    u32 *arena32 = (u32*)0x8023E000;
    u16 *arena16;

    while ((uintptr_t)arena32 < 0x80400000) { *arena32++ = 0x00000000; }

    D_ovl59_8013A708.unk_scdatabounds_0xC = (void*)((uintptr_t)&D_NF_800A5240 - 0x3200);
    func_80007024(&D_ovl59_8013A708);

    D_ovl59_8013A724.arena_size = ((uintptr_t)0x8023E000 - (uintptr_t)&lCreditsArenaLo);
    func_8000683C(&D_ovl59_8013A724);

    arena16 = (u16*)&D_NF_80392A00;

    while ((uintptr_t)arena16 < 0x80400000) { *arena16++ = 0x0001; }
}
