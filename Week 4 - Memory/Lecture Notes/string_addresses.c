// Use char * instead of string s = "".
#include <stdio.h>

int main(void)
{
    char *s = "Hi!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);

}

/*
Terminal Output
$ ./string_addresses
H
i
!
$ 
*/