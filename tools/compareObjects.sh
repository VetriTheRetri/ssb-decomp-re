#!/bin/bash
RED="\e[31m"
GREEN="\e[32m"
ENDCOLOR="\e[0m"

rm -f /tmp/compareObjectsOutGreen.txt
rm -f /tmp/compareObjectsOutRed.txt
rm -f /tmp/compareObjectsOutNonMatchingText.txt

buildSrcPath=build/src/
buildSrcPathLength=${#buildSrcPath}

find $buildSrcPath -type f | grep \\.text$ | grep "$1" | while read line
do
	relPath=${line:${buildSrcPathLength}}
	asmPath=build/asm/${relPath}
	if [ -f "$asmPath" ]
	then
		python3 tools/matchbin.py ${line} ${asmPath} > /tmp/compareObjectsTextDiffOut.txt
		if [ $(cat /tmp/compareObjectsTextDiffOut.txt | grep 100\\.00% -c) -eq 1 ]; then
			echo -e "${GREEN}Text matches:|${line}|${asmPath}|(100.00%|matching instructions)${ENDCOLOR}" >> /tmp/compareObjectsOutGreen.txt
		else
			echo -e "${RED}Text differs: ${line} ${asmPath}${ENDCOLOR}" >> /tmp/compareObjectsOutNonMatchingText.txt
			cat /tmp/compareObjectsTextDiffOut.txt >> /tmp/compareObjectsOutNonMatchingText.txt
		fi
	# else
		# echo "Text file not found: $asmPath"
	fi
done

find $buildSrcPath -type f | grep \\.data$ | grep "$1" | while read line
do
	relPath=${line:${buildSrcPathLength}}
	asmPath=build/asm/data/${relPath}.data
	if [ -f "$asmPath" ]
	then
		targetSize=$(stat --printf="%s" $asmPath)
		actualSize=$(stat --printf="%s" $line)
		matchingBytesPercent=$(python3 tools/matchbin.py ${line} ${asmPath} -x -p)
		if [ "${targetSize}" = "${actualSize}" ]; then
			echo -e "${GREEN}Data size matches:|${line}|${asmPath}|(${matchingBytesPercent}|matching words, can't rely too much on this value because of symbol references)${ENDCOLOR}" >> /tmp/compareObjectsOutGreen.txt
		else
			echo -e "${RED}Data size mismatch (${actualSize} != ${targetSize}):|${line}|${asmPath}|(${matchingBytesPercent}|matching words, can't rely too much on this value because of symbol references)${ENDCOLOR}" >> /tmp/compareObjectsOutRed.txt
		fi
	# else
		# echo "Data file not found: $asmPath"
	fi
done

find $buildSrcPath -type f | grep \\.rodata$ | grep "$1" | while read line
do
	relPath=${line:${buildSrcPathLength}}
	asmPath=build/asm/data/${relPath}.rodata
	if [ -f "$asmPath" ]
	then
		targetSize=$(stat --printf="%s" $asmPath)
		actualSize=$(stat --printf="%s" $line)
		matchingBytesPercent=$(python3 tools/matchbin.py ${line} ${asmPath} -x -p)
		if [ "${targetSize}" = "${actualSize}" ]; then
			echo -e "${GREEN}Rodata size matches:|${line}|${asmPath}|(${matchingBytesPercent}|matching words, can't rely too much on this value because of symbol references)${ENDCOLOR}" >> /tmp/compareObjectsOutGreen.txt
		else
			echo -e "${RED}Rodata size mismatch (${actualSize} != ${targetSize}):|${line}|${asmPath}|(${matchingBytesPercent}|matching words, can't rely too much on this value because of symbol references)${ENDCOLOR}" >> /tmp/compareObjectsOutRed.txt
		fi
	# else
		# echo "Data file not found: $asmPath"
	fi
done

[ -f /tmp/compareObjectsOutGreen.txt ] && cat /tmp/compareObjectsOutGreen.txt | column -t -s \|
[ -f /tmp/compareObjectsOutRed.txt ] && cat /tmp/compareObjectsOutRed.txt | column -t -s \|
[ -f /tmp/compareObjectsOutNonMatchingText.txt ] && cat /tmp/compareObjectsOutNonMatchingText.txt
