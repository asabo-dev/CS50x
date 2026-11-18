"""
Implementation in C language
// Addition with int

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Perform addition
    printf("%i\n", x + y);
}

"""
# Impementation in Python
# Prompt user for x
x = int(input("x: "))

# Prompt user for y
y = int(input("y: "))

# Perform addition
print("x + y =", x + y)

"""
Terminal Output
Code Snippets $ python3 calculator.py
x: 647
y: 23
x + y = 670
Code Snippets $ 
"""