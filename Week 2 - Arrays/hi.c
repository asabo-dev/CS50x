// Print 'char' as 'int' type
#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", c1, c2, c3);
}

/*
Terminal Output
$ make hi
$ ./hi
72 73 33
$

*/
