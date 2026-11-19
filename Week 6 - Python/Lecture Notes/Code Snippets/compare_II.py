# Python implementation of comparing two strings

s = input("s: ")
t = input("t: ")

if s == t:
    print("Same")
else:
    print("Different")


"""
Terminal Output
Code Snippets $ python3 compare_II.py
s: cat
t: cat
Same
Code Snippets $ python3 compare_II.py
s: dog
t: cat
Different
Code Snippets $ 
"""

"""
Implementation in C 
// Conditionals, Boolean expressions, relational operators

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for integers
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    // Compare integers
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}

"""
          