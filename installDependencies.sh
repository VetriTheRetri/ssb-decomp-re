#!/bin/bash
RED="\e[31m"
GREEN="\e[32m"
ENDCOLOR="\e[0m"

missing_packages=""
which git 2>&1 > /dev/null
if [ $? != 0 ] ; then missing_packages=$"${missing_packages}git " ; fi
which python3 2>&1 > /dev/null
if [ $? != 0 ] ; then missing_packages=$"${missing_packages}python3 " ; fi
which mips-linux-gnu-ld 2>&1 > /dev/null
if [ $? != 0 ] ; then missing_packages=$"${missing_packages}binutils-mips-linux-gnu " ; fi
which clang 2>&1 > /dev/null
if [ $? != 0 ] ; then missing_packages=$"${missing_packages}clang " ; fi

if [ ! -z "$missing_packages" ]
then
	sudo apt install ${missing_packages}
fi

git submodule update --init --recursive
python3 -m pip install -r ./tools/splat/requirements.txt

if [ ! -f ./tools/ido-static-recomp/build7.1/out/cc ]
then
	pushd ./tools/ido-static-recomp/ && python3 ./build.py ./ido/7.1/ && popd
fi

if [ ! -f ./baserom.z64 ]
then
	echo -e ${RED}Rom not found, place it at $(pwd)/baserom.z64${ENDCOLOR}
	exit
fi

echo -e ${GREEN}All requirements satisfied${ENDCOLOR}