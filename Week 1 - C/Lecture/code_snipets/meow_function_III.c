// Use 'do-while' loop to make sure that input is not a negative number.
#include <cs50.h>
#include <stdio.h>

int get_n(void);
void meow(int times);

int main(void)
{
    // Call the function get_n() to prompt user for a positive integer.
    int n = get_n();

    // Call function 'meow' to print output.
    meow(n);
}

// Declare the function 'get_n'.
int get_n(void)
{
    // Declare Variable 'n' inside the scope of get_n().
    int n;
    // 'do-while' loop.
    do
    {
        n = get_int("What's n? ");
    }
    while (n < 0);
    return n;
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
What's n? 4
mmmeeeeeoooww
mmmeeeeeoooww
mmmeeeeeoooww
mmmeeeeeoooww
$ make meow_function
$ ./meow_function
What's n? 3
mmmeeeeeoooww
mmmeeeeeoooww
mmmeeeeeoooww
$ 
*/