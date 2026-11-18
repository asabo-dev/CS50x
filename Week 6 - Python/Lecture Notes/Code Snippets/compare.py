"""
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

# Python implementation of comparison between 2 integers
# Promt user for x
x = int(input("x: "))

# Promt user for y
y = int(input("y: "))

if x < y:
    print("x is less than y")
elif x > y:
    print("x is greater than y")
else:
    print("x is equal to y")
    

"""
Code Snippets $ python3 compare.py   
x: 5
y: 7
x is less than y
Code Snippets $ python3 compare.py
x: 4
y: 4
x is equal to y
Code Snippets $ python3 compare.py
x: 12345
y: 34
x is greater than y
Code Snippets $ 
"""