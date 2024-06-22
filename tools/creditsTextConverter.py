import sys

DECODE_PRINT_MARGIN = 35

encodeMap_m = {
	'-': 0x40,
	'&': 0x42,
	'"': 0x43,
	'/': 0x44,
	"'": 0x45,
	'?': 0x46,
	'(': 0x47,
	')': 0x48,
	'é': 0x49,
	' ': 0xffffffdf,
	'4': 0x37,
	',': 0x41,
	'.': 0x3f,
}
decodeMap_m = { v: k for k, v in encodeMap_m.items() }
encodeMap = {
	'.': 0x34,
	',': 0x35,
	'-': 0x40,
	'&': 0x42,
	'"': 0x43,
	'/': 0x44,
	"'": 0x45,
	'?': 0x46,
	'(': 0x47,
	')': 0x48,
	'é': 0x49,
	' ': 0xffffffdf,
	'4': 0x37,
}
decodeMap = { v: k for k, v in encodeMap.items() }

CHAR_A_m = 0x0
CHAR_Z_m = 0x19
CHAR_a_m = 0x1a
CHAR_z_m = 0x33
CHAR_9_m = 0x35
CHAR_0_m = 0x3e

CHAR_A = 0x0
CHAR_Z = 0x19
CHAR_a = 0x1a
CHAR_z = 0x33
CHAR_9 = 0x34
CHAR_0 = 0x3d


def encode(text, use3fForPeriod=False):
	output = ""
	for char in text:
		if char == '\n':
			continue
		if use3fForPeriod and char == '.':
			output += hex(0x3f)
		elif use3fForPeriod and char == ':':
			output += hex(0x34)
		elif char in encodeMap.keys():
			output += hex(encodeMap[char])
		elif ord(char) >= ord('A') and ord(char) <= ord('Z'):
			output += hex(ord(char) - 0x41)
		elif ord(char) >= ord('a') and ord(char) <= ord('z'):
			output += hex(ord(char) - 0x47)
		elif ord(char) >= ord('0') and ord(char) <= ord('9'):
			output += hex(0x35 + ord('9') - ord(char))
		else:
			print(f"No known way to encode '{char}'", file=sys.stderr)
		output += ','
	output += '\n'
	return output


def decode(text):
	word = []
	for hexString in text.replace('\n', '').split(','):
		value = eval(hexString)
		word.append(value)
		if value == 0xffffffdf:
			print(' '*(max(DECODE_PRINT_MARGIN-len(word), 1)), end='')
			print(",".join([hex(x) for x in word]))
			word = []
		elif value == 0xffffffc9:
			print('_', end='')
		elif value in decodeMap.keys():
			print(decodeMap[value], end='')
		elif value >= CHAR_A and value <= CHAR_Z:
			print(chr(value + 0x41), end='')
		elif value >= CHAR_a and value <= CHAR_z:
			print(chr(value + 0x47), end='')
		elif value >= CHAR_9 and value <= CHAR_0:
			print(chr(CHAR_9 + ord('9') - value), end='')
		elif value == 0x3f:
			print('.', end='')
		else:
			print(f"No known way to decode '{hexString}'", file=sys.stderr)
	print(' '*(max(DECODE_PRINT_MARGIN - 1 -len(word), 1)), end='')
	print(",".join([hex(x) for x in word]))


def encodeMultiline(text):
	output = ""
	for char in text.replace('\n\n', '\n'):
		if char == '\n':
			output += hex(0xffffffc9)
		elif char in encodeMap_m.keys():
			output += hex(encodeMap_m[char])
		elif ord(char) >= ord('A') and ord(char) <= ord('Z'):
			output += hex(ord(char) - 0x41)
		elif ord(char) >= ord('a') and ord(char) <= ord('z'):
			output += hex(ord(char) - 0x47)
		elif ord(char) >= ord('0') and ord(char) <= ord('9'):
			output += hex(0x35 + ord('9') - ord(char))
		else:
			print(f"No known way to encode '{char}'", file=sys.stderr)
		output += ','
	output += '\n'
	return output


def decodeMultiline(text):
	word = []
	for hexString in text.replace('\n', '').split(','):
		value = eval(hexString)
		word.append(value)
		if value == 0xffffffc9:
			print(' '*(max(DECODE_PRINT_MARGIN-len(word), 1)), end='')
			print(",".join([hex(x) for x in word]))
			word = []
			# print()
		elif value in decodeMap_m.keys():
			print(decodeMap_m[value], end='')
		elif value >= CHAR_A_m and value <= CHAR_Z_m:
			print(chr(value + 0x41), end='')
		elif value >= CHAR_a_m and value <= CHAR_z_m:
			print(chr(value + 0x47), end='')
		elif value >= CHAR_9_m and value <= CHAR_0_m:
			print(chr(CHAR_9_m + ord('9') - value), end='')
		else:
			print(f"No known way to decode '{hexString}'", file=sys.stderr)

	print(' '*(max(DECODE_PRINT_MARGIN - 1 -len(word), 1)), end='')
	print(",".join([hex(x) for x in word]))


def getDelimiterData(text):
	startCountPairs = []
	currentStart = 0
	lineBreakCounter = 0
	for i, char in enumerate(creditsText):
	
		if char == '\n':
			startCountPairs.append((currentStart, (i - lineBreakCounter) - currentStart))
	
			lineBreakCounter += 1
			currentStart = i + 1 - lineBreakCounter
	startCountPairs.append((currentStart, (len(creditsText.rstrip('\n')) - lineBreakCounter) - currentStart))
	return startCountPairs


def getDelimiterDataMultiline(text):
	startCountPairs = []
	currentStart = 0
	lineBreakCounter = 0
	for i in range(len(text) - 1):
		char = text[i]
		nextChar = text[i + 1]

		if char == '\n' and nextChar == '\n':
			startCountPairs.append((currentStart, (i - lineBreakCounter) - currentStart + 1))

			lineBreakCounter += 1
			currentStart = i + 2 - lineBreakCounter
	startCountPairs.append((currentStart, (len(text) - lineBreakCounter) - currentStart))
	return startCountPairs


if __name__ == "__main__":

	isMultiline = False
	if '-m' in sys.argv:
		isMultiline = True
		sys.argv.remove('-m')

	if '-d' in sys.argv:
		sys.argv.remove('-d')
		if isMultiline:
			decodeMultiline(sys.argv[1])
		else:
			decode(sys.argv[1])
		sys.exit(0)

	use3fForPeriod = False
	if '-3f' in sys.argv:
		use3fForPeriod = True
		sys.argv.remove('-3f')

	inFilePath = sys.argv[1]

	outEncodedPath = inFilePath[:inFilePath.rfind('.')] + '.encoded'
	outMetadataPath = inFilePath[:inFilePath.rfind('.')] + '.metadata'

	with open(inFilePath, 'r') as creditsTextFile:
		creditsText = creditsTextFile.read()

	if isMultiline:
		startCountPairs = getDelimiterDataMultiline(creditsText)
	else:
		startCountPairs = getDelimiterData(creditsText)

	with open(outMetadataPath, 'w') as metadataFile:
		for pair in startCountPairs:
			metadataFile.write(f"{pair[0]},{pair[1]},\n")

	if isMultiline:
		encodedText = encodeMultiline(creditsText)
	else:
		encodedText = encode(creditsText, use3fForPeriod)

	with open(outEncodedPath, 'w') as encodedFile:
		encodedFile.write(encodedText)