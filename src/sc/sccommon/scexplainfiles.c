

#include <gm/generic.h>
#include <lb/reloc_data_mgr.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8018EA30
rdFileNode sSCExplainStatusBuf[50];

// 0x8018EBC0
rdFileNode sSCExplainForceBuf[7];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8018E640
void scExplainSetupFiles(void)
{
    rdSetup rd_setup;

    rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
    rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
    rd_setup.file_heap = NULL;
    rd_setup.file_heap_size = 0;
    rd_setup.status_buf = sSCExplainStatusBuf;
    rd_setup.status_buf_size = ARRAY_COUNT(sSCExplainStatusBuf);
    rd_setup.force_buf = sSCExplainForceBuf;
    rd_setup.force_buf_size = ARRAY_COUNT(sSCExplainForceBuf);

    rdManagerInitSetup(&rd_setup);
    rdManagerLoadFiles
    (
        dGMCommonFileIDs, 
        ARRAY_COUNT(dGMCommonFileIDs), 
        gGMCommonFiles, 
        gsMemoryAlloc
        (
            rdManagerGetAllocSize
            (
                dGMCommonFileIDs, 
                ARRAY_COUNT(dGMCommonFileIDs)
            ), 
            0x10
        )
    );
}