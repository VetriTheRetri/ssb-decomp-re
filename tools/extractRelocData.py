#!/usr/bin/python3
import os
import sys
import subprocess

EXTRACTED_FILES_PATH = "bin/relocData"
ENDIANNESS = "big"
RELOC_DATA_FILE_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "../", "assets/relocData.bin")
VPK0_BIN_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "vpk0")
RELOC_TABLE_SIZE = 0x63FC # in bytes
RELOC_TABLE_ENTRY_SIZE = 12 # in bytes

# read table
relocTable = []
with open(RELOC_DATA_FILE_PATH, 'rb') as romFile:
	# romFile.seek(RELOC_TABLE_BEGIN)
	while romFile.tell() < RELOC_TABLE_SIZE:
		firstWord = int.from_bytes(romFile.read(4), ENDIANNESS)
		isVpk0 = True if firstWord & 0x80000000 == 0x80000000 else False
		dataOffset = firstWord & ~0x80000000
		relocInternOffset = int.from_bytes(romFile.read(2), ENDIANNESS)
		compressedSize = int.from_bytes(romFile.read(2), ENDIANNESS)
		relocExternOffset = int.from_bytes(romFile.read(2), ENDIANNESS)
		decompressedSize = int.from_bytes(romFile.read(2), ENDIANNESS)
		relocTable.append({"isVpk0": isVpk0, "dataOffset": dataOffset, "relocInternOffset": relocInternOffset, "compressedSize": compressedSize, "relocExternOffset": relocExternOffset, "decompressedSize": decompressedSize})

os.makedirs(EXTRACTED_FILES_PATH, exist_ok=True)
with open(RELOC_DATA_FILE_PATH, 'rb') as romFile:
	for i, entry in enumerate(relocTable[:-1]):

		romFile.seek(RELOC_TABLE_SIZE + entry['dataOffset'])
		bytesToRead = relocTable[i + 1]['dataOffset'] - entry['dataOffset']
		fileBytes = romFile.read(bytesToRead)

		targetFilePath = f"{EXTRACTED_FILES_PATH}/{i}.bin"
		if entry['isVpk0']:
			with open('/tmp/vpk0', 'wb') as tempFile:
				tempFile.write(fileBytes)
				try:
					subprocess.run([VPK0_BIN_PATH, 'd', '/tmp/vpk0', targetFilePath], check=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
					print(f"decompressed {i}.vpk0 successfully")
				except Exception as e:
					print(f"failed to decompress {i}.vpk0")
					with open(targetFilePath[:-3] + "vpk0", 'wb') as targetFile:
						targetFile.write(fileBytes)
		else:
			with open(targetFilePath, 'wb') as targetFile:
				targetFile.write(fileBytes)