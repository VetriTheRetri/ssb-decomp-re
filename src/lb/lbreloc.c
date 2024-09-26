#include <ssb_types.h>
#include <lb/library.h>

#include <scenemgr/scene_manager.h>
#include <sys/error.h>
#include <sys/dma.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x800D62E0
lbInternBuf sLBRelocInternBuf;

// this buffer and pointers are used to DMA table entry info from the rom
// as needed for reading in file data
// 0x800D6310
lbTableEntry sLBRelocTableEntries[nLBFileLocationEnumMax];

// 0x800D6334
lbTableEntry *sLBRelocCurrentTableEntry;

// 0x800D6338
lbTableEntry *sLBRelocNextTableEntry;

// external data pointers and buffers
// loaded files in an external heap
// 0x800D633C
u32 *sLBRelocExternFileIDs;

// 0x800D6340
s32 sLBRelocExternFileIDsNum;

// 0x800D6344
s32 sLBRelocExternFileIDsMax;

// 0x800D6348
void *sLBRelocExternFileHeap;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

void* lbRelocFindFileStatusBuf(u32 id)
{
    s32 i;

    if (sLBRelocInternBuf.status_buf_num == 0)
    {
        return NULL;
    }
    else for (i = 0; i < sLBRelocInternBuf.status_buf_num; i++)
    {
        if (id == sLBRelocInternBuf.status_buf[i].id)
        {
            return sLBRelocInternBuf.status_buf[i].addr;
        }
    }
    return NULL;
}

void* lbRelocGetFileStatusBuf(u32 id)
{
    return lbRelocFindFileStatusBuf(id);
}

void* lbRelocFindFileForceBuf(u32 id)
{
    s32 i;

    if (sLBRelocInternBuf.force_buf_num != 0)
    {
        for (i = 0; i < sLBRelocInternBuf.force_buf_num; i++)
        {
            if (id == sLBRelocInternBuf.force_buf[i].id)
            {
                return sLBRelocInternBuf.force_buf[i].addr;
            }
        }
    }

    return lbRelocFindFileStatusBuf(id);
}

void* lbRelocGetFileForceBuf(u32 id)
{
    return lbRelocFindFileForceBuf(id);
}

void lbRelocAddFileStatusBuf(u32 id, void *addr)
{
    u32 num = sLBRelocInternBuf.status_buf_num;

    if (num >= (u32)sLBRelocInternBuf.status_buf_max)
    {
        while (TRUE)
        {
            syErrorPrintf("Relocatable Data Manager: Status Buffer is full !!\n");
            scManagerRunPrintGObjStatus();
        }
    }

    sLBRelocInternBuf.status_buf[num].id = id;
    sLBRelocInternBuf.status_buf[num].addr = addr;
    sLBRelocInternBuf.status_buf_num++;
}

void lbRelocAddFileForceBuf(u32 id, void *addr)
{
    u32 num = sLBRelocInternBuf.force_buf_num;

    if (num >= (u32)sLBRelocInternBuf.force_buf_max)
    {
        while (TRUE)
        {
            syErrorPrintf("Relocatable Data Manager: Force Status Buffer is full !!\n");
            scManagerRunPrintGObjStatus();
        }
    }
    sLBRelocInternBuf.force_buf[num].id = id;
    sLBRelocInternBuf.force_buf[num].addr = addr;
    sLBRelocInternBuf.force_buf_num++;
}

void lbRelocReadDmaTableEntry(u32 entry_id)
{
    syDmaReadRom
    (
        (u32)sLBRelocInternBuf.rom_table_lo + (entry_id * sizeof(lbTableEntry)),
        sLBRelocCurrentTableEntry,
        sizeof(lbTableEntry) * 2
    );
}

void lbRelocLoadAndRelocFile(u32 file_id, void *ram_dst, u32 bytes_num, s32 loc)
{
    u16 *file_id_extern;
    lbRelocDesc *intern_desc, *extern_desc;
    void *vaddr_extern;
    u16 reloc_intern, reloc_extern;
    u8 file_ids[16];
    uintptr_t data_rom_offset;

    data_rom_offset = sLBRelocInternBuf.rom_table_hi + sLBRelocCurrentTableEntry->data_offset;

    if (sLBRelocCurrentTableEntry->is_vpk0)
    {
        syDmaReadVpk0(data_rom_offset, ram_dst);
    }
    else syDmaReadRom(data_rom_offset, ram_dst, bytes_num);

    if (loc == nLBFileLocationForce)
    {
        lbRelocAddFileForceBuf(file_id, ram_dst);
    }
    else lbRelocAddFileStatusBuf(file_id, ram_dst);
    
    reloc_intern = sLBRelocCurrentTableEntry->reloc_intern_offset;
    
    while (reloc_intern != 0xFFFF)
    {
        intern_desc = (lbRelocDesc*) ((uintptr_t)ram_dst + (reloc_intern * sizeof(u32)));
        reloc_intern = intern_desc->info.reloc;
        intern_desc->p = (void*) ((intern_desc->info.words_num * sizeof(u32)) + (uintptr_t)ram_dst);
    }
    reloc_extern = sLBRelocCurrentTableEntry->reloc_extern_offset;
    
    data_rom_offset += sLBRelocCurrentTableEntry->compressed_size * sizeof(u32);
    
    file_id_extern = (void*) LBRELOC_CACHE_ALIGN((uintptr_t)file_ids);
    
    while (reloc_extern != 0xFFFF)
    {
        extern_desc = (lbRelocDesc*) ((uintptr_t)ram_dst + (reloc_extern * sizeof(u32)));
        reloc_extern = extern_desc->info.reloc;

        syDmaReadRom(data_rom_offset, file_id_extern, sizeof(u16));
        
        if (loc == nLBFileLocationForce)
        {
            vaddr_extern = lbRelocFindFileForceBuf(*file_id_extern);
        }
        else vaddr_extern = lbRelocFindFileStatusBuf(*file_id_extern);

        if (vaddr_extern == NULL)
        {
            switch (loc)
            {
            case nLBFileLocationExtern:
                vaddr_extern = lbRelocGetFileExternStatusBuf(*file_id_extern);
                break;
                
            case nLBFileLocationDefault:
                vaddr_extern = lbRelocGetFileInternBuf(*file_id_extern);
                break;
                
            case nLBFileLocationForce:
                vaddr_extern = lbRelocGetFileExternForceBuf(*file_id_extern);
                break;
            }
        }
        extern_desc->p = (void*)((extern_desc->info.words_num * sizeof(u32)) + (uintptr_t)vaddr_extern);
        data_rom_offset += sizeof(u16);

        continue;
    }
}

size_t lbRelocGetExternBytesNum(u32 file_id)
{
    u16 *rom_extern_csr;
    u16 *file_id_read;  // s1
    size_t bytes_read;    // s2
    u16 *end;     // s3
    size_t compressed_size;
    void *rom_end;
    u8 file_ids_buf[20];
    s32 i;

    if (lbRelocFindFileStatusBuf(file_id) != NULL)
    {
        return 0;
    }
    else for (i = 0; i < sLBRelocExternFileIDsNum; i++)
    {
        if (file_id == sLBRelocExternFileIDs[i])
        {
            return 0;
        }
    }
    if (sLBRelocExternFileIDsNum >= sLBRelocExternFileIDsMax)
    {
        while (TRUE)
        {
            syErrorPrintf
            (
                "Relocatable Data Manager: External Data is over %d!!\n",
                sLBRelocExternFileIDsMax
            );
            scManagerRunPrintGObjStatus();
        }
    }
    lbRelocReadDmaTableEntry(file_id);
    
    bytes_read = (u32) LBRELOC_CACHE_ALIGN(sLBRelocCurrentTableEntry->decompressed_size * sizeof(u32));
    compressed_size = sLBRelocCurrentTableEntry->compressed_size * sizeof(u32);
        
    sLBRelocExternFileIDs[sLBRelocExternFileIDsNum++] = file_id;
        
    rom_end = (void*) (sLBRelocInternBuf.rom_table_hi + sLBRelocCurrentTableEntry->data_offset); // Ew...

    rom_extern_csr = (u16*) ((uintptr_t)rom_end + compressed_size);
    
    end = (u16*) (sLBRelocInternBuf.rom_table_hi + sLBRelocNextTableEntry->data_offset);

    file_id_read = (void*) LBRELOC_CACHE_ALIGN((uintptr_t)file_ids_buf);
    
    while (rom_extern_csr < end)
    {
        syDmaReadRom((uintptr_t)rom_extern_csr, file_id_read, sizeof(u16));
        bytes_read += lbRelocGetExternBytesNum(*file_id_read);
        rom_extern_csr++;
    }
    return bytes_read;
}

// calc space needed to load `id`
size_t lbRelocGetFileSize(u32 id)
{
    u32 file_ids_extern_buf[50];

    sLBRelocExternFileIDs = file_ids_extern_buf;
    sLBRelocExternFileIDsNum = 0;
    sLBRelocExternFileIDsMax = ARRAY_COUNT(file_ids_extern_buf);

    return lbRelocGetExternBytesNum(id);
}

/* 
 * Get a pointer to the start of a file.
 * This will copy the file from ROM into RAM if necessary
 */
void* lbRelocGetFileExternStatusBuf(u32 file_id)
{
    void *file_alloc;
    void *file;
    size_t file_size;

    file = lbRelocFindFileStatusBuf(file_id);

    if (file != NULL)
    {
        return file;
    }
    file_alloc = (void*) LBRELOC_CACHE_ALIGN((uintptr_t)sLBRelocExternFileHeap);
    lbRelocReadDmaTableEntry(file_id);

    file_size = sLBRelocCurrentTableEntry->decompressed_size * sizeof(u32);
    sLBRelocExternFileHeap = (void*) ((uintptr_t)file_alloc + file_size);

    lbRelocLoadAndRelocFile(file_id, file_alloc, file_size, nLBFileLocationExtern);

    return file_alloc;
}

void* lbRelocGetFileExternHeap(u32 id, void *heap)
{
    sLBRelocExternFileHeap = heap;
    return lbRelocGetFileExternStatusBuf(id);
}

void* lbRelocGetFileInternBuf(u32 file_id)
{
    size_t file_size;
    void *file;
    void *file_alloc, *file_alloc_end, *heap_end;

    file = lbRelocFindFileStatusBuf(file_id);
    
    if (file != NULL)
    {
        return file;
    }
    file_alloc = (void*) LBRELOC_CACHE_ALIGN((uintptr_t)sLBRelocInternBuf.heap_ptr);
    lbRelocReadDmaTableEntry(file_id);

    file_size = sLBRelocCurrentTableEntry->decompressed_size * sizeof(u32);
    
    if (((uintptr_t)file_alloc + file_size) > (uintptr_t)sLBRelocInternBuf.heap_end)
    {
        while (TRUE)
        {
            syErrorPrintf("Relocatable Data Manager: Buffer is full !!\n");
            scManagerRunPrintGObjStatus();
        }
    }
    sLBRelocInternBuf.heap_ptr = ((uintptr_t)file_alloc + file_size);
    
    lbRelocLoadAndRelocFile(file_id, file_alloc, file_size, nLBFileLocationDefault);

    return file_alloc;
}

void* lbRelocGetFileExternForceBuf(u32 file_id)
{
    void *file_alloc;
    void *file;
    size_t file_size;

    file = lbRelocFindFileForceBuf(file_id);

    if (file != NULL)
    {
        return file;
    }
    file_alloc = (void*) LBRELOC_CACHE_ALIGN((uintptr_t)sLBRelocExternFileHeap);
    lbRelocReadDmaTableEntry(file_id);

    file_size = sLBRelocCurrentTableEntry->decompressed_size * sizeof(u32);
    sLBRelocExternFileHeap = (void*) ((uintptr_t)file_alloc + file_size);

    lbRelocLoadAndRelocFile(file_id, file_alloc, file_size, nLBFileLocationForce);

    return file_alloc;
}

void* lbRelocGetFileExternForceBufHeap(u32 id, void *heap)
{
    sLBRelocExternFileHeap = heap;
    sLBRelocInternBuf.force_buf_num = 0;

    return lbRelocGetFileExternForceBuf(id);
}

size_t lbRelocLoadFilesExtern(u32 *ids, u32 len, void **files, void *heap)
{
    sLBRelocExternFileHeap = heap;

    // doesn't match as for-loop..?
    while (len != 0) 
    {
        *files = lbRelocGetFileExternStatusBuf(*ids);

        ids++;
        files++;
        len--;
    }

    // return the amount allocated
    return (size_t) ((uintptr_t)sLBRelocExternFileHeap - (uintptr_t)heap);
}

size_t lbRelocLoadFilesIntern(u32 *ids, u32 len, void **files)
{
    UNUSED s32 pad;
    void *heap = sLBRelocInternBuf.heap_ptr;

    // doesn't match as for-loop..?
    while (len)
    {
        *files = lbRelocGetFileInternBuf(*ids);

        ids++;
        files++;
        len--;
    }

    // return the amount allocated
    return (size_t) ((uintptr_t)sLBRelocInternBuf.heap_ptr - (uintptr_t)heap);
}

size_t lbRelocGetAllocSize(u32 *ids, u32 len)
{
    u32 file_ids[50];
    UNUSED u32 unused;
    size_t allocated;

    allocated = 0;

    sLBRelocExternFileIDs = file_ids;
    sLBRelocExternFileIDsNum = 0;
    sLBRelocExternFileIDsMax = ARRAY_COUNT(file_ids);

    while (len != 0)
    {
        allocated = LBRELOC_CACHE_ALIGN(allocated);
        allocated += lbRelocGetExternBytesNum(*ids);

        ids++;
        len--;
    }
    return allocated;
}

void lbRelocInitSetup(lbRelocSetup *setup)
{
    sLBRelocInternBuf.rom_table_lo = setup->table_addr;
    sLBRelocInternBuf.total_files_num = setup->table_files_num;
    sLBRelocInternBuf.rom_table_hi = setup->table_addr + ((setup->table_files_num + 1) * sizeof(lbTableEntry));

    sLBRelocInternBuf.heap_start = sLBRelocInternBuf.heap_ptr = setup->file_heap;
    sLBRelocInternBuf.heap_end = (void*) ((uintptr_t)setup->file_heap + setup->file_heap_size);

    sLBRelocCurrentTableEntry = (void*) LBRELOC_CACHE_ALIGN((uintptr_t)sLBRelocTableEntries);
    sLBRelocNextTableEntry = sLBRelocCurrentTableEntry + 1;

    sLBRelocInternBuf.status_buf_num = 0;
    sLBRelocInternBuf.status_buf_max = setup->status_buf_size;
    sLBRelocInternBuf.status_buf = setup->status_buf;

    sLBRelocInternBuf.force_buf_max = setup->force_buf_size;
    sLBRelocInternBuf.force_buf = setup->force_buf;
}
