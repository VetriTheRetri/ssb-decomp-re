#!/usr/bin/env bash
set -eu

#
# tools/build-linux64-toolchain.sh: Linux toolchain build script.
#
# n64chain: A (free) open-source N64 development toolchain.
# Copyright 2014-16 Tyler J. Stachecki <stachecki.tyler@gmail.com>
#
# This file is subject to the terms and conditions defined in
# 'LICENSE', which is part of this source code package.
#

getnumproc() {
which getconf >/dev/null 2>/dev/null && {
	getconf _NPROCESSORS_ONLN 2>/dev/null || getconf NPROCESSORS_ONLN 2>/dev/null || echo 1;
} || echo 1;
};

numproc=`getnumproc`

BINUTILS="ftp://ftp.gnu.org/gnu/binutils/binutils-2.37.tar.bz2"
GCC="ftp://ftp.gnu.org/gnu/gcc/gcc-9.1.0/gcc-9.1.0.tar.gz"

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

if [ $# -eq 1 ] && ( [ "$1" == "help" ] || [ "$1" == "--help" ] || [ "$1" == "-h" ] ); then 
  echo "print help"
  exit 0
fi

if [ $# -eq 0 ]; then
  BUILD="all"
else
  BUILD="$1"
fi

case "$BUILD" in
  "all") B_BINUTILS=true;  B_GCC=true;;
  "gcc") B_BINUTILS=false; B_GCC=true;;
  "binutils") B_BINUTILS=true; B_GCC=false;;
  *) B_BINUTILS=true;  B_GCC=true;;
esac

if [ $# -lt 2 ]; then 
  PREFIX="${SCRIPT_DIR}"
else
  PREFIX="${2}"
fi

echo "building ${BUILD} into ${PREFIX}"

cd ${SCRIPT_DIR} && mkdir -p {stamps,tarballs}

#export PATH="${PATH}:${SCRIPT_DIR}/bin"

if [ "$B_BINUTILS" == true ] && [ ! -f stamps/binutils-download ]; then
  wget "${BINUTILS}" -O "tarballs/$(basename ${BINUTILS})"
  touch stamps/binutils-download
fi

if [ "$B_BINUTILS" == true ] && [ ! -f stamps/binutils-extract ]; then
  mkdir -p binutils-{build,source}
  tar -xf tarballs/$(basename ${BINUTILS}) -C binutils-source --strip 1
  touch stamps/binutils-extract
fi

if [ "$B_BINUTILS" == true ] &&  [ ! -f stamps/binutils-configure ]; then
  pushd binutils-build
  ../binutils-source/configure \
    --prefix="${PREFIX}" \
    --with-lib-path="${PREFIX}/lib" \
    --target=mips64-elf --with-arch=vr4300 \
    --enable-64-bit-bfd \
    --enable-plugins \
    --enable-shared \
    --disable-gold \
    --disable-multilib \
    --disable-nls \
    --disable-rpath \
    --disable-static \
    --disable-werror
  popd

  touch stamps/binutils-configure
fi

if [ "$B_BINUTILS" == true ] && [ ! -f stamps/binutils-build ]; then
  pushd binutils-build
  make -j${numproc}
  popd

  touch stamps/binutils-build
fi

if [ "$B_BINUTILS" == true ] && [ ! -f stamps/binutils-install ]; then
  pushd binutils-build
  make install
  popd

  touch stamps/binutils-install
fi

if [ "$B_GCC" == true ] && [ ! -f stamps/gcc-download ]; then
  wget "${GCC}" -O "tarballs/$(basename ${GCC})"
  touch stamps/gcc-download
fi

if [ "$B_GCC" == true ] && [ ! -f stamps/gcc-extract ]; then
  mkdir -p gcc-{build,source}
  tar -xf tarballs/$(basename ${GCC}) -C gcc-source --strip 1
  touch stamps/gcc-extract
fi

if [ "$B_GCC" == true ] && [ ! -f stamps/gcc-configure ]; then
  pushd gcc-build
  ../gcc-source/configure \
    --prefix="${PREFIX}" \
    --target=mips64-elf --with-arch=vr4300 \
    --enable-languages=c --without-headers --with-newlib \
    --with-gnu-as=${PREFIX}/bin/mips64-elf-as \
    --with-gnu-ld=${PREFIX}/bin/mips64-elf-ld \
    --enable-checking=release \
    --enable-shared \
    --enable-shared-libgcc \
    --disable-decimal-float \
    --disable-gold \
    --disable-libatomic \
    --disable-libgomp \
    --disable-libitm \
    --disable-libquadmath \
    --disable-libquadmath-support \
    --disable-libsanitizer \
    --disable-libssp \
    --disable-libunwind-exceptions \
    --disable-libvtv \
    --disable-multilib \
    --disable-nls \
    --disable-rpath \
    --disable-static \
    --disable-threads \
    --disable-win32-registry \
    --enable-lto \
    --enable-plugin \
    --enable-static \
    --without-included-gettext
  popd

  touch stamps/gcc-configure
fi

if [ "$B_GCC" == true ] && [ ! -f stamps/gcc-build ]; then
  pushd gcc-build
  make all-gcc -j${numproc}
  popd

  touch stamps/gcc-build
fi

if [ "$B_GCC" == true ] && [ ! -f stamps/gcc-install ]; then
  pushd gcc-build
  make install-gcc
  popd

  touch stamps/gcc-install
fi

rm -rf "${SCRIPT_DIR}"/tarballs
rm -rf "${SCRIPT_DIR}"/*-source
rm -rf "${SCRIPT_DIR}"/*-build
rm -rf "${SCRIPT_DIR}"/stamps
exit 0
