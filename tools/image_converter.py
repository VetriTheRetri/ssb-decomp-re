# adapted from https://raw.githubusercontent.com/pmret/papermario/master/tools/build/img/build.py

import sys
import argparse

from itertools import zip_longest
from math import floor

import png


def pack_color(r, g, b, a):
	r = r >> 3
	g = g >> 3
	b = b >> 3
	a = a >> 7

	return (r << 11) | (g << 6) | (b << 1) | a


def rgb_to_intensity(r, g, b):
	return round(r * 0.2126 + g * 0.7152 + 0.0722 * b)


def iter_in_groups(iterable, n, fillvalue=None):
	items = [iter(iterable)] * n
	return zip_longest(*items, fillvalue=fillvalue)


def reversed_if(iterator, cond):
	if cond:
		return reversed(list(iterator))
	return iterator


class Converter():
	def __init__(self, mode, infile, outfile, flip_y=False):
		self.mode = mode
		self.infile = infile
		self.outfile = outfile
		self.flip_y = flip_y

		self.warned = False

	def warn(self, msg):
		if not self.warned:
			self.warned = True
			print(self.infile.name + ": warning: " + msg, file=sys.stderr)

	def _convert_rgba32(self, img):
		for row in reversed_if(img.asRGBA()[2], self.flip_y):
			self.outfile.write(row)

	def _convert_rgba16(self, img):
		for row in reversed_if(img.asRGBA()[2], self.flip_y):
			for r, g, b, a in iter_in_groups(row, 4):
				if a not in (0, 0xFF):
					self.warn("Alpha mask mode but translucent pixels used")
				color = pack_color(r, g, b, a)
				self.outfile.write(color.to_bytes(2, byteorder="big"))

	def _convert_ci4(self, img):
		for row in reversed_if(img.read()[2], self.flip_y):
			for a, b in iter_in_groups(row, 2):
				byte = (a << 4) | b
				byte = byte & 0xFF
				self.outfile.write(byte.to_bytes(1, byteorder="big"))

	def _convert_ci8(self, img):
		for row in reversed_if(img.read()[2], self.flip_y):
			self.outfile.write(row)

	def _convert_palette(self, img):
		img.preamble(True)
		palette = img.palette(alpha="force")

		for r, g, b, a in palette:
			if a not in (0, 0xFF):
				self.warn("Alpha mask mode but translucent pixels used")

			color = pack_color(r, g, b, a)
			self.outfile.write(color.to_bytes(2, byteorder="big"))

	def _convert_ia4(self, img):
		for row in reversed_if(img.asRGBA()[2], self.flip_y):
			for c1, c2 in iter_in_groups(iter_in_groups(row, 4), 2):
				i1 = rgb_to_intensity(*c1[:3])
				a1 = c1[3]

				i2 = rgb_to_intensity(*c2[:3])
				a2 = c2[3]

				i1 = i1 >> 5
				i2 = i2 >> 5

				if a1 not in (0, 0xFF) or a2 not in (0, 0xFF):
					self.warn("Alpha mask mode but translucent pixels used")
				if c1[0] != c1[1] != c1[2]:
					self.warn("Grayscale mode but image is not")
				if c2[0] != c2[1] != c2[2]:
					self.warn("Grayscale mode but image is not")

				a1 = 1 if a1 > 128 else 0
				a2 = 1 if a2 > 128 else 0

				h = (i1 << 1) | a1
				l = (i2 << 1) | a2

				byte = (h << 4) | l
				self.outfile.write(byte.to_bytes(1, byteorder="big"))

	def _convert_ia8(self, img):
		for row in reversed_if(img.asRGBA()[2], self.flip_y):
			for r, g, b, a in iter_in_groups(row, 4):
				i = rgb_to_intensity(r, g, b)

				i = floor(15 * (i / 0xFF))
				a = floor(15 * (a / 0xFF))

				if r != g != b:
					self.warn("Grayscale mode but image is not")

				byte = (i << 4) | a
				self.outfile.write(byte.to_bytes(1, byteorder="big"))

	def _convert_ia16(self, img):
		for row in reversed_if(img.asRGBA()[2], self.flip_y):
			for r, g, b, a in iter_in_groups(row, 4):
				i = rgb_to_intensity(r, g, b)

				if r != g != b:
					self.warn("Grayscale mode but image is not")

				self.outfile.write(bytes((i, a)))

	def _convert_i4(self, img):
		for row in reversed_if(img.asRGBA()[2], self.flip_y):
			for c1, c2 in iter_in_groups(iter_in_groups(row, 4), 2):
				if c1[3] != 0xFF or c2[3] != 0xFF:
					self.warn("discarding alpha channel")

				i1 = rgb_to_intensity(*c1[:3])
				i2 = rgb_to_intensity(*c2[:3])

				i1 = floor(15 * (i1 / 0xFF))
				i2 = floor(15 * (i2 / 0xFF))

				if c1[0] != c1[1] != c1[2]:
					self.warn("Grayscale mode but image is not")
				if c2[0] != c2[1] != c2[2]:
					self.warn("Grayscale mode but image is not")

				byte = (i1 << 4) | i2
				self.outfile.write(byte.to_bytes(1, byteorder="big"))

	def _convert_i8(self, img):
		for row in reversed_if(img.asRGBA()[2], self.flip_y):
			for r, g, b, a in iter_in_groups(row, 4):
				if a != 0xFF:
					self.warn("Discarding alpha channel")
				if r != g != b:
					self.warn("Grayscale mode but image is not")

				i = rgb_to_intensity(r, g, b)
				self.outfile.write(i.to_bytes(1, byteorder="big"))

	def convert(self):
		img = png.Reader(self.infile)

		if self.mode == "rgba32":
			self._convert_rgba32(img)
		elif self.mode == "rgba16":
			self._convert_rgba16(img)
		elif self.mode == "ci8":
			self._convert_ci8(img)
		elif self.mode == "ci4":
			self._convert_ci4(img)
		elif self.mode == "palette":
			self._convert_palette(img)
		elif self.mode == "ia4":
			self._convert_ia4(img)
		elif self.mode == "ia8":
			self._convert_ia8(img)
		elif self.mode == "ia16":
			self._convert_ia16(img)
		elif self.mode == "i4":
			self._convert_i4(img)
		elif self.mode == "i8":
			self._convert_i8(img)
		else:
			print("Unsupported mode", file=sys.stderr)
			sys.exit(1)


if __name__ == "__main__":
	formats = [
		"rgba16", "rgba32",
		"ci4", "ci8",
		"i4", "i8",
		"ia4", "ia8", "ia16",
		"palette",
	]
	parser = argparse.ArgumentParser(exit_on_error=True)

	parser.add_argument("infile", help="input file", type=str)
	parser.add_argument("outfile", help="output file", type=str)
	parser.add_argument("--format", help="image format", type=str, choices=formats, default=None)
	parser.add_argument("--flip-y", help="flip y?", action="store_true")
	args = parser.parse_args()

	formatToUse = args.format
	if formatToUse is None and args.infile.count('.') > 1: # get format from file name if not provided
		formatToUse = args.infile.replace('.png', '')
		formatToUse = formatToUse[formatToUse.rfind('.') + 1:]
	if formatToUse is None or formatToUse not in formats:
		print(f"Format not recognized, must be one of: {formats}")
		sys.exit()

	with open(args.infile, 'rb') as inputFile, open(args.outfile, 'wb') as outputFile:
		converter = Converter(formatToUse, inputFile, outputFile, flip_y=args.flip_y)
		converter.convert()

	# automatically create palette as well if ci file and format part of output file name
	if formatToUse in ['ci4', 'ci8'] and ('.ci4.' in args.outfile or '.ci8.' in args.outfile):
		palettefile = args.outfile.replace('.ci4.', '.palette.').replace('.ci8.', '.palette')
		with open(args.infile, 'rb') as inputFile, open(palettefile, 'wb') as outputFile:
			converter = Converter("palette", inputFile, outputFile, flip_y=args.flip_y)
			converter.convert()

