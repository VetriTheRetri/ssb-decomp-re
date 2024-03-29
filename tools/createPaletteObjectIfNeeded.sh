#!/bin/bash

# expected args: $(OBJCOPY) -I binary -O elf32-tradbigmips -B mips $< $@

if [[ ${8: -8} == ".ci4.bin" || ${8: -8} == ".ci8.bin" ]]
then
	source=$(echo $8 | sed "s/ci..bin/palette.bin/g")
	target=$(echo $9 | sed "s/ci..o/palette.o/g")
#	echo HAS PALETTE
	echo $1 $2 $3 $4 $5 $6 $7 $source $target
	$1 $2 $3 $4 $5 $6 $7 $source $target
fi

exit 0
