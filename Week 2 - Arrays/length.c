// Determine the length(n) of a string
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");

    // n represents length of characters of the string
    int n = 0;
    // While the last value of n is not NUL('\0')
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}

/*
Terminal Output
$ make length
$ ./length
What's your name? Ufokobong
9
$ ./length
What's your name? efiom
5
*/