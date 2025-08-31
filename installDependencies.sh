#!/bin/bash
RED="\e[31m"
GREEN="\e[32m"
ENDCOLOR="\e[0m"

# fetch ido recomp if not there
unameOut="$(uname -s)"
case "${unameOut}" in
	Linux*)     DETECTED_OS=linux;;
	Darwin*)    DETECTED_OS=macos;;
	*)          DETECTED_OS="UNKNOWN:${unameOut}"
esac

if [ "$DETECTED_OS" = "linux" ]
then
	missingAptPackages=""
	which git 2>&1 > /dev/null
	if [ $? != 0 ] ; then missingAptPackages=$"${missingAptPackages}git " ; fi
	which python3 2>&1 > /dev/null
	if [ $? != 0 ] ; then missingAptPackages=$"${missingAptPackages}python3 " ; fi
	which mips-linux-gnu-ld 2>&1 > /dev/null
	if [ $? != 0 ] ; then missingAptPackages=$"${missingAptPackages}binutils-mips-linux-gnu " ; fi
	which clang 2>&1 > /dev/null
	if [ $? != 0 ] ; then missingAptPackages=$"${missingAptPackages}clang " ; fi
	if [[ $(dpkg -l | grep -c build-essential) == 0 ]] ; then missingAptPackages=$"${missingAptPackages}build-essential " ; fi
	if [[ $(dpkg -l | grep -c gcc-multilib) == 0 ]] ; then missingAptPackages=$"${missingAptPackages}gcc-multilib " ; fi
	if [[ $(dpkg -l | grep -c libcapstone-dev) == 0 ]] ; then missingAptPackages=$"${missingAptPackages}libcapstone-dev " ; fi
	if [[ $(dpkg -l | grep -c python3-pip) == 0 ]] ; then missingAptPackages=$"${missingAptPackages}python3-pip " ; fi
	if [[ $(dpkg -l | grep -c ripgrep) == 0 ]] ; then missingAptPackages=$"${missingAptPackages}ripgrep " ; fi
	if [[ $(dpkg -l | grep -c clang-format) == 0 ]] ; then missingAptPackages=$"${missingAptPackages}clang-format " ; fi
	if [[ $(dpkg -l | grep -P "\scurl\s" -c) == 0 ]] ; then missingAptPackages=$"${missingAptPackages}curl " ; fi

	if [ ! -z "$missingAptPackages" ]
	then
		sudo apt install ${missingAptPackages}
	fi
fi

git submodule update --init --recursive
python3 -m pip install -r ./tools/splat/requirements.txt
python3 -m pip install charset-normalizer -U
TARGET_SPIMDISASM_VERSION=1.35.0
[ "$(python3 -m spimdisasm --version)" = "${TARGET_SPIMDISASM_VERSION}" ] || python3 -m pip install --force-reinstall -v "spimdisasm==${TARGET_SPIMDISASM_VERSION}"

if [ ! -f ./baserom.us.z64 ]
then
	echo -e ${RED}Rom not found, place it at $(pwd)/baserom.us.z64${ENDCOLOR}
	exit
fi

RECOMP_DIR7=tools/ido-recomp/7.1
RECOMP_DIR5=tools/ido-recomp/5.3
if [ ! -f "${RECOMP_DIR7}/cc" ]
then
	curl https://github.com/decompals/ido-static-recomp/releases/download/v1.1/ido-7.1-recomp-${DETECTED_OS}.tar.gz -L --output ido-7.1-recomp-${DETECTED_OS}.tar.gz
	mkdir -p ${RECOMP_DIR7}
	tar xf ido-7.1-recomp-${DETECTED_OS}.tar.gz -C ${RECOMP_DIR7}
	rm ido-7.1-recomp-${DETECTED_OS}.tar.gz
fi
if [ ! -f "${RECOMP_DIR5}/cc" ]
then
	curl https://github.com/decompals/ido-static-recomp/releases/download/v1.1/ido-5.3-recomp-${DETECTED_OS}.tar.gz -L --output ido-5.3-recomp-${DETECTED_OS}.tar.gz
	mkdir -p ${RECOMP_DIR5}
	tar xf ido-5.3-recomp-${DETECTED_OS}.tar.gz -C ${RECOMP_DIR5}
	rm ido-5.3-recomp-${DETECTED_OS}.tar.gz
fi
if [ ! -f "tools/vpk0cmd" ]
then
	[ "$DETECTED_OS" = "linux" ] && curl https://github.com/santaclose/vpk0cmd/releases/download/0.1/vpk0cmd_linux_x86_64 -L --output tools/vpk0cmd
	[ "$DETECTED_OS" = "macos" ] && curl https://github.com/santaclose/vpk0cmd/releases/download/0.1/vpk0cmd_macos_arm64 -L --output tools/vpk0cmd
	chmod +x tools/vpk0cmd
fi

if [ ! -f "tools/halAssetTool" ] || [ `md5sum tools/halAssetTool | grep -c dde182d728f8f2e3ab268c683792492a` -eq 0 ]
then
	[ "$DETECTED_OS" = "linux" ] && curl https://github.com/santaclose/halAssetTool/releases/download/0.15/halAssetTool -L --output tools/halAssetTool
	# [ "$DETECTED_OS" = "macos" ] && curl https://github.com/santaclose/halAssetTool/releases/download/0.14/halAssetTool_macos_arm64 -L --output tools/halAssetTool
	chmod +x tools/halAssetTool
fi

printf "${GREEN}All requirements satisfied${ENDCOLOR}\n"
