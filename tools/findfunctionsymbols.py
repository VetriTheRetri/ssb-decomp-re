#!/usr/bin/python3
import sys
import re
import os

def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]


if len(sys.argv) < 2:
	print("Usage: findfunctionsymbols PATH_TO_FOLDER_WITH_ASSEMBLY_FILES")
	sys.exit(1)

solvedSymbols = {}
assemblyFiles = [x for x in filesInFolderRec(sys.argv[1]) if x.endswith('.s')]

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
			value = hex(eval(f"0x{m.group(1)} << 2"))
			print(f"{symbolName} = {value};")
			solvedSymbols[symbolName] = value