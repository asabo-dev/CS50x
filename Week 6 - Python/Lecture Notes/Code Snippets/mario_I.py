# Prints a column of n bricks with a loop

while True:
    n = int(input("Integer: "))
    if n > 0:
        break

for i in range(n):
    print("#")


"""
Terminal Output
Code Snippets $ python3 mario_I.py
Integer: 4
#
#
#
#
"""


"""
// Prints a column of n bricks with a loop in C

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get positive height from user
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    // Print column of bricks
    for (int i = 0; i < n; i++)
    {
        printf("#\n");
    }
}
"""