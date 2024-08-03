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

# fetch ido recomp if not there
unameOut="$(uname -s)"
case "${unameOut}" in
	Linux*)     DETECTED_OS=linux;;
	Darwin*)    DETECTED_OS=macos;;
	*)          DETECTED_OS="UNKNOWN:${unameOut}"
esac
RECOMP_DIR7=tools/ido-recomp/7.1
RECOMP_DIR5=tools/ido-recomp/5.3
if [ ! -f "${RECOMP_DIR7}/cc" ]
then
	curl https://github.com/decompals/ido-static-recomp/releases/download/v1.1/ido-7.1-recomp-${DETECTED_OS}.tar.gz -O ido-7.1-recomp-${DETECTED_OS}.tar.gz -L
	mkdir -p ${RECOMP_DIR7}
	tar xf ido-7.1-recomp-${DETECTED_OS}.tar.gz -C ${RECOMP_DIR7}
	rm ido-7.1-recomp-${DETECTED_OS}.tar.gz
fi
if [ ! -f "${RECOMP_DIR5}/cc" ]
then
	curl https://github.com/decompals/ido-static-recomp/releases/download/v1.1/ido-5.3-recomp-${DETECTED_OS}.tar.gz -O ido-5.3-recomp-${DETECTED_OS}.tar.gz -L
	mkdir -p ${RECOMP_DIR5}
	tar xf ido-5.3-recomp-${DETECTED_OS}.tar.gz -C ${RECOMP_DIR5}
	rm ido-5.3-recomp-${DETECTED_OS}.tar.gz
fi

echo -e ${GREEN}All requirements satisfied${ENDCOLOR}