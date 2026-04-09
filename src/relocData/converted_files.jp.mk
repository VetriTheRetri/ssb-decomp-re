# List of relocData file IDs converted to C source for the JP build.
#
# Note: JP and US use different file ID spaces. The JP descriptions are in
# tools/relocFileDescriptions.jp.txt - when converting a file, run:
#     python3 tools/genRelocDataC.py <id> --extract-data --version jp
#
# Files in this list either:
#   1. Have a JP binary that is byte-identical to the corresponding US binary, or
#   2. Differ only in texture content (sprite struct/layout matches, only the
#      texture pixel data differs — texture .inc.c files are extracted at
#      build time from the active version's binary, so this works naturally).
#
# Files containing committed .data.c blobs (raw byte arrays from a one-shot
# extraction) cannot be enabled for JP unless those blobs are version-aware
# or the JP binary happens to be byte-identical. Several character/move data
# files (MarioMain, FoxSpecial1, etc.) fall in this category.
RELOC_C_FILES := 0 1 2 3 4 5 10 13 14 19 20 22 23 24 25 26 27 28 32 33 35 36 37 38 40 41 42 43 44 45 46 48 49 50 51 52 53 54 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 72 74 75 76 78 79 80 81 82 83 85 87 88 89 90 92 93 94 95 99 136 151 161 163 164 165 166 168 169 171 172 174 175 193 231 233 241 242 246 247 248 249 250 252 253 254 255 256 257 258 259 260 261 262 263 264 265 266 267 268 269 275 288 294 295 303 305 307 308 313 314 316 317 320 321 322 323 324 325 326 327 328 329 330 331 474
