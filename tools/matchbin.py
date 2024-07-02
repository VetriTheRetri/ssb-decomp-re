#!/usr/bin/python3
import os
import re
import sys
import binascii
import rabbitizer
import disasm

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

def findSequence(binFilePath, byteSequence, onlyInstrAndRegisters = True):
	print(f"byte sequence length: {hex(len(byteSequence))}")
	if not onlyInstrAndRegisters:
		print("finding exact match")
	with open(binFilePath, 'rb') as binFile:
		binFile.seek(0, 2)
		binFileSize = binFile.tell()
		binFile.seek(0)
		while True:
			matched = True
			curBinOffset = binFile.tell()
			# print(f"current offset: {hex(curBinOffset)}")
			for i in range(len(byteSequence) // INSTR_SIZE):
				binInstr = binFile.read(INSTR_SIZE)
				sequenceInstr = byteSequence[i * INSTR_SIZE:i * INSTR_SIZE + INSTR_SIZE]
				if instructionsDiffer(sequenceInstr, binInstr, onlyInstrAndRegisters):
					binFile.seek(-i * INSTR_SIZE, 1)
					matched = False
					break
				# print("matched instr")
			if matched:
				return curBinOffset
			if curBinOffset == binFileSize:
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




def match(subBinFilePath, binFilePath, subBinStartOffset = 0x0, onlyInstrAndRegisters = True, printPercentageOnly = False):
	curBinOffset = 0x0
	matchedInstructions = 0
	differentRanges = []

	subBinFileSize = 0
	binFileSize = 0
	with open(subBinFilePath, 'rb') as subBinFile:
		subBinFile.seek(0, 2)
		subBinFileSize = subBinFile.tell() - subBinStartOffset
		subBinFile.seek(subBinStartOffset)
		with open(binFilePath, 'rb') as binFile:
			binFile.seek(0, 2)
			binFileSize = binFile.tell()
			binFile.seek(0)
			if binFileSize < subBinFileSize:
				binFile, subBinFile = subBinFile, binFile
				binFileSize, subBinFileSize = subBinFileSize, binFileSize

			while (binChunk := binFile.read(INSTR_SIZE)):
				while (subBinChunk := subBinFile.read(INSTR_SIZE)):
					if instructionsDiffer(binChunk, subBinChunk, onlyInstrAndRegisters):
						if len(differentRanges) > 0 and differentRanges[-1][1] == hex(curBinOffset - INSTR_SIZE):
							differentRanges[-1] = (differentRanges[-1][0], hex(curBinOffset))
						else:
							differentRanges.append((hex(curBinOffset), hex(curBinOffset)))
					else:
						matchedInstructions += 1
					binChunk = binFile.read(INSTR_SIZE)
					curBinOffset += INSTR_SIZE
				curBinOffset += INSTR_SIZE

	if printPercentageOnly:
		print(f"{(100.0*matchedInstructions/(binFileSize//INSTR_SIZE)):.2f}%")
		return

	print(f"   binary instruction count:     {binFileSize//INSTR_SIZE}")
	print(f"   sub-binary instruction count: {subBinFileSize//INSTR_SIZE}")
	print(f"   matched {matchedInstructions} instructions out of {binFileSize//INSTR_SIZE} ({(100.0*matchedInstructions/(binFileSize//INSTR_SIZE)):.2f}%)")
	if len(differentRanges) > 0:
		print(f"   differences:")
		for d in differentRanges:
			if d[0] == d[1]:
				print(f"     {d[0][2:]}")
			else:
				print(f"     {d[0][2:]} - {d[1][2:]}")


if __name__ == "__main__":
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

	subBinFilePath = sys.argv[1]
	binFilePath = sys.argv[2]

	match(subBinFilePath, binFilePath, 0x0 if len(sys.argv) == 3 else eval(sys.argv[3]), not exactMatch, printPercentageOnly)
