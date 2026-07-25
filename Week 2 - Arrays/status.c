// Use 'echo $?' to check the return value or error message 
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
$ make greeting
$ ./greeting Shadow
Hello, Shadow
$ ./greeting Efiom
Hello, Efiom
$ ./greeting
Hello, (null)
$
- *** 'echo $?' can be used to see the return value ***
$ echo $?
0
$
*
- *** run 'echo $?' when there's an error message to see the return value ***
$ ./status
Missing command-line argument
$ echo $?
1
$
/
