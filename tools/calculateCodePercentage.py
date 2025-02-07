#!/usr/bin/python3
import os
import sys
import parser
import subprocess

BUILD_FOLDER_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "../", "build")

def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]

def computeCodeBlockSize(codeBlock):
	objectFilePath = f"{BUILD_FOLDER_PATH}/{codeBlock['type'] if codeBlock['type'] != 'c' else 'src'}/{codeBlock['name']}.o"
	tempTextSectionFilePath = f"/tmp/ccp/{codeBlock['name']}"
	tempTextSectionFolderPath = os.path.dirname(os.path.abspath(tempTextSectionFilePath))
	os.makedirs(tempTextSectionFolderPath, exist_ok=True)
	subprocess.run(["mips-linux-gnu-objcopy", "-O", "binary", "--only-section=.text", objectFilePath, tempTextSectionFilePath])
	blockSize = os.path.getsize(tempTextSectionFilePath)
	os.remove(tempTextSectionFilePath)
	codeBlock['size'] = blockSize


def calculateCodePercentage(excludeLibultra = False):

	assemblyFileList = parser.getAssemblyFilePathList(True, False, False, True, True, None, "/libultra/" if excludeLibultra else None)
	print("Files considered for embedded assembly:")
	for filePath in assemblyFileList:
		print(f"  {filePath}")
	embeddedAssemblyInstructionCount = parser.instructionCountFromAssembly(assemblyFileList)

	codeBlocks = [x for x in parser.codeBlocksFromYaml(None, None, "libultra" if excludeLibultra else None) if x['type'] != "hasm"]

	# fancy printing
	HEX_PADDING = 8 # fill hex with zeroes so it looks aligned
	maxNameLength = max([len(x['name']) for x in codeBlocks])
	maxTypeLength = len('asm')
	for block in codeBlocks:
		computeCodeBlockSize(block)
		print(f"{block['name'] + ' '*((maxNameLength)-len(block['name']))} {block['type'] + ' '*((maxTypeLength)-len(block['type']))} size: {block['size']} bytes")

	cByteCount = sum([x['size'] for x in codeBlocks if x['type'] == 'c'])
	asmByteCount = sum([x['size'] for x in codeBlocks if x['type'] == 'asm'])
	totalByteCount = cByteCount + asmByteCount

	cByteCount -= 4 * embeddedAssemblyInstructionCount
	asmByteCount += 4 * embeddedAssemblyInstructionCount

	print()
	print(f"Embedded assembly bytes: {embeddedAssemblyInstructionCount * 4}")

	print()
	print(f"Total code bytes: {totalByteCount}")
	print(f"         C bytes: {cByteCount}")
	print(f"  Assembly bytes: {asmByteCount}")
	print(f"      Percentage: {cByteCount / totalByteCount * 100.0}% of code decompiled")


if __name__ == "__main__":
	if "--help" in sys.argv:
		print("Usage: calculateCodePercentage [--exclude-libultra]")
		sys.exit(1)
	calculateCodePercentage('--exclude-libultra' in sys.argv)
