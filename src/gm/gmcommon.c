#include <sys/obj.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80130D40
void *gGMCommonFiles[8];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80116BD0 - These will be linker variables in the future
u32 dGMCommonFileIDs[/* */] = 
{ 
    0x000000A6, 0x00000052, 0x000000A4, 0x000000A5,
    0x00000024, 0x000000C5, 0x00000026, 0x00000025
};
