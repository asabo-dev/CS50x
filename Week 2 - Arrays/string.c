// Print a simple string and 'char' characters
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%c%c%c\n", s[0], s[1], s[2]);
}

/*
Terminal Output
$ make string
$ ./string
HI!
$
*/
