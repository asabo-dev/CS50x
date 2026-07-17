// Using printf() to debug why 4 bricks instead of 3,
is being printed as output.
#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 3; i++)
    {
        // Use printf() to check the values of i
        printf("i is %i\n", i);
        printf("#\n");
    }
}

/*
Terminal Output
$ make bricks
$ ./bricks
i is 0
#
i is 1
#
i is 2
#
i is 3
#
$ 

*/