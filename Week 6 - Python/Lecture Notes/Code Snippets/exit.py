# Exit status in Python
# This is the same as 'return 1' in C

import sys

if len(sys.argv) != 2:
    print("Missing command-line argument")
    sys.exit(1)

print(f"hello, {sys.argv[1]}")
sys.exit(0)


"""
Terminal Output
$ python3 exit.py
Missing command-line argument
$ python3 exit.py Zion
hello, Zion
"""