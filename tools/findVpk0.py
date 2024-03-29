#!/usr/bin/python3
import sys

with open(sys.argv[1], 'rb') as binFile:
	byteString = binFile.read()
	vpk0header = 'vpk0'.encode('utf-8')
	for i in range(len(byteString)):
		if byteString.startswith(vpk0header, i):
			print(hex(i))
