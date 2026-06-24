#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf("%i\n", i);
}

// Prompt user for positive integer
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Positive Integer: ");
    }
    while (n < 1);
    return n;
}

/*
- With a 'do-while' loop, our program will do something first, then check some condition, and repeat while the condition is true.
- A while loop, on the other hand, will check the condition first.
- Declare integer n outside the do-while loop, since we need to use it after the loop ends.
- The scope of a variable in C refers to the context, or lines of code, within which it exists. 
- The function get_positive_int now starts with int, indicating that it has a return value of type int.
- In get_positive_int, we have a new keyword, return, to return the value (n) to wherever the function was called.
Terminal Output
$ make get_positive_integer
$ ./get_positive_integer
Positive Integer: 78
78
$ 
*/