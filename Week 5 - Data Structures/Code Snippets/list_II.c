// Use realloc() to resize existing memory
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    // Sanity check
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // In case you change your mind and want space for 4 integers
    // Do so by copying list[i] into a temporary variable
    // Use realloc()
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    tmp[3] = 4;

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Now that list is pointing to the new location(tmp)
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