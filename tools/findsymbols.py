#!/usr/bin/python3
import sys
import re
import os

def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]


if len(sys.argv) < 2:
	print("Usage: findsymbols PATH_TO_FOLDER_WITH_ASSEMBLY_FILES")
	sys.exit(1)

symbolLo = {}
symbolHi = {}
solvedSymbols = {}

assemblyFiles = [x for x in filesInFolderRec(sys.argv[1]) if x.endswith('.s')]

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
					print(f"{symbolName} = 0x{solvedSymbols[symbolName]};")
			else:
				symbolHi[symbolName] = value
				if symbolName in symbolLo.keys():
					solvedSymbols[symbolName] = symbolHi[symbolName] + symbolLo[symbolName]
					print(f"{symbolName} = 0x{solvedSymbols[symbolName]};")
