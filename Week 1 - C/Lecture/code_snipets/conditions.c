#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user for x and y
    int x = get_int("x: ");
    int y = get_int("y: ");

    // compare x and y
    if (x > y)
    {
        printf("x is greater than y\n");
    }
    else if (x < y)
    {
        printf("x is less than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}

/*
Terminal Execution Example:
$ make conditions
$ ./conditions
x: 5
y: 7
x is less than y
$ ./conditions
x: 19
y: 3
x is greater than y
$ ./conditions
x: 5
y: 5
x is equal to y
$ 
*/