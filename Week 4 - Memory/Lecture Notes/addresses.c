/*A simple program to print a variable(n)*/
#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%p\n", &n);
}

/*
Terminal Output
This prints out the address in memory where 'n' lives.
$ make addresses
$ ./addresses
0x7fff92aeb3ac
*/