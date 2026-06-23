#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? ");
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}

/*

- || stands for the OR conditional.
- Single quotes is used for Char values just as double quotes is used for Strings.
- The program is an example for agreement prompts such as contracts or software.

Terminal Execution
$ make agree
$ ./agree
Do you agree? N
Not agreed.
$ ./agree
Do you agree? y
Agreed.
$ 

*/