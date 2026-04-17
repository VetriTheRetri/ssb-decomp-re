#include <sc/scene.h>
#include <reloc_data.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 8018EA30
LBFileNode sSCExplainStatusBuffer[50];

// 8018EBC0
LBFileNode sSCExplainForceStatusBuffer[7];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 8018E640
void scExplainSetupFiles()
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&llRelocFileCount;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sSCExplainStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sSCExplainStatusBuffer);
	rl_setup.force_status_buffer = sSCExplainForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sSCExplainForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesListed(dGMCommonFileIDs,  gGMCommonFiles);
}