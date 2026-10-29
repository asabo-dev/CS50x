// This program demonstrates how to allocate more memory
// Extra space is created to accomodate one more integer
// The program demonstrate good memory management using free()
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Dynamically allocate a guess of the amount of memory needed
    // 3 is the number of integers
    // sizeof(int) represents the number of bits needed (3 * 4 = 12 bits)

    int *list = malloc(3 * sizeof(int));
    // Sanity check
    if (list == NULL)
    {
        return 1;
    }

    /*
    Using pointer arithmetic
    *list = 1;
    *(list + 1) = 2;
    *(list + 2) = 3;
    */

    // This is simplified using syntatic sugar
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time passes
    // You change your mind and want space for 4 integers
    // Do so by copying list[i] into a temporary variable
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // Copy new list into old list
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    tmp[3] = 4;

    // Free original list
    free(list);

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Now that list is pointing to the new location(tmp[i])
    free(list);

    return 0;
}

/*
Terminal Output
$ make list
$ ./list
1
2
3
4
$ 
*/