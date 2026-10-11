// Using 'malloc' and 'free' function to copy strings
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = malloc(strlen(s) + 1);

    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}

/*
Terminal Output
$ make copy_II
$ ./copy_II
s: zion
s: zion
t: Zion
$
* In this case the first letter in 't' is capitalzied while
the first in 's' remains lower case.
*/
