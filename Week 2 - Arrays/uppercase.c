// Change the characters of a string to uppercase
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before:  ");
    printf("After:   ");
    for (int i = 0, n = strlen(s); i < n; i++ )
    {
        // If s[i] is lowercase
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Difference between 'a' and 'A' in ASCII is 32
            printf("%c", s[i] - 32);
        }

        // Else if not lowercase
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

/*
Terminal Output
$ make uppercase
$ ./uppercase
Before:  okon
After:   OKON
$ ./uppercase
Before:  tia
After:   TIA
$ 
*/
