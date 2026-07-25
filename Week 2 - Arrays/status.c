// Investigate the actual value of 'int' in 'int main(void)'
// Returned value of 0 means success, while any other integer means some form of failure
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // if the number of arguments in main() != 2, print a warning
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    // else if argc = 2, then proceed and return success value: 0
    printf("hello, %s\n", argv[1]);
    return 0;
}

/*
Terminal Output
$ make status
$ ./status Efiom
hello, Efiom
$

*/
