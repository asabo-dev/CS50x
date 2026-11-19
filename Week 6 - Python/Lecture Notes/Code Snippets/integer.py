# Using try & exception to catch errors

try:
    n = int(input("Integer: "))
    print("Integer")
except ValueError:
    print("Not integer")

"""
Terminal Output
Code Snippets $ python3 integer.py
Integer: 5
Integer
Code Snippets $ python3 integer.py
Integer: cat
Not integer 
"""
