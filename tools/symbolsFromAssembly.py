#!/usr/bin/python3
import sys
import re
import os

ASM_PATTERN = r"\n.label (\w+)\n[^\w]+[\w]+\s(\w+)"
SYMBOL_FILE_PATTERN = r"^[^_]+_[^_]+_(\w+)"

def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]

mapList = []
for assemblyFilePath in [x for x in filesInFolderRec(sys.argv[1]) if x.endswith(".s")]:
	with open(assemblyFilePath, 'r') as assemblyFile:
		content = assemblyFile.read()
		mapList.extend(re.findall(ASM_PATTERN, content))
		# print(re.findall(ASM_PATTERN, content))

symbolMap = dict([(x[1], x[0]) for x in mapList if x[1] not in x[0] and len(x[1]) == 8])
# print(symbolMap)

# for symbolFilePath in filesInFolderRec(sys.argv[2]):
with open(sys.argv[2], 'r+') as symbolFile:
	content = symbolFile.read()
	lines = content.split('\n')
	for line in lines:
		m = re.match(SYMBOL_FILE_PATTERN, line)
		if m is None or len(m.group(1)) != 8:
			continue
		print(m.group(0), m.group(1), symbolMap[m.group(1)] if m.group(1) in symbolMap.keys() else "not found")
		if m.group(1) in symbolMap.keys():
			content = content.replace(m.group(0), symbolMap[m.group(1)])
	symbolFile.seek(0)
	symbolFile.write(content)
	symbolFile.truncate()