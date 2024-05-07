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
if [[ $(dpkg -l | grep -c build-essential) == 0 ]] ; then missing_packages=$"${missing_packages}build-essential " ; fi
if [[ $(dpkg -l | grep -c gcc-multilib) == 0 ]] ; then missing_packages=$"${missing_packages}gcc-multilib " ; fi
if [[ $(dpkg -l | grep -c libcapstone-dev) == 0 ]] ; then missing_packages=$"${missing_packages}libcapstone-dev " ; fi
if [[ $(dpkg -l | grep -c python3-pip) == 0 ]] ; then missing_packages=$"${missing_packages}python3-pip " ; fi
if [[ $(dpkg -l | grep -c ripgrep) == 0 ]] ; then missing_packages=$"${missing_packages}ripgrep " ; fi
if [[ $(dpkg -l | grep -c clang-format) == 0 ]] ; then missing_packages=$"${missing_packages}clang-format " ; fi

if [ ! -z "$missing_packages" ]
then
	sudo apt install ${missing_packages}
fi

git submodule update --init --recursive
python3 -m pip install -r ./tools/splat/requirements.txt
python3 -m pip install charset-normalizer -U

if [ ! -f ./baserom.us.z64 ]
then
	echo -e ${RED}Rom not found, place it at $(pwd)/baserom.us.z64${ENDCOLOR}
	exit
fi

echo -e ${GREEN}All requirements satisfied${ENDCOLOR}