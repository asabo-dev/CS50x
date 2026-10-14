// Fails to swap two integers
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

/*
Terminal Output
$ make swap
$ ./swap
x is 1, y is 2
x is 1, y is 2
$
* The swap operation failed!
* This failed because of the concept of 'scope'
*/
