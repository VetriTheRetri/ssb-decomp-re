#!/bin/bash

if [[ $1 == "text" ]] ; then
	mips-linux-gnu-objcopy -O binary --only-section=.text $2 /tmp/tmp.text 2> /dev/null
	if [ $? -eq 0 ] ; then
		python3 ./tools/disasm.py -b /tmp/tmp.text | nano -
	else
		python3 ./tools/disasm.py -b $2 | nano - 
	fi
fi
if [[ $1 == "data" ]] ; then
	mips-linux-gnu-objcopy -O binary --only-section=.data $2 /tmp/tmp.data 2> /dev/null
	if [ $? -eq 0 ] ; then
		xxd /tmp/tmp.data | nano -
	else
		xxd $2 | nano -
	fi
fi
if [[ $1 == "rodata" ]] ; then
	mips-linux-gnu-objcopy -O binary --only-section=.rodata $2 /tmp/tmp.rodata 2> /dev/null
	if [ $? -eq 0 ] ; then
		xxd /tmp/tmp.rodata | nano -
	else
		xxd $2 | nano -
	fi
fi