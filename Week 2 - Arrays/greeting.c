// Print a simple greeting
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("what is your name? ");
    printf("Hello, %s\n", s);
}

/*
Terminal Output
$ make greeting
$ ./greeting
what is your name? Efiom
Hello, Efiom
$ 
*/
