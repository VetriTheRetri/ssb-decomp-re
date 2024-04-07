#!/usr/bin/python3

import os
import sys

def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]

if __name__ == "__main__":
	if len(sys.argv) != 3:
		print("Usage:")
		print("    renameSymbol <oldSymbolName> <newSymbolName>")
		sys.exit(1)

	fileList = filesInFolderRec('symbols')
	fileList.extend(filesInFolderRec('include'))
	fileList.extend(filesInFolderRec('src'))
	for filePath in fileList:
		with open(filePath, 'r') as file:
			source = file.read()
		with open(filePath, 'w') as file:
			file.write(source.replace(sys.argv[1], sys.argv[2]))