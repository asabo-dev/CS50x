// Draw a Mario pyramid using recursion
// Recursion means calling a function on itself
// This is a cleaner code compared to iteration.c
#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int n)
{
    // Base case
    if (n <= 0)
    {
        return;
    }
    // Print pyramid of height n - 1
    draw(n - 1);

    // Print one more row
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

/*
Terminal Output
$ make recursion
$ ./recursion
Height: 4
#
##
###
####

*/