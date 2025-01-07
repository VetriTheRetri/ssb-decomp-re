#!/usr/bin/python3
import os
import re
import sys
import binascii
import rabbitizer
import disasm
import parser

patternInstr = r"^(\w+)\s+(.+)$"
patternReg = r"\$\w+"

INSTR_SIZE = 4
LINE_SIZE = 4 * INSTR_SIZE
BYTE_ORDER = 'big'


def instructionsDiffer(bytesA, bytesB, onlyInstrAndRegisters = True):
	if onlyInstrAndRegisters:
		asmb = f"{rabbitizer.Instruction(int.from_bytes(bytesA, byteorder=BYTE_ORDER))}"
		asmsb = f"{rabbitizer.Instruction(int.from_bytes(bytesB, byteorder=BYTE_ORDER))}"
		mb = re.match(patternInstr, asmb)
		msb = re.match(patternInstr, asmsb)
		if mb is None or msb is None:
			chunksDiffer = asmb != asmsb
		elif mb.group(1) != msb.group(1):
			chunksDiffer = True
		else:
			regsb = re.findall(patternReg, mb.group(2))
			regssb = re.findall(patternReg, msb.group(2))
			chunksDiffer = len(regsb) != len(regssb) or any([regsb[i] != regssb[i] for i in range(len(regsb))])
	else:
		chunksDiffer = bytesA != bytesB

	return chunksDiffer


def findSequence(binFilePath, byteSequence, onlyInstrAndRegisters = True, blocks = None):
	with open(binFilePath, 'rb') as binFile:
		if blocks is None:
			binFile.seek(0, 2)
			binFileSize = binFile.tell()
			binFile.seek(0)
			while True:
				matched = True
				curBinOffset = binFile.tell()
				for i in range(len(byteSequence) // INSTR_SIZE):
					binInstr = binFile.read(INSTR_SIZE)
					sequenceInstr = byteSequence[i * INSTR_SIZE:i * INSTR_SIZE + INSTR_SIZE]
					if instructionsDiffer(sequenceInstr, binInstr, onlyInstrAndRegisters):
						binFile.seek(-i * INSTR_SIZE, 1)
						matched = False
						break
				if matched:
					return curBinOffset
				if curBinOffset == binFileSize:
					return -1
		else:
			for block in blocks:
				binFile.seek(block['begin'])
				while True:
					matched = True
					curBinOffset = binFile.tell()
					for i in range(len(byteSequence) // INSTR_SIZE):
						binInstr = binFile.read(INSTR_SIZE)
						sequenceInstr = byteSequence[i * INSTR_SIZE:i * INSTR_SIZE + INSTR_SIZE]
						if instructionsDiffer(sequenceInstr, binInstr, onlyInstrAndRegisters):
							binFile.seek(-i * INSTR_SIZE, 1)
							matched = False
							break
					if matched:
						return curBinOffset
					if curBinOffset == block['end']:
						break
			return -1



def searchCode(binWithSequenceFilePath, sequenceOffset, binToLookFilePath):
	with open(binWithSequenceFilePath, 'rb') as binWithSequenceFile:
		sequenceFirstLine = binWithSequenceFile.read(LINE_SIZE)
		binWithSequenceFile.seek(sequenceOffset)
		sequenceFirstTwoLines = binWithSequenceFile.read(LINE_SIZE * 2)
		binWithSequenceFile.seek(sequenceOffset)
		sequenceFirstThreeLines = binWithSequenceFile.read(LINE_SIZE * 3)
		
		lineIndex = findSequence(binToLookFilePath, sequenceFirstThreeLines)
		if lineIndex > -1:
			print(f"   Matched three lines at: {hex(lineIndex)}")
			return
		lineIndex = findSequence(binToLookFilePath, sequenceFirstTwoLines)
		if lineIndex > -1:
			print(f"   Matched two lines at: {hex(lineIndex)}")
			return
		lineIndex = findSequence(binToLookFilePath, sequenceFirstLine)
		if lineIndex > -1:
			print(f"   Matched one line  at: {hex(lineIndex)}")
			return
		print(f"   Not found")
		return


def functionAddressesFromAsmTextFile(asmTextPath):
	addresses = []
	with open(asmTextPath, 'r') as asmTextFile:
		lines = asmTextFile.read().split('\n')
		for i, line in enumerate(lines[:-1]):
			if re.match(r"^glabel \w+$", line) is not None:
				addresses.append(eval("0x" + lines[i + 1][10:18]))
	return addresses


matchPercentage = None
matchBinaryAInstructionCount = None
matchBinaryBInstructionCount = None
matchDifferentRanges = None
matchInstructionsMatched = 0
def match(binAFilePath, binBFilePath, onlyInstrAndRegisters = True, printPercentageOnly = False, asmTextPath = None):
	global matchPercentage
	global matchBinaryAInstructionCount
	global matchBinaryBInstructionCount
	global matchDifferentRanges
	global matchInstructionsMatched

	functionAddresses = functionAddressesFromAsmTextFile(asmTextPath) if asmTextPath is not None else None

	curBinOffset = 0x0
	matchInstructionsMatched = 0
	matchDifferentRanges = []

	binAFileSize = 0
	binBFileSize = 0
	with open(binAFilePath, 'rb') as binAFile:
		binAFile.seek(0, 2)
		binAFileSize = binAFile.tell()
		binAFile.seek(0)
		with open(binBFilePath, 'rb') as binBFile:
			binBFile.seek(0, 2)
			binBFileSize = binBFile.tell()
			binBFile.seek(0)
			if binBFileSize < binAFileSize:
				binBFile, binAFile = binAFile, binBFile
				binBFileSize, binAFileSize = binAFileSize, binBFileSize

			while (binChunk := binBFile.read(INSTR_SIZE)):
				while (subBinChunk := binAFile.read(INSTR_SIZE)):
					if functionAddresses is not None and (functionAddresses[0] + curBinOffset) in functionAddresses:
						print(f"----- {hex(functionAddresses[0] + curBinOffset)}")
					if instructionsDiffer(binChunk, subBinChunk, onlyInstrAndRegisters):
						if len(matchDifferentRanges) > 0 and matchDifferentRanges[-1][1] == (curBinOffset - INSTR_SIZE):
							matchDifferentRanges[-1] = (matchDifferentRanges[-1][0], (curBinOffset))
						else:
							matchDifferentRanges.append((curBinOffset, curBinOffset))
					else:
						matchInstructionsMatched += 1
					binChunk = binBFile.read(INSTR_SIZE)
					curBinOffset += INSTR_SIZE
				curBinOffset += INSTR_SIZE


	matchBinaryAInstructionCount = binAFileSize // INSTR_SIZE
	matchBinaryBInstructionCount = binBFileSize // INSTR_SIZE
	matchPercentage = 100.0 * (matchInstructionsMatched / matchBinaryBInstructionCount)


if __name__ == "__main__":
	try:
		asmTextPathArgIndex = ["asmTextPath" in x for x in sys.argv].index(True)
	except:
		asmTextPathArgIndex = -1
	asmTextPath = sys.argv[asmTextPathArgIndex].split('=')[1] if asmTextPathArgIndex > -1 else None
	if asmTextPath is not None:
		sys.argv.remove(sys.argv[asmTextPathArgIndex])

	exactMatch = '-x' in sys.argv
	printPercentageOnly = '-p' in sys.argv
	if exactMatch:
		sys.argv.remove('-x')
	if printPercentageOnly:
		sys.argv.remove('-p')
	if sys.argv[1] == '-f':
		print(hex(findSequence(sys.argv[2], bytes.fromhex(''.join([x for x in sys.argv[3:]])), not exactMatch)))
		sys.exit()
	if sys.argv[1] == '-s':
		searchCode(sys.argv[2], eval(sys.argv[3]), sys.argv[4])
		sys.exit()

	binAFilePath = sys.argv[1]
	binBFilePath = sys.argv[2]

	match(binAFilePath, binBFilePath, not exactMatch, printPercentageOnly, asmTextPath)

	if printPercentageOnly:
		print(f"{matchPercentage:.2f}%")
	else:
		print(f"   binary A word count: {matchBinaryAInstructionCount}")
		print(f"   binary B word count: {matchBinaryBInstructionCount}")
		print(f"   matched {matchInstructionsMatched} instructions out of {matchBinaryBInstructionCount} ({matchPercentage:.2f}%)")
		print("")
		if len(matchDifferentRanges) > 0:
			HEX_PADDING = 8 # fill hex with zeroes so it looks aligned
			print(f"{matchBinaryBInstructionCount - matchInstructionsMatched} words differ:")
			with open(binAFilePath, 'rb') as binAFile, open(binBFilePath, 'rb') as binBFile:
				for d in matchDifferentRanges:
					for i in range((d[1] - d[0] + INSTR_SIZE) // INSTR_SIZE):
						currentOffset = d[0] + i * INSTR_SIZE
						segment = parser.findSegmentForRomLocation(currentOffset)
						if segment['name'] is None:
							segment['name'] = "unknown"
						binAFile.seek(currentOffset, 0)
						binBFile.seek(currentOffset, 0)
						wordA = binAFile.read(INSTR_SIZE)
						wordB = binBFile.read(INSTR_SIZE)
						if segment['type'] is None or "data" in segment['type']:
							diffText = f"\033[91m{wordB.hex()} -- {wordA.hex()}\033[0m"
						else:
							asmA = f"{rabbitizer.Instruction(int.from_bytes(wordA, byteorder=BYTE_ORDER))}"
							asmB = f"{rabbitizer.Instruction(int.from_bytes(wordB, byteorder=BYTE_ORDER))}"
							diffText = f"\033[91m{asmB} {' '*(50-len(asmB))} -- {asmA}\033[0m"
						print(f"--- {segment['type']} {segment['name']} {currentOffset:#0{HEX_PADDING}x} {' '*(50-len(segment['name']))}   |   {diffText}")
						