#!/usr/bin/python3

import os
import re
import sys
import charset_normalizer 

def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]

def encodingFix():
	fileList = filesInFolderRec("src")
	fileList.extend(filesInFolderRec("include"))
	for filePath in fileList:
		results = charset_normalizer.from_path(filePath)
		if results.best().encoding not in ["utf_8", "ascii"]:
			print(f"{filePath} was in {results.best().encoding}, updating to utf-8")
			with open(filePath, 'w', encoding="utf-8") as file:
				file.write(f"{results.best()}")

def styleFixes():
	# ram location
	for filePath in filesInFolderRec("src"):
		with open(filePath, 'r') as sourceFile:
			source = sourceFile.read()
		sourceLines = []
		for line in source.split('\n'):
			m = re.match(r"^\s*//\s*0x([A-Fa-f0-9]{8})\s*$", line)
			if m is None:
				sourceLines.append(line.replace("(void)", "()"))
			else:
				sourceLines.append(f"// {m.group(1)}")
		with open(filePath, 'w') as sourceFile:
			sourceFile.write("\n".join(sourceLines))

	# one line ifs with braces
	for filePath in filesInFolderRec("src"):
		with open(filePath, 'r') as sourceFile:
			sourceLines = sourceFile.read().split('\n')

		linesToDelete = []
		for i in range(len(sourceLines) - 3):
			if "if (" in sourceLines[i] or "for (" in sourceLines[i] or "while (" in sourceLines[i] or sourceLines[i].replace('\t', '').replace(' ', '') == "else":
				if sourceLines[i + 1].replace('\t', '').replace(' ', '') == '{' and sourceLines[i + 3].replace('\t', '').replace(' ', '') == '}' and sourceLines[i + 2].count(';') == 1:
					linesToDelete.extend([i + 1, i + 3])
		for i in range(len(linesToDelete)):
			print(f"deleting line in {filePath}")
			sourceLines.pop(linesToDelete[len(linesToDelete) - i - 1])

		with open(filePath, 'w') as sourceFile:
			sourceFile.write("\n".join(sourceLines))

if __name__ == "__main__":
	if '-e' in sys.argv:
		encodingFix()
	if '-s' in sys.argv:
		styleFixes()