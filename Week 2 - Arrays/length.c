// Determine the length(n) of a string
// Use a library function strlen()
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("What's your name? ");
    int n = strlen(name);
    printf("%i\n", n);
}

/*
Terminal Output
$ make length
$ ./length
What's your name? Lazarus
7
$ ./length
What's your name? Zion
4
$ 
*/
