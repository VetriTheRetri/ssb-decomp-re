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
	missingPackages=""
	if command -v apt > /dev/null 2>&1
	then

		requiredPackages="git python3 clang curl binutils-mips-linux-gnu build-essential python3-pip ripgrep gcc-multilib clang-format libcapstone-dev"
		for package in $requiredPackages; do
			dpkg -s "$package" > /dev/null 2>&1 || missingPackages="${missingPackages}${package} "
		done
		if [ -n "$missingPackages" ]
		then
			sudo apt install ${missingPackages}
		fi
	elif command -v pacman > /dev/null 2>&1
	then
		requiredPackages="git python clang curl lib32-glibc python-pip ripgrep"
		for package in $requiredPackages; do
			pacman -Qi "$package" > /dev/null 2>&1 || missingPackages="${missingPackages}${package} "
		done
		if [ -n "$missingPackages" ]
		then
			sudo pacman -S ${missingPackages}
		fi
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
# IRIX 4 frontend. src/ovl8/ovl8_8.c only matches under it, so a tree without it
# cannot produce the ROM. The package bundles its own native qemu-irix, so it
# is x86-64 Linux only for now. Failure is reported at the end rather than
# here, so the remaining tools still get installed.
irix4Failed=""
if [ "$DETECTED_OS" = "linux" ] && [ "$(uname -m)" = "x86_64" ]
then
	./tools/ido-irix4/provision.sh || irix4Failed="provisioning failed"
else
	irix4Failed="only packaged for x86-64 Linux"
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

if [ -n "$irix4Failed" ]
then
	printf "${RED}IRIX 4 frontend unavailable (${irix4Failed}).\n"
	printf "src/ovl8/ovl8_8.c cannot be compiled without it, so the build will not\n"
	printf "produce a matching ROM. See tools/ido-irix4/README.md.${ENDCOLOR}\n"
	exit 1
fi

printf "${GREEN}All requirements satisfied${ENDCOLOR}\n"
