#ifndef _MPDEF_H_
#define _MPDEF_H_

#define MPCOLL_FLAG_LWALL (1 << 0)		// 0x1
#define MPCOLL_FLAG_RWALL (1 << 5)		// 0x20
#define MPCOLL_FLAG_CEIL (1 << 10)		// 0x400
#define MPCOLL_FLAG_GROUND (1 << 11)	// 0x800
#define MPCOLL_FLAG_LCLIFF (1 << 12)	// 0x1000
#define MPCOLL_FLAG_RCLIFF (1 << 13)	// 0x2000
#define MPCOLL_FLAG_CEILHEAVY (1 << 14) // 0x4000 - hard ceiling, can't pass through

#define MPCOLL_FLAG_MAIN_MASK (MPCOLL_FLAG_GROUND | MPCOLL_FLAG_CEIL | MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL) // Mask every main collision flag
#define MPCOLL_FLAG_CLIFF_MASK (MPCOLL_FLAG_LCLIFF | MPCOLL_FLAG_RCLIFF)			// Mask all ledge flags

#define MPCOLL_VERTEX_ATTR_BITS 8

#define MPCOLL_VERTEX_CLL_PASS (1 << 14)  // Line ID can be passed through
#define MPCOLL_VERTEX_CLL_CLIFF (1 << 15) // 0x8000

#define MPCOLL_VERTEX_CLL_BITS (0xFF << (MPCOLL_VERTEX_ATTR_BITS * 1))
#define MPCOLL_VERTEX_MAT_BITS (0xFF << (MPCOLL_VERTEX_ATTR_BITS * 0))

#define MPCOLL_VERTEX_CLL_MASK (~MPCOLL_VERTEX_MAT_BITS) // This is what the game covers when checking flags & 0xFFFF00FF
#define MPCOLL_VERTEX_MAT_MASK (~MPCOLL_VERTEX_CLL_BITS) // This is what the game looks for when checking 0xFFFF00FF

#define MPCOLL_VERTEX_ALL_BITS (MPCOLL_VERTEX_CLL_BITS | MPCOLL_VERTEX_MAT_BITS)

#define MPCOLL_PROC_TYPE_DEFAULT (0)
#define MPCOLL_PROC_TYPE_CLIFF (1 << 0)
#define MPCOLL_PROC_TYPE_CLIFFEDGE (1 << 0)
#define MPCOLL_PROC_TYPE_PROJECT (1 << 1)
#define MPCOLL_PROC_TYPE_STOPEDGE (1 << 1)
#define MPCOLL_PROC_TYPE_PASS (1 << 2)
#define MPCOLL_PROC_TYPE_CEILHEAVY (1 << 3)

typedef enum MPKinetics
{
	nMPKineticsGround,
	nMPKineticsAir,
    nMPKineticsEnumMax

} MPKinetics;

typedef enum MPMaterial
{
	nMPMaterial0,
	nMPMaterial1,
	nMPMaterial2,
	nMPMaterial3,
	nMPMaterial4,
	nMPMaterial5,
	nMPMaterial6,
	nMPMaterialFireWeakHz1,
	nMPMaterialFireStrongVt1,
	nMPMaterialFireWeakVt1,
	nMPMaterialSpikeStrongHz1,
	nMPMaterialFireWeakVt2,
	nMPMaterialDokanLeft,
	nMPMaterialDokanRight,
	nMPMaterialDetect, // Board the Platforms / Race to the Finish
								 // gate / Saffron City gate
	nMPMaterialFireWeakVt3,
	nMPMaterialCustom

} MPMaterial;

typedef enum MPLineType
{
	nMPLineKindGround,
	nMPLineKindCeil,
	nMPLineKindRWall,
	nMPLineKindLWall,
	nMPLineKindEnumMax

} MPLineType;

typedef enum MPMapObjKind
{
    nMPMapObjKindBattlePlayerSpawnStart,
    nMPMapObjKindBattlePlayer1Spawn = nMPMapObjKindBattlePlayerSpawnStart,                      // 0x0
    nMPMapObjKindBattlePlayer2Spawn,                                                            // 0x1
    nMPMapObjKindBattlePlayer3Spawn,                                                            // 0x2
    nMPMapObjKindBattlePlayer4Spawn,                                                            // 0x3
    nMPMapObjKindItemSpawn,                                                                     // 0x4
    nMPMapObjKindScaleL,                                                                        // 0x5
    nMPMapObjKindScaleR,                                                                        // 0x6
    nMPMapObjKindPakkunLSpawn,                                                                  // 0x7
    nMPMapObjKindPakkunRSpawn,                                                                  // 0x8
    nMPMapObjKindPowerBlock,                                                                    // 0x9
    nMPMapObjKindDokanL,                                                                        // 0xA
    nMPMapObjKindDokanR,                                                                        // 0xB
    nMPMapObjKindAcid,                                                                          // 0xC
    nMPMapObjKindTwister,                                                                       // 0xD
    nMPMapObjKindMonster,                                                                       // 0xE
    nMPMapObjKindMonsterUnused1,                                                                // 0xF
    nMPMapObjKindMonsterUnused2,                                                                // 0x10
    nMPMapObjKindMonsterUnused3,                                                                // 0x11
    nMPMapObjKindMonsterUnused4,                                                                // 0x12
    nMPMapObjKindBumper,                                                                        // 0x13
    nMPMapObjKindDokanWall,                                                                     // 0x14

    nMPMapObjKindMovieSpawn1,                                                                   // 0x15
    nMPMapObjKindMovieSpawn2,                                                                   // 0x16
    nMPMapObjKindMovieSpawn3,                                                                   // 0x17

    nMPMapObjKindAutoDemoSpawn1,                                                                // 0x18
    nMPMapObjKindAutoDemoSpawn2,                                                                // 0x19
    nMPMapObjKindAutoDemoSpawn3,                                                                // 0x1A
    nMPMapObjKindAutoDemoSpawn4,                                                                // 0x1B
    nMPMapObjKindAutoDemoSpawn5,                                                                // 0x1C
    nMPMapObjKindAutoDemoSpawn6,                                                                // 0x1D
    nMPMapObjKindAutoDemoSpawn7,                                                                // 0x1E
    nMPMapObjKindAutoDemoSpawn8,                                                                // 0x1F
    nMPMapObjKindRebirth,                                                                       // 0x20
    nMPMapObjKind1PGamePlayerSpawn,                                                             // 0x21

    nMPMapObjKind1PGameAllySpawnStart,                                                          // 0x22
    nMPMapObjKind1PGameAlly1Spawn = nMPMapObjKind1PGameAllySpawnStart,                          // 0x22
    nMPMapObjKind1PGameAlly2Spawn,                                                              // 0x23
    nMPMapObjKind1PGameAlly3Spawn,                                                              // 0x24
    nMPMapObjKind1PGameAllySpawnEnd = nMPMapObjKind1PGameAlly3Spawn,                            // 0x24

    nMPMapObjKind1PGameEnemySpawnStart,                                                         // 0x25
    nMPMapObjKind1PGameEnemy1Spawn = nMPMapObjKind1PGameEnemySpawnStart,                        // 0x25
    nMPMapObjKind1PGameEnemy2Spawn,                                                             // 0x26
    nMPMapObjKind1PGameEnemy3Spawn,                                                             // 0x27
    nMPMapObjKind1PGameEnemy4Spawn,                                                             // 0x28
    nMPMapObjKind1PGameEnemySpawnEnd = nMPMapObjKind1PGameEnemy4Spawn,                          // 0x28

    nMPMapObjKind1PGameBonus3TaruBomb,                                                          // 0x29
    nMPMapObjKind1PGameUnknown,                                                                 // 0x2A
    nMPMapObjKind1PGameEnemyTeamSpawn,                                                          // 0x2B
    nMPMapObjKind1PGameChallengerPlayerSpawn,                                                   // 0x2C

    nMPMapObjKind1PGameChallengerEnemySpawnStart,                                               // 0x2D
    nMPMapObjKind1PGameChallengerEnemySpawn = nMPMapObjKind1PGameChallengerEnemySpawnStart,     // 0x2D
    nMPMapObjKind1PGameChallengerUnused1Spawn,                                                  // 0x2E
    nMPMapObjKind1PGameChallengerUnused2Spawn,                                                  // 0x2F
    nMPMapObjKind1PGameChallengerEnemySpawnEnd = nMPMapObjKind1PGameChallengerUnused2Spawn      // 0x2F
    
} MPMapObjKind;

typedef enum MPYakumonoStatus // State of collision line?
{
	nMPYakumonoStatusNone,
	nMPYakumonoStatusOn,
	nMPYakumonoStatusUnk2,
	nMPYakumonoStatusOff,
    nMPYakumonoStatusUnk4

} MPYakumonoStatus;

typedef struct MPCollData MPCollData;
typedef struct MPVertexInfo MPVertexInfo;
typedef struct MPVertexInfoContainer MPVertexInfoContainer;
typedef struct MPVertexLinks MPVertexLinks;
typedef struct MPVertexLinksContainer MPVertexLinksContainer;
typedef struct MPVertexArray MPVertexArray;
typedef struct MPVertexData MPVertexData;
typedef struct MPVertexPosContainer MPVertexPosContainer;
typedef struct MPLineData MPLineData;
typedef struct MPLineInfo MPLineInfo;
typedef struct MPLineGroup MPLineGroup;
typedef struct MPDirection MPDirection;
typedef struct MPEdgeBounds MPEdgeBounds;
typedef struct MPGeometryData MPGeometryData;
typedef struct MPYakumonoDObj MPYakumonoDObj;
typedef struct MPMapObjData MPMapObjData;
typedef struct MPMapObjContainer MPMapObjContainer;
typedef struct MPObjectColl MPObjectColl;
typedef struct MPItemWeights MPItemWeights;
typedef struct MPGroundDesc MPGroundDesc;
typedef struct MPGroundData MPGroundData;

#endif
