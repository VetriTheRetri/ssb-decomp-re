#!/bin/bash

find bin/src/ -type f | grep \\.text$ | grep "$1" | while read line
do
#	fileName=$(basename $line)
#	asmPath=bin/asm/${fileName}
	relPath=${line:8}
	asmPath=bin/asm/${relPath}
	nameWithoutExtension=${fileName%.*}
	nameWithoutExtension=${nameWithoutExtension%.*}
	binPath=targetBin/${nameWithoutExtension}.bin
	if [ -f "$asmPath" ]
	then
		echo diffing $asmPath with $line
		python tools/matchbin.py ${line} ${asmPath}
#		python tools/matchbin.py ${line} ${binPath}
	else
		echo "File not found: $asmPath"
	fi
done
