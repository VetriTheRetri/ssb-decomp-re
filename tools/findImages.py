# 0001   ---   0000 0004 0000 0000 0000 0020 0000 0020
# 0003   ---   0000 0004 0000 0000 0000 0010 0000 0010

import sys

imageSizes = [bytearray.fromhex("00000010"), bytearray.fromhex("00000020"), bytearray.fromhex("00000030"), bytearray.fromhex("00000040")]
romFilePath = sys.argv[1]

with open(romFilePath, 'rb') as romFile:
	currentList = []
	currentOffset = 0x0
	while (binChunk := romFile.read(4)):
		currentList.append(binChunk)
		if len(currentList) > 4:
			currentOffset += 4
			currentList = currentList[1:]

		if len(currentList) == 4:
			if currentList[1] == bytearray.fromhex("00000000") and currentList[2] in imageSizes and currentList[3] in imageSizes:
				print(f'{hex(currentOffset + (6*2) + (4*4))} - {int.from_bytes(currentList[2], byteorder="big")}x{int.from_bytes(currentList[3], byteorder="big")}')



