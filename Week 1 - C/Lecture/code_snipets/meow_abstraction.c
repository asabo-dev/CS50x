#include <stdio.h>

// Prototype
void meow(void);

int main(void)
{
    for (int i = 0; i < 7; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}

/*
- Declare meow function first with a prototype, before using it in main, and actually define it after.
- Prototype (snapshot) of the function is placed at the top to alert the program that such a functions exists later in the program.
- Create a function called 'meow'.
- You can call the function within your code.

Terminal Output
$ make meow
$ ./meow
meow
meow
meow
meow
meow
meow
meow
$ 
*/