#!/usr/bin/python3
import os
import sys
import subprocess
from PIL import Image

ENDIANNESS = "big"
EXTRACTED_FILES_PATH = "bin/relocData"
ROM_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "../", "baserom.us.z64")
RELOC_EXTRACTOR_BIN_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "ssbfile")

def extractRelocFilesSsbfile():
	os.chdir(EXTRACTED_FILES_PATH)
	processes = []
	for i in range(2132):
		processes.append(subprocess.Popen([RELOC_EXTRACTOR_BIN_PATH, f'{i}', '--rom', ROM_PATH], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL))
	for i in range(2132):
		processes[i].wait()

# extractRelocFilesSsbfile()

# def extractBitmapFromFile(filePath, spriteOffset, outputPath):
# 	G_IM_FMT_RGBA = 0
# 	G_IM_FMT_YUV = 1
# 	G_IM_FMT_CI = 2
# 	G_IM_FMT_IA = 3
# 	G_IM_FMT_I = 4

# 	G_IM_SIZ_4b = 0
# 	G_IM_SIZ_8b = 1
# 	G_IM_SIZ_16b = 2
# 	G_IM_SIZ_32b = 3
# 	G_IM_SIZ_4c	 = 4
# 	G_IM_SIZ_DD = 5

# 	with open(filePath, 'rb') as file:
# 		file.seek(spriteOffset + 3 * 16)
# 		bitmapFormat = int.from_bytes(file.read(1), ENDIANNESS)
# 		bitmapTexelSize = int.from_bytes(file.read(1), ENDIANNESS)
# 		file.seek(spriteOffset + 54)
# 		bitmapOffset = int.from_bytes(file.read(2), ENDIANNESS)
# 		file.seek(bitmapOffset + 2)
# 		bitmapWidth = int.from_bytes(file.read(2), ENDIANNESS)
# 		file.seek(4, 1)
# 		bitmapBufferOffset = int.from_bytes(file.read(4), ENDIANNESS)
# 		bitmapHeight = int.from_bytes(file.read(2), ENDIANNESS)
# 		file.seek(bitmapBufferOffset)
# 		bitmapBuffer = file.read(bitmapWidth * bitmapHeight)

# 	print(bitmapOffset)
# 	print(f"Creating {bitmapWidth}x{bitmapHeight} image")
# 	if bitmapFormat == G_IM_FMT_RGBA:
# 		print("Format: G_IM_FMT_RGBA")
# 	elif bitmapFormat == G_IM_FMT_YUV:
# 		print("Format: G_IM_FMT_YUV")
# 	elif bitmapFormat == G_IM_FMT_CI:
# 		print("Format: G_IM_FMT_CI")
# 	elif bitmapFormat == G_IM_FMT_IA:
# 		print("Format: G_IM_FMT_IA")
# 	elif bitmapFormat == G_IM_FMT_I:
# 		print("Format: G_IM_FMT_I")
# 	if bitmapTexelSize == G_IM_SIZ_4b:
# 		print("Texel size: G_IM_SIZ_4b")
# 	elif bitmapTexelSize == G_IM_SIZ_8b:
# 		print("Texel size: G_IM_SIZ_8b")
# 	elif bitmapTexelSize == G_IM_SIZ_16b:
# 		print("Texel size: G_IM_SIZ_16b")
# 	elif bitmapTexelSize == G_IM_SIZ_32b:
# 		print("Texel size: G_IM_SIZ_32b")
# 	elif bitmapTexelSize == G_IM_SIZ_4c:
# 		print("Texel size: G_IM_SIZ_4c")
# 	elif bitmapTexelSize == G_IM_SIZ_DD:
# 		print("Texel size: G_IM_SIZ_DD")

# 	img = Image.new(mode="RGBA", size=(bitmapWidth, bitmapHeight))
# 	pixels = img.load()
# 	for i in range(img.size[0]):
# 		for j in range(img.size[1]):
# 			currentPixel = j * bitmapWidth + i
# 			if bitmapFormat == G_IM_FMT_I:
# 				value = int.from_bytes(bitmapBuffer[currentPixel:currentPixel + 1], ENDIANNESS)
# 				pixels[i,j] = (value, value, value, 255)
# 			elif bitmapFormat == G_IM_FMT_IA:
# 				if bitmapTexelSize == G_IM_SIZ_8b:
# 					value = int.from_bytes(bitmapBuffer[currentPixel + 0:currentPixel + 1], ENDIANNESS)
# 					intensity = (value >> 4) * 17
# 					alpha = (value & 0x0f) * 17
# 					pixels[i,j] = (intensity, intensity, intensity, alpha)
# 				elif bitmapTexelSize == G_IM_SIZ_16b:
# 					value = int.from_bytes(bitmapBuffer[currentPixel*2 + 0:currentPixel*2 + 1], ENDIANNESS)
# 					alpha = int.from_bytes(bitmapBuffer[currentPixel*2 + 1:currentPixel*2 + 2], ENDIANNESS)
# 					pixels[i,j] = (value, value, value, alpha)
# 			elif bitmapFormat == G_IM_FMT_RGBA:
# 				r = int.from_bytes(bitmapBuffer[currentPixel*4 + 0:currentPixel*4 + 1], ENDIANNESS)
# 				g = int.from_bytes(bitmapBuffer[currentPixel*4 + 1:currentPixel*4 + 2], ENDIANNESS)
# 				b = int.from_bytes(bitmapBuffer[currentPixel*4 + 2:currentPixel*4 + 3], ENDIANNESS)
# 				a = int.from_bytes(bitmapBuffer[currentPixel*4 + 3:currentPixel*4 + 4], ENDIANNESS)
# 				pixels[i,j] = (r, g, b, a)
# 			else:
# 				print("Unsupported format")
# 				sys.exit(1)
# 	img.save(outputPath)


# extractBitmapFromFile("/home/san/n64decomp/ssbd/bin/relocData/file-0030.bin", 0x26A0, "test.png")


# offsetsPerFile = {
# 	0: [
# 		{ "name": "colon_image", "offset": 0xDCF0 }
# 	],
# 	16: [
# 		{ "name": "characters_texture_image", "offset": 0x630 },
# 		{ "name": "name_border_image", "offset": 0x1230 },
# 		{ "name": "name_border_tall_image", "offset": 0x28F0 },
# 		{ "name": "works_background_image", "offset": 0x25058 },
# 		{ "name": "bio_underlay_texture_image", "offset": 0x30888 }
# 	],
# 	17: [
# 		{ "name": "type_cp_image", "offset": 0xFF8 },
# 		{ "name": "handicap_image", "offset": 0x1108 },
# 		{ "name": "cpu_level_image", "offset": 0x1218 },
# 		{ "name": "start_image", "offset": 0x1378 },
# 		{ "name": "press_image", "offset": 0x14D8 },
# 		{ "name": "infinity_image", "offset": 0x3EF0 },
# 		{ "name": "picker_time_image", "offset": 0x48B0 },
# 		{ "name": "picker_stock_image", "offset": 0x5270 },
# 		{ "name": "cursor_pointer_image", "offset": 0x76E8 },
# 		{ "name": "panel_door_l_image", "offset": 0xCDB0 },
# 		{ "name": "panel_door_r_image", "offset": 0xDFA0 },
# 		{ "name": "arrow_l_image", "offset": 0xECE8 },
# 		{ "name": "arrow_r_image", "offset": 0xEDC8 },
# 		{ "name": "ready_to_fight_image", "offset": 0xF448 },
# 		{ "name": "ready_to_fight_bg_image", "offset": 0xF530 },
# 		{ "name": "panel_image", "offset": 0x104B0 },
# 		{ "name": "back_image", "offset": 0x115C8 }
# 	],
# 	167: [
# 		{ "name": "animated_logo_0", "offset":  0x251D0 },
# 		{ "name": "animated_title_header_footer_0", "offset":  0x25350 },
# 		{ "name": "animated_press_start_0", "offset":  0x258D0 },
# 		{ "name": "slash_effect_gfx_2", "offset":  0x25E70 },
# 		{ "name": "slash_effect_gfx_3", "offset":  0x25F60 },
# 		{ "name": "animated_logo_1", "offset":  0x26020 },
# 		{ "name": "animated_title_header_footer_1", "offset":  0x26130 },
# 		{ "name": "animated_press_start_1", "offset":  0x262C0 },
# 		{ "name": "slash_effect_gfx_0", "offset":  0x287D8 },
# 		{ "name": "slash_effect_gfx_1", "offset":  0x28DA8 },
# 		{ "name": "logo_fire_effect_0", "offset":  0x28EB0 },
# 		{ "name": "logo_fire_effect_1", "offset":  0x29010 }
# 	]
# }


RELOC_DATA_FILE_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "../", "assets/relocData.bin")
VPK0_BIN_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), "vpk0")
RELOC_TABLE_SIZE = 0x63FC # in bytes
RELOC_TABLE_ENTRY_SIZE = 12 # in bytes

# read table
relocTable = []
pointerMapping = dict()
with open(RELOC_DATA_FILE_PATH, 'rb') as romFile:
	# romFile.seek(RELOC_TABLE_BEGIN)
	while romFile.tell() < RELOC_TABLE_SIZE:
		firstWord = int.from_bytes(romFile.read(4), ENDIANNESS)
		isVpk0 = True if firstWord & 0x80000000 == 0x80000000 else False
		dataOffset = firstWord & ~0x80000000
		relocInternOffset = int.from_bytes(romFile.read(2), ENDIANNESS)
		compressedSize = int.from_bytes(romFile.read(2), ENDIANNESS)
		relocExternOffset = int.from_bytes(romFile.read(2), ENDIANNESS)
		decompressedSize = int.from_bytes(romFile.read(2), ENDIANNESS)
		relocTable.append({"isVpk0": isVpk0, "dataOffset": dataOffset, "relocInternOffset": relocInternOffset, "compressedSize": compressedSize, "relocExternOffset": relocExternOffset, "decompressedSize": decompressedSize})

	# for i, entry in enumerate(relocTable):
	# 	relocIntern = entry['relocInternOffset']
	# 	chainLength = 0
	# 	while relocIntern != 0xFFFF:
	# 		romFile.seek(4 * relocIntern)
	# 		internDescReloc = int.from_bytes(romFile.read(2), ENDIANNESS)
	# 		internDescWordsNum = int.from_bytes(romFile.read(2), ENDIANNESS)
	# 		internDescPointer = int.from_bytes(romFile.read(4), ENDIANNESS)
	# 		relocIntern = internDescReloc
	# 		# print(f"{internDescPointer} -> {hex(4 * internDescWordsNum)}")
	# 		pointerMapping[internDescPointer] = 4 * internDescWordsNum
	# 		chainLength += 1
	# 		if chainLength == 1000:
	# 			print(f"reloc intern change too long for entry: {i}")
	# 			break


# write reloc files
os.makedirs(EXTRACTED_FILES_PATH, exist_ok=True)
with open(RELOC_DATA_FILE_PATH, 'rb') as romFile:
	for i, entry in enumerate(relocTable[:-1]):

		romFile.seek(RELOC_TABLE_SIZE + entry['dataOffset'])
		bytesToRead = relocTable[i + 1]['dataOffset'] - entry['dataOffset']
		fileBytes = romFile.read(bytesToRead)

		targetFilePath = f"{EXTRACTED_FILES_PATH}/{i}.bin"
		if entry['isVpk0']:
			with open('/tmp/vpk0', 'wb') as tempFile:
				tempFile.write(fileBytes)
				try:
					subprocess.run([VPK0_BIN_PATH, 'd', '/tmp/vpk0', targetFilePath], check=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
					print(f"decompressed {i}.vpk0 successfully")
				except Exception as e:
					print(f"failed to decompress {i}.vpk0")
					with open(targetFilePath[:-3] + "vpk0", 'wb') as targetFile:
						targetFile.write(fileBytes)
		else:
			with open(targetFilePath, 'wb') as targetFile:
				targetFile.write(fileBytes)


# for i, entry in enumerate(relocTable[:-1]):
# 	filePath = f"{EXTRACTED_FILES_PATH}/{i}.bin"
# 	if i in offsetsPerFile.keys():
# 		with open(filePath, 'rb') as relocFile:
# 			for j, offset in enumerate(offsetsPerFile[i]):
# 				relocFile.seek(offsetsPerFile[i][j]['offset'])
# 				if j < len(offsetsPerFile[i]) - 1:
# 					bytesToRead = offsetsPerFile[i][j + 1]['offset'] - relocFile.tell()
# 					assetBytes = relocFile.read(bytesToRead)
# 				else:
# 					assetBytes = relocFile.read()

# 				with open(f"{EXTRACTED_FILES_PATH}/{i}_{offsetsPerFile[i][j]['name']}.bin", 'wb') as assetFile:
# 					assetFile.write(assetBytes)
