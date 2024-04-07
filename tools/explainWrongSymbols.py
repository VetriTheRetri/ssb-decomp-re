import sys
import binascii


if __name__ == "__main__":
	if len(sys.argv) != 5:
		print("Usage:")
		print("    explainWrongSymbols <romPath> <builtRomPath> <assemblyFilePath> <instructionOffsets>")
		print("")
		print("<instructionOffsets> is a semicolon separated list of hex values, examples:")
		print("         0xdead;0xbeef")
		print("         dead;beef")
		sys.exit(1)

	romPath = sys.argv[1]
	builtRomPath = sys.argv[2]
	assemblyFilePath = sys.argv[3]
	instructionOffsets = sys.argv[4]

	with open(romPath, 'rb') as romFile, open(builtRomPath, 'rb') as builtRomFile, open(assemblyFilePath, "r") as assemblyFile:

		assemblyLines = assemblyFile.read().split('\n')

		for instructionOffset in instructionOffsets.split(";"):
			curOffset = instructionOffset[2:] if instructionOffset.startswith("0x") else instructionOffset
			curOffset = curOffset.upper()
			linesWithOffset = [x for x in assemblyLines if f" {curOffset} " in x]
			if len(linesWithOffset) == 0:
				print(f"offset {curOffset} not found")
				continue
			lineWithInstr = linesWithOffset[0]
			print(lineWithInstr, end='')
			print(" "*(100 - len(lineWithInstr)), end='')
			romFile.seek(eval(f"0x{curOffset}"))
			builtRomFile.seek(eval(f"0x{curOffset}"))
			realInstr = romFile.read(4)
			producedInstr = builtRomFile.read(4)
			diff = int.from_bytes(producedInstr, byteorder='big') - int.from_bytes(realInstr, byteorder='big')
			print(f"{binascii.hexlify(realInstr)}   {binascii.hexlify(producedInstr)}   diff: {hex(diff)}", end='')
			i = assemblyLines.index(lineWithInstr)
			while not assemblyLines[i].startswith("glabel"): i -= 1
			print(f"{' '*(10-len(hex(diff)))}{assemblyLines[i]}")