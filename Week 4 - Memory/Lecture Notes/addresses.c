// Introducing Pointers to show the location of a variable
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
}

/*
Terminal Output
This prints out the address in memory where 'n' lives.
*p is a pointer to the address of variable(n)
$ make addresses
$ ./addresses
0x7fff92aeb3ac
*/