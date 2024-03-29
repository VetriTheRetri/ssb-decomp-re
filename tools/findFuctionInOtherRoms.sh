#!/bin/bash

ls $1 | grep \\.z64$ | while read line
do
	echo $line
	python tools/matchbin.py -f "${1}/${line}" "${2}"
done
