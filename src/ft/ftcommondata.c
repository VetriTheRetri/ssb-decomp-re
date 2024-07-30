#include <ft/fighter.h>

// 0x8012C830
f32 dFTCommonDataHandicapTable[/* */][2] = 
{
    { 0.55F,               1.8181818F },        
    {  0.6F,             15.0F / 9.0F },
    {  0.7F,             10.0F / 7.0F },
    { 0.75F,             12.0F / 9.0F },
    {  0.8F,            11.25F / 9.0F },
    {  0.9F,             10.0F / 9.0F },
    { 0.95F,             10.0F / 9.5F },
    {  1.0F,              9.0F / 9.0F },
    { 1.09F,               0.9174312F },
    {  0.5F,             45.0F / 9.0F },
    { 0.55F,             36.0F / 9.0F },
    {  0.6F,             30.0F / 9.0F },
    { 0.65F,             20.0F / 7.0F },
    {  0.7F,             22.5F / 9.0F },
    { 0.75F,               1.8181818F },
    {  0.8F,               1.6949153F },
    { 0.85F,               1.5873016F },
    {  0.9F,               1.4925373F },
    { 0.95F,               1.4084507F },
    { 0.65F,             30.0F / 9.0F },
    {  0.7F,             20.0F / 7.0F },
    { 0.74F,             22.5F / 9.0F },
    { 0.77F,             20.0F / 9.0F },
    {  0.8F,             18.0F / 9.0F },
    {  1.0F,              4.0F / 7.0F },
    { 1.05F,              0.53763443F },
    {  1.1F,               0.5128205F },        // 10.0 / 19.5
    { 1.15F,               0.4761905F },
    { 1.23F,              0.45045045F },
    { 1.05F,              0.43478262F },
    {  1.1F,              3.0F / 7.5F },
    { 1.15F,    (10.0F / 3.0F) / 9.0F },
    {  1.2F,              0.35714287F },
    { 1.25F,              3.0F / 9.0F },
    {  0.9F,              9.0F / 9.0F },
    {  1.0F,              9.0F / 9.0F },
    {  1.1F,              9.0F / 9.0F },
    { 1.22F,              9.0F / 9.0F },
    {  1.5F,              9.0F / 9.0F },
    { 1.08F,  (200.0F / 24.0F) / 9.0F }
};

// 0x8012C970
u16 dFTCommonDataDownBounceSFX[/* */] =
{
    nGMSoundFGMDownBounceMario,        // Mario
    nGMSoundFGMDownBounceFox,          // Fox
    nGMSoundFGMDownBounceDonkey,       // Donkey Kong
    nGMSoundFGMDownBounceSamus,        // Samus
    nGMSoundFGMDownBounceMario,        // Luigi
    nGMSoundFGMDownBounceLink,         // Link
    nGMSoundFGMDownBounceYoshi,        // Yoshi
    nGMSoundFGMDownBounceCaptain,      // Captain Falcon
    nGMSoundFGMDownBounceKirby,        // Kirby
    nGMSoundFGMDownBouncePikachu,      // Pikachu
    nGMSoundFGMDownBouncePurin,        // Jigglypuff
    nGMSoundFGMDownBounceNess,         // Ness
    nGMSoundFGMDownBounceMario,        // Master Hand
    nGMSoundFGMDownBounceMario,        // Metal Mario
    nGMSoundFGMDownBounceMario,        // Poly Mario
    nGMSoundFGMDownBounceFox,          // Poly Fox
    nGMSoundFGMDownBounceDonkey,       // Poly Donkey Kong
    nGMSoundFGMDownBounceSamus,        // Poly Samus
    nGMSoundFGMDownBounceMario,        // Poly Luigi
    nGMSoundFGMDownBounceLink,         // Poly Link
    nGMSoundFGMDownBounceYoshi,        // Poly Yoshi
    nGMSoundFGMDownBounceCaptain,      // Poly Captain Falcon
    nGMSoundFGMDownBounceKirby,        // Poly Kirby
    nGMSoundFGMDownBouncePikachu,      // Poly Pikachu
    nGMSoundFGMDownBouncePurin,        // Poly Jigglypuff
    nGMSoundFGMDownBounceNess,         // Poly Ness
    nGMSoundFGMDownBounceDonkey        // Giant Donkey Kong
};

// 0x8012C9A8
u16 dFTCommonDataPublicityFighterChantSFX[/* */] =
{
    nGMSoundVoicePublicityMario,
    nGMSoundVoicePublicityFox,
    nGMSoundVoicePublicityDonkey,
    nGMSoundVoicePublicitySamus,
    nGMSoundVoicePublicityLuigi,
    nGMSoundVoicePublicityLink,
    nGMSoundVoicePublicityYoshi,
    nGMSoundVoicePublicityCaptain,
    nGMSoundVoicePublicityKirby,
    nGMSoundVoicePublicityPikachu,
    nGMSoundVoicePublicityPurin,
    nGMSoundVoicePublicityNess,
    nGMSoundFGMVoiceEnd,
    nGMSoundVoicePublicityMario,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd,
    nGMSoundFGMVoiceEnd
};

// 0x8012C9E0
ftItemThrow dFTCommonDataItemThrowDescs[/* */] =
{
    // LightThrowDrop
    {
        FALSE,  // Is Smash throw?
        36,     // Velocity
        110,    // Angle
        50      // Damage Multiplier %
    },

    // LightThrowDash
    {
        FALSE,  // Is Smash throw?
        120,    // Velocity
        10,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowF
    {
        FALSE,  // Is Smash throw?
        60,     // Velocity
        15,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowB
    {
        FALSE,  // Is Smash throw?
        60,     // Velocity
        15,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowHi
    {
        FALSE,  // Is Smash throw?
        65,     // Velocity
        90,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowLw
    {
        FALSE,  // Is Smash throw?
        65,     // Velocity
        -70,    // Angle
        100     // Damage Multiplier %
    },

    // LightThrowF4
    {
        TRUE,   // Is Smash throw?
        110,    // Velocity
        8,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowB4
    {
        TRUE,   // Is Smash throw?
        110,    // Velocity
        8,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowHi4
    {
        TRUE,   // Is Smash throw?
        110,    // Velocity
        90,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowLw4
    {
       TRUE,   // Is Smash throw?
       110,    // Velocity
       -70,    // Angle
       100     // Damage Multiplier %
    },

    // LightThrowAirF
    {
        FALSE,  // Is Smash throw?
        75,     // Velocity
        8,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirB
    {
        FALSE,  // Is Smash throw?
        75,     // Velocity
        8,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirHi
    {
        FALSE,  // Is Smash throw?
        80,     // Velocity
        90,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirLw
    {
        FALSE,  // Is Smash throw?
        75,     // Velocity
        -90,    // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirF4
    {
        TRUE,   // Is Smash throw?
        120,    // Velocity
        7,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirB4
    {
        TRUE,   // Is Smash throw?
        120,    // Velocity
        7,      // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirHi4
    {
        TRUE,   // Is Smash throw?
        120,    // Velocity
        90,     // Angle
        100     // Damage Multiplier %
    },

    // LightThrowAirLw4
    {
        TRUE,   // Is Smash throw?
        140,    // Velocity
        -90,    // Angle
        100     // Damage Multiplier %
    },

    // HeavyThrowF
    {
        FALSE,  // Is Smash throw?
        70,     // Velocity
        60,     // Angle
        100     // Damage Multiplier %
    },

    // HeavyThrowB
    {
        FALSE,  // Is Smash throw?
        70,     // Velocity
        60,     // Angle
        100     // Damage Multiplier %
    },

    // HeavyThrowF4
    {
        TRUE,   // Is Smash throw?
        90,     // Velocity
        20,     // Angle
        100     // Damage Multiplier %
    },

    // HeavyThrowB4
    {
        TRUE,   // Is Smash throw?
        90,     // Velocity
        20,     // Angle
        100     // Damage Multiplier %
    }
};

// 0x8012CA38
ftItemSwing dFTCommonDataItemSwingAnimRates[/* */] =
{
    100,        // SwordSwing1
    100,        // SwordSwing3
    100,        // SwordSwing4
    100,        // SwordSwingDash

    100,        // BatSwing1
    100,        // BatSwing3
    75,         // BatSwing4
    100,        // BatSwingDash

    200,        // HarisenSwing1
    200,        // HarisenSwing3
    200,        // HarisenSwing4
    100,        // HarisenSwingDash

    100,        // StarRodSwing1
    100,        // StarRodSwing3
    100,        // StarRodSwing4
    100         // StarRodSwingDash
};

// 0x8012CA78
gsColorRGBA dFTCommonDataShadowColorDefault = { 0x00, 0x00, 0x00, 0xA0 };

// 0x8012CA7C
gsColorRGBA dFTCommonDataShadowColorTeams[/* */] =
{   
    { 0x80, 0x00, 0x00, 0xB4 },     // Red Team
    { 0x00, 0x00, 0x80, 0xB4 },     // Blue Team
    { 0x00, 0x80, 0x00, 0xB4 }      // Green Team
};
