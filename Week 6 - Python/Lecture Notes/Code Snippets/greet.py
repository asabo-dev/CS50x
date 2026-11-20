# Command-line arguments in Python
from sys import argv 

# if the user types in 2 arguments
if len(argv) == 2:
    # if name is the 2nd argument(word) user types in
    name = argv[1]
    print(f"Hello, {name}")
else: 
    print("hello, world!")


"""
Terminal Output
$ python3 greet.py (only one argument)
hello, world!
$ python3 greet.py Lana (2 command-line arguments)
Hello, Lana
"""