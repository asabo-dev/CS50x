#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_float("x =  ");
    float y = get_float("y =  ");

    // With %.50f, we can specify the number of decimal places displayed.
    printf("%.50f\n", x / y);
}

/*
Terminal Output:
- This is called floating-point imprecision, where we don’t have enough bits to store all possible values.
- The computer has to store the closest value it can (approximate value). 
- This happens because computers are finite in thier capacity.

- When printf("%f\n", x / y);
$ make imprecision
$ ./imprecision
x =  1
y =  10
0.100000

- When printf("%.10f\n", x / y);
$ make imprecision
$ ./imprecision
x =  1
y =  10

- When printf("%.50f\n", x / y);
$ make imprecision
$ ./imprecision
x =  1
y =  10
0.10000000149011611938476562500000000000000000000000
$ 
*/