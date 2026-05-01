#!/usr/bin/python3
import os
import re
import sys
import json
import subprocess

COMPRESSED_FILE_COUNT = {"us": 499, "jp": 474}
ENDIANNESS = "big"
PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
VPK0_EXCESS_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "vpk0_excess_bytes.txt")
RELOC_EXTRACTOR_BIN_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "ssbfile")
VPK0_BIN_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "vpk0cmd")


def assetsDir(version):
	return f"assets/{version}/relocData"

def relocBinPath(version):
	return os.path.join(PROJECT_DIR, "assets", version, "relocData.bin")

def relocCsvPath(version):
	return os.path.join(PROJECT_DIR, "assets", version, "relocData.csv")

def detectVersionFromDescriptions(descPath):
	m = re.search(r'relocFileDescriptions\.(\w+)\.txt', descPath)
	if m:
		return m.group(1)
	return "us"


def extractSsbfile(relocFileDescriptionsFilePath, version="us"):
	with open(relocFileDescriptionsFilePath, 'r') as relocFileDescriptionsFile:
		lines = relocFileDescriptionsFile.read().split('\n')
	FILE_COUNT = getFileCount(lines)
	ROM_PATH = os.path.join(PROJECT_DIR, f"baserom.{version}.z64")
	os.makedirs(assetsDir(version), exist_ok=True)
	os.chdir(assetsDir(version))
	processes = []
	for i in range(FILE_COUNT):
		processes.append(subprocess.Popen([RELOC_EXTRACTOR_BIN_PATH, f'{i}', '--mode', 'decompress', '--rom', ROM_PATH], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL))
	for i in range(FILE_COUNT):
		processes[i].wait()

def extract(relocFileDescriptionsFilePath, version="us"):
	with open(relocFileDescriptionsFilePath, 'r') as relocFileDescriptionsFile:
		lines = relocFileDescriptionsFile.read().split('\n')
	FILE_COUNT = getFileCount(lines)
	RELOC_DATA_FILE_PATH = relocBinPath(version)
	extractedFilesPath = assetsDir(version)
	RELOC_TABLE_ENTRY_SIZE = 12 # in bytes
	RELOC_TABLE_SIZE = (FILE_COUNT + 1) * RELOC_TABLE_ENTRY_SIZE # in bytes

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
	with open(relocCsvPath(version), 'w') as outTableFile:
		outTableFile.write("isVpk0, dataOffset, relocInternOffset, compressedSize, relocExternOffset, decompressedSize\n")
		for entry in relocTable:
			row = ["1" if entry['isVpk0'] else "0", f"{entry['dataOffset']:#0{8}x}", f"{entry['relocInternOffset']:#0{6}x}", f"{entry['compressedSize']:#0{6}x}", f"{entry['relocExternOffset']:#0{6}x}", f"{entry['decompressedSize']:#0{6}x}"]
			outTableFile.write(", ".join(row) + "\n")

	# write reloc files
	os.makedirs(extractedFilesPath, exist_ok=True)
	with open(RELOC_DATA_FILE_PATH, 'rb') as romFile:
		for i, entry in enumerate(relocTable[:-1]):

			romFile.seek(RELOC_TABLE_SIZE + entry['dataOffset'])
			bytesToRead = relocTable[i + 1]['dataOffset'] - entry['dataOffset']
			fileBytes = romFile.read(bytesToRead)

			targetFilePath = f"{extractedFilesPath}/{i}.bin"
			if entry['isVpk0']:
				with open(targetFilePath[:-3] + "vpk0", 'wb') as targetFile:
					targetFile.write(fileBytes)
				subprocess.run([VPK0_BIN_PATH, 'd', targetFilePath[:-3] + "vpk0", targetFilePath[:-3] + "vpk0.bin"], check=True)
			else:
				with open(targetFilePath, 'wb') as targetFile:
					targetFile.write(fileBytes)

def getVpk0ExcessPath(version=None):
	"""Pick the right vpk0_excess_bytes file. If version is given we use it
	directly; otherwise sniff JP-vs-US by row count of an existing CSV under
	assets/<v>/. Falls back to the US file."""
	scriptDir = os.path.dirname(os.path.abspath(__file__))
	if version == "jp":
		jpPath = os.path.join(scriptDir, "vpk0_excess_bytes.jp.txt")
		if os.path.exists(jpPath):
			return jpPath
		return VPK0_EXCESS_PATH
	if version is None:
		# Legacy auto-detect: prefer JP CSV if its row count matches.
		jpCsv = relocCsvPath("jp")
		usCsv = relocCsvPath("us")
		csvPath = jpCsv if os.path.exists(jpCsv) else (usCsv if os.path.exists(usCsv) else None)
		if csvPath:
			with open(csvPath) as f:
				rowCount = sum(1 for _ in f) - 1
			if rowCount == 2108:
				jpPath = os.path.join(scriptDir, "vpk0_excess_bytes.jp.txt")
				if os.path.exists(jpPath):
					return jpPath
	return VPK0_EXCESS_PATH


def compressFile(inputBinaryPath, outputVpk0Path, version=None):
	subprocess.run([VPK0_BIN_PATH, 'c', inputBinaryPath, outputVpk0Path])
	targetFileNameNoExt = os.path.basename(outputVpk0Path).split('.')[0]
	targetVpk0Excess = None
	foundExcess = False

	with open(getVpk0ExcessPath(version), 'r') as vpk0ExcessFile:
		for line in vpk0ExcessFile.read().split('\n'):
			if ' - ' not in line:
				continue
			fileNameNoExt, targetVpk0Excess = line.split(' - ')
			if fileNameNoExt == targetFileNameNoExt:
				targetVpk0Excess = bytearray.fromhex(targetVpk0Excess)
				foundExcess = True
				break

	if foundExcess:
		with open(outputVpk0Path, 'ab') as outputFile:
			outputFile.write(targetVpk0Excess)

def makeBin(overrideDir=None, version="us"):

	extractedFilesPath = assetsDir(version)
	with open(relocCsvPath(version), 'r') as tableFile:
		csvLines = tableFile.read().split('\n')
	relocTable = []
	isFirstLine = True
	for line in csvLines:
		if len(line) == 0 or isFirstLine:
			isFirstLine = False
			continue
		row = line.split(', ')
		relocTable.append({"isVpk0": row[0] != '0', "dataOffset": eval(row[1]), "relocInternOffset": eval(row[2]), "compressedSize": eval(row[3]), "relocExternOffset": eval(row[4]), "decompressedSize": eval(row[5])})

	with open(relocBinPath(version), 'wb') as targetFile:
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

		# write files (prefer override dir if file exists there)
		for i, item in enumerate(relocTable[:-1]):
			ext = "vpk0" if item["isVpk0"] else "bin"
			overridePath = os.path.join(overrideDir, f"{i}.{ext}") if overrideDir else None
			if overridePath and os.path.exists(overridePath):
				filePath = overridePath
			else:
				filePath = f'{extractedFilesPath}/{i}.{ext}'
			with open(filePath, 'rb') as relocFile:
				targetFile.write(relocFile.read())

def printExcess(fileSuffix=".manually_compressed", version="us"):
	for i in range(COMPRESSED_FILE_COUNT[version]):
		filePath = f"{assetsDir(version)}/{i}.vpk0"
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

def getFileCount(relocFileDescriptionLines):
    for line in relocFileDescriptionLines:
        line = line.strip()
        if line.startswith("# FILE_COUNT:"):
            return int(line.split(":")[1].strip())

def generateFileIdToNameDict(relocFileDescriptionLines):
	fileIdToNameDict = {}
	for line in relocFileDescriptionLines:
		if len(line) == 0 or line[0] != '-':
			continue
		fileId = int(line.split(":")[0][1:])
		assert(fileId not in fileIdToNameDict.keys())
		fileName = line.split(":")[1][1:]
		fileIdToNameDict[fileId] = fileName
	return fileIdToNameDict

def generateFileIdSymbols(fileIdToNameDict, FILE_COUNT):
	symbols = []
	for fileId in range(FILE_COUNT):
		if fileId in fileIdToNameDict.keys():
			fileName = fileIdToNameDict[fileId]
			symbolName = f"ll{fileName}FileID"
		else:
			symbolName = f"ll_{fileId}_FileID"
		symbols.append((symbolName, hex(fileId)))
	return symbols

def generateFileOffsetSymbols(relocFileDescriptionLines, fileIdToNameDict):
	symbols = []
	for i in range(len(relocFileDescriptionLines)):
		line = relocFileDescriptionLines[i]
		if len(line) == 0 or line[0] == '#' or line[0] == '-':
			continue
		m = re.match(r"\[(\d+)]", line);
		if m is not None:
			currentFileId = int(m.group(1))
			currentFileName = fileIdToNameDict[currentFileId] if currentFileId in fileIdToNameDict.keys() else f"_{currentFileId}_"
			symbols.append((None, None))
			continue
		if line.count(' ') != 2:
			raise Exception(f"Parsing error at line: {i + 1}, expected two spaces")
		blockType, blockName, blockOffset = line.split(' ')
		if blockName == '-':
			symbolName = f"ll{currentFileName}{blockType}"
		else:
			symbolName = f"ll{currentFileName}{blockName}{blockType}"
		symbols.append((symbolName, blockOffset))
	return symbols

def generateHeader(relocFileDescriptionsFilePath, outputHeaderFilePath, outputLinkerFilePath):
	with open(relocFileDescriptionsFilePath, 'r') as relocFileDescriptionsFile:
		lines = relocFileDescriptionsFile.read().split('\n')
	fileIdToNameDict = generateFileIdToNameDict(lines)
	FILE_COUNT = getFileCount(lines)
	with open(outputHeaderFilePath, 'w') as outputHeaderFile, open(outputLinkerFilePath, 'w') as outputLinkerFile:

		# File count symbol
		outputHeaderFile.write(f"extern int llRelocFileCount; // {FILE_COUNT}\n\n")
		outputLinkerFile.write(f"llRelocFileCount = {FILE_COUNT};\n\n")

		# File ID symbols
		for symbolName, fileId in generateFileIdSymbols(fileIdToNameDict, FILE_COUNT):
			outputHeaderFile.write(f"extern int {symbolName}; // {fileId}\n")
			outputLinkerFile.write(f"{symbolName} = {fileId};\n")

		# File offset symbols
		for symbolName, offset in generateFileOffsetSymbols(lines, fileIdToNameDict):
			if symbolName is None:
				outputHeaderFile.write("\n")
				outputLinkerFile.write("\n")
				continue
			outputHeaderFile.write(f"extern int {symbolName}; // {offset}\n")
			outputLinkerFile.write(f"{symbolName} = {offset};\n")

def generateDefineHeader(relocFileDescriptionsFilePath, outputHeaderFilePath):
	with open(relocFileDescriptionsFilePath, 'r') as relocFileDescriptionsFile:
		lines = relocFileDescriptionsFile.read().split('\n')
	fileIdToNameDict = generateFileIdToNameDict(lines)
	FILE_COUNT = getFileCount(lines)
	with open(outputHeaderFilePath, 'w') as outputHeaderFile:

		# File count symbol
		outputHeaderFile.write(f"#define llRelocFileCount {FILE_COUNT}\n\n")

		# File ID symbols
		for symbolName, fileId in generateFileIdSymbols(fileIdToNameDict, FILE_COUNT):
			outputHeaderFile.write(f"#define {symbolName} {fileId}\n")

		# File offset symbols
		for symbolName, offset in generateFileOffsetSymbols(lines, fileIdToNameDict):
			if symbolName is None:
				outputHeaderFile.write("\n")
				continue
			outputHeaderFile.write(f"#define {symbolName} {offset}\n")

if __name__ == "__main__":
	# Strip a single optional --version <v> arg from anywhere in argv. Lets
	# every subcommand take the same flag without us hand-rolling per-cmd
	# parsing. extractAll / makeBin / compress route the version through;
	# the other subcommands are version-agnostic.
	cliVersion = None
	args = sys.argv[1:]
	if "--version" in args:
		i = args.index("--version")
		cliVersion = args[i + 1]
		del args[i:i+2]

	if len(args) < 1:
		print("Usage:")
		print("Extract:         relocData extractAll <relocFileDescriptionsFilePath> [--version <v>]")
		print("Compress:        relocData compress <binInputPath> <vpk0OutputPath> [--version <v>]")
		print("Relocate:        relocData relocate <binInputPath> <binOutputPath> <relocInternOffset> <relocExternOffset>")
		print("Make bin:        relocData makeBin [<overrideDir>] [--version <v>]")
		print("Generate header: relocData genHeader <relocFileDescriptionsFilePath> <headerOutputPath> <linkerFileOutputPath>")
		sys.exit(1)

	if args[0] == 'extractAll':
		version = cliVersion or detectVersionFromDescriptions(args[1])
		extract(args[1], version)
	elif args[0] == 'compress':
		compressFile(args[1], args[2], cliVersion)
	elif args[0] == 'relocate':
		relocateFile(args[1], args[2], eval(args[3]), eval(args[4]))
	elif args[0] == 'makeBin':
		overrideDir = args[1] if len(args) > 1 else None
		makeBin(overrideDir, cliVersion or "us")
	elif args[0] == 'genHeader':
		generateHeader(args[1], args[2], args[3])
	elif args[0] == 'genDefineHeader':
		generateDefineHeader(args[1], args[2])