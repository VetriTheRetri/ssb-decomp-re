

#include <gm/generic.h>
#include <lb/library.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8018EA30
lbFileNode sSCExplainStatusBuf[50];

// 0x8018EBC0
lbFileNode sSCExplainForceBuf[7];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8018E640
void scExplainSetupFiles(void)
{
    lbRelocSetup rl_setup;

    rl_setup.table_addr = &lLBRelocTableAddr;
    rl_setup.table_files_num = &lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buf = sSCExplainStatusBuf;
    rl_setup.status_buf_size = ARRAY_COUNT(sSCExplainStatusBuf);
    rl_setup.force_buf = sSCExplainForceBuf;
    rl_setup.force_buf_size = ARRAY_COUNT(sSCExplainForceBuf);

    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dGMCommonFileIDs, 
        ARRAY_COUNT(dGMCommonFileIDs), 
        gGMCommonFiles, 
        gsMemoryAlloc
        (
            lbRelocGetAllocSize
            (
                dGMCommonFileIDs, 
                ARRAY_COUNT(dGMCommonFileIDs)
            ), 
            0x10
        )
    );
}