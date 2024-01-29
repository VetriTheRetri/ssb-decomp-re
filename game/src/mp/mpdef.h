#ifndef _MPDEF_H_
#define _MPDEF_H_

typedef enum mpGroundAir
{
    GA_Ground,
    GA_Air

} mpGroundAir;

typedef enum mpMaterial
{
    mpCollision_Material_0,
    mpCollision_Material_1,
    mpCollision_Material_2,
    mpCollision_Material_3,
    mpCollision_Material_4,
    mpCollision_Material_5,
    mpCollision_Material_6,
    mpCollision_Material_FireWeakHz1,
    mpCollision_Material_FireStrongVt1,
    mpCollision_Material_FireWeakVt1,
    mpCollision_Material_SpikeStrongHz1,
    mpCollision_Material_FireWeakVt2,
    mpCollision_Material_DokanLeft,
    mpCollision_Material_DokanRight,
    mpCollision_Material_Detect, // Board the Platforms / Race to the Finish gate / Saffron City gate
    mpCollision_Material_FireWeakVt3,
    mpCollision_Material_Custom

} mpMaterial;

typedef enum mpLineType
{
    mpCollision_LineType_Ground,
    mpCollision_LineType_Ceil,
    mpCollision_LineType_RWall,
    mpCollision_LineType_LWall,
    mpCollision_LineType_EnumMax

} mpLineType;

typedef enum mpMPointKind
{
    mpMPoint_Kind_BattlePlayer1Spawn,             // 0x0
    mpMPoint_Kind_BattlePlayer2Spawn,             // 0x1
    mpMPoint_Kind_BattlePlayer3Spawn,             // 0x2
    mpMPoint_Kind_BattlePlayer4Spawn,             // 0x3
    mpMPoint_Kind_ItemSpawn,                      // 0x4
    mpMPoint_Kind_ScaleL,                         // 0x5
    mpMPoint_Kind_ScaleR,                         // 0x6
    mpMPoint_Kind_PakkunLSpawn,                   // 0x7
    mpMPoint_Kind_PakkunRSpawn,                   // 0x8
    mpMPoint_Kind_PowerBlock,                     // 0x9
    mpMPoint_Kind_DokanL,                         // 0xA
    mpMPoint_Kind_DokanR,                         // 0xB
    mpMPoint_Kind_Twister = 0xD,                  // 0xD
    mpMPoint_Kind_Monster,                        // 0xE
    mpMPoint_Kind_Bumper = 0x13,                  // 0x13
    mpMPoint_Kind_DokanWall,                      // 0x14
    mpMPoint_Kind_Rebirth = 0x20,                 // 0x20
    mpMPoint_Kind_BonusPlayerSpawn,               // 0x21
    mpMPoint_Kind_RBomb = 0x29                    // 0x29
};

typedef enum mpYakumonoStatus // State of collision line?
{
    mpCollision_Yakumono_None,
    mpCollision_Yakumono_On,
    mpCollision_Yakumono_Unk,
    mpCollision_Yakumono_Off

} mpYakumonoStatus;

typedef struct mpCollData               mpCollData;
typedef struct mpVertexInfo             mpVertexInfo;
typedef struct mpVertexInfoContainer    mpVertexInfoContainer;
typedef struct mpVertexLinks            mpVertexLinks;
typedef struct mpVertexLinksContainer   mpVertexLinksContainer;
typedef struct mpVertexArray            mpVertexArray;
typedef struct mpVertexData             mpVertexData;
typedef struct mpVertexPosContainer     mpVertexPosContainer;
typedef struct mpLineData               mpLineData;
typedef struct mpLineInfo               mpLineInfo;
typedef struct mpLineGroup              mpLineGroup;
typedef struct mpDirection              mpDirection;
typedef struct mpEdgeBounds             mpEdgeBounds;
typedef struct mpGeometryInfo           mpGeometryInfo;
typedef struct mpRoomDObj               mpRoomDObj;
typedef struct mpMPointData             mpMPointData;
typedef struct mpMPointContainer        mpMPointContainer;
typedef struct mpObjectColl             mpObjectColl;

#endif