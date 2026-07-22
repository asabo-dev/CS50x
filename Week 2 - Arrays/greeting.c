// Print a simple greeting
// Change prototype for main()
// Add command line arguments
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    printf("Hello, %s\n", argv[1]);
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
*/
