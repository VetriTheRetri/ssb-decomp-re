import sys
with open(sys.argv[1], 'r+b') as file:
	file.seek(0x24)
	if file.read(1) == 0x10.to_bytes(1, byteorder='big'):
		sys.exit(0)
	file.seek(0x24)
	file.write(0x10.to_bytes(1, byteorder='big'))