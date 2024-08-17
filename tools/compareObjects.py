import os
import subprocess

RED="\033[31m"
GREEN="\033[32m"
ENDCOLOR="\033[0m"

def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]

buildSrcPath = "build/src/"
buildSrcPathLength = len(buildSrcPath)

compareObjectsOutGreen = ""
compareObjectsOutRed = ""
compareObjectsOutNonMatchingText = ""

for filePath in [x for x in filesInFolderRec(buildSrcPath) if x.endswith(".text")]:
	relPath = filePath[buildSrcPathLength:]
	asmPath = f"build/asm/{relPath}"
	asmTextPath = f"asm/{relPath.replace('.text', '.s')}"
	if os.path.isfile(asmPath):
		if os.path.isfile(asmTextPath):
			textDiffOut = subprocess.check_output(["python3", "tools/matchbin.py", filePath, asmPath, f"asmTextPath={asmTextPath}"]).decode('utf-8')
		else:
			textDiffOut = subprocess.check_output(["python3", "tools/matchbin.py", filePath, asmPath]).decode('utf-8')
		if "100.00%" in textDiffOut:
			compareObjectsOutGreen += f"{GREEN}Text matches: {filePath} {asmPath} (100.00% matching instructions){ENDCOLOR}\n"
		else:
			compareObjectsOutNonMatchingText += f"{RED}Text differs: {filePath} {asmPath}{ENDCOLOR}\n{textDiffOut}"

for filePath in [x for x in filesInFolderRec(buildSrcPath) if x.endswith(".data")]:
	relPath = filePath[buildSrcPathLength:]
	asmPath = f"build/asm/data/{relPath}.data"
	if os.path.isfile(asmPath):
		targetSize = os.path.getsize(asmPath)
		actualSize = os.path.getsize(filePath)
		matchingBytesPercent = subprocess.check_output(["python3", "tools/matchbin.py", filePath, asmPath, '-x', '-p']).decode('utf-8')
		if targetSize == actualSize:
			compareObjectsOutGreen += f"{GREEN}Data size matches: {filePath} {asmPath} ({matchingBytesPercent} matching words, can't rely too much on this value because of symbol references){ENDCOLOR}\n"
		else:
			compareObjectsOutRed += f"{RED}Data size mismatch ({actualSize} != {targetSize}): {filePath} {asmPath} ({matchingBytesPercent} matching words, can't rely too much on this value because of symbol references){ENDCOLOR}\n"

for filePath in [x for x in filesInFolderRec(buildSrcPath) if x.endswith(".rodata")]:
	relPath = filePath[buildSrcPathLength:]
	asmPath = f"build/asm/data/{relPath}.rodata"
	if os.path.isfile(asmPath):
		targetSize = os.path.getsize(asmPath)
		actualSize = os.path.getsize(filePath)
		matchingBytesPercent = subprocess.check_output(["python3", "tools/matchbin.py", filePath, asmPath, '-x', '-p']).decode('utf-8')
		if targetSize == actualSize:
			compareObjectsOutGreen += f"{GREEN}Rodata size matches: {filePath} {asmPath} ({matchingBytesPercent} matching words, can't rely too much on this value because of symbol references){ENDCOLOR}\n"
		else:
			compareObjectsOutRed += f"{RED}Rodata size mismatch ({actualSize} != {targetSize}): {filePath} {asmPath} ({matchingBytesPercent} matching words, can't rely too much on this value because of symbol references){ENDCOLOR}\n"

if len(compareObjectsOutGreen) > 0:
	print(compareObjectsOutGreen)
if len(compareObjectsOutRed) > 0:
	print(compareObjectsOutRed)
if len(compareObjectsOutNonMatchingText) > 0:
	print(compareObjectsOutNonMatchingText)
