// Change meow function to take in some input, n, and meow n times.
#include <stdio.h>

// Prototype
// n represent an integer input.
void meow(int n);

int main(void)
{
    // Call the meow function.
    meow(5);
}

void meow(int n)
// Define the meow function meow(n).
{
    for (int i = 0; i < 5; i++)
    {
        printf("meow\n");
    }
}


/*

- The abstraction here leads to better design, since we now have the flexibility to reuse our meow function in multiple places in the future.
Terminal Output
$ make meow
$ ./meow
meow
meow
meow
meow
meow
$ 
*/