#!/usr/bin/python3

import os
import re
import sys
import charset_normalizer 


def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]


def encodingFix(fileList):
	for filePath in fileList:
		results = charset_normalizer.from_path(filePath)
		if results.best().encoding not in ["utf_8", "ascii"]:
			print(f"{filePath} was in {results.best().encoding}, updating to utf-8")
			with open(filePath, 'w', encoding="utf-8") as file:
				file.write(f"{results.best()}")


def styleFixes(fileList, ramLocation=True, indentation=True, voidForNoArguments=True, trailingSpaces=True, oneLineBlocksWithBraces=False, newLineBeforeEof=True, arrayEmptyComment=True, tabSize=4):
	for filePath in fileList:
		with open(filePath, 'r') as sourceFile:
			source = sourceFile.read()
		sourceLines = []
		for line in source.split('\n'):
			ramLocationMatch = re.match(r"^\s*//\s*0x([A-Fa-f0-9]{8})\s*$", line)
			voidForNoArgumentsMatch = re.match(r"^.*(\w+\(void\)).*$", line)
			arrayEmptyCommentMatch = re.match(r"^.*(\[/\* \*/\]).*$", line)
			if ramLocation and ramLocationMatch is not None:
				sourceLines.append(f"// {ramLocationMatch.group(1)}")
			elif voidForNoArguments and voidForNoArgumentsMatch is not None:
				sourceLines.append(line.replace(voidForNoArgumentsMatch.group(1), voidForNoArgumentsMatch.group(1).replace("(void)", "()")))
			elif arrayEmptyComment and arrayEmptyCommentMatch is not None:
				sourceLines.append(line.replace(arrayEmptyCommentMatch.group(1), arrayEmptyCommentMatch.group(1).replace("[/* */]", "[]")))
			else:
				sourceLines.append(line)

			if trailingSpaces:
				sourceLines[-1] = sourceLines[-1].rstrip("\t ")
			if indentation:
				if re.match(r"^\s*\\\s*$", sourceLines[-1]):
					sourceLines = sourceLines[:-1]
				else:
					indent = 0
					while sourceLines[-1].startswith(" "*tabSize):
						sourceLines[-1] = sourceLines[-1][tabSize:]
						indent += 1
					sourceLines[-1] = '\t'*indent + sourceLines[-1]

		with open(filePath, 'w') as sourceFile:
			sourceFile.write("\n".join(sourceLines))

	if oneLineBlocksWithBraces:
		for filePath in fileList:
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

	if newLineBeforeEof:
		for filePath in fileList:
			with open(filePath, 'r') as sourceFile:
				source = sourceFile.read()
			if source[-1] != '\n':
				source += '\n'
			with open(filePath, 'w') as sourceFile:
				sourceFile.write(source)


def includeFixes(includeFileList, srcFileList, folderName):
	allFiles = []
	allFiles.extend(includeFileList)
	allFiles.extend(srcFileList)
	prFileNames = [os.path.basename(x) for x in allFiles if f"/{folderName}/" in x]
	for filePath in allFiles:
		with open(filePath, 'r') as sourceFile:
			source = sourceFile.read()
		sourceLines = []
		for line in source.split('\n'):
			m = re.match(f"^#include.*(<|\")({folderName}/)?({'|'.join(prFileNames)})(>|\").*$", line)
			if m is not None:
				currentFileNameWithoutExt = os.path.basename(os.path.splitext(filePath)[0])
				# if currentFileNameWithoutExt in line:
				if re.match(f"^#include.*(<|\")({folderName}/)?({currentFileNameWithoutExt}.h)(>|\").*$", line) is not None:
					print(f'"{currentFileNameWithoutExt}" matches "{line}", using quotes')
					sourceLines.append(f'#include "{m.group(3)}"')
				else:
					sourceLines.append(f'#include <{folderName}/{m.group(3)}>')
			else:
				sourceLines.append(line)

		with open(filePath, 'w') as sourceFile:
			sourceFile.write("\n".join(sourceLines))


if __name__ == "__main__":
	srcFileList = filesInFolderRec("src")
	includeFileList = filesInFolderRec("include")
	if '-e' in sys.argv:
		encodingFix(srcFileList)
		encodingFix(includeFileList)
	if '-s' in sys.argv:
		styleFixes(srcFileList, ramLocation=True, indentation=True, voidForNoArguments=True, trailingSpaces=False, oneLineBlocksWithBraces=False, newLineBeforeEof=False, arrayEmptyComment=True, tabSize=4)
		styleFixes(includeFileList, ramLocation=True, indentation=True, voidForNoArguments=True, trailingSpaces=False, oneLineBlocksWithBraces=False, newLineBeforeEof=False, arrayEmptyComment=True, tabSize=4)
	if '-i' in sys.argv:
		includeFixes(includeFileList, srcFileList, 'PR')
		includeFixes(includeFileList, srcFileList, 'sys')
		includeFixes(includeFileList, srcFileList, 'ovl0')
		includeFixes(includeFileList, srcFileList, 'n_audio')