// Change the characters of a string to uppercase
// Use <ctype.h> library
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before:  ");
    printf("After:   ");
    for (int i = 0, n = strlen(s); i < n; i++ )
    {
        // If s[i] is lowercase
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
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
Before:  ufok
After:   UFOK
$
*/
