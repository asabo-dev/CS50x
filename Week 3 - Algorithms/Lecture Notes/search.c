// A program that searches for a number (50) in an array of numbers
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n = get_int("Number: ");

    for (int i = 0; i < 7; i++)
    {
         if (numbers[i] == n)
            {
                printf("Found\n");
                return 0;
            }
    }
    printf("Not found\n");
    return 1;
}

/*
Terminal Output
$ make search
$ ./search
Number: 50
Found
$ ./search
Number: 67
Not found
$ 
*/
