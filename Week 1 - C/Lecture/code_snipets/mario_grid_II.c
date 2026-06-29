// Print grid using nested loops
// rename variable 'i' to 'row' and 'j' to column.
// You can declare 'int n' at the start of 'main'.
#include <stdio.h>

int main(void)
{
    int n = 3;
    
    // For each row
    for (int row = 0; row < n; row++)
    {
        // For each column
        for (int column = 0; column < n; column++)
        {
            // Print one brick
            printf("#");
        }
        printf("\n");
    }
}


/*
Terminal Output:
$ make mario_grid
$ ./mario_grid
###
###
###
*/


