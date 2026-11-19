# Uppercases a string in Python 

"""
before = input("Before: ")
print("After: ", end="")
for c in before:
    print(c.upper(), end="")
print()

Terminal Output
Code Snippets $ python3 uppercase.py
Before: dog
After: DOG
"""

before = input("Before: ") 
after = before.upper()
print(f"After: {after}")

"""
Terminal Output
Code Snippets $ python3 uppercase.py
Before: zion
After: ZION
"""

"""
// Uppercases string using ctype library in C

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}
"""