#!/usr/bin/python3
import sys
import re
import os

import renameSymbol

def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]


def findSymbolsFromLabels(assemblyFiles, useStdout=False):
	ASM_PATTERN = r"\n.label (\w+)\n[^\w]+[\w]+\s(\w+)"
	SYMBOL_FILE_PATTERN = r"^[^_]+_[^_]+_(\w+)"

	mapList = []
	for assemblyFilePath in assemblyFiles:
		with open(assemblyFilePath, 'r') as assemblyFile:
			content = assemblyFile.read()
			mapList.extend(re.findall(ASM_PATTERN, content))

	if useStdout:
		for x in mapList:
			if x[1] in x[0] or len(x[1]) != 8:
				continue
			print(f"{x[0]} = 0x{x[1]}")
	else:
		symbolMap = dict([(x[1], x[0]) for x in mapList if x[1] not in x[0] and len(x[1]) == 8])
		return symbolMap


def findSymbolsFromInstructions(assemblyFiles, useStdout=False):
	symbolLo = {}
	symbolHi = {}
	solvedSymbols = {}

	# FROM LOAD AND STORES
	pattern = r'^.* \w{4}(\w{4}) \*/\s+.*%(lo|hi)\((\w+)\).*$'
	for filePath in assemblyFiles:
		with open(filePath, 'r') as file:
			while line := file.readline():
				m = re.match(pattern, line)
				if m is None:
					continue
				half = m.group(2)
				value = m.group(1)
				symbolName = m.group(3)
				if symbolName in solvedSymbols.keys():
					continue
				if half == 'lo':
					symbolLo[symbolName] = value
					if symbolName in symbolHi.keys():
						solvedSymbols[symbolName] = symbolHi[symbolName] + symbolLo[symbolName]
						if useStdout:
							print(f"{symbolName} = 0x{solvedSymbols[symbolName]};")
				else:
					symbolHi[symbolName] = value
					if symbolName in symbolLo.keys():
						solvedSymbols[symbolName] = symbolHi[symbolName] + symbolLo[symbolName]
						if useStdout:
							print(f"{symbolName} = 0x{solvedSymbols[symbolName]};")

	# FROM JUMP AND LINK
	pattern = r'^.* \w\w(0\w\w\w\w\w).*jal (\w+)$'
	for filePath in assemblyFiles:
		with open(filePath, 'r') as file:
			while line := file.readline():
				m = re.match(pattern, line)
				if m is None:
					continue
				symbolName = m.group(2)
				if symbolName in solvedSymbols.keys():
					continue
				value = hex(eval(f"0x{m.group(1)} << 2") + 0x80000000)[2:]
				solvedSymbols[symbolName] = value
				if useStdout:
					print(f"{symbolName} = 0x{solvedSymbols[symbolName]};")

	if not useStdout:
		output = {}
		for k in solvedSymbols.keys():
			output[solvedSymbols[k]] = k
		return output


if __name__ == "__main__":

	if len(sys.argv) < 2:
		print("Usage: findSymbolsFromAssembly <folderWithAssembly> [--from-instructions | --from-labels]")
		sys.exit(1)

	assemblyFiles = [x for x in filesInFolderRec(sys.argv[1]) if x.endswith('.s')]

	if '--from-instructions' in sys.argv:
		findSymbolsFromInstructions(assemblyFiles, True)
	elif '--from-labels' in sys.argv:
		findSymbolsFromLabels(assemblyFiles, True)
	else:
		symbolMapA = findSymbolsFromInstructions(assemblyFiles)
		symbolMapB = findSymbolsFromLabels(assemblyFiles)
		for k in symbolMapB.keys():
			if k not in symbolMapA.keys():
				symbolMapA[k] = symbolMapB[k]
		for k in symbolMapA.keys():
			print(f"{symbolMapA[k]} = 0x{k};")
