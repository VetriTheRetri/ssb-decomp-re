#!/bin/bash

cat ~/n64decomp/sf64/yamls/us/main.yaml | grep libultra | grep -v \\rodata, | grep -v \\.bss | grep -v \\data | awk -F\[ '{print $2}' | awk -F, '{print $1}' | while read line
do
	echo $line
	python ./tools/matchbin.py -s ../starfox.z64 $line baserom.z64
done