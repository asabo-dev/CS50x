# Index into dictionaries using strings

people = [
    # people is a list containing dictionaries
    {"name": "Efiom", "number": "+23481679905"},
    {"name": "Zion", "number": "+60176180808", "email": "zefiom@gmail.com"},
    {"name": "Tram", "number": "+60112567387"}
]

name = input("Name: ")

for person in people:
    if person["name"] == name:
        number = person["number"]
        email = person["email"]
        print(f"Found {name}: {number}")
        print(f"{name}: {email}")
        break
else:
    print("Not Found")


"""
$ python3 phonebook_II.py
Name: Zion
Found Zion: +60176180808
Zion: zefiom@gmail.com
"""