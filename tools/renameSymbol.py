#!/usr/bin/python3

import os
import sys

def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]

def renameSymbol(oldSymbolName, newSymbolName, baseDir='./', force=False):
	fileList = filesInFolderRec(f'{baseDir}symbols')
	fileList.extend(filesInFolderRec(f'{baseDir}include'))
	fileList.extend(filesInFolderRec(f'{baseDir}src'))
	if not force:
		for filePath in fileList:
			with open(filePath, 'r') as file:
				source = file.read()
			if newSymbolName in source:
				print(f"Not renaming {oldSymbolName} to prevent symbol collision ({newSymbolName} already exists in the codebase)")
				return False
	for filePath in fileList:
		with open(filePath, 'r') as file:
			source = file.read()
		with open(filePath, 'w') as file:
			file.write(source.replace(oldSymbolName, newSymbolName))
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