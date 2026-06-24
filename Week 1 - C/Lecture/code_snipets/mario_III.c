// Print n number of question marks '?'.
// Use 'do-while' loop.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get positive integer from user.
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    // Print out that many question marks.
    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}


/*

Terminal Output
$ make mario
$ ./mario
Width: 4
????
$ ./mario
Width: 13
?????????????
$ 
*/