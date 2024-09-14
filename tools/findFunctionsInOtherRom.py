#!/usr/bin/python3

import os
import re
import sys
import matchbin
import parser

def filesInFolderRec(folder):
	return [os.path.join(dp, f).replace('\\', '/') for dp, dn, filenames in os.walk(folder) for f in filenames]

targetYamlPath = sys.argv[1]
targetRomPath = parser.romPathFromYaml(targetYamlPath)
functionDict = parser.functionsFromAssembly()

codeBlocks = [x for x in parser.codeBlocksFromYaml(None, targetYamlPath) if isinstance(x['begin'], int) and isinstance(x['end'], int)]
jobData = [(i, k) for i, k in enumerate(functionDict.keys())]


pid = os.fork()
if pid > 0:
	jobData = jobData[:len(jobData) // 2]
else:
	jobData = jobData[len(jobData) // 2:]

pid = os.fork()
if pid > 0:
	jobData = jobData[:len(jobData) // 2]
else:
	jobData = jobData[len(jobData) // 2:]

pid = os.fork()
if pid > 0:
	jobData = jobData[:len(jobData) // 2]
else:
	jobData = jobData[len(jobData) // 2:]

pid = os.fork()
if pid > 0:
	jobData = jobData[:len(jobData) // 2]
else:
	jobData = jobData[len(jobData) // 2:]


for i, k in jobData:
	location = matchbin.findSequence(targetRomPath, functionDict[k]['bytes'], True, codeBlocks)
	segment = parser.findSegmentForRomLocation(location, targetYamlPath)
	if location > -1:
		HEX_PADDING = 8
		targetType = "Unk" if segment['type'] is None else segment['type']
		targetName = "Unk" if segment['name'] is None else segment['name']
		targetLocation = f"{location:#0{HEX_PADDING}x}"
		localFilePath = functionDict[k]['filePath']
		byteCount = len(functionDict[k]['bytes'])
		print(f"{k}: {' '*(30-len(k))} {targetType} {' '*(3-len(targetType))} {targetName} {' '*(50-len(targetName))} {targetLocation} <- {localFilePath} {' '*(40-len(localFilePath))} ({byteCount} bytes)")