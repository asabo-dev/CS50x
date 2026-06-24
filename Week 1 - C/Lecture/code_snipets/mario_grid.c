// Print grid using nested loops
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        // Nested loop
        for (int j = 0; j < 3; j++)
        {
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
- if i=7 and j=4
$ make mario_grid
$ ./mario_grid
####
####
####
####
####
####
####
$ 
*/