#include <sys/develop.h>
// #include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <vs-records.h>

// Offsets
extern intptr_t FILE_01F_QUESTION_MARK_IMAGE_OFFSET = 0x70; // file 0x01F image offset for question mark texture
extern intptr_t FILE_01F_DECIMAL_POINT_IMAGE_OFFSET = 0x910; // file 0x01F image offset for decimal point texture
extern intptr_t FILE_01F_SUBTITLE_BATTLE_SCORE_IMAGE_OFFSET = 0x15D0; // file 0x01F image offset for Battle Score subtitle texture
extern intptr_t FILE_01F_DOUBLE_DOWN_ARROW_IMAGE_OFFSET = 0x1668; // file 0x01F image offset for double down arrow texture
extern intptr_t FILE_01F_LEFT_AND_RIGHT_ARROW_IMAGE_OFFSET = 0x17A8; // file 0x01F image offset for left and right arrow texture
extern intptr_t FILE_01F_PORTRAIT_BACKGROUND_IMAGE_OFFSET = 0x4D30; // file 0x01F image offset for portrait background texture
extern intptr_t FILE_01F_VS_RECORD_IMAGE_OFFSET = 0x5428; // file 0x01F image offset for VS Record texture

extern intptr_t FILE_020_DATA_HEADER_IMAGE_OFFSET = 0xB40; // file 0x020 image offset for Data header texture
extern intptr_t FILE_020_ARROW_LEFT_IMAGE_OFFSET = 0xBE0; // file 0x020 image offset for left arrow texture
extern intptr_t FILE_020_ARROW_RIGHT_IMAGE_OFFSET = 0xC80; // file 0x020 image offset for right arrow texture

// ovl0
extern void func_ovl0_800CCF00();

// ovl32 stuff

// 0x80136630
extern s32 dMNVsRecordsRankingColumnWidths[7] = { 33, 33, 33, 33, 46, 35, 34 };

extern RldmFileId D_ovl32_8013664C[4];

// 0x80136660
extern Lights1 dMNVsRecordsLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C);

// 0x80136678
extern Gfx dMNVsRecordsDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNVsRecordsLights1),
    gsSPEndDisplayList()
};

// 0x801366A0
extern s32 dMNVsRecordsFtKindOrder[12] = {
    Ft_Kind_Mario,
    Ft_Kind_Donkey,
    Ft_Kind_Link,
    Ft_Kind_Samus,
    Ft_Kind_Yoshi,
    Ft_Kind_Kirby,
    Ft_Kind_Fox,
    Ft_Kind_Pikachu,
    Ft_Kind_Luigi,
    Ft_Kind_Captain,
    Ft_Kind_Ness,
    Ft_Kind_Purin
};

// 0x801366D0
extern intptr_t dMNVsRecordsNumberOffsets[10] = { 0x2F0, 0x390, 0x430, 0x4D0, 0x570, 0x610, 0x6B0, 0x750, 0x7F0, 0x890 };

// 0x801366F8
extern intptr_t dMNVsRecordsChrOffsets[29] = {
    0x40, 0xD0, 0x160, 0x1F0, 0x280, 0x310,
    0x3A0, 0x430, 0x4C0, 0x550, 0x5E0, 0x670,
    0x700, 0x790, 0x820, 0x8B0, 0x940, 0x9D0,
    0xA60, 0xAF0, 0xB80, 0xC10, 0xCA0, 0xD30,
    0xDC0, 0xE50, 0xED0, 0xF60, 0xFD0
};

// 0x8013676C
extern intptr_t dMNVsRecordsSubtitleOffsets[3] = { &FILE_01F_SUBTITLE_BATTLE_SCORE_IMAGE_OFFSET, 0x1458, 0x1318 };

// 0x8013677C
extern Vec2f dMNVsRecordsIconColumnPositionOffsets[12] = {
    { 1.0f, -5.0f },
    { 1.0f, -6.0f },
    { 0.0f, -6.0f },
    { 0.0f, -4.0f },
    { 1.0f, -6.0f },
    { 0.0f, -5.0f },
    { 1.0f, -5.0f },
    { 0.0f, -3.0f },
    { 0.0f,  1.0f },
    { 0.0f, -5.0f },
    { 0.0f, -1.0f },
    { 0.0f, -2.0f }
};

// 0x801367DC
extern intptr_t dMNVsRecordsColumnIconOffsets[12] = {
    0x1918, 0x1A98, 0x1CA8, 0x1E88,
    0x2008, 0x2370, 0x2178, 0x2540,
    0x2930, 0x2B30, 0x27C8, 0x2698
};

// 0x8013680C
extern Vec2f dMNVsRecordsIconRowPositionOffsets[12] = {
    { 5.0f, 0.0f },
    { 5.0f, 0.0f },
    { 0.0f, 0.0f },
    { 0.0f, 0.0f },
    { 3.0f, 0.0f },
    { 5.0f, 0.0f },
    { 5.0f, 0.0f },
    { 1.0f, 0.0f },
    { 0.0f, 1.0f },
    { 0.0f, 0.0f },
    { 4.0f, 0.0f },
    { 3.0f, 0.0f }
};

// 0x8013686C
extern intptr_t dMNVsRecordsRowIconOffsets[12] = {
    0x2D18, 0x2EF8, 0x3198, 0x3438,
    0x3618, 0x3A38, 0x37F8, 0x3CD8,
    0x4308, 0x45A8, 0x4098, 0x3EB8
};

extern intptr_t D_ovl32_8013689C[12];
extern s32 D_ovl32_801368CC[3];
extern s32 D_ovl32_801368D8[6];
extern char D_ovl32_80136A80[] = "RANKING";
extern char D_ovl32_80136A88[] = "USED %";
extern char D_ovl32_80136A90[] = "ATTACK 3TOTAL";
extern char D_ovl32_80136AA0[] = "DAMAGE TOTAL";

extern scUnkDataBounds D_ovl32_801369CC;
extern scRuntimeInfo D_ovl32_801369E8;

extern s32 gMNVsRecordsStatsKind; // 0x80136C18
extern sb32 gMNVsRecordsRedrawSubtitle; // 0x80136C1C
extern GObj* gMNVsRecordsTableHeadersGObj; // 0x80136C20
extern GObj* gMNVsRecordsTableValuesGObj; // 0x80136C24
extern s32 gMNVsRecordsBattleScoreFtKindOrder[12]; // 0x80136C28
extern s32 gMNVsRecordsRankingFtKindOrder[12]; // 0x80136C58
extern s32 gMNVsRecordsIndividualFtKindOrder[12]; // 0x80136C88

extern s32 gMNVsRecordsCurrentIndex; // 0x80136CB8
extern u16 gMNVsRecordsUnlockedMask; // 0x80136CBC
extern s32 gMNVsRecordsFirstColumn; // 0x80136CC0
extern s32 gMNVsRecordsChangeWait; // 0x80136CC4
extern u32 D_ovl32_80136CC8[6];
// extern rdFileNode D_ovl31_8013A010;
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern s32 gMNVsRecordsFilesArray[4]; // 0x80136D88[4]
// gMNVsRecordsFilesArray[0] - D_ovl32_80136D88; // file 0x01F pointer
// gMNVsRecordsFilesArray[1] - D_ovl32_80136D8C; // file 0x020 pointer
// gMNVsRecordsFilesArray[2] - D_ovl32_80136D90; // file 0x013 pointer
// gMNVsRecordsFilesArray[3] - D_ovl32_80136D94; // file 0x021 pointer

// 0x80131B00
void mnVsRecordsSetLighting(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dMNVsRecordsDisplayList);
}

// 0x80131B24
s32 mnVsRecordsGetFtKindByIndex(s32 index)
{
    s32 ftKinds[12] = dMNVsRecordsFtKindOrder;
    return ftKinds[index];
}

// 0x80131B74
s32 mnVsRecordsGetKOs(s32 ft_kind)
{
    s32 i;
    s32 total_kos = 0;

    for (i = 0; i < 12; i++)
    {
        if (mnVsRecordsIsUnlocked(i) != FALSE)
        {
            total_kos += gSaveData.vs_records[ft_kind].ko_count[i];
        }
    }
    return total_kos;
}

// 0x80131C0C
s32 mnVsRecordsGetTKOs(s32 ft_kind)
{
    s32 i;
    s32 total_tkos = 0;

    for (i = 0; i < 12; i++)
    {
        if (mnVsRecordsIsUnlocked(i) != FALSE)
        {
            total_tkos += gSaveData.vs_records[i].ko_count[ft_kind];
        }
    }

    if (gSaveData.vs_records[ft_kind].self_destructs + total_tkos > 9999)
    {
        return 9999;
    }

    return gSaveData.vs_records[ft_kind].self_destructs + total_tkos;
}

// 0x80131CD4
s32 mnVsRecordsGetTotalTKOs()
{
    s32 i;
    s32 total_tkos = 0;

    for (i = 0; i < 12; i++)
    {
        if (mnVsRecordsIsUnlocked(i) != FALSE)
        {
            total_tkos += mnVsRecordsGetTKOs(i);
        }
    }

    return total_tkos;
}

// 0x80131D38
f32 mnVsRecordsGetWinPercentage(s32 ft_kind)
{
    f32 kos = mnVsRecordsGetKOs(ft_kind);
    f32 tkos = mnVsRecordsGetTotalTKOs();

    return ((tkos != 0.0f) ? kos / tkos : 0.0f) * 100.0f;
}

// 0x80131DA0
s32 mnVsRecordsPow(s32 num, s32 pow)
{
    if (pow == 0) return 1;
    else
    {
        s32 result = num, i = pow;

        if (pow >= 2)
        {
            do result *= num;
            while (--i != 1);
        }

        return result;
    }
}

// 0x80131E40
void mnVsRecordsSetTextureColors(SObj* sobj, u32 colors[])
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->shadow_color.r = (u8) colors[0];
    sobj->shadow_color.g = (u8) colors[1];
    sobj->shadow_color.b = (u8) colors[2];
    sobj->sprite.red = (u8) colors[3];
    sobj->sprite.green = (u8) colors[4];
    sobj->sprite.blue = (u8) colors[5];
}

// 0x80131E88
s32 func_ovl32_80131E88(s32 num, s32 maxDigits)
{
    s32 numDigits;

    for (numDigits = maxDigits; numDigits > 0; numDigits--)
    {
        if (mnVsRecordsPow(10, numDigits - 1) != 0 ? num / mnVsRecordsPow(10, numDigits - 1) : 0 != 0) return numDigits;
    }

    return 0;
}

// 0x80131F34
void mnVsRecordsCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], sb32 showTenths, sb32 wide, s32 maxDigits, sb32 pad)
{
    intptr_t number_offsets[10] = dMNVsRecordsNumberOffsets;
    SObj* number_sobj;
    f32 left_x = x;
    s32 place;
    s32 numDigits;
    s32 digit;

    if (num < 0) num = 0;

    if (showTenths != FALSE && num == 1000)
    {
        showTenths = FALSE;
        num = num / 10;
    }

    if (showTenths != FALSE)
    {
        s32 decimal = num % 10;
        num = num / 10;

        number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], number_offsets[decimal]));
        mnVsRecordsSetTextureColors(number_sobj, colors);

        if (wide != FALSE)
        {
            left_x -= 5.0f;
        }
        else
        {
            left_x -= 4.0f;
        }

        number_sobj->pos.x = left_x;
        number_sobj->pos.y = y;

        number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_DECIMAL_POINT_IMAGE_OFFSET));
        mnVsRecordsSetTextureColors(number_sobj, colors);

        if (wide != FALSE)
        {
            left_x -= 3.0f;
        }
        else
        {
            left_x -= 2.0f;
        }

        number_sobj->pos.x = left_x;
        number_sobj->pos.y = y + 4.0f;
    }

    number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], number_offsets[num % 10]));
    mnVsRecordsSetTextureColors(number_sobj, colors);

    if (wide != FALSE)
    {
        left_x -= 5.0f;
    }
    else
    {
        left_x -= 4.0f;
    }

    number_sobj->pos.x = left_x;
    number_sobj->pos.y = y;

    for
    (
        place = 1, numDigits = (pad != FALSE) ? maxDigits : func_ovl32_80131E88(num, maxDigits);
        place < numDigits;
        place++, numDigits = (pad != FALSE) ? maxDigits : func_ovl32_80131E88(num, maxDigits)
    )
    {
        digit = (mnVsRecordsPow(10, place) != 0) ? num / mnVsRecordsPow(10, place) : 0;

        number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], number_offsets[digit % 10]));
        mnVsRecordsSetTextureColors(number_sobj, colors);

        if (wide != FALSE)
        {
            left_x -= 5.0f;
        }
        else
        {
            left_x -= 4.0f;
        }

        number_sobj->pos.x = left_x;
        number_sobj->pos.y = y;
    }
}

// 0x8013232C
s32 mnVsRecordsGetChrIndex(char chr)
{
    switch (chr)
    {
        case '\'':
            return 0x1A;
        case '%':
            return 0x1B;
        case '.':
            return 0x1C;
        case ' ':
            return 0x1D;
        default:
            if ((chr < 'A') || (chr > 'Z'))
            {
                return 0x1D;
            }
            else return chr - 'A';
    }
}

// 0x801323A4
f32 mnVsRecordsGetChrSpacing(const char *s, s32 c)
{
    switch (s[c])
    {
    case 'A':
        switch (s[c + 1])
        {
        case 'F':
        case 'P':
        case 'T':
        case 'V':
        case 'Y':
            return 0.0F;

        default:
            return 1.0F;
        }
        break;

    case 'F':
    case 'P':
    case 'V':
    case 'Y':
        switch(s[c + 1])
        {
        case 'A':
        case 'T':
            return 0.0F;

        default:
            return 1.0F;
        }
        break;

    case 'Q':
    case 'T':
        switch(s[c + 1])
        {
        case '\'':
        case '.':
            return 1.0F;

        default:
            return 0.0F;
        }
        break;

    case '\'':
        return 1.0F;

    case '.':
        return 1.0F;

    default:
        switch(s[c + 1])
        {
        case 'T':
            return 0.0F;

        default:
            return 1.0F;
        }
        break;
    }
}

// 0x801324C8
void mnVsRecordsDrawString(GObj* gobj, const char *str, f32 x, f32 y, s32 color[3])
{
    intptr_t chrOffsets[29] = dMNVsRecordsChrOffsets;
    SObj* chr_sobj;
    f32 start_x = x;
    s32 i;

    for (i = 0; str[i] != 0; i++)
    {
        if (((((str[i] >= '0') && (str[i] <= '9')) ? TRUE : FALSE) != FALSE) || (str[i] == ' '))
        {
            if (str[i] == ' ')
            {
                start_x += 4.0f;
            }
            else
            {
                start_x += str[i] - '0';
            }
        }
        else
        {
            chr_sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[3], chrOffsets[mnVsRecordsGetCharIndex(str[i])]));
            chr_sobj->pos.x = start_x;

            start_x += chr_sobj->sprite.width + mnVsRecordsGetChrSpacing(str, i);

            switch (str[i])
            {
                case '\'':
                    chr_sobj->pos.y = y - 1.0F;
                    break;
                case '.':
                    chr_sobj->pos.y = y + 4.0F;
                    break;
                default:
                    chr_sobj->pos.y = y;
                    break;
            }

            chr_sobj->sprite.attr &= ~SP_FASTCOPY;
            chr_sobj->sprite.attr |= SP_TRANSPARENT;
            chr_sobj->sprite.red = color[0];
            chr_sobj->sprite.green = color[1];
            chr_sobj->sprite.blue = color[2];
        }
    }
}

// 0x801326EC
s32 mnVsRecordsIsUnlocked(s32 ft_kind)
{
    switch (ft_kind)
    {
        case Ft_Kind_Ness:
            return (gMNVsRecordsUnlockedMask & gmSaveChrMask(Ft_Kind_Ness)) ? TRUE : FALSE;
        case Ft_Kind_Purin:
            return (gMNVsRecordsUnlockedMask & gmSaveChrMask(Ft_Kind_Purin)) ? TRUE : FALSE;
        case Ft_Kind_Captain:
            return (gMNVsRecordsUnlockedMask & gmSaveChrMask(Ft_Kind_Captain)) ? TRUE : FALSE;
        case Ft_Kind_Luigi:
            return (gMNVsRecordsUnlockedMask & gmSaveChrMask(Ft_Kind_Luigi)) ? TRUE : FALSE;
        default:
            return TRUE;
    }
}

// 0x801327B8
void mnVsRecordsCreateTitle()
{
    GObj* title_gobj;
    SObj* title_sobj;

    title_gobj = omMakeGObjSPAfter(0, 0, 2, 0x80000000);
    omAddGObjRenderProc(title_gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);

    title_sobj = gcAppendSObjWithSprite(title_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[1], &FILE_020_DATA_HEADER_IMAGE_OFFSET));
    title_sobj->sprite.attr &= ~SP_FASTCOPY;
    title_sobj->sprite.attr |= SP_TRANSPARENT;
    title_sobj->sprite.red = 0x5F;
    title_sobj->sprite.green = 0x58;
    title_sobj->sprite.blue = 0x46;
    title_sobj->pos.x = 24.0f;
    title_sobj->pos.y = 17.0f;

    title_sobj = gcAppendSObjWithSprite(title_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_VS_RECORD_IMAGE_OFFSET));
    title_sobj->sprite.attr &= ~SP_FASTCOPY;
    title_sobj->sprite.attr |= SP_TRANSPARENT;
    title_sobj->shadow_color.r = 0;
    title_sobj->shadow_color.g = 0;
    title_sobj->shadow_color.b = 0;
    title_sobj->sprite.red = 0xF2;
    title_sobj->sprite.green = 0xC7;
    title_sobj->sprite.blue = 0xD;
    title_sobj->pos.x = 99.0f;
    title_sobj->pos.y = 23.0f;
}

// 0x801328D4
void mnVsRecordsRenderSubtitle(GObj* subtitle_gobj)
{
    SObj* subtitle_sobj;
    intptr_t offsets[4] = dMNVsRecordsSubtitleOffsets;

    if (gMNVsRecordsRedrawSubtitle != FALSE)
    {
        func_8000B760(subtitle_gobj);

        subtitle_sobj = gcAppendSObjWithSprite(subtitle_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], offsets[gMNVsRecordsStatsKind]));
        subtitle_sobj->sprite.attr &= ~SP_FASTCOPY;
        subtitle_sobj->sprite.attr |= SP_TRANSPARENT;
        subtitle_sobj->sprite.red = 0;
        subtitle_sobj->sprite.green = 0;
        subtitle_sobj->sprite.blue = 0;
        subtitle_sobj->pos.x = 222.0f;
        subtitle_sobj->pos.y = 28.0f;
    }
}

// 0x80132994
void mnVsRecordsCreateSubtitle()
{
    GObj* subtitle_gobj;
    SObj* subtitle_sobj;

    subtitle_gobj = omMakeGObjSPAfter(0, 0, 2, 0x80000000);
    omAddGObjRenderProc(subtitle_gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(subtitle_gobj, mnVsRecordsRenderSubtitle, 1, 1);

    subtitle_sobj = gcAppendSObjWithSprite(subtitle_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_SUBTITLE_BATTLE_SCORE_IMAGE_OFFSET));
    subtitle_sobj->sprite.attr &= ~SP_FASTCOPY;
    subtitle_sobj->sprite.attr |= SP_TRANSPARENT;
    subtitle_sobj->sprite.red = 0;
    subtitle_sobj->sprite.green = 0;
    subtitle_sobj->sprite.blue = 0;
    subtitle_sobj->pos.x = 222.0f;
    subtitle_sobj->pos.y = 28.0f;
}

// 0x80132A50
void mnVsRecordsUpdatePortraitArrowsDisplay(GObj* portrait_arrows_gobj)
{
    portrait_arrows_gobj->flags = (gMNVsRecordsStatsKind == vsRecordsKindIndividual) ? 0 : 1;
}

// 0x80132A7C
void mnVsRecordsCreatePortraitArrows()
{
    GObj* portrait_arrows_gobj;
    SObj* portrait_arrows_sobj;

    portrait_arrows_gobj = omMakeGObjSPAfter(0, 0, 2, 0x80000000);
    omAddGObjRenderProc(portrait_arrows_gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(portrait_arrows_gobj, mnVsRecordsUpdatePortraitArrowsDisplay, 1, 1);

    // left arrow
    portrait_arrows_sobj = gcAppendSObjWithSprite(portrait_arrows_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[1], &FILE_020_ARROW_LEFT_IMAGE_OFFSET));
    portrait_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
    portrait_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
    portrait_arrows_sobj->sprite.red = 0xE3;
    portrait_arrows_sobj->sprite.green = 0x7D;
    portrait_arrows_sobj->sprite.blue = 0xC;
    portrait_arrows_sobj->pos.x = 40.0f;
    portrait_arrows_sobj->pos.y = 78.0f;

    // right arrow
    portrait_arrows_sobj = gcAppendSObjWithSprite(portrait_arrows_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[1], &FILE_020_ARROW_RIGHT_IMAGE_OFFSET));
    portrait_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
    portrait_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
    portrait_arrows_sobj->sprite.red = 0xE3;
    portrait_arrows_sobj->sprite.green = 0x7D;
    portrait_arrows_sobj->sprite.blue = 0xC;
    portrait_arrows_sobj->pos.x = 105.0f;
    portrait_arrows_sobj->pos.y = 78.0f;
}

// 0x80132BA4
void mnVsRecordsUpdateResortArrowsDisplay(GObj* resort_arrows_gobj)
{
    resort_arrows_gobj->flags = ((gMNVsRecordsStatsKind == vsRecordsKindBattleScore) || (gMNVsRecordsStatsKind == vsRecordsKindRanking)) ? 0 : 1;
}

// 0x80132BD4
void mnVsRecordsCreateResortArrows()
{
    GObj* resort_arrows_gobj;
    SObj* resort_arrows_sobj;

    resort_arrows_gobj = omMakeGObjSPAfter(0, 0, 2, 0x80000000);
    omAddGObjRenderProc(resort_arrows_gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(resort_arrows_gobj, mnVsRecordsUpdateResortArrowsDisplay, 1, 1);

    resort_arrows_sobj = gcAppendSObjWithSprite(resort_arrows_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_DOUBLE_DOWN_ARROW_IMAGE_OFFSET));
    resort_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
    resort_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
    resort_arrows_sobj->pos.x = 281.0f;
    resort_arrows_sobj->pos.y = 39.0f;
    resort_arrows_sobj->sprite.red = 0xE3;
    resort_arrows_sobj->sprite.green = 0x7D;
    resort_arrows_sobj->sprite.blue = 0xC;
}

// 0x80132C9C
void mnVsRecordsUpdateColumnArrowsDisplay(GObj* column_arrows_gobj)
{
    column_arrows_gobj->flags = (gMNVsRecordsStatsKind == vsRecordsKindRanking) ? 0 : 1;
}

// 0x80132CC8
void mnVsRecordsCreateColumnArrows()
{
    GObj* column_arrows_gobj;
    SObj* column_arrows_sobj;

    column_arrows_gobj = omMakeGObjSPAfter(0, 0, 2, 0x80000000);
    omAddGObjRenderProc(column_arrows_gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(column_arrows_gobj, mnVsRecordsUpdateColumnArrowsDisplay, 1, 1);

    column_arrows_sobj = gcAppendSObjWithSprite(column_arrows_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_LEFT_AND_RIGHT_ARROW_IMAGE_OFFSET));
    column_arrows_sobj->sprite.attr &= ~SP_FASTCOPY;
    column_arrows_sobj->sprite.attr |= SP_TRANSPARENT;
    column_arrows_sobj->sprite.red = 0xE3;
    column_arrows_sobj->sprite.green = 0x7D;
    column_arrows_sobj->sprite.blue = 0xC;
    column_arrows_sobj->pos.x = 25.0f;
    column_arrows_sobj->pos.y = 47.0f;
}

// 0x80132D90
void mnVsRecordsRenderBattleScoreGrid()
{
    s32 i;

    for (i = 0; i < 14; i++)
    {
        gDPFillRectangle(gDisplayListHead[0]++, 24, 48 + i * 13, 295, 48 + i * 13);
    }

    gDPFillRectangle(gDisplayListHead[0]++, 24, 48, 24, 217);

    for (i = 0; i < 14; i += 1)
    {
        if (i == 13)
        {
            gDPFillRectangle(gDisplayListHead[0]++, i * 18 + 61, 48, i * 18 + 61, 217);
        }
        else
        {
            gDPFillRectangle(gDisplayListHead[0]++, i * 18 + 48, 48, i * 18 + 48, 217);
        }
    }
}

// 0x80132EE4
void mnVsRecordsRenderRankingGrid(s32 first_column)
{
    s32 x;
    s32 indexes[ARRAY_COUNT(dMNVsRecordsRankingColumnWidths)];
    s32 i;

    for (i = 0; i < ARRAY_COUNT(indexes); i++)
    {
        if (first_column >= ARRAY_COUNT(dMNVsRecordsRankingColumnWidths))
        {
            first_column -= ARRAY_COUNT(dMNVsRecordsRankingColumnWidths);
        }
        indexes[i] = first_column++;
    }
    gDPFillRectangle(gDisplayListHead[0]++, 24, 46, 295, 46);

    for (i = 0; i < 13; i++)
    {
        gDPFillRectangle(gDisplayListHead[0]++, 24, 61 + i * 13, 295, 61 + i * 13);
    }

    gDPFillRectangle(gDisplayListHead[0]++, 24, 46, 24, 217);

    x = 48;

    for(i = 0; i < ARRAY_COUNT(indexes) + 1; i++)
    {
        gDPFillRectangle(gDisplayListHead[0]++, x, 46, x, 217);

        if (i < ARRAY_COUNT(indexes))
        {
            x += dMNVsRecordsRankingColumnWidths[indexes[i]];
        }
    }
}

// 0x801330FC
void mnVsRecordsRenderIndividualGrid()
{
    s32 i;

    gDPFillRectangle(gDisplayListHead[0]++, 26, 144, 293, 144);

    for (i = 0; i < 5; i++)
    {
        gDPFillRectangle(gDisplayListHead[0]++, 26, 157 + i * 12, 293, 157 + i * 12);
    }

    gDPFillRectangle(gDisplayListHead[0]++, 26, 144, 26, 205);

    for (i = 0; i < 13; i++)
    {
        gDPFillRectangle(gDisplayListHead[0]++, 65 + i * 19, 144, 65 + i * 19, 205);
    }
}

// 0x8013328C
void mnVsRecordsRenderTableGrid(GObj* table_border_gobj)
{
    s32 unused;

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gDisplayListHead[0]++, gsGetFillColor(0x62626AFF));

    switch (gMNVsRecordsStatsKind)
    {
        case vsRecordsKindBattleScore:
            mnVsRecordsRenderBattleScoreGrid();
            break;
        case vsRecordsKindRanking:
            mnVsRecordsRenderRankingGrid(gMNVsRecordsFirstColumn);
            break;
        case vsRecordsKindIndividual:
            mnVsRecordsRenderIndividualGrid();
            break;
    }

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

    func_ovl0_800CCEAC();
}

// 0x801333EC
void mnVsRecordsCreateStatsGrid()
{
    GObj* table_border_gobj = omMakeGObjSPAfter(0, 0, 2, 0x80000000);
    omAddGObjRenderProc(table_border_gobj, mnVsRecordsRenderTableGrid, 3, 0x80000000, -1);
}

// 0x80133438
void mnVsRecordsSetIconPositionForColumn(SObj* icon_sobj, s32 column)
{
    f32 x;
    f32 y;
    s32 ft_kind;
    s32 col_width;
    Vec2f offsets[12] = dMNVsRecordsIconColumnPositionOffsets;

    switch (gMNVsRecordsStatsKind)
    {
        case vsRecordsKindBattleScore:
            col_width = 18;
            x = 49.0f;
            y = 49.0f;
            ft_kind = gMNVsRecordsBattleScoreFtKindOrder[column];
            break;
        case vsRecordsKindIndividual:
            col_width = 19;
            x = 66.0f;
            y = 145.0f;
            ft_kind = gMNVsRecordsIndividualFtKindOrder[column];
            break;
    }

    if (mnVsRecordsIsUnlocked(ft_kind) != FALSE)
    {
        icon_sobj->pos.x = x + (col_width * column) + offsets[ft_kind].x;
        icon_sobj->pos.y = y + offsets[ft_kind].y;
    }
    else {
        icon_sobj->pos.x = x + (col_width * column) + 5.0f;
        icon_sobj->pos.y = y;
    }
}

// 0x801335A0
SObj* mnVsRecordsCreateLockedIcon(GObj* icon_gobj)
{
    SObj* icon_sobj;

    icon_sobj = gcAppendSObjWithSprite(icon_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_QUESTION_MARK_IMAGE_OFFSET));
    icon_sobj->sprite.attr &= ~SP_FASTCOPY;
    icon_sobj->sprite.attr |= SP_TRANSPARENT;
    icon_sobj->sprite.red = 0x8A;
    icon_sobj->sprite.green = 0x88;
    icon_sobj->sprite.blue = 0x92;

    return icon_sobj;
}

// 0x801335FC
void mnVsRecordsCreateColumnIcons(s32 icon_gobj)
{
    intptr_t offsets[12] = dMNVsRecordsColumnIconOffsets;
    s32 i;
    SObj* icon_sobj;
    s32* ft_kinds;

    switch (gMNVsRecordsStatsKind)
    {
        case vsRecordsKindBattleScore:
            ft_kinds = &gMNVsRecordsBattleScoreFtKindOrder;
            break;
        case vsRecordsKindIndividual:
            ft_kinds = &gMNVsRecordsIndividualFtKindOrder;
            break;
    }

    for (i = 0; i < ARRAY_COUNT(offsets); i++)
    {
        if (mnVsRecordsIsUnlocked(ft_kinds[i]) != FALSE)
        {
            icon_sobj = gcAppendSObjWithSprite(icon_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], offsets[ft_kinds[i]]));
            icon_sobj->sprite.attr &= ~SP_FASTCOPY;
            icon_sobj->sprite.attr |= SP_TRANSPARENT;
        }
        else
        {
            icon_sobj = mnVsRecordsCreateLockedIcon(icon_gobj);
        }

        mnVsRecordsSetIconPositionForColumn(icon_sobj, i);
    }
}

// 0x80133740
void mnVsRecordsSetIconPositionForRow(SObj* icon_sobj, s32 row)
{
    f32 x = 25.0f;
    f32 y = 62.0f;
    s32 ft_kind;
    Vec2f offsets[12] = dMNVsRecordsIconRowPositionOffsets;

    switch (gMNVsRecordsStatsKind)
    {
        case vsRecordsKindBattleScore:
            ft_kind = gMNVsRecordsBattleScoreFtKindOrder[row];
            break;
        case vsRecordsKindRanking:
            ft_kind = gMNVsRecordsRankingFtKindOrder[row];
            break;
    }

    if (mnVsRecordsIsUnlocked(ft_kind) != FALSE)
    {
        icon_sobj->pos.x = x + offsets[ft_kind].x;
        icon_sobj->pos.y = y + (row * 13) + offsets[ft_kind].y;
    }
    else
    {
        icon_sobj->pos.x = x + 8.0f;
        icon_sobj->pos.y = y + (row * 13);
    }
}

// 0x8013388C
void mnVsRecordsCreateRowIcons(GObj* icon_gobj)
{
    intptr_t offsets[12] = dMNVsRecordsRowIconOffsets;
    s32 i;
    SObj* icon_sobj;
    s32* ft_kinds;
    s32 foo;

    switch (gMNVsRecordsStatsKind)
    {
        case vsRecordsKindBattleScore:
            ft_kinds = &gMNVsRecordsBattleScoreFtKindOrder;
            break;
        case vsRecordsKindRanking:
            ft_kinds = &gMNVsRecordsRankingFtKindOrder;
            break;
    }

    for (i = 0; i < ARRAY_COUNT(offsets); i++)
    {
        if (mnVsRecordsIsUnlocked(ft_kinds[i]) != FALSE)
        {
            icon_sobj = gcAppendSObjWithSprite(icon_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], offsets[ft_kinds[i]]));
            icon_sobj->sprite.attr &= ~SP_FASTCOPY;
            icon_sobj->sprite.attr |= SP_TRANSPARENT;
        }
        else
        {
            icon_sobj = mnVsRecordsCreateLockedIcon(icon_gobj);
        }

        mnVsRecordsSetIconPositionForRow(icon_sobj, i);
    }
}

// 0x801339D0
s32 mnVsRecordsGetRanking(s32 ft_kind)
{
    s32 ft_kinds_ordered[12];
    s32 rank[12];
    s32 current_order;
    s32 i;
    f64 stats[12];
    s32 foo, bar;

    for (i = 0; i < 12; i++)
    {
        ft_kinds_ordered[i] = mnVsRecordsGetFtKindByIndex(i);
    }

    for (i = 0; i < 12; i++)
    {
        stats[i] = mnVsRecordsGetWinPercentage(i);
    }

    for (i = 0; i < 12; i++)
    {
        s32 j;

        for (j = i + 1; j < 12; j++)
        {
            if ((mnVsRecordsIsUnlocked(ft_kinds_ordered[i]) == FALSE) ||
                (stats[ft_kinds_ordered[i]] < stats[ft_kinds_ordered[j]]) &&
                (mnVsRecordsIsUnlocked(ft_kinds_ordered[j]) != FALSE))
            {
                s32 prev = ft_kinds_ordered[i];
                ft_kinds_ordered[i] = ft_kinds_ordered[j];
                ft_kinds_ordered[j] = prev;
            }
        }
    }

    current_order = 1;

    for (i = 0; i < 12; i++)
    {
        rank[ft_kinds_ordered[i]] = current_order;

        if (i != 11 && stats[ft_kinds_ordered[i]] != stats[ft_kinds_ordered[i + 1]])
        {
            current_order  = i + 2;
        }
    }

    return rank[ft_kind];
}

// 0x80133C60
void mnVsRecordsCreatePortrait(GObj* individual_stats_gobj, s32 ft_kind)
{
    SObj* sobj;
    intptr_t offsets[12] = D_ovl32_8013689C;
    s32 color[3] = D_ovl32_801368CC;
    s32 colors[6] = D_ovl32_801368D8;

    sobj = gcAppendSObjWithSprite(individual_stats_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &FILE_01F_PORTRAIT_BACKGROUND_IMAGE_OFFSET));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->pos.x = 52.0f;
    sobj->pos.y = 55.0f;

    sobj = gcAppendSObjWithSprite(individual_stats_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[2], offsets[ft_kind]));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->pos.x = 57.0f;
    sobj->pos.y = 60.0f;

    mnVsRecordsDrawString(individual_stats_gobj, D_ovl32_80136A80, 150, 60, color);
    mnVsRecordsCreateNumber(individual_stats_gobj, 12, 265, 58, colors, FALSE, TRUE, 2, FALSE);

    sobj = gcAppendSObjWithSprite(individual_stats_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &D_NF_000011D0));
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;
    sobj->pos.x = 251.0f;
    sobj->pos.y = 59.0f;
    sobj->sprite.red = color[0];
    sobj->sprite.green = color[1];
    sobj->sprite.blue = color[2];

    mnVsRecordsCreateNumber(individual_stats_gobj, mnVsRecordsGetRanking(ft_kind), 250, 58, colors, FALSE, TRUE, 2, FALSE);

    mnVsRecordsDrawString(individual_stats_gobj, D_ovl32_80136A88, 150, 68, color);
    mnVsRecordsCreateNumber(individual_stats_gobj, mnVsRecordsGetUsePercentage(ft_kind) * 10, 265, 66, colors, TRUE, TRUE, 3, FALSE);

    mnVsRecordsDrawString(individual_stats_gobj, D_ovl32_80136A90, 149, 78, color);
    mnVsRecordsCreateNumber(individual_stats_gobj, gSaveData.vs_records[ft_kind].damage_dealt, 265, 76, colors, FALSE, TRUE, 6, FALSE);

    mnVsRecordsDrawString(individual_stats_gobj, D_ovl32_80136AA0, 150, 86, color);
    mnVsRecordsCreateNumber(individual_stats_gobj, gSaveData.vs_records[ft_kind].damage_taken, 265, 84, colors, FALSE, TRUE, 6, FALSE);
}

// 0x80133FE8
void func_ovl32_80133FE8(s32 stats_kind)
{
    s32 ft_kinds_ordered[12];
    f64 stats[12];
    s32 i;

    for (i = 0; i < 12; i++)
    {
        ft_kinds_ordered[i] = mnVsRecordsGetFtKindByIndex(i);
    }

    switch (stats_kind)
    {
        case vsRecordsKindBattleScore:
            for (i = 0; i < 12; i++)
            {
                stats[i] = mnVsRecordsGetKOs(i);
            }
            break;
        case vsRecordsKindRanking:
            for (i = 0; i < 12; i++)
            {
                switch (gMNVsRecordsFirstColumn) {
                    case vsRecordsRankingColumnKindWinPercentage:
                        stats[i] = mnVsRecordsGetWinPercentage(i);
                        break;
                    case vsRecordsRankingColumnKindKOs:
                        stats[i] = mnVsRecordsGetKOs(i);
                        break;
                    case vsRecordsRankingColumnKindTKOs:
                        stats[i] = mnVsRecordsGetTKOs(i);
                        break;
                    case vsRecordsRankingColumnKindSDPercentage:
                        stats[i] = mnVsRecordsGetSDPercentage(i);
                        break;
                    case vsRecordsRankingColumnKindTime:
                        stats[i] = gSaveData.vs_records[i].time_used;
                        break;
                    case vsRecordsRankingColumnKindUsePercentage:
                        stats[i] = mnVsRecordsGetUsePercentage(i);
                        break;
                    case vsRecordsRankingColumnKindAverage:
                        stats[i] = func_ovl32_801348B4(i);
                        break;
                }
            }
            break;
        case vsRecordsKindIndividual:
            for (i = 0; i < 12; i++)
            {
                stats[i] = func_ovl32_8013531C(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex], i);
            }
            break;
    }

    for (i = 0; i < 12; i++)
    {
        s32 j;

        for (j = i + 1; j < 12; j++)
        {
            if ((mnVsRecordsIsUnlocked(ft_kinds_ordered[i]) == FALSE) ||
                (stats[ft_kinds_ordered[i]] < stats[ft_kinds_ordered[j]]) &&
                (mnVsRecordsIsUnlocked(ft_kinds_ordered[j]) != FALSE))
            {
                s32 prev = ft_kinds_ordered[i];
                ft_kinds_ordered[i] = ft_kinds_ordered[j];
                ft_kinds_ordered[j] = prev;
            }
        }
    }

    switch (stats_kind)
    {
        case vsRecordsKindBattleScore:
            for (i = 0; i < 12; i++)
            {
                gMNVsRecordsBattleScoreFtKindOrder[i] = ft_kinds_ordered[i];
            }
            break;
        case vsRecordsKindRanking:
            for (i = 0; i < 12; i++)
            {
                gMNVsRecordsRankingFtKindOrder[i] = ft_kinds_ordered[i];
            }
            break;
        case vsRecordsKindIndividual:
            for (i = 0; i < 12; i++)
            {
                gMNVsRecordsIndividualFtKindOrder[i] = ft_kinds_ordered[i];
            }
            break;
        default:
            break;
    }
}

// 0x801343E0
GObj* mnVsRecordsCreateBattleScoreTableValues()
{
    f32 x, y;
    s32 colors[6] = D_ovl32_801368F0;
    GObj* values_gobj;
    s32 i, j;

    values_gobj = omMakeGObjSPAfter(0, 0, 6, 0x80000000);
    omAddGObjRenderProc(values_gobj, func_ovl0_800CCF00, 5, 0x80000000, -1);

    for (i = 0; i < 12; i++)
    {
        x = 66.0f;
        y = (i * 13);

        if (mnVsRecordsIsUnlocked(gMNVsRecordsBattleScoreFtKindOrder[i]) != FALSE)
        {
            for (j = 0; j < 12; j++)
            {
                if (mnVsRecordsIsUnlocked(gMNVsRecordsBattleScoreFtKindOrder[j]) != FALSE)
                {
                    mnVsRecordsCreateNumber(values_gobj, gSaveData.vs_records[gMNVsRecordsBattleScoreFtKindOrder[i]].ko_count[gMNVsRecordsBattleScoreFtKindOrder[j]], x + (j * 0x12), y + 65.0f, colors, FALSE, FALSE, 4, FALSE);
                }
            }

            mnVsRecordsCreateNumber(values_gobj, mnVsRecordsGetKOs(gMNVsRecordsBattleScoreFtKindOrder[i]), x + 216.0f + 10.0f, y + 65.0f, colors, FALSE, FALSE, 6, FALSE);
        }
    }

    return values_gobj;
}

// 0x80134610
s32 mnVsRecordsCreateBattleScoreTableHeaders()
{
    GObj* headers_gobj;
    SObj* headers_sobj;

    headers_gobj = omMakeGObjSPAfter(0, 0, 5, 0x80000000);
    omAddGObjRenderProc(headers_gobj, func_ovl0_800CCF00, 4, 0x80000000, -1);

    headers_sobj = gcAppendSObjWithSprite(headers_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &D_NF_00000258));
    headers_sobj->sprite.attr &= ~SP_FASTCOPY;
    headers_sobj->sprite.attr |= SP_TRANSPARENT;
    headers_sobj->sprite.red = 0x8A;
    headers_sobj->sprite.green = 0x88;
    headers_sobj->sprite.blue = 0x92;
    headers_sobj->pos.x = 264.0f;
    headers_sobj->pos.y = 50.0f;

    mnVsRecordsCreateRowIcons(headers_gobj);
    mnVsRecordsCreateColumnIcons(headers_gobj);

    return headers_gobj;
}

// 0x801346D8
void mnVsRecordsRenderRankingRowHighlight(GObj* row_highlight_gobj)
{
    if (gMNVsRecordsStatsKind == vsRecordsKindRanking)
    {
        gDPPipeSync(gDisplayListHead[0]++);
        gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 39, 0, 255, 255);
        gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
        gDPFillRectangle(gDisplayListHead[0]++, 24, 62 + (gMNVsRecordsCurrentIndex * 13), 295, 74 + (gMNVsRecordsCurrentIndex * 13));
        gDPPipeSync(gDisplayListHead[0]++);
        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
        gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

        func_ovl0_800CCEAC();
    }
}

// 0x80134868
void func_ovl32_80134868()
{
    GObj* row_highlight_gobj = omMakeGObjSPAfter(0, 0, 3, 0x80000000);
    omAddGObjRenderProc(row_highlight_gobj, mnVsRecordsRenderRankingRowHighlight, 2, 0x80000000, -1);
}

// 0x801348B4
f32 func_ovl32_801348B4(s32 ft_kind)
{
    if (gSaveData.vs_records[ft_kind].games_played != 0)
    {
        return (f32) gSaveData.vs_records[ft_kind].player_count_tally / gSaveData.vs_records[ft_kind].games_played;
    }
    else return 0.0f;
}

// 0x80134934
s32 mnVsRecordsGetGamesPlayedSum()
{
    s32 i;
    s32 total_games_played = 0;

    for (i = 0; i < 12; i++)
    {
        total_games_played += gSaveData.vs_records[i].games_played;
    }

    return total_games_played;
}

// 0x80134978
f32 mnVsRecordsGetUsePercentage(s32 ft_kind)
{
    f32 use_percentage;

    if (mnVsRecordsGetGamesPlayedSum() != 0.0f)
    {
        use_percentage = gSaveData.vs_records[ft_kind].games_played / (f32) mnVsRecordsGetGamesPlayedSum();
    }
    else
    {
        use_percentage = 0.0f;
    }

    return use_percentage * 100.0f;
}

// 0x80134A1C
f32 mnVsRecordsGetWinPercentage(s32 ft_kind)
{
    f32 sd_percentage;
    f32 total_kos = mnVsRecordsGetTKOs(ft_kind);
    f32 self_destructs = gSaveData.vs_records[ft_kind].self_destructs;

    if (total_kos != 0.0f)
    {
        sd_percentage = self_destructs / total_kos;
    }
    else
    {
        sd_percentage = 0.0f;
    }

    return sd_percentage * 100.0f;
}

// 0x80134AA8
GObj* mnVsRecordsCreateRankingTableValues(s32 column)
{
    s32 col_widths[7] = D_ovl32_80136908;
    GObj* table_values_gobj;
    s32 colors[6] = D_ovl32_80136924;
    s32 i;
    s32 j;
    s32 column_order[7];
    s32 x;
    f32 y;

    for (i = 0; i < ARRAY_COUNT(col_widths); i++)
    {
        if (column >= ARRAY_COUNT(col_widths))
        {
            column -= ARRAY_COUNT(col_widths);
        }

        column_order[i] = column++;
    }

    table_values_gobj = omMakeGObjSPAfter(0, 0, 6, 0x80000000);
    omAddGObjRenderProc(table_values_gobj, func_ovl0_800CCF00, 5, 0x80000000, -1);

    for (i = 0; i < 12; i++)
    {
        if (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[i]) != FALSE)
        {
            x = 0x30;
            y = (i * 13) + 65.0f;

            for (j = 0; j < ARRAY_COUNT(col_widths); j++)
            {
                switch (column_order[j])
                {
                    SObj* table_values_sobj;

                    case vsRecordsRankingColumnKindWinPercentage:
                        mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetWinPercentage(gMNVsRecordsRankingFtKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x, y, colors, TRUE, FALSE, 3, FALSE);
                        break;
                    case vsRecordsRankingColumnKindKOs:
                        mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetKOs(gMNVsRecordsRankingFtKindOrder[i]), col_widths[column_order[j]] + x, y, colors, FALSE, FALSE, 6, FALSE);
                        break;
                    case vsRecordsRankingColumnKindTKOs:
                        mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetTKOs(gMNVsRecordsRankingFtKindOrder[i]), col_widths[column_order[j]] + x, y, colors, FALSE, FALSE, 6, FALSE);
                        break;
                    case vsRecordsRankingColumnKindSDPercentage:
                        mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetSDPercentage(gMNVsRecordsRankingFtKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x, y, colors, TRUE, FALSE, 3, FALSE);
                        break;
                    case vsRecordsRankingColumnKindTime:
                        mnVsRecordsCreateNumber(table_values_gobj, (gSaveData.vs_records[gMNVsRecordsRankingFtKindOrder[i]].time_used % 3600) / 60, col_widths[column_order[j]] + x, y, colors, FALSE, FALSE, 2, TRUE);

                        table_values_sobj = gcAppendSObjWithSprite(table_values_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], &D_NF_000054C0));
                        mnVsRecordsSetTextureColors(table_values_sobj, colors);

                        table_values_sobj->pos.x = col_widths[column_order[j]] + x - 11;
                        table_values_sobj->pos.y = y;

                        mnVsRecordsCreateNumber(table_values_gobj, gSaveData.vs_records[gMNVsRecordsRankingFtKindOrder[i]].time_used / 3600, col_widths[column_order[j]] + x - 13, y, colors, FALSE, FALSE, 3, FALSE);
                        break;
                    case vsRecordsRankingColumnKindUsePercentage:
                        mnVsRecordsCreateNumber(table_values_gobj, mnVsRecordsGetUsePercentage(gMNVsRecordsRankingFtKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x, y, colors, TRUE, FALSE, 3, FALSE);
                        break;
                    case vsRecordsRankingColumnKindAverage:
                        mnVsRecordsCreateNumber(table_values_gobj, func_ovl32_801348B4(gMNVsRecordsRankingFtKindOrder[i]) * 10.0f, col_widths[column_order[j]] + x - 15, y, colors, TRUE, FALSE, 1, FALSE);
                        break;
                }

                x += dMNVsRecordsRankingColumnWidths[column_order[j]];
            }
        }
    }

    return table_values_gobj;
}

// 0x80135108
GObj* mnVsRecordsCreateRankingTableHeaders(s32 column)
{
    GObj* table_headers_gobj;
    SObj* table_headers_sobj;
    intptr_t offsets[7] = D_ovl32_8013693C;
    s32 x_padding[7] = D_ovl32_80136958;
    s32 column_order[7];
    s32 i;
    s32 j;
    s32 x;
    f32 y;

    for (i = 0; i < ARRAY_COUNT(offsets); i++)
    {
        if (column >= ARRAY_COUNT(offsets))
        {
            column -= ARRAY_COUNT(offsets);
        }

        column_order[i] = column++;
    }

    table_headers_gobj = omMakeGObjSPAfter(0, 0, 5, 0x80000000);
    omAddGObjRenderProc(table_headers_gobj, func_ovl0_800CCF00, 4, 0x80000000, -1);

    x = 0x30;
    for (i = 0; i < ARRAY_COUNT(offsets); i++)
    {
        table_headers_sobj = gcAppendSObjWithSprite(table_headers_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], offsets[column_order[i]]));
        table_headers_sobj->sprite.attr &= ~SP_FASTCOPY;
        table_headers_sobj->sprite.attr |= SP_TRANSPARENT;
        table_headers_sobj->pos.x = x_padding[column_order[i]] + x;
        table_headers_sobj->pos.y = 49.0f;
        table_headers_sobj->sprite.red = 0x8A;
        table_headers_sobj->sprite.green = 0x88;
        table_headers_sobj->sprite.blue = 0x92;

        x += dMNVsRecordsRankingColumnWidths[column_order[i]];
    }

    mnVsRecordsCreateRowIcons(table_headers_gobj);

    return table_headers_gobj;
}

// 0x8013531C
f32 func_ovl32_8013531C(s32 ft_kind, s32 ft_kind_opponent)
{
    f32 kos_for = gSaveData.vs_records[ft_kind].ko_count[ft_kind_opponent];
    f32 total_kos = kos_for + gSaveData.vs_records[ft_kind_opponent].ko_count[ft_kind];
    f32 ko_percentage;

    if (total_kos != 0.0f)
    {
        ko_percentage = kos_for / total_kos;
    }
    else {
        ko_percentage = 0.0f;
    }

    return ko_percentage * 100.0f;
}

// 0x801353F4
f32 func_ovl32_801353F4(s32 ft_kind, s32 ft_kind_opponent)
{
    if (gSaveData.vs_records[ft_kind].played_against[ft_kind_opponent] != 0)
    {
        return (f32) gSaveData.vs_records[ft_kind].player_count_tallies[ft_kind_opponent] / gSaveData.vs_records[ft_kind].played_against[ft_kind_opponent];
    }
    else return 0.0f;
}

// 0x8013547C - Unused?
void func_ovl33_8013547C()
{
    return;
}

// 0x80135484
s32 mnVsRecordsCreateIndividualTableValues()
{
    GObj* table_values_gobj;
    f32 spB4[4] = D_ovl32_80136974;
    s32 colors[6] = D_ovl32_80136984;
    s32 i;
    f32 x;
    s32 unused, unused2;

    table_values_gobj = omMakeGObjSPAfter(0, 0, 6, 0x80000000);
    omAddGObjRenderProc(table_values_gobj, func_ovl0_800CCF00, 5, 0x80000000, -1);

    for (i = 0; i < 12; i++)
    {
        if (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[i]) != FALSE)
        {
            x = (i * 19) + 84.0f;
            mnVsRecordsCreateNumber(table_values_gobj, func_ovl32_8013531C(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex], gMNVsRecordsIndividualFtKindOrder[i]) * 10.0f, x, spB4[0], colors, TRUE, FALSE, 3, FALSE);
            mnVsRecordsCreateNumber(table_values_gobj, gSaveData.vs_records[gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]].ko_count[gMNVsRecordsIndividualFtKindOrder[i]], x, spB4[1], colors, FALSE, FALSE, 4, FALSE);
            mnVsRecordsCreateNumber(table_values_gobj, gSaveData.vs_records[gMNVsRecordsIndividualFtKindOrder[i]].ko_count[gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]], x, spB4[2], colors, FALSE, FALSE, 4, FALSE);
            mnVsRecordsCreateNumber(table_values_gobj, func_ovl32_801353F4(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex], gMNVsRecordsIndividualFtKindOrder[i]) * 10.0f, x, spB4[3], colors, TRUE, FALSE, 3, FALSE);
        }
    }

    return table_values_gobj;
}

// 0x80135784
s32 mnVsRecordsCreateIndividualPortraitStatsAndTableHeaders()
{
    GObj* individual_stats_gobj;
    SObj* individual_stats_sobj;
    intptr_t offsets[4] = D_ovl32_8013699C;
    Vec2f positions[4] = D_ovl32_801369AC;
    s32 i;

    individual_stats_gobj = omMakeGObjSPAfter(0, 0, 5, 0x80000000);
    omAddGObjRenderProc(individual_stats_gobj, func_ovl0_800CCF00, 4, 0x80000000, -1);

    for (i = 0; i < 4; i++)
    {
        individual_stats_sobj = gcAppendSObjWithSprite(individual_stats_gobj, GetAddressFromOffset(gMNVsRecordsFilesArray[0], offsets[i]));
        individual_stats_sobj->sprite.attr &= ~SP_FASTCOPY;
        individual_stats_sobj->sprite.attr |= SP_TRANSPARENT;
        individual_stats_sobj->pos.x = positions[i].x;
        individual_stats_sobj->pos.y = positions[i].y;
        individual_stats_sobj->sprite.red = 0x8A;
        individual_stats_sobj->sprite.green = 0x88;
        individual_stats_sobj->sprite.blue = 0x92;
    }

    mnVsRecordsCreateColumnIcons(individual_stats_gobj);
    mnVsRecordsCreatePortrait(individual_stats_gobj, gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]);

    return individual_stats_gobj;
}

// 0x80135934
void mnVsRecordsCreateStats(s32 stats_kind)
{
    switch (stats_kind)
    {
        case vsRecordsKindBattleScore:
            func_ovl32_80133FE8(stats_kind);

            gMNVsRecordsTableHeadersGObj = mnVsRecordsCreateBattleScoreTableHeaders();
            gMNVsRecordsTableValuesGObj = mnVsRecordsCreateBattleScoreTableValues();
            break;
        case vsRecordsKindRanking:
            func_ovl32_80133FE8(stats_kind);

            gMNVsRecordsTableHeadersGObj = mnVsRecordsCreateRankingTableHeaders(gMNVsRecordsFirstColumn);
            gMNVsRecordsTableValuesGObj = mnVsRecordsCreateRankingTableValues(gMNVsRecordsFirstColumn);
            break;
        case vsRecordsKindIndividual:
            func_ovl32_80133FE8(stats_kind);

            gMNVsRecordsTableHeadersGObj = mnVsRecordsCreateIndividualPortraitStatsAndTableHeaders();
            gMNVsRecordsTableValuesGObj = mnVsRecordsCreateIndividualTableValues();
            break;
    }
}

// 0x801359EC
void func_ovl32_801359EC()
{
    GObj *camera_gobj = func_8000B93C(1, NULL, 1, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x00000020, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135A8C
void func_ovl32_80135A8C()
{
    GObj *camera_gobj = func_8000B93C(1, NULL, 1, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x00000010, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135B2C
void func_ovl32_80135B2C()
{
    GObj *camera_gobj = func_8000B93C(1, NULL, 1, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x00000008, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135BCC
void func_ovl32_80135BCC()
{
    GObj *camera_gobj = func_8000B93C(1, NULL, 1, 0x80000000U, func_ovl0_800CD2CC, 0x46, 0x00000004, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135C6C
void func_ovl32_80135C6C()
{
    GObj *camera_gobj = func_8000B93C(1, NULL, 1, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x00000002, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135D0C
void func_ovl32_80135D0C()
{
    gMNVsRecordsStatsKind = vsRecordsKindBattleScore;
    gMNVsRecordsRedrawSubtitle = FALSE;
    gMNVsRecordsCurrentIndex = 0;
    gMNVsRecordsChangeWait = 0;
    gMNVsRecordsUnlockedMask = gSaveData.character_mask;
    gMNVsRecordsFirstColumn = vsRecordsRankingColumnKindWinPercentage;
}

// 0x80135D48
void mnVsRecordsRedrawStats(s32 stats_kind)
{
    if (gMNVsRecordsTableHeadersGObj != NULL)
    {
        omEjectGObj(gMNVsRecordsTableHeadersGObj);
    }

    if (gMNVsRecordsTableValuesGObj != NULL)
    {
        omEjectGObj(gMNVsRecordsTableValuesGObj);
    }

    mnVsRecordsCreateStats(stats_kind);
}

// 0x80135D98
void mnVsRecordsMain(GObj* arg0)
{
    s32 unused;
    s32 stick_range;
    s32 is_button;

    if (gMNVsRecordsChangeWait != 0)
    {
        gMNVsRecordsChangeWait--;
    }

    if
    (
        (gMNVsRecordsStatsKind == vsRecordsKindIndividual) &&
        (func_ovl1_80390A04(-0x14, 0x14) != FALSE) &&
        (func_ovl1_80390AC0(-0x14, 0x14) != FALSE) &&
        (func_ovl1_80390804(R_JPAD | U_JPAD | R_TRIG | R_CBUTTONS | U_CBUTTONS) == FALSE) &&
        (func_ovl1_80390804(L_JPAD | D_JPAD | L_TRIG | L_CBUTTONS | D_CBUTTONS) == FALSE)
    )
    {
        gMNVsRecordsChangeWait = 0;
    }

    if (gMNVsRecordsRedrawSubtitle != FALSE)
    {
        gMNVsRecordsRedrawSubtitle = FALSE;
    }

    if (func_ovl1_8039076C(B_BUTTON) != FALSE)
    {
        if (gMNVsRecordsStatsKind == vsRecordsKindBattleScore)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current =  0x3AU;

            func_80005C74();
        }
        else
        {
            func_800269C0(0x1C);

            gMNVsRecordsStatsKind--;
            gMNVsRecordsRedrawSubtitle = TRUE;

            mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);
        }
    }

    if
    (
        ((func_ovl1_8039076C(A_BUTTON) != FALSE) ||
        (func_ovl1_8039076C(START_BUTTON) != FALSE)) &&
        (gMNVsRecordsStatsKind < 2)
    )
    {
        func_800269C0(0x1C);

        gMNVsRecordsStatsKind++;
        gMNVsRecordsRedrawSubtitle = TRUE;

        mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);
    }

    if (gMNVsRecordsStatsKind == vsRecordsKindRanking)
    {
        if
        (
            mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, U_JPAD | U_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputUD(gMNVsRecordsChangeWait, stick_range, 20, 1)
        )
        {
            func_800269C0(0x6B);

            if (gMNVsRecordsCurrentIndex == 0)
            {
                gMNVsRecordsCurrentIndex = 11;
            }
            else gMNVsRecordsCurrentIndex--;

            while (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]) == FALSE)
            {
                if (gMNVsRecordsCurrentIndex == 0)
                {
                    gMNVsRecordsCurrentIndex = 11;
                }
                else gMNVsRecordsCurrentIndex--;
            }

            mnCommonSetOptionChangeWaitP(gMNVsRecordsChangeWait, is_button, stick_range, 7);
        }

        if
        (
            mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, D_JPAD | D_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputUD(gMNVsRecordsChangeWait, stick_range, -20, 0)
        )
        {
            func_800269C0(0x6B);

            if (gMNVsRecordsCurrentIndex == 11)
            {
                gMNVsRecordsCurrentIndex = 0;
            }
            else gMNVsRecordsCurrentIndex++;

            while (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]) == FALSE)
            {
                if (gMNVsRecordsCurrentIndex == 11)
                {
                    gMNVsRecordsCurrentIndex = 0;
                }
                else gMNVsRecordsCurrentIndex++;
            }

            mnCommonSetOptionChangeWaitN(gMNVsRecordsChangeWait, is_button, stick_range, 7);
        }

        if
        (
            mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputLR(gMNVsRecordsChangeWait, stick_range, 20, 1)
        )
        {
            func_800269C0(0x6B);

            if (gMNVsRecordsFirstColumn == vsRecordsRankingColumnKindWinPercentage)
            {
                gMNVsRecordsFirstColumn = vsRecordsRankingColumnKindAverage;
            }
            else gMNVsRecordsFirstColumn--;

            gMNVsRecordsRedrawSubtitle = TRUE;

            mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);

            mnCommonSetOptionChangeWaitP(gMNVsRecordsChangeWait, is_button, stick_range, 7);
        }

        if
        (
            mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputLR(gMNVsRecordsChangeWait, stick_range, -20, 0)
        )
        {
            func_800269C0(0x6B);

            if (gMNVsRecordsFirstColumn == vsRecordsRankingColumnKindAverage)
            {
                gMNVsRecordsFirstColumn = vsRecordsRankingColumnKindWinPercentage;
            }
            else gMNVsRecordsFirstColumn++;

            gMNVsRecordsRedrawSubtitle = TRUE;

            mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);

            mnCommonSetOptionChangeWaitN(gMNVsRecordsChangeWait, is_button, stick_range, 7);
        }
    }

    if (gMNVsRecordsStatsKind == vsRecordsKindIndividual)
    {
        if
        (
            mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputLR(gMNVsRecordsChangeWait, stick_range, 20, 1)
        )
        {
            func_800269C0(0x6B);

            if (gMNVsRecordsCurrentIndex == 11)
            {
                gMNVsRecordsCurrentIndex = 0;
            }
            else gMNVsRecordsCurrentIndex++;

            while (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]) == FALSE)
            {
                if (gMNVsRecordsCurrentIndex == 11)
                {
                    gMNVsRecordsCurrentIndex = 0;
                }
                else gMNVsRecordsCurrentIndex++;
            }

            mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);

            if (is_button != FALSE)
            {
                gMNVsRecordsChangeWait = 12;
            }
            else gMNVsRecordsChangeWait = mnCommonGetOptionChangeWaitP(20, 7);
        }

        if
        (
            mnCommonCheckGetOptionButtonInput(gMNVsRecordsChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputLR(gMNVsRecordsChangeWait, stick_range, -20, 0)
        )
        {
            func_800269C0(0x6B);

            if (gMNVsRecordsCurrentIndex == 0)
            {
                gMNVsRecordsCurrentIndex = 11;
            }
            else gMNVsRecordsCurrentIndex--;

            while (mnVsRecordsIsUnlocked(gMNVsRecordsRankingFtKindOrder[gMNVsRecordsCurrentIndex]) == FALSE)
            {
                if (gMNVsRecordsCurrentIndex == 0)
                {
                    gMNVsRecordsCurrentIndex = 11;
                }
                else gMNVsRecordsCurrentIndex--;
            }

            mnVsRecordsRedrawStats(gMNVsRecordsStatsKind);

            if (is_button != FALSE)
            {
                gMNVsRecordsChangeWait = 12;
            }
            else gMNVsRecordsChangeWait = mnCommonGetOptionChangeWaitN(-20, 7);
        }
    }
}

// 0x80136488
void mnVsRecordsInit()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl32_80136CC8;
    rldmSetup.statusBufSize = 0x18;
    rldmSetup.forceBuf = 0;
    rldmSetup.forceBufSize = 0;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl32_8013664C, ARRAY_COUNT(D_ovl32_8013664C), gMNVsRecordsFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl32_8013664C, ARRAY_COUNT(D_ovl32_8013664C)), 0x10U));

    omMakeGObjSPAfter(0, mnVsRecordsMain, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 2, 0xFF);

    func_ovl32_80135D0C();
    func_ovl32_80135C6C();
    func_ovl32_80135BCC();
    func_ovl32_80135B2C();
    func_ovl32_80135A8C();
    func_ovl32_801359EC();
    mnVsRecordsCreateTitle();
    mnVsRecordsCreateSubtitle();
    mnVsRecordsCreatePortraitArrows();
    mnVsRecordsCreateResortArrows();
    mnVsRecordsCreateColumnArrows();
    mnVsRecordsCreateStatsGrid();
    mnVsRecordsCreateStats(gMNVsRecordsStatsKind);
    func_ovl32_80134868();

    func_80020AB4(0, 0x2B);
}

// vs_records_entry
void vs_records_entry()
{
    D_ovl32_801369CC.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl32_801369CC);
    D_ovl32_801369E8.arena_size = (u32) ((uintptr_t)&lOverlay32ArenaHi - (uintptr_t)&lOverlay32ArenaLo);
    gsGTLSceneInit(&D_ovl32_801369E8);
}