// Use 'do-while' loop to make sure that input is not a negative number.
#include <cs50.h>
#include <stdio.h>

void meow(int times);

int main(void)
{
    // Declare Variable 'n'.
    int n;
    do
    {
        // Prompt user for a positive number
        n = get_int("What's n? ");
    }
    while (n < 0);

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
What's n? 5
mmmeeeeeoooww
mmmeeeeeoooww
mmmeeeeeoooww
mmmeeeeeoooww
mmmeeeeeoooww
$ 
*/