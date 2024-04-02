#!/usr/bin/python3
import re
import sys
import struct
import rabbitizer

patternReg = r"\$\w+"

ENDIANNESS = 'big'
MIPS_TO_STRING_MODE_DEFAULT = 0
MIPS_TO_STRING_MODE_INSTR_ONLY = 1
MIPS_TO_STRING_MODE_INSTR_AND_REGISTERS = 2
def mipsToString(instr, mode=MIPS_TO_STRING_MODE_DEFAULT):
	rabinstr = rabbitizer.Instruction(instr)
	rabinstrstr = f"{rabinstr}"
	if mode == MIPS_TO_STRING_MODE_DEFAULT:
		return rabinstrstr
	elif mode == MIPS_TO_STRING_MODE_INSTR_ONLY:
		return rabinstrstr[:rabinstrstr.find(' ') if ' ' in rabinstrstr else len(rabinstrstr)]
	else:
		instrName = rabinstrstr[:rabinstrstr.find(' ') if ' ' in rabinstrstr else len(rabinstrstr)]
		regString = " ".join(re.findall(patternReg, rabinstrstr))
		return f"{instrName} {regString}"


def mipsToStringFromHexString(word, nameOnly=False):
	return mipsToString(eval(f"0x{word}"), MIPS_TO_STRING_MODE_INSTR_ONLY if nameOnly else MIPS_TO_STRING_MODE_DEFAULT)

def floatFromHexString(word):
	return struct.unpack('>f', eval(f"0x{word}").to_bytes(4, ENDIANNESS))[0]

def addInstrToHexDump(inFilePath):
	with open(inFilePath, 'r') as inFile:
		for line in inFile.readlines():
			m = re.match(r'\w+: (\w{4} \w{4}) (\w{4} \w{4}) (\w{4} \w{4}) (\w{4} \w{4})', line)
			if m is None:
				continue
			a = mipsToStringFromHexString(m.group(1).replace(' ', ''), True)
			b = mipsToStringFromHexString(m.group(2).replace(' ', ''), True)
			c = mipsToStringFromHexString(m.group(3).replace(' ', ''), True)
			d = mipsToStringFromHexString(m.group(4).replace(' ', ''), True)
			print(line[:-1] + f'  {a}{" "*(8-len(a))}{b}{" "*(8-len(b))}{c}{" "*(8-len(c))}{d}')

def addFloatToHexDump(inFilePath):
	with open(inFilePath, 'r') as inFile:
		for line in inFile.readlines():
			m = re.match(r'\w+: (\w{4} \w{4}) (\w{4} \w{4}) (\w{4} \w{4}) (\w{4} \w{4})', line)
			if m is None:
				continue
			a = f"{floatFromHexString(m.group(1).replace(' ', '')):.2f}"
			b = f"{floatFromHexString(m.group(2).replace(' ', '')):.2f}"
			c = f"{floatFromHexString(m.group(3).replace(' ', '')):.2f}"
			d = f"{floatFromHexString(m.group(4).replace(' ', '')):.2f}"
			print(line[:-1] + f'  {a}{" "*(8-len(a))}{b}{" "*(8-len(b))}{c}{" "*(8-len(c))}{d}')


def disassemble(inFilePath):
	with open(inFilePath, "rb") as f:
		currentLocation = 0x0
		while (word := f.read(4)):
			print(f"/* {hex(currentLocation)} */ {rabbitizer.Instruction(int.from_bytes(word, byteorder=ENDIANNESS))}")
			currentLocation += 4

if __name__ == "__main__":
	if len(sys.argv) < 3:
		print("Usage")
		print("  mips to hex dump:          disasm -h disasm HEX_DUMP_FILE.txt")
		print("  floats to hex dump:        disasm -fh disasm HEX_DUMP_FILE.txt")
		print("  from binary:               disasm -b disasm BINARY_FILE")
		sys.exit(1)
	if "-fh" in sys.argv:
		addFloatToHexDump(sys.argv[2])
	elif "-h" in sys.argv:
		addInstrToHexDump(sys.argv[2])
	else:
		disassemble(sys.argv[2])
