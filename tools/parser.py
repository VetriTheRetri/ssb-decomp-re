#!/usr/bin/python3
import os
import re
import yaml

SPLAT_YAML_FILE_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "../", "smashbrothers.yaml")
ASM_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "../", "asm")


def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]
def filesInFolder(folder):
	return [os.path.join(folder, f).replace('\\', '/') for f in os.listdir(folder) if os.path.isfile(os.path.join(folder, f))]
def foldersInFolder(folder):
	return [os.path.join(folder, f).replace('\\', '/') for f in os.listdir(folder) if os.path.isdir(os.path.join(folder, f))]


def romPathFromYaml(targetYamlFilePath = None):

	targetFilePath = targetYamlFilePath if targetYamlFilePath is not None else SPLAT_YAML_FILE_PATH
	with open(targetFilePath, 'r') as file:
		yamlObj = yaml.load(file.read(), Loader=yaml.SafeLoader)
		return os.path.join(os.path.dirname(targetFilePath), yamlObj['options']['target_path'])


def codeBlocksFromYaml(filterOutString = None, targetYamlFilePath = None):

	targetFilePath = targetYamlFilePath if targetYamlFilePath is not None else SPLAT_YAML_FILE_PATH
	with open(targetFilePath, 'r') as file:
		yamlObj = yaml.load(file.read(), Loader=yaml.SafeLoader)

		blocks = []

		for seg in yamlObj['segments']:
			if isinstance(seg, dict) and seg['type'] == 'code':
				prevWasAsm = False
				prevWasC = False
				prevStart = 0
				prevName = None
				for subseg in seg['subsegments']:

					if filterOutString is not None and isinstance(subseg, list) and len(subseg) > 2 and filterOutString in subseg[2]:
						continue
					if isinstance(subseg, dict) and 'start' not in subseg.keys():
						continue

					start = subseg[0] if isinstance(subseg, list) else subseg['start']

					if prevWasC:
						blocks.append({'name': prevName, 'type': 'c', 'begin': prevStart, 'end': start})
					if prevWasAsm:
						blocks.append({'name': prevName, 'type': 'asm', 'begin': prevStart, 'end': start})

					prevWasC = isinstance(subseg, list) and len(subseg) > 1  and subseg[1] == 'c'
					prevWasAsm = isinstance(subseg, list) and len(subseg) > 1 and subseg[1] == 'asm'
					prevName = subseg[2] if isinstance(subseg, list) and len(subseg) > 2 else None
					prevStart = start
	return blocks


def findSegmentForRomLocation(location, targetYamlFilePath = None):

	targetFilePath = targetYamlFilePath if targetYamlFilePath is not None else SPLAT_YAML_FILE_PATH
	with open(targetFilePath, 'r') as file:
		yamlObj = yaml.load(file.read(), Loader=yaml.SafeLoader)

		for seg in yamlObj['segments']:
			if isinstance(seg, dict) and seg['type'] == 'code':
				prevStart = 0
				prevType = None
				prevName = None
				for subseg in seg['subsegments']:

					if isinstance(subseg, dict) and 'start' not in subseg.keys():
						continue

					start = subseg[0] if isinstance(subseg, list) else subseg['start']

					# breakpoint()
					# print(start)
					# print(type(start))
					if isinstance(start, int) and isinstance(prevStart, int):
						if location < start and location > prevStart:
							return {"type": prevType, "name": prevName}

					prevType = subseg[1] if isinstance(subseg, list) and len(subseg) > 1 else None
					prevName = subseg[2] if isinstance(subseg, list) and len(subseg) > 2 else None
					prevStart = start
	return None


def getAssemblyFilePathList(includeNonmatchings = True, includeMatchings = False, filterString = None):

	filePathList = filesInFolder(ASM_PATH)
	for folderPath in foldersInFolder(ASM_PATH):
		if not includeNonmatchings and folderPath.endswith("/nonmatchings"):
			continue
		if not includeMatchings and folderPath.endswith("/matchings"):
			continue
		filePathList.extend(filesInFolderRec(folderPath))

	if filterString is not None:
		filePathList = [x for x in filePathList if filterString in x]
	return filePathList


def textSectionLinesFromAssembly(assemblyFileContents):

	sections = assemblyFileContents.split(".section ")
	if len(sections) == 1:
		lines = assemblyFileContents.split("\n")
	else:
		lines = "\n".join([x for x in sections if x.startswith(".text")]).split("\n")
	return lines



def functionAddressAndSymbolFromAssembly(includeNonmatchings = True, includeMatchings = False, filterString = None):

	filePathList = getAssemblyFilePathList(includeNonmatchings, includeMatchings, filterString)

	outList = []
	for filePath in filePathList:
		with open(filePath, 'r') as file:
			lines = textSectionLinesFromAssembly(file.read())
			for i, line in enumerate(lines):
				m = re.match(r"^glabel (\w+)$", line)
				if m is not None:
					outList.append((eval("0x" + lines[i + 1][10:18]), m.group(1)))

			outList.append()
	return outList


def instructionCountFromAssembly(includeNonmatchings = True, includeMatchings = False, filterString = None):

	filePathList = getAssemblyFilePathList(includeNonmatchings, includeMatchings, filterString)

	instructionCount = 0
	for filePath in filePathList:
		with open(filePath, 'r') as file:
			lines = textSectionLinesFromAssembly(file.read())
			instructionCount += sum([1 if re.match(r"^/\* \w+ \w+ \w+ \*/.*$", line) else 0 for line in lines])
	return instructionCount


def functionsFromAssembly(includeNonmatchings = True, includeMatchings = False, filterString = None):

	filePathList = getAssemblyFilePathList(includeNonmatchings, includeMatchings, filterString)

	output = dict()
	for filePath in filePathList:
		with open(filePath, 'r') as file:
			lines = textSectionLinesFromAssembly(file.read())
			currentFunctionName = None
			currentFunctionHex = ""
			for line in lines:
				if line.startswith("glabel "):

					if len(currentFunctionHex) > 0:
						output[currentFunctionName] = {}
						output[currentFunctionName]['bytes'] = bytes.fromhex(currentFunctionHex)
						output[currentFunctionName]['filePath'] = filePath

					currentFunctionName = line[len("glabel "):]
					currentFunctionHex = ""
				else:

					m = re.match(r"^/\* \w+ \w+ (\w+) \*/.*$", line)
					if m is not None:
						currentFunctionHex += m.group(1)

			if len(currentFunctionHex) > 0:
				output[currentFunctionName] = {}
				output[currentFunctionName]['bytes'] = bytes.fromhex(currentFunctionHex)
				output[currentFunctionName]['filePath'] = filePath
	return output