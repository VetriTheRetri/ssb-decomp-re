import sys
import struct

if len(sys.argv) < 2:
	print("Usage: hexToFloat <floatInHex> [<moreFloatsInHex>...]")
	sys.exit(1)

for arg in sys.argv[1:]:
	print(struct.unpack('!f', bytes.fromhex(arg if not arg.startswith("0x") else arg[2:]))[0])