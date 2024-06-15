#!/usr/bin/python3

import os
import re
import sys

def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]

def renameSymbol(oldSymbolName, newSymbolName, baseDir='./', force=False):
	fileList = filesInFolderRec(f'{baseDir}symbols')
	fileList.extend(filesInFolderRec(f'{baseDir}include'))
	fileList.extend(filesInFolderRec(f'{baseDir}src'))
	if not force:
		for filePath in fileList:
			with open(filePath, 'r') as sourceFile:
				source = sourceFile.read()
			sourceLines = []
			for line in source.split('\n'):
				if newSymbolName in [line[x.start():x.end()] for x in re.finditer(r"\w+", line)]:
					print(f"Not renaming {oldSymbolName} to prevent symbol collision ({newSymbolName} already exists in the codebase)")
					return False

	print(f"Renaming {oldSymbolName} to {newSymbolName}")
	for filePath in fileList:
		with open(filePath, 'r') as sourceFile:
			source = sourceFile.read()
		sourceLines = []
		for line in source.split('\n'):
			wordMatches = [(x.start(), x.end()) for x in re.finditer(r"\w+", line)]
			for wm in reversed(wordMatches):
				wms = wm[0]
				wme = wm[1]
				wmv = line[wms:wme]
				if wmv == oldSymbolName:
					line = line[:wms] + newSymbolName + line[wme:]
			sourceLines.append(line)

		with open(filePath, 'w') as sourceFile:
			sourceFile.write("\n".join(sourceLines))
	return True


if __name__ == "__main__":
	if len(sys.argv) < 2:
		print("Usage:")
		print("    renameSymbol <oldSymbolName> <newSymbolName> [--force]")
		print('    renameSymbol "<oldSymbolNameA>=<newSymbolNameA>;<oldSymbolNameB>=<newSymbolNameB>;..." [--force]')
		sys.exit(1)
	force = "--force" in sys.argv
	if force:
		sys.argv.remove("--force")
	if '=' in sys.argv[1]:
		for replacement in sys.argv[1].split(';'):
			oldSymbolName, newSymbolName = replacement.split('=')
			renameSymbol(oldSymbolName, newSymbolName, './', force)
	else:
		renameSymbol(sys.argv[1], sys.argv[2], './', force)