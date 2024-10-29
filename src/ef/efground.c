#include <ef/effect.h>
#include <gr/ground.h>
#include <sc/scene.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern EFGroundParam dEFGroundCastleParams[2];
extern EFGroundParam dEFGroundSectorParams[7];
extern EFGroundParam dEFGroundJungleParams[2];
extern EFGroundParam dEFGroundZebesParams[3];
extern EFGroundParam dEFGroundYosterParams[7];
extern EFGroundParam dEFGroundPupupuParams[6];
extern EFGroundParam dEFGroundYamabukiParams[6];

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80131AB0
u8 sEFGroundPad0x80131AD0[40];

// 0x80131AD8
EFGroundActor sEFGroundActor;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012F240
EFGroundCreateDesc dEFGroundCastleEffectDescs[/* */] =
{
    // Right-facing Lakitu
    {
        4000.0F,                                    // Altitude max?
        -1000.0F,                                   // Altitude min?
        -2000.0F,                                   // Z-Axis position
        1.3F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundCastleLakituDObjSetup,        // DObj Setup attributes offset (?)
            0x0,                                    // MObjSub offset
            &lEFGroundCastleLakituRAnimJoint,       // AnimJoint offset
            0x0                                     // MatAnimJoint offset
        }
    },

    // Left-facing Lakitu
    {
        4000.0F,                                    // Altitude max?
        -1000.0F,                                   // Altitude min?
        -1000.0F,                                   // Z-Axis position
        1.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundCastleLakituDObjSetup,        // DObj Setup attributes offset (?)
            0x0,                                    // MObjSub offset
            &lEFGroundCastleLakituLAnimJoint,       // AnimJoint offset
            0x0                                     // MatAnimJoint offset
        }   
    }
};

// 0x8012F2C0
EFGroundCreateDesc dEFGroundJungleEffectDescs[/* */] =
{
    // Kongo Jungle Birds
    {
        4000.0F,                                    // Altitude max?
        3000.0F,                                    // Altitude min?
        -12000.0F,                                  // Z-Axis position
        1.4F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundJungleBirdDObjSetup,          // DObj Setup attributes offset (?)
            &lEFGroundJungleBirdMObjSub,            // MObjSub offset
            &lEFGroundJungleBirdAnimJoint,          // AnimJoint offset
            &lEFGroundJungleBirdMatAnimJoint        // MatAnimJoint offset
        }
    }
};

// 0x8012F300
EFGroundCreateDesc dEFGroundSectorEffectDescs[/* */] =
{
    // Distant rocket with step physics (?)
    {
        5000.0F,                                    // Altitude max?
        0.0F,                                       // Altitude min?
        -10000.0F,                                  // Z-Axis position
        6.0F,                                       // Scale
        -1,                                         // Effect status?
        efGroundSetStepPositions,                   // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundUpdateStepPositions,            // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundSectorRocketDObjSetup,        // DObj Setup attributes offset (?)
            0x0,                                    // MObjSub offset
            &lEFGroundSectorRocketAnimJoint,        // AnimJoint offset
            0x0                                     // MatAnimJoint offset
        }   
    },

    // Close rocket with common physics
    {
        5000.0F,                                    // Altitude max?
        0.0F,                                       // Altitude min?
        -3000.0F,                                   // Z-Axis position
        6.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundSectorRocketDObjSetup,        // DObj Setup attributes offset (?)
            0x0,                                    // MObjSub offset
            &lEFGroundSectorRocketAnimJoint,        // AnimJoint offset
            0x0                                     // MatAnimJoint offset
        }   
    },

    // Distant rocket with common physics
    {
        5000.0F,                                    // Altitude max?
        0.0F,                                       // Altitude min?
        -10000.0F,                                  // Z-Axis position
        6.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundSectorRocketDObjSetup,        // DObj Setup attributes offset (?)
            0x0,                                    // MObjSub offset
            &lEFGroundSectorRocketAnimJoint,        // AnimJoint offset
            0x0                                     // MatAnimJoint offset
        }
    },

    // Left-facing spaceship
    {
        4000.0F,                                    // Altitude max?
        0.0F,                                       // Altitude min?
        -8000.0F,                                   // Z-Axis position
        6.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundSectorShipDObjSetup,          // DObj Setup attributes offset (?)
            &lEFGroundSectorShipMObjSub,            // MObjSub offset
            &lEFGroundSectorShipLAnimJoint,         // AnimJoint offset
            &lEFGroundSectorShipMatAnimJoint        // MatAnimJoint offset
        }
    },

    // Right-facing spaceship
    {
        4000.0F,                                    // Altitude max?
        0.0F,                                       // Altitude min?
        -8000.0F,                                   // Z-Axis position
        6.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundSectorShipDObjSetup,          // DObj Setup attributes offset (?)
            &lEFGroundSectorShipMObjSub,            // MObjSub offset
            &lEFGroundSectorShipRAnimJoint,         // AnimJoint offset
            &lEFGroundSectorShipMatAnimJoint        // MatAnimJoint offset
        }
    },
};

// 0x8012F440
EFGroundCreateDesc dEFGroundZebesEffectDescs[/* */] =
{
    // Spaceship
    {
        4000.0F,                                    // Altitude max?
        1000.0F,                                    // Altitude min?
        -5000.0F,                                   // Z-Axis position
        2.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundZebesShipDObjSetup,           // DObj Setup attributes offset (?)
            &lEFGroundZebesShipMObjSub,             // MObjSub offset
            &lEFGroundZebesShipAnimJoint,           // AnimJoint offset
            &lEFGroundZebesShipMatAnimJoint         // MatAnimJoint offset
        }
    },

    // Ridley
    {
        6000.0F,                                    // Altitude max?
        2000.0F,                                    // Altitude min?
        -10000.0F,                                  // Z-Axis position
        3.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundZebesRidleyDObjSetup,         // DObj Setup attributes offset (?)
            &lEFGroundZebesRidleyMObjSub,           // MObjSub offset
            &lEFGroundZebesRidleyAnimJoint,         // AnimJoint offset
            &lEFGroundZebesRidleyMatAnimJoint       // MatAnimJoint offset
        }
    }
};

// 0x8012F4C0
EFGroundCreateDesc dEFGroundYosterEffectDescs[/* */] =
{
    // Bird
    {
        3000.0F,                                    // Altitude max?
        500.0F,                                     // Altitude min?
        -6000.0F,                                   // Z-Axis position
        3.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundYosterBirdDObjSetup,          // DObj Setup attributes offset (?)
            &lEFGroundYosterBirdMObjSub,            // MObjSub offset
            &lEFGroundYosterBirdAnimJoint,          // AnimJoint offset
            &lEFGroundYosterBirdMatAnimJoint        // MatAnimJoint offset
        }
    },
    
    // Left-facing slow fruit-carrying Fly Guy
    {
        3000.0F,                                    // Altitude max?
        500.0F,                                     // Altitude min?
        -3000.0F,                                   // Z-Axis position
        2.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundUpdateEffectYaw,                // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundYosterHeihoFruitSlowLDObjSetup,       // DObj Setup attributes offset (?)
            &lEFGroundYosterHeihoFruitSlowMObjSub,    // MObjSub offset
            &lEFGroundYosterHeihoFruitSlowAnimJoint,        // AnimJoint offset
            &lEFGroundYosterHeihoFruitSlowMatAnimJoint      // MatAnimJoint offset
        }
    },

    // Right-facing slow fruit-carrying Fly Guy
    {
        3000.0F,                                    // Altitude max?
        500.0F,                                     // Altitude min?
        -3000.0F,                                   // Z-Axis position
        2.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundUpdateEffectYaw,                // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundYosterHeihoFruitSlowRDObjSetup,       // DObj Setup attributes offset (?)
            &lEFGroundYosterHeihoFruitSlowMObjSub,    // MObjSub offset
            &lEFGroundYosterHeihoFruitSlowAnimJoint,        // AnimJoint offset
            &lEFGroundYosterHeihoFruitSlowMatAnimJoint      // MatAnimJoint offset
        }
    },

    // Slow Fly Guy
    {
        3000.0F,                                    // Altitude max?
        500.0F,                                     // Altitude min?
        -3000.0F,                                   // Z-Axis position
        2.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundYosterHeihoSlowDObjSetup,     // DObj Setup attributes offset (?)
            &lEFGroundYosterHeihoSlowMObjSub,       // MObjSub offset
            &lEFGroundYosterHeihoSlowAnimJoint,     // AnimJoint offset
            &lEFGroundYosterHeihoSlowMatAnimJoint   // MatAnimJoint offset
        }
    },

    // Fast fruit-carrying Fly Guy
    {
        3000.0F,                                    // Altitude max?
        500.0F,                                     // Altitude min?
        -2000.0F,                                   // Z-Axis position
        2.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundYosterHeihoFruitFastDObjSetup,        // DObj Setup attributes offset (?)
            &lEFGroundYosterHeihoFruitFastMObjSub,    // MObjSub offset
            &lEFGroundYosterHeihoFruitFastAnimJoint,        // AnimJoint offset
            &lEFGroundYosterHeihoFruitFastMatAnimJoint      // MatAnimJoint offset
        }
    },

    // Fast Fly Guy
    {
        3000.0F,                                    // Altitude max?
        500.0F,                                     // Altitude min?
        -3000.0F,                                   // Z-Axis position
        2.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundYosterHeihoFastDObjSetup,     // DObj Setup attributes offset (?)
            &lEFGroundYosterHeihoFastMObjSub,       // MObjSub offset
            &lEFGroundYosterHeihoFastAnimJoint,     // AnimJoint offset
            &lEFGroundYosterHeihoFastMatAnimJoint   // MatAnimJoint offset
        }
    }
};

// 0x8012F640
EFGroundCreateDesc dEFGroundPupupuEffectDescs[/* */] =
{
    // Left-facing Bronto Burt
    {
        2000.0F,                                    // Altitude max?
        -300.0F,                                    // Altitude min?
        -4000.0F,                                   // Z-Axis position
        1.4F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundPupupuBrontoDObjSetup,        // DObj Setup attributes offset (?)
            &lEFGroundPupupuBrontoMObjSub,          // MObjSub offset
            &lEFGroundPupupuBrontoLAnimJoint,       // AnimJoint offset
            &lEFGroundPupupuBrontoLMatAnimJoint     // MatAnimJoint offset
        }
    },

    // Right-facing Bronto Burt
    {
        1500.0F,                                    // Altitude max?
        -300.0F,                                    // Altitude min?
        -3000.0F,                                   // Z-Axis position
        1.4F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundPupupuBrontoDObjSetup,        // DObj Setup attributes offset (?)
            &lEFGroundPupupuBrontoMObjSub,          // MObjSub offset
            &lEFGroundPupupuBrontoRAnimJoint,       // AnimJoint offset
            &lEFGroundPupupuBrontoRMatAnimJoint     // MatAnimJoint offset
        }
    },

    // Distant King Dedede
    {
        3000.0F,                                    // Altitude max?
        1000.0F,                                    // Altitude min?
        -5000.0F,                                   // Z-Axis position
        2.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundPupupuDededeDObjSetup,        // DObj Setup attributes offset (?)
            0x0,                                    // MObjSub offset
            &lEFGroundPupupuDededeFarAnimJoint,     // AnimJoint offset
            0x0                                     // MatAnimJoint offset
        }
    },

    // Close King Dedede
    {
        3000.0F,                                    // Altitude max?
        1000.0F,                                    // Altitude min?
        -5000.0F,                                   // Z-Axis position
        3.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundPupupuDededeDObjSetup,        // DObj Setup attributes offset (?)
            0x0,                                    // MObjSub offset
            &lEFGroundPupupuDededeNearAnimJoint,    // AnimJoint offset
            0x0                                     // MatAnimJoint offset
        }
    }
};

// 0x8012F740
EFGroundCreateDesc dEFGroundYamabukiEffectDescs[/* */] =
{
    // Butterfree
    {
        2000.0F,                                    // Altitude max?
        -300.0F,                                    // Altitude min?
        -4000.0F,                                   // Z-Axis position
        1.4F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundYamabukiButterfreeDObjSetup,  // DObj Setup attributes offset (?)
            &lEFGroundYamabukiButterfreeMObjSub,    // MObjSub offset
            &lEFGroundYamabukiButterfreeAnimJoint,  // AnimJoint offset
            &lEFGroundYamabukiButterfreeMatAnimJoint// MatAnimJoint offset
        }
    },

    // Moltres
    {
        3000.0F,                                    // Altitude max?
        1000.0F,                                    // Altitude min?
        -5000.0F,                                   // Z-Axis position
        2.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundYamabukiFireDObjSetup,        // DObj Setup attributes offset (?)
            &lEFGroundYamabukiFireMObjSub,          // MObjSub offset
            &lEFGroundYamabukiFireAnimJoint,        // AnimJoint offset
            &lEFGroundYamabukiFireMatAnimJoint      // MatAnimJoint offset
        }
    },

    // Fearow
    {
        2000.0F,                                    // Altitude max?
        -300.0F,                                    // Altitude min?
        -4000.0F,                                   // Z-Axis position
        1.4F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundYamabukiOnidrillDObjSetup,    // DObj Setup attributes offset (?)
            &lEFGroundYamabukiOnidrillMObjSub,      // MObjSub offset
            &lEFGroundYamabukiOnidrillAnimJoint,    // AnimJoint offset
            &lEFGroundYamabukiOnidrillMatAnimJoint  // MatAnimJoint offset
        }
    },

    // Pidgey
    {
        3000.0F,                                    // Altitude max?
        1000.0F,                                    // Altitude min?
        -5000.0F,                                   // Z-Axis position
        2.0F,                                       // Scale
        -1,                                         // Effect status?
        NULL,                                       // Ground Effect Proc Update?

        // Effect Creation Desc
        {
            0x4 | EFFECT_FLAG_USERDATA | 0x1,       // Flags
            4,                                      // DL Link
            NULL,                                   // Texture file

            // DObj transformation struct 1
            {
                nGCTransformTraRotRpyRSca,      // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            // DObj transformation struct 2
            {
                nGCTransformTraRotRpyR,         // Main matrix transformations   
                nGCTransformNull,               // Secondary matrix transformations
                0x00                                // ???
            },

            efGroundCommonProcUpdate,               // Proc Update
            gcDrawDObjTreeForGObj,                // Proc Render

            &lEFGroundYamabukiPoppoDObjSetup,       // DObj Setup attributes offset (?)
            &lEFGroundYamabukiPoppoMObjSub,         // MObjSub offset
            &lEFGroundYamabukiPoppoAnimJoint,       // AnimJoint offset
            &lEFGroundYamabukiPoppoMatAnimJoint     // MatAnimJoint offset
        }
    }
};

// 0x8012F840
EFGroundData dEFGroundDatas[/* */] =
{
    // Peach's Castle
    { 
        ARRAY_COUNT(dEFGroundCastleParams),         // Number of param structs
        dEFGroundCastleParams,                      // Param struct array pointer
        &lEFGroundCastleDataStart,                  // ???
        dEFGroundCastleEffectDescs                  // Desc struct array pointer
    },

    // Sector Z
    { 
        ARRAY_COUNT(dEFGroundSectorParams),         // Number of param structs
        dEFGroundSectorParams,                      // Param struct array pointer
        &lEFGroundSectorDataStart,                  // ???
        dEFGroundSectorEffectDescs                  // Desc struct array pointer
    },

    // Kongo Jungle
    { 
        ARRAY_COUNT(dEFGroundJungleParams),         // Number of param structs
        dEFGroundJungleParams,                      // Param struct array pointer
        &lEFGroundJungleDataStart,                  // ???
        dEFGroundJungleEffectDescs                  // Desc struct array pointer
    },

    // Planet Zebes
    { 
        ARRAY_COUNT(dEFGroundZebesParams),          // Number of param structs
        dEFGroundZebesParams,                       // Param struct array pointer
        &lEFGroundZebesDataStart,                   // ???
        dEFGroundZebesEffectDescs                   // Desc struct array pointer
    },

    // Hyrule Castle
    { 
        0,                                          // Number of param structs
        NULL,                                       // Param struct array pointer
        0x0,                                        // ???
        NULL                                        // Desc struct array pointer
    },

    // Yoshi's Island
    { 
        ARRAY_COUNT(dEFGroundYosterParams),         // Number of param structs
        dEFGroundYosterParams,                      // Param struct array pointer
        &lEFGroundYosterDataStart,                  // ???
        dEFGroundYosterEffectDescs                  // Desc struct array pointer
    },

    // Dream Land
    { 
        ARRAY_COUNT(dEFGroundPupupuParams),         // Number of param structs
        dEFGroundPupupuParams,                      // Param struct array pointer
        &lEFGroundPupupuDataStart,                  // ???
        dEFGroundPupupuEffectDescs                  // Desc struct array pointer
    },

    // Saffron City
    { 
        ARRAY_COUNT(dEFGroundYamabukiParams),       // Number of param structs
        dEFGroundYamabukiParams,                    // Param struct array pointer
        &lEFGroundYamabukiDataStart,                // ???
        dEFGroundYamabukiEffectDescs                // Desc struct array pointer
    }
};

// 0x8012F8C0
EFGroundParam dEFGroundCastleParams[/* */] = 
{
    { 0, 0, 0, 2 },
    { 1, 0, 0, 1 }
};

// 0x8012F8D8
EFGroundParam dEFGroundJungleParams[/* */] =
{
    { 0, 0, 0, 2 },
    { 0, 1, 0, 1 }
};

// 0x8012F8F0
EFGroundParam dEFGroundZebesParams[/* */] =
{
    { 0, 0, 0, 1 },
    { 0, 1, 0, 1 },
    { 1, 0, 0, 1 }
};

// 0x8012F914
EFGroundParam dEFGroundSectorParams[/* */] =
{
    { 3, 0, -1,  3 },
    { 4, 0, +1, 3 },
    { 4, 1, +1, 4 },
    { 0, 0, -1,  3 },
    { 1, 0, -1,  2 },
    { 2, 0, -1,  2 },
    { 2, 0, +1, 1 }
};

// 0x8012F968
EFGroundParam dEFGroundYosterParams[/* */] =
{
    { 3, 0, 0, 2 },
    { 3, 1, 0, 1 },
    { 1, 0, 3*-1, 1 },
    { 2, 0, 3*+1,1 },
    { 4, 0, 0, 1 },
    { 5, 0, 0, 1 },
    { 0, 0, 0, 4 }
};

// 0x8012F9BC
EFGroundParam dEFGroundPupupuParams[/* */] =
{
    { 0, 0, 0, 2 },
    { 0, 1, 0, 1 },
    { 1, 0, 0, 2 },
    { 1, 1, 0, 1 },
    { 2, 0, 0, 1 },
    { 3, 0, 0, 1 }
};

// 0x8012FA04
EFGroundParam dEFGroundYamabukiParams[/* */] =
{
    { 0, 0, 0, 6 },
    { 0, 1, 0, 6 },
    { 3, 0, 0, 8 },
    { 3, 1, 0, 8 },
    { 2, 0, 0,10 },
    { 1, 0, 0, 1 }
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80115E80
sb32 efGroundCheckEffectInBounds(GObj *effect_gobj)
{
    EFStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    if (ep->effect_vars.ground_effect.lr == -1)
    {
        if (dobj->translate.vec.f.x <= (gMPCollisionGroundData->map_bound_left + 500.0F))
        {
            efManagerSetPrevStructAlloc(ep);
            gcEjectGObj(effect_gobj);

            return FALSE;
        }
    }
    else if (dobj->translate.vec.f.x >= (gMPCollisionGroundData->map_bound_right - 500.0F))
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);

        return FALSE;
    }
    return TRUE;
}

// 0x80115F5C
void efGroundCommonProcUpdate(GObj *effect_gobj)
{
    DObj *root_dobj = DObjGetStruct(effect_gobj);
    DObj *child_dobj = root_dobj->child;
    EFStruct *ep = efGetStruct(effect_gobj);

    if (efGroundCheckEffectInBounds(effect_gobj) != FALSE)
    {
        gcPlayAnimAll(effect_gobj);

        if (child_dobj->anim_wait == AOBJ_ANIM_NULL)
        {
            if ((ep->effect_vars.ground_effect.effect_status == -1) || (ep->effect_vars.ground_effect.effect_status != 0))
            {
                Vec3f pos = child_dobj->translate.vec.f;

                if (ep->effect_vars.ground_effect.lr == -1)
                {
                    root_dobj->translate.vec.f.x += (pos.x * root_dobj->scale.vec.f.x);
                }
                else root_dobj->translate.vec.f.x -= (pos.x * root_dobj->scale.vec.f.x);

                root_dobj->translate.vec.f.y += (pos.y * root_dobj->scale.vec.f.y);

                child_dobj->translate.vec.f.x = 0.0F;
                child_dobj->translate.vec.f.y = 0.0F;

                lbCommonAddDObjAnimAll(child_dobj, ep->effect_vars.ground_effect.anim_joint, ep->effect_vars.ground_effect.matanim_joint, 0.0F);
                gcPlayAnimAll(effect_gobj);
            }
        }
    }
}

// 0x80116090
void efGroundUpdateEffectYaw(GObj *effect_gobj)
{
    EFStruct *ep = efGetStruct(effect_gobj);
    DObj *root_dobj = DObjGetStruct(effect_gobj);

    efGroundCommonProcUpdate(effect_gobj);

    if (ep->effect_vars.ground_effect.lr == +1)
    {
        DObj *child_dobj = root_dobj->child->child;

        child_dobj->rotate.vec.f.z = -child_dobj->rotate.vec.f.z;
    }
}

// 0x801160E8
void efGroundUpdateStepPositions(GObj *effect_gobj)
{
    EFStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    efGroundCommonProcUpdate(effect_gobj);

    if
    (
        ((ep->effect_vars.ground_effect.lr == +1) && (ep->effect_vars.ground_effect.pos.x <= dobj->translate.vec.f.x)) ||
        ((ep->effect_vars.ground_effect.lr == -1)  && (ep->effect_vars.ground_effect.pos.x >= dobj->translate.vec.f.x))
    )
    {
        ep->effect_vars.ground_effect.scale_step = 0.0F;
    }
    dobj->scale.vec.f.x += ep->effect_vars.ground_effect.scale_step;
    dobj->scale.vec.f.y += ep->effect_vars.ground_effect.scale_step;
    dobj->scale.vec.f.z += ep->effect_vars.ground_effect.scale_step;
}

// 0x801161A0
void efGroundSetStepPositions(GObj *effect_gobj)
{
    EFStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);
    f32 step_div;

    if (ep->effect_vars.ground_effect.lr == +1)
    {
        step_div = 1000.0F - dobj->translate.vec.f.x;
        ep->effect_vars.ground_effect.pos.x = 1000.0F;
    }
    else
    {
        step_div = 1000.0F + dobj->translate.vec.f.x;
        ep->effect_vars.ground_effect.pos.x = -1000.0F;
    }
    ep->effect_vars.ground_effect.scale_step = (dobj->scale.vec.f.x * 10.0F) / step_div;
}

// 0x80116204
void efGroundUpdatePhysics(GObj *effect_gobj, s32 effect_id)
{
    EFStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    dobj->translate.vec.f.z = sEFGroundActor.effect_data->effect_descs[effect_id].pos_z;

    dobj->translate.vec.f.y =

    ((sEFGroundActor.effect_data->effect_descs[effect_id].alt_high - sEFGroundActor.effect_data->effect_descs[effect_id].alt_low) * mtTrigGetRandomFloat()) +

    sEFGroundActor.effect_data->effect_descs[effect_id].alt_low;

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = dobj->scale.vec.f.z = sEFGroundActor.effect_data->effect_descs[effect_id].scale;

    if (ep->effect_vars.ground_effect.lr == +1)
    {
        dobj->rotate.vec.f.y = F_CST_DTOR32(180.0F);
        dobj->translate.vec.f.x = gMPCollisionGroundData->map_bound_left + 500.0F;
    }
    else dobj->translate.vec.f.x = gMPCollisionGroundData->map_bound_right - 500.0F;

    if (sEFGroundActor.effect_data->effect_descs[effect_id].proc_groundeffect != NULL)
    {
        sEFGroundActor.effect_data->effect_descs[effect_id].proc_groundeffect(effect_gobj);
    }
}

// 0x8011633C
void efGroundSetupEffectDObjs(GObj *effect_gobj, DObjDesc *dobjdesc, DObj **dobjs, u8 tk1, u8 tk2, u8 arg5, s32 lr)
{
    EFStruct *ep;
    DObj *effect_dobj;
    s32 i;
    s32 j;
    s32 id;
    DObj *current_dobj;
    DObj *array_dobjs[18];
    f32 rotate_step;
    s32 index2;

    rotate_step = 0.0F;

    ep = efGetStruct(effect_gobj);
    current_dobj = NULL;

    effect_dobj = DObjGetStruct(effect_gobj);

    for (i = 0; i < ARRAY_COUNT(array_dobjs); i++)
    {
        array_dobjs[i] = NULL;
    }

    while (dobjdesc->index != ARRAY_COUNT(array_dobjs))
    {
        id = dobjdesc->index & 0xFFF;

        if (id != 0)
        {
            current_dobj = array_dobjs[id] = gcAddChildForDObj(array_dobjs[id - 1], dobjdesc->display_list);
        }
        else current_dobj = array_dobjs[0] = gcAddChildForDObj(effect_dobj, dobjdesc->display_list);

        gcAddDObjTriTransformKind(current_dobj, tk1, tk2, arg5);

        index2 = dobjdesc->index & 0xF000;

        if (index2 != 0)
        {
            if (ep->effect_vars.ground_effect.lr_bool != 0)
            {
                gcAddXObjForDObjFixed(current_dobj, 0x2E, 0);
            }
            else gcAddXObjForDObjFixed(current_dobj, 0x48, 0);

            if (lr == +1)
            {
                rotate_step = F_CST_DTOR32(180.0F);
            }
        }
        current_dobj->translate.vec.f = dobjdesc->translate;
        current_dobj->rotate.vec.f = dobjdesc->rotate;
        current_dobj->rotate.vec.f.y += rotate_step;
        current_dobj->scale.vec.f = dobjdesc->scale;

        if (dobjs != NULL)
        {
            *dobjs++ = current_dobj;
        }
        dobjdesc++;
    }
}

// 0x8011652C
GObj* efGroundMakeEffect(EFCreateDesc *effect_desc, s32 lr)
{
    GObj *effect_gobj;
    DObj *other_dobj;
    DObj *main_dobj;
    EFStruct *ep;
    s32 unused[2];
    DObjTransformTypes *rtypes1;
    DObjTransformTypes *rtypes2;
    u8 effect_flags;
    uintptr_t addr;
    uintptr_t o_mobsjub;
    uintptr_t o_anim_joint;
    uintptr_t o_matanim_joint;

    effect_flags = effect_desc->flags;

    if (effect_flags & EFFECT_FLAG_USERDATA)
    {
        ep = efManagerGetEffectNoForce();

        if (ep == NULL)
        {
            return NULL;
        }
        ep->proc_update = effect_desc->proc_update;
    }
    else ep = NULL;

    effect_gobj = gcMakeGObjSPAfter(nGCCommonKindEffect, efManagerFuncRun, nGCCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

    if (effect_gobj == NULL)
    {
        if (ep != NULL)
        {
            efManagerSetPrevStructAlloc(ep);
        }
        return NULL;
    }
    effect_gobj->user_data.p = ep;

    ep->effect_vars.ground_effect.lr_bool = ((lr != -3) && (lr != 3)) ? FALSE : TRUE;

    if (effect_desc->func_display == NULL)
    {
        return effect_gobj;
    }
    else
    {
        gcAddGObjDisplay(effect_gobj, effect_desc->func_display, effect_desc->dl_link, 2, -1);
        gcMoveGObjDLHead(effect_gobj, effect_desc->dl_link, GOBJ_DLLINKORDER_DEFAULT);

        o_mobsjub = effect_desc->o_mobjsub;
        o_anim_joint = effect_desc->o_anim_joint;
        o_matanim_joint = effect_desc->o_matanim_joint;

        addr = *(uintptr_t*)effect_desc->file_head;

        rtypes1 = &effect_desc->transform_types1;

        if (effect_flags & 1)
        {
            main_dobj = gcAddDObjForGObj(effect_gobj, NULL);

            lbCommonInitDObjTriTransform(main_dobj, rtypes1->tk1, rtypes1->tk2, rtypes1->tk3);

            rtypes2 = &effect_desc->transform_types2;

            if (effect_flags & 4)
            {
                efGroundSetupEffectDObjs(effect_gobj, (void*) (addr + effect_desc->o_dobjsetup), NULL, rtypes2->tk1, rtypes2->tk2, rtypes2->tk3, lr);

                main_dobj = main_dobj->child;
            }
            else
            {
                main_dobj = gcAddChildForDObj(main_dobj, (void*) (addr + effect_desc->o_dobjsetup));

                lbCommonInitDObjTriTransform(main_dobj, rtypes2->tk1, rtypes2->tk2, rtypes2->tk3);
            }
            if (o_mobsjub != 0)
            {
                lbCommonAddMObjForTreeDObjs(main_dobj, (void*) (addr + o_mobsjub));
            }
            if ((o_anim_joint != 0) || (o_matanim_joint != 0))
            {
                lbCommonAddDObjAnimAll(main_dobj, (o_anim_joint != 0) ? (void*) (addr + o_anim_joint) : NULL, (o_matanim_joint != 0) ? (void*) (addr + o_matanim_joint) : NULL, 0.0F);
                gcPlayAnimAll(effect_gobj);
            }
        }
    }
    return effect_gobj;
}

// 0x8011677C
void efGroundMakeEffectID(s32 effect_id)
{
    GObj *effect_gobj;
    EFStruct *ep;
    uintptr_t addr;

    sEFGroundActor.effect_data->effect_descs[effect_id].effect_desc.file_head = &sEFGroundActor.file_head;
    effect_gobj = efGroundMakeEffect(&sEFGroundActor.effect_data->effect_descs[effect_id].effect_desc, sEFGroundActor.lr);

    if (effect_gobj != NULL)
    {
        ep = efGetStruct(effect_gobj);
        ep->effect_vars.ground_effect.effect_status = sEFGroundActor.effect_data->effect_descs[effect_id].effect_status;

        addr = (uintptr_t)*sEFGroundActor.effect_data->effect_descs[effect_id].effect_desc.file_head;

        if (sEFGroundActor.effect_data->effect_descs[effect_id].effect_desc.o_anim_joint != 0)
        {
            ep->effect_vars.ground_effect.anim_joint = (void*) (sEFGroundActor.effect_data->effect_descs[effect_id].effect_desc.o_anim_joint + addr);
        }
        else ep->effect_vars.ground_effect.anim_joint = NULL;

        if (sEFGroundActor.effect_data->effect_descs[effect_id].effect_desc.o_matanim_joint != 0)
        {
            ep->effect_vars.ground_effect.matanim_joint = (void*) (sEFGroundActor.effect_data->effect_descs[effect_id].effect_desc.o_matanim_joint + addr);
        }
        else ep->effect_vars.ground_effect.matanim_joint = NULL;

        ep->effect_vars.ground_effect.lr = sEFGroundActor.lr;

        switch (ep->effect_vars.ground_effect.lr)
        {
        case (3 * -1):
            ep->effect_vars.ground_effect.lr = -1;
            break;

        case (3 * +1):
            ep->effect_vars.ground_effect.lr = +1;
            break;
        }
        efGroundUpdatePhysics(effect_gobj, effect_id);
    }
    if (sEFGroundActor.make_queue == 0)
    {
        sEFGroundActor.make_wait = mtTrigGetRandomIntRange(10000) + 6000;
    }
    else sEFGroundActor.make_wait = 30;
}

// 0x801168CC
void EFGroundActorProcUpdate(GObj *gobj)
{
    s32 param_id;
    s32 random;
    s32 unused;
    s32 effect_id;
    EFGroundParam *param;

    if (sEFGroundActor.make_wait == 0)
    {
        effect_id = sEFGroundActor.effect_id;

        if (sEFGroundActor.make_queue == 0)
        {
            param_id = mtTrigGetRandomIntRange(sEFGroundActor.effect_count);

            param_id = sEFGroundActor.effect_ids[param_id];

            param = sEFGroundActor.effect_data->effect_params;

            effect_id = sEFGroundActor.effect_id = (param + param_id)->effect_id; // Any other solution results in a regswap or sEFGroundActor getting duplicated???

            sEFGroundActor.lr = (param + param_id)->lr;

            if (sEFGroundActor.lr == 0)
            {
                sEFGroundActor.lr = (mtTrigGetRandomIntRange(2) == 0) ? -1 : +1;
            }
            sEFGroundActor.make_queue = (param + param_id)->make_queue;

            if (sEFGroundActor.make_queue != 0)
            {
                sEFGroundActor.make_queue += mtTrigGetRandomIntRange(2);
            }
        }
        else sEFGroundActor.make_queue--;

        efGroundMakeEffectID(effect_id);
    }
    sEFGroundActor.make_wait--;
}

// 0x801169CC
void efGroundSetupRandomWeights(void)
{
    u8 *effect_ids;
    u8 j, i, k;
    u8 effect_weights;
    EFGroundParam *param;

    param = sEFGroundActor.effect_data->effect_params;

    for (i = 0, j = 0; i < sEFGroundActor.effect_data->params_num; i++)
    {
        j += (param + i)->effect_weight;
    }
    sEFGroundActor.effect_ids = effect_ids = syTaskmanMalloc(j * (sizeof(*sEFGroundActor.effect_ids) | sizeof(*effect_ids)), 0x0);
    sEFGroundActor.effect_count = j;

    effect_weights = param->effect_weight;

    for (i = 0, k = 0; i < j; i++, effect_ids++)
    {
        if (effect_weights == i)
        {
            k++;

            effect_weights += (param + k)->effect_weight;
        }
        *effect_ids = k;
    }
}

// 0x80116AD0
void efGroundMakeEffectSpawnActor(void)
{
    GObj *effect_gobj;

    if ((gBattleState->gr_kind <= nGRKindBattleEnd) && (gSceneData.scene_current != nSCKind1PTraining) && (dEFGroundDatas[gBattleState->gr_kind].effect_params != NULL))
    {
        effect_gobj = gcMakeGObjSPAfter(nGCCommonKindEffect, NULL, 7, GOBJ_LINKORDER_DEFAULT);

        if (effect_gobj != NULL)
        {
            gcAddGObjProcess(effect_gobj, EFGroundActorProcUpdate, nGCProcessKindProc, 1);

            effect_gobj->user_data.p = &sEFGroundActor;

            sEFGroundActor.make_wait = mtTrigGetRandomIntRange(10000) + 6000;
            sEFGroundActor.effect_id = 0;
            sEFGroundActor.effect_data = &dEFGroundDatas[gBattleState->gr_kind];

            sEFGroundActor.file_head = (void*) ((uintptr_t)gMPCollisionGroundData->gr_desc[1].dobjdesc - (intptr_t)dEFGroundDatas[gBattleState->gr_kind].o_data);
            sEFGroundActor.make_queue = 0;

            efGroundSetupRandomWeights();
        }
    }
}
