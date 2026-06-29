// Create a function called 'meow'.
// Since 'int n' is declared inside 'main', the variable name can be changed inside meow()...this is optional.
#include <cs50.h>
#include <stdio.h>

void meow(int times);

int main(void)
{
    // Ask for integer input.
    int n = get_int("What's n? ");
    // Call function.
    meow(n);
}


// Declare the function 'meow'.
void meow(int times)
{
    for (int i = 0; i < times; i++)
    printf("mmmeeeeeoooww\n");
}


/*
Terminal Output:
$ make meow_function
$ ./meow_function
What's n? 3
mmmeeeeeoooww
mmmeeeeeoooww
mmmeeeeeoooww
$ make meow_function
$ ./meow_function
What's n? 4
mmmeeeeeoooww
mmmeeeeeoooww
mmmeeeeeoooww
mmmeeeeeoooww
$ 
*/