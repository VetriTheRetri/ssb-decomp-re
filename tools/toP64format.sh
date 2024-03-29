#!/bin/bash

xxd $1 | while read line ; do printf "${line:10:4}${line:15:4} ${line:20:4}${line:25:4} ${line:30:4}${line:35:4} ${line:40:4}${line:45:4}"; echo ; done | while read line ; do echo ${line^^} ; done
