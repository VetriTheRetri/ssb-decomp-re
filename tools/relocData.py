#!/usr/bin/python3
import os
import re
import sys
import json
import subprocess

FILE_COUNT = 2132
COMPRESSED_FILE_COUNT = 499
ENDIANNESS = "big"
EXTRACTED_FILES_PATH = "assets/relocData"
VPK0_EXCESS_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "vpk0_excess_bytes.txt")
ROM_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "../", "baserom.us.z64")
RELOC_EXTRACTOR_BIN_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "ssbfile")
VPK0_BIN_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "vpk0cmd")


def extractSsbfile():
	os.chdir(EXTRACTED_FILES_PATH)
	processes = []
	for i in range(2132):
		processes.append(subprocess.Popen([RELOC_EXTRACTOR_BIN_PATH, f'{i}', '--mode', 'decompress', '--rom', ROM_PATH], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL))
	for i in range(2132):
		processes[i].wait()

def extract():
	RELOC_DATA_FILE_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "../", "assets/relocData.bin")
	RELOC_TABLE_SIZE = 0x63FC # in bytes
	RELOC_TABLE_ENTRY_SIZE = 12 # in bytes

	# read table
	relocTable = []
	with open(RELOC_DATA_FILE_PATH, 'rb') as romFile:
		while romFile.tell() < RELOC_TABLE_SIZE:
			firstWord = int.from_bytes(romFile.read(4), ENDIANNESS)
			isVpk0 = True if firstWord & 0x80000000 == 0x80000000 else False
			dataOffset = firstWord & ~0x80000000
			relocInternOffset = int.from_bytes(romFile.read(2), ENDIANNESS)
			compressedSize = int.from_bytes(romFile.read(2), ENDIANNESS)
			relocExternOffset = int.from_bytes(romFile.read(2), ENDIANNESS)
			decompressedSize = int.from_bytes(romFile.read(2), ENDIANNESS)
			relocTable.append({"isVpk0": isVpk0, "dataOffset": dataOffset, "relocInternOffset": relocInternOffset, "compressedSize": compressedSize, "relocExternOffset": relocExternOffset, "decompressedSize": decompressedSize})

	# write table as csv
	with open(f"{EXTRACTED_FILES_PATH}.csv", 'w') as outTableFile:
		outTableFile.write("isVpk0, dataOffset, relocInternOffset, compressedSize, relocExternOffset, decompressedSize\n")
		for entry in relocTable:
			row = ["1" if entry['isVpk0'] else "0", f"{entry['dataOffset']:#0{8}x}", f"{entry['relocInternOffset']:#0{6}x}", f"{entry['compressedSize']:#0{6}x}", f"{entry['relocExternOffset']:#0{6}x}", f"{entry['decompressedSize']:#0{6}x}"]
			outTableFile.write(", ".join(row) + "\n")

	# write reloc files
	os.makedirs(EXTRACTED_FILES_PATH, exist_ok=True)
	with open(RELOC_DATA_FILE_PATH, 'rb') as romFile:
		for i, entry in enumerate(relocTable[:-1]):

			romFile.seek(RELOC_TABLE_SIZE + entry['dataOffset'])
			bytesToRead = relocTable[i + 1]['dataOffset'] - entry['dataOffset']
			fileBytes = romFile.read(bytesToRead)

			targetFilePath = f"{EXTRACTED_FILES_PATH}/{i}.bin"
			if entry['isVpk0']:
				with open(targetFilePath[:-3] + "vpk0", 'wb') as targetFile:
					targetFile.write(fileBytes)
				subprocess.run([VPK0_BIN_PATH, 'd', targetFilePath[:-3] + "vpk0", targetFilePath[:-3] + "vpk0.bin"], check=True)
			else:
				with open(targetFilePath, 'wb') as targetFile:
					targetFile.write(fileBytes)

def compressFile(inputBinaryPath, outputVpk0Path):
	subprocess.run([VPK0_BIN_PATH, 'c', inputBinaryPath, outputVpk0Path])
	targetFileNameNoExt = os.path.basename(outputVpk0Path).split('.')[0]
	targetVpk0Excess = None
	foundExcess = False

	with open(VPK0_EXCESS_PATH, 'r') as vpk0ExcessFile:
		for line in vpk0ExcessFile.read().split('\n'):
			fileNameNoExt, targetVpk0Excess = line.split(' - ')
			if fileNameNoExt == targetFileNameNoExt:
				targetVpk0Excess = bytearray.fromhex(targetVpk0Excess)
				foundExcess = True
				break

	if foundExcess:
		with open(outputVpk0Path, 'ab') as outputFile:
			outputFile.write(targetVpk0Excess)

def makeBin():

	with open(f"{EXTRACTED_FILES_PATH}.csv", 'r') as tableFile:
		csvLines = tableFile.read().split('\n')
	relocTable = []
	isFirstLine = True
	for line in csvLines:
		if len(line) == 0 or isFirstLine:
			isFirstLine = False
			continue
		row = line.split(', ')
		relocTable.append({"isVpk0": row[0] != '0', "dataOffset": eval(row[1]), "relocInternOffset": eval(row[2]), "compressedSize": eval(row[3]), "relocExternOffset": eval(row[4]), "decompressedSize": eval(row[5])})
		# relocTable = json.loads(tableFile.read())

	with open(f"{EXTRACTED_FILES_PATH}.bin", 'wb') as targetFile:
		# write table
		for item in relocTable:
			firstWord = item["dataOffset"]
			if item["isVpk0"]:
				firstWord |= 0x80000000
			targetFile.write(firstWord.to_bytes(4, ENDIANNESS))
			targetFile.write(item["relocInternOffset"].to_bytes(2, ENDIANNESS))
			targetFile.write(item["compressedSize"].to_bytes(2, ENDIANNESS))
			targetFile.write(item["relocExternOffset"].to_bytes(2, ENDIANNESS))
			targetFile.write(item["decompressedSize"].to_bytes(2, ENDIANNESS))

		# write files
		for i, item in enumerate(relocTable[:-1]):
			filePath = f'{EXTRACTED_FILES_PATH}/{i}.{"vpk0" if item["isVpk0"] else "bin"}'
			with open(filePath, 'rb') as relocFile:
				targetFile.write(relocFile.read())

def printExcess(fileSuffix=".manually_compressed"):
	for i in range(COMPRESSED_FILE_COUNT):
		filePath = f"{EXTRACTED_FILES_PATH}/{i}.vpk0"
		vpkManuallyCompressed = filePath + fileSuffix
		with open(vpkManuallyCompressed, 'rb') as f:
			f.seek(0, 2)
			offset = f.tell()
		with open(filePath, 'rb') as f:
			f.seek(offset, 0)
			print(f"{i} - {f.read().hex()}")


def relocateFile(inputBinaryPath, outputBinaryPath, relocInternOffset, relocExternOffset):

	with open(inputBinaryPath, 'rb') as inputFile:
		print("Internal Relocations")
		currentOffset = relocInternOffset
		while currentOffset != 0xffff:
			currentOffsetInBytes = currentOffset * 4
			inputFile.seek(currentOffsetInBytes, 0)
			currentOffset = int.from_bytes(inputFile.read(2), ENDIANNESS)
			bytesNum = int.from_bytes(inputFile.read(2), ENDIANNESS) * 4
			print(f"{hex(currentOffsetInBytes)} -> {hex(bytesNum)}")

		print("External Relocations")
		currentOffset = relocExternOffset
		while currentOffset != 0xffff:
			currentOffsetInBytes = currentOffset * 4
			inputFile.seek(currentOffsetInBytes, 0)
			currentOffset = int.from_bytes(inputFile.read(2), ENDIANNESS)
			bytesNum = int.from_bytes(inputFile.read(2), ENDIANNESS) * 4
			print(f"{hex(currentOffsetInBytes)} -> {hex(bytesNum)}")


def generateHeader(relocFileDescriptionsFilePath, outputHeaderFilePath, outputLinkerFilePath):
	with open(relocFileDescriptionsFilePath, 'r') as relocFileDescriptionsFile:
		lines = relocFileDescriptionsFile.read().split('\n')
	fileIdToNameDict = {}
	with open(outputHeaderFilePath, 'w') as outputHeaderFile, open(outputLinkerFilePath, 'w') as outputLinkerFile:

		# File ID symbols
		for line in lines:
			if len(line) == 0 or line[0] != '-':
				continue
			fileId = int(line[1:4])
			assert(fileId not in fileIdToNameDict.keys())
			fileName = line[6:]
			fileIdToNameDict[fileId] = fileName

		for fileId in range(FILE_COUNT):
			if fileId in fileIdToNameDict.keys():
				fileName = fileIdToNameDict[fileId]
				symbolName = f"ll{fileName}FileID"
			else:
				symbolName = f"ll_{fileId}_FileID"
			outputHeaderFile.write(f"extern int {symbolName}; // {fileId}\n")
			outputLinkerFile.write(f"{symbolName} = {hex(fileId)};\n")

		# File offset symbols
		for i in range(len(lines)):
			line = lines[i]
			if len(line) == 0 or line[0] == '#' or line[0] == '-':
				continue
			m = re.match(r"\[(\d+)]", line);
			if m is not None:
				currentFileId = int(m.group(1))
				currentFileName = fileIdToNameDict[currentFileId] if currentFileId in fileIdToNameDict.keys() else f"_{currentFileId}_"
				outputHeaderFile.write('\n')
				outputLinkerFile.write('\n')
				continue
			try:
				blockType, blockName, blockOffset = line.split(' ')
			except Exception as e:
				print(f"Parsing error at line: {i + 1}", file=sys.stderr)
				return False
			if blockName == '-':
				symbolName = f"ll{currentFileName}{blockType}"
			else:
				symbolName = f"ll{currentFileName}{blockName}{blockType}"
			outputHeaderFile.write(f"extern int {symbolName}; // {blockOffset}\n")
			outputLinkerFile.write(f"{symbolName} = {blockOffset};\n")
	return True


if __name__ == "__main__":
	if len(sys.argv) < 2:
		print("Usage:")
		print("Extract:         relocData extractAll")
		print("Compress:        relocData compress <binInputPath> <vpk0OutputPath>")
		print("Relocate:        relocData relocate <binInputPath> <binOutputPath> <relocInternOffset> <relocExternOffset>")
		print("Make bin:        relocData makeBin")
		print("Generate header: relocData genHeader <relocFileDescriptionsFilePath> <headerOutputPath> <linkerFileOutputPath>")
		sys.exit(1)

	if sys.argv[1] == 'extractAll':
		extract()
	elif sys.argv[1] == 'compress':
		compressFile(sys.argv[2], sys.argv[3])
	elif sys.argv[1] == 'relocate':
		relocateFile(sys.argv[2], sys.argv[3], eval(sys.argv[4]), eval(sys.argv[5]))
	elif sys.argv[1] == 'makeBin':
		makeBin()
	elif sys.argv[1] == 'genHeader':
		if not generateHeader(sys.argv[2], sys.argv[3], sys.argv[4]):
			os.remove(sys.argv[3])
			os.remove(sys.argv[4])
