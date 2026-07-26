// Change the characters of a string to uppercase
// Use <ctype.h> library
// Simplify code to print any character that is not uppercase
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
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}

/*
Terminal Output
$ make uppercase
$ ./uppercase
Before:  mbOk
After:   MBOK
$ ./uppercase
Before:  udoM
After:   UDOM
$
*/
