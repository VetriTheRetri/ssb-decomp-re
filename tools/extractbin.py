#!/usr/bin/python3
import sys

inBinaryPath = sys.argv[1]
inBegin = eval(sys.argv[2])
inEnd = eval(sys.argv[3])

with open(inBinaryPath, 'rb') as inBinary:
	inBinary.seek(inBegin)
	with open("out.bin", 'wb') as outBinary:
		INSTR_SIZE = 4
		while (binChunk := inBinary.read(INSTR_SIZE)):
			outBinary.write(binChunk)
			if inBinary.tell() == inEnd:
				break