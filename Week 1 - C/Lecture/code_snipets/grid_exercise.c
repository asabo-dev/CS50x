// Design a block grid for Mario using n rows and j columns
#include <cs50.h>
#include <stdio.h>

int get_number(string prompt);

int main(void)
{
    int n = get_number("What's n? ");
    int k = get_number("What's k? ");

    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < k; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// Prompt for a positive integer < 10
int get_number(string prompt)
{
    int n;

    do
    {
        n = get_int("%s", prompt);
    }
    while (n <= 0 || n >= 10);

    return n;
}

/*
Terminal Prompt
$ make mario
$ ./mario
What's n? -4
What's n? 4
What's k? 0
What's k? 10
What's k? -3
What's k? 7
#######
#######
#######
#######
$ 
*/