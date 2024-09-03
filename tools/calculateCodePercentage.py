#!/usr/bin/python3
import os
import re
import sys
import yaml


def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]

def calculateCodePercentage(includeLibultra = False):

	splatYamlFilePath = os.path.join(os.path.dirname(os.path.abspath(__file__)), "../", "smashbrothers.yaml")
	nonmatchingsPath = os.path.join(os.path.dirname(os.path.abspath(__file__)), "../", "asm", "nonmatchings")

	with open(splatYamlFilePath, 'r') as file:
		yamlObj = yaml.load(file.read(), Loader=yaml.SafeLoader)

	HEX_PADDING = 8
	NAME_PADDING = 32

	cBlocks = []
	asmBlocks = []
	for seg in yamlObj['segments']:
		if isinstance(seg, dict) and seg['type'] == 'code':
			prevWasAsm = False
			prevWasC = False
			prevStart = 0
			prevName = None
			for subseg in seg['subsegments']:
				if not includeLibultra and isinstance(subseg, list) and len(subseg) > 2 and "libultra" in subseg[2]:
					continue
				if isinstance(subseg, dict) and 'start' not in subseg.keys():
					continue
				start = subseg[0] if isinstance(subseg, list) else subseg['start']

				if prevWasC:
					cBlocks.append((prevStart, start))
					print(f"{prevName + ' '*(NAME_PADDING-len(prevName))}   c block: {prevStart:#0{HEX_PADDING}x} -> {start:#0{HEX_PADDING}x}  ({start - prevStart} bytes)")
				if prevWasAsm:
					asmBlocks.append((prevStart, start))
					print(f"{prevName + ' '*(NAME_PADDING-len(prevName))} asm block: {prevStart:#0{HEX_PADDING}x} -> {start:#0{HEX_PADDING}x}  ({start - prevStart} bytes)")

				prevWasC = isinstance(subseg, list) and len(subseg) > 1  and subseg[1] == 'c'
				prevWasAsm = isinstance(subseg, list) and len(subseg) > 1 and subseg[1] == 'asm'
				prevName = subseg[2] if isinstance(subseg, list) and len(subseg) > 2 else None
				prevStart = start

	cByteCount = sum([x[1] - x[0] for x in cBlocks])
	asmByteCount = sum([x[1] - x[0] for x in asmBlocks])
	totalByteCount = cByteCount + asmByteCount

	totalGlobalAsmInstructions = 0
	globalAsmFunctionFiles = filesInFolderRec(nonmatchingsPath)
	for filePath in globalAsmFunctionFiles:
		with open(filePath, 'r') as file:
			fileContents = file.read()
			sections = fileContents.split(".section ")
			if len(sections) == 1:
				lines = fileContents.split("\n")
			else:
				lines = "\n".join([x for x in sections if x.startswith(".text")]).split("\n")
			totalGlobalAsmInstructions += sum([1 if re.match(r"^/\* \w+ \w+ \w+ \*/.*$", line) else 0 for line in lines])

	cByteCount -= 4 * totalGlobalAsmInstructions
	asmByteCount += 4 * totalGlobalAsmInstructions

	print()
	print(f"Embedded assembly bytes: {totalGlobalAsmInstructions * 4}")

	print()
	print(f"Total code bytes: {totalByteCount}")
	print(f"         C bytes: {cByteCount}")
	print(f"  Assembly bytes: {asmByteCount}")
	print(f"      Percentage: {cByteCount / totalByteCount * 100.0}% of code decompiled")

if __name__ == "__main__":
	calculateCodePercentage('l' in sys.argv)
