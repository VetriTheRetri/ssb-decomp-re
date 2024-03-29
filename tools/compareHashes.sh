#!/bin/bash
RED="\e[31m"
GREEN="\e[32m"
ENDCOLOR="\e[0m"
hashA=$(md5sum $1)
hashB=$(md5sum $2)
if [ "${hashA:0:32}" = "${hashB:0:32}" ]; then
    echo -e "${GREEN}BUILT ROM MATCHES${ENDCOLOR}"
else
    echo -e "${RED}BUILT ROM DOESN'T MATCH${ENDCOLOR}"
fi