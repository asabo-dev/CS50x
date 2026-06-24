#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}

/*
- When using the 'for' loop the are 3 essential parts.
- First initialize a variable 'i' = 0, always count from 0.
- Secondly, give a condition/limit such as (i < 3) to prevent an infinite loop.
- Increment the value of i after each loop (i += 1 or i++).

Terminal Output
$ make meow
$ ./meow
meow
meow
meow
$ 
*/