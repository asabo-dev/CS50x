# Logical operators in Python
s = input("Do you agree? ")

if s == "Y" or s == "y":
    print("Agreed")
else: 
    print("Not agreed")

"""
Terminal Output
Code Snippets $ python3 agree.py
Do you agree? y
Agreed
Code Snippets $ python3 agree.py
Do you agree? Y
Agreed
Code Snippets $ python3 agree.py
Do you agree? Z
Not agreed
"""

"""
Implementation in C
// Logical operators

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c = get_char("Do you agree? ");

    // Check whether agreed
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else
    {
        printf("Not agreed.\n");
    }
}

"""