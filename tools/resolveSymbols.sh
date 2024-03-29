#!/bin/bash

if [ -z "$1" ]
then
	find ./bin -type f | grep \\.o$ | while read line
	do
		mips-linux-gnu-ld -T symbols.ld ${line} -o ${line}.l
	done
else
	find ./bin -type f | grep \\.o$ | grep $1 | while read line
	do
		mips-linux-gnu-ld -T symbols.ld ${line} -o ${line}.l
	done
fi
