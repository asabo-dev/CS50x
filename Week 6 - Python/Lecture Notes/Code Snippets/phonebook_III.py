# Writing(creating) into a csv file in Python

import csv

file = open("phonebook.csv", "a")

name = input("Name: ")
number = input("Number: ")

# Turn file named 'writer' to a csv that can be written to
writer = csv.writer(file)
writer.writerow([name, number])

file.close()


"""
Terminal Output
$ code phonebook.csv
$ python3 phonebook_III.py
Name: Efiom
Number: +23481679905
$ python3 phonebook_III.py
Name: Tram
Number: +60112567387
"""