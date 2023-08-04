# Super Smash Bros. Header

# CIC-NUS-6103 offsets the address of the entry function
.set CIC_ENTRY, entry + 0x00100000

.section .rodata

.byte  0x80, 0x37, 0x12, 0x40   # PI BSD Domain 1 register
.4byte 0x0000000F               # clock rate 
.4byte CIC_ENTRY                # entry point
.4byte 0x00001449               # release (OS2.0I ?)
.4byte 0x00000000               # CRC 1
.4byte 0x00000000               # CRC 2
.4byte 0x00000000               # unknown 
.4byte 0x00000000               # unknown
.ascii "SMASH BROTHERS      "   # ROM Name (20 bytes ASCII)
.4byte 0x00000000               # unknown
.byte  0x00, 0x00, 0x00         # unknown
.ascii "N"                      # media format (cartridge)
.ascii "AL"                     # cartridge ID
.ascii "E"                      # country code
.byte  0x00                     # version
