# Use of list in string comparison

s = input("Do you agree? ")

if s.lower() in ["y", "yes"]:
    print("Agreed")
else: 
    print("Not agreed")


"""
Terminal Output
Code Snippets $ python3 agree_II.py
Do you agree? YES
Agreed
Code Snippets $ python3 agree_II.py
Do you agree? no
Not agreed
Code Snippets $ python3 agree_II.py
Do you agree? y
Agreed
"""