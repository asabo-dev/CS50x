// Copying the address of a string
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = s;

    t[0] = toupper(*t);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

}

/*
Terminal Output
$ make copy
$ ./copy
s: hi!
s: Hi!
t: Hi!
$ 

* It can be seen that the output of the variable 's' is capitalized 
because it now share the same address in memory with variable 't'.
*/