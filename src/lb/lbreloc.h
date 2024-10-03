#ifndef _LBRELOC_H_
#define _LBRELOC_H_

#include <ssb_types.h>
#include <lb/lbdef.h>

#define GetAddressFromOffset(file_ptr, offset) ((int*)((intptr_t)(file_ptr) + (intptr_t)(offset)))

/* Can't actually use this in a matching build, newline memes :(
#define rdManagerSetupCommonFiles(status_buffer, force_status_buffer)                    \
{                                                                           \
    lbRelocSetup rl_setup;                                                  \
    rl_setup.table_addr = &lLBRelocTableAddr;                               \
    rl_setup.table_files_num = &lLBRelocTableFilesNum;                      \
    rl_setup.file_heap = NULL;                                              \
    rl_setup.file_heap_size = 0;                                            \
    rl_setup.status_buffer = status_buffer;                                       \
    rl_setup.status_buffer_size = (status_buffer) ? ARRAY_COUNT(status_buffer) : 0;  \
    rl_setup.force_status_buffer = force_status_buffer;                                         \
    rl_setup.force_status_buffer_size = (force_status_buffer) ? ARRAY_COUNT(force_status_buffer) : 0;     \
    lbRelocInitSetup(&rl_setup);                                            \
    lbRelocLoadFilesExtern                                                  \
    (                                                                       \
        dGMCommonFileIDs,                                                   \
        ARRAY_COUNT(dGMCommonFileIDs),                                      \
        gGMCommonFiles,                                                     \
        syProgMalloc                                                       \
        (                                                                   \
            lbRelocGetAllocSize                                             \
            (                                                               \
                dGMCommonFileIDs,                                           \
                ARRAY_COUNT(dGMCommonFileIDs)                               \
            ),                                                              \
            0x10                                                            \
        )                                                                   \
    );                                                                      \
}
*/

extern uintptr_t lLBRelocTableFilesNum;     // 0x00000854
extern uintptr_t lLBRelocTableAddr;         // 0x001AC870

extern void* lbRelocFindFileStatusBuffer(u32 id);
extern void* lbRelocGetFileStatusBuffer(u32 id);
extern void* lbRelocFindFileForceStatusBuffer(u32 id);
extern void* lbRelocGetFileForceStatusBuffer(u32 id);
extern void lbRelocAddFileStatusBuffer(u32 id, void *addr);
extern void lbRelocAddFileForceStatusBuffer(u32 id, void *addr);
extern void lbRelocReadDmaTableEntry(u32 entry_id);
extern void lbRelocLoadAndRelocFile(u32 file_id, void *ram_dst, u32 bytes_num, s32 loc);
extern size_t lbRelocGetExternBytesNum(u32 file_id);
extern size_t lbRelocGetFileSize(u32 id);
extern void* lbRelocGetFileExternStatusBuffer(u32 file_id);
extern void* lbRelocGetFileExternHeap(u32 id, void *heap);
extern void* lbRelocGetFileInternBuffer(u32 file_id);
extern void* lbRelocGetFileExternForceStatusBuffer(u32 file_id);
extern void* lbRelocGetFileExternForceStatusBufferHeap(u32 id, void *heap);
extern size_t lbRelocLoadFilesExtern(u32 *ids, u32 len, void **files, void *heap);
extern size_t lbRelocLoadFilesIntern(u32 *ids, u32 len, void **files);
extern size_t lbRelocGetAllocSize(u32 *ids, u32 len);
extern void lbRelocInitSetup(lbRelocSetup *setup);

#endif
