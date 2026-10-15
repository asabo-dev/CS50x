// Store string input using malloc() and scanf()
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(4);
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}

/*
Terminal Output
$ make get
$ ./get
s: Hi!
s: Hi!
*/
