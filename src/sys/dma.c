#include "common.h"
#include <sys/dma.h>
#include <sys/thread3.h>

#include <macros.h>
#include <ssb_types.h>

#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/sp.h>
#include <PR/rcp.h>
#include <PR/ultratypes.h>

OSPiHandle *gRomPiHandle;
OSPiHandle sSramPiHandle; // 80045048
OSMesg sDmaMesg[1];       // 800450BC
OSMesgQueue sDmaMesgQ;    // 800450C0

void *sVpkBufRamAddr;
u32 sVpkBufSize;
u32 sVpkBufRgcAddr;

void syDmaCreateMesgQueue(void) 
{
    osCreateMesgQueue(&sDmaMesgQ, sDmaMesg, OS_MESG_BLOCK);
}

void syDmaCopy(OSPiHandle *handle, uintptr_t physAddr, uintptr_t virtual, size_t size, u8 direction)
{
    OSIoMesg mesg;

    if (direction == OS_WRITE)
    {
        osWritebackDCache((void*)virtual, size);
    } 
    else osInvalDCache((void*)virtual, size);
    
    mesg.hdr.pri      = OS_MESG_PRI_NORMAL;
    mesg.hdr.retQueue = &sDmaMesgQ;
    mesg.size         = 0x10000;

    while (size > 0x10000)
    {
        mesg.dramAddr = (void*)virtual;
        mesg.devAddr  = physAddr;

        if (!(D_80045020_40830))
        {
            osEPiStartDma(handle, &mesg, direction);
        }
        osRecvMesg(&sDmaMesgQ, NULL, OS_MESG_BLOCK);
        size -= 0x10000;
        physAddr += 0x10000;
        virtual += 0x10000;
    }
    if (size != 0) 
    {
        mesg.dramAddr = (void*)virtual;
        mesg.devAddr  = physAddr;
        mesg.size     = size;

        if (!(D_80045020_40830)) 
        { 
            osEPiStartDma(handle, &mesg, direction);
        }
        osRecvMesg(&sDmaMesgQ, NULL, OS_MESG_BLOCK);
    }
}

void syDmaLoadOverlay(struct syOverlay *ovl)
{
    if (((uintptr_t)ovl->ram_text_end - (uintptr_t)ovl->ram_text_start) != 0)
    {
        osInvalICache
        (
            (void*)(u32)ovl->ram_text_start,
            (uintptr_t)ovl->ram_text_end - (uintptr_t)ovl->ram_text_start
        );
        osInvalDCache
        (
            (void*)(u32)ovl->ram_text_start,
            (uintptr_t)ovl->ram_text_end - (uintptr_t)ovl->ram_text_start
        );
    }

    if (((uintptr_t)ovl->ram_data_end - (uintptr_t)ovl->ram_data_start) != 0)
    {
        osInvalDCache
        (
            (void*)(u32)ovl->ram_data_start,
            (uintptr_t)ovl->ram_data_end - (uintptr_t)ovl->ram_data_start
        );
    }
    if ((ovl->rom_end - ovl->rom_start) != 0)
    {
        syDmaCopy
        (
            gRomPiHandle,
            ovl->rom_start,
            (uintptr_t)ovl->ram_load_start,
            ovl->rom_end - ovl->rom_start,
            OS_READ
        );
    }

    if (((uintptr_t)ovl->ram_noload_end - (uintptr_t)ovl->ram_noload_start) != 0)
    {
        bzero
        (
            (uintptr_t)ovl->ram_noload_start,
            (uintptr_t)ovl->ram_noload_end - (uintptr_t)ovl->ram_noload_start
        );
    }
}

void syDmaReadRom(uintptr_t rom_src, void *ram_dst, u32 bytes_num) 
{
    syDmaCopy(gRomPiHandle, rom_src, (uintptr_t)ram_dst, bytes_num, OS_READ);
}

void syDmaWriteRom(void *ram_src, uintptr_t rom_dst, u32 bytes_num) 
{
    syDmaCopy(gRomPiHandle, rom_dst, (uintptr_t)ram_src, bytes_num, OS_WRITE);
}

OSPiHandle* syDmaSramPiInit(void)
{
    if (sSramPiHandle.baseAddress == PHYS_TO_K1(PI_DOM2_ADDR2))
    { 
        return &sSramPiHandle; 
    }
    sSramPiHandle.type        = DEVICE_TYPE_SRAM;
    sSramPiHandle.baseAddress = PHYS_TO_K1(PI_DOM2_ADDR2);
    sSramPiHandle.latency     = 5;
    sSramPiHandle.pulse       = 12;
    sSramPiHandle.pageSize    = 13;
    sSramPiHandle.relDuration = 2;
    sSramPiHandle.domain      = PI_DOMAIN2;
    sSramPiHandle.speed       = 0;
    // once again, not sizeof(sSramPiHandle.transferInfo)...
    bzero(&sSramPiHandle.transferInfo, 0x60);
    osEPiLinkHandle(&sSramPiHandle);

    return &sSramPiHandle;
}

void syDmaReadSram(u32 rom_src, void *ram_dst, u32 nbytes)
{
    syDmaCopy(&sSramPiHandle, rom_src, (uintptr_t)ram_dst, nbytes, OS_READ);
}

void syDmaWriteSram(void *ram_src, u32 rom_dst, u32 nbytes)
{
    syDmaCopy(&sSramPiHandle, rom_dst, (uintptr_t)ram_src, nbytes, OS_WRITE);
}

// 0x80002E18 - vpk0 decoder
void syDmaDecodeVpk0(u16* data, u32 size, void (*update_stream)(void), u8* out_buf)
{
#define VPK0_UPDATE_STREAM()        \
    if ((uintptr_t) csr >= bound)   \
    {                               \
        update_stream();            \
        csr = data;                 \
    }

#define VPK0_READ_USHORT()  \
    temp_value <<= 0x10;    \
    temp_value |= *(csr++); \
    bits_num += 0x10;

#define VPK0_GET_BITS(var, n) \
    if (bits_num < n) {       \
        VPK0_UPDATE_STREAM(); \
        VPK0_READ_USHORT();   \
    }                         \
    bits_num -= n;             \
    var = ((temp_value << ((32 - n) - bits_num)) >> (32 - (u32) (n)));

#define VPK0_INIT_NODE(node)         \
    node = lengths_node;        \
    lengths_node->left = NULL;  \
    lengths_node->right = NULL; \
    lengths_node->value = 0;    \
    lengths_node++;

    uintptr_t bound = (uintptr_t) ((uintptr_t)data + size);
    syHuffman* sample1_node;
    syHuffman* lengths_node;
    syHuffman sp14C[64];
    u8* out_ptr;
    syHuffman* offsets_tree;
    syHuffman* lengthsTree;
    u8* copy_src;
    void* out_buf_end;
    u32 sample_method;
    syHuffman* off_stack[20];
    s32 off_stack_size;
    s32 value;
    syHuffman* offsets_node;
    syHuffman* off_node;
    syHuffman* lengths_stack[20];
    s32 lengths_stack_size;
    s32 unused2[2];
    syHuffman* length_node;
    s32 unused3[3];
    s32 sp64;
    s32 unused;
    u32 temp_value;
    s32 bits_num;
    u16* csr;

    bits_num = 0;
    temp_value = 0;
    lengths_node = sp14C;

    // read "vpk0" magic
    update_stream();

    csr = data;
    // clang-format off
    VPK0_READ_USHORT(); VPK0_UPDATE_STREAM(); VPK0_READ_USHORT(); bits_num -= 32;
    // clang-format on

    out_ptr = out_buf;

    // read size of decompressed data
    // clang-format off
    VPK0_UPDATE_STREAM(); VPK0_READ_USHORT(); VPK0_UPDATE_STREAM(); VPK0_READ_USHORT(); bits_num -= 32; out_buf_end = ((temp_value << ((32 - 32) - bits_num)) >> (32 - (u32) (32))) + out_buf;
    // clang-format on

    // read sample method
    VPK0_GET_BITS(sample_method, 8);

    // read Huffman tree for offsets
    off_stack_size = 0;
    off_stack[0] = NULL;

    while (TRUE)
    {
        // leaf or node
        VPK0_GET_BITS(value, 1);

        // node, but less than 2 nodes on stack -> end of tree
        if (value != 0 && off_stack_size < 2)
        {
            break;
        }
        if (value != 0)
        {
            // node
            VPK0_INIT_NODE(off_node);

            // combine two nodes from stack
            off_node->left = off_stack[off_stack_size - 2];
            off_node->right = off_stack[off_stack_size - 1];

            // write current node on stack
            off_stack[off_stack_size - 2] = off_node;
            off_stack_size--;
        }
        else
        {
            // leaf
            VPK0_INIT_NODE(off_node);

            // read leaf node value
            VPK0_GET_BITS(off_node->value, 8);

            off_stack[off_stack_size] = off_node;
            off_stack_size++;
        }
    }
    offsets_tree = off_stack[0];

    // read Huffman tree for lengths
    lengths_stack_size = 0;
    lengths_stack[0] = 0;

    while (TRUE)
    {
        // leaf or node
        VPK0_GET_BITS(value, 1);

        // node, but less than 2 nodes on stack -> end of tree
        if (value != 0 && lengths_stack_size < 2)
        {
            break;
        }
        if (value != 0)
        {
            // node
            VPK0_INIT_NODE(length_node);

            // combine two nodes from stack
            length_node->left = lengths_stack[lengths_stack_size - 2];
            length_node->right = lengths_stack[lengths_stack_size - 1];

            // write current node on stack
            lengths_stack[lengths_stack_size - 2] = length_node;
            lengths_stack_size--;
        }
        else
        {
            // leaf
            VPK0_INIT_NODE(length_node);

            // read leaf node value
            VPK0_GET_BITS(length_node->value, 8);

            lengths_stack[lengths_stack_size] = length_node;
            lengths_stack_size++;
        }
    }
    lengthsTree = lengths_stack[0];

    while ((uintptr_t)out_ptr < (uintptr_t)out_buf_end)
    {
        VPK0_GET_BITS(value, 1);

        if (!value)
        {
            // byte value
            VPK0_GET_BITS(*out_ptr++, 8);
        }
        else
        {
            // encoded data
            lengths_node = lengthsTree;

            if (sample_method != 0)
            {
                // two samples
                sp64 = 0;
                sample1_node = offsets_tree;

                while (sample1_node->left != NULL)
                {
                    VPK0_GET_BITS(value, 1);
                    sample1_node = !value ? sample1_node->left : sample1_node->right;
                }
                VPK0_GET_BITS(value, sample1_node->value);

                if (value <= 2)
                {
                    sp64 = value + 1;
                    offsets_node = offsets_tree;

                    while (offsets_node->left != NULL)
                    {
                        VPK0_GET_BITS(value, 1);
                        offsets_node = !value ? offsets_node->left : offsets_node->right;
                    }
                    VPK0_GET_BITS(value, offsets_node->value);
                }
                copy_src = out_ptr - value * 4 - sp64 + 8;
            }
            else
            {
                // one sample
                offsets_node = offsets_tree;
                // get number of bytes to move back
                while (offsets_node->left != NULL)
                {
                    VPK0_GET_BITS(value, 1);
                    offsets_node = !value ? offsets_node->left : offsets_node->right;
                }
                VPK0_GET_BITS(value, offsets_node->value);
                // move back
                copy_src = out_ptr - value;
            }
            // get number of bytes to copy
            while (lengths_node->left != NULL)
            {
                VPK0_GET_BITS(value, 1);
                lengths_node = !value ? lengths_node->left : lengths_node->right;
            }
            VPK0_GET_BITS(value, lengths_node->value);

            while (value-- > 0)
            {
                *(out_ptr++) = *(copy_src++);
            }
        }
    }
}

void syDmaInitVpk0Stream(u32 dev_addr, void *ram_addr, u32 bytes_num)
{
    sVpkBufRgcAddr = dev_addr;
    sVpkBufRamAddr = ram_addr;
    sVpkBufSize    = bytes_num;
}

void syDmaFillVpk0Buf(void)
{
    syDmaReadRom(sVpkBufRgcAddr, sVpkBufRamAddr, sVpkBufSize);
    sVpkBufRgcAddr += sVpkBufSize;
}

void syDmaReadVpk0Buf(u32 dev_addr, void *ram_dst, void *ram_addr, u32 bytes_num)
{
    syDmaInitVpk0Stream(dev_addr, ram_addr, bytes_num);
    syDmaDecodeVpk0(ram_addr, bytes_num, syDmaFillVpk0Buf, ram_dst);
}

void syDmaReadVpk0(u32 dev_addr, void *ram_dst)
{
    u8 buf[0x400];

    syDmaReadVpk0Buf(dev_addr, ram_dst, &buf, ARRAY_COUNT(buf));
}

// Best I can do with this is functionally equivalent. Somewhat disappointing, but not a big deal; this function is unreferenced. It's also non matching in snap.
#pragma GLOBAL_ASM("asm/nonmatchings/sys/dma/unref_800036B4.s")
