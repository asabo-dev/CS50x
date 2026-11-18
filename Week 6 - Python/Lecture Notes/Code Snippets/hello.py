# A simple python script that gets user input
# For CS50: from CS50 import get_string
# Use get_string() instead of input()
answer = input("What's your name? ")
print(f"hello, {answer}")


"""
// Equivalent code in C

#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}
"""