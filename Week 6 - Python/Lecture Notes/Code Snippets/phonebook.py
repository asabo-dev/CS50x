# Implementation of dictionary in Python

people = {
    "Efiom": "+23481679905",
    "Zion": "+60176180808",
    "Tram": "+60112567387"
}

name = input("Name: ")

if name in people:
    number = people[name]
    print(f"Found {name}: {number}")
else:
    print("Not Found")


"""
Terminal Output
$ python3 phonebook.py
Name: Zion
Found Zion: +60176180808
Code Snippets $ python3 phonebook.py
Name: babe
Not Found
"""