"""
the idea is to provide the command line string and have the entire code directly produced for copy paste
"""

import sys

def printPython():
	print("def runfork(cmd_line_arr):")
	print("\tfor line in cmd_line_arr:")
	print("\t\tsp.run(line)")

def printC():

def	main():
	av = sys.argv
	ac = len(av)
	if ac != 3: print("Usage: python3 app.py py \"echo hello\"")
	lang = av[1]
	cmd_line = av[2]
	#cmd_line = "echo hello"
	printPython(cmd_line)

if __name__ == "__main__":main()
