import sys

for line in sys.stdin:
	if "cfe: Warning" in line:
		i = line.find("cfe: Warning")
		l = len("cfe: Warning")
		print(f"{line[:i]}cfe: \033[93mWarning\033[00m{line[i + l:]}", file=sys.stderr)
	elif "cfe: Error" in line:
		i = line.find("cfe: Error")
		l = len("cfe: Error")
		print(f"{line[:i]}cfe: \033[91mError\033[00m{line[i + l:]}", file=sys.stderr)
	else:
		print(line, file=sys.stderr)
