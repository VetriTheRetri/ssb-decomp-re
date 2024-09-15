#!/usr/bin/python3
import sys
import parser


def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]


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
		print(f"{block['name'] + ' '*((maxNameLength)-len(block['name']))} {block['type'] + ' '*((maxTypeLength)-len(block['type']))} block: {block['begin']:#0{HEX_PADDING}x} -> {block['end']:#0{HEX_PADDING}x}  ({block['end'] - block['begin']} bytes)")

	# stats
	cByteCount = sum([x['end'] - x['begin'] for x in codeBlocks if x['type'] == 'c'])
	asmByteCount = sum([x['end'] - x['begin'] for x in codeBlocks if x['type'] == 'asm'])
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
