#!/bin/bash
# Provision the IRIX 4 compatibility frontend used to build ovl8_8.o.
#
# Fetches the `ido4.1` package that decomp.me already publishes. That
# tarball carries exactly the three things we need and nothing we have to
# build ourselves:
#
#   usr/lib/accom          the IRIX 4 C frontend (MIPS ECOFF, emulated)
#   usr/lib/acpp, copt     4.1's own preprocessor/optimizer (unused, kept
#                          for provenance -- see README.md)
#   usr/bin/qemu-irix-4.0  a prebuilt native x86-64 Linux qemu-irix
#
# No IDO 4.1 media, no docker, and no qemu-irix build are required: the
# emulator ships inside the package alongside the shared libraries it
# needs at `-L` time.
#
# Usage: tools/ido-irix4/provision.sh

set -euo pipefail

SCRIPT_DIR=$(CDPATH= cd -- "$(dirname "$0")" && pwd)
DEST="$SCRIPT_DIR/ido4.1"
URL="https://github.com/decompme/compilers/releases/download/compilers/ido4.1.tar.gz"

if [ -x "$DEST/usr/lib/accom" ] && [ -x "$DEST/usr/bin/qemu-irix-4.0" ]; then
	echo "already provisioned: $DEST" >&2
	exit 0
fi

tmp=$(mktemp -d)
trap 'rm -rf "$tmp"' EXIT

echo "fetching $URL" >&2
curl -fsSL "$URL" -o "$tmp/ido4.1.tar.gz"

mkdir -p "$DEST"
tar xzf "$tmp/ido4.1.tar.gz" -C "$DEST"
chmod +x "$DEST/usr/bin/qemu-irix-4.0" "$DEST/usr/lib/accom" "$DEST/usr/lib/acpp" "$DEST/usr/lib/copt"

for f in usr/lib/accom usr/bin/qemu-irix-4.0; do
	[ -x "$DEST/$f" ] || { echo "error: $f missing from package" >&2; exit 1; }
done

echo "provisioned $DEST" >&2
