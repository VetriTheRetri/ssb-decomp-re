#include <mp/map.h>
#include <gr/ground.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lGRPupupuGroundFileID;              // 0x000000FF
extern intptr_t lGRPupupuSmallGroundFileID;         // 0x00000100
extern intptr_t lGRZebesGroundFileID;               // 0x00000101
extern intptr_t lGRPupupuTestGroundFileID;          // 0x00000102
extern intptr_t lGRCastleGroundFileID;              // 0x00000103
extern intptr_t lGRInishieGroundFileID;             // 0x00000104
extern intptr_t lGRJungleGroundFileID;              // 0x00000105
extern intptr_t lGRSectorGroundFileID;              // 0x00000106
extern intptr_t lGRYosterGroundFileID;              // 0x00000107
extern intptr_t lGRYamabukiGroundFileID;            // 0x00000108
extern intptr_t lGRHyruleGroundFileID;              // 0x00000109
extern intptr_t lGRLastGroundFileID;                // 0x0000010A
extern intptr_t lGRExplainGroundFileID;             // 0x0000010B
extern intptr_t lGRZakoGroundFileID;                // 0x0000010C
extern intptr_t lGRMetalGroundFileID;               // 0x0000010D
extern intptr_t lGRYosterSmallGroundFileID;         // 0x0000010E
extern intptr_t lGRBonus1MarioGroundFileID;         // 0x0000010F
extern intptr_t lGRBonus1FoxGroundFileID;           // 0x00000110
extern intptr_t lGRBonus1DonkeyGroundFileID;        // 0x00000111
extern intptr_t lGRBonus1SamusGroundFileID;         // 0x00000112
extern intptr_t lGRBonus1LuigiGroundFileID;         // 0x00000113
extern intptr_t lGRBonus1LinkGroundFileID;          // 0x00000114
extern intptr_t lGRBonus1YoshiGroundFileID;         // 0x00000115
extern intptr_t lGRBonus1CaptainGroundFileID;       // 0x00000116
extern intptr_t lGRBonus1KirbyGroundFileID;         // 0x00000117
extern intptr_t lGRBonus1PikachuGroundFileID;       // 0x00000118
extern intptr_t lGRBonus1PurinGroundFileID;         // 0x00000119
extern intptr_t lGRBonus1NessGroundFileID;          // 0x0000011A
extern intptr_t lGRBonus2MarioGroundFileID;         // 0x0000011B
extern intptr_t lGRBonus2FoxGroundFileID;           // 0x0000011C
extern intptr_t lGRBonus2DonkeyGroundFileID;        // 0x0000011D
extern intptr_t lGRBonus2SamusGroundFileID;         // 0x0000011E
extern intptr_t lGRBonus2LuigiGroundFileID;         // 0x0000011F
extern intptr_t lGRBonus2LinkGroundFileID;          // 0x00000120
extern intptr_t lGRBonus2YoshiGroundFileID;         // 0x00000121
extern intptr_t lGRBonus2CaptainGroundFileID;       // 0x00000122
extern intptr_t lGRBonus2KirbyGroundFileID;         // 0x00000123
extern intptr_t lGRBonus2PikachuGroundFileID;       // 0x00000124
extern intptr_t lGRBonus2PurinGroundFileID;         // 0x00000125
extern intptr_t lGRBonus2NessGroundFileID;          // 0x00000126
extern intptr_t lGRBonus3GroundFileID;              // 0x00000127

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x8012C4E0
f32 dMPCollisionMaterialFrictions[/* */] =
{
    4.0F, 
    3.0F, 
    3.0F, 
    1.0F, 
    2.0F, 
    2.0F, 
    4.0F, 
    4.0F, 
    4.0F, 
    4.0F, 
    4.0F, 
    4.0F, 
    4.0F, 
    4.0F, 
    4.0F, 
    4.0F 
};

// 0x8012C520
grFileInfo dMPCollisionGroundFileInfos[/* */] =
{
    { &lGRCastleGroundFileID, &lGRCommonHeaderStart },      // Peach's Castle
    { &lGRSectorGroundFileID, &lGRCommonHeaderStart },      // Sector Z
    { &lGRJungleGroundFileID, &lGRCommonHeaderStart },      // Kongo Jungle
    { &lGRZebesGroundFileID, &lGRCommonHeaderStart },       // Planet Zebes
    { &lGRHyruleGroundFileID, &lGRCommonHeaderStart },      // Hyrule Castle
    { &lGRYosterGroundFileID, &lGRCommonHeaderStart },      // Yoshi's Island
    { &lGRPupupuGroundFileID, &lGRCommonHeaderStart },      // Dream Land
    { &lGRYamabukiGroundFileID, &lGRCommonHeaderStart },    // Saffron City
    { &lGRInishieGroundFileID, &lGRCommonHeaderStart },     // Mushroom Kingdom
    { &lGRPupupuSmallGroundFileID, &lGRCommonHeaderStart }, // Beta Dream Land
    { &lGRPupupuTestGroundFileID, &lGRCommonHeaderStart },  // Test Stage
    { &lGRExplainGroundFileID, 0x0 },                       // How to Play
    { &lGRYosterSmallGroundFileID, &lGRCommonHeaderStart }, // Small Yoshi's Island (1P Game)
    { &lGRMetalGroundFileID, &lGRCommonHeaderStart },       // Meta Crystal
    { &lGRZakoGroundFileID, &lGRCommonHeaderStart },        // Duel Zone
    { &lGRBonus3GroundFileID, 0x0 },                        // Race to the Finish
    { &lGRLastGroundFileID, 0x0 },                          // Final Destination
    { &lGRBonus1MarioGroundFileID, 0x0 },                   // Break the Targets Mario
    { &lGRBonus1FoxGroundFileID, 0x0 },                     // Break the Targets Fox
    { &lGRBonus1DonkeyGroundFileID, 0x0 },                  // Break the Targets Donkey Kong
    { &lGRBonus1SamusGroundFileID, 0x0 },                   // Break the Targets Samus
    { &lGRBonus1LuigiGroundFileID, 0x0 },                   // Break the Targets Luigi
    { &lGRBonus1LinkGroundFileID, 0x0 },                    // Break the Targets Link
    { &lGRBonus1YoshiGroundFileID, 0x0 },                   // Break the Targets Yoshi
    { &lGRBonus1CaptainGroundFileID, 0x0 },                 // Break the Targets Captain Falcon
    { &lGRBonus1KirbyGroundFileID, 0x0 },                   // Break the Targets Kirby
    { &lGRBonus1PikachuGroundFileID, 0x0 },                 // Break the Targets Pikachu
    { &lGRBonus1PurinGroundFileID, 0x0 },                   // Break the Targets Jigglypuff
    { &lGRBonus1NessGroundFileID, 0x0 },                    // Break the Targets Ness
    { &lGRBonus2MarioGroundFileID, 0x0 },                   // Board the Platforms Mario
    { &lGRBonus2FoxGroundFileID, 0x0 },                     // Board the Platforms Fox
    { &lGRBonus2DonkeyGroundFileID, 0x0 },                  // Board the Platforms Donkey Kong
    { &lGRBonus2SamusGroundFileID, 0x0 },                   // Board the Platforms Samus
    { &lGRBonus2LuigiGroundFileID, 0x0 },                   // Board the Platforms Luigi
    { &lGRBonus2LinkGroundFileID, 0x0 },                    // Board the Platforms Link
    { &lGRBonus2YoshiGroundFileID, 0x0 },                   // Board the Platforms Yoshi
    { &lGRBonus2CaptainGroundFileID, 0x0 },                 // Board the Platforms Captain Falcon
    { &lGRBonus2KirbyGroundFileID, 0x0 },                   // Board the Platforms Kirby
    { &lGRBonus2PikachuGroundFileID, 0x0 },                 // Board the Platforms Pikachu
    { &lGRBonus2PurinGroundFileID, 0x0 },                   // Board the Platforms Jigglypuff
    { &lGRBonus2NessGroundFileID, 0x0 }                     // Board the Platforms Ness
};

// 0x8012C668 - I can't for the life of me figure out if these are referenced at all and I'm too lazy to transcribe these if they're not used
u8 dMPCollisionUnusedFloats[/* */] =
{
    0x45, 0x9C, 0x40, 0x00, 0xC5, 0x1C, 0x40, 0x00, 0x45, 0xDA, 0xC0, 0x00,
    0xC5, 0xDA, 0xC0, 0x00, 0x46, 0x0C, 0xA0, 0x00, 0xC5, 0x9C, 0x40, 0x00,
    0x46, 0x3B, 0x80, 0x00, 0xC6, 0x3B, 0x80, 0x00, 0x41, 0xA0, 0x00, 0x00,
    0x42, 0x34, 0x00, 0x00, 0x44, 0xC2, 0xA9, 0x9A, 0x00, 0x00, 0x00, 0x00,
    0x45, 0x26, 0xE0, 0x00, 0xC5, 0x26, 0xE0, 0x00, 0x45, 0x7A, 0x00, 0x00,
    0xC5, 0x1C, 0x40, 0x00, 0x45, 0xAB, 0xE0, 0x00, 0xC5, 0xAB, 0xE0, 0x00,
    0x46, 0x0C, 0xA0, 0x00, 0xC5, 0x9C, 0x40, 0x00, 0x46, 0x2B, 0xE0, 0x00,
    0xC6, 0x2B, 0xE0, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00,
    0x44, 0xC1, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x44, 0xFC, 0x1C, 0xCD,
    0xC4, 0xFC, 0x1C, 0xCD, 0x45, 0x9C, 0x40, 0x00, 0xC5, 0x1C, 0x40, 0x00,
    0x45, 0xCB, 0x20, 0x00, 0xC5, 0xCB, 0x20, 0x00, 0x46, 0x0C, 0xA0, 0x00,
    0xC5, 0x9C, 0x40, 0x00, 0x46, 0x33, 0xB0, 0x00, 0xC6, 0x33, 0xB0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0xB4, 0x00, 0x00, 0x44, 0xC4, 0x50, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0x26, 0xCC, 0xCD, 0xC5, 0x2D, 0xEC, 0xCD,
    0x45, 0x7A, 0x00, 0x00, 0xC5, 0x1C, 0x40, 0x00, 0x45, 0xAB, 0xE0, 0x00,
    0xC5, 0xAB, 0xE0, 0x00, 0x46, 0x0C, 0xA0, 0x00, 0xC5, 0x9C, 0x40, 0x00,
    0x46, 0x2B, 0xE0, 0x00, 0xC6, 0x2B, 0xE0, 0x00, 0x41, 0xA0, 0x00, 0x00,
    0x42, 0x34, 0x00, 0x00, 0x44, 0xC1, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00,
    0x44, 0xFC, 0x1C, 0xCD, 0xC4, 0xFC, 0x1C, 0xCD, 0x45, 0x9C, 0x40, 0x00,
    0xC5, 0x1C, 0x40, 0x00, 0x45, 0xDA, 0xC0, 0x00, 0xC5, 0xDA, 0xC0, 0x00,
    0x46, 0x0C, 0xA0, 0x00, 0xC5, 0x9C, 0x40, 0x00, 0x46, 0x3B, 0x80, 0x00,
    0xC6, 0x3B, 0x80, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00,
    0x44, 0xC2, 0xA9, 0x9A, 0x00, 0x00, 0x00, 0x00, 0x45, 0x26, 0xE0, 0x00,
    0xC5, 0x26, 0xE0, 0x00, 0x45, 0x9C, 0x40, 0x00, 0xC5, 0x1C, 0x40, 0x00,
    0x45, 0xDA, 0xC0, 0x00, 0xC5, 0xDA, 0xC0, 0x00, 0x46, 0x0C, 0xA0, 0x00,
    0xC5, 0x9C, 0x40, 0x00, 0x46, 0x3B, 0x80, 0x00, 0xC6, 0x3B, 0x80, 0x00,
    0x41, 0xA0, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00, 0x44, 0xC2, 0xA9, 0x9A,
    0x00, 0x00, 0x00, 0x00, 0x45, 0x26, 0xE0, 0x00, 0xC5, 0x26, 0xE0, 0x00,
    0x45, 0x9C, 0x40, 0x00, 0xC5, 0x1C, 0x40, 0x00, 0x45, 0xDA, 0xC0, 0x00,
    0xC5, 0xDA, 0xC0, 0x00, 0x46, 0x0C, 0xA0, 0x00, 0xC5, 0x9C, 0x40, 0x00,
    0x46, 0x3B, 0x80, 0x00, 0xC6, 0x3B, 0x80, 0x00, 0x41, 0xA0, 0x00, 0x00,
    0x42, 0x34, 0x00, 0x00, 0x44, 0xC2, 0xA9, 0x9A, 0x00, 0x00, 0x00, 0x00,
    0x45, 0x26, 0xE0, 0x00, 0xC5, 0x26, 0xE0, 0x00, 0x45, 0x9C, 0x40, 0x00,
    0xC5, 0x1C, 0x40, 0x00, 0x45, 0xDA, 0xC0, 0x00, 0xC5, 0xDA, 0xC0, 0x00,
    0x46, 0x0C, 0xA0, 0x00, 0xC5, 0x9C, 0x40, 0x00, 0x46, 0x3B, 0x80, 0x00,
    0xC6, 0x3B, 0x80, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00,
    0x44, 0xC2, 0xA9, 0x9A, 0x00, 0x00, 0x00, 0x00, 0x45, 0x26, 0xE0, 0x00,
    0xC5, 0x26, 0xE0, 0x00  
};

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80131300
mpGroundData *gMPCollisionGroundData;

// 0x80131304
mpYakumonoDObj *gMPCollisionYakumonoDObjs;

// 0x80131308
mpEdgeBounds gMPCollisionEdgeBounds;

// 0x80131348
mpLineGroup gMPCollisionLineGroups[nMPLineKindEnumMax];

// 0x80131368
mpGeometryInfo *gMPCollisionGeometry;

// 0x8013136C
mpVertexInfoContainer *gMPCollisionVertexInfo;

// 0x80131370
mpVertexPosContainer *gMPCollisionVertexData; // Vertex positions

// 0x80131374
mpVertexArray *gMPCollisionVertexIDs;

// 0x80131378
mpVertexLinks *gMPCollisionVertexLinks;

// 0x8013137C
Vec3f *gMPCollisionDynamics;

// 0x80131380
mpMapObjContainer *gMPCollisionMapObjs;

// 0x80131384
s32 gMPCollisionLinesNum;

// 0x80131388
gsColorRGBA gMPCollisionLightColor;

// 0x8013138C
s32 gMPCollisionYakumonosNum;

// 0x80131390
f32 gMPCollisionLightAngleX;

// 0x80131394
f32 gMPCollisionLightAngleY;

// 0x80131398
u16 gMPCollisionUpdateFrame;

// 0x8013139C
u32 gMPCollisionBGMCurrent;

// 0x801313A0
u32 gMPCollisionBGMDefault;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800F39F0
f32 mpCollisionGetLineDistanceUD(f32 opx, s32 v1x, s32 v1y, s32 v2x, s32 v2y)
{
    return v1y + (((opx - v1x) / (v2x - v1x)) * (v2y - v1y));
}

// 0x800F3A34
f32 mpCollisionGetLineDistanceLR(f32 opy, s32 v1x, s32 v1y, s32 v2x, s32 v2y)
{
    return v1x + (((opy - v1y) / (v2y - v1y)) * (v2x - v1x));
}

// 0x800F3A78
sb32 mpCollisionGetUDCommon(s32 line_id, Vec3f *object_pos, f32 *dist, u32 *flags, Vec3f *angle, s32 ud)
{
    mpVertexLinks *vlinks;
    DObj *yakumono_dobj;
    f32 vnear;
    u16 *pv;
    s32 v1x;
    s32 v1y;
    s32 v2x;
    s32 v2y;
    f32 vfar;
    f32 object_pos_x;
    f32 object_pos_y;
    s32 vid;
    u16 vertex1;
    s32 i;

    if ((line_id == -1) || (line_id == -2)) // -1 = not above ground, -2 = ???
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetUUCommon() id = %d\n", line_id); // Since we're exclusively checking ground collision and the line ID passed isn't ground-valid, report the error

            smRunPrintGObjStatus();
        }
    }
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[gMPCollisionVertexInfo->vertex_info[line_id].yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetUUCommon() no collsion\n");

            smRunPrintGObjStatus();
        }
    }
    vlinks = &gMPCollisionVertexLinks[line_id];

    if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
    {
        object_pos_x = object_pos->x - yakumono_dobj->translate.vec.f.x;
        object_pos_y = object_pos->y - yakumono_dobj->translate.vec.f.y;
    }
    else
    {
        object_pos_x = object_pos->x;
        object_pos_y = object_pos->y;
    }
    vertex1 = vlinks->vertex1;
    pv = &gMPCollisionVertexIDs->vertex_id[vertex1];
    v1x = gMPCollisionVertexData->vpos[pv[0]].pos.x;
    vid = vlinks->vertex2 - 1;
    v2x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex1 + vid]].pos.x;

    if (v2x < v1x)
    {
        vfar = v1x;
        vnear = v2x;
    }
    else
    {
        vfar = v2x;
        vnear = v1x;
    }
    if ((object_pos_x <= (vnear - 0.001F)) || ((vfar + 0.001F) <= object_pos_x))
    {
        return FALSE;
    }
    if (object_pos_x <= vnear)
    {
        object_pos_x = vnear;
    }
    else if (vfar <= object_pos_x)
    {
        object_pos_x = vfar;
    }
    if (vid != 1)
    {
        for (i = 0; i < vid; i++, pv++)
        {
            v1x = gMPCollisionVertexData->vpos[pv[0]].pos.x;
            v2x = gMPCollisionVertexData->vpos[pv[1]].pos.x;

            if (v2x == v1x)
            {
                while (TRUE)
                {
                    gsFatalPrintF("same vtx x error mpGetUUCommon\n");
                    smRunPrintGObjStatus();
                }
            }
            if (((v1x <= object_pos_x) && (object_pos_x <= v2x)) || ((v2x <= object_pos_x) && (object_pos_x <= v1x)))
            {
                break;
            }
        }
    }
    v1y = gMPCollisionVertexData->vpos[pv[0]].pos.y;
    v2y = gMPCollisionVertexData->vpos[pv[1]].pos.y;

    if (flags != NULL)
    {
        *flags = gMPCollisionVertexData->vpos[pv[0]].vertex_flags;
    }
    if (dist != NULL)
    {
        *dist = mpCollisionGetLineDistanceUD(object_pos_x, v1x, v1y, v2x, v2y) - object_pos_y;
    }
    if (angle != NULL)
    {
        mpCollisionGetUDAngle(angle, v1x, v1y, v2x, v2y, ud);
    }
    return TRUE;
}

// 0x800F3DD8
sb32 mpCollisionGetUDCommonUp(s32 line_id, Vec3f *object_pos, f32 *dist, u32 *flags, Vec3f *angle)
{
    return mpCollisionGetUDCommon(line_id, object_pos, dist, flags, angle, nGMDirectionU);
}

// 0x800F3E04
sb32 mpCollisionGetUDCommonDown(s32 line_id, Vec3f *object_pos, f32 *dist, u32 *flags, Vec3f *angle)
{
    return mpCollisionGetUDCommon(line_id, object_pos, dist, flags, angle, nGMDirectionD);
}

// 0x800F3E30
sb32 mpCollisionGetLRCommon(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle, s32 lr)
{
    mpVertexLinks *vlinks;
    DObj *yakumono_dobj;
    f32 vnear;
    f32 vfar;
    s32 v1x;
    s32 v1y;
    s32 v2x;
    s32 v2y;
    f32 object_pos_y;
    f32 object_pos_x;
    s32 vid;
    u16 vertex1;
    u16 *pv;
    s32 i;

    if ((line_id == -1) || (line_id == -2)) // -1 = not above ground, -2 = ???
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetLRCommon() id = %d\n", line_id);

            smRunPrintGObjStatus();
        }
    }
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[gMPCollisionVertexInfo->vertex_info[line_id].yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetLRCommon() no collision\n");

            smRunPrintGObjStatus();
        }
    }
    vlinks = &gMPCollisionVertexLinks[line_id];

    if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
    {
        object_pos_x = object_pos->x - yakumono_dobj->translate.vec.f.x;
        object_pos_y = object_pos->y - yakumono_dobj->translate.vec.f.y;
    }
    else
    {
        object_pos_x = object_pos->x;
        object_pos_y = object_pos->y;
    }
    vertex1 = vlinks->vertex1;
    pv = &gMPCollisionVertexIDs->vertex_id[vertex1];
    v1y = gMPCollisionVertexData->vpos[pv[0]].pos.y;
    vid = vlinks->vertex2 - 1;
    v2y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex1 + vid]].pos.y;

    if (v2y < v1y)
    {
        vfar = v1y;
        vnear = v2y;
    }
    else
    {
        vfar = v2y;
        vnear = v1y;
    }
    if ((object_pos_y <= (vnear - 0.001F)) || ((vfar + 0.001F) <= object_pos_y))
    {
        return FALSE;
    }
    if (object_pos_y <= vnear)
    {
        object_pos_y = vnear;
    }
    else if (vfar <= object_pos_y)
    {
        object_pos_y = vfar;
    }
    if (vid != 1)
    {
        for (i = 0; i < vid; i++, pv++)
        {
            v1y = gMPCollisionVertexData->vpos[pv[0]].pos.y;
            v2y = gMPCollisionVertexData->vpos[pv[1]].pos.y;

            if (v2y == v1y)
            {
                while (TRUE)
                {
                    gsFatalPrintF("same vtx y error mpGetLRCommon\n");
                    smRunPrintGObjStatus();
                }
            }
            if (((v1y <= object_pos_y) && (object_pos_y <= v2y)) || ((v2y <= object_pos_y) && (object_pos_y <= v1y)))
            {
                break;
            }
        }
    }
    v1x = gMPCollisionVertexData->vpos[pv[0]].pos.x;
    v2x = gMPCollisionVertexData->vpos[pv[1]].pos.x;

    if (flags != NULL)
    {
        *flags = gMPCollisionVertexData->vpos[pv[0]].vertex_flags;
    }
    if (arg2 != NULL)
    {
        *arg2 = mpCollisionGetLineDistanceLR(object_pos_y, v1x, v1y, v2x, v2y) - object_pos_x;
    }
    if (angle != NULL)
    {
        mpCollisionGetLRAngle(angle, v1x, v1y, v2x, v2y, lr);
    }
    return TRUE;
}

// 0x800F4194
sb32 mpCollisionGetLRCommonLeft(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle)
{
    return mpCollisionGetLRCommon(line_id, object_pos, arg2, flags, angle, nGMDirectionL);
}

// 0x800F41C0
sb32 mpCollisionGetLRCommonRight(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle)
{
    return mpCollisionGetLRCommon(line_id, object_pos, arg2, flags, angle, nGMDirectionR);
}

// 0x800F41EC
void mpCollisionGetLREdge(s32 line_id, Vec3f *object_pos, s32 lr)
{
    mpVertexLinks *vlinks;
    DObj *yakumono_dobj;
    s32 v1x;
    s32 v1y;
    s32 v2x;
    s32 v2y;
    s32 vid;
    u16 vertex1;
    sb32 cmp_lt;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetLREdge() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[gMPCollisionVertexInfo->vertex_info[line_id].yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetLREdge() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    vlinks = &gMPCollisionVertexLinks[line_id];
    vertex1 = vlinks->vertex1;
    vid = (vlinks->vertex2 + vertex1) - 1;
    v1x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex1]].pos.x;
    v2x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vid]].pos.x;

    cmp_lt = (lr < nGMDirectionC) ? (v1x < v2x) : (v2x < v1x);

    if (cmp_lt != FALSE)
    {
        object_pos->x = v1x;
        object_pos->y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex1]].pos.y;
    }
    else
    {
        object_pos->x = v2x;
        object_pos->y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vid]].pos.y;
    }
    object_pos->z = 0.0F;

    if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
    {
        object_pos->x += yakumono_dobj->translate.vec.f.x;
        object_pos->y += yakumono_dobj->translate.vec.f.y;
    }
}

// 0x800F4408
void mpCollisionGetLREdgeRight(s32 line_id, Vec3f *object_pos)
{
    mpCollisionGetLREdge(line_id, object_pos, nGMDirectionR);
}

// 0x800F4428
void mpCollisionGetLREdgeLeft(s32 line_id, Vec3f *object_pos)
{
    mpCollisionGetLREdge(line_id, object_pos, nGMDirectionL);
}

// 0x800F4448
void func_ovl2_800F4448(s32 line_id, Vec3f *object_pos)
{
    mpCollisionGetLREdge(line_id, object_pos, nGMDirectionR);
}

// 0x800F4468
void func_ovl2_800F4468(s32 line_id, Vec3f *object_pos)
{
    mpCollisionGetLREdge(line_id, object_pos, nGMDirectionL);
}

// 0x800F4488
void mpCollisionGetUDEdge(s32 line_id, Vec3f *object_pos, s32 ud)
{
    mpVertexLinks *vlinks;
    DObj *yakumono_dobj;
    mpVertexData *vpos1;
    mpVertexData *vpos2;
    s32 v1x;
    s32 v1y;
    s32 v2x;
    s32 v2y;
    s32 vid;
    u16 vertex1;
    sb32 cmp_lt;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetUDEdge() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[gMPCollisionVertexInfo->vertex_info[line_id].yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetUDEdge() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    vlinks = &gMPCollisionVertexLinks[line_id];
    vertex1 = vlinks->vertex1;
    vid = (vlinks->vertex2 + vertex1) - 1;
    vpos1 = &gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex1]];
    vpos2 = &gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vid]];

    v1y = vpos1->pos.y;
    v2y = vpos2->pos.y;

    cmp_lt = (ud < nGMDirectionC) ? (v1y < v2y) : (v2y < v1y);

    if (cmp_lt != FALSE)
    {
        object_pos->x = vpos1->pos.x;
        object_pos->y = v1y;
    }
    else
    {
        object_pos->x = vpos2->pos.x;
        object_pos->y = v2y;
    }
    object_pos->z = 0.0F;

    if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
    {
        object_pos->x += yakumono_dobj->translate.vec.f.x;
        object_pos->y += yakumono_dobj->translate.vec.f.y;
    }
}

// 0x800F4650
void mpCollisionGetUDEdgeUp(s32 line_id, Vec3f *object_pos)
{
    mpCollisionGetUDEdge(line_id, object_pos, nGMDirectionU);
}

// 0x800F4670
void mpCollisionGetUDEdgeDown(s32 line_id, Vec3f *object_pos)
{
    mpCollisionGetUDEdge(line_id, object_pos, nGMDirectionD);
}

// 0x800F4690
void func_ovl2_800F4690(s32 line_id, Vec3f *object_pos)
{
    mpCollisionGetUDEdge(line_id, object_pos, nGMDirectionU);
}

// 0x800F46B0
void func_ovl2_800F46B0(s32 line_id, Vec3f *object_pos)
{
    mpCollisionGetUDEdge(line_id, object_pos, nGMDirectionD);
}

// 0x800F46D0
void mpCollisionGetUDAngle(Vec3f *angle, s32 v1x, s32 v1y, s32 v2x, s32 v2y, s32 ud)
{
    f32 py, sqrt_py;
    f32 dist_y;

    angle->z = 0.0F;

    dist_y = (v2y - v1y);

    if (dist_y == 0.0F)
    {
        angle->x = 0.0F;
        angle->y = ud;

        return;
    }
    py = -(dist_y / (v2x - v1x));

    sqrt_py = 1.0F / sqrtf(SQUARE(py) + 1.0F);

    if (ud < 0)
    {
        angle->x = (-py * sqrt_py);
        angle->y = -sqrt_py;
    }
    else
    {
        angle->x = (py * sqrt_py);
        angle->y = sqrt_py;
    }
    lbVector_Vec3fNormalize(angle);
}

// 0x800F47AC Also calculates angle? Runs whenever character lands directly on a line surface that isn't 0 degrees
sb32 mpCollisionCheckGroundSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
{
    s32 vfary;
    s32 vneary;
    f32 ddist_x;
    f32 ddist_y;
    s32 vfarx;
    s32 vnearx;
    s32 vdist_y;
    s32 vdist_x;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 vddiv;
    f32 vddist_x;
    f32 vddist_y;
    f32 vddistdiv;
    f32 vdscale;
    f32 scale;
    f32 var_f18;

    vdist_y = v2y - v1y;
    ddist_y = d1y - d2y;

    if (vdist_y < 0)
    {
        vneary = v2y;
        vfary = v1y;
    }
    else
    {
        vfary = v2y;
        vneary = v1y;
    }
    if (ddist_y > 0.0F)
    {
        if (((vfary + 0.001F) < d2y) || (d1y < (vneary - 0.001F)))
        {
            return FALSE;
        }
    }
    else if (((vfary + 0.001F) < d1y) || (d2y < (vneary - 0.001F)))
    {
        return FALSE;
    }
    ddist_x = d1x - d2x;
    vdist_x = v2x - v1x;

    if (vdist_x < 0)
    {
        vnearx = v2x;
        vfarx = v1x;
    }
    else
    {
        vfarx = v2x;
        vnearx = v1x;
    }
    if (ddist_x > 0.0F)
    {
        if ((vfarx < d2x) || (d1x < vnearx))
        {
            return FALSE;
        }
    }
    else if ((vfarx < d1x) || (d2x < vnearx))
    {
        return FALSE;
    }
    if ((d2y - (v1y + (((d2x - v1x) / vdist_x) * vdist_y))) <= (-0.001F))
    {
        temp_f12_2 = v1y + (((d1x - v1x) / vdist_x) * vdist_y);

        if ((d1y - temp_f12_2) < 0.001F)
        {
            if (((-0.001F) < (d1y - temp_f12_2)) && (d1x <= vfarx) && (vnearx <= d1x))
            {
                *dfx = d1x;
                *dfy = temp_f12_2;

                return TRUE;
            }
        }
        else
        {
            vddist_x = v1x - d1x;
            vddist_y = v1y - d1y;

            var_f18 = (ddist_y * vddist_x) - (ddist_x * vddist_y);
            scale = (vdist_y * ddist_x) - (vdist_x * ddist_y);

            vddiv = var_f18 / scale;

            if (vddiv < 0.0F)
            {
                if (vddiv < (-0.001F))
                {
                    return FALSE;
                }
                var_f18 = 0.0F;
            }
            else if (vddiv > 1.0F)
            {
                if (1.001F < vddiv)
                {
                    return FALSE;
                }
                var_f18 = scale;
            }
            vddistdiv = ((vdist_x * vddist_y) - (vdist_y * vddist_x)) / scale;

            if ((vddistdiv < (-0.001F)) || (1.001F < vddistdiv))
            {
                return FALSE;
            }
            vdscale = 1.0F / scale;

            *dfx = v1x + (var_f18 * vdist_x * vdscale);
            *dfy = v1y + (var_f18 * vdist_y * vdscale);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800F4BD8
sb32 mpCollisionCheckGroundLineCollisionSame(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindGround];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = yakumono_dobj->translate.vec.f.x;
                vedge_y = yakumono_dobj->translate.vec.f.y;

                vpdist_x = position->x - vedge_x;
                vpdist_y = position->y - vedge_y;

                vtdist_x = translate->x - vedge_x;
                vtdist_y = translate->y - vedge_y;
            }
            else
            {
                vedge_x = vedge_y = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_y < vtdist_y)
            {
                vdist1 = vpdist_y - 0.001F;
                vdist2 = vtdist_y + 0.001F;
            }
            else
            {
                vdist1 = vtdist_y - 0.001F;
                vdist2 = vpdist_y + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                else if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPCollisionVertexLinks[line_id].vertex1;

                    vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPCollisionVertexLinks[line_id].vertex1; vertex_id < (gMPCollisionVertexLinks[line_id].vertex1 + gMPCollisionVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_y)
                        {
                            if (vtdist_y < vpdist_y)
                            {
                                if (mpCollisionCheckUDSurfaceFlat(temp_s1, temp_s0, vpos_x, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_x;
                                        ga_last->y = spAC + vedge_y;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->x = angle->z = 0.0F;
                                        angle->y = 1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y);
                                }
                            }
                        }
                        else if (mpCollisionCheckGroundSurfaceTilt(temp_s1, temp_s0, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_x;
                                ga_last->y = spAC + vedge_y;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollisionGetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, nGMDirectionU);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y);
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F521C
sb32 mpCollisionCheckGroundLineCollisionDiff(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_y;
    f32 dynamic_y;
    f32 vedge_x;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindGround];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = yakumono_dobj->translate.vec.f.x;
                vedge_y = yakumono_dobj->translate.vec.f.y;

                dynamic_y = gMPCollisionDynamics[line_info->yakumono_id].y;

                vpdist_x = (position->x - vedge_x) + gMPCollisionDynamics[line_info->yakumono_id].x;
                vpdist_y = (position->y - vedge_y) + dynamic_y;

                vtdist_x = translate->x - vedge_x;
                vtdist_y = translate->y - vedge_y;
            }
            else
            {
                dynamic_y = 0.0F;
                vedge_x = vedge_y = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_y < vtdist_y)
            {
                vdist1 = vpdist_y - 0.001F;
                vdist2 = vtdist_y + 0.001F;
            }
            else
            {
                vdist1 = vtdist_y - 0.001F;
                vdist2 = vpdist_y + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPCollisionVertexLinks[line_id].vertex1;

                    vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPCollisionVertexLinks[line_id].vertex1; vertex_id < (gMPCollisionVertexLinks[line_id].vertex1 + gMPCollisionVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_y)
                        {
                            if (vtdist_y < vpdist_y)
                            {
                                if (mpCollisionCheckUDSurfaceFlat(temp_s1, temp_s0, vpos_x, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y)))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_x;
                                        ga_last->y = spAC + vedge_y;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->x = angle->z = 0.0F;
                                        angle->y = 1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y));
                                }
                            }
                        }
                        else if (mpCollisionCheckGroundSurfaceTilt(temp_s1, temp_s0, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y)))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_x;
                                ga_last->y = spAC + vedge_y;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollisionGetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, nGMDirectionU);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y));
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F58A0
sb32 mpCollisionCheckUDSurfaceFlat(s32 v1x, s32 v1y, s32 vpos_y, f32 vpdist_x, f32 vpdist_y, f32 vtdist_x, f32 vtdist_y, f32 *arg7, f32 *arg8)
{
    f32 temp_f18;
    s32 vnear;
    s32 vfar;
    f32 ddist_x;
    s32 vdist_y = vpos_y - v1x;
    f32 ddist_y = vpdist_y - vtdist_y;
    f32 vddist_y = v1y - vpdist_y;

    if (ddist_y > 0.0F)
    {
        if (((v1y - 0.001F) > vpdist_y) || (vtdist_y >= v1y))
        {
            return FALSE;
        }
    }
    else if (((v1y + 0.001F) < vpdist_y) || (vtdist_y <= v1y))
    {
        return FALSE;
    }
    ddist_x = vpdist_x - vtdist_x;

    if (vdist_y < 0)
    {
        vnear = vpos_y;
        vfar = v1x;
    }
    else
    {
        vfar = vpos_y;
        vnear = v1x;
    }

    if (ddist_x > 0.0F)
    {
        if ((vfar < vtdist_x) || (vpdist_x < vnear))
        {
            return FALSE;
        }
    }
    else if ((vfar < vpdist_x) || (vtdist_x < vnear))
    {
        return FALSE;
    }
    temp_f18 = ((vddist_y / ddist_y) * ddist_x) + vpdist_x;

    if ((temp_f18 < vnear) || (temp_f18 > vfar))
    {
        return FALSE;
    }

    *arg7 = temp_f18;
    *arg8 = v1y;

    return TRUE;
}

// 0x800F5A64
sb32 mpCollisionCheckCeilSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
{
    s32 vfary;
    s32 vneary;
    f32 ddist_x;
    f32 ddist_y;
    s32 vfarx;
    s32 vnearx;
    s32 vdist_y;
    s32 vdist_x;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 vddiv;
    f32 vddist_x;
    f32 vddist_y;
    f32 vddistdiv;
    f32 vdscale;
    f32 scale;
    f32 var_f18;

    vdist_y = v2y - v1y;
    ddist_y = d1y - d2y;

    if (vdist_y < 0)
    {
        vneary = v2y;
        vfary = v1y;
    }
    else
    {
        vfary = v2y;
        vneary = v1y;
    }
    if (ddist_y > 0.0F)
    {
        if (((vfary + 0.001F) < d2y) || (d1y < (vneary - 0.001F)))
        {
            return FALSE;
        }
    }
    else if (((vfary + 0.001F) < d1y) || (d2y < (vneary - 0.001F)))
    {
        return FALSE;
    }
    ddist_x = d1x - d2x;
    vdist_x = v2x - v1x;

    if (vdist_x < 0)
    {
        vnearx = v2x;
        vfarx = v1x;
    }
    else
    {
        vfarx = v2x;
        vnearx = v1x;
    }
    if (ddist_x > 0.0F)
    {
        if ((vfarx < d2x) || (d1x < vnearx))
        {
            return FALSE;
        }
    }
    else if ((vfarx < d1x) || (d2x < vnearx))
    {
        return FALSE;
    }
    if ((d2y - (v1y + (((d2x - v1x) / vdist_x) * vdist_y))) >= 0.001F)
    {
        temp_f12_2 = v1y + (((d1x - v1x) / vdist_x) * vdist_y);

        if ((d1y - temp_f12_2) > -0.001F)
        {
            if (((d1y - temp_f12_2) < 0.001F) && (d1x <= vfarx) && (vnearx <= d1x))
            {
                *dfx = d1x;
                *dfy = temp_f12_2;

                return TRUE;
            }
        }
        else
        {
            vddist_x = v1x - d1x;
            vddist_y = v1y - d1y;

            var_f18 = (ddist_y * vddist_x) - (ddist_x * vddist_y);
            scale = (vdist_y * ddist_x) - (vdist_x * ddist_y);
            vddiv = var_f18 / scale;

            if (vddiv < 0.0F)
            {
                if (vddiv < -0.001F)
                {
                    return FALSE;
                }
                var_f18 = 0.0F;
            }
            else if (vddiv > 1.0F)
            {
                if (vddiv > 1.001F)
                {
                    return FALSE;
                }
                var_f18 = scale;
            }
            vddistdiv = ((vdist_x * vddist_y) - (vdist_y * vddist_x)) / scale;

            if ((vddistdiv < -0.001F) || (vddistdiv > 1.001F))
            {
                return FALSE;
            }
            vdscale = 1.0F / scale;

            *dfx = v1x + (var_f18 * vdist_x * vdscale);
            *dfy = v1y + (var_f18 * vdist_y * vdscale);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800F5E90
sb32 mpCollisionCheckCeilLineCollisionSame(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindCeil];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = yakumono_dobj->translate.vec.f.x;
                vedge_y = yakumono_dobj->translate.vec.f.y;

                vpdist_x = position->x - vedge_x;
                vpdist_y = position->y - vedge_y;

                vtdist_x = translate->x - vedge_x;
                vtdist_y = translate->y - vedge_y;
            }
            else
            {
                vedge_x = vedge_y = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_y < vtdist_y)
            {
                vdist1 = vpdist_y - 0.001F;
                vdist2 = vtdist_y + 0.001F;
            }
            else
            {
                vdist1 = vtdist_y - 0.001F;
                vdist2 = vpdist_y + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                else if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPCollisionVertexLinks[line_id].vertex1;

                    vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPCollisionVertexLinks[line_id].vertex1; vertex_id < (gMPCollisionVertexLinks[line_id].vertex1 + gMPCollisionVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_y)
                        {
                            if (vtdist_y > vpdist_y)
                            {
                                if (mpCollisionCheckUDSurfaceFlat(temp_s1, temp_s0, vpos_x, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_x;
                                        ga_last->y = spAC + vedge_y;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->x = angle->z = 0.0F;
                                        angle->y = -1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y);
                                }
                            }
                        }
                        else if (mpCollisionCheckCeilSurfaceTilt(temp_s1, temp_s0, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_x;
                                ga_last->y = spAC + vedge_y;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollisionGetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, nGMDirectionD);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y);
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F64D4
sb32 mpCollisionCheckCeilLineCollisionDiff(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_y;
    f32 dynamic_y;
    f32 vedge_x;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindCeil];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = yakumono_dobj->translate.vec.f.x;
                vedge_y = yakumono_dobj->translate.vec.f.y;

                dynamic_y = gMPCollisionDynamics[line_info->yakumono_id].y;

                vpdist_x = (position->x - vedge_x) + gMPCollisionDynamics[line_info->yakumono_id].x;
                vpdist_y = (position->y - vedge_y) + dynamic_y;

                vtdist_x = translate->x - vedge_x;
                vtdist_y = translate->y - vedge_y;
            }
            else
            {
                dynamic_y = 0.0F;
                vedge_x = vedge_y = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_y < vtdist_y)
            {
                vdist1 = vpdist_y - 0.001F;
                vdist2 = vtdist_y + 0.001F;
            }
            else
            {
                vdist1 = vtdist_y - 0.001F;
                vdist2 = vpdist_y + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPCollisionVertexLinks[line_id].vertex1;

                    vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPCollisionVertexLinks[line_id].vertex1; vertex_id < (gMPCollisionVertexLinks[line_id].vertex1 + gMPCollisionVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_y)
                        {
                            if (vtdist_y > vpdist_y)
                            {
                                if (mpCollisionCheckUDSurfaceFlat(temp_s1, temp_s0, vpos_x, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y)))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_x;
                                        ga_last->y = spAC + vedge_y;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->x = angle->z = 0.0F;
                                        angle->y = -1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y));
                                }
                            }
                        }
                        else if (mpCollisionCheckCeilSurfaceTilt(temp_s1, temp_s0, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y)))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_x;
                                ga_last->y = spAC + vedge_y;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollisionGetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, nGMDirectionD);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y));
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F6B58
sb32 mpCollisionCheckRWallLineCollisionSame(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindRWall];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = yakumono_dobj->translate.vec.f.x;
                vedge_x = yakumono_dobj->translate.vec.f.y;

                vpdist_x = position->x - vedge_y;
                vpdist_y = position->y - vedge_x;

                vtdist_x = translate->x - vedge_y;
                vtdist_y = translate->y - vedge_x;
            }
            else
            {
                vedge_y = vedge_x = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_x < vtdist_x)
            {
                vdist1 = vpdist_x - 0.001F;
                vdist2 = vtdist_x + 0.001F;
            }
            else
            {
                vdist1 = vtdist_x - 0.001F;
                vdist2 = vpdist_x + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                else if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPCollisionVertexLinks[line_id].vertex1;

                    vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPCollisionVertexLinks[line_id].vertex1; vertex_id < (gMPCollisionVertexLinks[line_id].vertex1 + gMPCollisionVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_x)
                        {
                            if (vtdist_x < vpdist_x)
                            {
                                if (mpCollisionCheckLRSurfaceFlat(temp_s0, temp_s1, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_y;
                                        ga_last->y = spAC + vedge_x;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->y = angle->z = 0.0F;
                                        angle->x = 1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x);
                                }
                            }
                        }
                        else if (mpCollisionCheckRWallSurfaceTilt(temp_s0, temp_s1, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_y;
                                ga_last->y = spAC + vedge_x;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollisionGetLRAngle(angle, temp_s0, temp_s1, vpos_x, vpos_y, nGMDirectionR);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x);
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F71A0
void mpCollisionGetLRAngle(Vec3f *angle, s32 v1x, s32 v1y, s32 v2x, s32 v2y, s32 lr)
{
    f32 py, sqrt_py;
    f32 dist_x;

    angle->z = 0.0F;

    dist_x = (v2x - v1x);

    if (dist_x == 0.0F)
    {
        angle->x = lr;
        angle->y = 0.0F;

        return;
    }
    py = -(dist_x / (v2y - v1y));

    sqrt_py = 1.0F / sqrtf(SQUARE(py) + 1.0F);

    if (lr < 0)
    {
        // -sqrt_py
        angle->x = -sqrt_py;
        angle->y = (-py * sqrt_py);
    }
    else
    {
        angle->x = sqrt_py;
        angle->y = (py * sqrt_py);
    }
    lbVector_Vec3fNormalize(angle);
}

// 0x800F7270
sb32 mpCollisionCheckRWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
{
    s32 vfarx;
    s32 vnearx;
    f32 ddist_x;
    f32 ddist_y;
    s32 vfary;
    s32 vneary;
    s32 vdist_x;
    s32 vdist_y;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 vddiv;
    f32 vddist_x;
    f32 vddist_y;
    f32 vddistdiv;
    f32 vdscale;
    f32 scale;
    f32 var_f18;

    vdist_x = v2x - v1x;
    ddist_x = d1x - d2x;

    if (vdist_x < 0)
    {
        vnearx = v2x;
        vfarx = v1x;
    }
    else
    {
        vfarx = v2x;
        vnearx = v1x;
    }
    if (ddist_x > 0.0F)
    {
        if (((vfarx + 0.001F) < d2x) || (d1x < (vnearx - 0.001F)))
        {
            return FALSE;
        }
    }
    else if (((vfarx + 0.001F) < d1x) || (d2x < (vnearx - 0.001F)))
    {
        return FALSE;
    }
    ddist_y = d1y - d2y;
    vdist_y = v2y - v1y;

    if (vdist_y < 0)
    {
        vneary = v2y;
        vfary = v1y;
    }
    else
    {
        vfary = v2y;
        vneary = v1y;
    }
    if (ddist_y > 0.0F)
    {
        if ((vfary < d2y) || (d1y < vneary))
        {
            return FALSE;
        }
    }
    else if ((vfary < d1y) || (d2y < vneary))
    {
        return FALSE;
    }
    if ((d2x - (v1x + (((d2y - v1y) / (v2y - v1y)) * vdist_x))) <= (-0.001F))
    {
        temp_f12_2 = v1x + (((d1y - v1y) / vdist_y) * vdist_x);

        if ((d1x - temp_f12_2) < 0.001F)
        {
            if ((((-0.001F) < (d1x - temp_f12_2)) && (d1y <= vfary)) && (vneary <= d1y))
            {
                *dfx = temp_f12_2;
                *dfy = d1y;

                return TRUE;
            }
        }
        else
        {
            vddist_x = v1x - d1x;
            vddist_y = v1y - d1y;

            var_f18 = (ddist_y * vddist_x) - (ddist_x * vddist_y);
            scale = (vdist_y * ddist_x) - (vdist_x * ddist_y);

            vddiv = var_f18 / scale;

            if (vddiv < 0.0F)
            {
                if (vddiv < (-0.001F))
                {
                    return FALSE;
                }
                var_f18 = 0.0F;
            }
            else if (vddiv > 1.0F)
            {
                if (1.001F < vddiv)
                {
                    return FALSE;
                }
                var_f18 = scale;
            }
            vddistdiv = ((vdist_x * vddist_y) - (vdist_y * vddist_x)) / scale;

            if ((vddistdiv < (-0.001F)) || (1.001F < vddistdiv))
            {
                return FALSE;
            }
            vdscale = 1.0F / scale;

            *dfx = v1x + ((var_f18 * vdist_x) * vdscale);
            *dfy = v1y + ((var_f18 * vdist_y) * vdscale);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800F769C
sb32 mpCollisionCheckRWallLineCollisionDiff(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 dynamic_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindRWall];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = yakumono_dobj->translate.vec.f.x;
                vedge_x = yakumono_dobj->translate.vec.f.y;

                dynamic_x = gMPCollisionDynamics[line_info->yakumono_id].x;

                vpdist_x = (position->x - vedge_y) + dynamic_x;
                vpdist_y = (position->y - vedge_x) + gMPCollisionDynamics[line_info->yakumono_id].y;

                vtdist_x = translate->x - vedge_y;
                vtdist_y = translate->y - vedge_x;
            }
            else
            {
                dynamic_x = 0.0F;
                vedge_y = vedge_x = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_x < vtdist_x)
            {
                vdist1 = vpdist_x - 0.001F;
                vdist2 = vtdist_x + 0.001F;
            }
            else
            {
                vdist1 = vtdist_x - 0.001F;
                vdist2 = vpdist_x + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                else if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPCollisionVertexLinks[line_id].vertex1;

                    vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPCollisionVertexLinks[line_id].vertex1; vertex_id < (gMPCollisionVertexLinks[line_id].vertex1 + gMPCollisionVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_x)
                        {
                            if (vtdist_x < vpdist_x)
                            {
                                if (mpCollisionCheckLRSurfaceFlat(temp_s0, temp_s1, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x)))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_y;
                                        ga_last->y = spAC + vedge_x;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->y = angle->z = 0.0F;
                                        angle->x = 1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x));
                                }
                            }
                        }
                        else if (mpCollisionCheckRWallSurfaceTilt(temp_s0, temp_s1, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x)))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_y;
                                ga_last->y = spAC + vedge_x;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollisionGetLRAngle(angle, temp_s0, temp_s1, vpos_x, vpos_y, nGMDirectionR);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x));
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F7D24
sb32 mpCollisionCheckLRSurfaceFlat(s32 v1x, s32 v1y, s32 vpos_x, f32 vpdist_x, f32 vpdist_y, f32 vtdist_x, f32 vtdist_y, f32 *arg7, f32 *arg8)
{
    s32 unused[2];
    f32 temp_f18;
    s32 vnear;
    s32 vfar;
    f32 ddist_y;
    s32 vdist_x = vpos_x - v1y;
    f32 ddist_x = vpdist_x - vtdist_x;
    f32 vddist_x = v1x - vpdist_x;

    if (ddist_x > 0.0F)
    {
        if (((v1x - 0.001F) > vpdist_x) || (vtdist_x >= v1x))
        {
            return FALSE;
        }
    }
    else if (((v1x + 0.001F) < vpdist_x) || (vtdist_x <= v1x))
    {
        return FALSE;
    }
    ddist_y = vpdist_y - vtdist_y;

    if (vdist_x < 0)
    {
        vnear = vpos_x;
        vfar = v1y;
    }
    else
    {
        vfar = vpos_x;
        vnear = v1y;
    }

    if (ddist_y > 0.0F)
    {
        if ((vfar < vtdist_y) || (vpdist_y < vnear))
        {
            return FALSE;
        }
    }
    else if ((vfar < vpdist_y) || (vtdist_y < vnear))
    {
        return FALSE;
    }
    temp_f18 = ((vddist_x / ddist_x) * ddist_y) + vpdist_y;

    if ((temp_f18 < vnear) || (temp_f18 > vfar))
    {
        return FALSE;
    }

    *arg7 = v1x;
    *arg8 = temp_f18;

    return TRUE;
}

// 0x800F7F00
sb32 mpCollisionCheckLWallLineCollisionSame(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindLWall];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = yakumono_dobj->translate.vec.f.x;
                vedge_x = yakumono_dobj->translate.vec.f.y;

                vpdist_x = position->x - vedge_y;
                vpdist_y = position->y - vedge_x;

                vtdist_x = translate->x - vedge_y;
                vtdist_y = translate->y - vedge_x;
            }
            else
            {
                vedge_y = vedge_x = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_x < vtdist_x)
            {
                vdist1 = vpdist_x - 0.001F;
                vdist2 = vtdist_x + 0.001F;
            }
            else
            {
                vdist1 = vtdist_x - 0.001F;
                vdist2 = vpdist_x + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                else if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPCollisionVertexLinks[line_id].vertex1;

                    vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPCollisionVertexLinks[line_id].vertex1; vertex_id < (gMPCollisionVertexLinks[line_id].vertex1 + gMPCollisionVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_x)
                        {
                            if (vtdist_x > vpdist_x)
                            {
                                if (mpCollisionCheckLRSurfaceFlat(temp_s0, temp_s1, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_y;
                                        ga_last->y = spAC + vedge_x;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->y = angle->z = 0.0F;
                                        angle->x = -1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x);
                                }
                            }
                        }
                        else if (mpCollisionCheckLWallSurfaceTilt(temp_s0, temp_s1, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_y;
                                ga_last->y = spAC + vedge_x;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollisionGetLRAngle(angle, temp_s0, temp_s1, vpos_x, vpos_y, -1);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x);
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F8548
sb32 mpCollisionCheckLWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
{
    s32 vfarx;
    s32 vnearx;
    f32 ddist_x;
    f32 ddist_y;
    s32 vfary;
    s32 vneary;
    s32 vdist_x;
    s32 vdist_y;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 vddiv;
    f32 vddist_x;
    f32 vddist_y;
    f32 vddistdiv;
    f32 vdscale;
    f32 scale;
    f32 var_f18;

    vdist_x = v2x - v1x;
    ddist_x = d1x - d2x;

    if (vdist_x < 0)
    {
        vnearx = v2x;
        vfarx = v1x;
    }
    else
    {
        vfarx = v2x;
        vnearx = v1x;
    }
    if (ddist_x > 0.0F)
    {
        if (((vfarx + 0.001F) < d2x) || (d1x < (vnearx - 0.001F)))
        {
            return FALSE;
        }
    }
    else if (((vfarx + 0.001F) < d1x) || (d2x < (vnearx - 0.001F)))
    {
        return FALSE;
    }
    ddist_y = d1y - d2y;
    vdist_y = v2y - v1y;

    if (vdist_y < 0)
    {
        vneary = v2y;
        vfary = v1y;
    }
    else
    {
        vfary = v2y;
        vneary = v1y;
    }
    if (ddist_y > 0.0F)
    {
        if ((vfary < d2y) || (d1y < vneary))
        {
            return FALSE;
        }
    }
    else if ((vfary < d1y) || (d2y < vneary))
    {
        return FALSE;
    }
    if ((d2x - (v1x + (((d2y - v1y) / (v2y - v1y)) * vdist_x))) >= 0.001F)
    {
        temp_f12_2 = v1x + (((d1y - v1y) / vdist_y) * vdist_x);

        if ((d1x - temp_f12_2) > -0.001F)
        {
            if (((d1x - temp_f12_2) < 0.001F) && (d1y <= vfary) && (vneary <= d1y))
            {
                *dfx = temp_f12_2;
                *dfy = d1y;

                return TRUE;
            }
        }
        else
        {
            vddist_x = v1x - d1x;
            vddist_y = v1y - d1y;

            var_f18 = (ddist_y * vddist_x) - (ddist_x * vddist_y);
            scale = (vdist_y * ddist_x) - (vdist_x * ddist_y);

            vddiv = var_f18 / scale;

            if (vddiv < 0.0F)
            {
                if (vddiv < (-0.001F))
                {
                    return FALSE;
                }
                var_f18 = 0.0F;
            }
            else if (vddiv > 1.0F)
            {
                if (1.001F < vddiv)
                {
                    return FALSE;
                }
                var_f18 = scale;
            }
            vddistdiv = ((vdist_x * vddist_y) - (vdist_y * vddist_x)) / scale;

            if ((vddistdiv < (-0.001F)) || (1.001F < vddistdiv))
            {
                return FALSE;
            }
            vdscale = 1.0F / scale;

            *dfx = v1x + ((var_f18 * vdist_x) * vdscale);
            *dfy = v1y + ((var_f18 * vdist_y) * vdscale);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800F8974
sb32 mpCollisionCheckLWallLineCollisionDiff(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 dynamic_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindLWall];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = yakumono_dobj->translate.vec.f.x;
                vedge_x = yakumono_dobj->translate.vec.f.y;

                dynamic_x = gMPCollisionDynamics[line_info->yakumono_id].x;

                vpdist_x = (position->x - vedge_y) + dynamic_x;
                vpdist_y = (position->y - vedge_x) + gMPCollisionDynamics[line_info->yakumono_id].y;

                vtdist_x = translate->x - vedge_y;
                vtdist_y = translate->y - vedge_x;
            }
            else
            {
                dynamic_x = 0.0F;
                vedge_y = vedge_x = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_x < vtdist_x)
            {
                vdist1 = vpdist_x - 0.001F;
                vdist2 = vtdist_x + 0.001F;
            }
            else
            {
                vdist1 = vtdist_x - 0.001F;
                vdist2 = vpdist_x + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                else if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPCollisionVertexLinks[line_id].vertex1;

                    vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPCollisionVertexLinks[line_id].vertex1; vertex_id < (gMPCollisionVertexLinks[line_id].vertex1 + gMPCollisionVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_x)
                        {
                            if (vtdist_x > vpdist_x)
                            {
                                if (mpCollisionCheckLRSurfaceFlat(temp_s0, temp_s1, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x)))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_y;
                                        ga_last->y = spAC + vedge_x;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->y = angle->z = 0.0F;
                                        angle->x = -1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x));
                                }
                            }
                        }
                        else if (mpCollisionCheckLWallSurfaceTilt(temp_s0, temp_s1, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x)))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_y;
                                ga_last->y = spAC + vedge_x;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollisionGetLRAngle(angle, temp_s0, temp_s1, vpos_x, vpos_y, nGMDirectionL);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x));
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F8FFC
sb32 func_ovl2_800F8FFC(Vec3f *position)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    s32 i, j;
    DObj *yakumono_dobj;
    f32 vpdist_x, vpdist_y;
    s32 line_id;

    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindGround];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - yakumono_dobj->translate.vec.f.x);
                vpdist_y = (position->y - yakumono_dobj->translate.vec.f.y) + 0.001F;
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_prev <= vpdist_y)
                {
                    s32 vertex_id1 = gMPCollisionVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMPCollisionVertexLinks[line_id].vertex2 - 1;

                    s32 x1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.x;
                    s32 x2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + vertex_id2]].pos.x;

                    if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                x1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.x;
                                x2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + 1]].pos.x;

                                if (mpCollisionGetLineDistanceUD(vpdist_x, x1, gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.y, x2, gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + 1]].pos.y) < vpdist_y)
                                {
                                    return TRUE;
                                }
                            }
                        }
                        else if (mpCollisionGetLineDistanceUD(vpdist_x, x1, gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.y, x2, gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + 1]].pos.y) < vpdist_y)
                        {
                            return TRUE;
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

// 0x800F9348
sb32 func_ovl2_800F9348(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindGround];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - yakumono_dobj->translate.vec.f.x);
                vpdist_y = (position->y - yakumono_dobj->translate.vec.f.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_prev <= vpdist_y)
                {
                    s32 vertex_id1 = gMPCollisionVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMPCollisionVertexLinks[line_id].vertex2 - 1;

                    s32 x1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.x;
                    s32 x2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + vertex_id2]].pos.x;
                    s32 y1;
                    s32 y2;

                    if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                x1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.x;
                                x2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + 1]].pos.x;

                                if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                                {
                                    break;
                                }
                            }
                        }
                        y1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.y;
                        y2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + 1]].pos.y;

                        fpos = mpCollisionGetLineDistanceUD(vpdist_x, x1, y1, x2, y2);

                        gdist = fpos - vpdist_y;

                        if (fpos <= vpdist_y)
                        {
                            if (ABSF(gdist) < line_project_pos)
                            {
                                if (project_line_id != NULL)
                                {
                                    *project_line_id = line_id;
                                }
                                if (ga_dist != NULL)
                                {
                                    *ga_dist = gdist;
                                }
                                if (stand_coll_flags != NULL)
                                {
                                    *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollisionGetUDAngle(angle, x1, y1, x2, y2, nGMDirectionU);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// Unused?
sb32 func_ovl2_800F97BC(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindCeil];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - yakumono_dobj->translate.vec.f.x);
                vpdist_y = (position->y - yakumono_dobj->translate.vec.f.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_next >= vpdist_y)
                {
                    s32 vertex_id1 = gMPCollisionVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMPCollisionVertexLinks[line_id].vertex2 - 1;

                    s32 x1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.x;
                    s32 x2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + vertex_id2]].pos.x;
                    s32 y1;
                    s32 y2;

                    if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                x1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.x;
                                x2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + 1]].pos.x;

                                if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                                {
                                    break;
                                }
                            }
                        }
                        y1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.y;
                        y2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + 1]].pos.y;

                        fpos = mpCollisionGetLineDistanceUD(vpdist_x, x1, y1, x2, y2);

                        gdist = fpos - vpdist_y;

                        if (fpos >= vpdist_y)
                        {
                            if (ABSF(gdist) < line_project_pos)
                            {
                                if (project_line_id != NULL)
                                {
                                    *project_line_id = line_id;
                                }
                                if (ga_dist != NULL)
                                {
                                    *ga_dist = gdist;
                                }
                                if (stand_coll_flags != NULL)
                                {
                                    *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollisionGetUDAngle(angle, x1, y1, x2, y2, nGMDirectionD);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F9C30
sb32 func_ovl2_800F9C30(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindRWall];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - yakumono_dobj->translate.vec.f.x);
                vpdist_y = (position->y - yakumono_dobj->translate.vec.f.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_prev <= vpdist_x)
                {
                    s32 vertex_id1 = gMPCollisionVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMPCollisionVertexLinks[line_id].vertex2 - 1;

                    s32 y1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.y;
                    s32 y2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + vertex_id2]].pos.y;
                    s32 x1;
                    s32 x2;

                    if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                y1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.y;
                                y2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + 1]].pos.y;

                                if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                                {
                                    break;
                                }
                            }
                        }
                        x1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.x;
                        x2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + 1]].pos.x;

                        fpos = mpCollisionGetLineDistanceLR(vpdist_y, x1, y1, x2, y2);

                        gdist = fpos - vpdist_x;

                        if (fpos <= vpdist_x)
                        {
                            if (ABSF(gdist) < line_project_pos)
                            {
                                if (project_line_id != NULL)
                                {
                                    *project_line_id = line_id;
                                }
                                if (ga_dist != NULL)
                                {
                                    *ga_dist = gdist;
                                }
                                if (stand_coll_flags != NULL)
                                {
                                    *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollisionGetUDAngle(angle, x1, y1, x2, y2, nGMDirectionU);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// Unused?
sb32 func_ovl2_800FA0A4(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *yakumono_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = F32_MAX;
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[nMPLineKindLWall];
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((line_data->line_count != 0) && (yakumono_dobj->user_data.s < nMPYakumonoStatusOff))
        {
            if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - yakumono_dobj->translate.vec.f.x);
                vpdist_y = (position->y - yakumono_dobj->translate.vec.f.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPCollisionVertexInfo->vertex_info[line_id].coll_pos_next >= vpdist_x)
                {
                    s32 vertex_id1 = gMPCollisionVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMPCollisionVertexLinks[line_id].vertex2 - 1;

                    s32 y1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.y;
                    s32 y2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + vertex_id2]].pos.y;
                    s32 x1;
                    s32 x2;

                    if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                y1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.y;
                                y2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + 1]].pos.y;

                                if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                                {
                                    break;
                                }
                            }
                        }
                        x1 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].pos.x;
                        x2 = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1 + 1]].pos.x;

                        fpos = mpCollisionGetLineDistanceLR(vpdist_y, x1, y1, x2, y2);

                        gdist = fpos - vpdist_x;

                        if (fpos >= vpdist_x)
                        {
                            if (ABSF(gdist) < line_project_pos)
                            {
                                if (project_line_id != NULL)
                                {
                                    *project_line_id = line_id;
                                }
                                if (ga_dist != NULL)
                                {
                                    *ga_dist = gdist;
                                }
                                if (stand_coll_flags != NULL)
                                {
                                    *stand_coll_flags = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollisionGetUDAngle(angle, x1, y1, x2, y2, nGMDirectionD);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800FA518
s32 mpCollisionGetVertexCountLineID(s32 line_id)
{
    DObj *yakumono_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetNbVertex() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[gMPCollisionVertexInfo->vertex_info[line_id].yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetNbVertex() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    return gMPCollisionVertexLinks[line_id].vertex2;
}

// 0x800F15E8
void mpCollisionGetVertexPositionID(s32 line_id, s32 vertex_id, Vec3f *pos)
{
    DObj *yakumono_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetVertex() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[gMPCollisionVertexInfo->vertex_info[line_id].yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetVertex() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    pos->x = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[gMPCollisionVertexLinks[line_id].vertex1 + vertex_id]].pos.x;
    pos->y = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[gMPCollisionVertexLinks[line_id].vertex1 + vertex_id]].pos.y;
    pos->z = 0.0F;

    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[gMPCollisionVertexInfo->vertex_info[line_id].yakumono_id];

    if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
    {
        pos->x += yakumono_dobj->translate.vec.f.x;
        pos->y += yakumono_dobj->translate.vec.f.y;
    }
}

// 0x800FA7B8
void mpCollisionGetSpeedLineID(s32 line_id, Vec3f *speed)
{
    DObj *yakumono_dobj;
    u8 yakumono_id;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetSpeedId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    yakumono_id = gMPCollisionVertexInfo->vertex_info[line_id].yakumono_id;

    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetSpeedId() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    *speed = gMPCollisionDynamics[yakumono_id];
}

// 0x800FA8A4
s32 mpCollisionGetLineTypeID(s32 line_id)
{
    DObj *yakumono_dobj;
    mpVertexInfo *vertex_info;
    u8 yakumono_id;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetKindId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    vertex_info = &gMPCollisionVertexInfo->vertex_info[line_id];
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[vertex_info->yakumono_id];

    if (yakumono_dobj->user_data.s == nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetKindId() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    return vertex_info->line_type;
}

// 0x800FA964
s32 mpCollisionGetEdgeUnderRLineID(s32 line_id)
{
    DObj *yakumono_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUnderRId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    vertex_info = &gMPCollisionVertexInfo->vertex_info[line_id];
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[vertex_info->yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUnderRId() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0x800FAA24
s32 mpCollisionGetEdgeUnderLLineID(s32 line_id)
{
    DObj *yakumono_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUnderLId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    vertex_info = &gMPCollisionVertexInfo->vertex_info[line_id];
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[vertex_info->yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUnderLId() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    return vertex_info->edge_nsign_id;
}

// 0x800FAAE4
s32 mpCollisionGetEdgeUpperRLineID(s32 line_id)
{
    DObj *yakumono_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUpperRId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    vertex_info = &gMPCollisionVertexInfo->vertex_info[line_id];
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[vertex_info->yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUpperRId() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0x800FABA4
s32 mpCollisionGetEdgeUpperLLineID(s32 line_id)
{
    DObj *yakumono_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUpperLId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    vertex_info = &gMPCollisionVertexInfo->vertex_info[line_id];
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[vertex_info->yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUpperLId() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    return vertex_info->edge_nsign_id;
}

// 0x800FAC64
s32 mpCollisionGetEdgeRightULineID(s32 line_id)
{
    DObj *yakumono_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeRightUId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    vertex_info = &gMPCollisionVertexInfo->vertex_info[line_id];
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[vertex_info->yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeRightUId() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0x800FAD24
s32 mpCollisionGetEdgeRightDLineID(s32 line_id)
{
    DObj *yakumono_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeRightDId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    vertex_info = &gMPCollisionVertexInfo->vertex_info[line_id];
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[vertex_info->yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeRightDId() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    return vertex_info->edge_nsign_id;
}

// 0x800FADE4
s32 mpCollisionGetEdgeLeftULineID(s32 line_id)
{
    DObj *yakumono_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeLeftUId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    vertex_info = &gMPCollisionVertexInfo->vertex_info[line_id];
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[vertex_info->yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeLeftUId() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0x800FAEA4
s32 mpCollisionGetEdgeLeftDLineID(s32 line_id)
{
    DObj *yakumono_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeLeftDId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    vertex_info = &gMPCollisionVertexInfo->vertex_info[line_id];
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[vertex_info->yakumono_id];

    if (yakumono_dobj->user_data.s >= nMPYakumonoStatusOff)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeLeftDId() no collision\n");
            smRunPrintGObjStatus();
        }
    }
    return vertex_info->edge_nsign_id;
}

// 0x800FAF64
void mpCollisionGetPlayerMapObjPosition(s32 player, Vec3f *pos)
{
    if (!gMPCollisionGeometry->mapobj_count)
    {
        pos->x = pos->y = pos->z = 0.0F;
    }
    else
    {
        s32 i, index = player;

        for (i = 0; i < gMPCollisionGeometry->mapobj_count; i++)
        {
            if (index == gMPCollisionMapObjs->mapobjs[i].mapobj_kind)
            {
                pos->x = gMPCollisionMapObjs->mapobjs[i].pos.x;
                pos->y = gMPCollisionMapObjs->mapobjs[i].pos.y;
                pos->z = 0;

                break;
            }
        }
    }
}

// 0x800FB010
void mpCollisionAllocVertexInfo(void)
{
    gMPCollisionVertexInfo = gsMemoryAlloc(gMPCollisionLinesNum * sizeof(mpVertexInfo), 0x8);
}

// 0x800FB04C
void func_ovl2_800FB04C(void)
{
    s32 line_id;
    s32 i;
    mpLineInfo *line_info;
    mpLineData *line_data;
    s32 j;
    s32 k;
    s32 l;
    s32 yakumono_id;
    s32 vnear;
    s32 vfar;
    s32 vp2;
    s32 index;

    line_info = gMPCollisionGeometry->line_info;

    for (i = l = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[0];
        yakumono_id = line_info->yakumono_id;

        for (j = 0; j < ARRAY_COUNT(line_info->line_data); j++)
        {
            for (index = line_data[j].group_id, line_id = 0; line_id < line_data[j].line_count; line_id++, index++)
            {
                mpVertexLinks *vlinks = &gMPCollisionVertexLinks[index];

                vfar = vnear = (j < ARRAY_COUNT(line_info->line_data) / 2) ? gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vlinks->vertex1]].pos.y:
                                                                             gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[vlinks->vertex1]].pos.x;

                for (k = vlinks->vertex1 + 1; k < (vlinks->vertex1 + vlinks->vertex2); k++)
                {
                    // There are various ways to fake-match this function (e.g. do {} while (0), if(1), if(!gMPCollisionVertexData->vpos) right where this comment is)...

                    vp2 = (j < ARRAY_COUNT(line_info->line_data) / 2) ? gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[k]].pos.y:
                                                                        gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[k]].pos.x;

                    if (vp2 >= vfar)
                    {
                        vfar = vp2;
                    }
                    if (vnear >= vp2)
                    {
                        vnear = vp2;
                    }
                    else continue; // ...but this seems to be the most realistic solution for now.
                }
                gMPCollisionVertexInfo->vertex_info[l].coll_pos_next = vfar;
                gMPCollisionVertexInfo->vertex_info[l].coll_pos_prev = vnear;
                gMPCollisionVertexInfo->vertex_info[l].yakumono_id = yakumono_id;

                l++;
            }
        }
    }
}

// 0x800FB2A0
void mpCollisionInitLineTypesAll(void)
{
    s32 line_type, line_id;

    for (line_type = 0; line_type < ARRAY_COUNT(gMPCollisionLineGroups); line_type++)
    {
        for (line_id = 0; line_id < gMPCollisionLineGroups[line_type].line_count; line_id++)
        {
            gMPCollisionVertexInfo->vertex_info[gMPCollisionLineGroups[line_type].line_id[line_id]].line_type = line_type;
        }
    }
}

// 0x800FB31C
void func_ovl2_800FB31C(void)
{
    s32 line_id;
    s32 line_next;
    s32 line_prev;
    s32 i;
    sb32 unk_bool;
    s32 vertex_id1;
    s32 vertex_id2;
    s32 vid;
    s32 vtemp1, vtemp2;

    for (i = 0; i < gMPCollisionLinesNum; i++)
    {
        line_next = -1;
        line_prev = -1;

        unk_bool = FALSE;

        vtemp1 = gMPCollisionVertexLinks[i].vertex1;

        vertex_id1 = gMPCollisionVertexIDs->vertex_id[vtemp1];
        vertex_id2 = gMPCollisionVertexIDs->vertex_id[vtemp1 + gMPCollisionVertexLinks[i].vertex2 - 1];

        for (line_id = 0; line_id < gMPCollisionLinesNum; line_id++)
        {
            if (i != line_id)
            {
                vtemp2 = gMPCollisionVertexLinks[line_id].vertex1;

                vid = vtemp2 + gMPCollisionVertexLinks[line_id].vertex2 - 1;

                if ((vertex_id1 == gMPCollisionVertexIDs->vertex_id[vtemp2]) || (vertex_id1 == gMPCollisionVertexIDs->vertex_id[vid]))
                {
                    line_prev = line_id;
                }
                if ((vertex_id2 == gMPCollisionVertexIDs->vertex_id[vtemp2]) || (vertex_id2 == gMPCollisionVertexIDs->vertex_id[vid]))
                {
                    line_next = line_id;
                }
            }
            continue;
        }
        switch (gMPCollisionVertexInfo->vertex_info[i].line_type)
        {
        default:
            break;

        case nMPLineKindGround:
        case nMPLineKindCeil:
            if (gMPCollisionVertexData->vpos[vertex_id2].pos.x < gMPCollisionVertexData->vpos[vertex_id1].pos.x)
            {
                unk_bool = TRUE;
            }
            break;

        case nMPLineKindRWall:
        case nMPLineKindLWall:
            if (gMPCollisionVertexData->vpos[vertex_id2].pos.y < gMPCollisionVertexData->vpos[vertex_id1].pos.y)
            {
                unk_bool = TRUE;
            }
            break;
        }
        if (unk_bool != FALSE)
        {
            gMPCollisionVertexInfo->vertex_info[i].edge_psign_id = line_prev;
            gMPCollisionVertexInfo->vertex_info[i].edge_nsign_id = line_next;
        }
        else
        {
            gMPCollisionVertexInfo->vertex_info[i].edge_psign_id = line_next;
            gMPCollisionVertexInfo->vertex_info[i].edge_nsign_id = line_prev;
        }
        continue;
    }
}

// 0x800FB554
void func_ovl2_800FB554(void)
{
    func_ovl2_800FB04C();
    mpCollisionInitLineTypesAll();
    func_ovl2_800FB31C();
}

// 0x800FB584
void mpCollisionAllocYakumono(DObjDesc *gr_yakumono)
{
    s32 yakumono_count;
    s32 i;

    for (yakumono_count = 0; gr_yakumono->index != DOBJ_ARRAY_MAX; yakumono_count++)
    {
        gr_yakumono++;
    }
    gMPCollisionYakumonoDObjs = gsMemoryAlloc(yakumono_count * sizeof(gMPCollisionYakumonoDObjs), 0x4);
    gMPCollisionDynamics = gsMemoryAlloc(yakumono_count * sizeof(Vec3f), 0x4);

    for (i = 0; i < yakumono_count; i++)
    {
        gMPCollisionDynamics[i].x = gMPCollisionDynamics[i].y = gMPCollisionDynamics[i].z = 0.0F;
    }
    gMPCollisionYakumonosNum = yakumono_count;
}

// 0x800FB808
void func_ovl2_800FB808(void)
{
    s32 index;
    mpDirection dir;
    mpLineData *line_data;
    mpLineInfo *line_info;
    DObj *yakumono_dobj;
    mpVertexLinks *vlinks;
    s32 i, j, k, l;

    dir = gMPCollisionEdgeBounds.d1;

    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((yakumono_dobj->actor.p != NULL) || (yakumono_dobj->user_data.s < nMPYakumonoStatusOff && yakumono_dobj->user_data.s != nMPYakumonoStatusNone))
        {
            f32 x = yakumono_dobj->translate.vec.f.x, y = yakumono_dobj->translate.vec.f.y;

            line_data = &line_info->line_data[0];

            for (j = 0; j < ARRAY_COUNT(line_info->line_data); j++)
            {
                for (index = line_data[j].group_id, k = 0; k < line_data[j].line_count; k++, index++)
                {
                    vlinks = &gMPCollisionVertexLinks[index];

                    for (l = vlinks->vertex1; l < (vlinks->vertex1 + vlinks->vertex2); l++)
                    {
                        s32 vx = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[l]].pos.x + x;
                        s32 vy = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[l]].pos.y + y;

                        if (dir.top < vy)
                        {
                            dir.top = vy;
                        }
                        else if (dir.bottom > vy)
                        {
                            dir.bottom = vy;
                        }
                        if (dir.right < vx)
                        {
                            dir.right = vx;
                        }
                        else if (dir.left > vx)
                        {
                            dir.left = vx;
                        }
                    }
                }
            }
        }
    }
    gMPCollisionEdgeBounds.d2 = dir;
}

// 0x800FBA84
void func_ovl2_800FBA84(void)
{
    gMPCollisionEdgeBounds.d3.top      =   gMPCollisionEdgeBounds.d2.top      -   gMPCollisionEdgeBounds.d0.top;
    gMPCollisionEdgeBounds.d3.bottom   =   gMPCollisionEdgeBounds.d2.bottom   -   gMPCollisionEdgeBounds.d0.bottom;
    gMPCollisionEdgeBounds.d3.right    =   gMPCollisionEdgeBounds.d2.right    -   gMPCollisionEdgeBounds.d0.right;
    gMPCollisionEdgeBounds.d3.left     =   gMPCollisionEdgeBounds.d2.left     -   gMPCollisionEdgeBounds.d0.left;
}

// 0x800FBAD0
void func_ovl2_800FBAD0(GObj *ground_gobj)
{
    DObj *dobj;
    MObj *mobj;
    s32 i;
    Vec3f translate;
    u8 temp_s2;

    dobj = DObjGetStruct(ground_gobj);

    i = 0;

    while (dobj != NULL)
    {
        if (dobj == gMPCollisionYakumonoDObjs->yakumono_dobj[i])
        {
            if ((dobj->user_data.s != nMPYakumonoStatusOn) && (dobj->user_data.s != nMPYakumonoStatusOff))
            {
                temp_s2 = dobj->flags;

                func_8000BFE8_CBE8(dobj);

                translate = dobj->translate.vec.f;

                func_8000CCBC_D8BC(dobj);

                gMPCollisionDynamics[i].x = dobj->translate.vec.f.x - translate.x;
                gMPCollisionDynamics[i].y = dobj->translate.vec.f.y - translate.y;
                gMPCollisionDynamics[i].z = dobj->translate.vec.f.z - translate.z;

                if (temp_s2 == 0)
                {
                    if (dobj->flags != 0)
                    {
                        dobj->user_data.s = nMPYakumonoStatusUnk4;
                    }
                }
                else if (dobj->flags == 0)
                {
                    dobj->user_data.s = nMPYakumonoStatusUnk2;
                }
            }
            if (i < (gMPCollisionYakumonosNum - 1))
            {
                i++;
            }
        }
        else
        {
            func_8000BFE8_CBE8(dobj);
            func_8000CCBC_D8BC(dobj);
        }
        mobj = dobj->mobj;

        while (mobj != NULL)
        {
            func_8000CF6C_DB6C(mobj);
            func_8000DA40_E640(mobj);

            mobj = mobj->next;
        }
        if (dobj->child != NULL)
        {
            dobj = dobj->child;
        }
        else if (dobj->sib_next != NULL)
        {
            dobj = dobj->sib_next;
        }
        else while (TRUE)
        {
            if (dobj->parent == DOBJ_PARENT_NULL)
            {
                dobj = NULL;

                break;
            }
            else if (dobj->parent->sib_next != NULL)
            {
                dobj = dobj->parent->sib_next;

                break;
            }
            else
            {
                dobj = dobj->parent;

                continue;
            }
        }
    }

    func_ovl2_800FB808();
    func_ovl2_800FBA84();

    gMPCollisionUpdateFrame++;
}

// 0x800FBCF8
void mpCollisionAdvanceUpdateFrame(GObj *ground_gobj)
{
    gMPCollisionUpdateFrame++;
}

// 0x800FBD14
void func_ovl2_800FBD14(void)
{
    s32 index;
    DObj *yakumono_dobj;
    mpDirection dir1;
    mpDirection dir2;
    s32 vx;
    s32 vy;
    f32 tx;
    f32 ty;
    mpLineData *line_data;
    mpLineInfo *line_info;
    mpVertexLinks *vlinks;
    s32 i, j, k, l;
    s32 unused[2];

    line_info = gMPCollisionGeometry->line_info;

    dir1.top = -65536.0F;
    dir1.right = -65536.0F;
    dir2.top = -65536.0F;
    dir2.right = -65536.0F;
    dir2.left = 65536.0F;
    dir2.bottom = 65536.0F;
    dir1.left = 65536.0F;
    dir1.bottom = 65536.0F;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_info->yakumono_id];

        if ((yakumono_dobj->user_data.s != nMPYakumonoStatusOn) && (yakumono_dobj->user_data.s != nMPYakumonoStatusOff))
        {
            if (yakumono_dobj->actor.p != NULL)
            {
                tx = yakumono_dobj->translate.vec.f.x;
                ty = yakumono_dobj->translate.vec.f.y;
            }
            else
            {
                tx = 0.0F;
                ty = 0.0F;
            }
            line_data = &line_info->line_data[0];

            for (j = 0; j < ARRAY_COUNT(line_info->line_data); j++)
            {
                for (index = line_data[j].group_id, k = 0; k < line_data[j].line_count; k++, index++)
                {
                    vlinks = &gMPCollisionVertexLinks[index];

                    for (l = vlinks->vertex1; l < (vlinks->vertex1 + vlinks->vertex2); l++)
                    {
                        vx = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[l]].pos.x;
                        vy = gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[l]].pos.y;

                        if (yakumono_dobj->actor.p == NULL)
                        {
                            if (dir2.top < vy)
                            {
                                dir2.top = vy;
                            }
                            if (vy < dir2.bottom)
                            {
                                dir2.bottom = vy;
                            }
                            if (dir2.right < vx)
                            {
                                dir2.right = vx;
                            }
                            if (vx < dir2.left)
                            {
                                dir2.left = vx;
                            }
                        }
                        vx += tx;
                        vy += ty;

                        if (dir1.top < vy)
                        {
                            dir1.top = vy;
                        }
                        if (vy < dir1.bottom)
                        {
                            dir1.bottom = vy;
                        }
                        if (dir1.right < vx)
                        {
                            dir1.right = vx;
                        }
                        if (vx < dir1.left)
                        {
                            dir1.left = vx;
                        }
                    }
                }
            }
        }
    }
    // Slight WARNING: not sure about this. The member names in the struct don't seem to correspond to their suggested purpose...
    // ...or I just don't understand what is going on. Or both.
    gMPCollisionEdgeBounds.d0 = dir1;
    gMPCollisionEdgeBounds.d1 = dir2;
    gMPCollisionEdgeBounds.d2 = dir1;
    gMPCollisionEdgeBounds.d3.top = gMPCollisionEdgeBounds.d3.bottom = gMPCollisionEdgeBounds.d3.right = gMPCollisionEdgeBounds.d3.left = 0.0F;
}

// 0x800FC09C
s32 mpCollisionAllocLinesGetCountTotal(void)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    s32 i;
    s32 line_count[nMPLineKindEnumMax];
    s32 line_total, j;

    for (i = 0; i < ARRAY_COUNT(line_count); i++)
    {
        line_count[i] = 0;
    }
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[0];

        for (j = 0; j < (ARRAY_COUNT(line_count) + ARRAY_COUNT(line_info->line_data)) / 2; j++, line_data++)
        {
            line_count[j] += line_data->line_count;
        }
    }
    for (i = 0, line_total = 0; i < (ARRAY_COUNT(line_count) + ARRAY_COUNT(gMPCollisionLineGroups)) / 2; i++)
    {
        gMPCollisionLineGroups[i].line_count = line_count[i];

        line_total += line_count[i];

        if (line_count[i] != 0)
        {
            gMPCollisionLineGroups[i].line_id = (u16*) gsMemoryAlloc(line_count[i] * sizeof(*gMPCollisionLineGroups[i].line_id), sizeof(*gMPCollisionLineGroups[i].line_id));
        }
    }
    return line_total;
}

// 0x800FC1A4
void mpCollisionInitLineIDsAll(void)
{
    mpLineData *line_data;
    mpLineInfo *line_info;
    s32 i;
    s32 line_count[nMPLineKindEnumMax];
    s32 j, line_id;

    for (i = 0; i < ARRAY_COUNT(line_count); i++)
    {
        line_count[i] = 0;
    }
    line_info = gMPCollisionGeometry->line_info;

    for (i = 0; i < gMPCollisionGeometry->yakumono_count; i++, line_info++)
    {
        line_data = &line_info->line_data[0];

        for (j = 0; j < (ARRAY_COUNT(line_count) + ARRAY_COUNT(line_info->line_data)) / 2; j++, line_data++)
        {
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                gMPCollisionLineGroups[j].line_id[line_count[j]] = line_id;
                line_count[j]++;
            }
        }
    }
}

// 0x800FC284
void mpCollisionInitGroundData(void)
{
    mpGeometryInfo *geometry_info;

    gMPCollisionGroundData = (mpGroundData*)
    (
        (uintptr_t)rdManagerGetFileWithExternHeap
        (
            dMPCollisionGroundFileInfos[gBattleState->gr_kind].file_id, 
            gsMemoryAlloc
            (
                rdManagerGetFileSize(dMPCollisionGroundFileInfos[gBattleState->gr_kind].file_id), 0x10
            )
        )
        + dMPCollisionGroundFileInfos[gBattleState->gr_kind].offset
    );

    gMPCollisionGeometry = gMPCollisionGroundData->map_geometry;
    geometry_info = gMPCollisionGeometry;

    if (geometry_info == NULL)
    {
        while (TRUE)
        {
            gsFatalPrintF("not found cll data!\n");
            smRunPrintGObjStatus();
        }
    }
    gMPCollisionVertexData  = geometry_info->vertex_data;
    gMPCollisionVertexIDs    = geometry_info->vertex_id;
    gMPCollisionVertexLinks = geometry_info->vertex_links;
    gMPCollisionMapObjs     = geometry_info->mapobjs;

    gMPCollisionLinesNum = mpCollisionAllocLinesGetCountTotal();

    mpCollisionInitLineIDsAll();
    mpCollisionAllocVertexInfo();
    func_ovl2_800FB554();
    mpCollisionAllocYakumono(gMPCollisionGroundData->gr_desc[1].dobj_desc);

    gMPCollisionLightColor.r = 0xFF;
    gMPCollisionLightColor.g = 0xFF;
    gMPCollisionLightColor.b = 0xFF;
    gMPCollisionLightColor.a = 0xFF;

    gMPCollisionLightAngleX = gMPCollisionGroundData->light_angle.x;
    gMPCollisionLightAngleY = gMPCollisionGroundData->light_angle.y;
}

// 0x800FC3E8
void mpCollisionSetPlayMusicID(void)
{
    gMPCollisionBGMDefault = gMPCollisionGroundData->music_id;

    auPlaySong(0, gMPCollisionBGMDefault);

    gMPCollisionBGMCurrent = gMPCollisionBGMDefault;
}

// 0x800FC42C
void mpCollisionSetMusicID(void)
{
    gMPCollisionBGMCurrent = gMPCollisionBGMDefault = gMPCollisionGroundData->music_id;
}

// 0x800FC450
void mpCollisionClearYakumonoAll(void)
{
    DObjDesc *dobj_desc = gMPCollisionGroundData->gr_desc[1].dobj_desc;
    s32 i;

    for (i = 0; dobj_desc->index != DOBJ_ARRAY_MAX; i++, dobj_desc++)
    {
        gMPCollisionYakumonoDObjs->yakumono_dobj[i]->user_data.s = nMPYakumonoStatusNone;
    }
    gMPCollisionUpdateFrame = 0;
}

// 0x800FC4A8
void mpCollisionSetYakumonoPosID(s32 line_id, Vec3f *yakumono_pos)
{
    DObj *yakumono_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpSetYakumonoPosId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[line_id];

    gMPCollisionDynamics[line_id].x = yakumono_pos->x - yakumono_dobj->translate.vec.f.x;
    gMPCollisionDynamics[line_id].y = yakumono_pos->y - yakumono_dobj->translate.vec.f.y;
    gMPCollisionDynamics[line_id].z = yakumono_pos->z - yakumono_dobj->translate.vec.f.z;

    yakumono_dobj->translate.vec.f.x = yakumono_pos->x;
    yakumono_dobj->translate.vec.f.y = yakumono_pos->y;
    yakumono_dobj->translate.vec.f.z = yakumono_pos->z;
}

// 0x800FC58C
void mpCollisionSetYakumonoOnID(s32 line_id)
{
    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpSetYakumonoOnId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    gMPCollisionYakumonoDObjs->yakumono_dobj[line_id]->user_data.s = nMPYakumonoStatusOn;
}

// 0x800FC604
void mpCollisionSetYakumonoOffID(s32 line_id)
{
    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpSetYakumonoOffId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    gMPCollisionYakumonoDObjs->yakumono_dobj[line_id]->user_data.s = nMPYakumonoStatusOff;
}

// 0x800FC67C
sb32 mpCollisionCheckExistLineID(s32 line_id)
{
    if (line_id == -1)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetExistCollisionId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    if (line_id == -2)
    {
        return FALSE;
    }
    if (gMPCollisionYakumonoDObjs->yakumono_dobj[gMPCollisionVertexInfo->vertex_info[line_id].yakumono_id]->user_data.s < nMPYakumonoStatusOff)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800FC72C
s32 mpCollisionSetDObjNoID(s32 line_id)
{
    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpSetDObjNoId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    return gMPCollisionVertexInfo->vertex_info[line_id].yakumono_id;
}

// 0x800FC7A4
s32 mpCollisionGetMapObjCountKind(s32 mapobj_kind)
{
    s32 i, count;

    if (!(gMPCollisionGeometry->mapobj_count))
    {
        return 0;
    }
    else for (i = count = 0; i < gMPCollisionGeometry->mapobj_count; i++)
    {
        if (mapobj_kind == gMPCollisionMapObjs->mapobjs[i].mapobj_kind)
        {
            count++;
        }
    }
    return count;
}

// 0x800FC814
void mpCollisionGetMapObjIDsKind(s32 mapobj_kind, s32 *mapobjs)
{
    s32 i, count;

    if (gMPCollisionGeometry->mapobj_count)
    {
        for (i = count = 0; i < gMPCollisionGeometry->mapobj_count; i++)
        {
            if (mapobj_kind == gMPCollisionMapObjs->mapobjs[i].mapobj_kind)
            {
                mapobjs[count] = i;

                count++;
            }
        }
    }
}

// 0x800FC894
void mpCollisionGetMapObjPositionID(s32 mapobj_kind, Vec3f *pos)
{
    pos->x = gMPCollisionMapObjs->mapobjs[mapobj_kind].pos.x;
    pos->y = gMPCollisionMapObjs->mapobjs[mapobj_kind].pos.y;
    pos->z = 0.0F;
}

// 0x800FC8EC
s32 mpCollisionGetLineCountType(s32 line_type)
{
    return gMPCollisionLineGroups[line_type].line_count;
}

// 0x800FC900
void mpCollisionGetLineIDsTypeCount(s32 type, s32 count, s32 *line_ids)
{
    s32 i;

    for (i = 0; i < count; i++)
    {
        line_ids[i] = gMPCollisionLineGroups[type].line_id[i];
    }
}

// 0x800FC9C8
u8 mpCollisionSetLightColorGetAlpha(Gfx **display_list)
{
    gDPSetEnvColor(display_list[0]++, gMPCollisionLightColor.r, gMPCollisionLightColor.g, gMPCollisionLightColor.b, gMPCollisionLightColor.a);

    return gMPCollisionLightColor.a;
}

// 0x800FCA18
sb32 mpCollisionCheckExistPlatformLineID(s32 line_id)
{
    DObj *yakumono_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetCllFloatId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    yakumono_dobj = gMPCollisionYakumonoDObjs->yakumono_dobj[gMPCollisionVertexInfo->vertex_info[line_id].yakumono_id];

    if ((yakumono_dobj->user_data.s != nMPYakumonoStatusNone) || (yakumono_dobj->actor.p != NULL))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800FCAC8
u16 mpCollisionGetVertexFlagsLineID(s32 line_id)
{
    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetAttrId() id = %d\n", line_id);
            smRunPrintGObjStatus();
        }
    }
    return gMPCollisionVertexData->vpos[gMPCollisionVertexIDs->vertex_id[gMPCollisionVertexLinks[line_id].vertex1]].vertex_flags;
}
