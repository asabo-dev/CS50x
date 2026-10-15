// Prints the value of an integer
// This is just a regular program that will be modified to get rid of get_int()
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n: ");
    printf("n: %i\n", n);
}

/*
Terminal Output
$ make get
$ ./get
n: 50
n: 50
$ 
*/