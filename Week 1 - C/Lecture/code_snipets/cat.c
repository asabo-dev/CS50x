// Use of 'break' and 'continue' in 'while' loops.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declare a Variable called "n".
    // n is Declared to be inside the scope of 'main'; entire program.
    int n;
    while(true)
    {
        // No need to declare data type (int n) again.
        n = get_int("What's n? ");
        if (n < 0)
        {
            // If (n < 0), continue with the loop and prompt user again.
            continue;
        }
        else
        {
            // Break the loop (prompt) and execute the rest of the code.
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Neow\n");
    }
}


/*
Terminal Output
$ make cat
$ ./cat
What's n? -1
What's n? -5
What's n? -100
What's n? 2
Neow
Neow
$ ./cat
What's n? -7
What's n? 4
Neow
Neow
Neow
Neow
*/