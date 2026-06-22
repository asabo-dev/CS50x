// '%s' serves as a placeholder for the expected input

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}

/*
Terminal Commands
#include <cs50.h> allows the use of CS50 library to call functions.

$ make input -- prompts compiler to translate source code to machine code
$ ./input -- executes the source code.
What's your name? Efiom
hello, Efiom
$

*/
