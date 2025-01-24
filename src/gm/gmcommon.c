#include <if/interface.h>

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80116BD0 - These will be linker variables in the future
u32 dGMCommonFileIDs[/* */] = 
{ 
    0x000000A6,
    &lIFCommonGameStatusFileID,
    &lIFCommonPlayerDamageFileID,
    &lIFCommonTimerDigitsFileID,
    &lIFCommonDigitsFileID,
    0x000000C5,
    &lIFCommonPlayerTagsFileID,
    &lIFCommonAnnounceCommonFileID
};

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80130D40
void *gGMCommonFiles[ARRAY_COUNT(dGMCommonFileIDs)];
