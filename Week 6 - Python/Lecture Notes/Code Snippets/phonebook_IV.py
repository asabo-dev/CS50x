# Write to a csv file in a more pythonic way

# Import the whole csv library to have access to all its methods
import csv

name = input("Name: ")
number = input("Number: ")

with open("phonebook_II.csv", "a") as file:

    # Read from csv pre-assigned columns 'name' & 'number
    writer = csv.DictWriter(file, fieldnames=["name", "number"])
    writer.writerow({"name": name, "number": number})


"""
Terminal Output
$ code phonebook_II.csv
$ python3 phonebook_IV.py
Name: Zion
Number: +60176180808
Name: Tram
Number: +60112567387
$ python3 phonebook_IV.py
Name: Efiom
Number: +23481679905
"""